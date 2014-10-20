#include <msgpack/rpc/client.h>
#include "msgpack_rpc_client.h"
#include <stdarg.h>

/*
  C interface of msgpack::rpc::caller->call()
  and msgpack::rpc::caller->notify().
 */

extern "C" {

  mrclient* mrc_create(char *ip, int port) {
    return (msgpack::rpc::client*) new msgpack::rpc::client(ip, port);
  }

  void mrc_destroy(mrclient* c_mrclient) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    delete cpp_mrclient;
    return;
  }

  const char* mrc_call(mrclient* c_mrclient, char *name, int p_num, ...) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    int i;
    va_list ap;
    char **params = new char* [p_num];
    std::string result;
    std::string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16;

    va_start(ap, p_num);
    for(i = 0; i < p_num; i++){
      params[i] = (char*)va_arg(ap, char*);
    }
    va_end(ap);

    switch(p_num) {
      case 0:
        result = (cpp_mrclient->call(nm)).get<std::string>();
        break;
      case 1:
        s1 = params[0];
        result = (cpp_mrclient->call(nm, s1)).get<std::string>();
        break;
      case 2:
        s1 = params[0];
        s2 = params[1];
        result = (cpp_mrclient->call(nm, s1, s2)).get<std::string>();
        break;
      case 3:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        result = (cpp_mrclient->call(nm, s1, s2, s3)).get<std::string>();
        break;
      case 4:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        result = (cpp_mrclient->call(nm, s1, s2, s3, s4)).get<std::string>();
        break;
      case 5:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5)).get<std::string>();
        break;
      case 6:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6)).get<std::string>();
        break;
      case 7:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7)).get<std::string>();
        break;
      case 8:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8)).get<std::string>();
        break;
      case 9:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9)).get<std::string>();
        break;
      case 10:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10)).get<std::string>();
        break;
      case 11:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        s11 = params[10];
        result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11)).get<std::string>();
        break;
      case 12:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        s11 = params[10];
        s12 = params[11];
        result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12)).get<std::string>();
        break;
      case 13:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        s11 = params[10];
        s12 = params[11];
        s13 = params[12];
        result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13)).get<std::string>();
        break;
      case 14:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        s11 = params[10];
        s12 = params[11];
        s13 = params[12];
        s14 = params[13];
        result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14)).get<std::string>();
        break;
      case 15:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        s11 = params[10];
        s12 = params[11];
        s13 = params[12];
        s14 = params[13];
        s15 = params[14];
        result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15)).get<std::string>();
        break;
      case 16:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        s11 = params[10];
        s12 = params[11];
        s13 = params[12];
        s14 = params[13];
        s15 = params[14];
        s16 = params[15];
        result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16)).get<std::string>();
        break;
      default:
        result = (cpp_mrclient->call(nm)).get<std::string>();
        break;
    }
    delete [] params;
    return result.c_str();
  }

  const char* mrc_call0(mrclient* c_mrclient, char *name) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string result = (cpp_mrclient->call(nm)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call1(mrclient* c_mrclient, char *name, char *a1) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string result = (cpp_mrclient->call(nm, s1)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call2(mrclient* c_mrclient, char *name, char *a1, char *a2) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string result = (cpp_mrclient->call(nm, s1, s2)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call3(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call4(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3, s4)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call5(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call6(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call7(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call8(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call9(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call10(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call11(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10, char *a11) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    std::string s11 = a11;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10, s11)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call12(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10, char *a11, char *a12) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    std::string s11 = a11;
    std::string s12 = a12;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10, s11, s12)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call13(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10, char *a11, char *a12, char *a13) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    std::string s11 = a11;
    std::string s12 = a12;
    std::string s13 = a13;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10, s11, s12, s13)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call14(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10, char *a11, char *a12, char *a13, char *a14) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    std::string s11 = a11;
    std::string s12 = a12;
    std::string s13 = a13;
    std::string s14 = a14;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10, s11, s12, s13, s14)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call15(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10, char *a11, char *a12, char *a13, char *a14, char *a15) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    std::string s11 = a11;
    std::string s12 = a12;
    std::string s13 = a13;
    std::string s14 = a14;
    std::string s15 = a15;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10, s11, s12, s13, s14, s15)).get<std::string>();
    return result.c_str();
  }
  const char* mrc_call16(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10, char *a11, char *a12, char *a13, char *a14, char *a15, char *a16) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    std::string s11 = a11;
    std::string s12 = a12;
    std::string s13 = a13;
    std::string s14 = a14;
    std::string s15 = a15;
    std::string s16 = a16;
    std::string result = (cpp_mrclient->call(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10, s11, s12, s13, s14, s15, 16)).get<std::string>();
    return result.c_str();
  }

  void mrc_notify(mrclient* c_mrclient, char *name, int p_num, ...) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    int i;
    va_list ap;
    char **params = new char* [p_num];
    std::string result;
    std::string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16;

    va_start(ap, p_num);
    for(i = 0; i < p_num; i++){
      params[i] = (char*)va_arg(ap, char*);
    }
    va_end(ap);

    switch(p_num) {
      case 0:
        cpp_mrclient->notify(nm);
        break;
      case 1:
        s1 = params[0];
        cpp_mrclient->notify(nm, s1);
        break;
      case 2:
        s1 = params[0];
        s2 = params[1];
        cpp_mrclient->notify(nm, s1, s2);
        break;
      case 3:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        cpp_mrclient->notify(nm, s1, s2, s3);
        break;
      case 4:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        cpp_mrclient->notify(nm, s1, s2, s3, s4);
        break;
      case 5:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        cpp_mrclient->notify(nm, s1, s2, s3, s4, s5);
        break;
      case 6:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6);
        break;
      case 7:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7);
        break;
      case 8:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8);
        break;
      case 9:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9);
        break;
      case 10:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10);
        break;
      case 11:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        s11 = params[10];
        cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11);
        break;
      case 12:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        s11 = params[10];
        s12 = params[11];
        cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12);
        break;
      case 13:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        s11 = params[10];
        s12 = params[11];
        s13 = params[12];
        cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13);
        break;
      case 14:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        s11 = params[10];
        s12 = params[11];
        s13 = params[12];
        s14 = params[13];
        cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14);
        break;
      case 15:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        s11 = params[10];
        s12 = params[11];
        s13 = params[12];
        s14 = params[13];
        s15 = params[14];
        cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15);
        break;
      case 16:
        s1 = params[0];
        s2 = params[1];
        s3 = params[2];
        s4 = params[3];
        s5 = params[4];
        s6 = params[5];
        s7 = params[6];
        s8 = params[7];
        s9 = params[8];
        s10 = params[9];
        s11 = params[10];
        s12 = params[11];
        s13 = params[12];
        s14 = params[13];
        s15 = params[14];
        s16 = params[15];
        cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16);
        break;
      default:
        cpp_mrclient->notify(nm);
        break;
    }
    delete [] params;
    return;
  }

  void mrc_notify0(mrclient* c_mrclient, char *name) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    cpp_mrclient->notify(nm);
    return;
  }
  void mrc_notify1(mrclient* c_mrclient, char *name, char *a1) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    cpp_mrclient->notify(nm, s1);
    return;
  }
  void mrc_notify2(mrclient* c_mrclient, char *name, char *a1, char *a2) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    cpp_mrclient->notify(nm, s1, s2);
    return;
  }
  void mrc_notify3(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    cpp_mrclient->notify(nm, s1, s2, s3);
    return;
  }
  void mrc_notify4(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    cpp_mrclient->notify(nm, s1, s2, s3, s4);
    return;
  }
  void mrc_notify5(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    cpp_mrclient->notify(nm, s1, s2, s3, s4, s5);
    return;
  }
  void mrc_notify6(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6);
    return;
  }
  void mrc_notify7(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7);
    return;
  }
  void mrc_notify8(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8);
    return;
  }
  void mrc_notify9(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9);
    return;
  }
  void mrc_notify10(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10);
    return;
  }
  void mrc_notify11(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10, char *a11) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    std::string s11 = a11;
    cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10, s11);
    return;
  }
  void mrc_notify12(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10, char *a11, char *a12) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    std::string s11 = a11;
    std::string s12 = a12;
    cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10, s11, s12);
    return;
  }
  void mrc_notify13(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10, char *a11, char *a12, char *a13) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    std::string s11 = a11;
    std::string s12 = a12;
    std::string s13 = a13;
    cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10, s11, s12, s13);
    return;
  }
  void mrc_notify14(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10, char *a11, char *a12, char *a13, char *a14) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    std::string s11 = a11;
    std::string s12 = a12;
    std::string s13 = a13;
    std::string s14 = a14;
    cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10, s11, s12, s13, s14);
    return;
  }
  void mrc_notify15(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10, char *a11, char *a12, char *a13, char *a14, char *a15) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    std::string s11 = a11;
    std::string s12 = a12;
    std::string s13 = a13;
    std::string s14 = a14;
    std::string s15 = a15;
    cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10, s11, s12, s13, s14, s15);
    return;
  }
  void mrc_notify16(mrclient* c_mrclient, char *name, char *a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7, char *a8, char *a9, char *a10, char *a11, char *a12, char *a13, char *a14, char *a15, char *a16) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    std::string s1 = a1;
    std::string s2 = a2;
    std::string s3 = a3;
    std::string s4 = a4;
    std::string s5 = a5;
    std::string s6 = a6;
    std::string s7 = a7;
    std::string s8 = a8;
    std::string s9 = a9;
    std::string s10 = a10;
    std::string s11 = a11;
    std::string s12 = a12;
    std::string s13 = a13;
    std::string s14 = a14;
    std::string s15 = a15;
    std::string s16 = a16;
    cpp_mrclient->notify(nm, s1, s2, s3, s4, s5, s6, s7, s8 ,s9, s10, s11, s12, s13, s14, s15, 16);
    return;
}
}
