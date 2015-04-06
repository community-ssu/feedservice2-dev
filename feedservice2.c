#include <glib.h>
#include <conicconnection.h>

#include <assert.h>

#include "include/facebook/feedserviceutils2.h"

int
network_utils_get_with_progress_and_validate_certificate(
    GString *url,
    GArray *response,
    GHashTable *headers,
    GHashTable *query_params,
    ConIcConnection *con,
    HttpProgress *progress,
    GError **error
  )
{
  assert(0);
  return 0;
}

int network_utils_post_multipart_with_progress(
    GString *url,
    const gchar *file,
    GHashTable *query_params,
    GArray *response,
    ConIcConnection *con,
    HttpProgress *progress,
    GError **error
  )
{
  assert(0);
  return 0;
}

int
network_utils_get_with_progress(
    GString *url,
    GArray *result,
    GHashTable *headers,
    GHashTable *query_params,
    ConIcConnection *con,
    HttpProgress *progress,
    GError **error
  )
{
  assert(0);
  return 0;
}

int
network_utils_get(
    GString *url,
    GArray *result,
    GHashTable *headers,
    GHashTable *query_params,
    ConIcConnection *con,
    GError **error
  )
{
  assert(0);
  return 0;
}
