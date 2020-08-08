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

// SearchResponse Response object of a search request
type SearchResponse struct {
	Took *int32 `json:"took,omitempty"`
	TimedOut *bool `json:"timed_out,omitempty"`
	Hits *SearchResponseHits `json:"hits,omitempty"`
	Profile *map[string]interface{} `json:"profile,omitempty"`
}

// NewSearchResponse instantiates a new SearchResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSearchResponse() *SearchResponse {
	this := SearchResponse{}
	return &this
}

// NewSearchResponseWithDefaults instantiates a new SearchResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSearchResponseWithDefaults() *SearchResponse {
	this := SearchResponse{}
	return &this
}

// GetTook returns the Took field value if set, zero value otherwise.
func (o *SearchResponse) GetTook() int32 {
	if o == nil || o.Took == nil {
		var ret int32
		return ret
	}
	return *o.Took
}

// GetTookOk returns a tuple with the Took field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SearchResponse) GetTookOk() (*int32, bool) {
	if o == nil || o.Took == nil {
		return nil, false
	}
	return o.Took, true
}

// HasTook returns a boolean if a field has been set.
func (o *SearchResponse) HasTook() bool {
	if o != nil && o.Took != nil {
		return true
	}

	return false
}

// SetTook gets a reference to the given int32 and assigns it to the Took field.
func (o *SearchResponse) SetTook(v int32) {
	o.Took = &v
}

// GetTimedOut returns the TimedOut field value if set, zero value otherwise.
func (o *SearchResponse) GetTimedOut() bool {
	if o == nil || o.TimedOut == nil {
		var ret bool
		return ret
	}
	return *o.TimedOut
}

// GetTimedOutOk returns a tuple with the TimedOut field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SearchResponse) GetTimedOutOk() (*bool, bool) {
	if o == nil || o.TimedOut == nil {
		return nil, false
	}
	return o.TimedOut, true
}

// HasTimedOut returns a boolean if a field has been set.
func (o *SearchResponse) HasTimedOut() bool {
	if o != nil && o.TimedOut != nil {
		return true
	}

	return false
}

// SetTimedOut gets a reference to the given bool and assigns it to the TimedOut field.
func (o *SearchResponse) SetTimedOut(v bool) {
	o.TimedOut = &v
}

// GetHits returns the Hits field value if set, zero value otherwise.
func (o *SearchResponse) GetHits() SearchResponseHits {
	if o == nil || o.Hits == nil {
		var ret SearchResponseHits
		return ret
	}
	return *o.Hits
}

// GetHitsOk returns a tuple with the Hits field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SearchResponse) GetHitsOk() (*SearchResponseHits, bool) {
	if o == nil || o.Hits == nil {
		return nil, false
	}
	return o.Hits, true
}

// HasHits returns a boolean if a field has been set.
func (o *SearchResponse) HasHits() bool {
	if o != nil && o.Hits != nil {
		return true
	}

	return false
}

// SetHits gets a reference to the given SearchResponseHits and assigns it to the Hits field.
func (o *SearchResponse) SetHits(v SearchResponseHits) {
	o.Hits = &v
}

// GetProfile returns the Profile field value if set, zero value otherwise.
func (o *SearchResponse) GetProfile() map[string]interface{} {
	if o == nil || o.Profile == nil {
		var ret map[string]interface{}
		return ret
	}
	return *o.Profile
}

// GetProfileOk returns a tuple with the Profile field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SearchResponse) GetProfileOk() (*map[string]interface{}, bool) {
	if o == nil || o.Profile == nil {
		return nil, false
	}
	return o.Profile, true
}

// HasProfile returns a boolean if a field has been set.
func (o *SearchResponse) HasProfile() bool {
	if o != nil && o.Profile != nil {
		return true
	}

	return false
}

// SetProfile gets a reference to the given map[string]interface{} and assigns it to the Profile field.
func (o *SearchResponse) SetProfile(v map[string]interface{}) {
	o.Profile = &v
}

func (o SearchResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Took != nil {
		toSerialize["took"] = o.Took
	}
	if o.TimedOut != nil {
		toSerialize["timed_out"] = o.TimedOut
	}
	if o.Hits != nil {
		toSerialize["hits"] = o.Hits
	}
	if o.Profile != nil {
		toSerialize["profile"] = o.Profile
	}
	return json.Marshal(toSerialize)
}

type NullableSearchResponse struct {
	value *SearchResponse
	isSet bool
}

func (v NullableSearchResponse) Get() *SearchResponse {
	return v.value
}

func (v *NullableSearchResponse) Set(val *SearchResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableSearchResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableSearchResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSearchResponse(val *SearchResponse) *NullableSearchResponse {
	return &NullableSearchResponse{value: val, isSet: true}
}

func (v NullableSearchResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSearchResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


