"""
@generated by codestare-proto-plus.  Do not edit manually!
"""
from proto import (
    Field,
    module,
)

from proto.message import (
    Message,
)

from ubii.proto.v1.dataStructure.quaternion_pb_plus import (
    Quaternion,
)

from ubii.proto.v1.dataStructure.vector3_pb_plus import (
    Vector3,
)


__protobuf__ = module(
    package="ubii.proto.v1.dataStructure",
    marshal="ubii.proto.v1",
    manifest={
        "Pose3D",
    }
)


class Pose3D(Message):
    """
    .. admonition:: One Ofs

        This message defines the following *oneof* group[s]

        .. attribute:: orientation

            - 	:attr:`.quaternion`
            - 	:attr:`.euler`

    Attributes:
        position (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~ubii.proto.v1.dataStructure.vector3_pb_plus.Vector3`
        quaternion (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~ubii.proto.v1.dataStructure.quaternion_pb_plus.Quaternion` -- *oneof*
            :attr:`.orientation`
        euler (proto.fields.Field): :obj:`~proto.fields.Field` of type
            :obj:`~ubii.proto.v1.dataStructure.vector3_pb_plus.Vector3` -- *oneof*
            :attr:`.orientation`
    """

    position = Field(
        Vector3,
        number=1,
    )
    quaternion = Field(
        Quaternion,
        number=2,
        oneof='orientation',
    )
    euler = Field(
        Vector3,
        number=3,
        oneof='orientation',
    )

