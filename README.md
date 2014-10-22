MessagePack-RPC for C
=======================

C wrapper of MessagePack-RPC for C++

## Requirements

Following programs are required to build:

- gcc >= 4.1 with C++ support
- [MessagePack for C++](http://msgpack.org/) >= 0.5.2
- [mpio](http://github.com/frsyuki/mpio) >= 0.3.5
- [MessagePack-RPC for C++](https://github.com/msgpack-rpc/msgpack-rpc-cpp/) >= 0.3.1

## Restrictions

This wrapper laid under restrictions.

First, a prefix string of all methods name are mrc_.
Because we can't use the namespaces in C.

Therefore, messagepack::rpc::client->call() is mrc_call().
And messagepack::rpc::client->notify() is mrc_notify().

Second, types of all arguments of mrc_call() are limited to char*.
And types of all arguments of mrc_notify() are limited to char* too.

    const char* mrc_call(char* NAME_OF_METHOD, char* argv1, char* argv2, ....);
    void mrc_notify(char* NAME_OF_METHOD, char* argv1, char* argv2, ....);

Finaly, an argument number after NAME_OF_METHOD is 0 to 16.

    OK : mrc_call(char* NAME_OF_METHOD);
    OK : mrc_call(char* NAME_OF_METHOD, char* argv1, ...,  char* argv16);
    NG : mrc_call(char* NAME_OF_METHOD, char* argv1, ...,  char* argv17);

## Before installation

You should install above shared libraries.

### If you use CentOS 6.x

Configure and install in this way:

    $ ./sh/make_centos_env.sh

## Installation

Configure and install in this way:

    $ ./sh/compile.sh

## Example

### Client Sample code

msgpack-rpc-c/src/msgpack_rpc_client_clang.c is one of sample code.

    #include "msgpack_rpc_client.h"
    #include <stdio.h>

    int main(void) {
      mrclient* client = mrc_create("127.0.0.1", 9090);
      const char *result = mrc_call(client, "distance", "STAR WARS");
      printf("%s\n", result);
      mrc_destroy(client);
      return 1;
    }

### Compile client sample code

    $ cd msgpack-rpc-c/src
    $ gcc -c ./msgpack_rpc_client_clang.c
    $ g++ -O3 -o c_test_client msgpack_rpc_client_clang.o -lmsgpack_rpc_client -lmsgpack-rpc -lmpio -lmsgpack

### Execute client sample code

     $ LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib ./c_test_client

## License

  Copyright (C) 2014 Toshinori SATO <overlasting _attt_ gmail _dottt_ com>

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
