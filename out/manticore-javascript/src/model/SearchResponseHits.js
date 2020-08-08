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
 * The SearchResponseHits model module.
 * @module model/SearchResponseHits
 * @version 1.0.0
 */
class SearchResponseHits {
    /**
     * Constructs a new <code>SearchResponseHits</code>.
     * @alias module:model/SearchResponseHits
     */
    constructor() { 
        
        SearchResponseHits.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>SearchResponseHits</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SearchResponseHits} obj Optional instance to populate.
     * @return {module:model/SearchResponseHits} The populated <code>SearchResponseHits</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SearchResponseHits();

            if (data.hasOwnProperty('total')) {
                obj['total'] = ApiClient.convertToType(data['total'], 'Number');
            }
            if (data.hasOwnProperty('hits')) {
                obj['hits'] = ApiClient.convertToType(data['hits'], [Object]);
            }
        }
        return obj;
    }


}

/**
 * @member {Number} total
 */
SearchResponseHits.prototype['total'] = undefined;

/**
 * @member {Array.<Object>} hits
 */
SearchResponseHits.prototype['hits'] = undefined;






export default SearchResponseHits;

