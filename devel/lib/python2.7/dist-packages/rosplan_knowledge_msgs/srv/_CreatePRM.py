# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rosplan_knowledge_msgs/CreatePRMRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CreatePRMRequest(genpy.Message):
  _md5sum = "5f7c217e90f8fff8f615b66b6e7c4601"
  _type = "rosplan_knowledge_msgs/CreatePRMRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 nr_waypoints
float32 min_distance
float32 casting_distance
float32 connecting_distance
int8 occupancy_threshold
int32 total_attempts
"""
  __slots__ = ['nr_waypoints','min_distance','casting_distance','connecting_distance','occupancy_threshold','total_attempts']
  _slot_types = ['int32','float32','float32','float32','int8','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       nr_waypoints,min_distance,casting_distance,connecting_distance,occupancy_threshold,total_attempts

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CreatePRMRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.nr_waypoints is None:
        self.nr_waypoints = 0
      if self.min_distance is None:
        self.min_distance = 0.
      if self.casting_distance is None:
        self.casting_distance = 0.
      if self.connecting_distance is None:
        self.connecting_distance = 0.
      if self.occupancy_threshold is None:
        self.occupancy_threshold = 0
      if self.total_attempts is None:
        self.total_attempts = 0
    else:
      self.nr_waypoints = 0
      self.min_distance = 0.
      self.casting_distance = 0.
      self.connecting_distance = 0.
      self.occupancy_threshold = 0
      self.total_attempts = 0

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
      buff.write(_struct_i3fbi.pack(_x.nr_waypoints, _x.min_distance, _x.casting_distance, _x.connecting_distance, _x.occupancy_threshold, _x.total_attempts))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 21
      (_x.nr_waypoints, _x.min_distance, _x.casting_distance, _x.connecting_distance, _x.occupancy_threshold, _x.total_attempts,) = _struct_i3fbi.unpack(str[start:end])
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
      buff.write(_struct_i3fbi.pack(_x.nr_waypoints, _x.min_distance, _x.casting_distance, _x.connecting_distance, _x.occupancy_threshold, _x.total_attempts))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 21
      (_x.nr_waypoints, _x.min_distance, _x.casting_distance, _x.connecting_distance, _x.occupancy_threshold, _x.total_attempts,) = _struct_i3fbi.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_i3fbi = struct.Struct("<i3fbi")
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rosplan_knowledge_msgs/CreatePRMResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CreatePRMResponse(genpy.Message):
  _md5sum = "49708eee94ad052e2e6e0398654eb86a"
  _type = "rosplan_knowledge_msgs/CreatePRMResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string[] waypoints
"""
  __slots__ = ['waypoints']
  _slot_types = ['string[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       waypoints

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CreatePRMResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.waypoints is None:
        self.waypoints = []
    else:
      self.waypoints = []

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
      length = len(self.waypoints)
      buff.write(_struct_I.pack(length))
      for val1 in self.waypoints:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.waypoints = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.waypoints.append(val1)
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
      length = len(self.waypoints)
      buff.write(_struct_I.pack(length))
      for val1 in self.waypoints:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.waypoints = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.waypoints.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
class CreatePRM(object):
  _type          = 'rosplan_knowledge_msgs/CreatePRM'
  _md5sum = 'e2d990767484410646d05d82e9a4545b'
  _request_class  = CreatePRMRequest
  _response_class = CreatePRMResponse
