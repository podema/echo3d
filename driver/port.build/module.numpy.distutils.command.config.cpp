// Generated code for Python source for module 'numpy.distutils.command.config'
// created by Nuitka version 0.5.5.3

// This code is in part copyright 2014 Kay Hayen.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nuitka/prelude.hpp"

#include "__helpers.hpp"

// The _module_numpy$distutils$command$config is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils$command$config;
PyDictObject *moduledict_numpy$distutils$command$config;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_str_dot;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_255;
extern PyObject *const_str_chr_125;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_o;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_v;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_st;
extern PyObject *const_str_plain_exe;
extern PyObject *const_str_plain_f77;
extern PyObject *const_str_plain_f90;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_low;
extern PyObject *const_str_plain_mid;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_mth;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_ret;
extern PyObject *const_str_plain_sig;
extern PyObject *const_str_plain_src;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_body;
extern PyObject *const_str_plain_call;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_decl;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_high;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_lang;
extern PyObject *const_str_plain_msvc;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_plain__link;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_flush;
extern PyObject *const_str_plain_force;
extern PyObject *const_str_plain_funcs;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_win32;
extern PyObject *const_str_plain_write;
static PyObject *const_str_plain_SIGINT;
static PyObject *const_str_plain__clean;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_config;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_plain_header;
extern PyObject *const_str_plain_isfile;
extern PyObject *const_str_plain_libdir;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_output;
static PyObject *const_str_plain_signal;
extern PyObject *const_str_plain_stdout;
extern PyObject *const_str_plain_symbol;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_cygpath;
extern PyObject *const_str_plain_dry_run;
static PyObject *const_str_plain_grabber;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_libfile;
extern PyObject *const_str_plain_libname;
extern PyObject *const_str_plain_mingw32;
static PyObject *const_str_plain_restore;
static PyObject *const_str_plain_try_run;
extern PyObject *const_str_plain_use_tee;
static PyObject *const_str_plain_LANG_EXT;
static PyObject *const_str_plain_WTERMSIG;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain__compile;
extern PyObject *const_str_plain_compiler;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_exitcode;
extern PyObject *const_str_plain_expected;
extern PyObject *const_str_plain_libfile2;
extern PyObject *const_str_plain_platform;
static PyObject *const_str_plain_try_link;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_FCompiler;
extern PyObject *const_str_plain_LinkError;
extern PyObject *const_str_plain_call_args;
extern PyObject *const_str_plain_copy_file;
extern PyObject *const_str_plain_customize;
extern PyObject *const_str_plain_distutils;
extern PyObject *const_str_plain_fcompiler;
extern PyObject *const_str_plain_libraries;
static PyObject *const_str_plain_type_name;
static PyObject *const_str_plain_GrabStdout;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_c_compiler;
static PyObject *const_str_plain_check_decl;
static PyObject *const_str_plain_check_func;
static PyObject *const_str_plain_check_type;
extern PyObject *const_str_plain_execute_in;
static PyObject *const_str_plain_exitstatus;
extern PyObject *const_str_plain_fileexists;
extern PyObject *const_str_plain_get_output;
static PyObject *const_str_plain_initialize;
static PyObject *const_str_plain_old_config;
extern PyObject *const_str_plain_startswith;
static PyObject *const_str_plain_sys_stdout;
extern PyObject *const_str_plain_temp_files;
extern PyObject *const_str_plain_WEXITSTATUS;
static PyObject *const_str_plain_WIFSIGNALED;
extern PyObject *const_str_plain_get_version;
extern PyObject *const_str_plain_initialized;
extern PyObject *const_str_plain_try_compile;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_CompileError;
static PyObject *const_str_plain__wrap_method;
static PyObject *const_str_plain_check_header;
extern PyObject *const_str_plain_check_inline;
extern PyObject *const_str_plain_distribution;
extern PyObject *const_str_plain_exec_command;
extern PyObject *const_str_plain_include_dirs;
extern PyObject *const_str_plain_library_dirs;
extern PyObject *const_str_plain_user_options;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_compiler_type;
extern PyObject *const_str_plain_customize_cmd;
extern PyObject *const_str_plain_get_exception;
extern PyObject *const_str_plain_new_fcompiler;
static PyObject *const_str_plain_save_compiler;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain__check_compiler;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_check_type_size;
extern PyObject *const_tuple_str_plain_log_tuple;
static PyObject *const_str_plain_check_funcs_once;
static PyObject *const_str_plain_check_macro_true;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_generate_manifest;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_str_plain_DistutilsExecError;
extern PyObject *const_str_plain_initialize_options;
extern PyObject *const_str_plain_show_customization;
extern PyObject *const_tuple_str_plain_config_tuple;
extern PyObject *const_str_plain_check_compiler_gcc4;
static PyObject *const_tuple_str_plain_LANG_EXT_tuple;
extern PyObject *const_tuple_none_none_none_none_tuple;
extern PyObject *const_tuple_str_plain_copy_file_tuple;
extern PyObject *const_str_plain_DistutilsPlatformError;
static PyObject *const_tuple_int_pos_255_str_empty_tuple;
static PyObject *const_tuple_none_none_str_plain_c_tuple;
static PyObject *const_tuple_str_plain_CompileError_tuple;
extern PyObject *const_tuple_str_plain_exec_command_tuple;
extern PyObject *const_tuple_str_plain_get_exception_tuple;
extern PyObject *const_dict_3be937dfcb6326ab62ea1b692cc71009;
extern PyObject *const_list_str_plain_f77_str_plain_f90_list;
static PyObject *const_tuple_str_plain_generate_manifest_tuple;
static PyObject *const_tuple_str_plain_DistutilsExecError_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
static PyObject *const_str_digest_0030044e0b62758f6e90270468c31d05;
extern PyObject *const_str_digest_042fb074b113ef83cbeec96065895a9e;
static PyObject *const_str_digest_043788cad49d8c5c3c0dc9182809fb99;
extern PyObject *const_str_digest_080140a463ef48d7305b3a11330fc327;
static PyObject *const_str_digest_0ca05b236e68712acc4f787b084a4ac0;
extern PyObject *const_str_digest_121afe86c7350e5208f86c496e7b2dbd;
static PyObject *const_str_digest_2211aabd8b83de8c0fabab760dc5ff68;
static PyObject *const_str_digest_2411886f2c32bf0133e354f9622cfd93;
extern PyObject *const_str_digest_281372bea41c1cc2820284b52b815f98;
static PyObject *const_str_digest_2f70a2cccbb36ff72dce232efbec2fdc;
static PyObject *const_str_digest_38d2196e635c6c2a64b22d6902a408b2;
extern PyObject *const_str_digest_3cf1150dc41ac01dcb8cfcc35c3f433c;
extern PyObject *const_str_digest_45ccd415cc3ac96c00d7d81674d1238e;
static PyObject *const_str_digest_46edd8d0f38655c5fabf59f8b44b639d;
static PyObject *const_str_digest_4dc6b94688046e61bd54f6eb40dc8886;
static PyObject *const_str_digest_52234c758d7b8547386ac2ef3d77010b;
extern PyObject *const_str_digest_53d25559855030e84ebd6465736fcba3;
static PyObject *const_str_digest_54a47323fba645635f9659b766ea3eb5;
static PyObject *const_str_digest_5b1270420e45444292270e6a05be0eb5;
extern PyObject *const_str_digest_6786c771ff638c2613791fc0ba5bb563;
static PyObject *const_str_digest_692c5b3d84c1f6ac27edff56e326562c;
static PyObject *const_str_digest_6f185b10155bee162894765e7cf96e04;
static PyObject *const_str_digest_7576d5478260a8de82d8b258be64cd22;
static PyObject *const_str_digest_834785fa6a22a7fbb3aecd197bc423d7;
extern PyObject *const_str_digest_8acec9b707fb08fa95386d8360c9e9fc;
extern PyObject *const_str_digest_8daee860afb12937dc1f5ec4646035c2;
extern PyObject *const_str_digest_90027b1d66347d1decac561bb6f2be2c;
extern PyObject *const_str_digest_93a398871e8ab5b0c4f83fc62fc97baf;
extern PyObject *const_str_digest_9ee0065fb030b4d6c1f397a7967d740e;
static PyObject *const_str_digest_a5b652602b36826445fe57701987d768;
static PyObject *const_str_digest_a994c72ddb608e8d5536b37bc97031e9;
static PyObject *const_str_digest_addc1d778cdad6ab52ecf22f9b2512bd;
extern PyObject *const_str_digest_b0db852c702255d781b62d43833a84e9;
extern PyObject *const_str_digest_c0ab1120b239d942b77d52b1ebe617bb;
static PyObject *const_str_digest_c26ba559a5f34d46a49fafed87946fb7;
static PyObject *const_str_digest_c3594c46c750b3181ad524eb14cb2c3e;
static PyObject *const_str_digest_cebdc7c6ea27364d177a5ac17a130d49;
static PyObject *const_str_digest_d005cee03db613815511f7f465e5cd6e;
static PyObject *const_str_digest_d397db7e888d1dbb6d20a8807641177f;
static PyObject *const_str_digest_d6e275fd9160fdb05e58f34ebc8e057f;
extern PyObject *const_str_digest_db5bfec63bd14f8434476719cf705ad5;
static PyObject *const_str_digest_dbe0013c246c0a586f5a5a80efe73ba0;
static PyObject *const_str_digest_e53bc71011dd8d6c0aaa5b52a991dad2;
extern PyObject *const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc;
extern PyObject *const_str_digest_e9b81eae6371a8ff3e5c3f6efa0932a3;
static PyObject *const_str_digest_ed259a80645f3a7bede8cf1ba7bb6083;
static PyObject *const_str_digest_f10c2eb3648b8df67e4abac7b4880158;
static PyObject *const_str_digest_f2ee5aca71a929254acb780763f41937;
static PyObject *const_tuple_none_none_none_none_str_plain_c_tuple;
static PyObject *const_tuple_0baba04c51c9922998380cb0a215df2c_tuple;
static PyObject *const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple;
static PyObject *const_tuple_2b6116fa1a4999529f47bb98b9e7f287_tuple;
static PyObject *const_tuple_2c98f3e70cb7194d33200729924f1d66_tuple;
static PyObject *const_tuple_362f63f0425aa9dce3700ec9db1a3c17_tuple;
static PyObject *const_tuple_5e102dad49edef1aa91cb62466d1c8ae_tuple;
static PyObject *const_tuple_63475bab01de8348aca09b861c088d7e_tuple;
static PyObject *const_tuple_6c6d63be9f9e7a231ad08de0f63b0cb1_tuple;
static PyObject *const_tuple_81f97e49c8bd2f6905c3cf838e452ea8_tuple;
static PyObject *const_tuple_8a1577c3cfa22236cc614566b752eab9_tuple;
extern PyObject *const_tuple_9608cb38ad8cfabaffebc40aea72718c_tuple;
static PyObject *const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_b71e16f090862869ccabc6f538511091_tuple;
static PyObject *const_tuple_bc839bbf667b0707c220b5ffbb1ae455_tuple;
static PyObject *const_tuple_de619f04dbae1069e259aa60bd52fc26_tuple;
static PyObject *const_tuple_dfa3b2ac5be4973f7027ae7fd07e167b_tuple;
static PyObject *const_tuple_e2f4ab061cac441a3ca0087485bc6eff_tuple;
static PyObject *const_tuple_e74bf7ea4fc7dc6f5228fceaf5d183ac_tuple;
static PyObject *const_tuple_ed133c7034c03595b46e352aa93bf2ca_tuple;
static PyObject *const_tuple_none_none_none_none_false_false_none_tuple;
static PyObject *const_tuple_none_none_none_none_str_plain_c_none_tuple;
extern PyObject *const_list_tuple_9608cb38ad8cfabaffebc40aea72718c_tuple_list;
static PyObject *const_tuple_str_plain_CompileError_str_plain_LinkError_tuple;
static PyObject *const_tuple_str_plain_FCompiler_str_plain_new_fcompiler_tuple;
static PyObject *const_tuple_str_plain_check_inline_str_plain_check_compiler_gcc4_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_mth_str_plain_lang_str_plain_args_tuple;

static void _initModuleConstants(void)
{
    const_str_plain__link = UNSTREAM_STRING( &constant_bin[ 101233 ], 5, 1 );
    const_str_plain_SIGINT = UNSTREAM_STRING( &constant_bin[ 905268 ], 6, 1 );
    const_str_plain__clean = UNSTREAM_STRING( &constant_bin[ 60309 ], 6, 1 );
    const_str_plain_signal = UNSTREAM_STRING( &constant_bin[ 92936 ], 6, 1 );
    const_str_plain_grabber = UNSTREAM_STRING( &constant_bin[ 92728 ], 7, 1 );
    const_str_plain_restore = UNSTREAM_STRING( &constant_bin[ 123739 ], 7, 1 );
    const_str_plain_try_run = UNSTREAM_STRING( &constant_bin[ 905274 ], 7, 1 );
    const_str_plain_LANG_EXT = UNSTREAM_STRING( &constant_bin[ 91621 ], 8, 1 );
    const_str_plain_WTERMSIG = UNSTREAM_STRING( &constant_bin[ 905281 ], 8, 1 );
    const_str_plain_exitcode = UNSTREAM_STRING( &constant_bin[ 93029 ], 8, 1 );
    const_str_plain_try_link = UNSTREAM_STRING( &constant_bin[ 905289 ], 8, 1 );
    const_str_plain_type_name = UNSTREAM_STRING( &constant_bin[ 92099 ], 9, 1 );
    const_str_plain_GrabStdout = UNSTREAM_STRING( &constant_bin[ 92686 ], 10, 1 );
    const_str_plain_check_decl = UNSTREAM_STRING( &constant_bin[ 905297 ], 10, 1 );
    const_str_plain_check_func = UNSTREAM_STRING( &constant_bin[ 905307 ], 10, 1 );
    const_str_plain_check_type = UNSTREAM_STRING( &constant_bin[ 905317 ], 10, 1 );
    const_str_plain_exitstatus = UNSTREAM_STRING( &constant_bin[ 92883 ], 10, 1 );
    const_str_plain_initialize = UNSTREAM_STRING( &constant_bin[ 5220 ], 10, 1 );
    const_str_plain_old_config = UNSTREAM_STRING( &constant_bin[ 91651 ], 10, 1 );
    const_str_plain_sys_stdout = UNSTREAM_STRING( &constant_bin[ 905327 ], 10, 1 );
    const_str_plain_WIFSIGNALED = UNSTREAM_STRING( &constant_bin[ 905337 ], 11, 1 );
    const_str_plain__wrap_method = UNSTREAM_STRING( &constant_bin[ 905348 ], 12, 1 );
    const_str_plain_check_header = UNSTREAM_STRING( &constant_bin[ 905360 ], 12, 1 );
    const_str_plain_save_compiler = UNSTREAM_STRING( &constant_bin[ 91994 ], 13, 1 );
    const_str_plain_check_type_size = UNSTREAM_STRING( &constant_bin[ 905372 ], 15, 1 );
    const_str_plain_check_funcs_once = UNSTREAM_STRING( &constant_bin[ 905387 ], 16, 1 );
    const_str_plain_check_macro_true = UNSTREAM_STRING( &constant_bin[ 905403 ], 16, 1 );
    const_tuple_str_plain_LANG_EXT_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LANG_EXT_tuple, 0, const_str_plain_LANG_EXT ); Py_INCREF( const_str_plain_LANG_EXT );
    const_tuple_int_pos_255_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_255_str_empty_tuple, 0, const_int_pos_255 ); Py_INCREF( const_int_pos_255 );
    PyTuple_SET_ITEM( const_tuple_int_pos_255_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_tuple_none_none_str_plain_c_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_none_str_plain_c_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_str_plain_c_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_str_plain_c_tuple, 2, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    const_tuple_str_plain_CompileError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CompileError_tuple, 0, const_str_plain_CompileError ); Py_INCREF( const_str_plain_CompileError );
    const_tuple_str_plain_generate_manifest_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_generate_manifest_tuple, 0, const_str_plain_generate_manifest ); Py_INCREF( const_str_plain_generate_manifest );
    const_tuple_str_plain_DistutilsExecError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DistutilsExecError_tuple, 0, const_str_plain_DistutilsExecError ); Py_INCREF( const_str_plain_DistutilsExecError );
    const_str_digest_0030044e0b62758f6e90270468c31d05 = UNSTREAM_STRING( &constant_bin[ 905419 ], 89, 0 );
    const_str_digest_043788cad49d8c5c3c0dc9182809fb99 = UNSTREAM_STRING( &constant_bin[ 905508 ], 195, 0 );
    const_str_digest_0ca05b236e68712acc4f787b084a4ac0 = UNSTREAM_STRING( &constant_bin[ 905703 ], 9, 0 );
    const_str_digest_2211aabd8b83de8c0fabab760dc5ff68 = UNSTREAM_STRING( &constant_bin[ 905712 ], 251, 0 );
    const_str_digest_2411886f2c32bf0133e354f9622cfd93 = UNSTREAM_STRING( &constant_bin[ 905963 ], 24, 0 );
    const_str_digest_2f70a2cccbb36ff72dce232efbec2fdc = UNSTREAM_STRING( &constant_bin[ 905987 ], 5, 0 );
    const_str_digest_38d2196e635c6c2a64b22d6902a408b2 = UNSTREAM_STRING( &constant_bin[ 905992 ], 15, 0 );
    const_str_digest_46edd8d0f38655c5fabf59f8b44b639d = UNSTREAM_STRING( &constant_bin[ 906007 ], 815, 0 );
    const_str_digest_4dc6b94688046e61bd54f6eb40dc8886 = UNSTREAM_STRING( &constant_bin[ 906822 ], 66, 0 );
    const_str_digest_52234c758d7b8547386ac2ef3d77010b = UNSTREAM_STRING( &constant_bin[ 906888 ], 85, 0 );
    const_str_digest_54a47323fba645635f9659b766ea3eb5 = UNSTREAM_STRING( &constant_bin[ 906973 ], 42, 0 );
    const_str_digest_5b1270420e45444292270e6a05be0eb5 = UNSTREAM_STRING( &constant_bin[ 907015 ], 27, 0 );
    const_str_digest_692c5b3d84c1f6ac27edff56e326562c = UNSTREAM_STRING( &constant_bin[ 907042 ], 174, 0 );
    const_str_digest_6f185b10155bee162894765e7cf96e04 = UNSTREAM_STRING( &constant_bin[ 907216 ], 20, 0 );
    const_str_digest_7576d5478260a8de82d8b258be64cd22 = UNSTREAM_STRING( &constant_bin[ 907236 ], 248, 0 );
    const_str_digest_834785fa6a22a7fbb3aecd197bc423d7 = UNSTREAM_STRING( &constant_bin[ 907484 ], 91, 0 );
    const_str_digest_a5b652602b36826445fe57701987d768 = UNSTREAM_STRING( &constant_bin[ 907575 ], 68, 0 );
    const_str_digest_a994c72ddb608e8d5536b37bc97031e9 = UNSTREAM_STRING( &constant_bin[ 907643 ], 188, 0 );
    const_str_digest_addc1d778cdad6ab52ecf22f9b2512bd = UNSTREAM_STRING( &constant_bin[ 907831 ], 8, 0 );
    const_str_digest_c26ba559a5f34d46a49fafed87946fb7 = UNSTREAM_STRING( &constant_bin[ 897156 ], 11, 0 );
    const_str_digest_c3594c46c750b3181ad524eb14cb2c3e = UNSTREAM_STRING( &constant_bin[ 907839 ], 449, 0 );
    const_str_digest_cebdc7c6ea27364d177a5ac17a130d49 = UNSTREAM_STRING( &constant_bin[ 908288 ], 50, 0 );
    const_str_digest_d005cee03db613815511f7f465e5cd6e = UNSTREAM_STRING( &constant_bin[ 908338 ], 87, 0 );
    const_str_digest_d397db7e888d1dbb6d20a8807641177f = UNSTREAM_STRING( &constant_bin[ 908425 ], 32, 0 );
    const_str_digest_d6e275fd9160fdb05e58f34ebc8e057f = UNSTREAM_STRING( &constant_bin[ 908212 ], 76, 0 );
    const_str_digest_dbe0013c246c0a586f5a5a80efe73ba0 = UNSTREAM_STRING( &constant_bin[ 665824 ], 8, 0 );
    const_str_digest_e53bc71011dd8d6c0aaa5b52a991dad2 = UNSTREAM_STRING( &constant_bin[ 908457 ], 17, 0 );
    const_str_digest_ed259a80645f3a7bede8cf1ba7bb6083 = UNSTREAM_STRING( &constant_bin[ 908474 ], 14, 0 );
    const_str_digest_f10c2eb3648b8df67e4abac7b4880158 = UNSTREAM_STRING( &constant_bin[ 908488 ], 195, 0 );
    const_str_digest_f2ee5aca71a929254acb780763f41937 = UNSTREAM_STRING( &constant_bin[ 897224 ], 6, 0 );
    const_tuple_none_none_none_none_str_plain_c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_str_plain_c_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_str_plain_c_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_str_plain_c_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_str_plain_c_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_str_plain_c_tuple, 4, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    const_tuple_0baba04c51c9922998380cb0a215df2c_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_0baba04c51c9922998380cb0a215df2c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0baba04c51c9922998380cb0a215df2c_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_0baba04c51c9922998380cb0a215df2c_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_0baba04c51c9922998380cb0a215df2c_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_0baba04c51c9922998380cb0a215df2c_tuple, 4, const_str_plain_libraries ); Py_INCREF( const_str_plain_libraries );
    PyTuple_SET_ITEM( const_tuple_0baba04c51c9922998380cb0a215df2c_tuple, 5, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_0baba04c51c9922998380cb0a215df2c_tuple, 6, const_str_plain_decl ); Py_INCREF( const_str_plain_decl );
    PyTuple_SET_ITEM( const_tuple_0baba04c51c9922998380cb0a215df2c_tuple, 7, const_str_plain_call ); Py_INCREF( const_str_plain_call );
    PyTuple_SET_ITEM( const_tuple_0baba04c51c9922998380cb0a215df2c_tuple, 8, const_str_plain_call_args ); Py_INCREF( const_str_plain_call_args );
    const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 1, const_str_plain_funcs ); Py_INCREF( const_str_plain_funcs );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 4, const_str_plain_libraries ); Py_INCREF( const_str_plain_libraries );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 5, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 6, const_str_plain_decl ); Py_INCREF( const_str_plain_decl );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 7, const_str_plain_call ); Py_INCREF( const_str_plain_call );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 8, const_str_plain_call_args ); Py_INCREF( const_str_plain_call_args );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 9, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 10, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 11, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 12, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 13, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    const_tuple_2b6116fa1a4999529f47bb98b9e7f287_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_2b6116fa1a4999529f47bb98b9e7f287_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2b6116fa1a4999529f47bb98b9e7f287_tuple, 1, const_str_plain_mth ); Py_INCREF( const_str_plain_mth );
    PyTuple_SET_ITEM( const_tuple_2b6116fa1a4999529f47bb98b9e7f287_tuple, 2, const_str_plain_lang ); Py_INCREF( const_str_plain_lang );
    PyTuple_SET_ITEM( const_tuple_2b6116fa1a4999529f47bb98b9e7f287_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_2b6116fa1a4999529f47bb98b9e7f287_tuple, 4, const_str_plain_CompileError ); Py_INCREF( const_str_plain_CompileError );
    PyTuple_SET_ITEM( const_tuple_2b6116fa1a4999529f47bb98b9e7f287_tuple, 5, const_str_plain_DistutilsExecError ); Py_INCREF( const_str_plain_DistutilsExecError );
    PyTuple_SET_ITEM( const_tuple_2b6116fa1a4999529f47bb98b9e7f287_tuple, 6, const_str_plain_save_compiler ); Py_INCREF( const_str_plain_save_compiler );
    PyTuple_SET_ITEM( const_tuple_2b6116fa1a4999529f47bb98b9e7f287_tuple, 7, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    PyTuple_SET_ITEM( const_tuple_2b6116fa1a4999529f47bb98b9e7f287_tuple, 8, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_tuple_2c98f3e70cb7194d33200729924f1d66_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_2c98f3e70cb7194d33200729924f1d66_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2c98f3e70cb7194d33200729924f1d66_tuple, 1, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_2c98f3e70cb7194d33200729924f1d66_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_2c98f3e70cb7194d33200729924f1d66_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_2c98f3e70cb7194d33200729924f1d66_tuple, 4, const_str_plain_libraries ); Py_INCREF( const_str_plain_libraries );
    PyTuple_SET_ITEM( const_tuple_2c98f3e70cb7194d33200729924f1d66_tuple, 5, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_2c98f3e70cb7194d33200729924f1d66_tuple, 6, const_str_plain_lang ); Py_INCREF( const_str_plain_lang );
    const_tuple_362f63f0425aa9dce3700ec9db1a3c17_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_362f63f0425aa9dce3700ec9db1a3c17_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_362f63f0425aa9dce3700ec9db1a3c17_tuple, 1, const_str_plain_type_name ); Py_INCREF( const_str_plain_type_name );
    PyTuple_SET_ITEM( const_tuple_362f63f0425aa9dce3700ec9db1a3c17_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_362f63f0425aa9dce3700ec9db1a3c17_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_362f63f0425aa9dce3700ec9db1a3c17_tuple, 4, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_362f63f0425aa9dce3700ec9db1a3c17_tuple, 5, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_362f63f0425aa9dce3700ec9db1a3c17_tuple, 6, const_str_plain_st ); Py_INCREF( const_str_plain_st );
    const_tuple_5e102dad49edef1aa91cb62466d1c8ae_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_5e102dad49edef1aa91cb62466d1c8ae_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5e102dad49edef1aa91cb62466d1c8ae_tuple, 1, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_5e102dad49edef1aa91cb62466d1c8ae_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_5e102dad49edef1aa91cb62466d1c8ae_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_5e102dad49edef1aa91cb62466d1c8ae_tuple, 4, const_str_plain_libraries ); Py_INCREF( const_str_plain_libraries );
    PyTuple_SET_ITEM( const_tuple_5e102dad49edef1aa91cb62466d1c8ae_tuple, 5, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_5e102dad49edef1aa91cb62466d1c8ae_tuple, 6, const_str_plain_lang ); Py_INCREF( const_str_plain_lang );
    PyTuple_SET_ITEM( const_tuple_5e102dad49edef1aa91cb62466d1c8ae_tuple, 7, const_str_plain_use_tee ); Py_INCREF( const_str_plain_use_tee );
    const_tuple_63475bab01de8348aca09b861c088d7e_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_63475bab01de8348aca09b861c088d7e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_63475bab01de8348aca09b861c088d7e_tuple, 1, const_str_plain_type_name ); Py_INCREF( const_str_plain_type_name );
    PyTuple_SET_ITEM( const_tuple_63475bab01de8348aca09b861c088d7e_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_63475bab01de8348aca09b861c088d7e_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_63475bab01de8348aca09b861c088d7e_tuple, 4, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_63475bab01de8348aca09b861c088d7e_tuple, 5, const_str_plain_expected ); Py_INCREF( const_str_plain_expected );
    PyTuple_SET_ITEM( const_tuple_63475bab01de8348aca09b861c088d7e_tuple, 6, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_63475bab01de8348aca09b861c088d7e_tuple, 7, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_63475bab01de8348aca09b861c088d7e_tuple, 8, const_str_plain_low ); Py_INCREF( const_str_plain_low );
    PyTuple_SET_ITEM( const_tuple_63475bab01de8348aca09b861c088d7e_tuple, 9, const_str_plain_mid ); Py_INCREF( const_str_plain_mid );
    PyTuple_SET_ITEM( const_tuple_63475bab01de8348aca09b861c088d7e_tuple, 10, const_str_plain_high ); Py_INCREF( const_str_plain_high );
    const_tuple_6c6d63be9f9e7a231ad08de0f63b0cb1_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_6c6d63be9f9e7a231ad08de0f63b0cb1_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6c6d63be9f9e7a231ad08de0f63b0cb1_tuple, 1, const_str_plain_symbol ); Py_INCREF( const_str_plain_symbol );
    PyTuple_SET_ITEM( const_tuple_6c6d63be9f9e7a231ad08de0f63b0cb1_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_6c6d63be9f9e7a231ad08de0f63b0cb1_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_6c6d63be9f9e7a231ad08de0f63b0cb1_tuple, 4, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    const_tuple_81f97e49c8bd2f6905c3cf838e452ea8_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_81f97e49c8bd2f6905c3cf838e452ea8_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_81f97e49c8bd2f6905c3cf838e452ea8_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_81f97e49c8bd2f6905c3cf838e452ea8_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_81f97e49c8bd2f6905c3cf838e452ea8_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_81f97e49c8bd2f6905c3cf838e452ea8_tuple, 4, const_str_plain_libraries ); Py_INCREF( const_str_plain_libraries );
    PyTuple_SET_ITEM( const_tuple_81f97e49c8bd2f6905c3cf838e452ea8_tuple, 5, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_81f97e49c8bd2f6905c3cf838e452ea8_tuple, 6, const_str_plain_decl ); Py_INCREF( const_str_plain_decl );
    PyTuple_SET_ITEM( const_tuple_81f97e49c8bd2f6905c3cf838e452ea8_tuple, 7, const_str_plain_call ); Py_INCREF( const_str_plain_call );
    PyTuple_SET_ITEM( const_tuple_81f97e49c8bd2f6905c3cf838e452ea8_tuple, 8, const_str_plain_call_args ); Py_INCREF( const_str_plain_call_args );
    PyTuple_SET_ITEM( const_tuple_81f97e49c8bd2f6905c3cf838e452ea8_tuple, 9, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    const_tuple_8a1577c3cfa22236cc614566b752eab9_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_8a1577c3cfa22236cc614566b752eab9_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8a1577c3cfa22236cc614566b752eab9_tuple, 1, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_8a1577c3cfa22236cc614566b752eab9_tuple, 2, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_8a1577c3cfa22236cc614566b752eab9_tuple, 3, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_8a1577c3cfa22236cc614566b752eab9_tuple, 4, const_str_plain_lang ); Py_INCREF( const_str_plain_lang );
    const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 1, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 4, const_str_plain_libraries ); Py_INCREF( const_str_plain_libraries );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 5, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 6, const_str_plain_lang ); Py_INCREF( const_str_plain_lang );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 7, const_str_plain_use_tee ); Py_INCREF( const_str_plain_use_tee );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 8, const_str_plain_CompileError ); Py_INCREF( const_str_plain_CompileError );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 9, const_str_plain_LinkError ); Py_INCREF( const_str_plain_LinkError );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 10, const_str_plain_exitcode ); Py_INCREF( const_str_plain_exitcode );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 11, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 12, const_str_plain_grabber ); Py_INCREF( const_str_plain_grabber );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 13, const_str_plain_src ); Py_INCREF( const_str_plain_src );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 14, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 15, const_str_plain_exe ); Py_INCREF( const_str_plain_exe );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 16, const_str_plain_exitstatus ); Py_INCREF( const_str_plain_exitstatus );
    PyTuple_SET_ITEM( const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 17, const_str_plain_sig ); Py_INCREF( const_str_plain_sig );
    const_tuple_b71e16f090862869ccabc6f538511091_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 1, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 4, const_str_plain_libraries ); Py_INCREF( const_str_plain_libraries );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 5, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 6, const_str_plain_lang ); Py_INCREF( const_str_plain_lang );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 7, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 8, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 9, const_str_plain_o ); Py_INCREF( const_str_plain_o );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 10, const_str_plain_libname ); Py_INCREF( const_str_plain_libname );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 11, const_str_plain_fileexists ); Py_INCREF( const_str_plain_fileexists );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 12, const_str_plain_libdir ); Py_INCREF( const_str_plain_libdir );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 13, const_str_plain_libfile ); Py_INCREF( const_str_plain_libfile );
    PyTuple_SET_ITEM( const_tuple_b71e16f090862869ccabc6f538511091_tuple, 14, const_str_plain_libfile2 ); Py_INCREF( const_str_plain_libfile2 );
    const_tuple_bc839bbf667b0707c220b5ffbb1ae455_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_bc839bbf667b0707c220b5ffbb1ae455_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bc839bbf667b0707c220b5ffbb1ae455_tuple, 1, const_str_plain_type_name ); Py_INCREF( const_str_plain_type_name );
    PyTuple_SET_ITEM( const_tuple_bc839bbf667b0707c220b5ffbb1ae455_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_bc839bbf667b0707c220b5ffbb1ae455_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_bc839bbf667b0707c220b5ffbb1ae455_tuple, 4, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    const_tuple_de619f04dbae1069e259aa60bd52fc26_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_de619f04dbae1069e259aa60bd52fc26_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_de619f04dbae1069e259aa60bd52fc26_tuple, 1, const_str_plain_type_name ); Py_INCREF( const_str_plain_type_name );
    PyTuple_SET_ITEM( const_tuple_de619f04dbae1069e259aa60bd52fc26_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_de619f04dbae1069e259aa60bd52fc26_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_de619f04dbae1069e259aa60bd52fc26_tuple, 4, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_de619f04dbae1069e259aa60bd52fc26_tuple, 5, const_str_plain_expected ); Py_INCREF( const_str_plain_expected );
    const_tuple_dfa3b2ac5be4973f7027ae7fd07e167b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_dfa3b2ac5be4973f7027ae7fd07e167b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_dfa3b2ac5be4973f7027ae7fd07e167b_tuple, 1, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_dfa3b2ac5be4973f7027ae7fd07e167b_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_dfa3b2ac5be4973f7027ae7fd07e167b_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_dfa3b2ac5be4973f7027ae7fd07e167b_tuple, 4, const_str_plain_lang ); Py_INCREF( const_str_plain_lang );
    const_tuple_e2f4ab061cac441a3ca0087485bc6eff_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e2f4ab061cac441a3ca0087485bc6eff_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e2f4ab061cac441a3ca0087485bc6eff_tuple, 1, const_str_plain_symbol ); Py_INCREF( const_str_plain_symbol );
    PyTuple_SET_ITEM( const_tuple_e2f4ab061cac441a3ca0087485bc6eff_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_e2f4ab061cac441a3ca0087485bc6eff_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    const_tuple_e74bf7ea4fc7dc6f5228fceaf5d183ac_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_e74bf7ea4fc7dc6f5228fceaf5d183ac_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e74bf7ea4fc7dc6f5228fceaf5d183ac_tuple, 1, const_str_plain_funcs ); Py_INCREF( const_str_plain_funcs );
    PyTuple_SET_ITEM( const_tuple_e74bf7ea4fc7dc6f5228fceaf5d183ac_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_e74bf7ea4fc7dc6f5228fceaf5d183ac_tuple, 3, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_e74bf7ea4fc7dc6f5228fceaf5d183ac_tuple, 4, const_str_plain_libraries ); Py_INCREF( const_str_plain_libraries );
    PyTuple_SET_ITEM( const_tuple_e74bf7ea4fc7dc6f5228fceaf5d183ac_tuple, 5, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_e74bf7ea4fc7dc6f5228fceaf5d183ac_tuple, 6, const_str_plain_decl ); Py_INCREF( const_str_plain_decl );
    PyTuple_SET_ITEM( const_tuple_e74bf7ea4fc7dc6f5228fceaf5d183ac_tuple, 7, const_str_plain_call ); Py_INCREF( const_str_plain_call );
    PyTuple_SET_ITEM( const_tuple_e74bf7ea4fc7dc6f5228fceaf5d183ac_tuple, 8, const_str_plain_call_args ); Py_INCREF( const_str_plain_call_args );
    const_tuple_ed133c7034c03595b46e352aa93bf2ca_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_ed133c7034c03595b46e352aa93bf2ca_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ed133c7034c03595b46e352aa93bf2ca_tuple, 1, const_str_plain_FCompiler ); Py_INCREF( const_str_plain_FCompiler );
    PyTuple_SET_ITEM( const_tuple_ed133c7034c03595b46e352aa93bf2ca_tuple, 2, const_str_plain_new_fcompiler ); Py_INCREF( const_str_plain_new_fcompiler );
    PyTuple_SET_ITEM( const_tuple_ed133c7034c03595b46e352aa93bf2ca_tuple, 3, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_ed133c7034c03595b46e352aa93bf2ca_tuple, 4, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_tuple_none_none_none_none_false_false_none_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_false_false_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_false_false_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_false_false_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_false_false_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_false_false_none_tuple, 4, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_false_false_none_tuple, 5, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_false_false_none_tuple, 6, Py_None ); Py_INCREF( Py_None );
    const_tuple_none_none_none_none_str_plain_c_none_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_str_plain_c_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_str_plain_c_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_str_plain_c_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_str_plain_c_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_str_plain_c_none_tuple, 4, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_str_plain_c_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_CompileError_str_plain_LinkError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CompileError_str_plain_LinkError_tuple, 0, const_str_plain_CompileError ); Py_INCREF( const_str_plain_CompileError );
    PyTuple_SET_ITEM( const_tuple_str_plain_CompileError_str_plain_LinkError_tuple, 1, const_str_plain_LinkError ); Py_INCREF( const_str_plain_LinkError );
    const_tuple_str_plain_FCompiler_str_plain_new_fcompiler_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FCompiler_str_plain_new_fcompiler_tuple, 0, const_str_plain_FCompiler ); Py_INCREF( const_str_plain_FCompiler );
    PyTuple_SET_ITEM( const_tuple_str_plain_FCompiler_str_plain_new_fcompiler_tuple, 1, const_str_plain_new_fcompiler ); Py_INCREF( const_str_plain_new_fcompiler );
    const_tuple_str_plain_check_inline_str_plain_check_compiler_gcc4_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_check_inline_str_plain_check_compiler_gcc4_tuple, 0, const_str_plain_check_inline ); Py_INCREF( const_str_plain_check_inline );
    PyTuple_SET_ITEM( const_tuple_str_plain_check_inline_str_plain_check_compiler_gcc4_tuple, 1, const_str_plain_check_compiler_gcc4 ); Py_INCREF( const_str_plain_check_compiler_gcc4 );
    const_tuple_str_plain_self_str_plain_mth_str_plain_lang_str_plain_args_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mth_str_plain_lang_str_plain_args_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mth_str_plain_lang_str_plain_args_tuple, 1, const_str_plain_mth ); Py_INCREF( const_str_plain_mth );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mth_str_plain_lang_str_plain_args_tuple, 2, const_str_plain_lang ); Py_INCREF( const_str_plain_lang );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mth_str_plain_lang_str_plain_args_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
}

// The module code objects.
static PyCodeObject *codeobj_30b07f357587c6fbe5ed44a2da839422;
static PyCodeObject *codeobj_9daad07b24f51dfbe4a8a912f0491b04;
static PyCodeObject *codeobj_1e7839b76b944111d2c8e6b6d177f892;
static PyCodeObject *codeobj_b9afe9c8a258390d0dd236df1e0d0d10;
static PyCodeObject *codeobj_e46a1983cdc1d5bf2b26c36c78810fe5;
static PyCodeObject *codeobj_502964b362258f17d3dfca59e076928c;
static PyCodeObject *codeobj_1c48d0cfc2e72cf14689ead05898e758;
static PyCodeObject *codeobj_76bdb858659ddd6f742854af4889292b;
static PyCodeObject *codeobj_386c9ef9ce205bc4a9fb1d0bf4a3a1f6;
static PyCodeObject *codeobj_c33b7ed3b31ee99e2194fb0298314e9d;
static PyCodeObject *codeobj_c24de2c642ef7ad837946be2315a4cf0;
static PyCodeObject *codeobj_ad357c8e3df453b153273e86545070dd;
static PyCodeObject *codeobj_937d2fd4f7c8d909356163e26e2b2013;
static PyCodeObject *codeobj_1ab95c5dd1e0fe091d3e38ee6c48d2b9;
static PyCodeObject *codeobj_a1b34c72db13201c73b0d2dd9ae5590e;
static PyCodeObject *codeobj_4b98bd6755249ff658de65a12b4a96a7;
static PyCodeObject *codeobj_1339aa5aa00fefad08be1c9baae53573;
static PyCodeObject *codeobj_44b34996e74c1e69fdc48b5e713301d5;
static PyCodeObject *codeobj_4f376e2adbfaea206f03e62f9ad704e0;
static PyCodeObject *codeobj_2549077c186db7f9ce19654169b6882c;
static PyCodeObject *codeobj_6140cb8103300cdfbe42817f799c869b;
static PyCodeObject *codeobj_e6cc5a332eb2f057f112608e29fdcb03;
static PyCodeObject *codeobj_2186353e2511b638d382a89167eb2f57;
static PyCodeObject *codeobj_8ceef974885a0164a822ebd4c79c433a;
static PyCodeObject *codeobj_8c6104e4c21fdf08bdfb951ab2c9cf1f;
static PyCodeObject *codeobj_df881845f7eb90aa70022bbceffa4200;
static PyCodeObject *codeobj_1919c44197d69186667b99545b3ba59b;
static PyCodeObject *codeobj_d9c81f1dfef3abd51f79c3d30908f6e6;
static PyCodeObject *codeobj_32777af88f50fda9071dca5b32de29a7;
static PyCodeObject *codeobj_ad2e8f601bfcd7eee344cb807ead423c;
static PyCodeObject *codeobj_767efca841c9e4327a9caf5d91e62a32;
static PyCodeObject *codeobj_7d4b079973c3d745ffb3ada961d936ba;
static PyCodeObject *codeobj_5ce5bd69ff89718d47131b8965dbdaf4;

static void _initModuleCodeObjects(void)
{
    codeobj_30b07f357587c6fbe5ed44a2da839422 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_GrabStdout, 447, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9daad07b24f51dfbe4a8a912f0491b04 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain___init__, 449, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1e7839b76b944111d2c8e6b6d177f892 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain__check_compiler, 45, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b9afe9c8a258390d0dd236df1e0d0d10 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain__check_compiler, 45, const_tuple_ed133c7034c03595b46e352aa93bf2ca_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e46a1983cdc1d5bf2b26c36c78810fe5 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain__compile, 98, const_tuple_dfa3b2ac5be4973f7027ae7fd07e167b_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_502964b362258f17d3dfca59e076928c = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain__link, 102, const_tuple_2c98f3e70cb7194d33200729924f1d66_tuple, 7, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1c48d0cfc2e72cf14689ead05898e758 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain__link, 102, const_tuple_b71e16f090862869ccabc6f538511091_tuple, 7, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_76bdb858659ddd6f742854af4889292b = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain__wrap_method, 83, const_tuple_str_plain_self_str_plain_mth_str_plain_lang_str_plain_args_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_386c9ef9ce205bc4a9fb1d0bf4a3a1f6 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain__wrap_method, 83, const_tuple_2b6116fa1a4999529f47bb98b9e7f287_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c33b7ed3b31ee99e2194fb0298314e9d = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_compiler_gcc4, 398, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c24de2c642ef7ad837946be2315a4cf0 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_decl, 158, const_tuple_e2f4ab061cac441a3ca0087485bc6eff_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ad357c8e3df453b153273e86545070dd = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_decl, 158, const_tuple_6c6d63be9f9e7a231ad08de0f63b0cb1_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_937d2fd4f7c8d909356163e26e2b2013 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_func, 301, const_tuple_0baba04c51c9922998380cb0a215df2c_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1ab95c5dd1e0fe091d3e38ee6c48d2b9 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_func, 301, const_tuple_81f97e49c8bd2f6905c3cf838e452ea8_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a1b34c72db13201c73b0d2dd9ae5590e = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_funcs_once, 332, const_tuple_e74bf7ea4fc7dc6f5228fceaf5d183ac_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4b98bd6755249ff658de65a12b4a96a7 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_funcs_once, 332, const_tuple_0de9f387e675d82a861a1edf39b27d49_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1339aa5aa00fefad08be1c9baae53573 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_header, 152, const_tuple_8a1577c3cfa22236cc614566b752eab9_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_44b34996e74c1e69fdc48b5e713301d5 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_inline, 393, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4f376e2adbfaea206f03e62f9ad704e0 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_macro_true, 173, const_tuple_e2f4ab061cac441a3ca0087485bc6eff_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2549077c186db7f9ce19654169b6882c = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_macro_true, 173, const_tuple_6c6d63be9f9e7a231ad08de0f63b0cb1_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6140cb8103300cdfbe42817f799c869b = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_type, 189, const_tuple_bc839bbf667b0707c220b5ffbb1ae455_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e6cc5a332eb2f057f112608e29fdcb03 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_type, 189, const_tuple_362f63f0425aa9dce3700ec9db1a3c17_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2186353e2511b638d382a89167eb2f57 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_type_size, 218, const_tuple_de619f04dbae1069e259aa60bd52fc26_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8ceef974885a0164a822ebd4c79c433a = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_check_type_size, 218, const_tuple_63475bab01de8348aca09b861c088d7e_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8c6104e4c21fdf08bdfb951ab2c9cf1f = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_config, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_df881845f7eb90aa70022bbceffa4200 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_config, 25, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1919c44197d69186667b99545b3ba59b = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_flush, 458, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d9c81f1dfef3abd51f79c3d30908f6e6 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_get_output, 402, const_tuple_5e102dad49edef1aa91cb62466d1c8ae_tuple, 8, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_32777af88f50fda9071dca5b32de29a7 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_get_output, 402, const_tuple_9eaf186b4e4640a5e534f3e184a3fba5_tuple, 8, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ad2e8f601bfcd7eee344cb807ead423c = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_initialize_options, 30, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_767efca841c9e4327a9caf5d91e62a32 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_restore, 461, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7d4b079973c3d745ffb3ada961d936ba = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_try_run, 34, const_tuple_2c98f3e70cb7194d33200729924f1d66_tuple, 7, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5ce5bd69ff89718d47131b8965dbdaf4 = MAKE_CODEOBJ( const_str_digest_4dc6b94688046e61bd54f6eb40dc8886, const_str_plain_write, 454, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_config_of_module_numpy$distutils$command$config(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_GrabStdout_of_module_numpy$distutils$command$config(  );


NUITKA_CROSS_MODULE PyObject *impl_function_3_complex_call_helper_star_list_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_star_arg_list );


static PyObject *MAKE_FUNCTION_function_10_check_type_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_11_check_type_size_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_12_check_func_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_13_check_funcs_once_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_14_check_inline_of_class_1_config_of_module_numpy$distutils$command$config(  );


static PyObject *MAKE_FUNCTION_function_15_check_compiler_gcc4_of_class_1_config_of_module_numpy$distutils$command$config(  );


static PyObject *MAKE_FUNCTION_function_16_get_output_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_GrabStdout_of_module_numpy$distutils$command$config(  );


static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_1_config_of_module_numpy$distutils$command$config(  );


static PyObject *MAKE_FUNCTION_function_2_try_run_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_write_of_class_2_GrabStdout_of_module_numpy$distutils$command$config(  );


static PyObject *MAKE_FUNCTION_function_3__check_compiler_of_class_1_config_of_module_numpy$distutils$command$config(  );


static PyObject *MAKE_FUNCTION_function_3_flush_of_class_2_GrabStdout_of_module_numpy$distutils$command$config(  );


static PyObject *MAKE_FUNCTION_function_4__wrap_method_of_class_1_config_of_module_numpy$distutils$command$config(  );


static PyObject *MAKE_FUNCTION_function_4_restore_of_class_2_GrabStdout_of_module_numpy$distutils$command$config(  );


static PyObject *MAKE_FUNCTION_function_5__compile_of_class_1_config_of_module_numpy$distutils$command$config(  );


static PyObject *MAKE_FUNCTION_function_6__link_of_class_1_config_of_module_numpy$distutils$command$config(  );


static PyObject *MAKE_FUNCTION_function_7_check_header_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_8_check_decl_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_9_check_macro_true_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_config_of_module_numpy$distutils$command$config(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var_initialize_options;
    PyObjectLocalVariable var_try_run;
    PyObjectLocalVariable var__check_compiler;
    PyObjectLocalVariable var__wrap_method;
    PyObjectLocalVariable var__compile;
    PyObjectLocalVariable var__link;
    PyObjectLocalVariable var_check_header;
    PyObjectLocalVariable var_check_decl;
    PyObjectLocalVariable var_check_macro_true;
    PyObjectLocalVariable var_check_type;
    PyObjectLocalVariable var_check_type_size;
    PyObjectLocalVariable var_check_func;
    PyObjectLocalVariable var_check_funcs_once;
    PyObjectLocalVariable var_check_inline;
    PyObjectLocalVariable var_check_compiler_gcc4;
    PyObjectLocalVariable var_get_output;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
    PyObject *tmp_defaults_9;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_e9b81eae6371a8ff3e5c3f6efa0932a3;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_df881845f7eb90aa70022bbceffa4200, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_old_config );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_config );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91677 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_user_options );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = tmp_assign_source_2;

    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_1 = LIST_COPY( const_list_tuple_9608cb38ad8cfabaffebc40aea72718c_tuple_list );
    tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 26;
        goto try_finally_handler_1;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_3;

    // Tried code
    tmp_compare_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_1 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if (tmp_isnot_1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assattr_name_1 = tmp_inplace_assign_1__inplace_end.object;

    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_old_config );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_config );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91677 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 26;
        goto try_finally_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_user_options, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 26;
        goto try_finally_handler_2;
    }
    branch_no_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_1__inplace_end.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_end.object );
        tmp_inplace_assign_1__inplace_end.object = NULL;
    }

    assert( tmp_result != false );
    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto frame_exception_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;
    tmp_assign_source_4 = MAKE_FUNCTION_function_1_initialize_options_of_class_1_config_of_module_numpy$distutils$command$config(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    assert( var_initialize_options.object == NULL );
    var_initialize_options.object = tmp_assign_source_4;

    tmp_defaults_1 = const_tuple_none_none_none_none_str_plain_c_tuple;
    tmp_assign_source_5 = MAKE_FUNCTION_function_2_try_run_of_class_1_config_of_module_numpy$distutils$command$config( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    assert( var_try_run.object == NULL );
    var_try_run.object = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_3__check_compiler_of_class_1_config_of_module_numpy$distutils$command$config(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    assert( var__check_compiler.object == NULL );
    var__check_compiler.object = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_4__wrap_method_of_class_1_config_of_module_numpy$distutils$command$config(  );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    assert( var__wrap_method.object == NULL );
    var__wrap_method.object = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_5__compile_of_class_1_config_of_module_numpy$distutils$command$config(  );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    assert( var__compile.object == NULL );
    var__compile.object = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_6__link_of_class_1_config_of_module_numpy$distutils$command$config(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    assert( var__link.object == NULL );
    var__link.object = tmp_assign_source_9;

    tmp_defaults_2 = const_tuple_none_none_str_plain_c_tuple;
    tmp_assign_source_10 = MAKE_FUNCTION_function_7_check_header_of_class_1_config_of_module_numpy$distutils$command$config( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    assert( var_check_header.object == NULL );
    var_check_header.object = tmp_assign_source_10;

    tmp_defaults_3 = const_tuple_none_none_tuple;
    tmp_assign_source_11 = MAKE_FUNCTION_function_8_check_decl_of_class_1_config_of_module_numpy$distutils$command$config( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_function->f_lineno = 158;
        goto frame_exception_exit_1;
    }
    assert( var_check_decl.object == NULL );
    var_check_decl.object = tmp_assign_source_11;

    tmp_defaults_4 = const_tuple_none_none_tuple;
    tmp_assign_source_12 = MAKE_FUNCTION_function_9_check_macro_true_of_class_1_config_of_module_numpy$distutils$command$config( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_12 );

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    assert( var_check_macro_true.object == NULL );
    var_check_macro_true.object = tmp_assign_source_12;

    tmp_defaults_5 = const_tuple_none_none_none_tuple;
    tmp_assign_source_13 = MAKE_FUNCTION_function_10_check_type_of_class_1_config_of_module_numpy$distutils$command$config( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_13 );

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }
    assert( var_check_type.object == NULL );
    var_check_type.object = tmp_assign_source_13;

    tmp_defaults_6 = const_tuple_none_none_none_none_tuple;
    tmp_assign_source_14 = MAKE_FUNCTION_function_11_check_type_size_of_class_1_config_of_module_numpy$distutils$command$config( INCREASE_REFCOUNT( tmp_defaults_6 ) );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_14 );

        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }
    assert( var_check_type_size.object == NULL );
    var_check_type_size.object = tmp_assign_source_14;

    tmp_defaults_7 = const_tuple_none_none_none_none_false_false_none_tuple;
    tmp_assign_source_15 = MAKE_FUNCTION_function_12_check_func_of_class_1_config_of_module_numpy$distutils$command$config( INCREASE_REFCOUNT( tmp_defaults_7 ) );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_15 );

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    assert( var_check_func.object == NULL );
    var_check_func.object = tmp_assign_source_15;

    tmp_defaults_8 = const_tuple_none_none_none_none_false_false_none_tuple;
    tmp_assign_source_16 = MAKE_FUNCTION_function_13_check_funcs_once_of_class_1_config_of_module_numpy$distutils$command$config( INCREASE_REFCOUNT( tmp_defaults_8 ) );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );

        frame_function->f_lineno = 332;
        goto frame_exception_exit_1;
    }
    assert( var_check_funcs_once.object == NULL );
    var_check_funcs_once.object = tmp_assign_source_16;

    tmp_assign_source_17 = MAKE_FUNCTION_function_14_check_inline_of_class_1_config_of_module_numpy$distutils$command$config(  );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_17 );

        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    assert( var_check_inline.object == NULL );
    var_check_inline.object = tmp_assign_source_17;

    tmp_assign_source_18 = MAKE_FUNCTION_function_15_check_compiler_gcc4_of_class_1_config_of_module_numpy$distutils$command$config(  );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }
    assert( var_check_compiler_gcc4.object == NULL );
    var_check_compiler_gcc4.object = tmp_assign_source_18;

    tmp_defaults_9 = const_tuple_none_none_none_none_str_plain_c_none_tuple;
    tmp_assign_source_19 = MAKE_FUNCTION_function_16_get_output_of_class_1_config_of_module_numpy$distutils$command$config( INCREASE_REFCOUNT( tmp_defaults_9 ) );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_19 );

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }
    assert( var_get_output.object == NULL );
    var_get_output.object = tmp_assign_source_19;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___module__,
            var___module__.object
        );

    }
    if ((var_initialize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_initialize_options,
            var_initialize_options.object
        );

    }
    if ((var_try_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_try_run,
            var_try_run.object
        );

    }
    if ((var__check_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__check_compiler,
            var__check_compiler.object
        );

    }
    if ((var__wrap_method.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__wrap_method,
            var__wrap_method.object
        );

    }
    if ((var__compile.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__compile,
            var__compile.object
        );

    }
    if ((var__link.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__link,
            var__link.object
        );

    }
    if ((var_check_header.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_header,
            var_check_header.object
        );

    }
    if ((var_check_decl.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_decl,
            var_check_decl.object
        );

    }
    if ((var_check_macro_true.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_macro_true,
            var_check_macro_true.object
        );

    }
    if ((var_check_type.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_type,
            var_check_type.object
        );

    }
    if ((var_check_type_size.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_type_size,
            var_check_type_size.object
        );

    }
    if ((var_check_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_func,
            var_check_func.object
        );

    }
    if ((var_check_funcs_once.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_funcs_once,
            var_check_funcs_once.object
        );

    }
    if ((var_check_inline.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_inline,
            var_check_inline.object
        );

    }
    if ((var_check_compiler_gcc4.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_compiler_gcc4,
            var_check_compiler_gcc4.object
        );

    }
    if ((var_get_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_get_output,
            var_get_output.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = PyDict_New();
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__.object
        );

    }
    if ((var_initialize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_initialize_options,
            var_initialize_options.object
        );

    }
    if ((var_try_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_try_run,
            var_try_run.object
        );

    }
    if ((var__check_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__check_compiler,
            var__check_compiler.object
        );

    }
    if ((var__wrap_method.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__wrap_method,
            var__wrap_method.object
        );

    }
    if ((var__compile.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__compile,
            var__compile.object
        );

    }
    if ((var__link.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__link,
            var__link.object
        );

    }
    if ((var_check_header.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_check_header,
            var_check_header.object
        );

    }
    if ((var_check_decl.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_check_decl,
            var_check_decl.object
        );

    }
    if ((var_check_macro_true.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_check_macro_true,
            var_check_macro_true.object
        );

    }
    if ((var_check_type.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_check_type,
            var_check_type.object
        );

    }
    if ((var_check_type_size.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_check_type_size,
            var_check_type_size.object
        );

    }
    if ((var_check_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_check_func,
            var_check_func.object
        );

    }
    if ((var_check_funcs_once.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_check_funcs_once,
            var_check_funcs_once.object
        );

    }
    if ((var_check_inline.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_check_inline,
            var_check_inline.object
        );

    }
    if ((var_check_compiler_gcc4.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_check_compiler_gcc4,
            var_check_compiler_gcc4.object
        );

    }
    if ((var_get_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_get_output,
            var_get_output.object
        );

    }
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}


static PyObject *impl_function_1_initialize_options_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ad2e8f601bfcd7eee344cb807ead423c, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_fcompiler, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_old_config );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_config );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91677 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_initialize_options );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_self.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 32;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_1_initialize_options_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "initialize_options() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "initialize_options() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_initialize_options_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1_initialize_options_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_initialize_options_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_initialize_options_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_try_run_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_body, PyObject *_python_par_headers, PyObject *_python_par_include_dirs, PyObject *_python_par_libraries, PyObject *_python_par_library_dirs, PyObject *_python_par_lang )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_body; par_body.object = _python_par_body;
    PyObjectLocalVariable par_headers; par_headers.object = _python_par_headers;
    PyObjectLocalVariable par_include_dirs; par_include_dirs.object = _python_par_include_dirs;
    PyObjectLocalVariable par_libraries; par_libraries.object = _python_par_libraries;
    PyObjectLocalVariable par_library_dirs; par_library_dirs.object = _python_par_library_dirs;
    PyObjectLocalVariable par_lang; par_lang.object = _python_par_lang;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_call_arg_element_9;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7d4b079973c3d745ffb3ada961d936ba, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_7576d5478260a8de82d8b258be64cd22;
    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6864 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 41;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_old_config );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_config );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91677 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_try_run );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_self.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_body.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = par_headers.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91716 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = par_include_dirs.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = par_libraries.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = par_library_dirs.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83284 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = par_lang.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 17070 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 43;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS7( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_body.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_body,
            par_body.object
        );

    }
    if ((par_headers.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_headers,
            par_headers.object
        );

    }
    if ((par_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_include_dirs,
            par_include_dirs.object
        );

    }
    if ((par_libraries.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_libraries,
            par_libraries.object
        );

    }
    if ((par_library_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_library_dirs,
            par_library_dirs.object
        );

    }
    if ((par_lang.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lang,
            par_lang.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_2_try_run_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_body = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_include_dirs = NULL;
    PyObject *_python_par_libraries = NULL;
    PyObject *_python_par_library_dirs = NULL;
    PyObject *_python_par_lang = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "try_run() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_body == key )
            {
                assert( _python_par_body == NULL );
                _python_par_body = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_headers == key )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_include_dirs == key )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_libraries == key )
            {
                assert( _python_par_libraries == NULL );
                _python_par_libraries = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_library_dirs == key )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_lang == key )
            {
                assert( _python_par_lang == NULL );
                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_body, key ) == 1 )
            {
                assert( _python_par_body == NULL );
                _python_par_body = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_headers, key ) == 1 )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_include_dirs, key ) == 1 )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_libraries, key ) == 1 )
            {
                assert( _python_par_libraries == NULL );
                _python_par_libraries = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_library_dirs, key ) == 1 )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_lang, key ) == 1 )
            {
                assert( _python_par_lang == NULL );
                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "try_run() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 7 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 7  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_body != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_body = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_body == NULL )
    {
        if ( 1 + self->m_defaults_given >= 7  )
        {
            _python_par_body = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_headers = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 2 + self->m_defaults_given >= 7  )
        {
            _python_par_headers = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_include_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_include_dirs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_include_dirs == NULL )
    {
        if ( 3 + self->m_defaults_given >= 7  )
        {
            _python_par_include_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_libraries != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_libraries = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_libraries == NULL )
    {
        if ( 4 + self->m_defaults_given >= 7  )
        {
            _python_par_libraries = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 5 < args_given ))
    {
         if (unlikely( _python_par_library_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_library_dirs = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_library_dirs == NULL )
    {
        if ( 5 + self->m_defaults_given >= 7  )
        {
            _python_par_library_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 6 < args_given ))
    {
         if (unlikely( _python_par_lang != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_lang = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_lang == NULL )
    {
        if ( 6 + self->m_defaults_given >= 7  )
        {
            _python_par_lang = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_body == NULL || _python_par_headers == NULL || _python_par_include_dirs == NULL || _python_par_libraries == NULL || _python_par_library_dirs == NULL || _python_par_lang == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_body, _python_par_headers, _python_par_include_dirs, _python_par_libraries, _python_par_library_dirs, _python_par_lang };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_try_run_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self, _python_par_body, _python_par_headers, _python_par_include_dirs, _python_par_libraries, _python_par_library_dirs, _python_par_lang );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_body );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_include_dirs );
    Py_XDECREF( _python_par_libraries );
    Py_XDECREF( _python_par_library_dirs );
    Py_XDECREF( _python_par_lang );

    return NULL;
}

static PyObject *dparse_function_2_try_run_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 7 )
    {
        return impl_function_2_try_run_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_try_run_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__check_compiler_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_FCompiler;
    PyObjectLocalVariable var_new_fcompiler;
    PyObjectLocalVariable var_e;
    PyObjectLocalVariable var_msg;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
    PyObject *tmp_called_10;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1e7839b76b944111d2c8e6b6d177f892, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_old_config );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_config );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91677 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__check_compiler );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_self.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 46;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_FCompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_FCompiler,
            var_FCompiler.object
        );

    }
    if ((var_new_fcompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_new_fcompiler,
            var_new_fcompiler.object
        );

    }
    if ((var_e.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_e,
            var_e.object
        );

    }
    if ((var_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_msg,
            var_msg.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_self,
            par_self.object
        );

    }
    frame_function->f_lineno = 47;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_c0ab1120b239d942b77d52b1ebe617bb, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_FCompiler_str_plain_new_fcompiler_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_FCompiler );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    assert( var_FCompiler.object == NULL );
    var_FCompiler.object = tmp_assign_source_1;

    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_FCompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_FCompiler,
            var_FCompiler.object
        );

    }
    if ((var_new_fcompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_new_fcompiler,
            var_new_fcompiler.object
        );

    }
    if ((var_e.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_e,
            var_e.object
        );

    }
    if ((var_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_msg,
            var_msg.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_self,
            par_self.object
        );

    }
    frame_function->f_lineno = 47;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_c0ab1120b239d942b77d52b1ebe617bb, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_FCompiler_str_plain_new_fcompiler_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_new_fcompiler );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    assert( var_new_fcompiler.object == NULL );
    var_new_fcompiler.object = tmp_assign_source_2;

    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto try_finally_handler_2;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_platform );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto try_finally_handler_2;
    }
    tmp_compexpr_right_1 = const_str_plain_win32;
    tmp_assign_source_3 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_3;

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto try_finally_handler_2;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto try_finally_handler_3;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_compiler );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto try_finally_handler_3;
    }
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_compiler_type );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto try_finally_handler_3;
    }
    tmp_compexpr_right_2 = const_str_plain_msvc;
    tmp_cond_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto try_finally_handler_3;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_2;
    }

    goto finally_end_1;
    finally_end_1:;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_1 );
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_finally_handler_1;
    }

    goto finally_end_2;
    finally_end_2:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 49;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 55;
        goto try_finally_handler_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_compiler );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
        goto try_finally_handler_1;
    }
    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_initialized );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 55;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    // Tried block of try/except
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto try_except_handler_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_compiler );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 57;
        goto try_except_handler_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_initialize );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 57;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 57;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 57;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function || exception_tb->tb_lineno != frame_function->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_function, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_IOError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 58;
        goto try_finally_handler_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_get_exception );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_exception );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83101 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 59;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 59;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto try_finally_handler_1;
    }
    assert( var_e.object == NULL );
    var_e.object = tmp_assign_source_4;

    tmp_binop_left_1 = const_str_digest_c3594c46c750b3181ad524eb14cb2c3e;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_e.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_source_name_11 = par_self.object;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto try_finally_handler_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_compiler );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 68;
        goto try_finally_handler_1;
    }
    tmp_source_name_9 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_10 );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 68;
        goto try_finally_handler_1;
    }
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 68;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    assert( var_msg.object == NULL );
    var_msg.object = tmp_assign_source_5;

    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 69;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = const_str_digest_d6e275fd9160fdb05e58f34ebc8e057f;
    frame_function->f_lineno = 70;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_distutils );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_distutils );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91769 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto try_finally_handler_1;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_errors );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_DistutilsPlatformError );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_3 = var_msg.object;

    frame_function->f_lineno = 71;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 71;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_1;
    branch_end_3:;
    try_except_end_1:;
    branch_no_2:;
    branch_no_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto frame_exception_exit_1;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_source_name_14 = par_self.object;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_fcompiler );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_1 = var_FCompiler.object;

    if ( tmp_isinstance_cls_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81630 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_called_6 = var_new_fcompiler.object;

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86634 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_1 = _PyDict_NewPresized( 4 );
    tmp_source_name_15 = par_self.object;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_fcompiler );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_compiler;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_source_name_16 = par_self.object;

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_dry_run );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_dry_run;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = const_int_pos_1;
    tmp_dict_key_3 = const_str_plain_force;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_source_name_17 = par_self.object;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_compiler );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_c_compiler;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    frame_function->f_lineno = 76;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_6, tmp_call_kw_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_fcompiler, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_18 = par_self.object;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_fcompiler );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_isnot_1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_20 = par_self.object;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_fcompiler );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_customize );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_source_name_21 = par_self.object;

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_distribution );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 78;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_23 = par_self.object;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_fcompiler );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_get_version );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 79;
    tmp_cond_value_4 = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_25 = par_self.object;

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_source_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_fcompiler );
    if ( tmp_source_name_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_customize_cmd );
    Py_DECREF( tmp_source_name_24 );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = par_self.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 80;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_27 = par_self.object;

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_source_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_fcompiler );
    if ( tmp_source_name_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_show_customization );
    Py_DECREF( tmp_source_name_26 );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 81;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_10 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    branch_no_5:;
    branch_no_4:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((var_FCompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_FCompiler,
            var_FCompiler.object
        );

    }
    if ((var_new_fcompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_new_fcompiler,
            var_new_fcompiler.object
        );

    }
    if ((var_e.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_e,
            var_e.object
        );

    }
    if ((var_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msg,
            var_msg.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_3__check_compiler_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "_check_compiler() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_check_compiler() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3__check_compiler_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3__check_compiler_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3__check_compiler_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__check_compiler_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__wrap_method_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_mth, PyObject *_python_par_lang, PyObject *_python_par_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_mth; par_mth.object = _python_par_mth;
    PyObjectLocalVariable par_lang; par_lang.object = _python_par_lang;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable var_CompileError;
    PyObjectLocalVariable var_DistutilsExecError;
    PyObjectLocalVariable var_save_compiler;
    PyObjectLocalVariable var_ret;
    PyObjectLocalVariable var_msg;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_called_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_76bdb858659ddd6f742854af4889292b, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_CompileError.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_CompileError,
            var_CompileError.object
        );

    }
    if ((var_DistutilsExecError.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_DistutilsExecError,
            var_DistutilsExecError.object
        );

    }
    if ((var_save_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_save_compiler,
            var_save_compiler.object
        );

    }
    if ((var_ret.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ret,
            var_ret.object
        );

    }
    if ((var_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_msg,
            var_msg.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_mth.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_mth,
            par_mth.object
        );

    }
    if ((par_lang.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_lang,
            par_lang.object
        );

    }
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_args,
            par_args.object
        );

    }
    frame_function->f_lineno = 84;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_8acec9b707fb08fa95386d8360c9e9fc, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_CompileError_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_CompileError );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    assert( var_CompileError.object == NULL );
    var_CompileError.object = tmp_assign_source_1;

    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_CompileError.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_CompileError,
            var_CompileError.object
        );

    }
    if ((var_DistutilsExecError.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_DistutilsExecError,
            var_DistutilsExecError.object
        );

    }
    if ((var_save_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_save_compiler,
            var_save_compiler.object
        );

    }
    if ((var_ret.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ret,
            var_ret.object
        );

    }
    if ((var_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_msg,
            var_msg.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_mth.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_mth,
            par_mth.object
        );

    }
    if ((par_lang.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_lang,
            par_lang.object
        );

    }
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_args,
            par_args.object
        );

    }
    frame_function->f_lineno = 85;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_DistutilsExecError_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_DistutilsExecError );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    assert( var_DistutilsExecError.object == NULL );
    var_DistutilsExecError.object = tmp_assign_source_2;

    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compiler );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    assert( var_save_compiler.object == NULL );
    var_save_compiler.object = tmp_assign_source_3;

    tmp_compare_left_1 = par_lang.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 17070 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LIST_COPY( const_list_str_plain_f77_str_plain_f90_list );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fcompiler );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_compiler, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_1:;
    // Tried block of try/except
    tmp_dircall_arg1_1 = par_mth.object;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91807 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto try_except_handler_1;
    }

    tmp_binop_left_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_self.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_left_1, 0, tmp_tuple_element_1 );
    tmp_binop_right_1 = par_args.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto try_except_handler_1;
    }

    tmp_dircall_arg2_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_dircall_arg2_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto try_except_handler_1;
    }
    tmp_assign_source_4 = impl_function_3_complex_call_helper_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), tmp_dircall_arg2_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto try_except_handler_1;
    }
    assert( var_ret.object == NULL );
    var_ret.object = tmp_assign_source_4;

    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function || exception_tb->tb_lineno != frame_function->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_function, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_DistutilsExecError.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_compare_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91856 ], 64, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_CompileError.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_compare_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91920 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 1, tmp_tuple_element_2 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_get_exception );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_exception );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83101 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 92;
    tmp_str_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    assert( var_msg.object == NULL );
    var_msg.object = tmp_assign_source_5;

    tmp_assattr_name_2 = var_save_compiler.object;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91978 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_compiler, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_raise_type_1 = var_CompileError.object;

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91920 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 94;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_2:;
    try_except_end_1:;
    tmp_assattr_name_3 = var_save_compiler.object;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91978 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_compiler, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_return_value = var_ret.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38779 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((var_CompileError.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_CompileError,
            var_CompileError.object
        );

    }
    if ((var_DistutilsExecError.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_DistutilsExecError,
            var_DistutilsExecError.object
        );

    }
    if ((var_save_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_save_compiler,
            var_save_compiler.object
        );

    }
    if ((var_ret.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ret,
            var_ret.object
        );

    }
    if ((var_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msg,
            var_msg.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_mth.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mth,
            par_mth.object
        );

    }
    if ((par_lang.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lang,
            par_lang.object
        );

    }
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            par_args.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_4__wrap_method_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_mth = NULL;
    PyObject *_python_par_lang = NULL;
    PyObject *_python_par_args = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "_wrap_method() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_mth == key )
            {
                assert( _python_par_mth == NULL );
                _python_par_mth = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_lang == key )
            {
                assert( _python_par_lang == NULL );
                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_args == key )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mth, key ) == 1 )
            {
                assert( _python_par_mth == NULL );
                _python_par_mth = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_lang, key ) == 1 )
            {
                assert( _python_par_lang == NULL );
                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_args, key ) == 1 )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_wrap_method() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 4 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_mth != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_mth = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_mth == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_mth = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_lang != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_lang = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_lang == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_lang = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_args == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_mth == NULL || _python_par_lang == NULL || _python_par_args == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_mth, _python_par_lang, _python_par_args };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4__wrap_method_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self, _python_par_mth, _python_par_lang, _python_par_args );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_mth );
    Py_XDECREF( _python_par_lang );
    Py_XDECREF( _python_par_args );

    return NULL;
}

static PyObject *dparse_function_4__wrap_method_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_4__wrap_method_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__wrap_method_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5__compile_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_body, PyObject *_python_par_headers, PyObject *_python_par_include_dirs, PyObject *_python_par_lang )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_body; par_body.object = _python_par_body;
    PyObjectLocalVariable par_headers; par_headers.object = _python_par_headers;
    PyObjectLocalVariable par_include_dirs; par_include_dirs.object = _python_par_include_dirs;
    PyObjectLocalVariable par_lang; par_lang.object = _python_par_lang;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e46a1983cdc1d5bf2b26c36c78810fe5, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__wrap_method );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_old_config );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_config );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91677 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__compile );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_lang.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 17070 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = PyTuple_New( 4 );
    tmp_tuple_element_1 = par_body.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_headers.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91716 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_3, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_include_dirs.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_3, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_lang.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 17070 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_3, 3, tmp_tuple_element_1 );
    frame_function->f_lineno = 100;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_body.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_body,
            par_body.object
        );

    }
    if ((par_headers.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_headers,
            par_headers.object
        );

    }
    if ((par_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_include_dirs,
            par_include_dirs.object
        );

    }
    if ((par_lang.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lang,
            par_lang.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_5__compile_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_body = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_include_dirs = NULL;
    PyObject *_python_par_lang = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "_compile() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_body == key )
            {
                assert( _python_par_body == NULL );
                _python_par_body = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_headers == key )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_include_dirs == key )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_lang == key )
            {
                assert( _python_par_lang == NULL );
                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_body, key ) == 1 )
            {
                assert( _python_par_body == NULL );
                _python_par_body = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_headers, key ) == 1 )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_include_dirs, key ) == 1 )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_lang, key ) == 1 )
            {
                assert( _python_par_lang == NULL );
                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_compile() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 5 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_body != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_body = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_body == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_body = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_headers = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_headers = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_include_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_include_dirs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_include_dirs == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_include_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_lang != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_lang = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_lang == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_lang = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_body == NULL || _python_par_headers == NULL || _python_par_include_dirs == NULL || _python_par_lang == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_body, _python_par_headers, _python_par_include_dirs, _python_par_lang };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5__compile_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self, _python_par_body, _python_par_headers, _python_par_include_dirs, _python_par_lang );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_body );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_include_dirs );
    Py_XDECREF( _python_par_lang );

    return NULL;
}

static PyObject *dparse_function_5__compile_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_5__compile_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5__compile_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6__link_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_body, PyObject *_python_par_headers, PyObject *_python_par_include_dirs, PyObject *_python_par_libraries, PyObject *_python_par_library_dirs, PyObject *_python_par_lang )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_body; par_body.object = _python_par_body;
    PyObjectLocalVariable par_headers; par_headers.object = _python_par_headers;
    PyObjectLocalVariable par_include_dirs; par_include_dirs.object = _python_par_include_dirs;
    PyObjectLocalVariable par_libraries; par_libraries.object = _python_par_libraries;
    PyObjectLocalVariable par_library_dirs; par_library_dirs.object = _python_par_library_dirs;
    PyObjectLocalVariable par_lang; par_lang.object = _python_par_lang;
    PyObjectLocalVariable var_d;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_o;
    PyObjectLocalVariable var_libname;
    PyObjectLocalVariable var_fileexists;
    PyObjectLocalVariable var_libdir;
    PyObjectLocalVariable var_libfile;
    PyObjectLocalVariable var_libfile2;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_or_3__value_1;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_or_4__value_1;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_or_5__value_1;
    PyObjectTempVariable tmp_for_loop_4__for_iterator;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_for_loop_5__for_iterator;
    PyObjectTempVariable tmp_for_loop_5__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_call_arg_element_9;
    PyObject *tmp_call_arg_element_10;
    PyObject *tmp_call_arg_element_11;
    PyObject *tmp_call_arg_element_12;
    PyObject *tmp_call_arg_element_13;
    PyObject *tmp_call_arg_element_14;
    PyObject *tmp_call_arg_element_15;
    PyObject *tmp_call_arg_element_16;
    PyObject *tmp_call_arg_element_17;
    PyObject *tmp_call_arg_element_18;
    PyObject *tmp_call_arg_element_19;
    PyObject *tmp_call_arg_element_20;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
    PyObject *tmp_called_10;
    PyObject *tmp_called_11;
    PyObject *tmp_called_12;
    PyObject *tmp_called_13;
    PyObject *tmp_called_14;
    PyObject *tmp_called_15;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_In_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    int tmp_tried_lineno_8;
    int tmp_tried_lineno_9;
    int tmp_tried_lineno_10;
    int tmp_tried_lineno_11;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_502964b362258f17d3dfca59e076928c, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_compiler );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compiler_type );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_msvc;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = NULL;
    // Tried code
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = NULL;
    // Tried code
    tmp_assign_source_2 = par_libraries.object;

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto try_finally_handler_2;
    }

    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_cond_value_1 = tmp_or_1__value_1.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto try_finally_handler_2;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_slice_source_1 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_slice_source_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_slice_source_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_slice_source_1 = PyList_New( 0 );
    // Re-reraise as necessary after finally was executed.
    goto finally_end_1;
    finally_end_1:;
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_1;
    }

    goto finally_end_2;
    finally_end_2:;
    tmp_assign_source_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto try_finally_handler_1;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto frame_exception_exit_1;
    }

    goto finally_end_3;
    finally_end_3:;
    if (par_libraries.object == NULL)
    {
        par_libraries.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_libraries.object;
        par_libraries.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_assign_source_3 = NULL;
    // Tried code
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
    tmp_slice_source_2 = NULL;
    // Tried code
    tmp_assign_source_4 = par_library_dirs.object;

    if ( tmp_assign_source_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83284 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto try_finally_handler_5;
    }

    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_cond_value_2 = tmp_or_2__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto try_finally_handler_5;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_slice_source_2 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_slice_source_2 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_slice_source_2 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_slice_source_2 = PyList_New( 0 );
    // Re-reraise as necessary after finally was executed.
    goto finally_end_4;
    finally_end_4:;
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_4;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_assign_source_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto try_finally_handler_4;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto frame_exception_exit_1;
    }

    goto finally_end_6;
    finally_end_6:;
    if (par_library_dirs.object == NULL)
    {
        par_library_dirs.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = par_library_dirs.object;
        par_library_dirs.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_compare_left_2 = par_lang.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 17070 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LIST_COPY( const_list_str_plain_f77_str_plain_f90_list );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_5 = const_str_plain_c;
    if (par_lang.object == NULL)
    {
        par_lang.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = par_lang.object;
        par_lang.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fcompiler );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_6 = NULL;
    // Tried code
    tmp_iter_arg_1 = NULL;
    // Tried code
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto try_finally_handler_8;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_fcompiler );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_8;
    }
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_library_dirs );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_8;
    }
    assert( tmp_or_3__value_1.object == NULL );
    tmp_or_3__value_1.object = tmp_assign_source_7;

    tmp_cond_value_4 = tmp_or_3__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_8;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_iter_arg_1 = tmp_or_3__value_1.object;

    Py_INCREF( tmp_iter_arg_1 );
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_iter_arg_1 = NULL;
    // Tried code
    tmp_result = tmp_or_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_3__value_1.object );
        tmp_or_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_iter_arg_1 = PyList_New( 0 );
    // Re-reraise as necessary after finally was executed.
    goto finally_end_7;
    finally_end_7:;
    condexpr_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_7;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_7;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_3__value_1.object );
    tmp_or_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto frame_exception_exit_1;
    }

    goto finally_end_9;
    finally_end_9:;
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_6;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_8 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 111;
            goto try_finally_handler_10;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    tmp_assign_source_9 = tmp_for_loop_1__iter_value.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_source_name_6 = var_d.object;

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_startswith );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto try_finally_handler_10;
    }
    tmp_call_arg_element_1 = const_str_digest_6786c771ff638c2613791fc0ba5bb563;
    frame_function->f_lineno = 114;
    tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto try_finally_handler_10;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 114;
        goto try_finally_handler_10;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    // Tried code
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_exec_command );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exec_command );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80776 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto try_finally_handler_11;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyList_New( 3 );
    tmp_list_element_1 = const_str_plain_cygpath;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    tmp_list_element_1 = const_str_digest_b0db852c702255d781b62d43833a84e9;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 1, tmp_list_element_1 );
    tmp_list_element_1 = var_d.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 2, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_3be937dfcb6326ab62ea1b692cc71009 );
    frame_function->f_lineno = 116;
    tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto try_finally_handler_11;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto try_finally_handler_11;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_11 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( !ERROR_OCCURED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 115;
        goto try_finally_handler_11;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_12 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( !ERROR_OCCURED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 115;
        goto try_finally_handler_11;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_1 ); assert( PyIter_Check( tmp_iterator_name_1 ) );

    tmp_iterator_attempt_1 = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt_1 == NULL ))
    {
        // TODO: Could first fetch, then check, should be faster.
        if ( !ERROR_OCCURED() )
        {
        }
        else if ( PyErr_ExceptionMatches( PyExc_StopIteration ))
        {
            PyErr_Clear();
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

            goto try_finally_handler_11;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_1 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_11;
    }
    tmp_assign_source_13 = tmp_tuple_unpack_1__element_1.object;

    if (var_s.object == NULL)
    {
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
    }
    else
    {
        PyObject *old = var_s.object;
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
        Py_DECREF( old );
    }
    tmp_assign_source_14 = tmp_tuple_unpack_1__element_2.object;

    if (var_o.object == NULL)
    {
        var_o.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = var_o.object;
        var_o.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_10;
    }

    goto finally_end_10;
    finally_end_10:;
    tmp_cond_value_6 = var_s.object;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto try_finally_handler_10;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto try_finally_handler_10;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_assign_source_15 = var_o.object;

    if ( tmp_assign_source_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12331 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto try_finally_handler_10;
    }

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
        Py_DECREF( old );
    }
    branch_no_5:;
    branch_no_4:;
    tmp_source_name_7 = par_library_dirs.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83284 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto try_finally_handler_10;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_append );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto try_finally_handler_10;
    }
    tmp_call_arg_element_2 = var_d.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6034 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto try_finally_handler_10;
    }

    frame_function->f_lineno = 118;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto try_finally_handler_10;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_10;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto frame_exception_exit_1;
    }

    goto finally_end_11;
    finally_end_11:;
    tmp_assign_source_16 = NULL;
    // Tried code
    tmp_iter_arg_3 = NULL;
    // Tried code
    tmp_source_name_9 = par_self.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto try_finally_handler_13;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_fcompiler );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_13;
    }
    tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_libraries );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_13;
    }
    assert( tmp_or_4__value_1.object == NULL );
    tmp_or_4__value_1.object = tmp_assign_source_17;

    tmp_cond_value_7 = tmp_or_4__value_1.object;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_13;
    }
    if (tmp_cond_truth_7 == 1)
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_iter_arg_3 = tmp_or_4__value_1.object;

    Py_INCREF( tmp_iter_arg_3 );
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_iter_arg_3 = NULL;
    // Tried code
    tmp_result = tmp_or_4__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_4__value_1.object );
        tmp_or_4__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_iter_arg_3 = PyList_New( 0 );
    // Re-reraise as necessary after finally was executed.
    goto finally_end_12;
    finally_end_12:;
    condexpr_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_13:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto try_finally_handler_12;
    }

    goto finally_end_13;
    finally_end_13:;
    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_12;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_4__value_1.object );
    tmp_or_4__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto frame_exception_exit_1;
    }

    goto finally_end_14;
    finally_end_14:;
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_16;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_18 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 119;
            goto try_finally_handler_15;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    tmp_assign_source_19 = tmp_for_loop_2__iter_value.object;

    if (var_libname.object == NULL)
    {
        var_libname.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
    }
    else
    {
        PyObject *old = var_libname.object;
        var_libname.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
        Py_DECREF( old );
    }
    tmp_compare_left_3 = var_libname.object;

    tmp_compare_right_3 = par_libraries.object;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto try_finally_handler_15;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto try_finally_handler_15;
    }
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_10 = par_libraries.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto try_finally_handler_15;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_append );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto try_finally_handler_15;
    }
    tmp_call_arg_element_3 = var_libname.object;

    frame_function->f_lineno = 121;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto try_finally_handler_15;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_15;
    }
    goto loop_start_2;
    loop_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_15:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto frame_exception_exit_1;
    }

    goto finally_end_15;
    finally_end_15:;
    branch_no_3:;
    branch_no_2:;
    tmp_iter_arg_4 = par_libraries.object;

    if ( tmp_iter_arg_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator.object == NULL );
    tmp_for_loop_3__for_iterator.object = tmp_assign_source_20;

    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_21 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 122;
            goto try_finally_handler_16;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_21;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_21;
        Py_DECREF( old );
    }
    tmp_assign_source_22 = tmp_for_loop_3__iter_value.object;

    if (var_libname.object == NULL)
    {
        var_libname.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
    }
    else
    {
        PyObject *old = var_libname.object;
        var_libname.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
        Py_DECREF( old );
    }
    tmp_source_name_11 = var_libname.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_startswith );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_4 = const_str_plain_msvc;
    frame_function->f_lineno = 123;
    tmp_cond_value_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto try_finally_handler_16;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        frame_function->f_lineno = 123;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_cond_value_8 );
    if (tmp_cond_truth_8 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    goto loop_start_3;
    branch_no_7:;
    tmp_assign_source_23 = Py_False;
    if (var_fileexists.object == NULL)
    {
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
    }
    else
    {
        PyObject *old = var_fileexists.object;
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
        Py_DECREF( old );
    }
    tmp_assign_source_24 = NULL;
    // Tried code
    tmp_iter_arg_5 = NULL;
    // Tried code
    tmp_assign_source_25 = par_library_dirs.object;

    if ( tmp_assign_source_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83284 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 125;
        goto try_finally_handler_18;
    }

    if (tmp_or_5__value_1.object == NULL)
    {
        tmp_or_5__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
    }
    else
    {
        PyObject *old = tmp_or_5__value_1.object;
        tmp_or_5__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
        Py_DECREF( old );
    }
    tmp_cond_value_9 = tmp_or_5__value_1.object;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto try_finally_handler_18;
    }
    if (tmp_cond_truth_9 == 1)
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_iter_arg_5 = tmp_or_5__value_1.object;

    Py_INCREF( tmp_iter_arg_5 );
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_iter_arg_5 = NULL;
    // Tried code
    tmp_result = tmp_or_5__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_5__value_1.object );
        tmp_or_5__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_iter_arg_5 = PyList_New( 0 );
    // Re-reraise as necessary after finally was executed.
    goto finally_end_16;
    finally_end_16:;
    condexpr_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_18:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto try_finally_handler_17;
    }

    goto finally_end_17;
    finally_end_17:;
    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto try_finally_handler_17;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_17:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_5__value_1.object );
    tmp_or_5__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_13 != NULL )
    {
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;

        goto try_finally_handler_16;
    }

    goto finally_end_18;
    finally_end_18:;
    if (tmp_for_loop_4__for_iterator.object == NULL)
    {
        tmp_for_loop_4__for_iterator.object = tmp_assign_source_24;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__for_iterator.object;
        tmp_for_loop_4__for_iterator.object = tmp_assign_source_24;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator.object;

    tmp_assign_source_26 = ITERATOR_NEXT( tmp_next_source_4 );
    if (tmp_assign_source_26 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_4;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 125;
            goto try_finally_handler_20;
        }
    }

    if (tmp_for_loop_4__iter_value.object == NULL)
    {
        tmp_for_loop_4__iter_value.object = tmp_assign_source_26;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__iter_value.object;
        tmp_for_loop_4__iter_value.object = tmp_assign_source_26;
        Py_DECREF( old );
    }
    tmp_assign_source_27 = tmp_for_loop_4__iter_value.object;

    if (var_libdir.object == NULL)
    {
        var_libdir.object = INCREASE_REFCOUNT( tmp_assign_source_27 );
    }
    else
    {
        PyObject *old = var_libdir.object;
        var_libdir.object = INCREASE_REFCOUNT( tmp_assign_source_27 );
        Py_DECREF( old );
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto try_finally_handler_20;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_path );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto try_finally_handler_20;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_join );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto try_finally_handler_20;
    }
    tmp_call_arg_element_5 = var_libdir.object;

    tmp_binop_left_1 = const_str_digest_db5bfec63bd14f8434476719cf705ad5;
    tmp_binop_right_1 = var_libname.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto try_finally_handler_20;
    }

    tmp_call_arg_element_6 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 126;
        goto try_finally_handler_20;
    }
    frame_function->f_lineno = 126;
    tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto try_finally_handler_20;
    }
    if (var_libfile.object == NULL)
    {
        var_libfile.object = tmp_assign_source_28;
    }
    else
    {
        PyObject *old = var_libfile.object;
        var_libfile.object = tmp_assign_source_28;
        Py_DECREF( old );
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto try_finally_handler_20;
    }

    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_path );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto try_finally_handler_20;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto try_finally_handler_20;
    }
    tmp_call_arg_element_7 = var_libfile.object;

    frame_function->f_lineno = 127;
    tmp_cond_value_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_cond_value_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto try_finally_handler_20;
    }
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        frame_function->f_lineno = 127;
        goto try_finally_handler_20;
    }
    Py_DECREF( tmp_cond_value_10 );
    if (tmp_cond_truth_10 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_29 = Py_True;
    if (var_fileexists.object == NULL)
    {
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
    }
    else
    {
        PyObject *old = var_fileexists.object;
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
        Py_DECREF( old );
    }
    goto loop_end_4;
    branch_no_8:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto try_finally_handler_20;
    }
    goto loop_start_4;
    loop_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_20:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_4__iter_value.object );
    tmp_for_loop_4__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator.object );
    tmp_for_loop_4__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_14 != NULL )
    {
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;

        goto try_finally_handler_16;
    }

    goto finally_end_19;
    finally_end_19:;
    tmp_cond_value_11 = var_fileexists.object;

    if ( tmp_cond_value_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87257 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 130;
        goto try_finally_handler_16;
    }

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto try_finally_handler_16;
    }
    if (tmp_cond_truth_11 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    goto loop_start_3;
    branch_no_9:;
    tmp_assign_source_30 = Py_False;
    if (var_fileexists.object == NULL)
    {
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
    }
    else
    {
        PyObject *old = var_fileexists.object;
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
        Py_DECREF( old );
    }
    tmp_iter_arg_6 = par_library_dirs.object;

    if ( tmp_iter_arg_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83284 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 133;
        goto try_finally_handler_16;
    }

    tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
        goto try_finally_handler_16;
    }
    if (tmp_for_loop_5__for_iterator.object == NULL)
    {
        tmp_for_loop_5__for_iterator.object = tmp_assign_source_31;
    }
    else
    {
        PyObject *old = tmp_for_loop_5__for_iterator.object;
        tmp_for_loop_5__for_iterator.object = tmp_assign_source_31;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator.object;

    tmp_assign_source_32 = ITERATOR_NEXT( tmp_next_source_5 );
    if (tmp_assign_source_32 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_5;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 133;
            goto try_finally_handler_21;
        }
    }

    if (tmp_for_loop_5__iter_value.object == NULL)
    {
        tmp_for_loop_5__iter_value.object = tmp_assign_source_32;
    }
    else
    {
        PyObject *old = tmp_for_loop_5__iter_value.object;
        tmp_for_loop_5__iter_value.object = tmp_assign_source_32;
        Py_DECREF( old );
    }
    tmp_assign_source_33 = tmp_for_loop_5__iter_value.object;

    if (var_libdir.object == NULL)
    {
        var_libdir.object = INCREASE_REFCOUNT( tmp_assign_source_33 );
    }
    else
    {
        PyObject *old = var_libdir.object;
        var_libdir.object = INCREASE_REFCOUNT( tmp_assign_source_33 );
        Py_DECREF( old );
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 134;
        goto try_finally_handler_21;
    }

    tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_path );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 134;
        goto try_finally_handler_21;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_join );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 134;
        goto try_finally_handler_21;
    }
    tmp_call_arg_element_8 = var_libdir.object;

    tmp_binop_left_2 = const_str_digest_281372bea41c1cc2820284b52b815f98;
    tmp_binop_right_2 = var_libname.object;

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 134;
        goto try_finally_handler_21;
    }

    tmp_call_arg_element_9 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 134;
        goto try_finally_handler_21;
    }
    frame_function->f_lineno = 134;
    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 134;
        goto try_finally_handler_21;
    }
    if (var_libfile.object == NULL)
    {
        var_libfile.object = tmp_assign_source_34;
    }
    else
    {
        PyObject *old = var_libfile.object;
        var_libfile.object = tmp_assign_source_34;
        Py_DECREF( old );
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto try_finally_handler_21;
    }

    tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_path );
    if ( tmp_source_name_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
        goto try_finally_handler_21;
    }
    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_18 );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
        goto try_finally_handler_21;
    }
    tmp_call_arg_element_10 = var_libfile.object;

    frame_function->f_lineno = 135;
    tmp_cond_value_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_cond_value_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
        goto try_finally_handler_21;
    }
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_12 );

        frame_function->f_lineno = 135;
        goto try_finally_handler_21;
    }
    Py_DECREF( tmp_cond_value_12 );
    if (tmp_cond_truth_12 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 138;
        goto try_finally_handler_21;
    }

    tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_path );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_21;
    }
    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_join );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_21;
    }
    tmp_call_arg_element_11 = var_libdir.object;

    tmp_binop_left_3 = const_str_digest_db5bfec63bd14f8434476719cf705ad5;
    tmp_binop_right_3 = var_libname.object;

    if ( tmp_binop_right_3 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 138;
        goto try_finally_handler_21;
    }

    tmp_call_arg_element_12 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 138;
        goto try_finally_handler_21;
    }
    frame_function->f_lineno = 138;
    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2( tmp_called_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_21;
    }
    if (var_libfile2.object == NULL)
    {
        var_libfile2.object = tmp_assign_source_35;
    }
    else
    {
        PyObject *old = var_libfile2.object;
        var_libfile2.object = tmp_assign_source_35;
        Py_DECREF( old );
    }
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_copy_file );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy_file );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87313 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto try_finally_handler_21;
    }

    tmp_call_arg_element_13 = var_libfile.object;

    tmp_call_arg_element_14 = var_libfile2.object;

    frame_function->f_lineno = 139;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_11, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto try_finally_handler_21;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_23 = par_self.object;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 140;
        goto try_finally_handler_21;
    }

    tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_temp_files );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto try_finally_handler_21;
    }
    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_append );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto try_finally_handler_21;
    }
    tmp_call_arg_element_15 = var_libfile2.object;

    frame_function->f_lineno = 140;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto try_finally_handler_21;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_36 = Py_True;
    if (var_fileexists.object == NULL)
    {
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
    }
    else
    {
        PyObject *old = var_fileexists.object;
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
        Py_DECREF( old );
    }
    goto loop_end_5;
    branch_no_10:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
        goto try_finally_handler_21;
    }
    goto loop_start_5;
    loop_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_21:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_10 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_5__iter_value.object );
    tmp_for_loop_5__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_5__for_iterator.object );
    tmp_for_loop_5__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_10;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_15 != NULL )
    {
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;

        goto try_finally_handler_16;
    }

    goto finally_end_20;
    finally_end_20:;
    tmp_cond_value_13 = var_fileexists.object;

    if ( tmp_cond_value_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87257 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto try_finally_handler_16;
    }

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto try_finally_handler_16;
    }
    if (tmp_cond_truth_13 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    goto loop_start_3;
    branch_no_11:;
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto try_finally_handler_16;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_warn );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto try_finally_handler_16;
    }
    tmp_binop_left_4 = const_str_digest_45ccd415cc3ac96c00d7d81674d1238e;
    tmp_binop_right_4 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_libname.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_library_dirs.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83284 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 1, tmp_tuple_element_2 );
    tmp_call_arg_element_16 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );

        frame_function->f_lineno = 144;
        goto try_finally_handler_16;
    }
    frame_function->f_lineno = 144;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto try_finally_handler_16;
    }
    goto loop_start_3;
    loop_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_11 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_11;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_16 != NULL )
    {
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;

        goto frame_exception_exit_1;
    }

    goto finally_end_21;
    finally_end_21:;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_26 = par_self.object;

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_source_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_compiler );
    if ( tmp_source_name_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_compiler_type );
    Py_DECREF( tmp_source_name_25 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_str_plain_mingw32;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_14 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_generate_manifest );

    if (unlikely( tmp_called_14 == NULL ))
    {
        tmp_called_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_generate_manifest );
    }

    if ( tmp_called_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92037 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_17 = par_self.object;

    if ( tmp_call_arg_element_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 147;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_12:;
    branch_end_1:;
    tmp_source_name_27 = par_self.object;

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain__wrap_method );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_old_config );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_config );
    }

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91677 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_18 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain__link );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_15 );

        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = par_lang.object;

    if ( tmp_call_arg_element_19 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 17070 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_20 = PyTuple_New( 6 );
    tmp_tuple_element_3 = par_body.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_20, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_headers.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91716 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_20, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_include_dirs.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_20, 2, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_libraries.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_20, 3, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_library_dirs.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83284 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_20, 4, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_lang.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 17070 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_20, 5, tmp_tuple_element_3 );
    frame_function->f_lineno = 150;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_15, tmp_call_arg_element_18, tmp_call_arg_element_19, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_15 );
    Py_DECREF( tmp_call_arg_element_18 );
    Py_DECREF( tmp_call_arg_element_20 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((var_d.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_d,
            var_d.object
        );

    }
    if ((var_s.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_s,
            var_s.object
        );

    }
    if ((var_o.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_o,
            var_o.object
        );

    }
    if ((var_libname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_libname,
            var_libname.object
        );

    }
    if ((var_fileexists.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fileexists,
            var_fileexists.object
        );

    }
    if ((var_libdir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_libdir,
            var_libdir.object
        );

    }
    if ((var_libfile.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_libfile,
            var_libfile.object
        );

    }
    if ((var_libfile2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_libfile2,
            var_libfile2.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_body.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_body,
            par_body.object
        );

    }
    if ((par_headers.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_headers,
            par_headers.object
        );

    }
    if ((par_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_include_dirs,
            par_include_dirs.object
        );

    }
    if ((par_libraries.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_libraries,
            par_libraries.object
        );

    }
    if ((par_library_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_library_dirs,
            par_library_dirs.object
        );

    }
    if ((par_lang.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lang,
            par_lang.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_6__link_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_body = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_include_dirs = NULL;
    PyObject *_python_par_libraries = NULL;
    PyObject *_python_par_library_dirs = NULL;
    PyObject *_python_par_lang = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "_link() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_body == key )
            {
                assert( _python_par_body == NULL );
                _python_par_body = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_headers == key )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_include_dirs == key )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_libraries == key )
            {
                assert( _python_par_libraries == NULL );
                _python_par_libraries = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_library_dirs == key )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_lang == key )
            {
                assert( _python_par_lang == NULL );
                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_body, key ) == 1 )
            {
                assert( _python_par_body == NULL );
                _python_par_body = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_headers, key ) == 1 )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_include_dirs, key ) == 1 )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_libraries, key ) == 1 )
            {
                assert( _python_par_libraries == NULL );
                _python_par_libraries = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_library_dirs, key ) == 1 )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_lang, key ) == 1 )
            {
                assert( _python_par_lang == NULL );
                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_link() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 7 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 7  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_body != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_body = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_body == NULL )
    {
        if ( 1 + self->m_defaults_given >= 7  )
        {
            _python_par_body = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_headers = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 2 + self->m_defaults_given >= 7  )
        {
            _python_par_headers = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_include_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_include_dirs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_include_dirs == NULL )
    {
        if ( 3 + self->m_defaults_given >= 7  )
        {
            _python_par_include_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_libraries != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_libraries = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_libraries == NULL )
    {
        if ( 4 + self->m_defaults_given >= 7  )
        {
            _python_par_libraries = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 5 < args_given ))
    {
         if (unlikely( _python_par_library_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_library_dirs = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_library_dirs == NULL )
    {
        if ( 5 + self->m_defaults_given >= 7  )
        {
            _python_par_library_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 6 < args_given ))
    {
         if (unlikely( _python_par_lang != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_lang = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_lang == NULL )
    {
        if ( 6 + self->m_defaults_given >= 7  )
        {
            _python_par_lang = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_body == NULL || _python_par_headers == NULL || _python_par_include_dirs == NULL || _python_par_libraries == NULL || _python_par_library_dirs == NULL || _python_par_lang == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_body, _python_par_headers, _python_par_include_dirs, _python_par_libraries, _python_par_library_dirs, _python_par_lang };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6__link_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self, _python_par_body, _python_par_headers, _python_par_include_dirs, _python_par_libraries, _python_par_library_dirs, _python_par_lang );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_body );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_include_dirs );
    Py_XDECREF( _python_par_libraries );
    Py_XDECREF( _python_par_library_dirs );
    Py_XDECREF( _python_par_lang );

    return NULL;
}

static PyObject *dparse_function_6__link_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 7 )
    {
        return impl_function_6__link_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6__link_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_check_header_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_header, PyObject *_python_par_include_dirs, PyObject *_python_par_library_dirs, PyObject *_python_par_lang )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_header; par_header.object = _python_par_header;
    PyObjectLocalVariable par_include_dirs; par_include_dirs.object = _python_par_include_dirs;
    PyObjectLocalVariable par_library_dirs; par_library_dirs.object = _python_par_library_dirs;
    PyObjectLocalVariable par_lang; par_lang.object = _python_par_lang;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1339aa5aa00fefad08be1c9baae53573, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__check_compiler );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 153;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_try_compile );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_cebdc7c6ea27364d177a5ac17a130d49;
    tmp_call_arg_element_2 = PyList_New( 1 );
    tmp_list_element_1 = par_header.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 645 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_call_arg_element_2, 0, tmp_list_element_1 );
    tmp_call_arg_element_3 = par_include_dirs.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 156;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_header.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_header,
            par_header.object
        );

    }
    if ((par_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_include_dirs,
            par_include_dirs.object
        );

    }
    if ((par_library_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_library_dirs,
            par_library_dirs.object
        );

    }
    if ((par_lang.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lang,
            par_lang.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_7_check_header_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_header = NULL;
    PyObject *_python_par_include_dirs = NULL;
    PyObject *_python_par_library_dirs = NULL;
    PyObject *_python_par_lang = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "check_header() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_header == key )
            {
                assert( _python_par_header == NULL );
                _python_par_header = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_include_dirs == key )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_library_dirs == key )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_lang == key )
            {
                assert( _python_par_lang == NULL );
                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_header, key ) == 1 )
            {
                assert( _python_par_header == NULL );
                _python_par_header = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_include_dirs, key ) == 1 )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_library_dirs, key ) == 1 )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_lang, key ) == 1 )
            {
                assert( _python_par_lang == NULL );
                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "check_header() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 5 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_header != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_header = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_header == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_header = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_include_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_include_dirs = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_include_dirs == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_include_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_library_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_library_dirs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_library_dirs == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_library_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_lang != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_lang = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_lang == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_lang = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_header == NULL || _python_par_include_dirs == NULL || _python_par_library_dirs == NULL || _python_par_lang == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_header, _python_par_include_dirs, _python_par_library_dirs, _python_par_lang };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7_check_header_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self, _python_par_header, _python_par_include_dirs, _python_par_library_dirs, _python_par_lang );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_header );
    Py_XDECREF( _python_par_include_dirs );
    Py_XDECREF( _python_par_library_dirs );
    Py_XDECREF( _python_par_lang );

    return NULL;
}

static PyObject *dparse_function_7_check_header_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_7_check_header_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_check_header_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_check_decl_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_symbol, PyObject *_python_par_headers, PyObject *_python_par_include_dirs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_symbol; par_symbol.object = _python_par_symbol;
    PyObjectLocalVariable par_headers; par_headers.object = _python_par_headers;
    PyObjectLocalVariable par_include_dirs; par_include_dirs.object = _python_par_include_dirs;
    PyObjectLocalVariable var_body;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c24de2c642ef7ad837946be2315a4cf0, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__check_compiler );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 160;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_1 = const_str_digest_a5b652602b36826445fe57701987d768;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_symbol.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50104 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_symbol.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50104 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    assert( var_body.object == NULL );
    var_body.object = tmp_assign_source_1;

    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_try_compile );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = var_body.object;

    tmp_call_arg_element_2 = par_headers.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91716 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_include_dirs.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 171;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((var_body.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_body,
            var_body.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_symbol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_symbol,
            par_symbol.object
        );

    }
    if ((par_headers.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_headers,
            par_headers.object
        );

    }
    if ((par_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_include_dirs,
            par_include_dirs.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_8_check_decl_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_symbol = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_include_dirs = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "check_decl() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_symbol == key )
            {
                assert( _python_par_symbol == NULL );
                _python_par_symbol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_headers == key )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_include_dirs == key )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_symbol, key ) == 1 )
            {
                assert( _python_par_symbol == NULL );
                _python_par_symbol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_headers, key ) == 1 )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_include_dirs, key ) == 1 )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "check_decl() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 4 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_symbol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_symbol = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_symbol == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_symbol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_headers = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_headers = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_include_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_include_dirs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_include_dirs == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_include_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_symbol == NULL || _python_par_headers == NULL || _python_par_include_dirs == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_symbol, _python_par_headers, _python_par_include_dirs };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8_check_decl_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self, _python_par_symbol, _python_par_headers, _python_par_include_dirs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_symbol );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_include_dirs );

    return NULL;
}

static PyObject *dparse_function_8_check_decl_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_8_check_decl_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_check_decl_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_check_macro_true_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_symbol, PyObject *_python_par_headers, PyObject *_python_par_include_dirs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_symbol; par_symbol.object = _python_par_symbol;
    PyObjectLocalVariable par_headers; par_headers.object = _python_par_headers;
    PyObjectLocalVariable par_include_dirs; par_include_dirs.object = _python_par_include_dirs;
    PyObjectLocalVariable var_body;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4f376e2adbfaea206f03e62f9ad704e0, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__check_compiler );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 175;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_1 = const_str_digest_d005cee03db613815511f7f465e5cd6e;
    tmp_binop_right_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_symbol.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50104 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }
    assert( var_body.object == NULL );
    var_body.object = tmp_assign_source_1;

    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_try_compile );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = var_body.object;

    tmp_call_arg_element_2 = par_headers.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91716 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_include_dirs.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 187;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((var_body.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_body,
            var_body.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_symbol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_symbol,
            par_symbol.object
        );

    }
    if ((par_headers.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_headers,
            par_headers.object
        );

    }
    if ((par_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_include_dirs,
            par_include_dirs.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_9_check_macro_true_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_symbol = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_include_dirs = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "check_macro_true() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_symbol == key )
            {
                assert( _python_par_symbol == NULL );
                _python_par_symbol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_headers == key )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_include_dirs == key )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_symbol, key ) == 1 )
            {
                assert( _python_par_symbol == NULL );
                _python_par_symbol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_headers, key ) == 1 )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_include_dirs, key ) == 1 )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "check_macro_true() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 4 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_symbol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_symbol = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_symbol == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_symbol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_headers = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_headers = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_include_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_include_dirs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_include_dirs == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_include_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_symbol == NULL || _python_par_headers == NULL || _python_par_include_dirs == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_symbol, _python_par_headers, _python_par_include_dirs };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_9_check_macro_true_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self, _python_par_symbol, _python_par_headers, _python_par_include_dirs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_symbol );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_include_dirs );

    return NULL;
}

static PyObject *dparse_function_9_check_macro_true_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_9_check_macro_true_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_check_macro_true_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_check_type_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_type_name, PyObject *_python_par_headers, PyObject *_python_par_include_dirs, PyObject *_python_par_library_dirs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_type_name; par_type_name.object = _python_par_type_name;
    PyObjectLocalVariable par_headers; par_headers.object = _python_par_headers;
    PyObjectLocalVariable par_include_dirs; par_include_dirs.object = _python_par_include_dirs;
    PyObjectLocalVariable par_library_dirs; par_library_dirs.object = _python_par_library_dirs;
    PyObjectLocalVariable var_body;
    PyObjectLocalVariable var_st;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6140cb8103300cdfbe42817f799c869b, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__check_compiler );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 193;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_1 = const_str_digest_834785fa6a22a7fbb3aecd197bc423d7;
    tmp_binop_right_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_type_name.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92083 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_name;
    PyDict_SetItem( tmp_binop_right_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }
    assert( var_body.object == NULL );
    var_body.object = tmp_assign_source_1;

    tmp_assign_source_2 = Py_False;
    assert( var_st.object == NULL );
    var_st.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    // Tried code
    // Tried block of try/except
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 208;
        goto try_except_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__compile );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 208;
        goto try_except_handler_1;
    }
    tmp_binop_left_2 = var_body.object;

    tmp_binop_right_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = par_type_name.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92083 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 208;
        goto try_except_handler_1;
    }

    tmp_dict_key_2 = const_str_plain_type;
    PyDict_SetItem( tmp_binop_right_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 208;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_2 = par_headers.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91716 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 209;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_3 = par_include_dirs.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 209;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_4 = const_str_plain_c;
    frame_function->f_lineno = 209;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 209;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_3 = Py_True;
    assert( var_st.object != NULL );
    {
        PyObject *old = var_st.object;
        var_st.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }

    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function || exception_tb->tb_lineno != frame_function->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_function, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_distutils );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_distutils );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91769 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 211;
        goto try_finally_handler_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_errors );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 211;
        goto try_finally_handler_1;
    }
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_CompileError );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 211;
        goto try_finally_handler_1;
    }
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 211;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_4 = Py_False;
    if (var_st.object == NULL)
    {
        var_st.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_st.object;
        var_st.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_1;
    branch_end_1:;
    try_except_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 214;
        goto try_finally_handler_error_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__clean );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
        goto try_finally_handler_error_1;
    }
    frame_function->f_lineno = 214;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
        goto try_finally_handler_error_1;
    }
    Py_DECREF( tmp_unused );
    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    try_finally_handler_error_1:;
    Py_XDECREF( exception_keeper_type_1 );exception_keeper_type_1 = NULL;
    Py_XDECREF( exception_keeper_value_1 );exception_keeper_value_1 = NULL;
    Py_XDECREF( exception_keeper_tb_1 );exception_keeper_tb_1 = NULL;
    goto frame_exception_exit_1;
    finally_end_1:;
    tmp_return_value = var_st.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92138 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((var_body.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_body,
            var_body.object
        );

    }
    if ((var_st.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_st,
            var_st.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_type_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_type_name,
            par_type_name.object
        );

    }
    if ((par_headers.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_headers,
            par_headers.object
        );

    }
    if ((par_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_include_dirs,
            par_include_dirs.object
        );

    }
    if ((par_library_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_library_dirs,
            par_library_dirs.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_10_check_type_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_type_name = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_include_dirs = NULL;
    PyObject *_python_par_library_dirs = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "check_type() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_type_name == key )
            {
                assert( _python_par_type_name == NULL );
                _python_par_type_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_headers == key )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_include_dirs == key )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_library_dirs == key )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_type_name, key ) == 1 )
            {
                assert( _python_par_type_name == NULL );
                _python_par_type_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_headers, key ) == 1 )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_include_dirs, key ) == 1 )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_library_dirs, key ) == 1 )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "check_type() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 5 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_type_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_type_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_type_name == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_type_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_headers = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_headers = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_include_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_include_dirs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_include_dirs == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_include_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_library_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_library_dirs = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_library_dirs == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_library_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_type_name == NULL || _python_par_headers == NULL || _python_par_include_dirs == NULL || _python_par_library_dirs == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_type_name, _python_par_headers, _python_par_include_dirs, _python_par_library_dirs };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_10_check_type_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self, _python_par_type_name, _python_par_headers, _python_par_include_dirs, _python_par_library_dirs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_type_name );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_include_dirs );
    Py_XDECREF( _python_par_library_dirs );

    return NULL;
}

static PyObject *dparse_function_10_check_type_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_10_check_type_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_check_type_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_check_type_size_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_type_name, PyObject *_python_par_headers, PyObject *_python_par_include_dirs, PyObject *_python_par_library_dirs, PyObject *_python_par_expected )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_type_name; par_type_name.object = _python_par_type_name;
    PyObjectLocalVariable par_headers; par_headers.object = _python_par_headers;
    PyObjectLocalVariable par_include_dirs; par_include_dirs.object = _python_par_include_dirs;
    PyObjectLocalVariable par_library_dirs; par_library_dirs.object = _python_par_library_dirs;
    PyObjectLocalVariable par_expected; par_expected.object = _python_par_expected;
    PyObjectLocalVariable var_body;
    PyObjectLocalVariable var_size;
    PyObjectLocalVariable var_low;
    PyObjectLocalVariable var_mid;
    PyObjectLocalVariable var_high;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_left_6;
    PyObject *tmp_binop_left_7;
    PyObject *tmp_binop_left_8;
    PyObject *tmp_binop_left_9;
    PyObject *tmp_binop_left_10;
    PyObject *tmp_binop_left_11;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_binop_right_7;
    PyObject *tmp_binop_right_8;
    PyObject *tmp_binop_right_9;
    PyObject *tmp_binop_right_10;
    PyObject *tmp_binop_right_11;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_call_arg_element_9;
    PyObject *tmp_call_arg_element_10;
    PyObject *tmp_call_arg_element_11;
    PyObject *tmp_call_arg_element_12;
    PyObject *tmp_call_arg_element_13;
    PyObject *tmp_call_arg_element_14;
    PyObject *tmp_call_arg_element_15;
    PyObject *tmp_call_arg_element_16;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2186353e2511b638d382a89167eb2f57, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 220;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__check_compiler );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 220;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = const_str_digest_a994c72ddb608e8d5536b37bc97031e9;
    assert( var_body.object == NULL );
    var_body.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__compile );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = var_body.object;

    tmp_binop_right_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_type_name.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92083 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_type;
    PyDict_SetItem( tmp_binop_right_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_headers.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91716 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_include_dirs.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = const_str_plain_c;
    frame_function->f_lineno = 235;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__clean );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 236;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_1 = par_expected.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92186 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_2 = const_str_digest_f10c2eb3648b8df67e4abac7b4880158;
    assert( var_body.object != NULL );
    {
        PyObject *old = var_body.object;
        var_body.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
        Py_DECREF( old );
    }

    tmp_iter_arg_1 = par_expected.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92186 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_3;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_4 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 250;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_for_loop_1__iter_value.object;

    if (var_size.object == NULL)
    {
        var_size.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_size.object;
        var_size.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    // Tried block of try/except
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 252;
        goto try_except_handler_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__compile );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 252;
        goto try_except_handler_1;
    }
    tmp_binop_left_2 = var_body.object;

    if ( tmp_binop_left_2 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 252;
        goto try_except_handler_1;
    }

    tmp_binop_right_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_2 = par_type_name.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92083 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 252;
        goto try_except_handler_1;
    }

    tmp_dict_key_2 = const_str_plain_type;
    PyDict_SetItem( tmp_binop_right_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = var_size.object;

    tmp_dict_key_3 = const_str_plain_size;
    PyDict_SetItem( tmp_binop_right_2, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_call_arg_element_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 252;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_6 = par_headers.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91716 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_7 = par_include_dirs.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_8 = const_str_plain_c;
    frame_function->f_lineno = 253;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 254;
        goto try_except_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__clean );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 254;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_size.object;

    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function || exception_tb->tb_lineno != frame_function->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_function, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_CompileError );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CompileError );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92240 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto try_finally_handler_1;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto try_finally_handler_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_1;
    branch_no_2:;
    try_except_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto try_finally_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto frame_exception_exit_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    branch_no_1:;
    tmp_assign_source_6 = const_str_digest_043788cad49d8c5c3c0dc9182809fb99;
    if (var_body.object == NULL)
    {
        var_body.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = var_body.object;
        var_body.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    tmp_assign_source_7 = const_int_0;
    assert( var_low.object == NULL );
    var_low.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

    tmp_assign_source_8 = const_int_0;
    assert( var_mid.object == NULL );
    var_mid.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

    loop_start_2:;
    // Tried block of try/except
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto try_except_handler_2;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__compile );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 279;
        goto try_except_handler_2;
    }
    tmp_binop_left_3 = var_body.object;

    tmp_binop_right_3 = _PyDict_NewPresized( 2 );
    tmp_dict_value_4 = par_type_name.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92083 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto try_except_handler_2;
    }

    tmp_dict_key_4 = const_str_plain_type;
    PyDict_SetItem( tmp_binop_right_3, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = var_mid.object;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92281 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto try_except_handler_2;
    }

    tmp_dict_key_5 = const_str_plain_size;
    PyDict_SetItem( tmp_binop_right_3, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_call_arg_element_9 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 279;
        goto try_except_handler_2;
    }
    tmp_call_arg_element_10 = par_headers.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91716 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 280;
        goto try_except_handler_2;
    }

    tmp_call_arg_element_11 = par_include_dirs.object;

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 280;
        goto try_except_handler_2;
    }

    tmp_call_arg_element_12 = const_str_plain_c;
    frame_function->f_lineno = 280;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_6, tmp_call_arg_element_9, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 280;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = par_self.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto try_except_handler_2;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__clean );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 281;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto loop_end_2;
    goto try_except_end_2;
    try_except_handler_2:;
    // Exception handler of try/except
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function || exception_tb->tb_lineno != frame_function->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_function, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_CompileError );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CompileError );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92240 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_2 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_binop_left_4 = var_mid.object;

    if ( tmp_binop_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92281 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_4 = const_int_pos_1;
    tmp_assign_source_9 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    if (var_low.object == NULL)
    {
        var_low.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = var_low.object;
        var_low.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    tmp_binop_left_6 = const_int_pos_2;
    tmp_binop_right_6 = var_mid.object;

    if ( tmp_binop_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92281 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_5 = BINARY_OPERATION_MUL( tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_5 = const_int_pos_1;
    tmp_assign_source_10 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    if (var_mid.object == NULL)
    {
        var_mid.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = var_mid.object;
        var_mid.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_3:;
    try_except_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_assign_source_11 = var_mid.object;

    if ( tmp_assign_source_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92281 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }

    assert( var_high.object == NULL );
    var_high.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

    loop_start_3:;
    tmp_compare_left_3 = var_low.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = var_high.object;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    goto loop_end_3;
    branch_no_4:;
    tmp_binop_left_9 = var_high.object;

    if ( tmp_binop_left_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_9 = var_low.object;

    if ( tmp_binop_right_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_8 = BINARY_OPERATION_SUB( tmp_binop_left_9, tmp_binop_right_9 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_8 = const_int_pos_2;
    tmp_binop_left_7 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    if ( tmp_binop_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_7 = var_low.object;

    if ( tmp_binop_right_7 == NULL )
    {
        Py_DECREF( tmp_binop_left_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = BINARY_OPERATION_ADD( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_left_7 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    if (var_mid.object == NULL)
    {
        var_mid.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = var_mid.object;
        var_mid.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    // Tried block of try/except
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto try_except_handler_3;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__compile );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto try_except_handler_3;
    }
    tmp_binop_left_10 = var_body.object;

    if ( tmp_binop_left_10 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto try_except_handler_3;
    }

    tmp_binop_right_10 = _PyDict_NewPresized( 2 );
    tmp_dict_value_6 = par_type_name.object;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_binop_right_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92083 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto try_except_handler_3;
    }

    tmp_dict_key_6 = const_str_plain_type;
    PyDict_SetItem( tmp_binop_right_10, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = var_mid.object;

    tmp_dict_key_7 = const_str_plain_size;
    PyDict_SetItem( tmp_binop_right_10, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_call_arg_element_13 = BINARY_OPERATION_REMAINDER( tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_right_10 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 293;
        goto try_except_handler_3;
    }
    tmp_call_arg_element_14 = par_headers.object;

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91716 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 294;
        goto try_except_handler_3;
    }

    tmp_call_arg_element_15 = par_include_dirs.object;

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 294;
        goto try_except_handler_3;
    }

    tmp_call_arg_element_16 = const_str_plain_c;
    frame_function->f_lineno = 294;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_8, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 294;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = par_self.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 295;
        goto try_except_handler_3;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__clean );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 295;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_9 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_13 = var_mid.object;

    if (var_high.object == NULL)
    {
        var_high.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
    }
    else
    {
        PyObject *old = var_high.object;
        var_high.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
        Py_DECREF( old );
    }
    goto try_except_end_3;
    try_except_handler_3:;
    // Exception handler of try/except
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function || exception_tb->tb_lineno != frame_function->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_function, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_CompileError );

    if (unlikely( tmp_compare_right_4 == NULL ))
    {
        tmp_compare_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CompileError );
    }

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92240 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 297;
        goto frame_exception_exit_1;
    }

    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_3 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_binop_left_11 = var_mid.object;

    if ( tmp_binop_left_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92281 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 298;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_11 = const_int_pos_1;
    tmp_assign_source_14 = BINARY_OPERATION_ADD( tmp_binop_left_11, tmp_binop_right_11 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto frame_exception_exit_1;
    }
    if (var_low.object == NULL)
    {
        var_low.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = var_low.object;
        var_low.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    goto branch_end_5;
    branch_no_5:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_5:;
    try_except_end_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_return_value = var_low.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((var_body.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_body,
            var_body.object
        );

    }
    if ((var_size.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_size,
            var_size.object
        );

    }
    if ((var_low.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_low,
            var_low.object
        );

    }
    if ((var_mid.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mid,
            var_mid.object
        );

    }
    if ((var_high.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_high,
            var_high.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_type_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_type_name,
            par_type_name.object
        );

    }
    if ((par_headers.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_headers,
            par_headers.object
        );

    }
    if ((par_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_include_dirs,
            par_include_dirs.object
        );

    }
    if ((par_library_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_library_dirs,
            par_library_dirs.object
        );

    }
    if ((par_expected.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_expected,
            par_expected.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_11_check_type_size_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_type_name = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_include_dirs = NULL;
    PyObject *_python_par_library_dirs = NULL;
    PyObject *_python_par_expected = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "check_type_size() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_type_name == key )
            {
                assert( _python_par_type_name == NULL );
                _python_par_type_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_headers == key )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_include_dirs == key )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_library_dirs == key )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_expected == key )
            {
                assert( _python_par_expected == NULL );
                _python_par_expected = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_type_name, key ) == 1 )
            {
                assert( _python_par_type_name == NULL );
                _python_par_type_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_headers, key ) == 1 )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_include_dirs, key ) == 1 )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_library_dirs, key ) == 1 )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_expected, key ) == 1 )
            {
                assert( _python_par_expected == NULL );
                _python_par_expected = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "check_type_size() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 6 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 6  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_type_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_type_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_type_name == NULL )
    {
        if ( 1 + self->m_defaults_given >= 6  )
        {
            _python_par_type_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_headers = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 2 + self->m_defaults_given >= 6  )
        {
            _python_par_headers = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_include_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_include_dirs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_include_dirs == NULL )
    {
        if ( 3 + self->m_defaults_given >= 6  )
        {
            _python_par_include_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_library_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_library_dirs = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_library_dirs == NULL )
    {
        if ( 4 + self->m_defaults_given >= 6  )
        {
            _python_par_library_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 5 < args_given ))
    {
         if (unlikely( _python_par_expected != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_expected = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_expected == NULL )
    {
        if ( 5 + self->m_defaults_given >= 6  )
        {
            _python_par_expected = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_type_name == NULL || _python_par_headers == NULL || _python_par_include_dirs == NULL || _python_par_library_dirs == NULL || _python_par_expected == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_type_name, _python_par_headers, _python_par_include_dirs, _python_par_library_dirs, _python_par_expected };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_11_check_type_size_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self, _python_par_type_name, _python_par_headers, _python_par_include_dirs, _python_par_library_dirs, _python_par_expected );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_type_name );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_include_dirs );
    Py_XDECREF( _python_par_library_dirs );
    Py_XDECREF( _python_par_expected );

    return NULL;
}

static PyObject *dparse_function_11_check_type_size_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_11_check_type_size_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_check_type_size_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_check_func_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_func, PyObject *_python_par_headers, PyObject *_python_par_include_dirs, PyObject *_python_par_libraries, PyObject *_python_par_library_dirs, PyObject *_python_par_decl, PyObject *_python_par_call, PyObject *_python_par_call_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_headers; par_headers.object = _python_par_headers;
    PyObjectLocalVariable par_include_dirs; par_include_dirs.object = _python_par_include_dirs;
    PyObjectLocalVariable par_libraries; par_libraries.object = _python_par_libraries;
    PyObjectLocalVariable par_library_dirs; par_library_dirs.object = _python_par_library_dirs;
    PyObjectLocalVariable par_decl; par_decl.object = _python_par_decl;
    PyObjectLocalVariable par_call; par_call.object = _python_par_call;
    PyObjectLocalVariable par_call_args; par_call_args.object = _python_par_call_args;
    PyObjectLocalVariable var_body;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_call_arg_element_9;
    PyObject *tmp_call_arg_element_10;
    PyObject *tmp_call_arg_element_11;
    PyObject *tmp_call_arg_element_12;
    PyObject *tmp_call_arg_element_13;
    PyObject *tmp_call_arg_element_14;
    PyObject *tmp_call_arg_element_15;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
    PyObject *tmp_called_10;
    PyObject *tmp_called_11;
    PyObject *tmp_called_12;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_937d2fd4f7c8d909356163e26e2b2013, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__check_compiler );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 307;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_body.object == NULL );
    var_body.object = tmp_assign_source_1;

    tmp_cond_value_1 = par_decl.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92429 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = var_body.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = const_str_digest_ed259a80645f3a7bede8cf1ba7bb6083;
    tmp_binop_right_1 = par_func.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 310;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_3 = var_body.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_digest_38d2196e635c6c2a64b22d6902a408b2;
    frame_function->f_lineno = 315;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = var_body.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = const_str_digest_6f185b10155bee162894765e7cf96e04;
    tmp_binop_right_2 = par_func.object;

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 316;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 316;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = var_body.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_digest_f2ee5aca71a929254acb780763f41937;
    frame_function->f_lineno = 317;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = var_body.object;

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 318;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_digest_e53bc71011dd8d6c0aaa5b52a991dad2;
    frame_function->f_lineno = 318;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 318;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_2 = par_call.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92479 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_compare_left_1 = par_call_args.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92529 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 320;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if (tmp_is_1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_2 = const_str_empty;
    if (par_call_args.object == NULL)
    {
        par_call_args.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
    }
    else
    {
        PyObject *old = par_call_args.object;
        par_call_args.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
        Py_DECREF( old );
    }
    branch_no_3:;
    tmp_source_name_7 = var_body.object;

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_append );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_3 = const_str_digest_0ca05b236e68712acc4f787b084a4ac0;
    tmp_binop_right_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_func.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_call_args.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92529 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_6 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 322;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_8 = var_body.object;

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_append );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_4 = const_str_digest_2f70a2cccbb36ff72dce232efbec2fdc;
    tmp_binop_right_4 = par_func.object;

    if ( tmp_binop_right_4 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 324;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_2:;
    tmp_source_name_9 = var_body.object;

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = const_str_digest_c26ba559a5f34d46a49fafed87946fb7;
    frame_function->f_lineno = 325;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = var_body.object;

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_append );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = const_str_chr_125;
    frame_function->f_lineno = 326;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = const_str_newline;
    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_join );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 327;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = var_body.object;

    frame_function->f_lineno = 327;
    tmp_binop_left_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 327;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_5 = const_str_newline;
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 327;
        goto frame_exception_exit_1;
    }
    assert( var_body.object != NULL );
    {
        PyObject *old = var_body.object;
        var_body.object = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_source_name_12 = par_self.object;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 329;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_try_link );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 329;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = var_body.object;

    tmp_call_arg_element_12 = par_headers.object;

    if ( tmp_call_arg_element_12 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91716 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 329;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = par_include_dirs.object;

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 329;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = par_libraries.object;

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_15 = par_library_dirs.object;

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83284 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 330;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_12, tmp_call_arg_element_11, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((var_body.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_body,
            var_body.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            par_func.object
        );

    }
    if ((par_headers.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_headers,
            par_headers.object
        );

    }
    if ((par_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_include_dirs,
            par_include_dirs.object
        );

    }
    if ((par_libraries.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_libraries,
            par_libraries.object
        );

    }
    if ((par_library_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_library_dirs,
            par_library_dirs.object
        );

    }
    if ((par_decl.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_decl,
            par_decl.object
        );

    }
    if ((par_call.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_call,
            par_call.object
        );

    }
    if ((par_call_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_call_args,
            par_call_args.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_12_check_func_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_include_dirs = NULL;
    PyObject *_python_par_libraries = NULL;
    PyObject *_python_par_library_dirs = NULL;
    PyObject *_python_par_decl = NULL;
    PyObject *_python_par_call = NULL;
    PyObject *_python_par_call_args = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "check_func() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_func == key )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_headers == key )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_include_dirs == key )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_libraries == key )
            {
                assert( _python_par_libraries == NULL );
                _python_par_libraries = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_library_dirs == key )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_decl == key )
            {
                assert( _python_par_decl == NULL );
                _python_par_decl = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_call == key )
            {
                assert( _python_par_call == NULL );
                _python_par_call = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_call_args == key )
            {
                assert( _python_par_call_args == NULL );
                _python_par_call_args = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_func, key ) == 1 )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_headers, key ) == 1 )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_include_dirs, key ) == 1 )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_libraries, key ) == 1 )
            {
                assert( _python_par_libraries == NULL );
                _python_par_libraries = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_library_dirs, key ) == 1 )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_decl, key ) == 1 )
            {
                assert( _python_par_decl == NULL );
                _python_par_decl = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_call, key ) == 1 )
            {
                assert( _python_par_call == NULL );
                _python_par_call = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_call_args, key ) == 1 )
            {
                assert( _python_par_call_args == NULL );
                _python_par_call_args = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "check_func() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 9 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 9  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_func == NULL )
    {
        if ( 1 + self->m_defaults_given >= 9  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_headers = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 2 + self->m_defaults_given >= 9  )
        {
            _python_par_headers = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_include_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_include_dirs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_include_dirs == NULL )
    {
        if ( 3 + self->m_defaults_given >= 9  )
        {
            _python_par_include_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_libraries != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_libraries = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_libraries == NULL )
    {
        if ( 4 + self->m_defaults_given >= 9  )
        {
            _python_par_libraries = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 5 < args_given ))
    {
         if (unlikely( _python_par_library_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_library_dirs = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_library_dirs == NULL )
    {
        if ( 5 + self->m_defaults_given >= 9  )
        {
            _python_par_library_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 6 < args_given ))
    {
         if (unlikely( _python_par_decl != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_decl = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_decl == NULL )
    {
        if ( 6 + self->m_defaults_given >= 9  )
        {
            _python_par_decl = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 7 < args_given ))
    {
         if (unlikely( _python_par_call != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_call = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_call == NULL )
    {
        if ( 7 + self->m_defaults_given >= 9  )
        {
            _python_par_call = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 8 < args_given ))
    {
         if (unlikely( _python_par_call_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_call_args = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_call_args == NULL )
    {
        if ( 8 + self->m_defaults_given >= 9  )
        {
            _python_par_call_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_func == NULL || _python_par_headers == NULL || _python_par_include_dirs == NULL || _python_par_libraries == NULL || _python_par_library_dirs == NULL || _python_par_decl == NULL || _python_par_call == NULL || _python_par_call_args == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_func, _python_par_headers, _python_par_include_dirs, _python_par_libraries, _python_par_library_dirs, _python_par_decl, _python_par_call, _python_par_call_args };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_12_check_func_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self, _python_par_func, _python_par_headers, _python_par_include_dirs, _python_par_libraries, _python_par_library_dirs, _python_par_decl, _python_par_call, _python_par_call_args );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_include_dirs );
    Py_XDECREF( _python_par_libraries );
    Py_XDECREF( _python_par_library_dirs );
    Py_XDECREF( _python_par_decl );
    Py_XDECREF( _python_par_call );
    Py_XDECREF( _python_par_call_args );

    return NULL;
}

static PyObject *dparse_function_12_check_func_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 9 )
    {
        return impl_function_12_check_func_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_check_func_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_check_funcs_once_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_funcs, PyObject *_python_par_headers, PyObject *_python_par_include_dirs, PyObject *_python_par_libraries, PyObject *_python_par_library_dirs, PyObject *_python_par_decl, PyObject *_python_par_call, PyObject *_python_par_call_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_funcs; par_funcs.object = _python_par_funcs;
    PyObjectLocalVariable par_headers; par_headers.object = _python_par_headers;
    PyObjectLocalVariable par_include_dirs; par_include_dirs.object = _python_par_include_dirs;
    PyObjectLocalVariable par_libraries; par_libraries.object = _python_par_libraries;
    PyObjectLocalVariable par_library_dirs; par_library_dirs.object = _python_par_library_dirs;
    PyObjectLocalVariable par_decl; par_decl.object = _python_par_decl;
    PyObjectLocalVariable par_call; par_call.object = _python_par_call;
    PyObjectLocalVariable par_call_args; par_call_args.object = _python_par_call_args;
    PyObjectLocalVariable var_body;
    PyObjectLocalVariable var_f;
    PyObjectLocalVariable var_v;
    PyObjectLocalVariable var_func;
    PyObjectLocalVariable var_args;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_and_2__value_1;
    PyObjectTempVariable tmp_and_2__value_2;
    PyObjectTempVariable tmp_for_loop_4__for_iterator;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_left_6;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_call_arg_element_9;
    PyObject *tmp_call_arg_element_10;
    PyObject *tmp_call_arg_element_11;
    PyObject *tmp_call_arg_element_12;
    PyObject *tmp_call_arg_element_13;
    PyObject *tmp_call_arg_element_14;
    PyObject *tmp_call_arg_element_15;
    PyObject *tmp_call_arg_element_16;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
    PyObject *tmp_called_10;
    PyObject *tmp_called_11;
    PyObject *tmp_called_12;
    PyObject *tmp_called_13;
    PyObject *tmp_called_14;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    int tmp_tried_lineno_8;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a1b34c72db13201c73b0d2dd9ae5590e, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 359;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__check_compiler );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 359;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 359;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 359;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_body.object == NULL );
    var_body.object = tmp_assign_source_1;

    tmp_cond_value_1 = par_decl.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92429 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_decl.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92429 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_items );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 362;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_2;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_3 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 362;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value.object;

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_5 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( !ERROR_OCCURED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 362;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_6 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( !ERROR_OCCURED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 362;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_1 ); assert( PyIter_Check( tmp_iterator_name_1 ) );

    tmp_iterator_attempt_1 = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt_1 == NULL ))
    {
        // TODO: Could first fetch, then check, should be faster.
        if ( !ERROR_OCCURED() )
        {
        }
        else if ( PyErr_ExceptionMatches( PyExc_StopIteration ))
        {
            PyErr_Clear();
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

            goto try_finally_handler_2;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_1 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_2;
    }
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1.object;

    if (var_f.object == NULL)
    {
        var_f.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = var_f.object;
        var_f.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2.object;

    if (var_v.object == NULL)
    {
        var_v.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_v.object;
        var_v.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_cond_value_2 = var_v.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4481 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 363;
        goto try_finally_handler_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 363;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = var_body.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }
    tmp_binop_left_1 = const_str_digest_ed259a80645f3a7bede8cf1ba7bb6083;
    tmp_binop_right_1 = var_f.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6491 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 364;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto try_finally_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto frame_exception_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;
    branch_no_1:;
    tmp_source_name_4 = var_body.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 367;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 367;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_digest_38d2196e635c6c2a64b22d6902a408b2;
    frame_function->f_lineno = 367;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 367;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_3 = par_funcs.object;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88731 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_9;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_10 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 368;
            goto try_finally_handler_3;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_assign_source_11 = tmp_for_loop_2__iter_value.object;

    if (var_func.object == NULL)
    {
        var_func.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = var_func.object;
        var_func.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    tmp_source_name_5 = var_body.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_3;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 369;
        goto try_finally_handler_3;
    }
    tmp_binop_left_2 = const_str_digest_6f185b10155bee162894765e7cf96e04;
    tmp_binop_right_2 = var_func.object;

    tmp_call_arg_element_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 369;
        goto try_finally_handler_3;
    }
    frame_function->f_lineno = 369;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 369;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto try_finally_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto frame_exception_exit_1;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_source_name_6 = var_body.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 370;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_digest_f2ee5aca71a929254acb780763f41937;
    frame_function->f_lineno = 370;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = var_body.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_append );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_digest_e53bc71011dd8d6c0aaa5b52a991dad2;
    frame_function->f_lineno = 372;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_3 = par_call.object;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92479 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_iter_arg_4 = par_funcs.object;

    if ( tmp_iter_arg_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88731 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 374;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator.object == NULL );
    tmp_for_loop_3__for_iterator.object = tmp_assign_source_12;

    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_13 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 374;
            goto try_finally_handler_4;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_assign_source_14 = tmp_for_loop_3__iter_value.object;

    if (var_f.object == NULL)
    {
        var_f.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = var_f.object;
        var_f.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_f.object;

    tmp_compexpr_right_1 = par_call.object;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92479 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 375;
        goto try_finally_handler_6;
    }

    tmp_assign_source_15 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 375;
        goto try_finally_handler_6;
    }
    if (tmp_and_1__value_1.object == NULL)
    {
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
    }
    else
    {
        PyObject *old = tmp_and_1__value_1.object;
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
        Py_DECREF( old );
    }
    tmp_cond_value_5 = tmp_and_1__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 375;
        goto try_finally_handler_6;
    }
    if (tmp_cond_truth_5 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_1 = par_call.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92479 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 375;
        goto try_finally_handler_7;
    }

    tmp_subscr_subscript_1 = var_f.object;

    tmp_cond_value_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 375;
        goto try_finally_handler_7;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_6;
    }

    goto finally_end_4;
    finally_end_4:;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_4 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_4 );
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_5;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 375;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_cond_value_4 );
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_cond_value_6 = NULL;
    // Tried code
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_assign_source_16 = par_call_args.object;

    if ( tmp_assign_source_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92529 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_9;
    }

    if (tmp_and_2__value_2.object == NULL)
    {
        tmp_and_2__value_2.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
    }
    else
    {
        PyObject *old = tmp_and_2__value_2.object;
        tmp_and_2__value_2.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
        Py_DECREF( old );
    }
    tmp_cond_value_7 = tmp_and_2__value_2.object;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_9;
    }
    if (tmp_cond_truth_7 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_2.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_2.object );
        tmp_and_2__value_2.object = NULL;
    }

    assert( tmp_result != false );
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_compexpr_left_2 = var_f.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6491 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_12;
    }

    tmp_compexpr_right_2 = par_call_args.object;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92529 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_12;
    }

    tmp_assign_source_17 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_12;
    }
    if (tmp_and_2__value_1.object == NULL)
    {
        tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
    }
    else
    {
        PyObject *old = tmp_and_2__value_1.object;
        tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
        Py_DECREF( old );
    }
    tmp_cond_value_8 = tmp_and_2__value_1.object;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_12;
    }
    if (tmp_cond_truth_8 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_2 = par_call_args.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92529 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_13;
    }

    tmp_subscr_subscript_2 = var_f.object;

    if ( tmp_subscr_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6491 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_13;
    }

    tmp_unary_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_13;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_13:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_12;
    }

    goto finally_end_6;
    finally_end_6:;
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_unary_arg_1 = tmp_and_2__value_1.object;

    Py_INCREF( tmp_unary_arg_1 );
    condexpr_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_11;
    }

    goto finally_end_7;
    finally_end_7:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto try_finally_handler_10;
    }

    goto finally_end_8;
    finally_end_8:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto try_finally_handler_9;
    }

    goto finally_end_9;
    finally_end_9:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_unary_arg_1 = tmp_and_2__value_2.object;

    Py_INCREF( tmp_unary_arg_1 );
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto try_finally_handler_8;
    }

    goto finally_end_10;
    finally_end_10:;
    tmp_cond_value_6 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    Py_DECREF( tmp_unary_arg_1 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_8;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_2.object );
    tmp_and_2__value_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto try_finally_handler_5;
    }

    goto finally_end_11;
    finally_end_11:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_5;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_18 = const_str_empty;
    if (var_args.object == NULL)
    {
        var_args.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
    }
    else
    {
        PyObject *old = var_args.object;
        var_args.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_subscr_target_3 = par_call_args.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92529 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 379;
        goto try_finally_handler_5;
    }

    tmp_subscr_subscript_3 = var_f.object;

    if ( tmp_subscr_subscript_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6491 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 379;
        goto try_finally_handler_5;
    }

    tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 379;
        goto try_finally_handler_5;
    }
    if (var_args.object == NULL)
    {
        var_args.object = tmp_assign_source_19;
    }
    else
    {
        PyObject *old = var_args.object;
        var_args.object = tmp_assign_source_19;
        Py_DECREF( old );
    }
    branch_end_5:;
    tmp_source_name_8 = var_body.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 380;
        goto try_finally_handler_5;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_append );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto try_finally_handler_5;
    }
    tmp_binop_left_3 = const_str_digest_0ca05b236e68712acc4f787b084a4ac0;
    tmp_binop_right_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_f.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6491 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 380;
        goto try_finally_handler_5;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_args.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_6 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 380;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 380;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_9 = var_body.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto try_finally_handler_5;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto try_finally_handler_5;
    }
    tmp_binop_left_4 = const_str_digest_2f70a2cccbb36ff72dce232efbec2fdc;
    tmp_binop_right_4 = var_f.object;

    if ( tmp_binop_right_4 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6491 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto try_finally_handler_5;
    }

    tmp_call_arg_element_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 382;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 382;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_unused );
    branch_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto try_finally_handler_4;
    }

    goto finally_end_12;
    finally_end_12:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_13 != NULL )
    {
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;

        goto frame_exception_exit_1;
    }

    goto finally_end_13;
    finally_end_13:;
    goto branch_end_3;
    branch_no_3:;
    tmp_iter_arg_5 = par_funcs.object;

    if ( tmp_iter_arg_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88731 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator.object == NULL );
    tmp_for_loop_4__for_iterator.object = tmp_assign_source_20;

    // Tried code
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator.object;

    tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_4 );
    if (tmp_assign_source_21 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_4;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 384;
            goto try_finally_handler_14;
        }
    }

    if (tmp_for_loop_4__iter_value.object == NULL)
    {
        tmp_for_loop_4__iter_value.object = tmp_assign_source_21;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__iter_value.object;
        tmp_for_loop_4__iter_value.object = tmp_assign_source_21;
        Py_DECREF( old );
    }
    tmp_assign_source_22 = tmp_for_loop_4__iter_value.object;

    if (var_f.object == NULL)
    {
        var_f.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
    }
    else
    {
        PyObject *old = var_f.object;
        var_f.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
        Py_DECREF( old );
    }
    tmp_source_name_10 = var_body.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 385;
        goto try_finally_handler_14;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_append );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 385;
        goto try_finally_handler_14;
    }
    tmp_binop_left_5 = const_str_digest_2f70a2cccbb36ff72dce232efbec2fdc;
    tmp_binop_right_5 = var_f.object;

    tmp_call_arg_element_8 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 385;
        goto try_finally_handler_14;
    }
    frame_function->f_lineno = 385;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 385;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto try_finally_handler_14;
    }
    goto loop_start_4;
    loop_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_4__iter_value.object );
    tmp_for_loop_4__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator.object );
    tmp_for_loop_4__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_14 != NULL )
    {
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;

        goto frame_exception_exit_1;
    }

    goto finally_end_14;
    finally_end_14:;
    branch_end_3:;
    tmp_source_name_11 = var_body.object;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_append );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = const_str_digest_c26ba559a5f34d46a49fafed87946fb7;
    frame_function->f_lineno = 386;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_12 = var_body.object;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_append );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = const_str_chr_125;
    frame_function->f_lineno = 387;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_13 = const_str_newline;
    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_join );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = var_body.object;

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 388;
    tmp_binop_left_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_6 = const_str_newline;
    tmp_assign_source_23 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }
    if (var_body.object == NULL)
    {
        var_body.object = tmp_assign_source_23;
    }
    else
    {
        PyObject *old = var_body.object;
        var_body.object = tmp_assign_source_23;
        Py_DECREF( old );
    }
    tmp_source_name_14 = par_self.object;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_try_link );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = var_body.object;

    tmp_call_arg_element_13 = par_headers.object;

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91716 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = par_include_dirs.object;

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_15 = par_libraries.object;

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_16 = par_library_dirs.object;

    if ( tmp_call_arg_element_16 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83284 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 391;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_14, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((var_body.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_body,
            var_body.object
        );

    }
    if ((var_f.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_f,
            var_f.object
        );

    }
    if ((var_v.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_v,
            var_v.object
        );

    }
    if ((var_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            var_func.object
        );

    }
    if ((var_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            var_args.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_funcs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_funcs,
            par_funcs.object
        );

    }
    if ((par_headers.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_headers,
            par_headers.object
        );

    }
    if ((par_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_include_dirs,
            par_include_dirs.object
        );

    }
    if ((par_libraries.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_libraries,
            par_libraries.object
        );

    }
    if ((par_library_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_library_dirs,
            par_library_dirs.object
        );

    }
    if ((par_decl.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_decl,
            par_decl.object
        );

    }
    if ((par_call.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_call,
            par_call.object
        );

    }
    if ((par_call_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_call_args,
            par_call_args.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_13_check_funcs_once_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_funcs = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_include_dirs = NULL;
    PyObject *_python_par_libraries = NULL;
    PyObject *_python_par_library_dirs = NULL;
    PyObject *_python_par_decl = NULL;
    PyObject *_python_par_call = NULL;
    PyObject *_python_par_call_args = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "check_funcs_once() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_funcs == key )
            {
                assert( _python_par_funcs == NULL );
                _python_par_funcs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_headers == key )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_include_dirs == key )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_libraries == key )
            {
                assert( _python_par_libraries == NULL );
                _python_par_libraries = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_library_dirs == key )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_decl == key )
            {
                assert( _python_par_decl == NULL );
                _python_par_decl = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_call == key )
            {
                assert( _python_par_call == NULL );
                _python_par_call = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_call_args == key )
            {
                assert( _python_par_call_args == NULL );
                _python_par_call_args = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_funcs, key ) == 1 )
            {
                assert( _python_par_funcs == NULL );
                _python_par_funcs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_headers, key ) == 1 )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_include_dirs, key ) == 1 )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_libraries, key ) == 1 )
            {
                assert( _python_par_libraries == NULL );
                _python_par_libraries = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_library_dirs, key ) == 1 )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_decl, key ) == 1 )
            {
                assert( _python_par_decl == NULL );
                _python_par_decl = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_call, key ) == 1 )
            {
                assert( _python_par_call == NULL );
                _python_par_call = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_call_args, key ) == 1 )
            {
                assert( _python_par_call_args == NULL );
                _python_par_call_args = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "check_funcs_once() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 9 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 9  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_funcs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_funcs = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_funcs == NULL )
    {
        if ( 1 + self->m_defaults_given >= 9  )
        {
            _python_par_funcs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_headers = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 2 + self->m_defaults_given >= 9  )
        {
            _python_par_headers = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_include_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_include_dirs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_include_dirs == NULL )
    {
        if ( 3 + self->m_defaults_given >= 9  )
        {
            _python_par_include_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_libraries != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_libraries = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_libraries == NULL )
    {
        if ( 4 + self->m_defaults_given >= 9  )
        {
            _python_par_libraries = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 5 < args_given ))
    {
         if (unlikely( _python_par_library_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_library_dirs = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_library_dirs == NULL )
    {
        if ( 5 + self->m_defaults_given >= 9  )
        {
            _python_par_library_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 6 < args_given ))
    {
         if (unlikely( _python_par_decl != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_decl = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_decl == NULL )
    {
        if ( 6 + self->m_defaults_given >= 9  )
        {
            _python_par_decl = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 7 < args_given ))
    {
         if (unlikely( _python_par_call != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_call = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_call == NULL )
    {
        if ( 7 + self->m_defaults_given >= 9  )
        {
            _python_par_call = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 8 < args_given ))
    {
         if (unlikely( _python_par_call_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_call_args = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_call_args == NULL )
    {
        if ( 8 + self->m_defaults_given >= 9  )
        {
            _python_par_call_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 9 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_funcs == NULL || _python_par_headers == NULL || _python_par_include_dirs == NULL || _python_par_libraries == NULL || _python_par_library_dirs == NULL || _python_par_decl == NULL || _python_par_call == NULL || _python_par_call_args == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_funcs, _python_par_headers, _python_par_include_dirs, _python_par_libraries, _python_par_library_dirs, _python_par_decl, _python_par_call, _python_par_call_args };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_13_check_funcs_once_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self, _python_par_funcs, _python_par_headers, _python_par_include_dirs, _python_par_libraries, _python_par_library_dirs, _python_par_decl, _python_par_call, _python_par_call_args );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_funcs );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_include_dirs );
    Py_XDECREF( _python_par_libraries );
    Py_XDECREF( _python_par_library_dirs );
    Py_XDECREF( _python_par_decl );
    Py_XDECREF( _python_par_call );
    Py_XDECREF( _python_par_call_args );

    return NULL;
}

static PyObject *dparse_function_13_check_funcs_once_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 9 )
    {
        return impl_function_13_check_funcs_once_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_check_funcs_once_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_check_inline_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_44b34996e74c1e69fdc48b5e713301d5, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_check_inline );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_check_inline );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92584 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_self.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 396;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_14_check_inline_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "check_inline() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "check_inline() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_14_check_inline_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_14_check_inline_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_14_check_inline_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_check_inline_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_check_compiler_gcc4_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c33b7ed3b31ee99e2194fb0298314e9d, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_check_compiler_gcc4 );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_check_compiler_gcc4 );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92625 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_self.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 400;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_15_check_compiler_gcc4_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "check_compiler_gcc4() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "check_compiler_gcc4() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_15_check_compiler_gcc4_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_15_check_compiler_gcc4_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_15_check_compiler_gcc4_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_check_compiler_gcc4_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_get_output_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_body, PyObject *_python_par_headers, PyObject *_python_par_include_dirs, PyObject *_python_par_libraries, PyObject *_python_par_library_dirs, PyObject *_python_par_lang, PyObject *_python_par_use_tee )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_body; par_body.object = _python_par_body;
    PyObjectLocalVariable par_headers; par_headers.object = _python_par_headers;
    PyObjectLocalVariable par_include_dirs; par_include_dirs.object = _python_par_include_dirs;
    PyObjectLocalVariable par_libraries; par_libraries.object = _python_par_libraries;
    PyObjectLocalVariable par_library_dirs; par_library_dirs.object = _python_par_library_dirs;
    PyObjectLocalVariable par_lang; par_lang.object = _python_par_lang;
    PyObjectLocalVariable par_use_tee; par_use_tee.object = _python_par_use_tee;
    PyObjectLocalVariable var_CompileError;
    PyObjectLocalVariable var_LinkError;
    PyObjectLocalVariable var_exitcode;
    PyObjectLocalVariable var_output;
    PyObjectLocalVariable var_grabber;
    PyObjectLocalVariable var_src;
    PyObjectLocalVariable var_obj;
    PyObjectLocalVariable var_exe;
    PyObjectLocalVariable var_exitstatus;
    PyObjectLocalVariable var_sig;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__element_3;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
    PyObjectTempVariable tmp_tuple_unpack_3__element_2;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_call_arg_element_9;
    PyObject *tmp_call_arg_element_10;
    PyObject *tmp_call_arg_element_11;
    PyObject *tmp_call_arg_element_12;
    PyObject *tmp_call_arg_element_13;
    PyObject *tmp_call_arg_element_14;
    PyObject *tmp_call_arg_element_15;
    PyObject *tmp_call_arg_element_16;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
    PyObject *tmp_called_10;
    PyObject *tmp_called_11;
    PyObject *tmp_called_12;
    PyObject *tmp_called_13;
    PyObject *tmp_called_14;
    PyObject *tmp_called_15;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_attempt_3;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d9c81f1dfef3abd51f79c3d30908f6e6, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 409;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_2211aabd8b83de8c0fabab760dc5ff68;
    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6864 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 414;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 414;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 414;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_CompileError.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_CompileError,
            var_CompileError.object
        );

    }
    if ((var_LinkError.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_LinkError,
            var_LinkError.object
        );

    }
    if ((var_exitcode.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_exitcode,
            var_exitcode.object
        );

    }
    if ((var_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_output,
            var_output.object
        );

    }
    if ((var_grabber.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_grabber,
            var_grabber.object
        );

    }
    if ((var_src.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_src,
            var_src.object
        );

    }
    if ((var_obj.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_obj,
            var_obj.object
        );

    }
    if ((var_exe.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_exe,
            var_exe.object
        );

    }
    if ((var_exitstatus.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_exitstatus,
            var_exitstatus.object
        );

    }
    if ((var_sig.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_sig,
            var_sig.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_body.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_body,
            par_body.object
        );

    }
    if ((par_headers.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_headers,
            par_headers.object
        );

    }
    if ((par_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_include_dirs,
            par_include_dirs.object
        );

    }
    if ((par_libraries.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_libraries,
            par_libraries.object
        );

    }
    if ((par_library_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_library_dirs,
            par_library_dirs.object
        );

    }
    if ((par_lang.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_lang,
            par_lang.object
        );

    }
    if ((par_use_tee.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_use_tee,
            par_use_tee.object
        );

    }
    frame_function->f_lineno = 415;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_8acec9b707fb08fa95386d8360c9e9fc, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_CompileError_str_plain_LinkError_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_CompileError );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }
    assert( var_CompileError.object == NULL );
    var_CompileError.object = tmp_assign_source_1;

    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_CompileError.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_CompileError,
            var_CompileError.object
        );

    }
    if ((var_LinkError.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_LinkError,
            var_LinkError.object
        );

    }
    if ((var_exitcode.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_exitcode,
            var_exitcode.object
        );

    }
    if ((var_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_output,
            var_output.object
        );

    }
    if ((var_grabber.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_grabber,
            var_grabber.object
        );

    }
    if ((var_src.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_src,
            var_src.object
        );

    }
    if ((var_obj.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_obj,
            var_obj.object
        );

    }
    if ((var_exe.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_exe,
            var_exe.object
        );

    }
    if ((var_exitstatus.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_exitstatus,
            var_exitstatus.object
        );

    }
    if ((var_sig.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_sig,
            var_sig.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_body.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_body,
            par_body.object
        );

    }
    if ((par_headers.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_headers,
            par_headers.object
        );

    }
    if ((par_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_include_dirs,
            par_include_dirs.object
        );

    }
    if ((par_libraries.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_libraries,
            par_libraries.object
        );

    }
    if ((par_library_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_library_dirs,
            par_library_dirs.object
        );

    }
    if ((par_lang.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_lang,
            par_lang.object
        );

    }
    if ((par_use_tee.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_use_tee,
            par_use_tee.object
        );

    }
    frame_function->f_lineno = 415;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_8acec9b707fb08fa95386d8360c9e9fc, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_CompileError_str_plain_LinkError_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_LinkError );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }
    assert( var_LinkError.object == NULL );
    var_LinkError.object = tmp_assign_source_2;

    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 416;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__check_compiler );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 416;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 416;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 416;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code
    tmp_iter_arg_1 = const_tuple_int_pos_255_str_empty_tuple;
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 417;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_3;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_4 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( !ERROR_OCCURED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 417;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_4;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_5 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( !ERROR_OCCURED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 417;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_5;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_1 ); assert( PyIter_Check( tmp_iterator_name_1 ) );

    tmp_iterator_attempt_1 = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt_1 == NULL ))
    {
        // TODO: Could first fetch, then check, should be faster.
        if ( !ERROR_OCCURED() )
        {
        }
        else if ( PyErr_ExceptionMatches( PyExc_StopIteration ))
        {
            PyErr_Clear();
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

            goto try_finally_handler_1;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_1 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_1;
    }
    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1.object;

    assert( var_exitcode.object == NULL );
    var_exitcode.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2.object;

    assert( var_output.object == NULL );
    var_output.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    // Tried block of try/except
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_GrabStdout );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GrabStdout );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92673 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 419;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 419;
    tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 419;
        goto try_except_handler_1;
    }
    assert( var_grabber.object == NULL );
    var_grabber.object = tmp_assign_source_8;

    // Tried block of try/except
    // Tried code
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 421;
        goto try_finally_handler_2;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__link );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 421;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_3 = par_body.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47948 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 421;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_4 = par_headers.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91716 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 421;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_5 = par_include_dirs.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 421;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_6 = par_libraries.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 422;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_7 = par_library_dirs.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83284 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 422;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_8 = par_lang.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 17070 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 422;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 422;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS6( tmp_called_4, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 422;
        goto try_finally_handler_2;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 421;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_9;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_10 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( !ERROR_OCCURED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 421;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_10;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_11 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( !ERROR_OCCURED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 421;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_11;

    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_12 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 2 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( !ERROR_OCCURED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 421;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_3.object == NULL );
    tmp_tuple_unpack_2__element_3.object = tmp_assign_source_12;

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_2 ); assert( PyIter_Check( tmp_iterator_name_2 ) );

    tmp_iterator_attempt_2 = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

    if (likely( tmp_iterator_attempt_2 == NULL ))
    {
        // TODO: Could first fetch, then check, should be faster.
        if ( !ERROR_OCCURED() )
        {
        }
        else if ( PyErr_ExceptionMatches( PyExc_StopIteration ))
        {
            PyErr_Clear();
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

            goto try_finally_handler_2;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_2 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_2;
    }
    tmp_assign_source_13 = tmp_tuple_unpack_2__element_1.object;

    assert( var_src.object == NULL );
    var_src.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

    tmp_assign_source_14 = tmp_tuple_unpack_2__element_2.object;

    assert( var_obj.object == NULL );
    var_obj.object = INCREASE_REFCOUNT( tmp_assign_source_14 );

    tmp_assign_source_15 = tmp_tuple_unpack_2__element_3.object;

    assert( var_exe.object == NULL );
    var_exe.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2.object );
    tmp_tuple_unpack_2__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3.object );
    tmp_tuple_unpack_2__element_3.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_except_handler_2;
    }

    goto finally_end_2;
    finally_end_2:;
    tmp_source_name_4 = var_grabber.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92712 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 423;
        goto try_except_handler_2;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_restore );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 423;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 423;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 423;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto try_except_end_2;
    try_except_handler_2:;
    // Exception handler of try/except
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function || exception_tb->tb_lineno != frame_function->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_function, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_source_name_5 = var_grabber.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92712 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 425;
        goto try_except_handler_1;
    }

    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_data );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
        goto try_except_handler_1;
    }
    if (var_output.object == NULL)
    {
        var_output.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = var_output.object;
        var_output.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    tmp_source_name_6 = var_grabber.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92712 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto try_except_handler_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_restore );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 426;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 426;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 426;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_1;
    try_except_end_2:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 428;
        goto try_except_handler_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 428;
        goto try_except_handler_1;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 428;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_9 = const_str_dot;
    tmp_call_arg_element_10 = var_exe.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92765 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 428;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 428;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 428;
        goto try_except_handler_1;
    }
    if (var_exe.object == NULL)
    {
        var_exe.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = var_exe.object;
        var_exe.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    // Tried code
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_exec_command );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exec_command );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80776 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 429;
        goto try_finally_handler_3;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_exe.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = const_str_dot;
    tmp_dict_key_1 = const_str_plain_execute_in;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_use_tee.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92814 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 430;
        goto try_finally_handler_3;
    }

    tmp_dict_key_2 = const_str_plain_use_tee;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 430;
    tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_8, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 430;
        goto try_finally_handler_3;
    }
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 429;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__source_iter.object == NULL );
    tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_18;

    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_19 = UNPACK_PARAMETER_NEXT( tmp_unpack_6, 0 );
    if ( tmp_assign_source_19 == NULL )
    {
        if ( !ERROR_OCCURED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 429;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__element_1.object == NULL );
    tmp_tuple_unpack_3__element_1.object = tmp_assign_source_19;

    tmp_unpack_7 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_20 = UNPACK_PARAMETER_NEXT( tmp_unpack_7, 1 );
    if ( tmp_assign_source_20 == NULL )
    {
        if ( !ERROR_OCCURED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 429;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__element_2.object == NULL );
    tmp_tuple_unpack_3__element_2.object = tmp_assign_source_20;

    tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_3 ); assert( PyIter_Check( tmp_iterator_name_3 ) );

    tmp_iterator_attempt_3 = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

    if (likely( tmp_iterator_attempt_3 == NULL ))
    {
        // TODO: Could first fetch, then check, should be faster.
        if ( !ERROR_OCCURED() )
        {
        }
        else if ( PyErr_ExceptionMatches( PyExc_StopIteration ))
        {
            PyErr_Clear();
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

            goto try_finally_handler_3;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_3 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_3;
    }
    tmp_assign_source_21 = tmp_tuple_unpack_3__element_1.object;

    assert( var_exitstatus.object == NULL );
    var_exitstatus.object = INCREASE_REFCOUNT( tmp_assign_source_21 );

    tmp_assign_source_22 = tmp_tuple_unpack_3__element_2.object;

    if (var_output.object == NULL)
    {
        var_output.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
    }
    else
    {
        PyObject *old = var_output.object;
        var_output.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_3__source_iter.object );
    tmp_tuple_unpack_3__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1.object );
    tmp_tuple_unpack_3__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2.object );
    tmp_tuple_unpack_3__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_except_handler_1;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_hasattr_source_1 == NULL ))
    {
        tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 431;
        goto try_except_handler_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_WEXITSTATUS;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 431;
        goto try_except_handler_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 432;
        goto try_except_handler_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_WEXITSTATUS );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 432;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_11 = var_exitstatus.object;

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92867 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 432;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 432;
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 432;
        goto try_except_handler_1;
    }
    if (var_exitcode.object == NULL)
    {
        var_exitcode.object = tmp_assign_source_23;
    }
    else
    {
        PyObject *old = var_exitcode.object;
        var_exitcode.object = tmp_assign_source_23;
        Py_DECREF( old );
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 433;
        goto try_except_handler_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_WIFSIGNALED );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 433;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_12 = var_exitstatus.object;

    if ( tmp_call_arg_element_12 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92867 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 433;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 433;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 433;
        goto try_except_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 433;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 434;
        goto try_except_handler_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_WTERMSIG );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 434;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_13 = var_exitstatus.object;

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92867 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 434;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 434;
    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 434;
        goto try_except_handler_1;
    }
    assert( var_sig.object == NULL );
    var_sig.object = tmp_assign_source_24;

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 435;
        goto try_except_handler_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_error );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 435;
        goto try_except_handler_1;
    }
    tmp_binop_left_1 = const_str_digest_d397db7e888d1dbb6d20a8807641177f;
    tmp_binop_right_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_sig.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_2 );
    tmp_call_arg_element_14 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_function->f_lineno = 435;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 435;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_12 );
    Py_DECREF( tmp_call_arg_element_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 435;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_1 = var_sig.object;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_signal );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_signal );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92923 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 436;
        goto try_except_handler_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_SIGINT );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 436;
        goto try_except_handler_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 436;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_raise_type_1 = PyExc_KeyboardInterrupt;
    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 438;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_1;
    branch_no_3:;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_25 = var_exitstatus.object;

    if ( tmp_assign_source_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92867 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 440;
        goto try_except_handler_1;
    }

    if (var_exitcode.object == NULL)
    {
        var_exitcode.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
    }
    else
    {
        PyObject *old = var_exitcode.object;
        var_exitcode.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
        Py_DECREF( old );
    }
    branch_end_1:;
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 441;
        goto try_except_handler_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_info );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_15 = const_str_digest_addc1d778cdad6ab52ecf22f9b2512bd;
    frame_function->f_lineno = 441;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function || exception_tb->tb_lineno != frame_function->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_function, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_CompileError.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_compare_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91920 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 442;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_LinkError.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_compare_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92958 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 442;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 1, tmp_tuple_element_3 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 442;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 443;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_info );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 443;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = const_str_digest_dbe0013c246c0a586f5a5a80efe73ba0;
    frame_function->f_lineno = 443;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 443;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_4:;
    try_except_end_1:;
    tmp_source_name_16 = par_self.object;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 444;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__clean );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 444;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 444;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_15 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 444;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_exitcode.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 93013 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 445;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_output.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82676 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 445;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((var_CompileError.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_CompileError,
            var_CompileError.object
        );

    }
    if ((var_LinkError.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_LinkError,
            var_LinkError.object
        );

    }
    if ((var_exitcode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_exitcode,
            var_exitcode.object
        );

    }
    if ((var_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_output,
            var_output.object
        );

    }
    if ((var_grabber.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_grabber,
            var_grabber.object
        );

    }
    if ((var_src.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_src,
            var_src.object
        );

    }
    if ((var_obj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_obj,
            var_obj.object
        );

    }
    if ((var_exe.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_exe,
            var_exe.object
        );

    }
    if ((var_exitstatus.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_exitstatus,
            var_exitstatus.object
        );

    }
    if ((var_sig.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sig,
            var_sig.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_body.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_body,
            par_body.object
        );

    }
    if ((par_headers.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_headers,
            par_headers.object
        );

    }
    if ((par_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_include_dirs,
            par_include_dirs.object
        );

    }
    if ((par_libraries.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_libraries,
            par_libraries.object
        );

    }
    if ((par_library_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_library_dirs,
            par_library_dirs.object
        );

    }
    if ((par_lang.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lang,
            par_lang.object
        );

    }
    if ((par_use_tee.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_use_tee,
            par_use_tee.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_16_get_output_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_body = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_include_dirs = NULL;
    PyObject *_python_par_libraries = NULL;
    PyObject *_python_par_library_dirs = NULL;
    PyObject *_python_par_lang = NULL;
    PyObject *_python_par_use_tee = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "get_output() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_body == key )
            {
                assert( _python_par_body == NULL );
                _python_par_body = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_headers == key )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_include_dirs == key )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_libraries == key )
            {
                assert( _python_par_libraries == NULL );
                _python_par_libraries = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_library_dirs == key )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_lang == key )
            {
                assert( _python_par_lang == NULL );
                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_use_tee == key )
            {
                assert( _python_par_use_tee == NULL );
                _python_par_use_tee = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_body, key ) == 1 )
            {
                assert( _python_par_body == NULL );
                _python_par_body = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_headers, key ) == 1 )
            {
                assert( _python_par_headers == NULL );
                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_include_dirs, key ) == 1 )
            {
                assert( _python_par_include_dirs == NULL );
                _python_par_include_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_libraries, key ) == 1 )
            {
                assert( _python_par_libraries == NULL );
                _python_par_libraries = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_library_dirs, key ) == 1 )
            {
                assert( _python_par_library_dirs == NULL );
                _python_par_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_lang, key ) == 1 )
            {
                assert( _python_par_lang == NULL );
                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_use_tee, key ) == 1 )
            {
                assert( _python_par_use_tee == NULL );
                _python_par_use_tee = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_output() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 8 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 8  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_body != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_body = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_body == NULL )
    {
        if ( 1 + self->m_defaults_given >= 8  )
        {
            _python_par_body = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_headers != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_headers = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_headers == NULL )
    {
        if ( 2 + self->m_defaults_given >= 8  )
        {
            _python_par_headers = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_include_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_include_dirs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_include_dirs == NULL )
    {
        if ( 3 + self->m_defaults_given >= 8  )
        {
            _python_par_include_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_libraries != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_libraries = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_libraries == NULL )
    {
        if ( 4 + self->m_defaults_given >= 8  )
        {
            _python_par_libraries = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 5 < args_given ))
    {
         if (unlikely( _python_par_library_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_library_dirs = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_library_dirs == NULL )
    {
        if ( 5 + self->m_defaults_given >= 8  )
        {
            _python_par_library_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 6 < args_given ))
    {
         if (unlikely( _python_par_lang != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_lang = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_lang == NULL )
    {
        if ( 6 + self->m_defaults_given >= 8  )
        {
            _python_par_lang = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 7 < args_given ))
    {
         if (unlikely( _python_par_use_tee != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_use_tee = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_use_tee == NULL )
    {
        if ( 7 + self->m_defaults_given >= 8  )
        {
            _python_par_use_tee = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_body == NULL || _python_par_headers == NULL || _python_par_include_dirs == NULL || _python_par_libraries == NULL || _python_par_library_dirs == NULL || _python_par_lang == NULL || _python_par_use_tee == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_body, _python_par_headers, _python_par_include_dirs, _python_par_libraries, _python_par_library_dirs, _python_par_lang, _python_par_use_tee };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_16_get_output_of_class_1_config_of_module_numpy$distutils$command$config( self, _python_par_self, _python_par_body, _python_par_headers, _python_par_include_dirs, _python_par_libraries, _python_par_library_dirs, _python_par_lang, _python_par_use_tee );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_body );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_include_dirs );
    Py_XDECREF( _python_par_libraries );
    Py_XDECREF( _python_par_library_dirs );
    Py_XDECREF( _python_par_lang );
    Py_XDECREF( _python_par_use_tee );

    return NULL;
}

static PyObject *dparse_function_16_get_output_of_class_1_config_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 8 )
    {
        return impl_function_16_get_output_of_class_1_config_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_get_output_of_class_1_config_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_GrabStdout_of_module_numpy$distutils$command$config(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var_write;
    PyObjectLocalVariable var_flush;
    PyObjectLocalVariable var_restore;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_e9b81eae6371a8ff3e5c3f6efa0932a3;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_30b07f357587c6fbe5ed44a2da839422, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_assign_source_2 = MAKE_FUNCTION_function_1___init___of_class_2_GrabStdout_of_module_numpy$distutils$command$config(  );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 449;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_2_write_of_class_2_GrabStdout_of_module_numpy$distutils$command$config(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 454;
        goto frame_exception_exit_1;
    }
    assert( var_write.object == NULL );
    var_write.object = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_3_flush_of_class_2_GrabStdout_of_module_numpy$distutils$command$config(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 458;
        goto frame_exception_exit_1;
    }
    assert( var_flush.object == NULL );
    var_flush.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_4_restore_of_class_2_GrabStdout_of_module_numpy$distutils$command$config(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 461;
        goto frame_exception_exit_1;
    }
    assert( var_restore.object == NULL );
    var_restore.object = tmp_assign_source_5;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___module__,
            var___module__.object
        );

    }
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
        );

    }
    if ((var_write.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_write,
            var_write.object
        );

    }
    if ((var_flush.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_flush,
            var_flush.object
        );

    }
    if ((var_restore.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_restore,
            var_restore.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = PyDict_New();
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__.object
        );

    }
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
        );

    }
    if ((var_write.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_write,
            var_write.object
        );

    }
    if ((var_flush.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_flush,
            var_flush.object
        );

    }
    if ((var_restore.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_restore,
            var_restore.object
        );

    }
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_2_GrabStdout_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9daad07b24f51dfbe4a8a912f0491b04, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 450;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stdout );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 450;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 450;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sys_stdout, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 450;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = const_str_empty;
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 451;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_data, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_self.object;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 452;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_3 == NULL ))
    {
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 452;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_stdout, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 452;
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_1___init___of_class_2_GrabStdout_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_2_GrabStdout_of_module_numpy$distutils$command$config( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_GrabStdout_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1___init___of_class_2_GrabStdout_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_GrabStdout_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_write_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_data )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_data; par_data.object = _python_par_data;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5ce5bd69ff89718d47131b8965dbdaf4, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 455;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sys_stdout );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 455;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_write );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 455;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_data.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 455;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 455;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 455;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 456;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_data );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 456;
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = tmp_assign_source_1;

    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_1 = par_data.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 456;
        goto try_finally_handler_1;
    }

    tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 456;
        goto try_finally_handler_1;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_2;

    // Tried code
    tmp_compare_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_1 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if (tmp_isnot_1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assattr_name_1 = tmp_inplace_assign_1__inplace_end.object;

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 456;
        goto try_finally_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_data, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 456;
        goto try_finally_handler_2;
    }
    branch_no_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_1__inplace_end.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_end.object );
        tmp_inplace_assign_1__inplace_end.object = NULL;
    }

    assert( tmp_result != false );
    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto frame_exception_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            par_data.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_2_write_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_data = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "write() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_data == key )
            {
                assert( _python_par_data == NULL );
                _python_par_data = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_data, key ) == 1 )
            {
                assert( _python_par_data == NULL );
                _python_par_data = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "write() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_data != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_data == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_data = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_data == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_data };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_write_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( self, _python_par_self, _python_par_data );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_data );

    return NULL;
}

static PyObject *dparse_function_2_write_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2_write_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_write_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_flush_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1919c44197d69186667b99545b3ba59b, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 459;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sys_stdout );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 459;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flush );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 459;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 459;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 459;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_3_flush_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "flush() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "flush() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_flush_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_flush_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_flush_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_flush_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_restore_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_767efca841c9e4327a9caf5d91e62a32, module_numpy$distutils$command$config );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 462;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sys_stdout );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 462;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 462;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_stdout, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 462;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_4_restore_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "restore() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "restore() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_restore_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_restore_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4_restore_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_restore_of_class_2_GrabStdout_of_module_numpy$distutils$command$config( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_check_type_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_check_type_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_10_check_type_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain_check_type,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e6cc5a332eb2f057f112608e29fdcb03,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        const_str_digest_0030044e0b62758f6e90270468c31d05
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_check_type_size_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_check_type_size_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_11_check_type_size_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain_check_type_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8ceef974885a0164a822ebd4c79c433a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        const_str_digest_5b1270420e45444292270e6a05be0eb5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_check_func_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_check_func_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_12_check_func_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain_check_func,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1ab95c5dd1e0fe091d3e38ee6c48d2b9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_check_funcs_once_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_check_funcs_once_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_13_check_funcs_once_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain_check_funcs_once,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4b98bd6755249ff658de65a12b4a96a7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        const_str_digest_46edd8d0f38655c5fabf59f8b44b639d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_check_inline_of_class_1_config_of_module_numpy$distutils$command$config(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_check_inline_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_14_check_inline_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain_check_inline,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_44b34996e74c1e69fdc48b5e713301d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        const_str_digest_52234c758d7b8547386ac2ef3d77010b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_check_compiler_gcc4_of_class_1_config_of_module_numpy$distutils$command$config(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_check_compiler_gcc4_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_15_check_compiler_gcc4_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain_check_compiler_gcc4,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c33b7ed3b31ee99e2194fb0298314e9d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        const_str_digest_54a47323fba645635f9659b766ea3eb5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_get_output_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_get_output_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_16_get_output_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain_get_output,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_32777af88f50fda9071dca5b32de29a7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        const_str_digest_692c5b3d84c1f6ac27edff56e326562c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_GrabStdout_of_module_numpy$distutils$command$config(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_GrabStdout_of_module_numpy$distutils$command$config,
        dparse_function_1___init___of_class_2_GrabStdout_of_module_numpy$distutils$command$config,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9daad07b24f51dfbe4a8a912f0491b04,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_1_config_of_module_numpy$distutils$command$config(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_initialize_options_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_1_initialize_options_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain_initialize_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ad2e8f601bfcd7eee344cb807ead423c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_try_run_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_try_run_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_2_try_run_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain_try_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7d4b079973c3d745ffb3ada961d936ba,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_write_of_class_2_GrabStdout_of_module_numpy$distutils$command$config(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_write_of_class_2_GrabStdout_of_module_numpy$distutils$command$config,
        dparse_function_2_write_of_class_2_GrabStdout_of_module_numpy$distutils$command$config,
        const_str_plain_write,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5ce5bd69ff89718d47131b8965dbdaf4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__check_compiler_of_class_1_config_of_module_numpy$distutils$command$config(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__check_compiler_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_3__check_compiler_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain__check_compiler,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b9afe9c8a258390d0dd236df1e0d0d10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_flush_of_class_2_GrabStdout_of_module_numpy$distutils$command$config(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_flush_of_class_2_GrabStdout_of_module_numpy$distutils$command$config,
        dparse_function_3_flush_of_class_2_GrabStdout_of_module_numpy$distutils$command$config,
        const_str_plain_flush,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1919c44197d69186667b99545b3ba59b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__wrap_method_of_class_1_config_of_module_numpy$distutils$command$config(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__wrap_method_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_4__wrap_method_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain__wrap_method,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_386c9ef9ce205bc4a9fb1d0bf4a3a1f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_restore_of_class_2_GrabStdout_of_module_numpy$distutils$command$config(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_restore_of_class_2_GrabStdout_of_module_numpy$distutils$command$config,
        dparse_function_4_restore_of_class_2_GrabStdout_of_module_numpy$distutils$command$config,
        const_str_plain_restore,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_767efca841c9e4327a9caf5d91e62a32,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5__compile_of_class_1_config_of_module_numpy$distutils$command$config(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5__compile_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_5__compile_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain__compile,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e46a1983cdc1d5bf2b26c36c78810fe5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__link_of_class_1_config_of_module_numpy$distutils$command$config(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6__link_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_6__link_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain__link,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1c48d0cfc2e72cf14689ead05898e758,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_check_header_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_check_header_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_7_check_header_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain_check_header,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1339aa5aa00fefad08be1c9baae53573,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_check_decl_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_check_decl_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_8_check_decl_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain_check_decl,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ad357c8e3df453b153273e86545070dd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_check_macro_true_of_class_1_config_of_module_numpy$distutils$command$config( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_check_macro_true_of_class_1_config_of_module_numpy$distutils$command$config,
        dparse_function_9_check_macro_true_of_class_1_config_of_module_numpy$distutils$command$config,
        const_str_plain_check_macro_true,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2549077c186db7f9ce19654169b6882c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils$command$config =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils.command.config",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#define _MODULE_UNFREEZER 0

#if _MODULE_UNFREEZER

#include "nuitka/unfreezing.hpp"

// Table for lookup to find "frozen" modules or DLLs, i.e. the ones included in
// or along this binary.

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{

    { NULL, NULL, 0 }
};

#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( numpy$distutils$command$config )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils$command$config );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    _initConstants();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );
#if PYTHON_VERSION < 300
    initSlotCompare();
#endif

    patchBuiltinModule();
    patchTypeComparison();

#endif

#if _MODULE_UNFREEZER
    registerMetaPathBasedUnfreezer( meta_path_loader_entries );
#endif

    _initModuleConstants();
    _initModuleCodeObjects();

    // puts( "in initnumpy$distutils$command$config" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils$command$config = Py_InitModule4(
        "numpy.distutils.command.config",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils$command$config = PyModule_Create( &mdef_numpy$distutils$command$config );
#endif

    moduledict_numpy$distutils$command$config = (PyDictObject *)((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;

    assertObject( module_numpy$distutils$command$config );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e9b81eae6371a8ff3e5c3f6efa0932a3, module_numpy$distutils$command$config );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils$command$config );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
#if _MODULE_UNFREEZER
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#else
    PyDict_SetItem( module_dict, const_str_plain___loader__, Py_None );
#endif
#endif

    // Temp variables if any
    PyObjectTempVariable tmp_class_creation_1__bases;
    PyObjectTempVariable tmp_class_creation_1__class_dict;
    PyObjectTempVariable tmp_class_creation_1__metaclass;
    PyObjectTempVariable tmp_class_creation_1__class;
    PyObjectTempVariable tmp_class_creation_2__bases;
    PyObjectTempVariable tmp_class_creation_2__class_dict;
    PyObjectTempVariable tmp_class_creation_2__metaclass;
    PyObjectTempVariable tmp_class_creation_2__class;
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_bases_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_dict_2;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dget_key_2;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_globals_9;
    PyObject *tmp_import_globals_10;
    PyObject *tmp_import_globals_11;
    PyObject *tmp_import_globals_12;
    PyObject *tmp_import_globals_13;
    PyObject *tmp_import_globals_14;
    PyObject *tmp_import_globals_15;
    PyObject *tmp_import_globals_16;
    PyObject *tmp_import_globals_17;
    PyObject *tmp_import_globals_18;
    PyObject *tmp_import_globals_19;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    bool tmp_result;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_4dc6b94688046e61bd54f6eb40dc8886;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_8c6104e4c21fdf08bdfb951ab2c9cf1f, module_numpy$distutils$command$config );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 7;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 7;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_signal, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_signal, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 8;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_6, tmp_import_globals_6, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 9;
    tmp_assign_source_9 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_7, tmp_import_globals_7, Py_None, const_int_0 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_2411886f2c32bf0133e354f9622cfd93, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_config_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_config );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_old_config, tmp_assign_source_10 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_2411886f2c32bf0133e354f9622cfd93, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_LANG_EXT_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_LANG_EXT );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_LANG_EXT, tmp_assign_source_11 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_distutils, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_log_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_log );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_12 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_8daee860afb12937dc1f5ec4646035c2, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_copy_file_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_copy_file );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_copy_file, tmp_assign_source_13 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_8acec9b707fb08fa95386d8360c9e9fc, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_CompileError_str_plain_LinkError_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_CompileError );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_CompileError, tmp_assign_source_14 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_8acec9b707fb08fa95386d8360c9e9fc, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_plain_CompileError_str_plain_LinkError_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_LinkError );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_LinkError, tmp_assign_source_15 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 16;
    tmp_assign_source_16 = IMPORT_MODULE( const_str_plain_distutils, tmp_import_globals_14, tmp_import_globals_14, Py_None, const_int_0 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_distutils, tmp_assign_source_16 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_9ee0065fb030b4d6c1f397a7967d740e, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_exec_command_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_exec_command );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_exec_command, tmp_assign_source_17 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_3cf1150dc41ac01dcb8cfcc35c3f433c, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_generate_manifest_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_generate_manifest );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_generate_manifest, tmp_assign_source_18 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_53d25559855030e84ebd6465736fcba3, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_plain_check_inline_str_plain_check_compiler_gcc4_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_check_inline );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_check_inline, tmp_assign_source_19 );
    tmp_import_globals_18 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_53d25559855030e84ebd6465736fcba3, tmp_import_globals_18, tmp_import_globals_18, const_tuple_str_plain_check_inline_str_plain_check_compiler_gcc4_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_check_compiler_gcc4 );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_check_compiler_gcc4, tmp_assign_source_20 );
    tmp_import_globals_19 = ((PyModuleObject *)module_numpy$distutils$command$config)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_90027b1d66347d1decac561bb6f2be2c, tmp_import_globals_19, tmp_import_globals_19, const_tuple_str_plain_get_exception_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_get_exception );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_get_exception, tmp_assign_source_21 );
    tmp_ass_subvalue_1 = const_str_digest_080140a463ef48d7305b3a11330fc327;
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_LANG_EXT );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LANG_EXT );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91615 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_f77;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = const_str_digest_93a398871e8ab5b0c4f83fc62fc97baf;
    tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_LANG_EXT );

    if (unlikely( tmp_ass_subscribed_2 == NULL ))
    {
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LANG_EXT );
    }

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91615 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_f90;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    // Tried code
    tmp_assign_source_22 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_old_config );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_config );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91645 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 25;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_22, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_22;

    tmp_assign_source_23 = impl_class_1_config_of_module_numpy$distutils$command$config(  );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_23;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dget_dict_1 = tmp_class_creation_1__class_dict.object;

    tmp_dget_key_1 = const_str_plain___metaclass__;
    tmp_assign_source_24 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_24 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_24;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_config;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 25;
    tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_25;

    tmp_assign_source_26 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_config, tmp_assign_source_26 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_1__class.object );
    tmp_class_creation_1__class.object = NULL;

    Py_XDECREF( tmp_class_creation_1__bases.object );
    tmp_class_creation_1__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict.object );
    tmp_class_creation_1__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass.object );
    tmp_class_creation_1__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    // Tried code
    tmp_assign_source_27 = PyTuple_New( 1 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_object );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_27 );

        frame_module->f_lineno = 447;
        goto try_finally_handler_2;
    }
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases.object == NULL );
    tmp_class_creation_2__bases.object = tmp_assign_source_27;

    tmp_assign_source_28 = impl_class_2_GrabStdout_of_module_numpy$distutils$command$config(  );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 447;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class_dict.object == NULL );
    tmp_class_creation_2__class_dict.object = tmp_assign_source_28;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict.object;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 447;
        goto try_finally_handler_2;
    }
    if (tmp_cmp_In_2 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dget_dict_2 = tmp_class_creation_2__class_dict.object;

    tmp_dget_key_2 = const_str_plain___metaclass__;
    tmp_assign_source_29 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 447;
        goto try_finally_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_bases_2 = tmp_class_creation_2__bases.object;

    tmp_assign_source_29 = SELECT_METACLASS( tmp_class_bases_2, GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass.object == NULL );
    tmp_class_creation_2__metaclass.object = tmp_assign_source_29;

    tmp_called_2 = tmp_class_creation_2__metaclass.object;

    tmp_call_arg_element_4 = const_str_plain_GrabStdout;
    tmp_call_arg_element_5 = tmp_class_creation_2__bases.object;

    tmp_call_arg_element_6 = tmp_class_creation_2__class_dict.object;

    frame_module->f_lineno = 447;
    tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 447;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class.object == NULL );
    tmp_class_creation_2__class.object = tmp_assign_source_30;

    tmp_assign_source_31 = tmp_class_creation_2__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$config, (Nuitka_StringObject *)const_str_plain_GrabStdout, tmp_assign_source_31 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_2__class.object );
    tmp_class_creation_2__class.object = NULL;

    Py_XDECREF( tmp_class_creation_2__bases.object );
    tmp_class_creation_2__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict.object );
    tmp_class_creation_2__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass.object );
    tmp_class_creation_2__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto frame_exception_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_module ) );
    }
    else if ( exception_tb->tb_frame != frame_module )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_module ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }

    // Put the previous frame back on top.
    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_module->f_executing -= 1;
#endif
    Py_DECREF( frame_module );

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_numpy$distutils$command$config );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
