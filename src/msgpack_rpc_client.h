#ifndef __MSGPACK_RPC_C_CLIENT_H
#define __MSGPACK_RPC_C_CLIENT_H

#define mrc_call(...) mrc_call_(__VA_ARGS__, (char *)0x0)
#define mrc_notify(...) mrc_notify_(__VA_ARGS__, (char *)0x0)

typedef void mrclient;

#ifdef __cplusplus
extern "C" {
#endif

  mrclient*   mrc_create(char *, int);
  void        mrc_destroy(mrclient *);
  const char* mrc_call_(mrclient *, char *, ...);
  void mrc_notify_(mrclient *, char *, ...);
#ifdef __cplusplus
}
#endif

#endif
