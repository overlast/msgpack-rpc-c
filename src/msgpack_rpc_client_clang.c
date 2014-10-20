#include "msgpack_rpc_client.h"
#include <stdio.h>

int main(void) {
  mrclient* client = mrc_create("127.0.0.1", 9090);
  const char *result = mrc_call(client, "distance", 1, "タモリ");
  printf("%s\n", result);
  mrc_destroy(client);
  return 1;
}
