/**
 * Manticore Search API
 * This is the API for Manticore Search HTTP protocol. For full documentation of the API methods consult https://manual.manticoresearch.com/. 
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: info@manticoresearch.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';

/**
 * The SearchRequest model module.
 * @module model/SearchRequest
 * @version 1.0.0
 */
class SearchRequest {
    /**
     * Constructs a new <code>SearchRequest</code>.
     * Payload for search operation
     * @alias module:model/SearchRequest
     * @param index {String} 
     * @param query {Object.<String, Object>} 
     */
    constructor(index, query) { 
        
        SearchRequest.initialize(this, index, query);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, index, query) { 
        obj['index'] = index;
        obj['query'] = query;
    }

    /**
     * Constructs a <code>SearchRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SearchRequest} obj Optional instance to populate.
     * @return {module:model/SearchRequest} The populated <code>SearchRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SearchRequest();

            if (data.hasOwnProperty('index')) {
                obj['index'] = ApiClient.convertToType(data['index'], 'String');
            }
            if (data.hasOwnProperty('query')) {
                obj['query'] = ApiClient.convertToType(data['query'], {'String': Object});
            }
            if (data.hasOwnProperty('limit')) {
                obj['limit'] = ApiClient.convertToType(data['limit'], 'Number');
            }
            if (data.hasOwnProperty('offset')) {
                obj['offset'] = ApiClient.convertToType(data['offset'], 'Number');
            }
            if (data.hasOwnProperty('max_matches')) {
                obj['max_matches'] = ApiClient.convertToType(data['max_matches'], 'Number');
            }
            if (data.hasOwnProperty('sort')) {
                obj['sort'] = ApiClient.convertToType(data['sort'], [Object]);
            }
            if (data.hasOwnProperty('script_fields')) {
                obj['script_fields'] = ApiClient.convertToType(data['script_fields'], Object);
            }
            if (data.hasOwnProperty('highlight')) {
                obj['highlight'] = ApiClient.convertToType(data['highlight'], Object);
            }
            if (data.hasOwnProperty('_source')) {
                obj['_source'] = ApiClient.convertToType(data['_source'], ['String']);
            }
            if (data.hasOwnProperty('profile')) {
                obj['profile'] = ApiClient.convertToType(data['profile'], 'Boolean');
            }
        }
        return obj;
    }


}

/**
 * @member {String} index
 */
SearchRequest.prototype['index'] = undefined;

/**
 * @member {Object.<String, Object>} query
 */
SearchRequest.prototype['query'] = undefined;

/**
 * @member {Number} limit
 */
SearchRequest.prototype['limit'] = undefined;

/**
 * @member {Number} offset
 */
SearchRequest.prototype['offset'] = undefined;

/**
 * @member {Number} max_matches
 */
SearchRequest.prototype['max_matches'] = undefined;

/**
 * @member {Array.<Object>} sort
 */
SearchRequest.prototype['sort'] = undefined;

/**
 * @member {Object} script_fields
 */
SearchRequest.prototype['script_fields'] = undefined;

/**
 * @member {Object} highlight
 */
SearchRequest.prototype['highlight'] = undefined;

/**
 * @member {Array.<String>} _source
 */
SearchRequest.prototype['_source'] = undefined;

/**
 * @member {Boolean} profile
 */
SearchRequest.prototype['profile'] = undefined;






export default SearchRequest;

