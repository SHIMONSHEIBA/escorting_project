# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from occupancy_grid_utils/NavigationFunction.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import nav_msgs.msg
import genpy

class NavigationFunction(genpy.Message):
  _md5sum = "c75461ff4f50ec30d6191b0a4430e7ee"
  _type = "occupancy_grid_utils/NavigationFunction"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """nav_msgs/MapMetaData info
uint32 source
bool[] valid
uint32[] back_pointers
float32[] potential
================================================================================
MSG: nav_msgs/MapMetaData
# This hold basic information about the characterists of the OccupancyGrid

# The time at which the map was loaded
time map_load_time
# The map resolution [m/cell]
float32 resolution
# Map width [cells]
uint32 width
# Map height [cells]
uint32 height
# The origin of the map [m, m, rad].  This is the real-world pose of the
# cell (0,0) in the map.
geometry_msgs/Pose origin
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['info','source','valid','back_pointers','potential']
  _slot_types = ['nav_msgs/MapMetaData','uint32','bool[]','uint32[]','float32[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       info,source,valid,back_pointers,potential

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(NavigationFunction, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.info is None:
        self.info = nav_msgs.msg.MapMetaData()
      if self.source is None:
        self.source = 0
      if self.valid is None:
        self.valid = []
      if self.back_pointers is None:
        self.back_pointers = []
      if self.potential is None:
        self.potential = []
    else:
      self.info = nav_msgs.msg.MapMetaData()
      self.source = 0
      self.valid = []
      self.back_pointers = []
      self.potential = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_2If2I7dI.pack(_x.info.map_load_time.secs, _x.info.map_load_time.nsecs, _x.info.resolution, _x.info.width, _x.info.height, _x.info.origin.position.x, _x.info.origin.position.y, _x.info.origin.position.z, _x.info.origin.orientation.x, _x.info.origin.orientation.y, _x.info.origin.orientation.z, _x.info.origin.orientation.w, _x.source))
      length = len(self.valid)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(struct.pack(pattern, *self.valid))
      length = len(self.back_pointers)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(struct.pack(pattern, *self.back_pointers))
      length = len(self.potential)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.potential))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.info is None:
        self.info = nav_msgs.msg.MapMetaData()
      end = 0
      _x = self
      start = end
      end += 80
      (_x.info.map_load_time.secs, _x.info.map_load_time.nsecs, _x.info.resolution, _x.info.width, _x.info.height, _x.info.origin.position.x, _x.info.origin.position.y, _x.info.origin.position.z, _x.info.origin.orientation.x, _x.info.origin.orientation.y, _x.info.origin.orientation.z, _x.info.origin.orientation.w, _x.source,) = _struct_2If2I7dI.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      end += struct.calcsize(pattern)
      self.valid = struct.unpack(pattern, str[start:end])
      self.valid = map(bool, self.valid)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      end += struct.calcsize(pattern)
      self.back_pointers = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.potential = struct.unpack(pattern, str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_2If2I7dI.pack(_x.info.map_load_time.secs, _x.info.map_load_time.nsecs, _x.info.resolution, _x.info.width, _x.info.height, _x.info.origin.position.x, _x.info.origin.position.y, _x.info.origin.position.z, _x.info.origin.orientation.x, _x.info.origin.orientation.y, _x.info.origin.orientation.z, _x.info.origin.orientation.w, _x.source))
      length = len(self.valid)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(self.valid.tostring())
      length = len(self.back_pointers)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(self.back_pointers.tostring())
      length = len(self.potential)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.potential.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.info is None:
        self.info = nav_msgs.msg.MapMetaData()
      end = 0
      _x = self
      start = end
      end += 80
      (_x.info.map_load_time.secs, _x.info.map_load_time.nsecs, _x.info.resolution, _x.info.width, _x.info.height, _x.info.origin.position.x, _x.info.origin.position.y, _x.info.origin.position.z, _x.info.origin.orientation.x, _x.info.origin.orientation.y, _x.info.origin.orientation.z, _x.info.origin.orientation.w, _x.source,) = _struct_2If2I7dI.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      end += struct.calcsize(pattern)
      self.valid = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=length)
      self.valid = map(bool, self.valid)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      end += struct.calcsize(pattern)
      self.back_pointers = numpy.frombuffer(str[start:end], dtype=numpy.uint32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.potential = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2If2I7dI = struct.Struct("<2If2I7dI")
