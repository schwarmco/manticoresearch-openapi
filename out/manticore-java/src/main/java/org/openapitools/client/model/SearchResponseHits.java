/*
 * Manticore Search API
 * This is the API for Manticore Search HTTP protocol. For full documentation of the API methods consult https://manual.manticoresearch.com/. 
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: info@manticoresearch.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/**
 * SearchResponseHits
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-08-08T13:02:22.834Z[GMT]")
public class SearchResponseHits {
  public static final String SERIALIZED_NAME_TOTAL = "total";
  @SerializedName(SERIALIZED_NAME_TOTAL)
  private Integer total;

  public static final String SERIALIZED_NAME_HITS = "hits";
  @SerializedName(SERIALIZED_NAME_HITS)
  private List<Object> hits = null;


  public SearchResponseHits total(Integer total) {
    
    this.total = total;
    return this;
  }

   /**
   * Get total
   * @return total
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getTotal() {
    return total;
  }


  public void setTotal(Integer total) {
    this.total = total;
  }


  public SearchResponseHits hits(List<Object> hits) {
    
    this.hits = hits;
    return this;
  }

  public SearchResponseHits addHitsItem(Object hitsItem) {
    if (this.hits == null) {
      this.hits = new ArrayList<Object>();
    }
    this.hits.add(hitsItem);
    return this;
  }

   /**
   * Get hits
   * @return hits
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public List<Object> getHits() {
    return hits;
  }


  public void setHits(List<Object> hits) {
    this.hits = hits;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SearchResponseHits searchResponseHits = (SearchResponseHits) o;
    return Objects.equals(this.total, searchResponseHits.total) &&
        Objects.equals(this.hits, searchResponseHits.hits);
  }

  @Override
  public int hashCode() {
    return Objects.hash(total, hits);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SearchResponseHits {\n");
    sb.append("    total: ").append(toIndentedString(total)).append("\n");
    sb.append("    hits: ").append(toIndentedString(hits)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

