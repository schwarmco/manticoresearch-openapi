/*
 * Manticore Search API
 *
 * This is the API for Manticore Search HTTP protocol. For full documentation of the API methods consult https://manual.manticoresearch.com/. 
 *
 * API version: 1.0.0
 * Contact: info@manticoresearch.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// DeleteDocumentRequest Payload for delete request. Documents can be deleted either one by one by specifying the document id or by providing a query object. For more information see  [Delete API](https://docs.manticoresearch.com/latest/html/http_reference/json_delete.html) 
type DeleteDocumentRequest struct {
	// Index name
	Index string `json:"index"`
	// Document ID
	Id int64 `json:"id,omitempty"`
	// Query tree object
	Query map[string]interface{} `json:"query,omitempty"`
}
