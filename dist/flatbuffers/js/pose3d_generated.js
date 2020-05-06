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
ubii.dataStructures = ubii.dataStructures || {};

/**
 * @constructor
 */
ubii.dataStructures.Orientation3D = function() {
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
 * @returns {ubii.dataStructures.Orientation3D}
 */
ubii.dataStructures.Orientation3D.prototype.__init = function(i, bb) {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.dataStructures.Orientation3D=} obj
 * @returns {ubii.dataStructures.Orientation3D}
 */
ubii.dataStructures.Orientation3D.getRootAsOrientation3D = function(bb, obj) {
  return (obj || new ubii.dataStructures.Orientation3D).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.dataStructures.Orientation3D=} obj
 * @returns {ubii.dataStructures.Orientation3D}
 */
ubii.dataStructures.Orientation3D.getSizePrefixedRootAsOrientation3D = function(bb, obj) {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new ubii.dataStructures.Orientation3D).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {ubii.dataStructures.Quaternion=} obj
 * @returns {ubii.dataStructures.Quaternion|null}
 */
ubii.dataStructures.Orientation3D.prototype.quaternion = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? (obj || new ubii.dataStructures.Quaternion).__init(this.bb_pos + offset, this.bb) : null;
};

/**
 * @param {ubii.dataStructures.Vector3=} obj
 * @returns {ubii.dataStructures.Vector3|null}
 */
ubii.dataStructures.Orientation3D.prototype.euler = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? (obj || new ubii.dataStructures.Vector3).__init(this.bb_pos + offset, this.bb) : null;
};

/**
 * @param {flatbuffers.Builder} builder
 */
ubii.dataStructures.Orientation3D.startOrientation3D = function(builder) {
  builder.startObject(2);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} quaternionOffset
 */
ubii.dataStructures.Orientation3D.addQuaternion = function(builder, quaternionOffset) {
  builder.addFieldStruct(0, quaternionOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} eulerOffset
 */
ubii.dataStructures.Orientation3D.addEuler = function(builder, eulerOffset) {
  builder.addFieldStruct(1, eulerOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.Orientation3D.endOrientation3D = function(builder) {
  var offset = builder.endObject();
  return offset;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} quaternionOffset
 * @param {flatbuffers.Offset} eulerOffset
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.Orientation3D.createOrientation3D = function(builder, quaternionOffset, eulerOffset) {
  ubii.dataStructures.Orientation3D.startOrientation3D(builder);
  ubii.dataStructures.Orientation3D.addQuaternion(builder, quaternionOffset);
  ubii.dataStructures.Orientation3D.addEuler(builder, eulerOffset);
  return ubii.dataStructures.Orientation3D.endOrientation3D(builder);
}

/**
 * @constructor
 */
ubii.dataStructures.Pose3D = function() {
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
 * @returns {ubii.dataStructures.Pose3D}
 */
ubii.dataStructures.Pose3D.prototype.__init = function(i, bb) {
  this.bb_pos = i;
  this.bb = bb;
  return this;
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.dataStructures.Pose3D=} obj
 * @returns {ubii.dataStructures.Pose3D}
 */
ubii.dataStructures.Pose3D.getRootAsPose3D = function(bb, obj) {
  return (obj || new ubii.dataStructures.Pose3D).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {flatbuffers.ByteBuffer} bb
 * @param {ubii.dataStructures.Pose3D=} obj
 * @returns {ubii.dataStructures.Pose3D}
 */
ubii.dataStructures.Pose3D.getSizePrefixedRootAsPose3D = function(bb, obj) {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new ubii.dataStructures.Pose3D).__init(bb.readInt32(bb.position()) + bb.position(), bb);
};

/**
 * @param {ubii.dataStructures.Vector3=} obj
 * @returns {ubii.dataStructures.Vector3|null}
 */
ubii.dataStructures.Pose3D.prototype.position = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 4);
  return offset ? (obj || new ubii.dataStructures.Vector3).__init(this.bb_pos + offset, this.bb) : null;
};

/**
 * @param {ubii.dataStructures.Orientation3D=} obj
 * @returns {ubii.dataStructures.Orientation3D|null}
 */
ubii.dataStructures.Pose3D.prototype.orientation = function(obj) {
  var offset = this.bb.__offset(this.bb_pos, 6);
  return offset ? (obj || new ubii.dataStructures.Orientation3D).__init(this.bb.__indirect(this.bb_pos + offset), this.bb) : null;
};

/**
 * @param {flatbuffers.Builder} builder
 */
ubii.dataStructures.Pose3D.startPose3D = function(builder) {
  builder.startObject(2);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} positionOffset
 */
ubii.dataStructures.Pose3D.addPosition = function(builder, positionOffset) {
  builder.addFieldStruct(0, positionOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} orientationOffset
 */
ubii.dataStructures.Pose3D.addOrientation = function(builder, orientationOffset) {
  builder.addFieldOffset(1, orientationOffset, 0);
};

/**
 * @param {flatbuffers.Builder} builder
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.Pose3D.endPose3D = function(builder) {
  var offset = builder.endObject();
  return offset;
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.dataStructures.Pose3D.finishPose3DBuffer = function(builder, offset) {
  builder.finish(offset);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} offset
 */
ubii.dataStructures.Pose3D.finishSizePrefixedPose3DBuffer = function(builder, offset) {
  builder.finish(offset, undefined, true);
};

/**
 * @param {flatbuffers.Builder} builder
 * @param {flatbuffers.Offset} positionOffset
 * @param {flatbuffers.Offset} orientationOffset
 * @returns {flatbuffers.Offset}
 */
ubii.dataStructures.Pose3D.createPose3D = function(builder, positionOffset, orientationOffset) {
  ubii.dataStructures.Pose3D.startPose3D(builder);
  ubii.dataStructures.Pose3D.addPosition(builder, positionOffset);
  ubii.dataStructures.Pose3D.addOrientation(builder, orientationOffset);
  return ubii.dataStructures.Pose3D.endPose3D(builder);
}

// Exports for Node.js and RequireJS
this.ubii = ubii;