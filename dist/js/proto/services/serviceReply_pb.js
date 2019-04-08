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

var proto_general_success_pb = require('../../proto/general/success_pb.js');
var proto_general_error_pb = require('../../proto/general/error_pb.js');
var proto_clients_client_pb = require('../../proto/clients/client_pb.js');
var proto_devices_device_pb = require('../../proto/devices/device_pb.js');
var proto_servers_server_pb = require('../../proto/servers/server_pb.js');
var proto_sessions_session_pb = require('../../proto/sessions/session_pb.js');
var proto_interactions_interaction_pb = require('../../proto/interactions/interaction_pb.js');
var proto_general_stringList_pb = require('../../proto/general/stringList_pb.js');
goog.exportSymbol('proto.ubii.services.ServiceReply', null, global);

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
proto.ubii.services.ServiceReply = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, proto.ubii.services.ServiceReply.oneofGroups_);
};
goog.inherits(proto.ubii.services.ServiceReply, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ubii.services.ServiceReply.displayName = 'proto.ubii.services.ServiceReply';
}
/**
 * Oneof group definitions for this message. Each group defines the field
 * numbers belonging to that group. When of these fields' value is set, all
 * other fields in the group are cleared. During deserialization, if multiple
 * fields are encountered for a group, only the last value seen will be kept.
 * @private {!Array<!Array<number>>}
 * @const
 */
proto.ubii.services.ServiceReply.oneofGroups_ = [[1,2,3,4,5,6,7,8,9,10]];

/**
 * @enum {number}
 */
proto.ubii.services.ServiceReply.TypeCase = {
  TYPE_NOT_SET: 0,
  SUCCESS: 1,
  ERROR: 2,
  CLIENT: 3,
  DEVICE: 4,
  SERVER: 5,
  SESSION: 6,
  SESSION_LIST: 7,
  INTERACTION: 8,
  INTERACTION_LIST: 9,
  STRING_LIST: 10
};

/**
 * @return {proto.ubii.services.ServiceReply.TypeCase}
 */
proto.ubii.services.ServiceReply.prototype.getTypeCase = function() {
  return /** @type {proto.ubii.services.ServiceReply.TypeCase} */(jspb.Message.computeOneofCase(this, proto.ubii.services.ServiceReply.oneofGroups_[0]));
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
proto.ubii.services.ServiceReply.prototype.toObject = function(opt_includeInstance) {
  return proto.ubii.services.ServiceReply.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ubii.services.ServiceReply} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.services.ServiceReply.toObject = function(includeInstance, msg) {
  var f, obj = {
    success: (f = msg.getSuccess()) && proto_general_success_pb.Success.toObject(includeInstance, f),
    error: (f = msg.getError()) && proto_general_error_pb.Error.toObject(includeInstance, f),
    client: (f = msg.getClient()) && proto_clients_client_pb.Client.toObject(includeInstance, f),
    device: (f = msg.getDevice()) && proto_devices_device_pb.Device.toObject(includeInstance, f),
    server: (f = msg.getServer()) && proto_servers_server_pb.Server.toObject(includeInstance, f),
    session: (f = msg.getSession()) && proto_sessions_session_pb.Session.toObject(includeInstance, f),
    sessionList: (f = msg.getSessionList()) && proto_sessions_session_pb.SessionList.toObject(includeInstance, f),
    interaction: (f = msg.getInteraction()) && proto_interactions_interaction_pb.Interaction.toObject(includeInstance, f),
    interactionList: (f = msg.getInteractionList()) && proto_interactions_interaction_pb.InteractionList.toObject(includeInstance, f),
    stringList: (f = msg.getStringList()) && proto_general_stringList_pb.StringList.toObject(includeInstance, f)
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
 * @return {!proto.ubii.services.ServiceReply}
 */
proto.ubii.services.ServiceReply.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ubii.services.ServiceReply;
  return proto.ubii.services.ServiceReply.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ubii.services.ServiceReply} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ubii.services.ServiceReply}
 */
proto.ubii.services.ServiceReply.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto_general_success_pb.Success;
      reader.readMessage(value,proto_general_success_pb.Success.deserializeBinaryFromReader);
      msg.setSuccess(value);
      break;
    case 2:
      var value = new proto_general_error_pb.Error;
      reader.readMessage(value,proto_general_error_pb.Error.deserializeBinaryFromReader);
      msg.setError(value);
      break;
    case 3:
      var value = new proto_clients_client_pb.Client;
      reader.readMessage(value,proto_clients_client_pb.Client.deserializeBinaryFromReader);
      msg.setClient(value);
      break;
    case 4:
      var value = new proto_devices_device_pb.Device;
      reader.readMessage(value,proto_devices_device_pb.Device.deserializeBinaryFromReader);
      msg.setDevice(value);
      break;
    case 5:
      var value = new proto_servers_server_pb.Server;
      reader.readMessage(value,proto_servers_server_pb.Server.deserializeBinaryFromReader);
      msg.setServer(value);
      break;
    case 6:
      var value = new proto_sessions_session_pb.Session;
      reader.readMessage(value,proto_sessions_session_pb.Session.deserializeBinaryFromReader);
      msg.setSession(value);
      break;
    case 7:
      var value = new proto_sessions_session_pb.SessionList;
      reader.readMessage(value,proto_sessions_session_pb.SessionList.deserializeBinaryFromReader);
      msg.setSessionList(value);
      break;
    case 8:
      var value = new proto_interactions_interaction_pb.Interaction;
      reader.readMessage(value,proto_interactions_interaction_pb.Interaction.deserializeBinaryFromReader);
      msg.setInteraction(value);
      break;
    case 9:
      var value = new proto_interactions_interaction_pb.InteractionList;
      reader.readMessage(value,proto_interactions_interaction_pb.InteractionList.deserializeBinaryFromReader);
      msg.setInteractionList(value);
      break;
    case 10:
      var value = new proto_general_stringList_pb.StringList;
      reader.readMessage(value,proto_general_stringList_pb.StringList.deserializeBinaryFromReader);
      msg.setStringList(value);
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
proto.ubii.services.ServiceReply.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ubii.services.ServiceReply.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ubii.services.ServiceReply} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ubii.services.ServiceReply.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getSuccess();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      proto_general_success_pb.Success.serializeBinaryToWriter
    );
  }
  f = message.getError();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      proto_general_error_pb.Error.serializeBinaryToWriter
    );
  }
  f = message.getClient();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      proto_clients_client_pb.Client.serializeBinaryToWriter
    );
  }
  f = message.getDevice();
  if (f != null) {
    writer.writeMessage(
      4,
      f,
      proto_devices_device_pb.Device.serializeBinaryToWriter
    );
  }
  f = message.getServer();
  if (f != null) {
    writer.writeMessage(
      5,
      f,
      proto_servers_server_pb.Server.serializeBinaryToWriter
    );
  }
  f = message.getSession();
  if (f != null) {
    writer.writeMessage(
      6,
      f,
      proto_sessions_session_pb.Session.serializeBinaryToWriter
    );
  }
  f = message.getSessionList();
  if (f != null) {
    writer.writeMessage(
      7,
      f,
      proto_sessions_session_pb.SessionList.serializeBinaryToWriter
    );
  }
  f = message.getInteraction();
  if (f != null) {
    writer.writeMessage(
      8,
      f,
      proto_interactions_interaction_pb.Interaction.serializeBinaryToWriter
    );
  }
  f = message.getInteractionList();
  if (f != null) {
    writer.writeMessage(
      9,
      f,
      proto_interactions_interaction_pb.InteractionList.serializeBinaryToWriter
    );
  }
  f = message.getStringList();
  if (f != null) {
    writer.writeMessage(
      10,
      f,
      proto_general_stringList_pb.StringList.serializeBinaryToWriter
    );
  }
};


/**
 * optional ubii.general.Success success = 1;
 * @return {?proto.ubii.general.Success}
 */
proto.ubii.services.ServiceReply.prototype.getSuccess = function() {
  return /** @type{?proto.ubii.general.Success} */ (
    jspb.Message.getWrapperField(this, proto_general_success_pb.Success, 1));
};


/** @param {?proto.ubii.general.Success|undefined} value */
proto.ubii.services.ServiceReply.prototype.setSuccess = function(value) {
  jspb.Message.setOneofWrapperField(this, 1, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearSuccess = function() {
  this.setSuccess(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasSuccess = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional ubii.general.Error error = 2;
 * @return {?proto.ubii.general.Error}
 */
proto.ubii.services.ServiceReply.prototype.getError = function() {
  return /** @type{?proto.ubii.general.Error} */ (
    jspb.Message.getWrapperField(this, proto_general_error_pb.Error, 2));
};


/** @param {?proto.ubii.general.Error|undefined} value */
proto.ubii.services.ServiceReply.prototype.setError = function(value) {
  jspb.Message.setOneofWrapperField(this, 2, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearError = function() {
  this.setError(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasError = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional ubii.clients.Client client = 3;
 * @return {?proto.ubii.clients.Client}
 */
proto.ubii.services.ServiceReply.prototype.getClient = function() {
  return /** @type{?proto.ubii.clients.Client} */ (
    jspb.Message.getWrapperField(this, proto_clients_client_pb.Client, 3));
};


/** @param {?proto.ubii.clients.Client|undefined} value */
proto.ubii.services.ServiceReply.prototype.setClient = function(value) {
  jspb.Message.setOneofWrapperField(this, 3, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearClient = function() {
  this.setClient(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasClient = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * optional ubii.devices.Device device = 4;
 * @return {?proto.ubii.devices.Device}
 */
proto.ubii.services.ServiceReply.prototype.getDevice = function() {
  return /** @type{?proto.ubii.devices.Device} */ (
    jspb.Message.getWrapperField(this, proto_devices_device_pb.Device, 4));
};


/** @param {?proto.ubii.devices.Device|undefined} value */
proto.ubii.services.ServiceReply.prototype.setDevice = function(value) {
  jspb.Message.setOneofWrapperField(this, 4, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearDevice = function() {
  this.setDevice(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasDevice = function() {
  return jspb.Message.getField(this, 4) != null;
};


/**
 * optional ubii.servers.Server server = 5;
 * @return {?proto.ubii.servers.Server}
 */
proto.ubii.services.ServiceReply.prototype.getServer = function() {
  return /** @type{?proto.ubii.servers.Server} */ (
    jspb.Message.getWrapperField(this, proto_servers_server_pb.Server, 5));
};


/** @param {?proto.ubii.servers.Server|undefined} value */
proto.ubii.services.ServiceReply.prototype.setServer = function(value) {
  jspb.Message.setOneofWrapperField(this, 5, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearServer = function() {
  this.setServer(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasServer = function() {
  return jspb.Message.getField(this, 5) != null;
};


/**
 * optional ubii.sessions.Session session = 6;
 * @return {?proto.ubii.sessions.Session}
 */
proto.ubii.services.ServiceReply.prototype.getSession = function() {
  return /** @type{?proto.ubii.sessions.Session} */ (
    jspb.Message.getWrapperField(this, proto_sessions_session_pb.Session, 6));
};


/** @param {?proto.ubii.sessions.Session|undefined} value */
proto.ubii.services.ServiceReply.prototype.setSession = function(value) {
  jspb.Message.setOneofWrapperField(this, 6, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearSession = function() {
  this.setSession(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasSession = function() {
  return jspb.Message.getField(this, 6) != null;
};


/**
 * optional ubii.sessions.SessionList session_list = 7;
 * @return {?proto.ubii.sessions.SessionList}
 */
proto.ubii.services.ServiceReply.prototype.getSessionList = function() {
  return /** @type{?proto.ubii.sessions.SessionList} */ (
    jspb.Message.getWrapperField(this, proto_sessions_session_pb.SessionList, 7));
};


/** @param {?proto.ubii.sessions.SessionList|undefined} value */
proto.ubii.services.ServiceReply.prototype.setSessionList = function(value) {
  jspb.Message.setOneofWrapperField(this, 7, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearSessionList = function() {
  this.setSessionList(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasSessionList = function() {
  return jspb.Message.getField(this, 7) != null;
};


/**
 * optional ubii.interactions.Interaction interaction = 8;
 * @return {?proto.ubii.interactions.Interaction}
 */
proto.ubii.services.ServiceReply.prototype.getInteraction = function() {
  return /** @type{?proto.ubii.interactions.Interaction} */ (
    jspb.Message.getWrapperField(this, proto_interactions_interaction_pb.Interaction, 8));
};


/** @param {?proto.ubii.interactions.Interaction|undefined} value */
proto.ubii.services.ServiceReply.prototype.setInteraction = function(value) {
  jspb.Message.setOneofWrapperField(this, 8, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearInteraction = function() {
  this.setInteraction(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasInteraction = function() {
  return jspb.Message.getField(this, 8) != null;
};


/**
 * optional ubii.interactions.InteractionList interaction_list = 9;
 * @return {?proto.ubii.interactions.InteractionList}
 */
proto.ubii.services.ServiceReply.prototype.getInteractionList = function() {
  return /** @type{?proto.ubii.interactions.InteractionList} */ (
    jspb.Message.getWrapperField(this, proto_interactions_interaction_pb.InteractionList, 9));
};


/** @param {?proto.ubii.interactions.InteractionList|undefined} value */
proto.ubii.services.ServiceReply.prototype.setInteractionList = function(value) {
  jspb.Message.setOneofWrapperField(this, 9, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearInteractionList = function() {
  this.setInteractionList(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasInteractionList = function() {
  return jspb.Message.getField(this, 9) != null;
};


/**
 * optional ubii.general.StringList string_list = 10;
 * @return {?proto.ubii.general.StringList}
 */
proto.ubii.services.ServiceReply.prototype.getStringList = function() {
  return /** @type{?proto.ubii.general.StringList} */ (
    jspb.Message.getWrapperField(this, proto_general_stringList_pb.StringList, 10));
};


/** @param {?proto.ubii.general.StringList|undefined} value */
proto.ubii.services.ServiceReply.prototype.setStringList = function(value) {
  jspb.Message.setOneofWrapperField(this, 10, proto.ubii.services.ServiceReply.oneofGroups_[0], value);
};


proto.ubii.services.ServiceReply.prototype.clearStringList = function() {
  this.setStringList(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ubii.services.ServiceReply.prototype.hasStringList = function() {
  return jspb.Message.getField(this, 10) != null;
};


goog.object.extend(exports, proto.ubii.services);