#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndexAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Bulk index operations
//
// Sends multiple operatons like inserts, updates, replaces or deletes. <br/> For each operation it's object must have same format as in their dedicated method. <br/> The method expects a raw string as the batch in NDJSON.  Each operation object needs to be serialized to   JSON and separated by endline (\\n). <br/>     An example of raw input:      `{\"insert\": {\"index\": \"movies\", \"doc\": {\"plot\": \"A secret team goes to North Pole\", \"rating\": 9.5, \"language\": [2, 3], \"title\": \"This is an older movie\", \"lon\": 51.99, \"meta\": {\"keywords\":[\"travel\",\"ice\"],\"genre\":[\"adventure\"]}, \"year\": 1950, \"lat\": 60.4, \"advise\": \"PG-13\"}}}\\n{\"delete\": {\"index\": \"movies\",\"id\":700}}`      Responds with an object telling whenever any errors occured and an array with status for each operation:<br/>   ```   {'items':[{'update':{'_index':'products','_id':1,'result':'updated'}},{'update':{'_index':'products','_id':2,'result':'updated'}}],'errors':false}   ```   
//
bulk_response_t*
IndexAPI_bulk(apiClient_t *apiClient, char * body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/json/bulk")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/json/bulk");




    // Body Param
    cJSON *localVarSingleItemJSON_body;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = char_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/x-ndjson"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","item updated");
    }
    if (apiClient->response_code == 0) {
        printf("%s\n","error");
    }
    //nonprimitive not container
    cJSON *IndexAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    bulk_response_t *elementToReturn = bulk_response_parseFromJSON(IndexAPIlocalVarJSON);
    cJSON_Delete(IndexAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    cJSON_Delete(localVarSingleItemJSON_body);
    free(localVarBodyParameters);
    return elementToReturn;
end:
    return NULL;

}

// Delete a document in an index
//
// Delete one or several documents. <br/> The method has 2 ways of deleting: either by id, in case only one document is deleted or by using a  match query, in which case multiple documents can be delete . <br/> Example of input to delete by id: <br/> ``` {'index':'movies','id':100} ``` <br/> Example of input to delete using a query: ``` {'index':'movies','query':{'bool':{'must':[{'query_string':'new movie'}]}}} ``` <br/> The match query has same syntax as in for searching. <br/> Responds with an object telling how many documents got deleted: <br/> ``` {'_index':'products','updated':1} ``` 
//
delete_response_t*
IndexAPI_delete(apiClient_t *apiClient, delete_document_request_t * delete_document_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/json/delete")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/json/delete");




    // Body Param
    cJSON *localVarSingleItemJSON_delete_document_request;
    if (delete_document_request != NULL)
    {
        //string
        localVarSingleItemJSON_delete_document_request = delete_document_request_convertToJSON(delete_document_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_delete_document_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","item updated");
    }
    if (apiClient->response_code == 0) {
        printf("%s\n","error");
    }
    //nonprimitive not container
    cJSON *IndexAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    delete_response_t *elementToReturn = delete_response_parseFromJSON(IndexAPIlocalVarJSON);
    cJSON_Delete(IndexAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    cJSON_Delete(localVarSingleItemJSON_delete_document_request);
    free(localVarBodyParameters);
    return elementToReturn;
end:
    return NULL;

}

// Create a new document in an index
//
// Insert a document. <br/> Expects an object like: <br/> ```{'index':'movies','id':701,'doc':{'title':'This is an old movie','plot':'A secret team goes to North Pole','year':1950,'rating':9.5,'lat':60.4,'lon':51.99,'advise':'PG-13','meta':'{\"keywords\":{\"travel\",\"ice\"},\"genre\":{\"adventure\"}}','language':[2,3]}}```. <br/> The document id can also be missing, in which case an autogenerated one will be used: <br/> ```{'index':'movies','doc':{'title':'This is a new movie','plot':'A secret team goes to North Pole','year':2020,'rating':9.5,'lat':60.4,'lon':51.99,'advise':'PG-13','meta':'{\"keywords\":{\"travel\",\"ice\"},\"genre\":{\"adventure\"}}','language':[2,3]}}``` <br/> It responds with an object in format: <br/> ```{'_index':'products','_id':701,'created':true,'result':'created','status':201}``` 
//
success_response_t*
IndexAPI_insert(apiClient_t *apiClient, insert_document_request_t * insert_document_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/json/insert")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/json/insert");




    // Body Param
    cJSON *localVarSingleItemJSON_insert_document_request;
    if (insert_document_request != NULL)
    {
        //string
        localVarSingleItemJSON_insert_document_request = insert_document_request_convertToJSON(insert_document_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_insert_document_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","OK");
    }
    if (apiClient->response_code == 0) {
        printf("%s\n","error");
    }
    //nonprimitive not container
    cJSON *IndexAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    success_response_t *elementToReturn = success_response_parseFromJSON(IndexAPIlocalVarJSON);
    cJSON_Delete(IndexAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    cJSON_Delete(localVarSingleItemJSON_insert_document_request);
    free(localVarBodyParameters);
    return elementToReturn;
end:
    return NULL;

}

// Replace new document in an index
//
// Replace an existing document. Input has same format as `insert` operation. <br/> Responds with an object in format: <br/> ``` {'_index':'products','_id':1,'created':false,'result':'updated','status':200} ``` 
//
success_response_t*
IndexAPI_replace(apiClient_t *apiClient, insert_document_request_t * insert_document_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/json/replace")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/json/replace");




    // Body Param
    cJSON *localVarSingleItemJSON_insert_document_request;
    if (insert_document_request != NULL)
    {
        //string
        localVarSingleItemJSON_insert_document_request = insert_document_request_convertToJSON(insert_document_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_insert_document_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","OK");
    }
    if (apiClient->response_code == 0) {
        printf("%s\n","error");
    }
    //nonprimitive not container
    cJSON *IndexAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    success_response_t *elementToReturn = success_response_parseFromJSON(IndexAPIlocalVarJSON);
    cJSON_Delete(IndexAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    cJSON_Delete(localVarSingleItemJSON_insert_document_request);
    free(localVarBodyParameters);
    return elementToReturn;
end:
    return NULL;

}

// Update a document in an index
//
// Update one or several documents. <br/> The update can be made by passing the id or by using a match query in case multiple documents can be updated. <br/> For example update a document using document id: <br/> <code> {'index':'movies','doc':{'rating':9.49},'id':100} </code> <br/> And update by using a match query: <br/> ``` {'index':'movies','doc':{'rating':9.49},'query':{'bool':{'must':[{'query_string':'new movie'}]}}} ```  <br/> The match query has same syntax as for searching. Responds with an object that tells how many documents where updated in format: <br/> ``` {'_index':'products','updated':1} ``` 
//
update_response_t*
IndexAPI_update(apiClient_t *apiClient, update_document_request_t * update_document_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/json/update")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/json/update");




    // Body Param
    cJSON *localVarSingleItemJSON_update_document_request;
    if (update_document_request != NULL)
    {
        //string
        localVarSingleItemJSON_update_document_request = update_document_request_convertToJSON(update_document_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_update_document_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","item updated");
    }
    if (apiClient->response_code == 0) {
        printf("%s\n","error");
    }
    //nonprimitive not container
    cJSON *IndexAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    update_response_t *elementToReturn = update_response_parseFromJSON(IndexAPIlocalVarJSON);
    cJSON_Delete(IndexAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    cJSON_Delete(localVarSingleItemJSON_update_document_request);
    free(localVarBodyParameters);
    return elementToReturn;
end:
    return NULL;

}

