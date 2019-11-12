// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/topicData/topicDataRecord/dataStructure/vector8.proto

package ubii.dataStructure;

public final class Vector8OuterClass {
  private Vector8OuterClass() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface Vector8OrBuilder extends
      // @@protoc_insertion_point(interface_extends:ubii.dataStructure.Vector8)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>double v0 = 1;</code>
     */
    double getV0();

    /**
     * <code>double v1 = 2;</code>
     */
    double getV1();

    /**
     * <code>double v2 = 3;</code>
     */
    double getV2();

    /**
     * <code>double v3 = 4;</code>
     */
    double getV3();

    /**
     * <code>double v4 = 5;</code>
     */
    double getV4();

    /**
     * <code>double v5 = 6;</code>
     */
    double getV5();

    /**
     * <code>double v6 = 7;</code>
     */
    double getV6();

    /**
     * <code>double v7 = 8;</code>
     */
    double getV7();
  }
  /**
   * Protobuf type {@code ubii.dataStructure.Vector8}
   */
  public  static final class Vector8 extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:ubii.dataStructure.Vector8)
      Vector8OrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Vector8.newBuilder() to construct.
    private Vector8(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Vector8() {
      v0_ = 0D;
      v1_ = 0D;
      v2_ = 0D;
      v3_ = 0D;
      v4_ = 0D;
      v5_ = 0D;
      v6_ = 0D;
      v7_ = 0D;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Vector8(
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
            case 9: {

              v0_ = input.readDouble();
              break;
            }
            case 17: {

              v1_ = input.readDouble();
              break;
            }
            case 25: {

              v2_ = input.readDouble();
              break;
            }
            case 33: {

              v3_ = input.readDouble();
              break;
            }
            case 41: {

              v4_ = input.readDouble();
              break;
            }
            case 49: {

              v5_ = input.readDouble();
              break;
            }
            case 57: {

              v6_ = input.readDouble();
              break;
            }
            case 65: {

              v7_ = input.readDouble();
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
      return ubii.dataStructure.Vector8OuterClass.internal_static_ubii_dataStructure_Vector8_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return ubii.dataStructure.Vector8OuterClass.internal_static_ubii_dataStructure_Vector8_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              ubii.dataStructure.Vector8OuterClass.Vector8.class, ubii.dataStructure.Vector8OuterClass.Vector8.Builder.class);
    }

    public static final int V0_FIELD_NUMBER = 1;
    private double v0_;
    /**
     * <code>double v0 = 1;</code>
     */
    public double getV0() {
      return v0_;
    }

    public static final int V1_FIELD_NUMBER = 2;
    private double v1_;
    /**
     * <code>double v1 = 2;</code>
     */
    public double getV1() {
      return v1_;
    }

    public static final int V2_FIELD_NUMBER = 3;
    private double v2_;
    /**
     * <code>double v2 = 3;</code>
     */
    public double getV2() {
      return v2_;
    }

    public static final int V3_FIELD_NUMBER = 4;
    private double v3_;
    /**
     * <code>double v3 = 4;</code>
     */
    public double getV3() {
      return v3_;
    }

    public static final int V4_FIELD_NUMBER = 5;
    private double v4_;
    /**
     * <code>double v4 = 5;</code>
     */
    public double getV4() {
      return v4_;
    }

    public static final int V5_FIELD_NUMBER = 6;
    private double v5_;
    /**
     * <code>double v5 = 6;</code>
     */
    public double getV5() {
      return v5_;
    }

    public static final int V6_FIELD_NUMBER = 7;
    private double v6_;
    /**
     * <code>double v6 = 7;</code>
     */
    public double getV6() {
      return v6_;
    }

    public static final int V7_FIELD_NUMBER = 8;
    private double v7_;
    /**
     * <code>double v7 = 8;</code>
     */
    public double getV7() {
      return v7_;
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
      if (v0_ != 0D) {
        output.writeDouble(1, v0_);
      }
      if (v1_ != 0D) {
        output.writeDouble(2, v1_);
      }
      if (v2_ != 0D) {
        output.writeDouble(3, v2_);
      }
      if (v3_ != 0D) {
        output.writeDouble(4, v3_);
      }
      if (v4_ != 0D) {
        output.writeDouble(5, v4_);
      }
      if (v5_ != 0D) {
        output.writeDouble(6, v5_);
      }
      if (v6_ != 0D) {
        output.writeDouble(7, v6_);
      }
      if (v7_ != 0D) {
        output.writeDouble(8, v7_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (v0_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(1, v0_);
      }
      if (v1_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(2, v1_);
      }
      if (v2_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(3, v2_);
      }
      if (v3_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(4, v3_);
      }
      if (v4_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(5, v4_);
      }
      if (v5_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(6, v5_);
      }
      if (v6_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(7, v6_);
      }
      if (v7_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(8, v7_);
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
      if (!(obj instanceof ubii.dataStructure.Vector8OuterClass.Vector8)) {
        return super.equals(obj);
      }
      ubii.dataStructure.Vector8OuterClass.Vector8 other = (ubii.dataStructure.Vector8OuterClass.Vector8) obj;

      boolean result = true;
      result = result && (
          java.lang.Double.doubleToLongBits(getV0())
          == java.lang.Double.doubleToLongBits(
              other.getV0()));
      result = result && (
          java.lang.Double.doubleToLongBits(getV1())
          == java.lang.Double.doubleToLongBits(
              other.getV1()));
      result = result && (
          java.lang.Double.doubleToLongBits(getV2())
          == java.lang.Double.doubleToLongBits(
              other.getV2()));
      result = result && (
          java.lang.Double.doubleToLongBits(getV3())
          == java.lang.Double.doubleToLongBits(
              other.getV3()));
      result = result && (
          java.lang.Double.doubleToLongBits(getV4())
          == java.lang.Double.doubleToLongBits(
              other.getV4()));
      result = result && (
          java.lang.Double.doubleToLongBits(getV5())
          == java.lang.Double.doubleToLongBits(
              other.getV5()));
      result = result && (
          java.lang.Double.doubleToLongBits(getV6())
          == java.lang.Double.doubleToLongBits(
              other.getV6()));
      result = result && (
          java.lang.Double.doubleToLongBits(getV7())
          == java.lang.Double.doubleToLongBits(
              other.getV7()));
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
      hash = (37 * hash) + V0_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getV0()));
      hash = (37 * hash) + V1_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getV1()));
      hash = (37 * hash) + V2_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getV2()));
      hash = (37 * hash) + V3_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getV3()));
      hash = (37 * hash) + V4_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getV4()));
      hash = (37 * hash) + V5_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getV5()));
      hash = (37 * hash) + V6_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getV6()));
      hash = (37 * hash) + V7_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getV7()));
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static ubii.dataStructure.Vector8OuterClass.Vector8 parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static ubii.dataStructure.Vector8OuterClass.Vector8 parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static ubii.dataStructure.Vector8OuterClass.Vector8 parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static ubii.dataStructure.Vector8OuterClass.Vector8 parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static ubii.dataStructure.Vector8OuterClass.Vector8 parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static ubii.dataStructure.Vector8OuterClass.Vector8 parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static ubii.dataStructure.Vector8OuterClass.Vector8 parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static ubii.dataStructure.Vector8OuterClass.Vector8 parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static ubii.dataStructure.Vector8OuterClass.Vector8 parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static ubii.dataStructure.Vector8OuterClass.Vector8 parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static ubii.dataStructure.Vector8OuterClass.Vector8 parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static ubii.dataStructure.Vector8OuterClass.Vector8 parseFrom(
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
    public static Builder newBuilder(ubii.dataStructure.Vector8OuterClass.Vector8 prototype) {
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
     * Protobuf type {@code ubii.dataStructure.Vector8}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:ubii.dataStructure.Vector8)
        ubii.dataStructure.Vector8OuterClass.Vector8OrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return ubii.dataStructure.Vector8OuterClass.internal_static_ubii_dataStructure_Vector8_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return ubii.dataStructure.Vector8OuterClass.internal_static_ubii_dataStructure_Vector8_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                ubii.dataStructure.Vector8OuterClass.Vector8.class, ubii.dataStructure.Vector8OuterClass.Vector8.Builder.class);
      }

      // Construct using ubii.dataStructure.Vector8OuterClass.Vector8.newBuilder()
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
        v0_ = 0D;

        v1_ = 0D;

        v2_ = 0D;

        v3_ = 0D;

        v4_ = 0D;

        v5_ = 0D;

        v6_ = 0D;

        v7_ = 0D;

        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return ubii.dataStructure.Vector8OuterClass.internal_static_ubii_dataStructure_Vector8_descriptor;
      }

      @java.lang.Override
      public ubii.dataStructure.Vector8OuterClass.Vector8 getDefaultInstanceForType() {
        return ubii.dataStructure.Vector8OuterClass.Vector8.getDefaultInstance();
      }

      @java.lang.Override
      public ubii.dataStructure.Vector8OuterClass.Vector8 build() {
        ubii.dataStructure.Vector8OuterClass.Vector8 result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public ubii.dataStructure.Vector8OuterClass.Vector8 buildPartial() {
        ubii.dataStructure.Vector8OuterClass.Vector8 result = new ubii.dataStructure.Vector8OuterClass.Vector8(this);
        result.v0_ = v0_;
        result.v1_ = v1_;
        result.v2_ = v2_;
        result.v3_ = v3_;
        result.v4_ = v4_;
        result.v5_ = v5_;
        result.v6_ = v6_;
        result.v7_ = v7_;
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
        if (other instanceof ubii.dataStructure.Vector8OuterClass.Vector8) {
          return mergeFrom((ubii.dataStructure.Vector8OuterClass.Vector8)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(ubii.dataStructure.Vector8OuterClass.Vector8 other) {
        if (other == ubii.dataStructure.Vector8OuterClass.Vector8.getDefaultInstance()) return this;
        if (other.getV0() != 0D) {
          setV0(other.getV0());
        }
        if (other.getV1() != 0D) {
          setV1(other.getV1());
        }
        if (other.getV2() != 0D) {
          setV2(other.getV2());
        }
        if (other.getV3() != 0D) {
          setV3(other.getV3());
        }
        if (other.getV4() != 0D) {
          setV4(other.getV4());
        }
        if (other.getV5() != 0D) {
          setV5(other.getV5());
        }
        if (other.getV6() != 0D) {
          setV6(other.getV6());
        }
        if (other.getV7() != 0D) {
          setV7(other.getV7());
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
        ubii.dataStructure.Vector8OuterClass.Vector8 parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (ubii.dataStructure.Vector8OuterClass.Vector8) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private double v0_ ;
      /**
       * <code>double v0 = 1;</code>
       */
      public double getV0() {
        return v0_;
      }
      /**
       * <code>double v0 = 1;</code>
       */
      public Builder setV0(double value) {
        
        v0_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double v0 = 1;</code>
       */
      public Builder clearV0() {
        
        v0_ = 0D;
        onChanged();
        return this;
      }

      private double v1_ ;
      /**
       * <code>double v1 = 2;</code>
       */
      public double getV1() {
        return v1_;
      }
      /**
       * <code>double v1 = 2;</code>
       */
      public Builder setV1(double value) {
        
        v1_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double v1 = 2;</code>
       */
      public Builder clearV1() {
        
        v1_ = 0D;
        onChanged();
        return this;
      }

      private double v2_ ;
      /**
       * <code>double v2 = 3;</code>
       */
      public double getV2() {
        return v2_;
      }
      /**
       * <code>double v2 = 3;</code>
       */
      public Builder setV2(double value) {
        
        v2_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double v2 = 3;</code>
       */
      public Builder clearV2() {
        
        v2_ = 0D;
        onChanged();
        return this;
      }

      private double v3_ ;
      /**
       * <code>double v3 = 4;</code>
       */
      public double getV3() {
        return v3_;
      }
      /**
       * <code>double v3 = 4;</code>
       */
      public Builder setV3(double value) {
        
        v3_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double v3 = 4;</code>
       */
      public Builder clearV3() {
        
        v3_ = 0D;
        onChanged();
        return this;
      }

      private double v4_ ;
      /**
       * <code>double v4 = 5;</code>
       */
      public double getV4() {
        return v4_;
      }
      /**
       * <code>double v4 = 5;</code>
       */
      public Builder setV4(double value) {
        
        v4_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double v4 = 5;</code>
       */
      public Builder clearV4() {
        
        v4_ = 0D;
        onChanged();
        return this;
      }

      private double v5_ ;
      /**
       * <code>double v5 = 6;</code>
       */
      public double getV5() {
        return v5_;
      }
      /**
       * <code>double v5 = 6;</code>
       */
      public Builder setV5(double value) {
        
        v5_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double v5 = 6;</code>
       */
      public Builder clearV5() {
        
        v5_ = 0D;
        onChanged();
        return this;
      }

      private double v6_ ;
      /**
       * <code>double v6 = 7;</code>
       */
      public double getV6() {
        return v6_;
      }
      /**
       * <code>double v6 = 7;</code>
       */
      public Builder setV6(double value) {
        
        v6_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double v6 = 7;</code>
       */
      public Builder clearV6() {
        
        v6_ = 0D;
        onChanged();
        return this;
      }

      private double v7_ ;
      /**
       * <code>double v7 = 8;</code>
       */
      public double getV7() {
        return v7_;
      }
      /**
       * <code>double v7 = 8;</code>
       */
      public Builder setV7(double value) {
        
        v7_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double v7 = 8;</code>
       */
      public Builder clearV7() {
        
        v7_ = 0D;
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


      // @@protoc_insertion_point(builder_scope:ubii.dataStructure.Vector8)
    }

    // @@protoc_insertion_point(class_scope:ubii.dataStructure.Vector8)
    private static final ubii.dataStructure.Vector8OuterClass.Vector8 DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new ubii.dataStructure.Vector8OuterClass.Vector8();
    }

    public static ubii.dataStructure.Vector8OuterClass.Vector8 getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Vector8>
        PARSER = new com.google.protobuf.AbstractParser<Vector8>() {
      @java.lang.Override
      public Vector8 parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Vector8(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Vector8> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Vector8> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public ubii.dataStructure.Vector8OuterClass.Vector8 getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_ubii_dataStructure_Vector8_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_ubii_dataStructure_Vector8_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n;proto/topicData/topicDataRecord/dataSt" +
      "ructure/vector8.proto\022\022ubii.dataStructur" +
      "e\"i\n\007Vector8\022\n\n\002v0\030\001 \001(\001\022\n\n\002v1\030\002 \001(\001\022\n\n\002" +
      "v2\030\003 \001(\001\022\n\n\002v3\030\004 \001(\001\022\n\n\002v4\030\005 \001(\001\022\n\n\002v5\030\006" +
      " \001(\001\022\n\n\002v6\030\007 \001(\001\022\n\n\002v7\030\010 \001(\001b\006proto3"
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
    internal_static_ubii_dataStructure_Vector8_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_ubii_dataStructure_Vector8_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_ubii_dataStructure_Vector8_descriptor,
        new java.lang.String[] { "V0", "V1", "V2", "V3", "V4", "V5", "V6", "V7", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
