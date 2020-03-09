import test from 'ava';
import { flatbuffers } from 'flatbuffers';

const { FlatbufferUtils } = require('../../../src/js/index');

const TopicData = require('../../../dist/flatbuffers/js/topicData_generated').ubii.topicData.TopicData;
const TopicDataContent = require('../../../dist/flatbuffers/js/topicData_generated').ubii.topicData.TopicDataContent;
const TopicDataRecord = require('../../../dist/flatbuffers/js/topicDataRecord_generated').ubii.topicData.TopicDataRecord;
const TopicDataRecordList = require('../../../dist/flatbuffers/js/topicDataRecord_generated').ubii.topicData.TopicDataRecordList;
const DataStructure = require('../../../dist/flatbuffers/js/dataStructure_generated').ubii.dataStructures.DataStructure;
const Timestamp = require('../../../dist/flatbuffers/js/timestamp_generated').ubii.dataStructures.Timestamp;
const Vector3 = require('../../../dist/flatbuffers/js/vector3_generated').ubii.dataStructures.Vector3;

/* helpers */

/*
let createFlatbufferTopicDataVector3 = (topicString, timestamp, vector3) => {
    let builder = new flatbuffers.Builder(0);

    let topic = builder.createString(topicString);

    DataStructure.startDataStructure(builder);
    DataStructure.addVector3(builder, Vector3.createVector3(builder, vector3.x, vector3.y, vector3.z));
    let dataStructure = DataStructure.endDataStructure(builder);

    TopicDataRecord.startTopicDataRecord(builder);
    TopicDataRecord.addTopic(builder, topic);
    TopicDataRecord.addTimestamp(builder, Timestamp.createTimestamp(builder, timestamp.seconds, timestamp.nanos));
    TopicDataRecord.addData(builder, dataStructure);
    let topicDataRecord = TopicDataRecord.endTopicDataRecord(builder);

    TopicData.startTopicData(builder);
    TopicData.addContentType(builder, TopicDataContent.topic_data_record);
    TopicData.addContent(builder, topicDataRecord);
    let topicData = TopicData.endTopicData(builder);

    builder.finish(topicData);
    let topicDataBuffer = builder.dataBuffer();
    return topicDataBuffer;
};
*/

let testBool = true;
let testStringList = ['one', 'two', 'three'];
let testVector3 = { x: 1.1, y: 2.2, z: 3.3 };

/**
 * Creates a TopicData object with the following data inside:
 * bool: true
 * stringList: ['one', 'two', 'three']
 * vector3: (1.1, 2.2, 3.3)
 * 
 * @param {*} topicString 
 * @param {*} timestamp 
 */
let createFlatbufferTopicData = (topicString, timestamp) => {
    let builder = new flatbuffers.Builder(0);

    let topic = builder.createString(topicString);
    let stringOne = builder.createString(testStringList[0]);
    let stringTwo = builder.createString(testStringList[1]);
    let stringThree = builder.createString(testStringList[2]);
    let stringList = DataStructure.createStringListVector(builder, [stringOne, stringTwo, stringThree]);

    DataStructure.startDataStructure(builder);
    DataStructure.addVector3(builder, Vector3.createVector3(builder, testVector3.x, testVector3.y, testVector3.z));
    DataStructure.addBool(builder, testBool);
    DataStructure.addStringList(builder, stringList);
    let dataStructure = DataStructure.endDataStructure(builder);

    TopicDataRecord.startTopicDataRecord(builder);
    TopicDataRecord.addTopic(builder, topic);
    TopicDataRecord.addTimestamp(builder, Timestamp.createTimestamp(builder, timestamp.seconds, timestamp.nanos));
    TopicDataRecord.addData(builder, dataStructure);
    let topicDataRecord = TopicDataRecord.endTopicDataRecord(builder);
    //console.info(topicDataRecord);
    //console.info('\n\n');

    let recordsListElements = TopicDataRecordList.createElementsVector(builder, [topicDataRecord]);
    let recordsList = TopicDataRecordList.createTopicDataRecordList(builder, recordsListElements);

    TopicData.startTopicData(builder);
    TopicData.addContentType(builder, TopicDataContent.topic_data_records);
    TopicData.addContent(builder, recordsList);
    let topicData = TopicData.endTopicData(builder);

    builder.finish(topicData);
    let topicDataBuffer = builder.dataBuffer();
    return topicDataBuffer;
};

let verifyTopicDataRecord = (test, record) => {
    let dataStructure = new DataStructure();
    let data = record.data(dataStructure);
    let vector3 = data.vector3(new Vector3());
    test.is(vector3.x().toFixed(1), testVector3.x.toFixed(1));
    test.is(vector3.y().toFixed(1), testVector3.y.toFixed(1));
    test.is(vector3.z().toFixed(1), testVector3.z.toFixed(1));

    test.is(data.bool(), testBool);

    test.is(data.stringListLength(), testStringList.length);
    test.is(data.stringList(0), testStringList[0]);
    test.is(data.stringList(1), testStringList[1]);
    test.is(data.stringList(2), testStringList[2]);
}

/* prepare tests */

/* run tests */

test('create a TopicData flatbuffer, then read it back in', t => {
    let topicString = '/my/test/topic';
    let timestamp = { seconds: 1, nanos: 2 };

    // create buffer
    let bufferTopicData = createFlatbufferTopicData(topicString, timestamp);

    // read buffer
    let topicData = TopicData.getRootAsTopicData(bufferTopicData);
    let topicDataRecordList = topicData.content(new TopicDataRecordList());

    t.is(topicData.contentType(), TopicDataContent.topic_data_records);
    t.is(topicDataRecordList.elementsLength(), 1);

    verifyTopicDataRecord(t, topicDataRecordList.elements(0));
});

test('simulate a storage to save parts of a message, repack it into a new message', t => {
    let topicString = '/my/test/topic';
    let timestamp = { seconds: 1, nanos: 2 };

    // create buffer
    let bufferTopicData = createFlatbufferTopicData(topicString, timestamp);

    // read buffer
    let topicData = TopicData.getRootAsTopicData(bufferTopicData);
    let topicDataRecordList = topicData.content(new TopicDataRecordList());

    // store in a map
    let storage = new Map();
    storage.set(topicString, topicDataRecordList.elements(0));

    let storageRecord = storage.get(topicString);
    verifyTopicDataRecord(t, storageRecord);

    // repack record into new TopicData message
    let builder = new flatbuffers.Builder(0);

    FlatbufferUtils.copyTopicDataRecords(builder, [storageRecord]);

    /*TopicDataRecord.startTopicDataRecord(builder);
    TopicDataRecord.addTopic(builder, storageRecord.topic());
    TopicDataRecord.addTimestamp(builder, storageRecord.timestamp());
    TopicDataRecord.addData(builder, storageRecord.data());
    let repackTopicDataRecord = TopicDataRecord.endTopicDataRecord(builder);
    console.info(repackTopicDataRecord);
    console.info('\n\n');

    TopicData.startTopicData(builder);
    TopicData.addContentType(builder, TopicDataContent.topic_data_record);
    TopicData.addContent(builder, storageRecord);
    let buildTopicData = TopicData.endTopicData(builder);

    builder.finish(buildTopicData);
    let repackBufferTopicData = builder.dataBuffer();

    // verify that repacked TopicData is still valid
    let repackedTopicData = TopicData.getRootAsTopicData(repackBufferTopicData);
    let repackedRecord = repackedTopicData.content(new TopicDataRecord());
    console.info(repackedRecord);
    console.info('\n\n');
    verifyTopicDataRecord(t, repackedRecord);*/
});