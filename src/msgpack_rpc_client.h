#ifndef __MSGPACK_RPC_CLIENT_C_WRAPPER_H
#define __MSGPACK_RPC_CLIENT_C_WRAPPER_H

typedef void mrclient;

#ifdef __cplusplus
extern "C" {
#endif
  mrclient*   mrc_create(char *, int);
  void        mrc_destroy(mrclient *);
  const char* mrc_call(mrclient *, char *, int, ...);
  const char* mrc_call0(mrclient *, char *);
  const char* mrc_call1(mrclient *, char *, char *);
  const char* mrc_call2(mrclient *, char *, char *, char *);
  const char* mrc_call3(mrclient *, char *, char *, char *, char *);
  const char* mrc_call4(mrclient *, char *, char *, char *, char *, char *);
  const char* mrc_call5(mrclient *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call6(mrclient *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call7(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call8(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call9(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call10(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call11(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call12(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call13(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call14(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call15(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  const char* mrc_call16(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  void mrc_notify(mrclient *, char *, int, ...);
  void mrc_notify0(mrclient *, char *);
  void mrc_notify1(mrclient *, char *, char *);
  void mrc_notify2(mrclient *, char *, char *, char *);
  void mrc_notify3(mrclient *, char *, char *, char *, char *);
  void mrc_notify4(mrclient *, char *, char *, char *, char *, char *);
  void mrc_notify5(mrclient *, char *, char *, char *, char *, char *, char *);
  void mrc_notify6(mrclient *, char *, char *, char *, char *, char *, char *, char *);
  void mrc_notify7(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *);
  void mrc_notify8(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  void mrc_notify9(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  void mrc_notify10(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  void mrc_notify11(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  void mrc_notify12(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  void mrc_notify13(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  void mrc_notify14(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  void mrc_notify15(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
  void mrc_notify16(mrclient *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, char *);
#ifdef __cplusplus
}
#endif

#endif
