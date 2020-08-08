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

import (
	"encoding/json"
)

// SearchResponseHits struct for SearchResponseHits
type SearchResponseHits struct {
	Total *int32 `json:"total,omitempty"`
	Hits *[]map[string]interface{} `json:"hits,omitempty"`
}

// NewSearchResponseHits instantiates a new SearchResponseHits object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSearchResponseHits() *SearchResponseHits {
	this := SearchResponseHits{}
	return &this
}

// NewSearchResponseHitsWithDefaults instantiates a new SearchResponseHits object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSearchResponseHitsWithDefaults() *SearchResponseHits {
	this := SearchResponseHits{}
	return &this
}

// GetTotal returns the Total field value if set, zero value otherwise.
func (o *SearchResponseHits) GetTotal() int32 {
	if o == nil || o.Total == nil {
		var ret int32
		return ret
	}
	return *o.Total
}

// GetTotalOk returns a tuple with the Total field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SearchResponseHits) GetTotalOk() (*int32, bool) {
	if o == nil || o.Total == nil {
		return nil, false
	}
	return o.Total, true
}

// HasTotal returns a boolean if a field has been set.
func (o *SearchResponseHits) HasTotal() bool {
	if o != nil && o.Total != nil {
		return true
	}

	return false
}

// SetTotal gets a reference to the given int32 and assigns it to the Total field.
func (o *SearchResponseHits) SetTotal(v int32) {
	o.Total = &v
}

// GetHits returns the Hits field value if set, zero value otherwise.
func (o *SearchResponseHits) GetHits() []map[string]interface{} {
	if o == nil || o.Hits == nil {
		var ret []map[string]interface{}
		return ret
	}
	return *o.Hits
}

// GetHitsOk returns a tuple with the Hits field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SearchResponseHits) GetHitsOk() (*[]map[string]interface{}, bool) {
	if o == nil || o.Hits == nil {
		return nil, false
	}
	return o.Hits, true
}

// HasHits returns a boolean if a field has been set.
func (o *SearchResponseHits) HasHits() bool {
	if o != nil && o.Hits != nil {
		return true
	}

	return false
}

// SetHits gets a reference to the given []map[string]interface{} and assigns it to the Hits field.
func (o *SearchResponseHits) SetHits(v []map[string]interface{}) {
	o.Hits = &v
}

func (o SearchResponseHits) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Total != nil {
		toSerialize["total"] = o.Total
	}
	if o.Hits != nil {
		toSerialize["hits"] = o.Hits
	}
	return json.Marshal(toSerialize)
}

type NullableSearchResponseHits struct {
	value *SearchResponseHits
	isSet bool
}

func (v NullableSearchResponseHits) Get() *SearchResponseHits {
	return v.value
}

func (v *NullableSearchResponseHits) Set(val *SearchResponseHits) {
	v.value = val
	v.isSet = true
}

func (v NullableSearchResponseHits) IsSet() bool {
	return v.isSet
}

func (v *NullableSearchResponseHits) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSearchResponseHits(val *SearchResponseHits) *NullableSearchResponseHits {
	return &NullableSearchResponseHits{value: val, isSet: true}
}

func (v NullableSearchResponseHits) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSearchResponseHits) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


