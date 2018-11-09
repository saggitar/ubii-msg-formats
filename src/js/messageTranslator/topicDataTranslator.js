const MessageTranslator = require('./messageTranslator');

/**
 * Message translator for topic data messages.
 */
class TopicDataTranslator extends MessageTranslator {

    constructor(loadProtoFileSynchronously = true) {
        super(__dirname + '/../../proto/topicData/topicData.proto', 'TopicData', loadProtoFileSynchronously);
    }
}

module.exports = TopicDataTranslator;