/*  =========================================================================
    sm_appslauncher_service - The Apps Launcher service provides the ability to monitor
the execution, run, stop, kill and list applications software on-board of a spacecraft

    The MIT License (MIT)
    =========================================================================
*/

#ifndef SM_APPSLAUNCHER_SERVICE_H_INCLUDED
#define SM_APPSLAUNCHER_SERVICE_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @warning THE FOLLOWING @INTERFACE BLOCK IS AUTO-GENERATED BY ZPROJECT
//  @warning Please edit the model at "api/sm_appslauncher_service.api" to make changes.
//  @interface
//  This API is a draft, and may change without notice.
#ifdef NMFAPI_C_BUILD_DRAFT_API
//  *** Draft method, for development use, may change without warning ***
//  Create a Apps Launcher service object
NMFAPI_C_EXPORT sm_appslauncher_service_t *
    sm_appslauncher_service_new (char *hostname, char *provider_port, char *consumer_port);

//  *** Draft method, for development use, may change without warning ***
//  The destructor
NMFAPI_C_EXPORT void
    sm_appslauncher_service_destroy (sm_appslauncher_service_t **self_p);

//  *** Draft method, for development use, may change without warning ***
//  The listApp operation allows a consumer to request the object instance identifiers
//  of the Apps objects and running status for an app name or for a certain app category
NMFAPI_C_EXPORT int
    sm_appslauncher_service_list_app (sm_appslauncher_service_t *self, char **app_name_list, size_t app_name_list_size, char *category, long **response_apps_inst_id_list, bool **response_apps_inst_running_list, size_t *response_element_count);

#endif // NMFAPI_C_BUILD_DRAFT_API
//  @end

#ifdef __cplusplus
}
#endif

#endif