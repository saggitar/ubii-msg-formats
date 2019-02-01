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

var proto_interaction_interaction_pb = require('../../proto/interaction/interaction_pb.js');
goog.exportSymbol('proto.ubii.session.Session', null, global);

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
proto.ubii.session.Session = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.ubii.session.Session.repeatedFields_, null);
};
goog.inherits(proto.ubii.session.Session, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ubii.session.Session.displayName = 'proto.ubii.session.Session';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.ubii.session.Session.repeatedFields_ = [2];



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
proto.ubii.session.Session.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.session.Session.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.session.Session} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.session.Session.toObject = function(includeInstance, msg) {
  var f, obj = {
    name: jspb.Message.getFieldWithDefault(msg, 1, ""),
    interactionsList: jspb.Message.toObjectList(msg.getInteractionsList(),
    proto_interaction_interaction_pb.Interaction.toObject, includeInstance)
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
 * @return {!proto.ubii.session.Session}
 */
proto.ubii.session.Session.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.session.Session;
  return proto.ubii.session.Session.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.session.Session} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.session.Session}
 */
proto.ubii.session.Session.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setName(value);
      break;
    case 2:
      var value = new proto_interaction_interaction_pb.Interaction;
      reader.readMessage(value,proto_interaction_interaction_pb.Interaction.deserializeBinaryFromReader);
      msg.addInteractions(value);
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
proto.ubii.session.Session.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.session.Session.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.session.Session} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.session.Session.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getName();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getInteractionsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      2,
      f,
      proto_interaction_interaction_pb.Interaction.serializeBinaryToWriter
    );
  }
};


/**
 * optional string name = 1;
 * @return {string}
 */
proto.ubii.session.Session.prototype.getName = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.ubii.session.Session.prototype.setName = function(value) {
  jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * repeated ubii.interaction.Interaction interactions = 2;
 * @return {!Array<!proto.ubii.interaction.Interaction>}
 */
proto.ubii.session.Session.prototype.getInteractionsList = function() {
  return /** @type{!Array<!proto.ubii.interaction.Interaction>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto_interaction_interaction_pb.Interaction, 2));
};


/** @param {!Array<!proto.ubii.interaction.Interaction>} value */
proto.ubii.session.Session.prototype.setInteractionsList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 2, value);
};


/**
 * @param {!proto.ubii.interaction.Interaction=} opt_value
 * @param {number=} opt_index
 * @return {!proto.ubii.interaction.Interaction}
 */
proto.ubii.session.Session.prototype.addInteractions = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 2, opt_value, proto.ubii.interaction.Interaction, opt_index);
};


proto.ubii.session.Session.prototype.clearInteractionsList = function() {
  this.setInteractionsList([]);
};


goog.object.extend(exports, proto.ubii.session);
