// automatically generated by the FlatBuffers compiler, do not modify

/**
 * @const
 * @namespace
 */
var ubii = ubii || {};

/**
 * @const
 * @namespace
 */
ubii.services = ubii.services || {};

/**
 * @constructor
 */
ubii.services.Service = function() {
  /**
   * @type {flatbuffers.ByteBuffer}
   */
  this.bb = null;

  /**
   * @type {number}
   */
  this.bb_pos = 0;
};

/**
 * @param {number} i
 * @param {flatbuffers.ByteBuffer} bb
 * @returns {ubii.services.Service}
 */
ubii.services.Service.prototype.__init = function(i, bb) {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.services.Service=} obj
 * @returns {ubii.services.Service}
 */
ubii.services.Service.getRootAsService = function(bb, obj) {
  return (obj || new ubii.services.Service).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.services.Service=} obj
 * @returns {ubii.services.Service}
 */
ubii.services.Service.getSizePrefixedRootAsService = function(bb, obj) {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new ubii.services.Service).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.services.Service.prototype.id = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.services.Service.prototype.name = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {number} index
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array}
 */
ubii.services.Service.prototype.tags = function(index, optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? this.bb.__string(this.bb.__vector(this.bb_pos + offset) + index * 4, optionalEncoding) : null;
};

/**
 * @returns {number}
 */
ubii.services.Service.prototype.tagsLength = function() {
  var offset = this.bb.__offset(this.bb_pos, 8);
  return offset ? this.bb.__vector_len(this.bb_pos + offset) : 0;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.services.Service.prototype.description = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 10);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.services.Service.prototype.topic = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 12);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.services.Service.prototype.requestMessageFormat = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 14);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Encoding=} optionalEncoding
 * @returns {string|Uint8Array|null}
 */
ubii.services.Service.prototype.responseMessageFormat = function(optionalEncoding) {
  var offset = this.bb.__offset(this.bb_pos, 16);
  return offset ? this.bb.__string(this.bb_pos + offset, optionalEncoding) : null;
};

/**
 * @param {flatbuffers.Builder} builder
 */
ubii.services.Service.startService = function(builder) {
  builder.startObject(7);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} idOffset
 */
ubii.services.Service.addId = function(builder, idOffset) {
  builder.addFieldOffset(0, idOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} nameOffset
 */
ubii.services.Service.addName = function(builder, nameOffset) {
  builder.addFieldOffset(1, nameOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} tagsOffset
 */
ubii.services.Service.addTags = function(builder, tagsOffset) {
  builder.addFieldOffset(2, tagsOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {Array.<flatbuffers.Offset>} data
 * @returns {flatbuffers.Offset}
 */
ubii.services.Service.createTagsVector = function(builder, data) {
  builder.startVector(4, data.length, 4);
  for (var i = data.length - 1; i >= 0; i--) {
    builder.addOffset(data[i]);
  }
  return builder.endVector();
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {number} numElems
 */
ubii.services.Service.startTagsVector = function(builder, numElems) {
  builder.startVector(4, numElems, 4);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} descriptionOffset
 */
ubii.services.Service.addDescription = function(builder, descriptionOffset) {
  builder.addFieldOffset(3, descriptionOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} topicOffset
 */
ubii.services.Service.addTopic = function(builder, topicOffset) {
  builder.addFieldOffset(4, topicOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} requestMessageFormatOffset
 */
ubii.services.Service.addRequestMessageFormat = function(builder, requestMessageFormatOffset) {
  builder.addFieldOffset(5, requestMessageFormatOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} responseMessageFormatOffset
 */
ubii.services.Service.addResponseMessageFormat = function(builder, responseMessageFormatOffset) {
  builder.addFieldOffset(6, responseMessageFormatOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
ubii.services.Service.endService = function(builder) {
  var offset = builder.endObject();
  return offset;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.services.Service.finishServiceBuffer = function(builder, offset) {
  builder.finish(offset);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.services.Service.finishSizePrefixedServiceBuffer = function(builder, offset) {
  builder.finish(offset, undefined, true);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} idOffset
 * @param {flatbuffers.Offset} nameOffset
 * @param {flatbuffers.Offset} tagsOffset
 * @param {flatbuffers.Offset} descriptionOffset
 * @param {flatbuffers.Offset} topicOffset
 * @param {flatbuffers.Offset} requestMessageFormatOffset
 * @param {flatbuffers.Offset} responseMessageFormatOffset
 * @returns {flatbuffers.Offset}
 */
ubii.services.Service.createService = function(builder, idOffset, nameOffset, tagsOffset, descriptionOffset, topicOffset, requestMessageFormatOffset, responseMessageFormatOffset) {
  ubii.services.Service.startService(builder);
  ubii.services.Service.addId(builder, idOffset);
  ubii.services.Service.addName(builder, nameOffset);
  ubii.services.Service.addTags(builder, tagsOffset);
  ubii.services.Service.addDescription(builder, descriptionOffset);
  ubii.services.Service.addTopic(builder, topicOffset);
  ubii.services.Service.addRequestMessageFormat(builder, requestMessageFormatOffset);
  ubii.services.Service.addResponseMessageFormat(builder, responseMessageFormatOffset);
  return ubii.services.Service.endService(builder);
}

// Exports for Node.js and RequireJS
this.ubii = ubii;