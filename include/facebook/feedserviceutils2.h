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


typedef gboolean (*HttpProgressCallback)(guint64 bytes_sent,gpointer user_data);

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
    GString* string,
    GArray* array,
    void* unknown_param_1,
    GHashTable* query_params,
    ConIcConnection* con,
    HttpProgress* progress,
    GError** error
  );

#endif /* _FEEDSERVICEUTILS2_H_ */
