#ifndef __MSGPACK_RPC_CLIENT_C_WRAPPER_H
#define __MSGPACK_RPC_CLIENT_C_WRAPPER_H

typedef void mrclient;

#ifdef __cplusplus
extern "C" {
#endif
  mrclient*   mrc_create(char *, int);
  void        mrc_destroy(mrclient *);
  const char* mrc_call(mrclient *, char *);
  const char* mrc_call(mrclient *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *);
  const char* mrc_notify(mrclient *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_notify(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
#ifdef __cplusplus
}
#endif

#endif
