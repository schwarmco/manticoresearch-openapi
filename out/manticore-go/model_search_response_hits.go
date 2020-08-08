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
// SearchResponseHits struct for SearchResponseHits
type SearchResponseHits struct {
	Total int32 `json:"total,omitempty"`
	Hits []map[string]interface{} `json:"hits,omitempty"`
}
