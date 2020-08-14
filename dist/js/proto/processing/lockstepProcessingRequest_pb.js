// source: proto/processing/lockstepProcessingRequest.proto
/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

var jspb = require('google-protobuf');
var goog = jspb;
var global = Function('return this')();

var proto_topicData_topicDataRecord_topicDataRecord_pb = require('../../proto/topicData/topicDataRecord/topicDataRecord_pb.js');
goog.object.extend(proto, proto_topicData_topicDataRecord_topicDataRecord_pb);
goog.exportSymbol('proto.ubii.processing.LockstepProcessingRequest', null, global);
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.ubii.processing.LockstepProcessingRequest = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.ubii.processing.LockstepProcessingRequest, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.ubii.processing.LockstepProcessingRequest.displayName = 'proto.ubii.processing.LockstepProcessingRequest';
}



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.ubii.processing.LockstepProcessingRequest.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.processing.LockstepProcessingRequest.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.processing.LockstepProcessingRequest} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.processing.LockstepProcessingRequest.toObject = function(includeInstance, msg) {
  var f, obj = {
    records: (f = msg.getRecords()) && proto_topicData_topicDataRecord_topicDataRecord_pb.TopicDataRecordList.toObject(includeInstance, f)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.ubii.processing.LockstepProcessingRequest}
 */
proto.ubii.processing.LockstepProcessingRequest.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.processing.LockstepProcessingRequest;
  return proto.ubii.processing.LockstepProcessingRequest.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.processing.LockstepProcessingRequest} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.processing.LockstepProcessingRequest}
 */
proto.ubii.processing.LockstepProcessingRequest.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto_topicData_topicDataRecord_topicDataRecord_pb.TopicDataRecordList;
      reader.readMessage(value,proto_topicData_topicDataRecord_topicDataRecord_pb.TopicDataRecordList.deserializeBinaryFromReader);
      msg.setRecords(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.ubii.processing.LockstepProcessingRequest.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.processing.LockstepProcessingRequest.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.processing.LockstepProcessingRequest} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.processing.LockstepProcessingRequest.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getRecords();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      proto_topicData_topicDataRecord_topicDataRecord_pb.TopicDataRecordList.serializeBinaryToWriter
    );
  }
};


/**
 * optional ubii.topicData.TopicDataRecordList records = 1;
 * @return {?proto.ubii.topicData.TopicDataRecordList}
 */
proto.ubii.processing.LockstepProcessingRequest.prototype.getRecords = function() {
  return /** @type{?proto.ubii.topicData.TopicDataRecordList} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_topicDataRecord_pb.TopicDataRecordList, 1));
};


/**
 * @param {?proto.ubii.topicData.TopicDataRecordList|undefined} value
 * @return {!proto.ubii.processing.LockstepProcessingRequest} returns this
*/
proto.ubii.processing.LockstepProcessingRequest.prototype.setRecords = function(value) {
  return jspb.Message.setWrapperField(this, 1, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.ubii.processing.LockstepProcessingRequest} returns this
 */
proto.ubii.processing.LockstepProcessingRequest.prototype.clearRecords = function() {
  return this.setRecords(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.ubii.processing.LockstepProcessingRequest.prototype.hasRecords = function() {
  return jspb.Message.getField(this, 1) != null;
};


goog.object.extend(exports, proto.ubii.processing);