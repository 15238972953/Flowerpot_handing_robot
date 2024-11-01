# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from radar_msgs/Array.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import radar_msgs.msg

class Array(genpy.Message):
  _md5sum = "997f34d9f4575d60cbee5bcd6077246d"
  _type = "radar_msgs/Array"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """radar[] Array
================================================================================
MSG: radar_msgs/radar
int8 n
float32 r
float32 phi"""
  __slots__ = ['Array']
  _slot_types = ['radar_msgs/radar[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       Array

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Array, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.Array is None:
        self.Array = []
    else:
      self.Array = []

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
      length = len(self.Array)
      buff.write(_struct_I.pack(length))
      for val1 in self.Array:
        _x = val1
        buff.write(_get_struct_b2f().pack(_x.n, _x.r, _x.phi))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.Array is None:
        self.Array = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.Array = []
      for i in range(0, length):
        val1 = radar_msgs.msg.radar()
        _x = val1
        start = end
        end += 9
        (_x.n, _x.r, _x.phi,) = _get_struct_b2f().unpack(str[start:end])
        self.Array.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.Array)
      buff.write(_struct_I.pack(length))
      for val1 in self.Array:
        _x = val1
        buff.write(_get_struct_b2f().pack(_x.n, _x.r, _x.phi))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.Array is None:
        self.Array = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.Array = []
      for i in range(0, length):
        val1 = radar_msgs.msg.radar()
        _x = val1
        start = end
        end += 9
        (_x.n, _x.r, _x.phi,) = _get_struct_b2f().unpack(str[start:end])
        self.Array.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_b2f = None
def _get_struct_b2f():
    global _struct_b2f
    if _struct_b2f is None:
        _struct_b2f = struct.Struct("<b2f")
    return _struct_b2f
