#ifndef __MSGPACK_CLIENT_C_WRAPPER_H
#define __MSGPACK_CLIENT_C_WRAPPER_H

typedef void mpclient;

#ifdef __cplusplus
extern "C" {
#endif
  mpclient*   mpc_create(char *, int);
  void        mpc_destroy(mpclient *);
  const char* mpc_call(mpclient *, char *);
  const char* mpc_call(mpclient *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_call(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *);
  const char* mpc_notify(mpclient *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mpc_notify(mpclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
#ifdef __cplusplus
}
#endif

#endif
