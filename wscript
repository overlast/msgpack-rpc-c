#!/usr/bin/env python
#-*- coding:utf-8 -*-

APPNAME = 'msgpack-rpc-c'
VERSION = '0.0.1'

def options(opt):
  opt.load('compiler_cc')
  opt.load('compiler_cxx')

def configure(conf):
  conf.load('compiler_cc')
  conf.load('compiler_cxx')

  conf.check_cxx(lib = 'msgpack-rpc')
  conf.check_cxx(lib = 'mpio')
  conf.check_cxx(lib = 'msgpack')
  conf.env.MSGPACK_RPC_C_DIR = conf.env['LIBDIR']

def build(bld):
  bld.recurse('src')
