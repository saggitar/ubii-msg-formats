// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: proto/topicData/topicDataRecord/topicDataRecord.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Ubii.TopicData {

  /// <summary>Holder for reflection information generated from proto/topicData/topicDataRecord/topicDataRecord.proto</summary>
  public static partial class TopicDataRecordReflection {

    #region Descriptor
    /// <summary>File descriptor for proto/topicData/topicDataRecord/topicDataRecord.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static TopicDataRecordReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CjVwcm90by90b3BpY0RhdGEvdG9waWNEYXRhUmVjb3JkL3RvcGljRGF0YVJl",
            "Y29yZC5wcm90bxIOdWJpaS50b3BpY0RhdGEaO3Byb3RvL3RvcGljRGF0YS90",
            "b3BpY0RhdGFSZWNvcmQvZGF0YVN0cnVjdHVyZS92ZWN0b3IyLnByb3RvGjtw",
            "cm90by90b3BpY0RhdGEvdG9waWNEYXRhUmVjb3JkL2RhdGFTdHJ1Y3R1cmUv",
            "dmVjdG9yMy5wcm90bxo7cHJvdG8vdG9waWNEYXRhL3RvcGljRGF0YVJlY29y",
            "ZC9kYXRhU3RydWN0dXJlL3ZlY3RvcjQucHJvdG8aPnByb3RvL3RvcGljRGF0",
            "YS90b3BpY0RhdGFSZWNvcmQvZGF0YVN0cnVjdHVyZS9xdWF0ZXJuaW9uLnBy",
            "b3RvGj1wcm90by90b3BpY0RhdGEvdG9waWNEYXRhUmVjb3JkL2RhdGFTdHJ1",
            "Y3R1cmUvbWF0cml4M3gyLnByb3RvGj1wcm90by90b3BpY0RhdGEvdG9waWNE",
            "YXRhUmVjb3JkL2RhdGFTdHJ1Y3R1cmUvbWF0cml4NHg0LnByb3RvGjlwcm90",
            "by90b3BpY0RhdGEvdG9waWNEYXRhUmVjb3JkL2RhdGFTdHJ1Y3R1cmUvY29s",
            "b3IucHJvdG8iuQMKD1RvcGljRGF0YVJlY29yZBINCgV0b3BpYxgBIAEoCRIQ",
            "CgZudW1iZXIYAiABKAFIABIRCgdib29sZWFuGAMgASgISAASEAoGc3RyaW5n",
            "GAQgASgJSAASLgoHdmVjdG9yMhgFIAEoCzIbLnViaWkuZGF0YVN0cnVjdHVy",
            "ZS5WZWN0b3IySAASLgoHdmVjdG9yMxgGIAEoCzIbLnViaWkuZGF0YVN0cnVj",
            "dHVyZS5WZWN0b3IzSAASLgoHdmVjdG9yNBgHIAEoCzIbLnViaWkuZGF0YVN0",
            "cnVjdHVyZS5WZWN0b3I0SAASNAoKcXVhdGVybmlvbhgIIAEoCzIeLnViaWku",
            "ZGF0YVN0cnVjdHVyZS5RdWF0ZXJuaW9uSAASMgoJbWF0cml4M3gyGAkgASgL",
            "Mh0udWJpaS5kYXRhU3RydWN0dXJlLk1hdHJpeDN4MkgAEjIKCW1hdHJpeDR4",
            "NBgKIAEoCzIdLnViaWkuZGF0YVN0cnVjdHVyZS5NYXRyaXg0eDRIABIqCgVj",
            "b2xvchgLIAEoCzIZLnViaWkuZGF0YVN0cnVjdHVyZS5Db2xvckgAQgYKBHR5",
            "cGViBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Ubii.DataStructure.Vector2Reflection.Descriptor, global::Ubii.DataStructure.Vector3Reflection.Descriptor, global::Ubii.DataStructure.Vector4Reflection.Descriptor, global::Ubii.DataStructure.QuaternionReflection.Descriptor, global::Ubii.DataStructure.Matrix3X2Reflection.Descriptor, global::Ubii.DataStructure.Matrix4X4Reflection.Descriptor, global::Ubii.DataStructure.ColorReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Ubii.TopicData.TopicDataRecord), global::Ubii.TopicData.TopicDataRecord.Parser, new[]{ "Topic", "Number", "Boolean", "String", "Vector2", "Vector3", "Vector4", "Quaternion", "Matrix3X2", "Matrix4X4", "Color" }, new[]{ "Type" }, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class TopicDataRecord : pb::IMessage<TopicDataRecord> {
    private static readonly pb::MessageParser<TopicDataRecord> _parser = new pb::MessageParser<TopicDataRecord>(() => new TopicDataRecord());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<TopicDataRecord> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Ubii.TopicData.TopicDataRecordReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public TopicDataRecord() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public TopicDataRecord(TopicDataRecord other) : this() {
      topic_ = other.topic_;
      switch (other.TypeCase) {
        case TypeOneofCase.Number:
          Number = other.Number;
          break;
        case TypeOneofCase.Boolean:
          Boolean = other.Boolean;
          break;
        case TypeOneofCase.String:
          String = other.String;
          break;
        case TypeOneofCase.Vector2:
          Vector2 = other.Vector2.Clone();
          break;
        case TypeOneofCase.Vector3:
          Vector3 = other.Vector3.Clone();
          break;
        case TypeOneofCase.Vector4:
          Vector4 = other.Vector4.Clone();
          break;
        case TypeOneofCase.Quaternion:
          Quaternion = other.Quaternion.Clone();
          break;
        case TypeOneofCase.Matrix3X2:
          Matrix3X2 = other.Matrix3X2.Clone();
          break;
        case TypeOneofCase.Matrix4X4:
          Matrix4X4 = other.Matrix4X4.Clone();
          break;
        case TypeOneofCase.Color:
          Color = other.Color.Clone();
          break;
      }

      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public TopicDataRecord Clone() {
      return new TopicDataRecord(this);
    }

    /// <summary>Field number for the "topic" field.</summary>
    public const int TopicFieldNumber = 1;
    private string topic_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Topic {
      get { return topic_; }
      set {
        topic_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "number" field.</summary>
    public const int NumberFieldNumber = 2;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public double Number {
      get { return typeCase_ == TypeOneofCase.Number ? (double) type_ : 0D; }
      set {
        type_ = value;
        typeCase_ = TypeOneofCase.Number;
      }
    }

    /// <summary>Field number for the "boolean" field.</summary>
    public const int BooleanFieldNumber = 3;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Boolean {
      get { return typeCase_ == TypeOneofCase.Boolean ? (bool) type_ : false; }
      set {
        type_ = value;
        typeCase_ = TypeOneofCase.Boolean;
      }
    }

    /// <summary>Field number for the "string" field.</summary>
    public const int StringFieldNumber = 4;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string String {
      get { return typeCase_ == TypeOneofCase.String ? (string) type_ : ""; }
      set {
        type_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
        typeCase_ = TypeOneofCase.String;
      }
    }

    /// <summary>Field number for the "vector2" field.</summary>
    public const int Vector2FieldNumber = 5;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Ubii.DataStructure.Vector2 Vector2 {
      get { return typeCase_ == TypeOneofCase.Vector2 ? (global::Ubii.DataStructure.Vector2) type_ : null; }
      set {
        type_ = value;
        typeCase_ = value == null ? TypeOneofCase.None : TypeOneofCase.Vector2;
      }
    }

    /// <summary>Field number for the "vector3" field.</summary>
    public const int Vector3FieldNumber = 6;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Ubii.DataStructure.Vector3 Vector3 {
      get { return typeCase_ == TypeOneofCase.Vector3 ? (global::Ubii.DataStructure.Vector3) type_ : null; }
      set {
        type_ = value;
        typeCase_ = value == null ? TypeOneofCase.None : TypeOneofCase.Vector3;
      }
    }

    /// <summary>Field number for the "vector4" field.</summary>
    public const int Vector4FieldNumber = 7;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Ubii.DataStructure.Vector4 Vector4 {
      get { return typeCase_ == TypeOneofCase.Vector4 ? (global::Ubii.DataStructure.Vector4) type_ : null; }
      set {
        type_ = value;
        typeCase_ = value == null ? TypeOneofCase.None : TypeOneofCase.Vector4;
      }
    }

    /// <summary>Field number for the "quaternion" field.</summary>
    public const int QuaternionFieldNumber = 8;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Ubii.DataStructure.Quaternion Quaternion {
      get { return typeCase_ == TypeOneofCase.Quaternion ? (global::Ubii.DataStructure.Quaternion) type_ : null; }
      set {
        type_ = value;
        typeCase_ = value == null ? TypeOneofCase.None : TypeOneofCase.Quaternion;
      }
    }

    /// <summary>Field number for the "matrix3x2" field.</summary>
    public const int Matrix3X2FieldNumber = 9;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Ubii.DataStructure.Matrix3x2 Matrix3X2 {
      get { return typeCase_ == TypeOneofCase.Matrix3X2 ? (global::Ubii.DataStructure.Matrix3x2) type_ : null; }
      set {
        type_ = value;
        typeCase_ = value == null ? TypeOneofCase.None : TypeOneofCase.Matrix3X2;
      }
    }

    /// <summary>Field number for the "matrix4x4" field.</summary>
    public const int Matrix4X4FieldNumber = 10;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Ubii.DataStructure.Matrix4x4 Matrix4X4 {
      get { return typeCase_ == TypeOneofCase.Matrix4X4 ? (global::Ubii.DataStructure.Matrix4x4) type_ : null; }
      set {
        type_ = value;
        typeCase_ = value == null ? TypeOneofCase.None : TypeOneofCase.Matrix4X4;
      }
    }

    /// <summary>Field number for the "color" field.</summary>
    public const int ColorFieldNumber = 11;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Ubii.DataStructure.Color Color {
      get { return typeCase_ == TypeOneofCase.Color ? (global::Ubii.DataStructure.Color) type_ : null; }
      set {
        type_ = value;
        typeCase_ = value == null ? TypeOneofCase.None : TypeOneofCase.Color;
      }
    }

    private object type_;
    /// <summary>Enum of possible cases for the "type" oneof.</summary>
    public enum TypeOneofCase {
      None = 0,
      Number = 2,
      Boolean = 3,
      String = 4,
      Vector2 = 5,
      Vector3 = 6,
      Vector4 = 7,
      Quaternion = 8,
      Matrix3X2 = 9,
      Matrix4X4 = 10,
      Color = 11,
    }
    private TypeOneofCase typeCase_ = TypeOneofCase.None;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public TypeOneofCase TypeCase {
      get { return typeCase_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void ClearType() {
      typeCase_ = TypeOneofCase.None;
      type_ = null;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as TopicDataRecord);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(TopicDataRecord other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Topic != other.Topic) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(Number, other.Number)) return false;
      if (Boolean != other.Boolean) return false;
      if (String != other.String) return false;
      if (!object.Equals(Vector2, other.Vector2)) return false;
      if (!object.Equals(Vector3, other.Vector3)) return false;
      if (!object.Equals(Vector4, other.Vector4)) return false;
      if (!object.Equals(Quaternion, other.Quaternion)) return false;
      if (!object.Equals(Matrix3X2, other.Matrix3X2)) return false;
      if (!object.Equals(Matrix4X4, other.Matrix4X4)) return false;
      if (!object.Equals(Color, other.Color)) return false;
      if (TypeCase != other.TypeCase) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (Topic.Length != 0) hash ^= Topic.GetHashCode();
      if (typeCase_ == TypeOneofCase.Number) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(Number);
      if (typeCase_ == TypeOneofCase.Boolean) hash ^= Boolean.GetHashCode();
      if (typeCase_ == TypeOneofCase.String) hash ^= String.GetHashCode();
      if (typeCase_ == TypeOneofCase.Vector2) hash ^= Vector2.GetHashCode();
      if (typeCase_ == TypeOneofCase.Vector3) hash ^= Vector3.GetHashCode();
      if (typeCase_ == TypeOneofCase.Vector4) hash ^= Vector4.GetHashCode();
      if (typeCase_ == TypeOneofCase.Quaternion) hash ^= Quaternion.GetHashCode();
      if (typeCase_ == TypeOneofCase.Matrix3X2) hash ^= Matrix3X2.GetHashCode();
      if (typeCase_ == TypeOneofCase.Matrix4X4) hash ^= Matrix4X4.GetHashCode();
      if (typeCase_ == TypeOneofCase.Color) hash ^= Color.GetHashCode();
      hash ^= (int) typeCase_;
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
      if (Topic.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Topic);
      }
      if (typeCase_ == TypeOneofCase.Number) {
        output.WriteRawTag(17);
        output.WriteDouble(Number);
      }
      if (typeCase_ == TypeOneofCase.Boolean) {
        output.WriteRawTag(24);
        output.WriteBool(Boolean);
      }
      if (typeCase_ == TypeOneofCase.String) {
        output.WriteRawTag(34);
        output.WriteString(String);
      }
      if (typeCase_ == TypeOneofCase.Vector2) {
        output.WriteRawTag(42);
        output.WriteMessage(Vector2);
      }
      if (typeCase_ == TypeOneofCase.Vector3) {
        output.WriteRawTag(50);
        output.WriteMessage(Vector3);
      }
      if (typeCase_ == TypeOneofCase.Vector4) {
        output.WriteRawTag(58);
        output.WriteMessage(Vector4);
      }
      if (typeCase_ == TypeOneofCase.Quaternion) {
        output.WriteRawTag(66);
        output.WriteMessage(Quaternion);
      }
      if (typeCase_ == TypeOneofCase.Matrix3X2) {
        output.WriteRawTag(74);
        output.WriteMessage(Matrix3X2);
      }
      if (typeCase_ == TypeOneofCase.Matrix4X4) {
        output.WriteRawTag(82);
        output.WriteMessage(Matrix4X4);
      }
      if (typeCase_ == TypeOneofCase.Color) {
        output.WriteRawTag(90);
        output.WriteMessage(Color);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (Topic.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Topic);
      }
      if (typeCase_ == TypeOneofCase.Number) {
        size += 1 + 8;
      }
      if (typeCase_ == TypeOneofCase.Boolean) {
        size += 1 + 1;
      }
      if (typeCase_ == TypeOneofCase.String) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(String);
      }
      if (typeCase_ == TypeOneofCase.Vector2) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Vector2);
      }
      if (typeCase_ == TypeOneofCase.Vector3) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Vector3);
      }
      if (typeCase_ == TypeOneofCase.Vector4) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Vector4);
      }
      if (typeCase_ == TypeOneofCase.Quaternion) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Quaternion);
      }
      if (typeCase_ == TypeOneofCase.Matrix3X2) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Matrix3X2);
      }
      if (typeCase_ == TypeOneofCase.Matrix4X4) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Matrix4X4);
      }
      if (typeCase_ == TypeOneofCase.Color) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Color);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(TopicDataRecord other) {
      if (other == null) {
        return;
      }
      if (other.Topic.Length != 0) {
        Topic = other.Topic;
      }
      switch (other.TypeCase) {
        case TypeOneofCase.Number:
          Number = other.Number;
          break;
        case TypeOneofCase.Boolean:
          Boolean = other.Boolean;
          break;
        case TypeOneofCase.String:
          String = other.String;
          break;
        case TypeOneofCase.Vector2:
          if (Vector2 == null) {
            Vector2 = new global::Ubii.DataStructure.Vector2();
          }
          Vector2.MergeFrom(other.Vector2);
          break;
        case TypeOneofCase.Vector3:
          if (Vector3 == null) {
            Vector3 = new global::Ubii.DataStructure.Vector3();
          }
          Vector3.MergeFrom(other.Vector3);
          break;
        case TypeOneofCase.Vector4:
          if (Vector4 == null) {
            Vector4 = new global::Ubii.DataStructure.Vector4();
          }
          Vector4.MergeFrom(other.Vector4);
          break;
        case TypeOneofCase.Quaternion:
          if (Quaternion == null) {
            Quaternion = new global::Ubii.DataStructure.Quaternion();
          }
          Quaternion.MergeFrom(other.Quaternion);
          break;
        case TypeOneofCase.Matrix3X2:
          if (Matrix3X2 == null) {
            Matrix3X2 = new global::Ubii.DataStructure.Matrix3x2();
          }
          Matrix3X2.MergeFrom(other.Matrix3X2);
          break;
        case TypeOneofCase.Matrix4X4:
          if (Matrix4X4 == null) {
            Matrix4X4 = new global::Ubii.DataStructure.Matrix4x4();
          }
          Matrix4X4.MergeFrom(other.Matrix4X4);
          break;
        case TypeOneofCase.Color:
          if (Color == null) {
            Color = new global::Ubii.DataStructure.Color();
          }
          Color.MergeFrom(other.Color);
          break;
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
          case 10: {
            Topic = input.ReadString();
            break;
          }
          case 17: {
            Number = input.ReadDouble();
            break;
          }
          case 24: {
            Boolean = input.ReadBool();
            break;
          }
          case 34: {
            String = input.ReadString();
            break;
          }
          case 42: {
            global::Ubii.DataStructure.Vector2 subBuilder = new global::Ubii.DataStructure.Vector2();
            if (typeCase_ == TypeOneofCase.Vector2) {
              subBuilder.MergeFrom(Vector2);
            }
            input.ReadMessage(subBuilder);
            Vector2 = subBuilder;
            break;
          }
          case 50: {
            global::Ubii.DataStructure.Vector3 subBuilder = new global::Ubii.DataStructure.Vector3();
            if (typeCase_ == TypeOneofCase.Vector3) {
              subBuilder.MergeFrom(Vector3);
            }
            input.ReadMessage(subBuilder);
            Vector3 = subBuilder;
            break;
          }
          case 58: {
            global::Ubii.DataStructure.Vector4 subBuilder = new global::Ubii.DataStructure.Vector4();
            if (typeCase_ == TypeOneofCase.Vector4) {
              subBuilder.MergeFrom(Vector4);
            }
            input.ReadMessage(subBuilder);
            Vector4 = subBuilder;
            break;
          }
          case 66: {
            global::Ubii.DataStructure.Quaternion subBuilder = new global::Ubii.DataStructure.Quaternion();
            if (typeCase_ == TypeOneofCase.Quaternion) {
              subBuilder.MergeFrom(Quaternion);
            }
            input.ReadMessage(subBuilder);
            Quaternion = subBuilder;
            break;
          }
          case 74: {
            global::Ubii.DataStructure.Matrix3x2 subBuilder = new global::Ubii.DataStructure.Matrix3x2();
            if (typeCase_ == TypeOneofCase.Matrix3X2) {
              subBuilder.MergeFrom(Matrix3X2);
            }
            input.ReadMessage(subBuilder);
            Matrix3X2 = subBuilder;
            break;
          }
          case 82: {
            global::Ubii.DataStructure.Matrix4x4 subBuilder = new global::Ubii.DataStructure.Matrix4x4();
            if (typeCase_ == TypeOneofCase.Matrix4X4) {
              subBuilder.MergeFrom(Matrix4X4);
            }
            input.ReadMessage(subBuilder);
            Matrix4X4 = subBuilder;
            break;
          }
          case 90: {
            global::Ubii.DataStructure.Color subBuilder = new global::Ubii.DataStructure.Color();
            if (typeCase_ == TypeOneofCase.Color) {
              subBuilder.MergeFrom(Color);
            }
            input.ReadMessage(subBuilder);
            Color = subBuilder;
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code
