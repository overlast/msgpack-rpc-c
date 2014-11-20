#include "msgpack_rpc_client.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  mrclient* client = mrc_create("127.0.0.1", 9090);
  char query[200];
  const char *result = NULL;
  while (1) {
    printf("please input query >");
    scanf("%s", query);
    if (strcmp(query, "q")) {
    } else {
      break;
    }
    printf("\n query = %s\n", query);
    result = (const char *)mrc_call(client, "distance", query);
    printf("%s\n", result);
  }
  mrc_destroy(client);
  return 1;
}
