=begin
#Manticore Search API

#This is the API for Manticore Search HTTP protocol. For full documentation of the API methods consult https://manual.manticoresearch.com/. 

The version of the OpenAPI document: 1.0.0
Contact: info@manticoresearch.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.0.0-SNAPSHOT

=end

require 'cgi'

module OpenapiClient
  class SearchApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Perform reverse search on a percolate index
    # Performs a percolate search.  This method must be used only on percolate indexes.  Expects two paramenters: the index name and an object with array of documents to be tested. An example of the documents object:    ```   {\"query\":{\"percolate\":{\"document\":{\"content\":\"sample content\"}}}}   ```  Responds with an object with matched stored queries:     ```   {'timed_out':false,'hits':{'total':2,'max_score':1,'hits':[{'_index':'idx_pq_1','_type':'doc','_id':'2','_score':'1','_source':{'query':{'match':{'title':'some'},}}},{'_index':'idx_pq_1','_type':'doc','_id':'5','_score':'1','_source':{'query':{'ql':'some | none'}}}]}}   ``` 
    # @param index [String] Name of the percolate index
    # @param percolate_request [PercolateRequest] 
    # @param [Hash] opts the optional parameters
    # @return [SearchResponse]
    def percolate(index, percolate_request, opts = {})
      data, _status_code, _headers = percolate_with_http_info(index, percolate_request, opts)
      data
    end

    # Perform reverse search on a percolate index
    # Performs a percolate search.  This method must be used only on percolate indexes.  Expects two paramenters: the index name and an object with array of documents to be tested. An example of the documents object:    &#x60;&#x60;&#x60;   {\&quot;query\&quot;:{\&quot;percolate\&quot;:{\&quot;document\&quot;:{\&quot;content\&quot;:\&quot;sample content\&quot;}}}}   &#x60;&#x60;&#x60;  Responds with an object with matched stored queries:     &#x60;&#x60;&#x60;   {&#39;timed_out&#39;:false,&#39;hits&#39;:{&#39;total&#39;:2,&#39;max_score&#39;:1,&#39;hits&#39;:[{&#39;_index&#39;:&#39;idx_pq_1&#39;,&#39;_type&#39;:&#39;doc&#39;,&#39;_id&#39;:&#39;2&#39;,&#39;_score&#39;:&#39;1&#39;,&#39;_source&#39;:{&#39;query&#39;:{&#39;match&#39;:{&#39;title&#39;:&#39;some&#39;},}}},{&#39;_index&#39;:&#39;idx_pq_1&#39;,&#39;_type&#39;:&#39;doc&#39;,&#39;_id&#39;:&#39;5&#39;,&#39;_score&#39;:&#39;1&#39;,&#39;_source&#39;:{&#39;query&#39;:{&#39;ql&#39;:&#39;some | none&#39;}}}]}}   &#x60;&#x60;&#x60; 
    # @param index [String] Name of the percolate index
    # @param percolate_request [PercolateRequest] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(SearchResponse, Integer, Hash)>] SearchResponse data, response status code and response headers
    def percolate_with_http_info(index, percolate_request, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: SearchApi.percolate ...'
      end
      # verify the required parameter 'index' is set
      if @api_client.config.client_side_validation && index.nil?
        fail ArgumentError, "Missing the required parameter 'index' when calling SearchApi.percolate"
      end
      # verify the required parameter 'percolate_request' is set
      if @api_client.config.client_side_validation && percolate_request.nil?
        fail ArgumentError, "Missing the required parameter 'percolate_request' when calling SearchApi.percolate"
      end
      # resource path
      local_var_path = '/json/pq/{index}/search'.sub('{' + 'index' + '}', CGI.escape(index.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] || @api_client.object_to_http_body(percolate_request) 

      # return_type
      return_type = opts[:return_type] || 'SearchResponse' 

      # auth_names
      auth_names = opts[:auth_names] || []

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: SearchApi#percolate\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Performs a search
    # Performs a search.  Expects an object with mandatory properties: * the index name * the match query object Example :    ```   {'index':'movies','query':{'bool':{'must':[{'query_string':' movie'}]}},'script_fields':{'myexpr':{'script':{'inline':'IF(rating>8,1,0)'}}},'sort':[{'myexpr':'desc'},{'_score':'desc'}],'profile':true}   ```  It responds with an object with: - time of execution - if the query timed out - an array with hits (matched documents) - additional, if profiling is enabled, an array with profiling information is attached     ```   {'took':10,'timed_out':false,'hits':{'total':2,'hits':[{'_id':'1','_score':1,'_source':{'gid':11}},{'_id':'2','_score':1,'_source':{'gid':12}}]}}   ```  For more information about the match query syntax, additional paramaters that can be set to the input and response, please check: https://docs.manticoresearch.com/latest/html/http_reference/json_search.html. 
    # @param search_request [SearchRequest] 
    # @param [Hash] opts the optional parameters
    # @return [SearchResponse]
    def search(search_request, opts = {})
      data, _status_code, _headers = search_with_http_info(search_request, opts)
      data
    end

    # Performs a search
    # Performs a search.  Expects an object with mandatory properties: * the index name * the match query object Example :    &#x60;&#x60;&#x60;   {&#39;index&#39;:&#39;movies&#39;,&#39;query&#39;:{&#39;bool&#39;:{&#39;must&#39;:[{&#39;query_string&#39;:&#39; movie&#39;}]}},&#39;script_fields&#39;:{&#39;myexpr&#39;:{&#39;script&#39;:{&#39;inline&#39;:&#39;IF(rating&gt;8,1,0)&#39;}}},&#39;sort&#39;:[{&#39;myexpr&#39;:&#39;desc&#39;},{&#39;_score&#39;:&#39;desc&#39;}],&#39;profile&#39;:true}   &#x60;&#x60;&#x60;  It responds with an object with: - time of execution - if the query timed out - an array with hits (matched documents) - additional, if profiling is enabled, an array with profiling information is attached     &#x60;&#x60;&#x60;   {&#39;took&#39;:10,&#39;timed_out&#39;:false,&#39;hits&#39;:{&#39;total&#39;:2,&#39;hits&#39;:[{&#39;_id&#39;:&#39;1&#39;,&#39;_score&#39;:1,&#39;_source&#39;:{&#39;gid&#39;:11}},{&#39;_id&#39;:&#39;2&#39;,&#39;_score&#39;:1,&#39;_source&#39;:{&#39;gid&#39;:12}}]}}   &#x60;&#x60;&#x60;  For more information about the match query syntax, additional paramaters that can be set to the input and response, please check: https://docs.manticoresearch.com/latest/html/http_reference/json_search.html. 
    # @param search_request [SearchRequest] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(SearchResponse, Integer, Hash)>] SearchResponse data, response status code and response headers
    def search_with_http_info(search_request, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: SearchApi.search ...'
      end
      # verify the required parameter 'search_request' is set
      if @api_client.config.client_side_validation && search_request.nil?
        fail ArgumentError, "Missing the required parameter 'search_request' when calling SearchApi.search"
      end
      # resource path
      local_var_path = '/json/search'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:body] || @api_client.object_to_http_body(search_request) 

      # return_type
      return_type = opts[:return_type] || 'SearchResponse' 

      # auth_names
      auth_names = opts[:auth_names] || []

      new_options = opts.merge(
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: SearchApi#search\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
