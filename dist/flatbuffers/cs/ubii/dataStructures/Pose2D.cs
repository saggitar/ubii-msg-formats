// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace ubii.dataStructures
{

using global::System;
using global::System.Collections.Generic;
using global::FlatBuffers;

public struct Pose2D : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static void ValidateVersion() { FlatBufferConstants.FLATBUFFERS_1_12_0(); }
  public static Pose2D GetRootAsPose2D(ByteBuffer _bb) { return GetRootAsPose2D(_bb, new Pose2D()); }
  public static Pose2D GetRootAsPose2D(ByteBuffer _bb, Pose2D obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p = new Table(_i, _bb); }
  public Pose2D __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public ubii.dataStructures.Vector2? Position { get { int o = __p.__offset(4); return o != 0 ? (ubii.dataStructures.Vector2?)(new ubii.dataStructures.Vector2()).__assign(o + __p.bb_pos, __p.bb) : null; } }
  public ubii.dataStructures.Orientation2D? Orientation { get { int o = __p.__offset(6); return o != 0 ? (ubii.dataStructures.Orientation2D?)(new ubii.dataStructures.Orientation2D()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }

  public static void StartPose2D(FlatBufferBuilder builder) { builder.StartTable(2); }
  public static void AddPosition(FlatBufferBuilder builder, Offset<ubii.dataStructures.Vector2> positionOffset) { builder.AddStruct(0, positionOffset.Value, 0); }
  public static void AddOrientation(FlatBufferBuilder builder, Offset<ubii.dataStructures.Orientation2D> orientationOffset) { builder.AddOffset(1, orientationOffset.Value, 0); }
  public static Offset<ubii.dataStructures.Pose2D> EndPose2D(FlatBufferBuilder builder) {
    int o = builder.EndTable();
    return new Offset<ubii.dataStructures.Pose2D>(o);
  }
  public static void FinishPose2DBuffer(FlatBufferBuilder builder, Offset<ubii.dataStructures.Pose2D> offset) { builder.Finish(offset.Value); }
  public static void FinishSizePrefixedPose2DBuffer(FlatBufferBuilder builder, Offset<ubii.dataStructures.Pose2D> offset) { builder.FinishSizePrefixed(offset.Value); }
  public Pose2DT UnPack() {
    var _o = new Pose2DT();
    this.UnPackTo(_o);
    return _o;
  }
  public void UnPackTo(Pose2DT _o) {
    _o.Position = this.Position.HasValue ? this.Position.Value.UnPack() : null;
    _o.Orientation = this.Orientation.HasValue ? this.Orientation.Value.UnPack() : null;
  }
  public static Offset<ubii.dataStructures.Pose2D> Pack(FlatBufferBuilder builder, Pose2DT _o) {
    if (_o == null) return default(Offset<ubii.dataStructures.Pose2D>);
    var _orientation = _o.Orientation == null ? default(Offset<ubii.dataStructures.Orientation2D>) : ubii.dataStructures.Orientation2D.Pack(builder, _o.Orientation);
    StartPose2D(builder);
    AddPosition(builder, ubii.dataStructures.Vector2.Pack(builder, _o.Position));
    AddOrientation(builder, _orientation);
    return EndPose2D(builder);
  }
};

public class Pose2DT
{
  public ubii.dataStructures.Vector2T Position { get; set; }
  public ubii.dataStructures.Orientation2DT Orientation { get; set; }

  public Pose2DT() {
    this.Position = new ubii.dataStructures.Vector2T();
    this.Orientation = null;
  }
  public static Pose2DT DeserializeFromBinary(byte[] fbBuffer) {
    return Pose2D.GetRootAsPose2D(new ByteBuffer(fbBuffer)).UnPack();
  }
  public byte[] SerializeToBinary() {
    var fbb = new FlatBufferBuilder(0x10000);
    fbb.Finish(Pose2D.Pack(fbb, this).Value);
    return fbb.DataBuffer.ToSizedArray();
  }
}


}