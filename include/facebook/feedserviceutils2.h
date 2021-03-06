#ifndef _FEEDSERVICEUTILS2_H_
#define _FEEDSERVICEUTILS2_H_

typedef struct{
  void* query_loaderdata;
}query_loader;

typedef struct{
  void* db_interface_data;
}db_interface;

typedef struct{
  void* handle;
}file_watcher;


typedef gboolean (*HttpProgressCallback)(gdouble bytes_sent,gpointer user_data);

typedef struct{
  HttpProgressCallback callback;
  gpointer user_data;
}HttpProgress;

extern void
query_loader_free(query_loader* db_loader);

extern void
db_interface_free(db_interface* database);

extern void
file_watcher_free(file_watcher* watcher);

extern int
network_utils_get_with_progress_and_validate_certificate(
    GString *url,
    GArray *response,
    GHashTable *headers,
    GHashTable *query_params,
    ConIcConnection *con,
    HttpProgress *progress,
    GError **error
  );

extern int network_utils_post_multipart_with_progress(
    GString *url,
    const gchar *file,
    GHashTable *query_params,
    GArray *response,
    ConIcConnection *con,
    HttpProgress *progress,
    GError **error
  );

extern int
network_utils_get_with_progress(
    GString *url,
    GArray *result,
    GHashTable *headers,
    GHashTable *query_params,
    ConIcConnection *con,
    HttpProgress *progress,
    GError **error
  );

extern int
network_utils_get(
    GString *url,
    GArray *result,
    GHashTable *headers,
    GHashTable *query_params,
    ConIcConnection *con,
    GError **error
  );

#endif /* _FEEDSERVICEUTILS2_H_ */
