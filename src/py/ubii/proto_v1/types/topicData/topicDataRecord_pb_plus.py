"""
@generated by codestare-proto-plus.  Do not edit manually!
isort:skip_file
"""
import proto
from proto import (
    BOOL,
    DOUBLE,
    FLOAT,
    Field,
    INT32,
    RepeatedField,
    STRING,
)

from proto.message import (
    Message,
)

from ubii.proto_v1.types.dataStructure.color_pb_plus import (
    Color,
)

from ubii.proto_v1.types.dataStructure.image_pb_plus import (
    Image2D,
    Image2DList,
)

from ubii.proto_v1.types.dataStructure.keyEvent_pb_plus import (
    KeyEvent,
)

from ubii.proto_v1.types.dataStructure.lists_pb_plus import (
    BoolList,
    DoubleList,
    FloatList,
    Int32List,
    StringList,
)

from ubii.proto_v1.types.dataStructure.matrix3x2_pb_plus import (
    Matrix3x2,
)

from ubii.proto_v1.types.dataStructure.matrix4x4_pb_plus import (
    Matrix4x4,
)

from ubii.proto_v1.types.dataStructure.mouseEvent_pb_plus import (
    MouseEvent,
)

from ubii.proto_v1.types.dataStructure.myoEvent_pb_plus import (
    MyoEvent,
)

from ubii.proto_v1.types.dataStructure.object2d_pb_plus import (
    Object2D,
    Object2DList,
)

from ubii.proto_v1.types.dataStructure.object3d_pb_plus import (
    Object3D,
    Object3DList,
)

from ubii.proto_v1.types.dataStructure.pose2d_pb_plus import (
    Pose2D,
)

from ubii.proto_v1.types.dataStructure.pose3d_pb_plus import (
    Pose3D,
)

from ubii.proto_v1.types.dataStructure.quaternion_pb_plus import (
    Quaternion,
)

from ubii.proto_v1.types.dataStructure.touchEvent_pb_plus import (
    TouchEvent,
    TouchEventList,
)

from ubii.proto_v1.types.dataStructure.vector2_pb_plus import (
    Vector2,
    Vector2List,
)

from ubii.proto_v1.types.dataStructure.vector3_pb_plus import (
    Vector3,
    Vector3List,
)

from ubii.proto_v1.types.dataStructure.vector4_pb_plus import (
    Vector4,
    Vector4List,
)

from ubii.proto_v1.types.sessions.session_pb_plus import (
    Session,
)

from ubii.proto_v1.types.topicData.timestamp_pb_plus import (
    Timestamp,
)


__protobuf__ = proto.module(
    package="ubii.interact.v1",
    manifest={
        "TopicDataRecord",
        "TopicDataRecordList",
    }
)


class TopicDataRecord(Message):
    """continuous index: 38"""
    topic = Field(
        STRING,
        number=1,
    )
    timestamp = Field(
        Timestamp,
        number=2,
    )
    double = Field(
        DOUBLE,
        number=3,
        oneof='type',
    )
    bool = Field(
        BOOL,
        number=4,
        oneof='type',
    )
    string = Field(
        STRING,
        number=5,
        oneof='type',
    )
    int32 = Field(
        INT32,
        number=23,
        oneof='type',
    )
    float = Field(
        FLOAT,
        number=24,
        oneof='type',
    )
    vector2 = Field(
        Vector2,
        number=6,
        oneof='type',
    )
    vector2_list = Field(
        Vector2List,
        number=35,
        oneof='type',
    )
    vector3 = Field(
        Vector3,
        number=7,
        oneof='type',
    )
    vector3_list = Field(
        Vector3List,
        number=36,
        oneof='type',
    )
    vector4 = Field(
        Vector4,
        number=8,
        oneof='type',
    )
    vector4_list = Field(
        Vector4List,
        number=37,
        oneof='type',
    )
    quaternion = Field(
        Quaternion,
        number=9,
        oneof='type',
    )
    quaternion_list = Field(
        Quaternion,
        number=38,
        oneof='type',
    )
    matrix3x2 = Field(
        Matrix3x2,
        number=10,
        oneof='type',
    )
    matrix4x4 = Field(
        Matrix4x4,
        number=11,
        oneof='type',
    )
    color = Field(
        Color,
        number=12,
        oneof='type',
    )
    touch_event = Field(
        TouchEvent,
        number=13,
        oneof='type',
    )
    touch_event_list = Field(
        TouchEventList,
        number=34,
        oneof='type',
    )
    key_event = Field(
        KeyEvent,
        number=14,
        oneof='type',
    )
    mouse_event = Field(
        MouseEvent,
        number=15,
        oneof='type',
    )
    myo_event = Field(
        MyoEvent,
        number=16,
        oneof='type',
    )
    pose2D = Field(
        Pose2D,
        number=17,
        oneof='type',
    )
    pose3D = Field(
        Pose3D,
        number=18,
        oneof='type',
    )
    object2D = Field(
        Object2D,
        number=19,
        oneof='type',
    )
    object3D = Field(
        Object3D,
        number=20,
        oneof='type',
    )
    object2D_list = Field(
        Object2DList,
        number=21,
        oneof='type',
    )
    object3D_list = Field(
        Object3DList,
        number=22,
        oneof='type',
    )
    int32_list = Field(
        Int32List,
        number=25,
        oneof='type',
    )
    float_list = Field(
        FloatList,
        number=26,
        oneof='type',
    )
    double_list = Field(
        DoubleList,
        number=27,
        oneof='type',
    )
    string_list = Field(
        StringList,
        number=28,
        oneof='type',
    )
    bool_list = Field(
        BoolList,
        number=29,
        oneof='type',
    )
    image2D = Field(
        Image2D,
        number=30,
        oneof='type',
    )
    image2D_list = Field(
        Image2DList,
        number=31,
        oneof='type',
    )
    session = Field(
        Session,
        number=32,
        oneof='type',
    )



class TopicDataRecordList(Message):
    elements = RepeatedField(
        TopicDataRecord,
        number=1,
    )

