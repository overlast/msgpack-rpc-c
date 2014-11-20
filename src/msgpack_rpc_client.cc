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

  void mrc_flush_loop(mrclient* c_mrclient) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    cpp_mrclient->get_loop()->flush();
    return;
  }

  const char* mrc_call_(mrclient* c_mrclient, char *name, ...) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    int i;
    va_list ap;
    char **params;
    std::string result;
    std::string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16;
    int p_num = 0;
    char* tmp;

    va_start(ap, name);
    tmp = (char*)va_arg(ap, char*);
    while (tmp != NULL) {
      p_num++;
      tmp = (char*)va_arg(ap, char*);
    }
    va_end(ap);

    params = new char* [p_num];
    va_start(ap, name);
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

  void mrc_notify_(mrclient* c_mrclient, char *name,  ...) {
    msgpack::rpc::client* cpp_mrclient = (msgpack::rpc::client*) c_mrclient;
    std::string nm = name;
    int i;
    va_list ap;
    char **params;
    std::string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16;
    int p_num = 0;
    char* tmp;

    va_start(ap, name);
    tmp = (char*)va_arg(ap, char*);
    while (tmp != NULL) {
      p_num++;
      tmp = (char*)va_arg(ap, char*);
    }
    va_end(ap);

    params = new char* [p_num];
    va_start(ap, name);
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
        cpp_mrclient->call(nm, s1);
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

}
