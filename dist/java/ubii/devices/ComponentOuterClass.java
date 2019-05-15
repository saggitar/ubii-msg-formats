// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/devices/component.proto

package ubii.devices;

public final class ComponentOuterClass {
  private ComponentOuterClass() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface ComponentOrBuilder extends
      // @@protoc_insertion_point(interface_extends:ubii.devices.Component)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string topic = 1;</code>
     */
    java.lang.String getTopic();
    /**
     * <code>string topic = 1;</code>
     */
    com.google.protobuf.ByteString
        getTopicBytes();

    /**
     * <code>string message_format = 2;</code>
     */
    java.lang.String getMessageFormat();
    /**
     * <code>string message_format = 2;</code>
     */
    com.google.protobuf.ByteString
        getMessageFormatBytes();

    /**
     * <code>.ubii.devices.Component.IOType io_type = 3;</code>
     */
    int getIoTypeValue();
    /**
     * <code>.ubii.devices.Component.IOType io_type = 3;</code>
     */
    ubii.devices.ComponentOuterClass.Component.IOType getIoType();
  }
  /**
   * Protobuf type {@code ubii.devices.Component}
   */
  public  static final class Component extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:ubii.devices.Component)
      ComponentOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Component.newBuilder() to construct.
    private Component(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Component() {
      topic_ = "";
      messageFormat_ = "";
      ioType_ = 0;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Component(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            case 10: {
              java.lang.String s = input.readStringRequireUtf8();

              topic_ = s;
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              messageFormat_ = s;
              break;
            }
            case 24: {
              int rawValue = input.readEnum();

              ioType_ = rawValue;
              break;
            }
            default: {
              if (!parseUnknownFieldProto3(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return ubii.devices.ComponentOuterClass.internal_static_ubii_devices_Component_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return ubii.devices.ComponentOuterClass.internal_static_ubii_devices_Component_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              ubii.devices.ComponentOuterClass.Component.class, ubii.devices.ComponentOuterClass.Component.Builder.class);
    }

    /**
     * Protobuf enum {@code ubii.devices.Component.IOType}
     */
    public enum IOType
        implements com.google.protobuf.ProtocolMessageEnum {
      /**
       * <code>INPUT = 0;</code>
       */
      INPUT(0),
      /**
       * <code>OUTPUT = 1;</code>
       */
      OUTPUT(1),
      UNRECOGNIZED(-1),
      ;

      /**
       * <code>INPUT = 0;</code>
       */
      public static final int INPUT_VALUE = 0;
      /**
       * <code>OUTPUT = 1;</code>
       */
      public static final int OUTPUT_VALUE = 1;


      public final int getNumber() {
        if (this == UNRECOGNIZED) {
          throw new java.lang.IllegalArgumentException(
              "Can't get the number of an unknown enum value.");
        }
        return value;
      }

      /**
       * @deprecated Use {@link #forNumber(int)} instead.
       */
      @java.lang.Deprecated
      public static IOType valueOf(int value) {
        return forNumber(value);
      }

      public static IOType forNumber(int value) {
        switch (value) {
          case 0: return INPUT;
          case 1: return OUTPUT;
          default: return null;
        }
      }

      public static com.google.protobuf.Internal.EnumLiteMap<IOType>
          internalGetValueMap() {
        return internalValueMap;
      }
      private static final com.google.protobuf.Internal.EnumLiteMap<
          IOType> internalValueMap =
            new com.google.protobuf.Internal.EnumLiteMap<IOType>() {
              public IOType findValueByNumber(int number) {
                return IOType.forNumber(number);
              }
            };

      public final com.google.protobuf.Descriptors.EnumValueDescriptor
          getValueDescriptor() {
        return getDescriptor().getValues().get(ordinal());
      }
      public final com.google.protobuf.Descriptors.EnumDescriptor
          getDescriptorForType() {
        return getDescriptor();
      }
      public static final com.google.protobuf.Descriptors.EnumDescriptor
          getDescriptor() {
        return ubii.devices.ComponentOuterClass.Component.getDescriptor().getEnumTypes().get(0);
      }

      private static final IOType[] VALUES = values();

      public static IOType valueOf(
          com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
        if (desc.getType() != getDescriptor()) {
          throw new java.lang.IllegalArgumentException(
            "EnumValueDescriptor is not for this type.");
        }
        if (desc.getIndex() == -1) {
          return UNRECOGNIZED;
        }
        return VALUES[desc.getIndex()];
      }

      private final int value;

      private IOType(int value) {
        this.value = value;
      }

      // @@protoc_insertion_point(enum_scope:ubii.devices.Component.IOType)
    }

    public static final int TOPIC_FIELD_NUMBER = 1;
    private volatile java.lang.Object topic_;
    /**
     * <code>string topic = 1;</code>
     */
    public java.lang.String getTopic() {
      java.lang.Object ref = topic_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        topic_ = s;
        return s;
      }
    }
    /**
     * <code>string topic = 1;</code>
     */
    public com.google.protobuf.ByteString
        getTopicBytes() {
      java.lang.Object ref = topic_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        topic_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int MESSAGE_FORMAT_FIELD_NUMBER = 2;
    private volatile java.lang.Object messageFormat_;
    /**
     * <code>string message_format = 2;</code>
     */
    public java.lang.String getMessageFormat() {
      java.lang.Object ref = messageFormat_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        messageFormat_ = s;
        return s;
      }
    }
    /**
     * <code>string message_format = 2;</code>
     */
    public com.google.protobuf.ByteString
        getMessageFormatBytes() {
      java.lang.Object ref = messageFormat_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        messageFormat_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int IO_TYPE_FIELD_NUMBER = 3;
    private int ioType_;
    /**
     * <code>.ubii.devices.Component.IOType io_type = 3;</code>
     */
    public int getIoTypeValue() {
      return ioType_;
    }
    /**
     * <code>.ubii.devices.Component.IOType io_type = 3;</code>
     */
    public ubii.devices.ComponentOuterClass.Component.IOType getIoType() {
      @SuppressWarnings("deprecation")
      ubii.devices.ComponentOuterClass.Component.IOType result = ubii.devices.ComponentOuterClass.Component.IOType.valueOf(ioType_);
      return result == null ? ubii.devices.ComponentOuterClass.Component.IOType.UNRECOGNIZED : result;
    }

    private byte memoizedIsInitialized = -1;
    @java.lang.Override
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    @java.lang.Override
    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (!getTopicBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, topic_);
      }
      if (!getMessageFormatBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, messageFormat_);
      }
      if (ioType_ != ubii.devices.ComponentOuterClass.Component.IOType.INPUT.getNumber()) {
        output.writeEnum(3, ioType_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getTopicBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, topic_);
      }
      if (!getMessageFormatBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, messageFormat_);
      }
      if (ioType_ != ubii.devices.ComponentOuterClass.Component.IOType.INPUT.getNumber()) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(3, ioType_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof ubii.devices.ComponentOuterClass.Component)) {
        return super.equals(obj);
      }
      ubii.devices.ComponentOuterClass.Component other = (ubii.devices.ComponentOuterClass.Component) obj;

      boolean result = true;
      result = result && getTopic()
          .equals(other.getTopic());
      result = result && getMessageFormat()
          .equals(other.getMessageFormat());
      result = result && ioType_ == other.ioType_;
      result = result && unknownFields.equals(other.unknownFields);
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + TOPIC_FIELD_NUMBER;
      hash = (53 * hash) + getTopic().hashCode();
      hash = (37 * hash) + MESSAGE_FORMAT_FIELD_NUMBER;
      hash = (53 * hash) + getMessageFormat().hashCode();
      hash = (37 * hash) + IO_TYPE_FIELD_NUMBER;
      hash = (53 * hash) + ioType_;
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static ubii.devices.ComponentOuterClass.Component parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static ubii.devices.ComponentOuterClass.Component parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static ubii.devices.ComponentOuterClass.Component parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static ubii.devices.ComponentOuterClass.Component parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static ubii.devices.ComponentOuterClass.Component parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static ubii.devices.ComponentOuterClass.Component parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static ubii.devices.ComponentOuterClass.Component parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static ubii.devices.ComponentOuterClass.Component parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static ubii.devices.ComponentOuterClass.Component parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static ubii.devices.ComponentOuterClass.Component parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static ubii.devices.ComponentOuterClass.Component parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static ubii.devices.ComponentOuterClass.Component parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    @java.lang.Override
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(ubii.devices.ComponentOuterClass.Component prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    @java.lang.Override
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code ubii.devices.Component}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:ubii.devices.Component)
        ubii.devices.ComponentOuterClass.ComponentOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return ubii.devices.ComponentOuterClass.internal_static_ubii_devices_Component_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return ubii.devices.ComponentOuterClass.internal_static_ubii_devices_Component_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                ubii.devices.ComponentOuterClass.Component.class, ubii.devices.ComponentOuterClass.Component.Builder.class);
      }

      // Construct using ubii.devices.ComponentOuterClass.Component.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      @java.lang.Override
      public Builder clear() {
        super.clear();
        topic_ = "";

        messageFormat_ = "";

        ioType_ = 0;

        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return ubii.devices.ComponentOuterClass.internal_static_ubii_devices_Component_descriptor;
      }

      @java.lang.Override
      public ubii.devices.ComponentOuterClass.Component getDefaultInstanceForType() {
        return ubii.devices.ComponentOuterClass.Component.getDefaultInstance();
      }

      @java.lang.Override
      public ubii.devices.ComponentOuterClass.Component build() {
        ubii.devices.ComponentOuterClass.Component result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public ubii.devices.ComponentOuterClass.Component buildPartial() {
        ubii.devices.ComponentOuterClass.Component result = new ubii.devices.ComponentOuterClass.Component(this);
        result.topic_ = topic_;
        result.messageFormat_ = messageFormat_;
        result.ioType_ = ioType_;
        onBuilt();
        return result;
      }

      @java.lang.Override
      public Builder clone() {
        return (Builder) super.clone();
      }
      @java.lang.Override
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.setField(field, value);
      }
      @java.lang.Override
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      @java.lang.Override
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      @java.lang.Override
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      @java.lang.Override
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      @java.lang.Override
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof ubii.devices.ComponentOuterClass.Component) {
          return mergeFrom((ubii.devices.ComponentOuterClass.Component)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(ubii.devices.ComponentOuterClass.Component other) {
        if (other == ubii.devices.ComponentOuterClass.Component.getDefaultInstance()) return this;
        if (!other.getTopic().isEmpty()) {
          topic_ = other.topic_;
          onChanged();
        }
        if (!other.getMessageFormat().isEmpty()) {
          messageFormat_ = other.messageFormat_;
          onChanged();
        }
        if (other.ioType_ != 0) {
          setIoTypeValue(other.getIoTypeValue());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      @java.lang.Override
      public final boolean isInitialized() {
        return true;
      }

      @java.lang.Override
      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        ubii.devices.ComponentOuterClass.Component parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (ubii.devices.ComponentOuterClass.Component) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object topic_ = "";
      /**
       * <code>string topic = 1;</code>
       */
      public java.lang.String getTopic() {
        java.lang.Object ref = topic_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          topic_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string topic = 1;</code>
       */
      public com.google.protobuf.ByteString
          getTopicBytes() {
        java.lang.Object ref = topic_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          topic_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string topic = 1;</code>
       */
      public Builder setTopic(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        topic_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string topic = 1;</code>
       */
      public Builder clearTopic() {
        
        topic_ = getDefaultInstance().getTopic();
        onChanged();
        return this;
      }
      /**
       * <code>string topic = 1;</code>
       */
      public Builder setTopicBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        topic_ = value;
        onChanged();
        return this;
      }

      private java.lang.Object messageFormat_ = "";
      /**
       * <code>string message_format = 2;</code>
       */
      public java.lang.String getMessageFormat() {
        java.lang.Object ref = messageFormat_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          messageFormat_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string message_format = 2;</code>
       */
      public com.google.protobuf.ByteString
          getMessageFormatBytes() {
        java.lang.Object ref = messageFormat_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          messageFormat_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string message_format = 2;</code>
       */
      public Builder setMessageFormat(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        messageFormat_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string message_format = 2;</code>
       */
      public Builder clearMessageFormat() {
        
        messageFormat_ = getDefaultInstance().getMessageFormat();
        onChanged();
        return this;
      }
      /**
       * <code>string message_format = 2;</code>
       */
      public Builder setMessageFormatBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        messageFormat_ = value;
        onChanged();
        return this;
      }

      private int ioType_ = 0;
      /**
       * <code>.ubii.devices.Component.IOType io_type = 3;</code>
       */
      public int getIoTypeValue() {
        return ioType_;
      }
      /**
       * <code>.ubii.devices.Component.IOType io_type = 3;</code>
       */
      public Builder setIoTypeValue(int value) {
        ioType_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>.ubii.devices.Component.IOType io_type = 3;</code>
       */
      public ubii.devices.ComponentOuterClass.Component.IOType getIoType() {
        @SuppressWarnings("deprecation")
        ubii.devices.ComponentOuterClass.Component.IOType result = ubii.devices.ComponentOuterClass.Component.IOType.valueOf(ioType_);
        return result == null ? ubii.devices.ComponentOuterClass.Component.IOType.UNRECOGNIZED : result;
      }
      /**
       * <code>.ubii.devices.Component.IOType io_type = 3;</code>
       */
      public Builder setIoType(ubii.devices.ComponentOuterClass.Component.IOType value) {
        if (value == null) {
          throw new NullPointerException();
        }
        
        ioType_ = value.getNumber();
        onChanged();
        return this;
      }
      /**
       * <code>.ubii.devices.Component.IOType io_type = 3;</code>
       */
      public Builder clearIoType() {
        
        ioType_ = 0;
        onChanged();
        return this;
      }
      @java.lang.Override
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFieldsProto3(unknownFields);
      }

      @java.lang.Override
      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:ubii.devices.Component)
    }

    // @@protoc_insertion_point(class_scope:ubii.devices.Component)
    private static final ubii.devices.ComponentOuterClass.Component DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new ubii.devices.ComponentOuterClass.Component();
    }

    public static ubii.devices.ComponentOuterClass.Component getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Component>
        PARSER = new com.google.protobuf.AbstractParser<Component>() {
      @java.lang.Override
      public Component parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Component(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Component> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Component> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public ubii.devices.ComponentOuterClass.Component getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_ubii_devices_Component_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_ubii_devices_Component_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\035proto/devices/component.proto\022\014ubii.de" +
      "vices\"\204\001\n\tComponent\022\r\n\005topic\030\001 \001(\t\022\026\n\016me" +
      "ssage_format\030\002 \001(\t\022/\n\007io_type\030\003 \001(\0162\036.ub" +
      "ii.devices.Component.IOType\"\037\n\006IOType\022\t\n" +
      "\005INPUT\020\000\022\n\n\006OUTPUT\020\001b\006proto3"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
        new com.google.protobuf.Descriptors.FileDescriptor.    InternalDescriptorAssigner() {
          public com.google.protobuf.ExtensionRegistry assignDescriptors(
              com.google.protobuf.Descriptors.FileDescriptor root) {
            descriptor = root;
            return null;
          }
        };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        }, assigner);
    internal_static_ubii_devices_Component_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_ubii_devices_Component_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_ubii_devices_Component_descriptor,
        new java.lang.String[] { "Topic", "MessageFormat", "IoType", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
