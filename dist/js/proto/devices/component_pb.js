// source: proto/devices/component.proto
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

goog.exportSymbol('proto.ubii.devices.Component', null, global);
goog.exportSymbol('proto.ubii.devices.Component.IOType', null, global);
goog.exportSymbol('proto.ubii.devices.ComponentList', null, global);
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
proto.ubii.devices.Component = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.ubii.devices.Component.repeatedFields_, null);
};
goog.inherits(proto.ubii.devices.Component, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.ubii.devices.Component.displayName = 'proto.ubii.devices.Component';
}
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
proto.ubii.devices.ComponentList = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.ubii.devices.ComponentList.repeatedFields_, null);
};
goog.inherits(proto.ubii.devices.ComponentList, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.ubii.devices.ComponentList.displayName = 'proto.ubii.devices.ComponentList';
}

/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.ubii.devices.Component.repeatedFields_ = [5];



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
proto.ubii.devices.Component.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.devices.Component.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.devices.Component} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.devices.Component.toObject = function(includeInstance, msg) {
  var f, obj = {
    topic: jspb.Message.getFieldWithDefault(msg, 1, ""),
    messageFormat: jspb.Message.getFieldWithDefault(msg, 2, ""),
    ioType: jspb.Message.getFieldWithDefault(msg, 3, 0),
    deviceId: jspb.Message.getFieldWithDefault(msg, 4, ""),
    tagsList: (f = jspb.Message.getRepeatedField(msg, 5)) == null ? undefined : f,
    description: jspb.Message.getFieldWithDefault(msg, 6, ""),
    id: jspb.Message.getFieldWithDefault(msg, 7, ""),
    name: jspb.Message.getFieldWithDefault(msg, 8, "")
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
 * @return {!proto.ubii.devices.Component}
 */
proto.ubii.devices.Component.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.devices.Component;
  return proto.ubii.devices.Component.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.devices.Component} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.devices.Component}
 */
proto.ubii.devices.Component.deserializeBinaryFromReader = function(msg, reader) {
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
      var value = /** @type {string} */ (reader.readString());
      msg.setMessageFormat(value);
      break;
    case 3:
      var value = /** @type {!proto.ubii.devices.Component.IOType} */ (reader.readEnum());
      msg.setIoType(value);
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.setDeviceId(value);
      break;
    case 5:
      var value = /** @type {string} */ (reader.readString());
      msg.addTags(value);
      break;
    case 6:
      var value = /** @type {string} */ (reader.readString());
      msg.setDescription(value);
      break;
    case 7:
      var value = /** @type {string} */ (reader.readString());
      msg.setId(value);
      break;
    case 8:
      var value = /** @type {string} */ (reader.readString());
      msg.setName(value);
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
proto.ubii.devices.Component.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.devices.Component.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.devices.Component} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.devices.Component.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getTopic();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getMessageFormat();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getIoType();
  if (f !== 0.0) {
    writer.writeEnum(
      3,
      f
    );
  }
  f = message.getDeviceId();
  if (f.length > 0) {
    writer.writeString(
      4,
      f
    );
  }
  f = message.getTagsList();
  if (f.length > 0) {
    writer.writeRepeatedString(
      5,
      f
    );
  }
  f = message.getDescription();
  if (f.length > 0) {
    writer.writeString(
      6,
      f
    );
  }
  f = message.getId();
  if (f.length > 0) {
    writer.writeString(
      7,
      f
    );
  }
  f = message.getName();
  if (f.length > 0) {
    writer.writeString(
      8,
      f
    );
  }
};


/**
 * @enum {number}
 */
proto.ubii.devices.Component.IOType = {
  PUBLISHER: 0,
  SUBSCRIBER: 1
};

/**
 * optional string topic = 1;
 * @return {string}
 */
proto.ubii.devices.Component.prototype.getTopic = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/**
 * @param {string} value
 * @return {!proto.ubii.devices.Component} returns this
 */
proto.ubii.devices.Component.prototype.setTopic = function(value) {
  return jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional string message_format = 2;
 * @return {string}
 */
proto.ubii.devices.Component.prototype.getMessageFormat = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/**
 * @param {string} value
 * @return {!proto.ubii.devices.Component} returns this
 */
proto.ubii.devices.Component.prototype.setMessageFormat = function(value) {
  return jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional IOType io_type = 3;
 * @return {!proto.ubii.devices.Component.IOType}
 */
proto.ubii.devices.Component.prototype.getIoType = function() {
  return /** @type {!proto.ubii.devices.Component.IOType} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/**
 * @param {!proto.ubii.devices.Component.IOType} value
 * @return {!proto.ubii.devices.Component} returns this
 */
proto.ubii.devices.Component.prototype.setIoType = function(value) {
  return jspb.Message.setProto3EnumField(this, 3, value);
};


/**
 * optional string device_id = 4;
 * @return {string}
 */
proto.ubii.devices.Component.prototype.getDeviceId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 4, ""));
};


/**
 * @param {string} value
 * @return {!proto.ubii.devices.Component} returns this
 */
proto.ubii.devices.Component.prototype.setDeviceId = function(value) {
  return jspb.Message.setProto3StringField(this, 4, value);
};


/**
 * repeated string tags = 5;
 * @return {!Array<string>}
 */
proto.ubii.devices.Component.prototype.getTagsList = function() {
  return /** @type {!Array<string>} */ (jspb.Message.getRepeatedField(this, 5));
};


/**
 * @param {!Array<string>} value
 * @return {!proto.ubii.devices.Component} returns this
 */
proto.ubii.devices.Component.prototype.setTagsList = function(value) {
  return jspb.Message.setField(this, 5, value || []);
};


/**
 * @param {string} value
 * @param {number=} opt_index
 * @return {!proto.ubii.devices.Component} returns this
 */
proto.ubii.devices.Component.prototype.addTags = function(value, opt_index) {
  return jspb.Message.addToRepeatedField(this, 5, value, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.ubii.devices.Component} returns this
 */
proto.ubii.devices.Component.prototype.clearTagsList = function() {
  return this.setTagsList([]);
};


/**
 * optional string description = 6;
 * @return {string}
 */
proto.ubii.devices.Component.prototype.getDescription = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 6, ""));
};


/**
 * @param {string} value
 * @return {!proto.ubii.devices.Component} returns this
 */
proto.ubii.devices.Component.prototype.setDescription = function(value) {
  return jspb.Message.setProto3StringField(this, 6, value);
};


/**
 * optional string id = 7;
 * @return {string}
 */
proto.ubii.devices.Component.prototype.getId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 7, ""));
};


/**
 * @param {string} value
 * @return {!proto.ubii.devices.Component} returns this
 */
proto.ubii.devices.Component.prototype.setId = function(value) {
  return jspb.Message.setProto3StringField(this, 7, value);
};


/**
 * optional string name = 8;
 * @return {string}
 */
proto.ubii.devices.Component.prototype.getName = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 8, ""));
};


/**
 * @param {string} value
 * @return {!proto.ubii.devices.Component} returns this
 */
proto.ubii.devices.Component.prototype.setName = function(value) {
  return jspb.Message.setProto3StringField(this, 8, value);
};



/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.ubii.devices.ComponentList.repeatedFields_ = [1];



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
proto.ubii.devices.ComponentList.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.devices.ComponentList.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.devices.ComponentList} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.devices.ComponentList.toObject = function(includeInstance, msg) {
  var f, obj = {
    elementsList: jspb.Message.toObjectList(msg.getElementsList(),
    proto.ubii.devices.Component.toObject, includeInstance)
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
 * @return {!proto.ubii.devices.ComponentList}
 */
proto.ubii.devices.ComponentList.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.devices.ComponentList;
  return proto.ubii.devices.ComponentList.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.devices.ComponentList} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.devices.ComponentList}
 */
proto.ubii.devices.ComponentList.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto.ubii.devices.Component;
      reader.readMessage(value,proto.ubii.devices.Component.deserializeBinaryFromReader);
      msg.addElements(value);
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
proto.ubii.devices.ComponentList.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.devices.ComponentList.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.devices.ComponentList} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.devices.ComponentList.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getElementsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      1,
      f,
      proto.ubii.devices.Component.serializeBinaryToWriter
    );
  }
};


/**
 * repeated Component elements = 1;
 * @return {!Array<!proto.ubii.devices.Component>}
 */
proto.ubii.devices.ComponentList.prototype.getElementsList = function() {
  return /** @type{!Array<!proto.ubii.devices.Component>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.ubii.devices.Component, 1));
};


/**
 * @param {!Array<!proto.ubii.devices.Component>} value
 * @return {!proto.ubii.devices.ComponentList} returns this
*/
proto.ubii.devices.ComponentList.prototype.setElementsList = function(value) {
  return jspb.Message.setRepeatedWrapperField(this, 1, value);
};


/**
 * @param {!proto.ubii.devices.Component=} opt_value
 * @param {number=} opt_index
 * @return {!proto.ubii.devices.Component}
 */
proto.ubii.devices.ComponentList.prototype.addElements = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 1, opt_value, proto.ubii.devices.Component, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.ubii.devices.ComponentList} returns this
 */
proto.ubii.devices.ComponentList.prototype.clearElementsList = function() {
  return this.setElementsList([]);
};


goog.object.extend(exports, proto.ubii.devices);
