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

var proto_topicData_topicDataRecord_dataStructure_vector2_pb = require('../../../proto/topicData/topicDataRecord/dataStructure/vector2_pb.js');
var proto_topicData_topicDataRecord_dataStructure_vector3_pb = require('../../../proto/topicData/topicDataRecord/dataStructure/vector3_pb.js');
var proto_topicData_topicDataRecord_dataStructure_vector4_pb = require('../../../proto/topicData/topicDataRecord/dataStructure/vector4_pb.js');
var proto_topicData_topicDataRecord_dataStructure_quaternion_pb = require('../../../proto/topicData/topicDataRecord/dataStructure/quaternion_pb.js');
var proto_topicData_topicDataRecord_dataStructure_matrix3x2_pb = require('../../../proto/topicData/topicDataRecord/dataStructure/matrix3x2_pb.js');
var proto_topicData_topicDataRecord_dataStructure_matrix4x4_pb = require('../../../proto/topicData/topicDataRecord/dataStructure/matrix4x4_pb.js');
var proto_topicData_topicDataRecord_dataStructure_color_pb = require('../../../proto/topicData/topicDataRecord/dataStructure/color_pb.js');
goog.exportSymbol('proto.ubii.topicData.TopicDataRecord', null, global);

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
proto.ubii.topicData.TopicDataRecord = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, proto.ubii.topicData.TopicDataRecord.oneofGroups_);
};
goog.inherits(proto.ubii.topicData.TopicDataRecord, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ubii.topicData.TopicDataRecord.displayName = 'proto.ubii.topicData.TopicDataRecord';
}
/**
 * Oneof group definitions for this message. Each group defines the field
 * numbers belonging to that group. When of these fields' value is set, all
 * other fields in the group are cleared. During deserialization, if multiple
 * fields are encountered for a group, only the last value seen will be kept.
 * @private {!Array<!Array<number>>}
 * @const
 */
proto.ubii.topicData.TopicDataRecord.oneofGroups_ = [[2,3,4,5,6,7,8,9,10,11]];

/**
 * @enum {number}
 */
proto.ubii.topicData.TopicDataRecord.TypeCase = {
  TYPE_NOT_SET: 0,
  NUMBER: 2,
  BOOLEAN: 3,
  STRING: 4,
  VECTOR2: 5,
  VECTOR3: 6,
  VECTOR4: 7,
  QUATERNION: 8,
  MATRIX3X2: 9,
  MATRIX4X4: 10,
  COLOR: 11
};

/**
 * @return {proto.ubii.topicData.TopicDataRecord.TypeCase}
 */
proto.ubii.topicData.TopicDataRecord.prototype.getTypeCase = function() {
  return /** @type {proto.ubii.topicData.TopicDataRecord.TypeCase} */(jspb.Message.computeOneofCase(this, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0]));
};



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.ubii.topicData.TopicDataRecord.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.topicData.TopicDataRecord.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.topicData.TopicDataRecord} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.topicData.TopicDataRecord.toObject = function(includeInstance, msg) {
  var f, obj = {
    topic: jspb.Message.getFieldWithDefault(msg, 1, ""),
    number: +jspb.Message.getFieldWithDefault(msg, 2, 0.0),
    pb_boolean: jspb.Message.getFieldWithDefault(msg, 3, false),
    string: jspb.Message.getFieldWithDefault(msg, 4, ""),
    vector2: (f = msg.getVector2()) && proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2.toObject(includeInstance, f),
    vector3: (f = msg.getVector3()) && proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3.toObject(includeInstance, f),
    vector4: (f = msg.getVector4()) && proto_topicData_topicDataRecord_dataStructure_vector4_pb.Vector4.toObject(includeInstance, f),
    quaternion: (f = msg.getQuaternion()) && proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion.toObject(includeInstance, f),
    matrix3x2: (f = msg.getMatrix3x2()) && proto_topicData_topicDataRecord_dataStructure_matrix3x2_pb.Matrix3x2.toObject(includeInstance, f),
    matrix4x4: (f = msg.getMatrix4x4()) && proto_topicData_topicDataRecord_dataStructure_matrix4x4_pb.Matrix4x4.toObject(includeInstance, f),
    color: (f = msg.getColor()) && proto_topicData_topicDataRecord_dataStructure_color_pb.Color.toObject(includeInstance, f)
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
 * @return {!proto.ubii.topicData.TopicDataRecord}
 */
proto.ubii.topicData.TopicDataRecord.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.topicData.TopicDataRecord;
  return proto.ubii.topicData.TopicDataRecord.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.topicData.TopicDataRecord} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.topicData.TopicDataRecord}
 */
proto.ubii.topicData.TopicDataRecord.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setTopic(value);
      break;
    case 2:
      var value = /** @type {number} */ (reader.readDouble());
      msg.setNumber(value);
      break;
    case 3:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setBoolean(value);
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.setString(value);
      break;
    case 5:
      var value = new proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2.deserializeBinaryFromReader);
      msg.setVector2(value);
      break;
    case 6:
      var value = new proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3.deserializeBinaryFromReader);
      msg.setVector3(value);
      break;
    case 7:
      var value = new proto_topicData_topicDataRecord_dataStructure_vector4_pb.Vector4;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_vector4_pb.Vector4.deserializeBinaryFromReader);
      msg.setVector4(value);
      break;
    case 8:
      var value = new proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion.deserializeBinaryFromReader);
      msg.setQuaternion(value);
      break;
    case 9:
      var value = new proto_topicData_topicDataRecord_dataStructure_matrix3x2_pb.Matrix3x2;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_matrix3x2_pb.Matrix3x2.deserializeBinaryFromReader);
      msg.setMatrix3x2(value);
      break;
    case 10:
      var value = new proto_topicData_topicDataRecord_dataStructure_matrix4x4_pb.Matrix4x4;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_matrix4x4_pb.Matrix4x4.deserializeBinaryFromReader);
      msg.setMatrix4x4(value);
      break;
    case 11:
      var value = new proto_topicData_topicDataRecord_dataStructure_color_pb.Color;
      reader.readMessage(value,proto_topicData_topicDataRecord_dataStructure_color_pb.Color.deserializeBinaryFromReader);
      msg.setColor(value);
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
proto.ubii.topicData.TopicDataRecord.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.topicData.TopicDataRecord.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.topicData.TopicDataRecord} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.topicData.TopicDataRecord.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getTopic();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = /** @type {number} */ (jspb.Message.getField(message, 2));
  if (f != null) {
    writer.writeDouble(
      2,
      f
    );
  }
  f = /** @type {boolean} */ (jspb.Message.getField(message, 3));
  if (f != null) {
    writer.writeBool(
      3,
      f
    );
  }
  f = /** @type {string} */ (jspb.Message.getField(message, 4));
  if (f != null) {
    writer.writeString(
      4,
      f
    );
  }
  f = message.getVector2();
  if (f != null) {
    writer.writeMessage(
      5,
      f,
      proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2.serializeBinaryToWriter
    );
  }
  f = message.getVector3();
  if (f != null) {
    writer.writeMessage(
      6,
      f,
      proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3.serializeBinaryToWriter
    );
  }
  f = message.getVector4();
  if (f != null) {
    writer.writeMessage(
      7,
      f,
      proto_topicData_topicDataRecord_dataStructure_vector4_pb.Vector4.serializeBinaryToWriter
    );
  }
  f = message.getQuaternion();
  if (f != null) {
    writer.writeMessage(
      8,
      f,
      proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion.serializeBinaryToWriter
    );
  }
  f = message.getMatrix3x2();
  if (f != null) {
    writer.writeMessage(
      9,
      f,
      proto_topicData_topicDataRecord_dataStructure_matrix3x2_pb.Matrix3x2.serializeBinaryToWriter
    );
  }
  f = message.getMatrix4x4();
  if (f != null) {
    writer.writeMessage(
      10,
      f,
      proto_topicData_topicDataRecord_dataStructure_matrix4x4_pb.Matrix4x4.serializeBinaryToWriter
    );
  }
  f = message.getColor();
  if (f != null) {
    writer.writeMessage(
      11,
      f,
      proto_topicData_topicDataRecord_dataStructure_color_pb.Color.serializeBinaryToWriter
    );
  }
};


/**
 * optional string topic = 1;
 * @return {string}
 */
proto.ubii.topicData.TopicDataRecord.prototype.getTopic = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.ubii.topicData.TopicDataRecord.prototype.setTopic = function(value) {
  jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional double number = 2;
 * @return {number}
 */
proto.ubii.topicData.TopicDataRecord.prototype.getNumber = function() {
  return /** @type {number} */ (+jspb.Message.getFieldWithDefault(this, 2, 0.0));
};


/** @param {number} value */
proto.ubii.topicData.TopicDataRecord.prototype.setNumber = function(value) {
  jspb.Message.setOneofField(this, 2, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0], value);
};


proto.ubii.topicData.TopicDataRecord.prototype.clearNumber = function() {
  jspb.Message.setOneofField(this, 2, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0], undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.topicData.TopicDataRecord.prototype.hasNumber = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional bool boolean = 3;
 * Note that Boolean fields may be set to 0/1 when serialized from a Java server.
 * You should avoid comparisons like {@code val === true/false} in those cases.
 * @return {boolean}
 */
proto.ubii.topicData.TopicDataRecord.prototype.getBoolean = function() {
  return /** @type {boolean} */ (jspb.Message.getFieldWithDefault(this, 3, false));
};


/** @param {boolean} value */
proto.ubii.topicData.TopicDataRecord.prototype.setBoolean = function(value) {
  jspb.Message.setOneofField(this, 3, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0], value);
};


proto.ubii.topicData.TopicDataRecord.prototype.clearBoolean = function() {
  jspb.Message.setOneofField(this, 3, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0], undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.topicData.TopicDataRecord.prototype.hasBoolean = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * optional string string = 4;
 * @return {string}
 */
proto.ubii.topicData.TopicDataRecord.prototype.getString = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 4, ""));
};


/** @param {string} value */
proto.ubii.topicData.TopicDataRecord.prototype.setString = function(value) {
  jspb.Message.setOneofField(this, 4, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0], value);
};


proto.ubii.topicData.TopicDataRecord.prototype.clearString = function() {
  jspb.Message.setOneofField(this, 4, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0], undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.topicData.TopicDataRecord.prototype.hasString = function() {
  return jspb.Message.getField(this, 4) != null;
};


/**
 * optional ubii.dataStructure.Vector2 vector2 = 5;
 * @return {?proto.ubii.dataStructure.Vector2}
 */
proto.ubii.topicData.TopicDataRecord.prototype.getVector2 = function() {
  return /** @type{?proto.ubii.dataStructure.Vector2} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_vector2_pb.Vector2, 5));
};


/** @param {?proto.ubii.dataStructure.Vector2|undefined} value */
proto.ubii.topicData.TopicDataRecord.prototype.setVector2 = function(value) {
  jspb.Message.setOneofWrapperField(this, 5, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0], value);
};


proto.ubii.topicData.TopicDataRecord.prototype.clearVector2 = function() {
  this.setVector2(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.topicData.TopicDataRecord.prototype.hasVector2 = function() {
  return jspb.Message.getField(this, 5) != null;
};


/**
 * optional ubii.dataStructure.Vector3 vector3 = 6;
 * @return {?proto.ubii.dataStructure.Vector3}
 */
proto.ubii.topicData.TopicDataRecord.prototype.getVector3 = function() {
  return /** @type{?proto.ubii.dataStructure.Vector3} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_vector3_pb.Vector3, 6));
};


/** @param {?proto.ubii.dataStructure.Vector3|undefined} value */
proto.ubii.topicData.TopicDataRecord.prototype.setVector3 = function(value) {
  jspb.Message.setOneofWrapperField(this, 6, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0], value);
};


proto.ubii.topicData.TopicDataRecord.prototype.clearVector3 = function() {
  this.setVector3(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.topicData.TopicDataRecord.prototype.hasVector3 = function() {
  return jspb.Message.getField(this, 6) != null;
};


/**
 * optional ubii.dataStructure.Vector4 vector4 = 7;
 * @return {?proto.ubii.dataStructure.Vector4}
 */
proto.ubii.topicData.TopicDataRecord.prototype.getVector4 = function() {
  return /** @type{?proto.ubii.dataStructure.Vector4} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_vector4_pb.Vector4, 7));
};


/** @param {?proto.ubii.dataStructure.Vector4|undefined} value */
proto.ubii.topicData.TopicDataRecord.prototype.setVector4 = function(value) {
  jspb.Message.setOneofWrapperField(this, 7, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0], value);
};


proto.ubii.topicData.TopicDataRecord.prototype.clearVector4 = function() {
  this.setVector4(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.topicData.TopicDataRecord.prototype.hasVector4 = function() {
  return jspb.Message.getField(this, 7) != null;
};


/**
 * optional ubii.dataStructure.Quaternion quaternion = 8;
 * @return {?proto.ubii.dataStructure.Quaternion}
 */
proto.ubii.topicData.TopicDataRecord.prototype.getQuaternion = function() {
  return /** @type{?proto.ubii.dataStructure.Quaternion} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_quaternion_pb.Quaternion, 8));
};


/** @param {?proto.ubii.dataStructure.Quaternion|undefined} value */
proto.ubii.topicData.TopicDataRecord.prototype.setQuaternion = function(value) {
  jspb.Message.setOneofWrapperField(this, 8, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0], value);
};


proto.ubii.topicData.TopicDataRecord.prototype.clearQuaternion = function() {
  this.setQuaternion(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.topicData.TopicDataRecord.prototype.hasQuaternion = function() {
  return jspb.Message.getField(this, 8) != null;
};


/**
 * optional ubii.dataStructure.Matrix3x2 matrix3x2 = 9;
 * @return {?proto.ubii.dataStructure.Matrix3x2}
 */
proto.ubii.topicData.TopicDataRecord.prototype.getMatrix3x2 = function() {
  return /** @type{?proto.ubii.dataStructure.Matrix3x2} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_matrix3x2_pb.Matrix3x2, 9));
};


/** @param {?proto.ubii.dataStructure.Matrix3x2|undefined} value */
proto.ubii.topicData.TopicDataRecord.prototype.setMatrix3x2 = function(value) {
  jspb.Message.setOneofWrapperField(this, 9, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0], value);
};


proto.ubii.topicData.TopicDataRecord.prototype.clearMatrix3x2 = function() {
  this.setMatrix3x2(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.topicData.TopicDataRecord.prototype.hasMatrix3x2 = function() {
  return jspb.Message.getField(this, 9) != null;
};


/**
 * optional ubii.dataStructure.Matrix4x4 matrix4x4 = 10;
 * @return {?proto.ubii.dataStructure.Matrix4x4}
 */
proto.ubii.topicData.TopicDataRecord.prototype.getMatrix4x4 = function() {
  return /** @type{?proto.ubii.dataStructure.Matrix4x4} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_matrix4x4_pb.Matrix4x4, 10));
};


/** @param {?proto.ubii.dataStructure.Matrix4x4|undefined} value */
proto.ubii.topicData.TopicDataRecord.prototype.setMatrix4x4 = function(value) {
  jspb.Message.setOneofWrapperField(this, 10, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0], value);
};


proto.ubii.topicData.TopicDataRecord.prototype.clearMatrix4x4 = function() {
  this.setMatrix4x4(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.topicData.TopicDataRecord.prototype.hasMatrix4x4 = function() {
  return jspb.Message.getField(this, 10) != null;
};


/**
 * optional ubii.dataStructure.Color color = 11;
 * @return {?proto.ubii.dataStructure.Color}
 */
proto.ubii.topicData.TopicDataRecord.prototype.getColor = function() {
  return /** @type{?proto.ubii.dataStructure.Color} */ (
    jspb.Message.getWrapperField(this, proto_topicData_topicDataRecord_dataStructure_color_pb.Color, 11));
};


/** @param {?proto.ubii.dataStructure.Color|undefined} value */
proto.ubii.topicData.TopicDataRecord.prototype.setColor = function(value) {
  jspb.Message.setOneofWrapperField(this, 11, proto.ubii.topicData.TopicDataRecord.oneofGroups_[0], value);
};


proto.ubii.topicData.TopicDataRecord.prototype.clearColor = function() {
  this.setColor(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.topicData.TopicDataRecord.prototype.hasColor = function() {
  return jspb.Message.getField(this, 11) != null;
};


goog.object.extend(exports, proto.ubii.topicData);