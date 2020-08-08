# coding: utf-8

"""
    Manticore Search API

    This is the API for Manticore Search HTTP protocol. For full documentation of the API methods consult https://manual.manticoresearch.com/.   # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Contact: info@manticoresearch.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six

from openapi_client.configuration import Configuration


class SuccessResponse(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'index': 'str',
        'id': 'int',
        'created': 'bool',
        'result': 'str',
        'found': 'bool'
    }

    attribute_map = {
        'index': '_index',
        'id': '_id',
        'created': 'created',
        'result': 'result',
        'found': 'found'
    }

    def __init__(self, index=None, id=None, created=None, result=None, found=None, local_vars_configuration=None):  # noqa: E501
        """SuccessResponse - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._index = None
        self._id = None
        self._created = None
        self._result = None
        self._found = None
        self.discriminator = None

        if index is not None:
            self.index = index
        if id is not None:
            self.id = id
        if created is not None:
            self.created = created
        if result is not None:
            self.result = result
        if found is not None:
            self.found = found

    @property
    def index(self):
        """Gets the index of this SuccessResponse.  # noqa: E501


        :return: The index of this SuccessResponse.  # noqa: E501
        :rtype: str
        """
        return self._index

    @index.setter
    def index(self, index):
        """Sets the index of this SuccessResponse.


        :param index: The index of this SuccessResponse.  # noqa: E501
        :type index: str
        """

        self._index = index

    @property
    def id(self):
        """Gets the id of this SuccessResponse.  # noqa: E501


        :return: The id of this SuccessResponse.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this SuccessResponse.


        :param id: The id of this SuccessResponse.  # noqa: E501
        :type id: int
        """

        self._id = id

    @property
    def created(self):
        """Gets the created of this SuccessResponse.  # noqa: E501


        :return: The created of this SuccessResponse.  # noqa: E501
        :rtype: bool
        """
        return self._created

    @created.setter
    def created(self, created):
        """Sets the created of this SuccessResponse.


        :param created: The created of this SuccessResponse.  # noqa: E501
        :type created: bool
        """

        self._created = created

    @property
    def result(self):
        """Gets the result of this SuccessResponse.  # noqa: E501


        :return: The result of this SuccessResponse.  # noqa: E501
        :rtype: str
        """
        return self._result

    @result.setter
    def result(self, result):
        """Sets the result of this SuccessResponse.


        :param result: The result of this SuccessResponse.  # noqa: E501
        :type result: str
        """

        self._result = result

    @property
    def found(self):
        """Gets the found of this SuccessResponse.  # noqa: E501


        :return: The found of this SuccessResponse.  # noqa: E501
        :rtype: bool
        """
        return self._found

    @found.setter
    def found(self, found):
        """Sets the found of this SuccessResponse.


        :param found: The found of this SuccessResponse.  # noqa: E501
        :type found: bool
        """

        self._found = found

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, SuccessResponse):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, SuccessResponse):
            return True

        return self.to_dict() != other.to_dict()
