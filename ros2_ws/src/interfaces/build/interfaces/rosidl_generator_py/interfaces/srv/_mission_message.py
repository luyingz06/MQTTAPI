# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:srv/MissionMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionMessage_Request(type):
    """Metaclass of message 'MissionMessage_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.MissionMessage_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mission_message__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mission_message__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mission_message__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mission_message__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mission_message__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MissionMessage_Request(metaclass=Metaclass_MissionMessage_Request):
    """Message class 'MissionMessage_Request'."""

    __slots__ = [
        '_input_value',
        '_input_message',
    ]

    _fields_and_field_types = {
        'input_value': 'int32',
        'input_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.input_value = kwargs.get('input_value', int())
        self.input_message = kwargs.get('input_message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.input_value != other.input_value:
            return False
        if self.input_message != other.input_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def input_value(self):
        """Message field 'input_value'."""
        return self._input_value

    @input_value.setter
    def input_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'input_value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'input_value' field must be an integer in [-2147483648, 2147483647]"
        self._input_value = value

    @property
    def input_message(self):
        """Message field 'input_message'."""
        return self._input_message

    @input_message.setter
    def input_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'input_message' field must be of type 'str'"
        self._input_message = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MissionMessage_Response(type):
    """Metaclass of message 'MissionMessage_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.MissionMessage_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mission_message__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mission_message__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mission_message__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mission_message__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mission_message__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MissionMessage_Response(metaclass=Metaclass_MissionMessage_Response):
    """Message class 'MissionMessage_Response'."""

    __slots__ = [
        '_success',
        '_response_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'response_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.response_message = kwargs.get('response_message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.response_message != other.response_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def response_message(self):
        """Message field 'response_message'."""
        return self._response_message

    @response_message.setter
    def response_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'response_message' field must be of type 'str'"
        self._response_message = value


class Metaclass_MissionMessage(type):
    """Metaclass of service 'MissionMessage'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.MissionMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__mission_message

            from interfaces.srv import _mission_message
            if _mission_message.Metaclass_MissionMessage_Request._TYPE_SUPPORT is None:
                _mission_message.Metaclass_MissionMessage_Request.__import_type_support__()
            if _mission_message.Metaclass_MissionMessage_Response._TYPE_SUPPORT is None:
                _mission_message.Metaclass_MissionMessage_Response.__import_type_support__()


class MissionMessage(metaclass=Metaclass_MissionMessage):
    from interfaces.srv._mission_message import MissionMessage_Request as Request
    from interfaces.srv._mission_message import MissionMessage_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
