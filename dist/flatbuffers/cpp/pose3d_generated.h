// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_POSE3D_UBII_DATASTRUCTURES_H_
#define FLATBUFFERS_GENERATED_POSE3D_UBII_DATASTRUCTURES_H_

#include "flatbuffers/flatbuffers.h"

#include "quaternion_generated.h"
#include "vector3_generated.h"

namespace ubii {
namespace dataStructures {

struct Orientation3D;
struct Orientation3DT;

struct Pose3D;
struct Pose3DT;

struct Orientation3DT : public flatbuffers::NativeTable {
  typedef Orientation3D TableType;
  std::unique_ptr<Quaternion> quaternion;
  std::unique_ptr<Vector3> euler;
  Orientation3DT() {
  }
};

struct Orientation3D FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef Orientation3DT NativeTableType;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_QUATERNION = 4,
    VT_EULER = 6
  };
  const Quaternion *quaternion() const {
    return GetStruct<const Quaternion *>(VT_QUATERNION);
  }
  const Vector3 *euler() const {
    return GetStruct<const Vector3 *>(VT_EULER);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<Quaternion>(verifier, VT_QUATERNION) &&
           VerifyField<Vector3>(verifier, VT_EULER) &&
           verifier.EndTable();
  }
  Orientation3DT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(Orientation3DT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Orientation3D> Pack(flatbuffers::FlatBufferBuilder &_fbb, const Orientation3DT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct Orientation3DBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_quaternion(const Quaternion *quaternion) {
    fbb_.AddStruct(Orientation3D::VT_QUATERNION, quaternion);
  }
  void add_euler(const Vector3 *euler) {
    fbb_.AddStruct(Orientation3D::VT_EULER, euler);
  }
  explicit Orientation3DBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  Orientation3DBuilder &operator=(const Orientation3DBuilder &);
  flatbuffers::Offset<Orientation3D> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Orientation3D>(end);
    return o;
  }
};

inline flatbuffers::Offset<Orientation3D> CreateOrientation3D(
    flatbuffers::FlatBufferBuilder &_fbb,
    const Quaternion *quaternion = 0,
    const Vector3 *euler = 0) {
  Orientation3DBuilder builder_(_fbb);
  builder_.add_euler(euler);
  builder_.add_quaternion(quaternion);
  return builder_.Finish();
}

flatbuffers::Offset<Orientation3D> CreateOrientation3D(flatbuffers::FlatBufferBuilder &_fbb, const Orientation3DT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct Pose3DT : public flatbuffers::NativeTable {
  typedef Pose3D TableType;
  std::unique_ptr<Vector3> position;
  std::unique_ptr<Orientation3DT> orientation;
  Pose3DT() {
  }
};

struct Pose3D FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef Pose3DT NativeTableType;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_POSITION = 4,
    VT_ORIENTATION = 6
  };
  const Vector3 *position() const {
    return GetStruct<const Vector3 *>(VT_POSITION);
  }
  const Orientation3D *orientation() const {
    return GetPointer<const Orientation3D *>(VT_ORIENTATION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<Vector3>(verifier, VT_POSITION) &&
           VerifyOffset(verifier, VT_ORIENTATION) &&
           verifier.VerifyTable(orientation()) &&
           verifier.EndTable();
  }
  Pose3DT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(Pose3DT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Pose3D> Pack(flatbuffers::FlatBufferBuilder &_fbb, const Pose3DT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct Pose3DBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_position(const Vector3 *position) {
    fbb_.AddStruct(Pose3D::VT_POSITION, position);
  }
  void add_orientation(flatbuffers::Offset<Orientation3D> orientation) {
    fbb_.AddOffset(Pose3D::VT_ORIENTATION, orientation);
  }
  explicit Pose3DBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  Pose3DBuilder &operator=(const Pose3DBuilder &);
  flatbuffers::Offset<Pose3D> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Pose3D>(end);
    return o;
  }
};

inline flatbuffers::Offset<Pose3D> CreatePose3D(
    flatbuffers::FlatBufferBuilder &_fbb,
    const Vector3 *position = 0,
    flatbuffers::Offset<Orientation3D> orientation = 0) {
  Pose3DBuilder builder_(_fbb);
  builder_.add_orientation(orientation);
  builder_.add_position(position);
  return builder_.Finish();
}

flatbuffers::Offset<Pose3D> CreatePose3D(flatbuffers::FlatBufferBuilder &_fbb, const Pose3DT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline Orientation3DT *Orientation3D::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new Orientation3DT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void Orientation3D::UnPackTo(Orientation3DT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = quaternion(); if (_e) _o->quaternion = std::unique_ptr<Quaternion>(new Quaternion(*_e)); };
  { auto _e = euler(); if (_e) _o->euler = std::unique_ptr<Vector3>(new Vector3(*_e)); };
}

inline flatbuffers::Offset<Orientation3D> Orientation3D::Pack(flatbuffers::FlatBufferBuilder &_fbb, const Orientation3DT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateOrientation3D(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Orientation3D> CreateOrientation3D(flatbuffers::FlatBufferBuilder &_fbb, const Orientation3DT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const Orientation3DT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _quaternion = _o->quaternion ? _o->quaternion.get() : 0;
  auto _euler = _o->euler ? _o->euler.get() : 0;
  return ubii::dataStructures::CreateOrientation3D(
      _fbb,
      _quaternion,
      _euler);
}

inline Pose3DT *Pose3D::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new Pose3DT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void Pose3D::UnPackTo(Pose3DT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = position(); if (_e) _o->position = std::unique_ptr<Vector3>(new Vector3(*_e)); };
  { auto _e = orientation(); if (_e) _o->orientation = std::unique_ptr<Orientation3DT>(_e->UnPack(_resolver)); };
}

inline flatbuffers::Offset<Pose3D> Pose3D::Pack(flatbuffers::FlatBufferBuilder &_fbb, const Pose3DT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreatePose3D(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Pose3D> CreatePose3D(flatbuffers::FlatBufferBuilder &_fbb, const Pose3DT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const Pose3DT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _position = _o->position ? _o->position.get() : 0;
  auto _orientation = _o->orientation ? CreateOrientation3D(_fbb, _o->orientation.get(), _rehasher) : 0;
  return ubii::dataStructures::CreatePose3D(
      _fbb,
      _position,
      _orientation);
}

inline const ubii::dataStructures::Pose3D *GetPose3D(const void *buf) {
  return flatbuffers::GetRoot<ubii::dataStructures::Pose3D>(buf);
}

inline const ubii::dataStructures::Pose3D *GetSizePrefixedPose3D(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ubii::dataStructures::Pose3D>(buf);
}

inline bool VerifyPose3DBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ubii::dataStructures::Pose3D>(nullptr);
}

inline bool VerifySizePrefixedPose3DBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ubii::dataStructures::Pose3D>(nullptr);
}

inline void FinishPose3DBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::dataStructures::Pose3D> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedPose3DBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::dataStructures::Pose3D> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<Pose3DT> UnPackPose3D(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<Pose3DT>(GetPose3D(buf)->UnPack(res));
}

}  // namespace dataStructures
}  // namespace ubii

#endif  // FLATBUFFERS_GENERATED_POSE3D_UBII_DATASTRUCTURES_H_
