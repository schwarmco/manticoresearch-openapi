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

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', process.cwd()+'/src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require(process.cwd()+'/src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.ManticoreSearchApi);
  }
}(this, function(expect, ManticoreSearchApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new ManticoreSearchApi.DeleteResponse();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('DeleteResponse', function() {
    it('should create an instance of DeleteResponse', function() {
      // uncomment below and update the code to test DeleteResponse
      //var instane = new ManticoreSearchApi.DeleteResponse();
      //expect(instance).to.be.a(ManticoreSearchApi.DeleteResponse);
    });

    it('should have the property index (base name: "_index")', function() {
      // uncomment below and update the code to test the property index
      //var instane = new ManticoreSearchApi.DeleteResponse();
      //expect(instance).to.be();
    });

    it('should have the property deleted (base name: "deleted")', function() {
      // uncomment below and update the code to test the property deleted
      //var instane = new ManticoreSearchApi.DeleteResponse();
      //expect(instance).to.be();
    });

    it('should have the property id (base name: "_id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new ManticoreSearchApi.DeleteResponse();
      //expect(instance).to.be();
    });

    it('should have the property result (base name: "result")', function() {
      // uncomment below and update the code to test the property result
      //var instane = new ManticoreSearchApi.DeleteResponse();
      //expect(instance).to.be();
    });

  });

}));
