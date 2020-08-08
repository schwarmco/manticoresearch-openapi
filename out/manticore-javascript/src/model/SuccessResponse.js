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
 * The SuccessResponse model module.
 * @module model/SuccessResponse
 * @version 1.0.0
 */
class SuccessResponse {
    /**
     * Constructs a new <code>SuccessResponse</code>.
     * Success response
     * @alias module:model/SuccessResponse
     */
    constructor() { 
        
        SuccessResponse.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>SuccessResponse</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SuccessResponse} obj Optional instance to populate.
     * @return {module:model/SuccessResponse} The populated <code>SuccessResponse</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SuccessResponse();

            if (data.hasOwnProperty('_index')) {
                obj['_index'] = ApiClient.convertToType(data['_index'], 'String');
            }
            if (data.hasOwnProperty('_id')) {
                obj['_id'] = ApiClient.convertToType(data['_id'], 'Number');
            }
            if (data.hasOwnProperty('created')) {
                obj['created'] = ApiClient.convertToType(data['created'], 'Boolean');
            }
            if (data.hasOwnProperty('result')) {
                obj['result'] = ApiClient.convertToType(data['result'], 'String');
            }
            if (data.hasOwnProperty('found')) {
                obj['found'] = ApiClient.convertToType(data['found'], 'Boolean');
            }
        }
        return obj;
    }


}

/**
 * @member {String} _index
 */
SuccessResponse.prototype['_index'] = undefined;

/**
 * @member {Number} _id
 */
SuccessResponse.prototype['_id'] = undefined;

/**
 * @member {Boolean} created
 */
SuccessResponse.prototype['created'] = undefined;

/**
 * @member {String} result
 */
SuccessResponse.prototype['result'] = undefined;

/**
 * @member {Boolean} found
 */
SuccessResponse.prototype['found'] = undefined;






export default SuccessResponse;

