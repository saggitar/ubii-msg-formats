// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: proto/topicData/topicDataRecord/dataStructure/vector8.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Ubii.DataStructure {

  /// <summary>Holder for reflection information generated from proto/topicData/topicDataRecord/dataStructure/vector8.proto</summary>
  public static partial class Vector8Reflection {

    #region Descriptor
    /// <summary>File descriptor for proto/topicData/topicDataRecord/dataStructure/vector8.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static Vector8Reflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Cjtwcm90by90b3BpY0RhdGEvdG9waWNEYXRhUmVjb3JkL2RhdGFTdHJ1Y3R1",
            "cmUvdmVjdG9yOC5wcm90bxISdWJpaS5kYXRhU3RydWN0dXJlImkKB1ZlY3Rv",
            "cjgSCgoCdjAYASABKAESCgoCdjEYAiABKAESCgoCdjIYAyABKAESCgoCdjMY",
            "BCABKAESCgoCdjQYBSABKAESCgoCdjUYBiABKAESCgoCdjYYByABKAESCgoC",
            "djcYCCABKAFiBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Ubii.DataStructure.Vector8), global::Ubii.DataStructure.Vector8.Parser, new[]{ "V0", "V1", "V2", "V3", "V4", "V5", "V6", "V7" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class Vector8 : pb::IMessage<Vector8> {
    private static readonly pb::MessageParser<Vector8> _parser = new pb::MessageParser<Vector8>(() => new Vector8());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<Vector8> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Ubii.DataStructure.Vector8Reflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Vector8() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Vector8(Vector8 other) : this() {
      v0_ = other.v0_;
      v1_ = other.v1_;
      v2_ = other.v2_;
      v3_ = other.v3_;
      v4_ = other.v4_;
      v5_ = other.v5_;
      v6_ = other.v6_;
      v7_ = other.v7_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Vector8 Clone() {
      return new Vector8(this);
    }

    /// <summary>Field number for the "v0" field.</summary>
    public const int V0FieldNumber = 1;
    private double v0_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double V0 {
      get { return v0_; }
      set {
        v0_ = value;
      }
    }

    /// <summary>Field number for the "v1" field.</summary>
    public const int V1FieldNumber = 2;
    private double v1_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double V1 {
      get { return v1_; }
      set {
        v1_ = value;
      }
    }

    /// <summary>Field number for the "v2" field.</summary>
    public const int V2FieldNumber = 3;
    private double v2_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double V2 {
      get { return v2_; }
      set {
        v2_ = value;
      }
    }

    /// <summary>Field number for the "v3" field.</summary>
    public const int V3FieldNumber = 4;
    private double v3_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double V3 {
      get { return v3_; }
      set {
        v3_ = value;
      }
    }

    /// <summary>Field number for the "v4" field.</summary>
    public const int V4FieldNumber = 5;
    private double v4_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double V4 {
      get { return v4_; }
      set {
        v4_ = value;
      }
    }

    /// <summary>Field number for the "v5" field.</summary>
    public const int V5FieldNumber = 6;
    private double v5_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double V5 {
      get { return v5_; }
      set {
        v5_ = value;
      }
    }

    /// <summary>Field number for the "v6" field.</summary>
    public const int V6FieldNumber = 7;
    private double v6_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double V6 {
      get { return v6_; }
      set {
        v6_ = value;
      }
    }

    /// <summary>Field number for the "v7" field.</summary>
    public const int V7FieldNumber = 8;
    private double v7_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double V7 {
      get { return v7_; }
      set {
        v7_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as Vector8);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(Vector8 other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(V0, other.V0)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(V1, other.V1)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(V2, other.V2)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(V3, other.V3)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(V4, other.V4)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(V5, other.V5)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(V6, other.V6)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(V7, other.V7)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (V0 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(V0);
      if (V1 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(V1);
      if (V2 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(V2);
      if (V3 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(V3);
      if (V4 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(V4);
      if (V5 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(V5);
      if (V6 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(V6);
      if (V7 != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(V7);
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
      if (V0 != 0D) {
        output.WriteRawTag(9);
        output.WriteDouble(V0);
      }
      if (V1 != 0D) {
        output.WriteRawTag(17);
        output.WriteDouble(V1);
      }
      if (V2 != 0D) {
        output.WriteRawTag(25);
        output.WriteDouble(V2);
      }
      if (V3 != 0D) {
        output.WriteRawTag(33);
        output.WriteDouble(V3);
      }
      if (V4 != 0D) {
        output.WriteRawTag(41);
        output.WriteDouble(V4);
      }
      if (V5 != 0D) {
        output.WriteRawTag(49);
        output.WriteDouble(V5);
      }
      if (V6 != 0D) {
        output.WriteRawTag(57);
        output.WriteDouble(V6);
      }
      if (V7 != 0D) {
        output.WriteRawTag(65);
        output.WriteDouble(V7);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (V0 != 0D) {
        size += 1 + 8;
      }
      if (V1 != 0D) {
        size += 1 + 8;
      }
      if (V2 != 0D) {
        size += 1 + 8;
      }
      if (V3 != 0D) {
        size += 1 + 8;
      }
      if (V4 != 0D) {
        size += 1 + 8;
      }
      if (V5 != 0D) {
        size += 1 + 8;
      }
      if (V6 != 0D) {
        size += 1 + 8;
      }
      if (V7 != 0D) {
        size += 1 + 8;
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(Vector8 other) {
      if (other == null) {
        return;
      }
      if (other.V0 != 0D) {
        V0 = other.V0;
      }
      if (other.V1 != 0D) {
        V1 = other.V1;
      }
      if (other.V2 != 0D) {
        V2 = other.V2;
      }
      if (other.V3 != 0D) {
        V3 = other.V3;
      }
      if (other.V4 != 0D) {
        V4 = other.V4;
      }
      if (other.V5 != 0D) {
        V5 = other.V5;
      }
      if (other.V6 != 0D) {
        V6 = other.V6;
      }
      if (other.V7 != 0D) {
        V7 = other.V7;
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 9: {
            V0 = input.ReadDouble();
            break;
          }
          case 17: {
            V1 = input.ReadDouble();
            break;
          }
          case 25: {
            V2 = input.ReadDouble();
            break;
          }
          case 33: {
            V3 = input.ReadDouble();
            break;
          }
          case 41: {
            V4 = input.ReadDouble();
            break;
          }
          case 49: {
            V5 = input.ReadDouble();
            break;
          }
          case 57: {
            V6 = input.ReadDouble();
            break;
          }
          case 65: {
            V7 = input.ReadDouble();
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code
