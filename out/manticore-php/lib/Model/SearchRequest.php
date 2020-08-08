<?php
/**
 * SearchRequest
 *
 * PHP version 7.2
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * Manticore Search API
 *
 * This is the API for Manticore Search HTTP protocol. For full documentation of the API methods consult https://manual.manticoresearch.com/.
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: info@manticoresearch.com
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 5.0.0-SNAPSHOT
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace OpenAPI\Client\Model;

use \ArrayAccess;
use \OpenAPI\Client\ObjectSerializer;

/**
 * SearchRequest Class Doc Comment
 *
 * @category Class
 * @description Payload for search operation
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class SearchRequest implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'searchRequest';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'index' => 'string',
        'query' => 'map[string,object]',
        'limit' => 'int',
        'offset' => 'int',
        'max_matches' => 'int',
        'sort' => 'object[]',
        'script_fields' => 'object',
        'highlight' => 'object',
        '_source' => 'string[]',
        'profile' => 'bool'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'index' => null,
        'query' => null,
        'limit' => null,
        'offset' => null,
        'max_matches' => null,
        'sort' => null,
        'script_fields' => null,
        'highlight' => null,
        '_source' => null,
        'profile' => null
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPITypes()
    {
        return self::$openAPITypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPIFormats()
    {
        return self::$openAPIFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'index' => 'index',
        'query' => 'query',
        'limit' => 'limit',
        'offset' => 'offset',
        'max_matches' => 'max_matches',
        'sort' => 'sort',
        'script_fields' => 'script_fields',
        'highlight' => 'highlight',
        '_source' => '_source',
        'profile' => 'profile'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'index' => 'setIndex',
        'query' => 'setQuery',
        'limit' => 'setLimit',
        'offset' => 'setOffset',
        'max_matches' => 'setMaxMatches',
        'sort' => 'setSort',
        'script_fields' => 'setScriptFields',
        'highlight' => 'setHighlight',
        '_source' => 'setSource',
        'profile' => 'setProfile'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'index' => 'getIndex',
        'query' => 'getQuery',
        'limit' => 'getLimit',
        'offset' => 'getOffset',
        'max_matches' => 'getMaxMatches',
        'sort' => 'getSort',
        'script_fields' => 'getScriptFields',
        'highlight' => 'getHighlight',
        '_source' => 'getSource',
        'profile' => 'getProfile'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$openAPIModelName;
    }

    

    

    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['index'] = isset($data['index']) ? $data['index'] : null;
        $this->container['query'] = isset($data['query']) ? $data['query'] : null;
        $this->container['limit'] = isset($data['limit']) ? $data['limit'] : null;
        $this->container['offset'] = isset($data['offset']) ? $data['offset'] : null;
        $this->container['max_matches'] = isset($data['max_matches']) ? $data['max_matches'] : null;
        $this->container['sort'] = isset($data['sort']) ? $data['sort'] : null;
        $this->container['script_fields'] = isset($data['script_fields']) ? $data['script_fields'] : null;
        $this->container['highlight'] = isset($data['highlight']) ? $data['highlight'] : null;
        $this->container['_source'] = isset($data['_source']) ? $data['_source'] : null;
        $this->container['profile'] = isset($data['profile']) ? $data['profile'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['index'] === null) {
            $invalidProperties[] = "'index' can't be null";
        }
        if ($this->container['query'] === null) {
            $invalidProperties[] = "'query' can't be null";
        }
        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets index
     *
     * @return string
     */
    public function getIndex()
    {
        return $this->container['index'];
    }

    /**
     * Sets index
     *
     * @param string $index index
     *
     * @return $this
     */
    public function setIndex($index)
    {
        $this->container['index'] = $index;

        return $this;
    }

    /**
     * Gets query
     *
     * @return map[string,object]
     */
    public function getQuery()
    {
        return $this->container['query'];
    }

    /**
     * Sets query
     *
     * @param map[string,object] $query query
     *
     * @return $this
     */
    public function setQuery($query)
    {
        $this->container['query'] = $query;

        return $this;
    }

    /**
     * Gets limit
     *
     * @return int|null
     */
    public function getLimit()
    {
        return $this->container['limit'];
    }

    /**
     * Sets limit
     *
     * @param int|null $limit limit
     *
     * @return $this
     */
    public function setLimit($limit)
    {
        $this->container['limit'] = $limit;

        return $this;
    }

    /**
     * Gets offset
     *
     * @return int|null
     */
    public function getOffset()
    {
        return $this->container['offset'];
    }

    /**
     * Sets offset
     *
     * @param int|null $offset offset
     *
     * @return $this
     */
    public function setOffset($offset)
    {
        $this->container['offset'] = $offset;

        return $this;
    }

    /**
     * Gets max_matches
     *
     * @return int|null
     */
    public function getMaxMatches()
    {
        return $this->container['max_matches'];
    }

    /**
     * Sets max_matches
     *
     * @param int|null $max_matches max_matches
     *
     * @return $this
     */
    public function setMaxMatches($max_matches)
    {
        $this->container['max_matches'] = $max_matches;

        return $this;
    }

    /**
     * Gets sort
     *
     * @return object[]|null
     */
    public function getSort()
    {
        return $this->container['sort'];
    }

    /**
     * Sets sort
     *
     * @param object[]|null $sort sort
     *
     * @return $this
     */
    public function setSort($sort)
    {
        $this->container['sort'] = $sort;

        return $this;
    }

    /**
     * Gets script_fields
     *
     * @return object|null
     */
    public function getScriptFields()
    {
        return $this->container['script_fields'];
    }

    /**
     * Sets script_fields
     *
     * @param object|null $script_fields script_fields
     *
     * @return $this
     */
    public function setScriptFields($script_fields)
    {
        $this->container['script_fields'] = $script_fields;

        return $this;
    }

    /**
     * Gets highlight
     *
     * @return object|null
     */
    public function getHighlight()
    {
        return $this->container['highlight'];
    }

    /**
     * Sets highlight
     *
     * @param object|null $highlight highlight
     *
     * @return $this
     */
    public function setHighlight($highlight)
    {
        $this->container['highlight'] = $highlight;

        return $this;
    }

    /**
     * Gets _source
     *
     * @return string[]|null
     */
    public function getSource()
    {
        return $this->container['_source'];
    }

    /**
     * Sets _source
     *
     * @param string[]|null $_source _source
     *
     * @return $this
     */
    public function setSource($_source)
    {
        $this->container['_source'] = $_source;

        return $this;
    }

    /**
     * Gets profile
     *
     * @return bool|null
     */
    public function getProfile()
    {
        return $this->container['profile'];
    }

    /**
     * Sets profile
     *
     * @param bool|null $profile profile
     *
     * @return $this
     */
    public function setProfile($profile)
    {
        $this->container['profile'] = $profile;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     *
     * @param integer $offset Offset
     * @param mixed   $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        return json_encode(
            ObjectSerializer::sanitizeForSerialization($this),
            JSON_PRETTY_PRINT
        );
    }

    /**
     * Gets a header-safe presentation of the object
     *
     * @return string
     */
    public function toHeaderValue()
    {
        return json_encode(ObjectSerializer::sanitizeForSerialization($this));
    }
}


