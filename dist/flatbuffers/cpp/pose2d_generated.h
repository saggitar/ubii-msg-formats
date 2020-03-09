// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_POSE2D_UBII_DATASTRUCTURES_H_
#define FLATBUFFERS_GENERATED_POSE2D_UBII_DATASTRUCTURES_H_

#include "flatbuffers/flatbuffers.h"

#include "vector2_generated.h"

namespace ubii {
namespace dataStructures {

struct AngleOrientation;
struct AngleOrientationT;

struct Orientation2D;
struct Orientation2DT;

struct Pose2D;
struct Pose2DT;

struct AngleOrientationT : public flatbuffers::NativeTable {
  typedef AngleOrientation TableType;
  std::unique_ptr<Vector2> zeroDirection;
  float angle;
  AngleOrientationT()
      : angle(0.0f) {
  }
};

struct AngleOrientation FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef AngleOrientationT NativeTableType;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ZERODIRECTION = 4,
    VT_ANGLE = 6
  };
  const Vector2 *zeroDirection() const {
    return GetStruct<const Vector2 *>(VT_ZERODIRECTION);
  }
  float angle() const {
    return GetField<float>(VT_ANGLE, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<Vector2>(verifier, VT_ZERODIRECTION) &&
           VerifyField<float>(verifier, VT_ANGLE) &&
           verifier.EndTable();
  }
  AngleOrientationT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(AngleOrientationT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<AngleOrientation> Pack(flatbuffers::FlatBufferBuilder &_fbb, const AngleOrientationT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct AngleOrientationBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_zeroDirection(const Vector2 *zeroDirection) {
    fbb_.AddStruct(AngleOrientation::VT_ZERODIRECTION, zeroDirection);
  }
  void add_angle(float angle) {
    fbb_.AddElement<float>(AngleOrientation::VT_ANGLE, angle, 0.0f);
  }
  explicit AngleOrientationBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AngleOrientationBuilder &operator=(const AngleOrientationBuilder &);
  flatbuffers::Offset<AngleOrientation> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AngleOrientation>(end);
    return o;
  }
};

inline flatbuffers::Offset<AngleOrientation> CreateAngleOrientation(
    flatbuffers::FlatBufferBuilder &_fbb,
    const Vector2 *zeroDirection = 0,
    float angle = 0.0f) {
  AngleOrientationBuilder builder_(_fbb);
  builder_.add_angle(angle);
  builder_.add_zeroDirection(zeroDirection);
  return builder_.Finish();
}

flatbuffers::Offset<AngleOrientation> CreateAngleOrientation(flatbuffers::FlatBufferBuilder &_fbb, const AngleOrientationT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct Orientation2DT : public flatbuffers::NativeTable {
  typedef Orientation2D TableType;
  std::unique_ptr<AngleOrientationT> angle;
  std::unique_ptr<Vector2> direction;
  Orientation2DT() {
  }
};

struct Orientation2D FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef Orientation2DT NativeTableType;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ANGLE = 4,
    VT_DIRECTION = 6
  };
  const AngleOrientation *angle() const {
    return GetPointer<const AngleOrientation *>(VT_ANGLE);
  }
  const Vector2 *direction() const {
    return GetStruct<const Vector2 *>(VT_DIRECTION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ANGLE) &&
           verifier.VerifyTable(angle()) &&
           VerifyField<Vector2>(verifier, VT_DIRECTION) &&
           verifier.EndTable();
  }
  Orientation2DT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(Orientation2DT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Orientation2D> Pack(flatbuffers::FlatBufferBuilder &_fbb, const Orientation2DT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct Orientation2DBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_angle(flatbuffers::Offset<AngleOrientation> angle) {
    fbb_.AddOffset(Orientation2D::VT_ANGLE, angle);
  }
  void add_direction(const Vector2 *direction) {
    fbb_.AddStruct(Orientation2D::VT_DIRECTION, direction);
  }
  explicit Orientation2DBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  Orientation2DBuilder &operator=(const Orientation2DBuilder &);
  flatbuffers::Offset<Orientation2D> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Orientation2D>(end);
    return o;
  }
};

inline flatbuffers::Offset<Orientation2D> CreateOrientation2D(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<AngleOrientation> angle = 0,
    const Vector2 *direction = 0) {
  Orientation2DBuilder builder_(_fbb);
  builder_.add_direction(direction);
  builder_.add_angle(angle);
  return builder_.Finish();
}

flatbuffers::Offset<Orientation2D> CreateOrientation2D(flatbuffers::FlatBufferBuilder &_fbb, const Orientation2DT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct Pose2DT : public flatbuffers::NativeTable {
  typedef Pose2D TableType;
  std::unique_ptr<Vector2> position;
  std::unique_ptr<Orientation2DT> orientation;
  Pose2DT() {
  }
};

struct Pose2D FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef Pose2DT NativeTableType;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_POSITION = 4,
    VT_ORIENTATION = 6
  };
  const Vector2 *position() const {
    return GetStruct<const Vector2 *>(VT_POSITION);
  }
  const Orientation2D *orientation() const {
    return GetPointer<const Orientation2D *>(VT_ORIENTATION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<Vector2>(verifier, VT_POSITION) &&
           VerifyOffset(verifier, VT_ORIENTATION) &&
           verifier.VerifyTable(orientation()) &&
           verifier.EndTable();
  }
  Pose2DT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(Pose2DT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Pose2D> Pack(flatbuffers::FlatBufferBuilder &_fbb, const Pose2DT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct Pose2DBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_position(const Vector2 *position) {
    fbb_.AddStruct(Pose2D::VT_POSITION, position);
  }
  void add_orientation(flatbuffers::Offset<Orientation2D> orientation) {
    fbb_.AddOffset(Pose2D::VT_ORIENTATION, orientation);
  }
  explicit Pose2DBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  Pose2DBuilder &operator=(const Pose2DBuilder &);
  flatbuffers::Offset<Pose2D> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Pose2D>(end);
    return o;
  }
};

inline flatbuffers::Offset<Pose2D> CreatePose2D(
    flatbuffers::FlatBufferBuilder &_fbb,
    const Vector2 *position = 0,
    flatbuffers::Offset<Orientation2D> orientation = 0) {
  Pose2DBuilder builder_(_fbb);
  builder_.add_orientation(orientation);
  builder_.add_position(position);
  return builder_.Finish();
}

flatbuffers::Offset<Pose2D> CreatePose2D(flatbuffers::FlatBufferBuilder &_fbb, const Pose2DT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline AngleOrientationT *AngleOrientation::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new AngleOrientationT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void AngleOrientation::UnPackTo(AngleOrientationT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = zeroDirection(); if (_e) _o->zeroDirection = std::unique_ptr<Vector2>(new Vector2(*_e)); };
  { auto _e = angle(); _o->angle = _e; };
}

inline flatbuffers::Offset<AngleOrientation> AngleOrientation::Pack(flatbuffers::FlatBufferBuilder &_fbb, const AngleOrientationT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateAngleOrientation(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<AngleOrientation> CreateAngleOrientation(flatbuffers::FlatBufferBuilder &_fbb, const AngleOrientationT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const AngleOrientationT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _zeroDirection = _o->zeroDirection ? _o->zeroDirection.get() : 0;
  auto _angle = _o->angle;
  return ubii::dataStructures::CreateAngleOrientation(
      _fbb,
      _zeroDirection,
      _angle);
}

inline Orientation2DT *Orientation2D::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new Orientation2DT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void Orientation2D::UnPackTo(Orientation2DT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = angle(); if (_e) _o->angle = std::unique_ptr<AngleOrientationT>(_e->UnPack(_resolver)); };
  { auto _e = direction(); if (_e) _o->direction = std::unique_ptr<Vector2>(new Vector2(*_e)); };
}

inline flatbuffers::Offset<Orientation2D> Orientation2D::Pack(flatbuffers::FlatBufferBuilder &_fbb, const Orientation2DT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateOrientation2D(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Orientation2D> CreateOrientation2D(flatbuffers::FlatBufferBuilder &_fbb, const Orientation2DT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const Orientation2DT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _angle = _o->angle ? CreateAngleOrientation(_fbb, _o->angle.get(), _rehasher) : 0;
  auto _direction = _o->direction ? _o->direction.get() : 0;
  return ubii::dataStructures::CreateOrientation2D(
      _fbb,
      _angle,
      _direction);
}

inline Pose2DT *Pose2D::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new Pose2DT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void Pose2D::UnPackTo(Pose2DT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = position(); if (_e) _o->position = std::unique_ptr<Vector2>(new Vector2(*_e)); };
  { auto _e = orientation(); if (_e) _o->orientation = std::unique_ptr<Orientation2DT>(_e->UnPack(_resolver)); };
}

inline flatbuffers::Offset<Pose2D> Pose2D::Pack(flatbuffers::FlatBufferBuilder &_fbb, const Pose2DT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreatePose2D(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Pose2D> CreatePose2D(flatbuffers::FlatBufferBuilder &_fbb, const Pose2DT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const Pose2DT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _position = _o->position ? _o->position.get() : 0;
  auto _orientation = _o->orientation ? CreateOrientation2D(_fbb, _o->orientation.get(), _rehasher) : 0;
  return ubii::dataStructures::CreatePose2D(
      _fbb,
      _position,
      _orientation);
}

inline const ubii::dataStructures::Pose2D *GetPose2D(const void *buf) {
  return flatbuffers::GetRoot<ubii::dataStructures::Pose2D>(buf);
}

inline const ubii::dataStructures::Pose2D *GetSizePrefixedPose2D(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ubii::dataStructures::Pose2D>(buf);
}

inline bool VerifyPose2DBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ubii::dataStructures::Pose2D>(nullptr);
}

inline bool VerifySizePrefixedPose2DBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ubii::dataStructures::Pose2D>(nullptr);
}

inline void FinishPose2DBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::dataStructures::Pose2D> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedPose2DBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ubii::dataStructures::Pose2D> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<Pose2DT> UnPackPose2D(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<Pose2DT>(GetPose2D(buf)->UnPack(res));
}

}  // namespace dataStructures
}  // namespace ubii

#endif  // FLATBUFFERS_GENERATED_POSE2D_UBII_DATASTRUCTURES_H_
