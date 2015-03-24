// Generated code for Python source for module 'numpy._import_tools'
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

// The _module_numpy$_import_tools is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$_import_tools;
PyDictObject *moduledict_numpy$_import_tools;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_str_dot;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_empty;
extern PyObject *const_str_space;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_70;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_0;
extern PyObject *const_str_plain_U;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_w;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_ok;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_rb;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_imp;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_lst;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_sep;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_tab;
extern PyObject *const_str_plain_eval;
extern PyObject *const_str_plain_exec;
extern PyObject *const_str_plain_file;
extern PyObject *const_str_plain_find;
extern PyObject *const_str_plain_glob;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_mess;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_note;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_word;
extern PyObject *const_list_int_0_list;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_files;
extern PyObject *const_str_plain_flush;
extern PyObject *const_str_plain_force;
extern PyObject *const_str_plain_frame;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_lines;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_title;
extern PyObject *const_str_plain_words;
extern PyObject *const_str_angle_string;
static PyObject *const_str_plain__level;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_cmdstr;
static PyObject *const_str_plain_colsep;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_ignore;
extern PyObject *const_str_plain_infunc;
extern PyObject *const_str_plain_lstrip;
extern PyObject *const_str_plain_module;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain_retstr;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_plain_stdout;
extern PyObject *const_str_plain_symbol;
extern PyObject *const_str_plain_titles;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_depends;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_lengths;
extern PyObject *const_str_plain_modules;
extern PyObject *const_str_plain_new_lst;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_symbols;
extern PyObject *const_str_plain_verbose;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain__execcmd;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_f_locals;
extern PyObject *const_str_plain_fullname;
extern PyObject *const_str_plain_packages;
static PyObject *const_str_plain_postpone;
static PyObject *const_str_plain_Executing;
extern PyObject *const_str_plain__getframe;
static PyObject *const_str_plain__obj2repr;
extern PyObject *const_str_plain_f_globals;
static PyObject *const_str_plain_info_file;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_info_files;
static PyObject *const_str_plain_max_length;
static PyObject *const_str_plain_new_object;
static PyObject *const_str_plain_old_object;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_depend_dict;
static PyObject *const_str_plain_get_pkgdocs;
static PyObject *const_str_plain_info_module;
extern PyObject *const_str_plain_load_module;
static PyObject *const_str_plain_names_files;
static PyObject *const_str_plain_old_objects;
extern PyObject *const_str_plain_package_dir;
extern PyObject *const_str_plain_parent_name;
extern PyObject *const_str_plain_parent_path;
static PyObject *const_str_plain_info_modules;
extern PyObject *const_str_plain_package_name;
static PyObject *const_str_plain_parent_frame;
extern PyObject *const_str_plain_PackageLoader;
static PyObject *const_str_plain___doc_title__;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain__import_tools;
static PyObject *const_str_plain_package_names;
extern PyObject *const_tuple_false_false_tuple;
static PyObject *const_str_plain__format_titles;
static PyObject *const_str_plain__get_doc_title;
static PyObject *const_str_plain_filedescriptor;
extern PyObject *const_str_plain_global_symbols;
static PyObject *const_str_plain_parent_package;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain__get_info_files;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_postpone_import;
extern PyObject *const_tuple_str_plain_glob_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain__get_sorted_names;
static PyObject *const_str_plain_imported_packages;
static PyObject *const_str_plain_NUMPY_IMPORT_DEBUG;
static PyObject *const_str_plain_PackageLoaderDebug;
static PyObject *const_str_plain__init_info_modules;
static PyObject *const_str_plain_parent_export_names;
static PyObject *const_str_plain_display_window_width;
static PyObject *const_list_str_plain_PackageLoader_list;
extern PyObject *const_dict_fb4ddbadafbecbaef28aef989e4b600e;
extern PyObject *const_tuple_str_plain_self_str_plain_obj_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_mess_tuple;
static PyObject *const_str_digest_110eb41a48aeec64ca8577bf6f78517c;
extern PyObject *const_str_digest_11e8d8598d91015435663c54142db95d;
extern PyObject *const_str_digest_1a40f6fd617577d6822f9043448b92c2;
static PyObject *const_str_digest_1b52334c5ad89d9ddbb0d846f6a17dd8;
static PyObject *const_str_digest_1f2c8c3323a482a729e91b5ac9b43722;
static PyObject *const_str_digest_22e403d580093af6c3edd664738f0f2d;
static PyObject *const_str_digest_27914ec3b7152f7274df3c39b71a576c;
static PyObject *const_str_digest_2d7f7a73df65cd0f0fc3010d83ad8a49;
extern PyObject *const_str_digest_2f43b42fd833d1e77420a8dae7419000;
static PyObject *const_str_digest_308566e4177f0dc2224daa8017b3f3f1;
extern PyObject *const_str_digest_36a0ff6adef8f150baa070bcc241cce5;
static PyObject *const_str_digest_36b13bfd9551f3ab9c6a34f1cae96c75;
static PyObject *const_str_digest_36d27e96d6b80b8906c6a7558510bbf3;
static PyObject *const_str_digest_3856cfbe7d1ed254852f8786722c6a9f;
static PyObject *const_str_digest_39eb6506385b611122915a56ad8d9f26;
static PyObject *const_str_digest_4c16162a174f326ad9dd710cead815dd;
static PyObject *const_str_digest_560c44bd280bdaab9a60f35bf44eb43b;
static PyObject *const_str_digest_57457f388f11cc2bc2eb1803f4063965;
static PyObject *const_str_digest_5872bd087d95898a8e06c737a9ac43d0;
static PyObject *const_str_digest_5d7b2ab1c8096def1d36601af97ffb00;
static PyObject *const_str_digest_6b4552d3334eb7b352e823de2f2570b6;
static PyObject *const_str_digest_6b99e14075fac82e097b86d995d2a612;
static PyObject *const_str_digest_6cfcfc0587503a6d04208d58111eae4e;
static PyObject *const_str_digest_794a00a2a4a8222e4f3922201cf84223;
static PyObject *const_str_digest_83241ac27e8a408a82d33a7dcddec5e1;
extern PyObject *const_str_digest_8617a6c09eb76d9882db8ee31a420654;
static PyObject *const_str_digest_8b7e7422bb361153223c2b041094f774;
static PyObject *const_str_digest_8ff70fb587a833b137a0fe481eb142cf;
static PyObject *const_str_digest_9528395ffa3e19ecc9b62f55341c1204;
static PyObject *const_str_digest_952b0ebdaa6e29e1f0af49159d1fa4bf;
static PyObject *const_str_digest_961ef41789d152654caa842dca7b0e16;
static PyObject *const_str_digest_9a5cacdfc0d2e3263033cf34c45fd56a;
static PyObject *const_str_digest_9a73e5b6a42e4b29fb65c2c7fe12ff01;
static PyObject *const_str_digest_9efc314b65237d5d646e1b817372afc6;
static PyObject *const_str_digest_c9694a680ff298043d3832abbab27eac;
static PyObject *const_str_digest_d2433e8f66c13120b8b81284d7022766;
static PyObject *const_str_digest_d3bf73d3df56251f7442ba30c496e06e;
static PyObject *const_str_digest_e5552ac44dccda0f74eb46a6e56df171;
extern PyObject *const_str_digest_fc763cb31e9938f37737394681228f83;
static PyObject *const_tuple_str_plain_self_str_plain_cmdstr_tuple;
extern PyObject *const_tuple_0edeae457f2e941b8090b979674d8622_tuple;
static PyObject *const_tuple_253c225a4f67d9038512828a71f751d3_tuple;
static PyObject *const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple;
static PyObject *const_tuple_356a5da41c95fb22e3969f77f4542df3_tuple;
static PyObject *const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple;
static PyObject *const_tuple_64ec498c1f2916dce37159a12cac6283_tuple;
static PyObject *const_tuple_a211bc052621177dd756b1e67d96b3e5_tuple;
static PyObject *const_tuple_a41d4e0762ac86b3dbefc3dc8a8c734f_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_bc5cc8be15abab541948a5b2daf979c6_tuple;
static PyObject *const_tuple_bd2935314dd71066f754bd83a727315e_tuple;
static PyObject *const_tuple_d944964a5523d549fa9755e7fb2428ee_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_packages_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_info_module_tuple;
static PyObject *const_tuple_str_digest_9efc314b65237d5d646e1b817372afc6_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_cmdstr_str_plain_frame_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_titles_str_plain_colsep_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_verbose_str_plain_infunc_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_packages_str_plain_options_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_info_module_str_plain_title_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_obj_str_plain_module_str_plain_file_tuple;

static void _initModuleConstants(void)
{
    const_str_plain__level = UNSTREAM_STRING( &constant_bin[ 106828 ], 6, 1 );
    const_str_plain_cmdstr = UNSTREAM_STRING( &constant_bin[ 50172 ], 6, 1 );
    const_str_plain_colsep = UNSTREAM_STRING( &constant_bin[ 50382 ], 6, 1 );
    const_str_plain_retstr = UNSTREAM_STRING( &constant_bin[ 50599 ], 6, 1 );
    const_str_plain__execcmd = UNSTREAM_STRING( &constant_bin[ 449784 ], 8, 1 );
    const_str_plain_postpone = UNSTREAM_STRING( &constant_bin[ 49670 ], 8, 1 );
    const_str_plain_Executing = UNSTREAM_STRING( &constant_bin[ 449792 ], 9, 1 );
    const_str_plain__obj2repr = UNSTREAM_STRING( &constant_bin[ 449801 ], 9, 1 );
    const_str_plain_info_file = UNSTREAM_STRING( &constant_bin[ 49093 ], 9, 1 );
    const_str_plain_info_files = UNSTREAM_STRING( &constant_bin[ 49093 ], 10, 1 );
    const_str_plain_max_length = UNSTREAM_STRING( &constant_bin[ 50326 ], 10, 1 );
    const_str_plain_new_object = UNSTREAM_STRING( &constant_bin[ 49838 ], 10, 1 );
    const_str_plain_old_object = UNSTREAM_STRING( &constant_bin[ 49894 ], 10, 1 );
    const_str_plain_get_pkgdocs = UNSTREAM_STRING( &constant_bin[ 449810 ], 11, 1 );
    const_str_plain_info_module = UNSTREAM_STRING( &constant_bin[ 49233 ], 11, 1 );
    const_str_plain_names_files = UNSTREAM_STRING( &constant_bin[ 449821 ], 11, 1 );
    const_str_plain_old_objects = UNSTREAM_STRING( &constant_bin[ 50063 ], 11, 1 );
    const_str_plain_info_modules = UNSTREAM_STRING( &constant_bin[ 49233 ], 12, 1 );
    const_str_plain_parent_frame = UNSTREAM_STRING( &constant_bin[ 449832 ], 12, 1 );
    const_str_plain___doc_title__ = UNSTREAM_STRING( &constant_bin[ 449844 ], 13, 1 );
    const_str_plain_package_names = UNSTREAM_STRING( &constant_bin[ 49509 ], 13, 1 );
    const_str_plain__format_titles = UNSTREAM_STRING( &constant_bin[ 449857 ], 14, 1 );
    const_str_plain__get_doc_title = UNSTREAM_STRING( &constant_bin[ 449871 ], 14, 1 );
    const_str_plain_filedescriptor = UNSTREAM_STRING( &constant_bin[ 449885 ], 14, 1 );
    const_str_plain_parent_package = UNSTREAM_STRING( &constant_bin[ 49033 ], 14, 1 );
    const_str_plain__get_info_files = UNSTREAM_STRING( &constant_bin[ 449899 ], 15, 1 );
    const_str_plain__get_sorted_names = UNSTREAM_STRING( &constant_bin[ 449914 ], 17, 1 );
    const_str_plain_imported_packages = UNSTREAM_STRING( &constant_bin[ 449931 ], 17, 1 );
    const_str_plain_NUMPY_IMPORT_DEBUG = UNSTREAM_STRING( &constant_bin[ 449948 ], 18, 1 );
    const_str_plain_PackageLoaderDebug = UNSTREAM_STRING( &constant_bin[ 48766 ], 18, 1 );
    const_str_plain__init_info_modules = UNSTREAM_STRING( &constant_bin[ 449966 ], 18, 1 );
    const_str_plain_parent_export_names = UNSTREAM_STRING( &constant_bin[ 449984 ], 19, 1 );
    const_str_plain_display_window_width = UNSTREAM_STRING( &constant_bin[ 50484 ], 20, 1 );
    const_list_str_plain_PackageLoader_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_PackageLoader_list, 0, const_str_plain_PackageLoader ); Py_INCREF( const_str_plain_PackageLoader );
    const_str_digest_110eb41a48aeec64ca8577bf6f78517c = UNSTREAM_STRING( &constant_bin[ 450003 ], 63, 0 );
    const_str_digest_1b52334c5ad89d9ddbb0d846f6a17dd8 = UNSTREAM_STRING( &constant_bin[ 450066 ], 54, 0 );
    const_str_digest_1f2c8c3323a482a729e91b5ac9b43722 = UNSTREAM_STRING( &constant_bin[ 450120 ], 7, 0 );
    const_str_digest_22e403d580093af6c3edd664738f0f2d = UNSTREAM_STRING( &constant_bin[ 450127 ], 35, 0 );
    const_str_digest_27914ec3b7152f7274df3c39b71a576c = UNSTREAM_STRING( &constant_bin[ 450162 ], 22, 0 );
    const_str_digest_2d7f7a73df65cd0f0fc3010d83ad8a49 = UNSTREAM_STRING( &constant_bin[ 450184 ], 52, 0 );
    const_str_digest_308566e4177f0dc2224daa8017b3f3f1 = UNSTREAM_STRING( &constant_bin[ 450236 ], 131, 0 );
    const_str_digest_36b13bfd9551f3ab9c6a34f1cae96c75 = UNSTREAM_STRING( &constant_bin[ 450367 ], 1042, 0 );
    const_str_digest_36d27e96d6b80b8906c6a7558510bbf3 = UNSTREAM_STRING( &constant_bin[ 451409 ], 85, 0 );
    const_str_digest_3856cfbe7d1ed254852f8786722c6a9f = UNSTREAM_STRING( &constant_bin[ 334110 ], 6, 0 );
    const_str_digest_39eb6506385b611122915a56ad8d9f26 = UNSTREAM_STRING( &constant_bin[ 451494 ], 66, 0 );
    const_str_digest_4c16162a174f326ad9dd710cead815dd = UNSTREAM_STRING( &constant_bin[ 451439 ], 7, 0 );
    const_str_digest_560c44bd280bdaab9a60f35bf44eb43b = UNSTREAM_STRING( &constant_bin[ 451560 ], 13, 0 );
    const_str_digest_57457f388f11cc2bc2eb1803f4063965 = UNSTREAM_STRING( &constant_bin[ 334111 ], 5, 0 );
    const_str_digest_5872bd087d95898a8e06c737a9ac43d0 = UNSTREAM_STRING( &constant_bin[ 451573 ], 19, 0 );
    const_str_digest_5d7b2ab1c8096def1d36601af97ffb00 = UNSTREAM_STRING( &constant_bin[ 451592 ], 78, 0 );
    const_str_digest_6b4552d3334eb7b352e823de2f2570b6 = UNSTREAM_STRING( &constant_bin[ 451670 ], 22, 0 );
    const_str_digest_6b99e14075fac82e097b86d995d2a612 = UNSTREAM_STRING( &constant_bin[ 446709 ], 8, 0 );
    const_str_digest_6cfcfc0587503a6d04208d58111eae4e = UNSTREAM_STRING( &constant_bin[ 451692 ], 26, 0 );
    const_str_digest_794a00a2a4a8222e4f3922201cf84223 = UNSTREAM_STRING( &constant_bin[ 451718 ], 7, 0 );
    const_str_digest_83241ac27e8a408a82d33a7dcddec5e1 = UNSTREAM_STRING( &constant_bin[ 450005 ], 4, 0 );
    const_str_digest_8b7e7422bb361153223c2b041094f774 = UNSTREAM_STRING( &constant_bin[ 451725 ], 55, 0 );
    const_str_digest_8ff70fb587a833b137a0fe481eb142cf = UNSTREAM_STRING( &constant_bin[ 451780 ], 16, 0 );
    const_str_digest_9528395ffa3e19ecc9b62f55341c1204 = UNSTREAM_STRING( &constant_bin[ 451796 ], 54, 0 );
    const_str_digest_952b0ebdaa6e29e1f0af49159d1fa4bf = UNSTREAM_STRING( &constant_bin[ 446954 ], 5, 0 );
    const_str_digest_961ef41789d152654caa842dca7b0e16 = UNSTREAM_STRING( &constant_bin[ 451850 ], 8, 0 );
    const_str_digest_9a5cacdfc0d2e3263033cf34c45fd56a = UNSTREAM_STRING( &constant_bin[ 451858 ], 12, 0 );
    const_str_digest_9a73e5b6a42e4b29fb65c2c7fe12ff01 = UNSTREAM_STRING( &constant_bin[ 451870 ], 3, 0 );
    const_str_digest_9efc314b65237d5d646e1b817372afc6 = UNSTREAM_STRING( &constant_bin[ 391459 ], 3, 0 );
    const_str_digest_c9694a680ff298043d3832abbab27eac = UNSTREAM_STRING( &constant_bin[ 451873 ], 52, 0 );
    const_str_digest_d2433e8f66c13120b8b81284d7022766 = UNSTREAM_STRING( &constant_bin[ 451925 ], 17, 0 );
    const_str_digest_d3bf73d3df56251f7442ba30c496e06e = UNSTREAM_STRING( &constant_bin[ 451942 ], 26, 0 );
    const_str_digest_e5552ac44dccda0f74eb46a6e56df171 = UNSTREAM_STRING( &constant_bin[ 451968 ], 33, 0 );
    const_tuple_str_plain_self_str_plain_cmdstr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cmdstr_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cmdstr_tuple, 1, const_str_plain_cmdstr ); Py_INCREF( const_str_plain_cmdstr );
    const_tuple_253c225a4f67d9038512828a71f751d3_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_253c225a4f67d9038512828a71f751d3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_253c225a4f67d9038512828a71f751d3_tuple, 1, const_str_plain_cmdstr ); Py_INCREF( const_str_plain_cmdstr );
    PyTuple_SET_ITEM( const_tuple_253c225a4f67d9038512828a71f751d3_tuple, 2, const_str_plain_frame ); Py_INCREF( const_str_plain_frame );
    PyTuple_SET_ITEM( const_tuple_253c225a4f67d9038512828a71f751d3_tuple, 3, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 1, const_str_plain_titles ); Py_INCREF( const_str_plain_titles );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 2, const_str_plain_colsep ); Py_INCREF( const_str_plain_colsep );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 3, const_str_plain_display_window_width ); Py_INCREF( const_str_plain_display_window_width );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 4, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 5, const_str_plain_title ); Py_INCREF( const_str_plain_title );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 6, const_str_plain_lengths ); Py_INCREF( const_str_plain_lengths );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 7, const_str_plain_max_length ); Py_INCREF( const_str_plain_max_length );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 8, const_str_plain_lines ); Py_INCREF( const_str_plain_lines );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 9, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 10, const_str_plain_words ); Py_INCREF( const_str_plain_words );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 11, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 12, const_str_plain_tab ); Py_INCREF( const_str_plain_tab );
    PyTuple_SET_ITEM( const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 13, const_str_plain_word ); Py_INCREF( const_str_plain_word );
    const_tuple_356a5da41c95fb22e3969f77f4542df3_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_356a5da41c95fb22e3969f77f4542df3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_356a5da41c95fb22e3969f77f4542df3_tuple, 1, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_356a5da41c95fb22e3969f77f4542df3_tuple, 2, const_str_plain_infunc ); Py_INCREF( const_str_plain_infunc );
    PyTuple_SET_ITEM( const_tuple_356a5da41c95fb22e3969f77f4542df3_tuple, 3, const_str_plain__level ); Py_INCREF( const_str_plain__level );
    PyTuple_SET_ITEM( const_tuple_356a5da41c95fb22e3969f77f4542df3_tuple, 4, const_str_plain_frame ); Py_INCREF( const_str_plain_frame );
    PyTuple_SET_ITEM( const_tuple_356a5da41c95fb22e3969f77f4542df3_tuple, 5, const_str_plain_parent_path ); Py_INCREF( const_str_plain_parent_path );
    const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 1, const_str_plain_packages ); Py_INCREF( const_str_plain_packages );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 2, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 3, const_str_plain_frame ); Py_INCREF( const_str_plain_frame );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 4, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 5, const_str_plain_postpone ); Py_INCREF( const_str_plain_postpone );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 6, const_str_plain_package_name ); Py_INCREF( const_str_plain_package_name );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 7, const_str_plain_info_module ); Py_INCREF( const_str_plain_info_module );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 8, const_str_plain_global_symbols ); Py_INCREF( const_str_plain_global_symbols );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 9, const_str_plain_postpone_import ); Py_INCREF( const_str_plain_postpone_import );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 10, const_str_plain_old_object ); Py_INCREF( const_str_plain_old_object );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 11, const_str_plain_cmdstr ); Py_INCREF( const_str_plain_cmdstr );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 12, const_str_plain_new_object ); Py_INCREF( const_str_plain_new_object );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 13, const_str_plain_symbol ); Py_INCREF( const_str_plain_symbol );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 14, const_str_plain_symbols ); Py_INCREF( const_str_plain_symbols );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 15, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 16, const_str_plain_old_objects ); Py_INCREF( const_str_plain_old_objects );
    const_tuple_64ec498c1f2916dce37159a12cac6283_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 1, const_str_plain_packages ); Py_INCREF( const_str_plain_packages );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 2, const_str_plain_imp ); Py_INCREF( const_str_plain_imp );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 3, const_str_plain_info_files ); Py_INCREF( const_str_plain_info_files );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 4, const_str_plain_info_modules ); Py_INCREF( const_str_plain_info_modules );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 5, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 6, const_str_plain_package_name ); Py_INCREF( const_str_plain_package_name );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 7, const_str_plain_package_dir ); Py_INCREF( const_str_plain_package_dir );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 8, const_str_plain_names_files ); Py_INCREF( const_str_plain_names_files );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 9, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 10, const_str_plain_info_file ); Py_INCREF( const_str_plain_info_file );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 11, const_str_plain_fullname ); Py_INCREF( const_str_plain_fullname );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 12, const_str_plain_filedescriptor ); Py_INCREF( const_str_plain_filedescriptor );
    PyTuple_SET_ITEM( const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 13, const_str_plain_info_module ); Py_INCREF( const_str_plain_info_module );
    const_tuple_a211bc052621177dd756b1e67d96b3e5_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_a211bc052621177dd756b1e67d96b3e5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a211bc052621177dd756b1e67d96b3e5_tuple, 1, const_str_plain_depend_dict ); Py_INCREF( const_str_plain_depend_dict );
    PyTuple_SET_ITEM( const_tuple_a211bc052621177dd756b1e67d96b3e5_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_a211bc052621177dd756b1e67d96b3e5_tuple, 3, const_str_plain_info_module ); Py_INCREF( const_str_plain_info_module );
    PyTuple_SET_ITEM( const_tuple_a211bc052621177dd756b1e67d96b3e5_tuple, 4, const_str_plain_package_names ); Py_INCREF( const_str_plain_package_names );
    PyTuple_SET_ITEM( const_tuple_a211bc052621177dd756b1e67d96b3e5_tuple, 5, const_str_plain_lst ); Py_INCREF( const_str_plain_lst );
    PyTuple_SET_ITEM( const_tuple_a211bc052621177dd756b1e67d96b3e5_tuple, 6, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_a211bc052621177dd756b1e67d96b3e5_tuple, 7, const_str_plain_new_lst ); Py_INCREF( const_str_plain_new_lst );
    const_tuple_a41d4e0762ac86b3dbefc3dc8a8c734f_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_a41d4e0762ac86b3dbefc3dc8a8c734f_tuple, 0, const_str_digest_11e8d8598d91015435663c54142db95d ); Py_INCREF( const_str_digest_11e8d8598d91015435663c54142db95d );
    PyTuple_SET_ITEM( const_tuple_a41d4e0762ac86b3dbefc3dc8a8c734f_tuple, 1, const_str_plain_rb ); Py_INCREF( const_str_plain_rb );
    PyTuple_SET_ITEM( const_tuple_a41d4e0762ac86b3dbefc3dc8a8c734f_tuple, 2, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_tuple_bc5cc8be15abab541948a5b2daf979c6_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_bc5cc8be15abab541948a5b2daf979c6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bc5cc8be15abab541948a5b2daf979c6_tuple, 1, const_str_plain_package_dir ); Py_INCREF( const_str_plain_package_dir );
    PyTuple_SET_ITEM( const_tuple_bc5cc8be15abab541948a5b2daf979c6_tuple, 2, const_str_plain_parent_path ); Py_INCREF( const_str_plain_parent_path );
    PyTuple_SET_ITEM( const_tuple_bc5cc8be15abab541948a5b2daf979c6_tuple, 3, const_str_plain_parent_package ); Py_INCREF( const_str_plain_parent_package );
    const_tuple_bd2935314dd71066f754bd83a727315e_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_bd2935314dd71066f754bd83a727315e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bd2935314dd71066f754bd83a727315e_tuple, 1, const_str_plain_sys ); Py_INCREF( const_str_plain_sys );
    PyTuple_SET_ITEM( const_tuple_bd2935314dd71066f754bd83a727315e_tuple, 2, const_str_plain_titles ); Py_INCREF( const_str_plain_titles );
    PyTuple_SET_ITEM( const_tuple_bd2935314dd71066f754bd83a727315e_tuple, 3, const_str_plain_symbols ); Py_INCREF( const_str_plain_symbols );
    PyTuple_SET_ITEM( const_tuple_bd2935314dd71066f754bd83a727315e_tuple, 4, const_str_plain_package_name ); Py_INCREF( const_str_plain_package_name );
    PyTuple_SET_ITEM( const_tuple_bd2935314dd71066f754bd83a727315e_tuple, 5, const_str_plain_info_module ); Py_INCREF( const_str_plain_info_module );
    PyTuple_SET_ITEM( const_tuple_bd2935314dd71066f754bd83a727315e_tuple, 6, const_str_plain_global_symbols ); Py_INCREF( const_str_plain_global_symbols );
    PyTuple_SET_ITEM( const_tuple_bd2935314dd71066f754bd83a727315e_tuple, 7, const_str_plain_fullname ); Py_INCREF( const_str_plain_fullname );
    PyTuple_SET_ITEM( const_tuple_bd2935314dd71066f754bd83a727315e_tuple, 8, const_str_plain_note ); Py_INCREF( const_str_plain_note );
    PyTuple_SET_ITEM( const_tuple_bd2935314dd71066f754bd83a727315e_tuple, 9, const_str_plain_retstr ); Py_INCREF( const_str_plain_retstr );
    const_tuple_d944964a5523d549fa9755e7fb2428ee_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_d944964a5523d549fa9755e7fb2428ee_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d944964a5523d549fa9755e7fb2428ee_tuple, 1, const_str_plain_package_dir ); Py_INCREF( const_str_plain_package_dir );
    PyTuple_SET_ITEM( const_tuple_d944964a5523d549fa9755e7fb2428ee_tuple, 2, const_str_plain_parent_path ); Py_INCREF( const_str_plain_parent_path );
    PyTuple_SET_ITEM( const_tuple_d944964a5523d549fa9755e7fb2428ee_tuple, 3, const_str_plain_parent_package ); Py_INCREF( const_str_plain_parent_package );
    PyTuple_SET_ITEM( const_tuple_d944964a5523d549fa9755e7fb2428ee_tuple, 4, const_str_plain_glob ); Py_INCREF( const_str_plain_glob );
    PyTuple_SET_ITEM( const_tuple_d944964a5523d549fa9755e7fb2428ee_tuple, 5, const_str_plain_files ); Py_INCREF( const_str_plain_files );
    PyTuple_SET_ITEM( const_tuple_d944964a5523d549fa9755e7fb2428ee_tuple, 6, const_str_plain_info_file ); Py_INCREF( const_str_plain_info_file );
    PyTuple_SET_ITEM( const_tuple_d944964a5523d549fa9755e7fb2428ee_tuple, 7, const_str_plain_info_files ); Py_INCREF( const_str_plain_info_files );
    PyTuple_SET_ITEM( const_tuple_d944964a5523d549fa9755e7fb2428ee_tuple, 8, const_str_plain_package_name ); Py_INCREF( const_str_plain_package_name );
    const_tuple_str_plain_self_str_plain_info_module_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_info_module_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_info_module_tuple, 1, const_str_plain_info_module ); Py_INCREF( const_str_plain_info_module );
    const_tuple_str_digest_9efc314b65237d5d646e1b817372afc6_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_9efc314b65237d5d646e1b817372afc6_tuple, 0, const_str_digest_9efc314b65237d5d646e1b817372afc6 ); Py_INCREF( const_str_digest_9efc314b65237d5d646e1b817372afc6 );
    const_tuple_str_plain_self_str_plain_cmdstr_str_plain_frame_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cmdstr_str_plain_frame_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cmdstr_str_plain_frame_tuple, 1, const_str_plain_cmdstr ); Py_INCREF( const_str_plain_cmdstr );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cmdstr_str_plain_frame_tuple, 2, const_str_plain_frame ); Py_INCREF( const_str_plain_frame );
    const_tuple_str_plain_self_str_plain_titles_str_plain_colsep_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_titles_str_plain_colsep_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_titles_str_plain_colsep_tuple, 1, const_str_plain_titles ); Py_INCREF( const_str_plain_titles );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_titles_str_plain_colsep_tuple, 2, const_str_plain_colsep ); Py_INCREF( const_str_plain_colsep );
    const_tuple_str_plain_self_str_plain_verbose_str_plain_infunc_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_verbose_str_plain_infunc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_verbose_str_plain_infunc_tuple, 1, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_verbose_str_plain_infunc_tuple, 2, const_str_plain_infunc ); Py_INCREF( const_str_plain_infunc );
    const_tuple_str_plain_self_str_plain_packages_str_plain_options_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_packages_str_plain_options_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_packages_str_plain_options_tuple, 1, const_str_plain_packages ); Py_INCREF( const_str_plain_packages );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_packages_str_plain_options_tuple, 2, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    const_tuple_str_plain_self_str_plain_info_module_str_plain_title_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_info_module_str_plain_title_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_info_module_str_plain_title_tuple, 1, const_str_plain_info_module ); Py_INCREF( const_str_plain_info_module );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_info_module_str_plain_title_tuple, 2, const_str_plain_title ); Py_INCREF( const_str_plain_title );
    const_tuple_str_plain_self_str_plain_obj_str_plain_module_str_plain_file_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_obj_str_plain_module_str_plain_file_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_obj_str_plain_module_str_plain_file_tuple, 1, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_obj_str_plain_module_str_plain_file_tuple, 2, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_obj_str_plain_module_str_plain_file_tuple, 3, const_str_plain_file ); Py_INCREF( const_str_plain_file );
}

// The module code objects.
static PyCodeObject *codeobj_856cbbe341d355e2bd58e46ff80e1339;
static PyCodeObject *codeobj_a1059d21c2e01dfb080fc990ba2bd189;
static PyCodeObject *codeobj_2b9a9ab4dd66f895f880a6ce59d5eae6;
static PyCodeObject *codeobj_9fd361331f15148c84d03ea48e7e21b6;
static PyCodeObject *codeobj_d6b2c69985c8dde68735b160df023578;
static PyCodeObject *codeobj_cc25547bbde8d7bcd8bf6511ff134efa;
static PyCodeObject *codeobj_f86f75e0e6435006a73af9a92827f7ed;
static PyCodeObject *codeobj_f35389d9de8aea48f9537ff6f56e09bf;
static PyCodeObject *codeobj_7e9a359e88a2e1a0a278dcd55257bef4;
static PyCodeObject *codeobj_e1cd7612fb28a5f06d8cb58b4ea10812;
static PyCodeObject *codeobj_dac77975f48158a2a19fb77ddeafb95f;
static PyCodeObject *codeobj_e4cb7c95659a47f24b25fbb1acdc9a4a;
static PyCodeObject *codeobj_0c4483728f10f035e9206a74f2953ac0;
static PyCodeObject *codeobj_655238a35c3748259407b3cb8b2123e7;
static PyCodeObject *codeobj_26b2ba45c36b42bf9948a294cc52121e;
static PyCodeObject *codeobj_a26acd223b6d8d00a52f4927d8e834d3;
static PyCodeObject *codeobj_985be0986def9269686d31941a05ea63;
static PyCodeObject *codeobj_fd669c340e64da61ce164b76fe141b95;
static PyCodeObject *codeobj_aa35f0f694e8859627e3d63a346802ed;
static PyCodeObject *codeobj_b34f3373171b74a656dc5003737de60f;
static PyCodeObject *codeobj_df6ec2df30c1972c89975d392e4a847e;
static PyCodeObject *codeobj_5bd4abb831b277e7b20a4a50b28b77f7;
static PyCodeObject *codeobj_138705a5a8ec8199ceb74b752fbba530;
static PyCodeObject *codeobj_85a1c917bc15c264a14a9f5b8c548848;
static PyCodeObject *codeobj_b1c5c0971d321ed5dd7fc4cd5b90cbd7;
static PyCodeObject *codeobj_6aa79fbf33a8e058edf5448870064b4e;
static PyCodeObject *codeobj_a4b33b4568da6924ac9a75f1f7271c10;
static PyCodeObject *codeobj_10114983f9e153fdbaa88285f161ee34;

static void _initModuleCodeObjects(void)
{
    codeobj_856cbbe341d355e2bd58e46ff80e1339 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain_PackageLoader, 8, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a1059d21c2e01dfb080fc990ba2bd189 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain_PackageLoaderDebug, 336, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2b9a9ab4dd66f895f880a6ce59d5eae6 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain___call__, 130, const_tuple_str_plain_self_str_plain_packages_str_plain_options_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9fd361331f15148c84d03ea48e7e21b6 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain___call__, 130, const_tuple_53140452c2bde9b5bfca9552b5910f91_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d6b2c69985c8dde68735b160df023578 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain___init__, 9, const_tuple_str_plain_self_str_plain_verbose_str_plain_infunc_tuple, 3, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cc25547bbde8d7bcd8bf6511ff134efa = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain___init__, 9, const_tuple_356a5da41c95fb22e3969f77f4542df3_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f86f75e0e6435006a73af9a92827f7ed = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__execcmd, 241, const_tuple_str_plain_self_str_plain_cmdstr_tuple, 2, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f35389d9de8aea48f9537ff6f56e09bf = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__execcmd, 241, const_tuple_253c225a4f67d9038512828a71f751d3_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7e9a359e88a2e1a0a278dcd55257bef4 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__execcmd, 337, const_tuple_str_plain_self_str_plain_cmdstr_tuple, 2, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e1cd7612fb28a5f06d8cb58b4ea10812 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__execcmd, 337, const_tuple_str_plain_self_str_plain_cmdstr_str_plain_frame_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dac77975f48158a2a19fb77ddeafb95f = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__format_titles, 285, const_tuple_str_plain_self_str_plain_titles_str_plain_colsep_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e4cb7c95659a47f24b25fbb1acdc9a4a = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__format_titles, 285, const_tuple_2f245d3dbc5a4da1375acc65034f3d1a_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0c4483728f10f035e9206a74f2953ac0 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__get_doc_title, 273, const_tuple_str_plain_self_str_plain_info_module_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_655238a35c3748259407b3cb8b2123e7 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__get_doc_title, 273, const_tuple_str_plain_self_str_plain_info_module_str_plain_title_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_26b2ba45c36b42bf9948a294cc52121e = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__get_info_files, 31, const_tuple_bc5cc8be15abab541948a5b2daf979c6_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a26acd223b6d8d00a52f4927d8e834d3 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__get_info_files, 31, const_tuple_d944964a5523d549fa9755e7fb2428ee_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_985be0986def9269686d31941a05ea63 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__get_sorted_names, 104, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fd669c340e64da61ce164b76fe141b95 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__get_sorted_names, 104, const_tuple_a211bc052621177dd756b1e67d96b3e5_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aa35f0f694e8859627e3d63a346802ed = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__import_tools, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b34f3373171b74a656dc5003737de60f = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__init_info_modules, 51, const_tuple_str_plain_self_str_plain_packages_tuple, 2, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_df6ec2df30c1972c89975d392e4a847e = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__init_info_modules, 51, const_tuple_64ec498c1f2916dce37159a12cac6283_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5bd4abb831b277e7b20a4a50b28b77f7 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__obj2repr, 253, const_tuple_str_plain_self_str_plain_obj_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_138705a5a8ec8199ceb74b752fbba530 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain__obj2repr, 253, const_tuple_str_plain_self_str_plain_obj_str_plain_module_str_plain_file_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_85a1c917bc15c264a14a9f5b8c548848 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain_error, 269, const_tuple_str_plain_self_str_plain_mess_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b1c5c0971d321ed5dd7fc4cd5b90cbd7 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain_get_pkgdocs, 306, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6aa79fbf33a8e058edf5448870064b4e = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain_get_pkgdocs, 306, const_tuple_bd2935314dd71066f754bd83a727315e_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a4b33b4568da6924ac9a75f1f7271c10 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain_log, 263, const_tuple_str_plain_self_str_plain_mess_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_10114983f9e153fdbaa88285f161ee34 = MAKE_CODEOBJ( const_str_digest_8b7e7422bb361153223c2b041094f774, const_str_plain_warn, 266, const_tuple_str_plain_self_str_plain_mess_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_PackageLoader_of_module_numpy$_import_tools(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_PackageLoaderDebug_of_module_numpy$_import_tools(  );


NUITKA_CROSS_MODULE PyObject *impl_function_3_complex_call_helper_star_list_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_star_arg_list );


static PyObject *MAKE_FUNCTION_function_10_error_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );


static PyObject *MAKE_FUNCTION_function_11__get_doc_title_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );


static PyObject *MAKE_FUNCTION_function_12__format_titles_of_class_1_PackageLoader_of_module_numpy$_import_tools( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_13_get_pkgdocs_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_PackageLoader_of_module_numpy$_import_tools( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1__execcmd_of_class_2_PackageLoaderDebug_of_module_numpy$_import_tools(  );


static PyObject *MAKE_FUNCTION_function_2__get_info_files_of_class_1_PackageLoader_of_module_numpy$_import_tools( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3__init_info_modules_of_class_1_PackageLoader_of_module_numpy$_import_tools( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4__get_sorted_names_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );


static PyObject *MAKE_FUNCTION_function_5___call___of_class_1_PackageLoader_of_module_numpy$_import_tools(  );


static PyObject *MAKE_FUNCTION_function_6__execcmd_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );


static PyObject *MAKE_FUNCTION_function_7__obj2repr_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );


static PyObject *MAKE_FUNCTION_function_8_log_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );


static PyObject *MAKE_FUNCTION_function_9_warn_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_PackageLoader_of_module_numpy$_import_tools(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var__get_info_files;
    PyObjectLocalVariable var__init_info_modules;
    PyObjectLocalVariable var__get_sorted_names;
    PyObjectLocalVariable var___call__;
    PyObjectLocalVariable var__execcmd;
    PyObjectLocalVariable var__obj2repr;
    PyObjectLocalVariable var_log;
    PyObjectLocalVariable var_warn;
    PyObjectLocalVariable var_error;
    PyObjectLocalVariable var__get_doc_title;
    PyObjectLocalVariable var__format_titles;
    PyObjectLocalVariable var_get_pkgdocs;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_5872bd087d95898a8e06c737a9ac43d0;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_856cbbe341d355e2bd58e46ff80e1339, module_numpy$_import_tools );
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
    tmp_defaults_1 = const_tuple_false_false_tuple;
    tmp_assign_source_2 = MAKE_FUNCTION_function_1___init___of_class_1_PackageLoader_of_module_numpy$_import_tools( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_2;

    tmp_defaults_2 = const_tuple_none_tuple;
    tmp_assign_source_3 = MAKE_FUNCTION_function_2__get_info_files_of_class_1_PackageLoader_of_module_numpy$_import_tools( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    assert( var__get_info_files.object == NULL );
    var__get_info_files.object = tmp_assign_source_3;

    tmp_defaults_3 = const_tuple_none_tuple;
    tmp_assign_source_4 = MAKE_FUNCTION_function_3__init_info_modules_of_class_1_PackageLoader_of_module_numpy$_import_tools( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    assert( var__init_info_modules.object == NULL );
    var__init_info_modules.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_4__get_sorted_names_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    assert( var__get_sorted_names.object == NULL );
    var__get_sorted_names.object = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_5___call___of_class_1_PackageLoader_of_module_numpy$_import_tools(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    assert( var___call__.object == NULL );
    var___call__.object = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_6__execcmd_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    assert( var__execcmd.object == NULL );
    var__execcmd.object = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_7__obj2repr_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    assert( var__obj2repr.object == NULL );
    var__obj2repr.object = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_8_log_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }
    assert( var_log.object == NULL );
    var_log.object = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_function_9_warn_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_function->f_lineno = 266;
        goto frame_exception_exit_1;
    }
    assert( var_warn.object == NULL );
    var_warn.object = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_function_10_error_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    assert( var_error.object == NULL );
    var_error.object = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_function_11__get_doc_title_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_12 );

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    assert( var__get_doc_title.object == NULL );
    var__get_doc_title.object = tmp_assign_source_12;

    tmp_defaults_4 = const_tuple_str_digest_9efc314b65237d5d646e1b817372afc6_tuple;
    tmp_assign_source_13 = MAKE_FUNCTION_function_12__format_titles_of_class_1_PackageLoader_of_module_numpy$_import_tools( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_13 );

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    assert( var__format_titles.object == NULL );
    var__format_titles.object = tmp_assign_source_13;

    tmp_assign_source_14 = MAKE_FUNCTION_function_13_get_pkgdocs_of_class_1_PackageLoader_of_module_numpy$_import_tools(  );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_14 );

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    assert( var_get_pkgdocs.object == NULL );
    var_get_pkgdocs.object = tmp_assign_source_14;


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
    if ((var__get_info_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__get_info_files,
            var__get_info_files.object
        );

    }
    if ((var__init_info_modules.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__init_info_modules,
            var__init_info_modules.object
        );

    }
    if ((var__get_sorted_names.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__get_sorted_names,
            var__get_sorted_names.object
        );

    }
    if ((var___call__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___call__,
            var___call__.object
        );

    }
    if ((var__execcmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__execcmd,
            var__execcmd.object
        );

    }
    if ((var__obj2repr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__obj2repr,
            var__obj2repr.object
        );

    }
    if ((var_log.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_log,
            var_log.object
        );

    }
    if ((var_warn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_warn,
            var_warn.object
        );

    }
    if ((var_error.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_error,
            var_error.object
        );

    }
    if ((var__get_doc_title.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__get_doc_title,
            var__get_doc_title.object
        );

    }
    if ((var__format_titles.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__format_titles,
            var__format_titles.object
        );

    }
    if ((var_get_pkgdocs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_get_pkgdocs,
            var_get_pkgdocs.object
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
    if ((var__get_info_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__get_info_files,
            var__get_info_files.object
        );

    }
    if ((var__init_info_modules.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__init_info_modules,
            var__init_info_modules.object
        );

    }
    if ((var__get_sorted_names.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__get_sorted_names,
            var__get_sorted_names.object
        );

    }
    if ((var___call__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___call__,
            var___call__.object
        );

    }
    if ((var__execcmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__execcmd,
            var__execcmd.object
        );

    }
    if ((var__obj2repr.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__obj2repr,
            var__obj2repr.object
        );

    }
    if ((var_log.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_log,
            var_log.object
        );

    }
    if ((var_warn.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_warn,
            var_warn.object
        );

    }
    if ((var_error.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_error,
            var_error.object
        );

    }
    if ((var__get_doc_title.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__get_doc_title,
            var__get_doc_title.object
        );

    }
    if ((var__format_titles.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__format_titles,
            var__format_titles.object
        );

    }
    if ((var_get_pkgdocs.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_get_pkgdocs,
            var_get_pkgdocs.object
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


static PyObject *impl_function_1___init___of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_verbose, PyObject *_python_par_infunc )
{
    // No context is used.

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_verbose; par_verbose.object = _python_par_verbose;
    PyObjectLocalVariable par_infunc; par_infunc.object = _python_par_infunc;
    PyObjectLocalVariable var__level;
    PyObjectLocalVariable var_frame;
    PyObjectLocalVariable var_parent_path;
    PyObjectTempVariable tmp_assign_unpack_1__assign_source;
    PyObjectTempVariable tmp_exec_1__globals;
    PyObjectTempVariable tmp_exec_1__locals;
    PyObjectTempVariable tmp_exec_1__source;
    PyObjectTempVariable tmp_eval_1__globals;
    PyObjectTempVariable tmp_eval_1__locals;
    PyObjectTempVariable tmp_eval_1__source;
    PyObjectTempVariable tmp_eval_2__globals;
    PyObjectTempVariable tmp_eval_2__locals;
    PyObjectTempVariable tmp_eval_2__source;
    PyObjectTempVariable tmp_eval_3__globals;
    PyObjectTempVariable tmp_eval_3__locals;
    PyObjectTempVariable tmp_eval_3__source;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_eval_compiled_1;
    PyObject *tmp_eval_compiled_2;
    PyObject *tmp_eval_compiled_3;
    PyObject *tmp_eval_globals_1;
    PyObject *tmp_eval_globals_2;
    PyObject *tmp_eval_globals_3;
    PyObject *tmp_eval_globals_4;
    PyObject *tmp_eval_locals_1;
    PyObject *tmp_eval_locals_2;
    PyObject *tmp_eval_locals_3;
    PyObject *tmp_eval_locals_4;
    PyObject *tmp_eval_source_1;
    PyObject *tmp_eval_source_2;
    PyObject *tmp_eval_source_3;
    PyObject *tmp_eval_source_4;
    PyObject *tmp_exec_compiled_1;
    PyObject *tmp_exec_result_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_is_5;
    bool tmp_is_6;
    bool tmp_is_7;
    bool tmp_is_8;
    bool tmp_is_9;
    bool tmp_is_10;
    bool tmp_is_11;
    bool tmp_is_12;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_cls_5;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_isinstance_inst_5;
    PyObject *tmp_list_element_1;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d6b2c69985c8dde68735b160df023578, module_numpy$_import_tools );
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
    tmp_cond_value_1 = par_infunc.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48800 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 13;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 13;
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
    tmp_assign_source_1 = const_int_pos_2;
    assert( var__level.object == NULL );
    var__level.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_2 = const_int_pos_1;
    assert( var__level.object == NULL );
    var__level.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    branch_end_1:;
    // Tried code
    tmp_source_name_1 = PyDict_GetItem( locals_dict, const_str_plain_sys );

    if ( tmp_source_name_1 == NULL )
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_sys );
        if (unlikely( tmp_source_name_1 == NULL ))
        {
            tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 17;
        goto try_finally_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__getframe );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 17;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = var__level.object;

    frame_function->f_lineno = 17;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 17;
        goto try_finally_handler_1;
    }
    assert( tmp_assign_unpack_1__assign_source.object == NULL );
    tmp_assign_unpack_1__assign_source.object = tmp_assign_source_3;

    tmp_assattr_name_1 = tmp_assign_unpack_1__assign_source.object;

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 17;
        goto try_finally_handler_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_parent_frame, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 17;
        goto try_finally_handler_1;
    }
    tmp_assign_source_4 = tmp_assign_unpack_1__assign_source.object;

    assert( var_frame.object == NULL );
    var_frame.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

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
    Py_XDECREF( tmp_assign_unpack_1__assign_source.object );
    tmp_assign_unpack_1__assign_source.object = NULL;

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
    tmp_assattr_name_2 = NULL;
    // Tried code
    tmp_source_name_2 = var_frame.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 18;
        goto try_finally_handler_2;
    }

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_f_globals );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 18;
        goto try_finally_handler_2;
    }
    assert( tmp_eval_1__globals.object == NULL );
    tmp_eval_1__globals.object = tmp_assign_source_5;

    tmp_source_name_3 = var_frame.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 18;
        goto try_finally_handler_2;
    }

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_f_locals );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 18;
        goto try_finally_handler_2;
    }
    assert( tmp_eval_1__locals.object == NULL );
    tmp_eval_1__locals.object = tmp_assign_source_6;

    tmp_compare_left_1 = tmp_eval_1__locals.object;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if (tmp_is_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_compare_left_2 = tmp_eval_1__globals.object;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_2)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_7 = INCREASE_REFCOUNT( locals_dict );
    if ((var__level.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_7,
            const_str_plain__level,
            var__level.object
        );

    }
    if ((var_frame.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_7,
            const_str_plain_frame,
            var_frame.object
        );

    }
    if ((var_parent_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_7,
            const_str_plain_parent_path,
            var_parent_path.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_7,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_7,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_infunc.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_7,
            const_str_plain_infunc,
            par_infunc.object
        );

    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_7 = tmp_eval_1__globals.object;

    Py_INCREF( tmp_assign_source_7 );
    condexpr_end_1:;
    assert( tmp_eval_1__locals.object != NULL );
    {
        PyObject *old = tmp_eval_1__locals.object;
        tmp_eval_1__locals.object = tmp_assign_source_7;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_compare_left_3 = tmp_eval_1__globals.object;

    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_3)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_8 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    assert( tmp_eval_1__globals.object != NULL );
    {
        PyObject *old = tmp_eval_1__globals.object;
        tmp_eval_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_assign_source_9 = const_str_plain___name__;
    assert( tmp_eval_1__source.object == NULL );
    tmp_eval_1__source.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    tmp_isinstance_inst_1 = tmp_eval_1__source.object;

    tmp_isinstance_cls_1 = (PyObject *)&PyCode_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 18;
        goto try_finally_handler_2;
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
    tmp_source_name_4 = tmp_eval_1__source.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_strip );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 18;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_2 = const_str_digest_36a0ff6adef8f150baa070bcc241cce5;
    frame_function->f_lineno = 18;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 18;
        goto try_finally_handler_2;
    }
    assert( tmp_eval_1__source.object != NULL );
    {
        PyObject *old = tmp_eval_1__source.object;
        tmp_eval_1__source.object = tmp_assign_source_10;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_eval_source_1 = tmp_eval_1__source.object;

    tmp_eval_globals_1 = tmp_eval_1__globals.object;

    tmp_eval_locals_1 = tmp_eval_1__locals.object;

    tmp_eval_compiled_1 = COMPILE_CODE( tmp_eval_source_1, const_str_angle_string, const_str_plain_eval, NULL, NULL );
    if ( tmp_eval_compiled_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 18;
        goto try_finally_handler_2;
    }
    tmp_assattr_name_2 = EVAL_CODE( tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1 );
    Py_DECREF( tmp_eval_compiled_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 18;
        goto try_finally_handler_2;
    }
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
    tmp_result = tmp_eval_1__globals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_eval_1__globals.object );
        tmp_eval_1__globals.object = NULL;
    }

    assert( tmp_result != false );
    tmp_result = tmp_eval_1__locals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_eval_1__locals.object );
        tmp_eval_1__locals.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_eval_1__source.object );
    tmp_eval_1__source.object = NULL;

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
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 18;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_parent_name, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_function->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_assign_source_11 = NULL;
    // Tried code
    tmp_source_name_5 = var_frame.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 19;
        goto try_finally_handler_3;
    }

    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_f_globals );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 19;
        goto try_finally_handler_3;
    }
    assert( tmp_eval_2__globals.object == NULL );
    tmp_eval_2__globals.object = tmp_assign_source_12;

    tmp_source_name_6 = var_frame.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 19;
        goto try_finally_handler_3;
    }

    tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_f_locals );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 19;
        goto try_finally_handler_3;
    }
    assert( tmp_eval_2__locals.object == NULL );
    tmp_eval_2__locals.object = tmp_assign_source_13;

    tmp_compare_left_4 = tmp_eval_2__locals.object;

    tmp_compare_right_4 = Py_None;
    tmp_is_4 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if (tmp_is_4)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_compare_left_5 = tmp_eval_2__globals.object;

    tmp_compare_right_5 = Py_None;
    tmp_is_5 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if (tmp_is_5)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_assign_source_14 = INCREASE_REFCOUNT( locals_dict );
    if ((var__level.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_14,
            const_str_plain__level,
            var__level.object
        );

    }
    if ((var_frame.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_14,
            const_str_plain_frame,
            var_frame.object
        );

    }
    if ((var_parent_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_14,
            const_str_plain_parent_path,
            var_parent_path.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_14,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_14,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_infunc.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_14,
            const_str_plain_infunc,
            par_infunc.object
        );

    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_14 = tmp_eval_2__globals.object;

    Py_INCREF( tmp_assign_source_14 );
    condexpr_end_2:;
    assert( tmp_eval_2__locals.object != NULL );
    {
        PyObject *old = tmp_eval_2__locals.object;
        tmp_eval_2__locals.object = tmp_assign_source_14;
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_compare_left_6 = tmp_eval_2__globals.object;

    tmp_compare_right_6 = Py_None;
    tmp_is_6 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    if (tmp_is_6)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_15 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    assert( tmp_eval_2__globals.object != NULL );
    {
        PyObject *old = tmp_eval_2__globals.object;
        tmp_eval_2__globals.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
        Py_DECREF( old );
    }

    branch_no_6:;
    tmp_assign_source_16 = const_str_plain___path__;
    assert( tmp_eval_2__source.object == NULL );
    tmp_eval_2__source.object = INCREASE_REFCOUNT( tmp_assign_source_16 );

    tmp_isinstance_inst_2 = tmp_eval_2__source.object;

    tmp_isinstance_cls_2 = (PyObject *)&PyCode_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 19;
        goto try_finally_handler_3;
    }
    if (tmp_res == 1)
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    tmp_source_name_7 = tmp_eval_2__source.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_strip );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 19;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_3 = const_str_digest_36a0ff6adef8f150baa070bcc241cce5;
    frame_function->f_lineno = 19;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 19;
        goto try_finally_handler_3;
    }
    assert( tmp_eval_2__source.object != NULL );
    {
        PyObject *old = tmp_eval_2__source.object;
        tmp_eval_2__source.object = tmp_assign_source_17;
        Py_DECREF( old );
    }

    branch_no_7:;
    tmp_eval_source_2 = tmp_eval_2__source.object;

    tmp_eval_globals_2 = tmp_eval_2__globals.object;

    tmp_eval_locals_2 = tmp_eval_2__locals.object;

    tmp_eval_compiled_2 = COMPILE_CODE( tmp_eval_source_2, const_str_angle_string, const_str_plain_eval, NULL, NULL );
    if ( tmp_eval_compiled_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 19;
        goto try_finally_handler_3;
    }
    tmp_assign_source_11 = EVAL_CODE( tmp_eval_compiled_2, tmp_eval_globals_2, tmp_eval_locals_2 );
    Py_DECREF( tmp_eval_compiled_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 19;
        goto try_finally_handler_3;
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
    tmp_result = tmp_eval_2__globals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_eval_2__globals.object );
        tmp_eval_2__globals.object = NULL;
    }

    assert( tmp_result != false );
    tmp_result = tmp_eval_2__locals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_eval_2__locals.object );
        tmp_eval_2__locals.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_eval_2__source.object );
    tmp_eval_2__source.object = NULL;

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
    assert( var_parent_path.object == NULL );
    var_parent_path.object = tmp_assign_source_11;

    tmp_isinstance_inst_3 = var_parent_path.object;

    tmp_isinstance_cls_3 = LOOKUP_BUILTIN( const_str_plain_str );
    if ( tmp_isinstance_cls_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_18 = PyList_New( 1 );
    tmp_list_element_1 = var_parent_path.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_18, 0, tmp_list_element_1 );
    assert( var_parent_path.object != NULL );
    {
        PyObject *old = var_parent_path.object;
        var_parent_path.object = tmp_assign_source_18;
        Py_DECREF( old );
    }

    branch_no_8:;
    tmp_assattr_name_3 = var_parent_path.object;

    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_parent_path, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_7 = const_str_plain___all__;
    tmp_source_name_8 = var_frame.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_f_locals );
    if ( tmp_compare_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_7 );

        frame_function->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_7 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    // Tried code
    tmp_source_name_9 = var_frame.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 24;
        goto try_finally_handler_4;
    }

    tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_f_globals );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_4;
    }
    assert( tmp_exec_1__globals.object == NULL );
    tmp_exec_1__globals.object = tmp_assign_source_19;

    tmp_source_name_10 = var_frame.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 24;
        goto try_finally_handler_4;
    }

    tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_f_locals );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_4;
    }
    assert( tmp_exec_1__locals.object == NULL );
    tmp_exec_1__locals.object = tmp_assign_source_20;

    tmp_compare_left_8 = tmp_exec_1__locals.object;

    tmp_compare_right_8 = Py_None;
    tmp_is_7 = ( tmp_compare_left_8 == tmp_compare_right_8 );
    if (tmp_is_7)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_compare_left_9 = tmp_exec_1__globals.object;

    tmp_compare_right_9 = Py_None;
    tmp_is_8 = ( tmp_compare_left_9 == tmp_compare_right_9 );
    if (tmp_is_8)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_assign_source_21 = INCREASE_REFCOUNT( locals_dict );
    if ((var__level.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_21,
            const_str_plain__level,
            var__level.object
        );

    }
    if ((var_frame.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_21,
            const_str_plain_frame,
            var_frame.object
        );

    }
    if ((var_parent_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_21,
            const_str_plain_parent_path,
            var_parent_path.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_21,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_21,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_infunc.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_21,
            const_str_plain_infunc,
            par_infunc.object
        );

    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_21 = tmp_exec_1__globals.object;

    Py_INCREF( tmp_assign_source_21 );
    condexpr_end_3:;
    assert( tmp_exec_1__locals.object != NULL );
    {
        PyObject *old = tmp_exec_1__locals.object;
        tmp_exec_1__locals.object = tmp_assign_source_21;
        Py_DECREF( old );
    }

    branch_no_10:;
    tmp_compare_left_10 = tmp_exec_1__globals.object;

    tmp_compare_right_10 = Py_None;
    tmp_is_9 = ( tmp_compare_left_10 == tmp_compare_right_10 );
    if (tmp_is_9)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_22 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    assert( tmp_exec_1__globals.object != NULL );
    {
        PyObject *old = tmp_exec_1__globals.object;
        tmp_exec_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
        Py_DECREF( old );
    }

    branch_no_11:;
    tmp_assign_source_23 = const_str_digest_9a5cacdfc0d2e3263033cf34c45fd56a;
    assert( tmp_exec_1__source.object == NULL );
    tmp_exec_1__source.object = INCREASE_REFCOUNT( tmp_assign_source_23 );

    tmp_isinstance_inst_4 = tmp_exec_1__source.object;

    tmp_isinstance_cls_4 = (PyObject *)&PyFile_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_4;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_11 = tmp_exec_1__source.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_read );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 24;
    tmp_assign_source_24 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_4;
    }
    assert( tmp_exec_1__source.object != NULL );
    {
        PyObject *old = tmp_exec_1__source.object;
        tmp_exec_1__source.object = tmp_assign_source_24;
        Py_DECREF( old );
    }

    branch_no_12:;
    tmp_eval_source_3 = tmp_exec_1__source.object;

    tmp_eval_globals_3 = tmp_exec_1__globals.object;

    tmp_eval_locals_3 = tmp_exec_1__locals.object;

    tmp_exec_compiled_1 = COMPILE_CODE( tmp_eval_source_3, const_str_angle_string, const_str_plain_exec, NULL, NULL );
    if ( tmp_exec_compiled_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_4;
    }
    tmp_exec_result_1 = EVAL_CODE( tmp_exec_compiled_1, tmp_eval_globals_3, tmp_eval_locals_3 );
    Py_DECREF( tmp_exec_compiled_1 );
    if ( tmp_exec_result_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_exec_result_1 );
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

    tmp_tried_lineno_4 = frame_function->f_lineno;
    tmp_result = tmp_exec_1__globals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_exec_1__globals.object );
        tmp_exec_1__globals.object = NULL;
    }

    assert( tmp_result != false );
    tmp_result = tmp_exec_1__locals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_exec_1__locals.object );
        tmp_exec_1__locals.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_exec_1__source.object );
    tmp_exec_1__source.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto frame_exception_exit_1;
    }

    goto finally_end_4;
    finally_end_4:;
    branch_no_9:;
    tmp_assattr_name_4 = NULL;
    // Tried code
    tmp_source_name_12 = var_frame.object;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 25;
        goto try_finally_handler_5;
    }

    tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_f_globals );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto try_finally_handler_5;
    }
    assert( tmp_eval_3__globals.object == NULL );
    tmp_eval_3__globals.object = tmp_assign_source_25;

    tmp_source_name_13 = var_frame.object;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 25;
        goto try_finally_handler_5;
    }

    tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_f_locals );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto try_finally_handler_5;
    }
    assert( tmp_eval_3__locals.object == NULL );
    tmp_eval_3__locals.object = tmp_assign_source_26;

    tmp_compare_left_11 = tmp_eval_3__locals.object;

    tmp_compare_right_11 = Py_None;
    tmp_is_10 = ( tmp_compare_left_11 == tmp_compare_right_11 );
    if (tmp_is_10)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_compare_left_12 = tmp_eval_3__globals.object;

    tmp_compare_right_12 = Py_None;
    tmp_is_11 = ( tmp_compare_left_12 == tmp_compare_right_12 );
    if (tmp_is_11)
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_assign_source_27 = INCREASE_REFCOUNT( locals_dict );
    if ((var__level.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_27,
            const_str_plain__level,
            var__level.object
        );

    }
    if ((var_frame.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_27,
            const_str_plain_frame,
            var_frame.object
        );

    }
    if ((var_parent_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_27,
            const_str_plain_parent_path,
            var_parent_path.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_27,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_27,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_infunc.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_27,
            const_str_plain_infunc,
            par_infunc.object
        );

    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_27 = tmp_eval_3__globals.object;

    Py_INCREF( tmp_assign_source_27 );
    condexpr_end_4:;
    assert( tmp_eval_3__locals.object != NULL );
    {
        PyObject *old = tmp_eval_3__locals.object;
        tmp_eval_3__locals.object = tmp_assign_source_27;
        Py_DECREF( old );
    }

    branch_no_13:;
    tmp_compare_left_13 = tmp_eval_3__globals.object;

    tmp_compare_right_13 = Py_None;
    tmp_is_12 = ( tmp_compare_left_13 == tmp_compare_right_13 );
    if (tmp_is_12)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_assign_source_28 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    assert( tmp_eval_3__globals.object != NULL );
    {
        PyObject *old = tmp_eval_3__globals.object;
        tmp_eval_3__globals.object = INCREASE_REFCOUNT( tmp_assign_source_28 );
        Py_DECREF( old );
    }

    branch_no_14:;
    tmp_assign_source_29 = const_str_plain___all__;
    assert( tmp_eval_3__source.object == NULL );
    tmp_eval_3__source.object = INCREASE_REFCOUNT( tmp_assign_source_29 );

    tmp_isinstance_inst_5 = tmp_eval_3__source.object;

    tmp_isinstance_cls_5 = (PyObject *)&PyCode_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto try_finally_handler_5;
    }
    if (tmp_res == 1)
    {
        goto branch_no_15;
    }
    else
    {
        goto branch_yes_15;
    }
    branch_yes_15:;
    tmp_source_name_14 = tmp_eval_3__source.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_strip );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_4 = const_str_digest_36a0ff6adef8f150baa070bcc241cce5;
    frame_function->f_lineno = 25;
    tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto try_finally_handler_5;
    }
    assert( tmp_eval_3__source.object != NULL );
    {
        PyObject *old = tmp_eval_3__source.object;
        tmp_eval_3__source.object = tmp_assign_source_30;
        Py_DECREF( old );
    }

    branch_no_15:;
    tmp_eval_source_4 = tmp_eval_3__source.object;

    tmp_eval_globals_4 = tmp_eval_3__globals.object;

    tmp_eval_locals_4 = tmp_eval_3__locals.object;

    tmp_eval_compiled_3 = COMPILE_CODE( tmp_eval_source_4, const_str_angle_string, const_str_plain_eval, NULL, NULL );
    if ( tmp_eval_compiled_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto try_finally_handler_5;
    }
    tmp_assattr_name_4 = EVAL_CODE( tmp_eval_compiled_3, tmp_eval_globals_4, tmp_eval_locals_4 );
    Py_DECREF( tmp_eval_compiled_3 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto try_finally_handler_5;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    tmp_result = tmp_eval_3__globals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_eval_3__globals.object );
        tmp_eval_3__globals.object = NULL;
    }

    assert( tmp_result != false );
    tmp_result = tmp_eval_3__locals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_eval_3__locals.object );
        tmp_eval_3__locals.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_eval_3__source.object );
    tmp_eval_3__source.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto frame_exception_exit_1;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_assattr_target_4 = par_self.object;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_parent_export_names, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_assattr_name_5 = PyDict_New();
    tmp_assattr_target_5 = par_self.object;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_info_modules, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        frame_function->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_assattr_name_6 = PyList_New( 0 );
    tmp_assattr_target_6 = par_self.object;

    if ( tmp_assattr_target_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_imported_packages, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_assattr_name_7 = Py_None;
    tmp_assattr_target_7 = par_self.object;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_verbose, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 29;
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


    tmp_frame_locals = INCREASE_REFCOUNT( locals_dict );
    if ((var__level.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__level,
            var__level.object
        );

    }
    if ((var_frame.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_frame,
            var_frame.object
        );

    }
    if ((var_parent_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_parent_path,
            var_parent_path.object
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
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_infunc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_infunc,
            par_infunc.object
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
Py_DECREF( locals_dict );
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
Py_DECREF( locals_dict );
    return tmp_return_value;

}
static PyObject *fparse_function_1___init___of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_verbose = NULL;
    PyObject *_python_par_infunc = NULL;
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
            if ( found == false && const_str_plain_verbose == key )
            {
                assert( _python_par_verbose == NULL );
                _python_par_verbose = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_infunc == key )
            {
                assert( _python_par_infunc == NULL );
                _python_par_infunc = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_verbose, key ) == 1 )
            {
                assert( _python_par_verbose == NULL );
                _python_par_verbose = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_infunc, key ) == 1 )
            {
                assert( _python_par_infunc == NULL );
                _python_par_infunc = value;

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
    if (unlikely( args_given > 3 ))
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
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_verbose != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_verbose = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_verbose == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_verbose = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_infunc != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_infunc = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_infunc == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_infunc = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_verbose == NULL || _python_par_infunc == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_verbose, _python_par_infunc };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_1_PackageLoader_of_module_numpy$_import_tools( self, _python_par_self, _python_par_verbose, _python_par_infunc );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_verbose );
    Py_XDECREF( _python_par_infunc );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1___init___of_class_1_PackageLoader_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_PackageLoader_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__get_info_files_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_package_dir, PyObject *_python_par_parent_path, PyObject *_python_par_parent_package )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_package_dir; par_package_dir.object = _python_par_package_dir;
    PyObjectLocalVariable par_parent_path; par_parent_path.object = _python_par_parent_path;
    PyObjectLocalVariable par_parent_package; par_parent_package.object = _python_par_parent_package;
    PyObjectLocalVariable var_glob;
    PyObjectLocalVariable var_files;
    PyObjectLocalVariable var_info_file;
    PyObjectLocalVariable var_info_files;
    PyObjectLocalVariable var_package_name;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
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
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_26b2ba45c36b42bf9948a294cc52121e, module_numpy$_import_tools );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_glob.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_glob,
            var_glob.object
        );

    }
    if ((var_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_files,
            var_files.object
        );

    }
    if ((var_info_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_info_file,
            var_info_file.object
        );

    }
    if ((var_info_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_info_files,
            var_info_files.object
        );

    }
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_package_name,
            var_package_name.object
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
    if ((par_package_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_package_dir,
            par_package_dir.object
        );

    }
    if ((par_parent_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_parent_path,
            par_parent_path.object
        );

    }
    if ((par_parent_package.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_parent_package,
            par_parent_package.object
        );

    }
    frame_function->f_lineno = 34;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_glob, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_glob_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_glob );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    assert( var_glob.object == NULL );
    var_glob.object = tmp_assign_source_1;

    tmp_called_1 = var_glob.object;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_parent_path.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48852 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_package_dir.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48909 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = const_str_digest_4c16162a174f326ad9dd710cead815dd;
    frame_function->f_lineno = 35;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 35;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    assert( var_files.object == NULL );
    var_files.object = tmp_assign_source_2;

    tmp_called_3 = var_glob.object;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = par_parent_path.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48852 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = par_package_dir.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48909 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = const_str_digest_961ef41789d152654caa842dca7b0e16;
    frame_function->f_lineno = 36;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 36;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
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
        frame_function->f_lineno = 36;
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

    if (var_info_file.object == NULL)
    {
        var_info_file.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_info_file.object;
        var_info_file.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_info_file.object;

    tmp_compare_left_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 37;
        goto try_finally_handler_1;
    }
    tmp_compare_right_1 = var_files.object;

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48966 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 37;
        goto try_finally_handler_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 37;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_5 = var_files.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48966 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 38;
        goto try_finally_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_9 = var_info_file.object;

    frame_function->f_lineno = 38;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
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

    goto finally_end_1;
    finally_end_1:;
    tmp_assign_source_6 = PyList_New( 0 );
    assert( var_info_files.object == NULL );
    var_info_files.object = tmp_assign_source_6;

    tmp_iter_arg_2 = var_files.object;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48966 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_7;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_8 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 40;
            goto try_finally_handler_2;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    tmp_assign_source_9 = tmp_for_loop_2__iter_value.object;

    if (var_info_file.object == NULL)
    {
        var_info_file.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_info_file.object;
        var_info_file.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 41;
        goto try_finally_handler_2;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto try_finally_handler_2;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto try_finally_handler_2;
    }
    tmp_slice_source_2 = var_info_file.object;

    tmp_len_arg_1 = par_parent_path.object;

    if ( tmp_len_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48852 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 41;
        goto try_finally_handler_2;
    }

    tmp_binop_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 41;
        goto try_finally_handler_2;
    }
    tmp_binop_right_1 = const_int_pos_1;
    tmp_slice_lower_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_slice_lower_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 41;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_10 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_1, Py_None );
    Py_DECREF( tmp_slice_lower_1 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 41;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 41;
    tmp_source_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto try_finally_handler_2;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_replace );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto try_finally_handler_2;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_sep );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 42;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_12 = const_str_dot;
    frame_function->f_lineno = 42;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto try_finally_handler_2;
    }
    if (var_package_name.object == NULL)
    {
        var_package_name.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = var_package_name.object;
        var_package_name.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_cond_value_1 = par_parent_package.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49017 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto try_finally_handler_2;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto try_finally_handler_2;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_binop_left_3 = par_parent_package.object;

    if ( tmp_binop_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49017 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 44;
        goto try_finally_handler_2;
    }

    tmp_binop_right_3 = const_str_dot;
    tmp_binop_left_2 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 44;
        goto try_finally_handler_2;
    }
    tmp_binop_right_2 = var_package_name.object;

    tmp_assign_source_11 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 44;
        goto try_finally_handler_2;
    }
    assert( var_package_name.object != NULL );
    {
        PyObject *old = var_package_name.object;
        var_package_name.object = tmp_assign_source_11;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_source_name_10 = var_info_files.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49077 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 45;
        goto try_finally_handler_2;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_append );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_13 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_package_name.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_13, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_info_file.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_13, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 45;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = var_info_files.object;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49077 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto try_finally_handler_2;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_extend );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto try_finally_handler_2;
    }
    tmp_source_name_12 = par_self.object;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto try_finally_handler_2;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__get_info_files );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 46;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_15 = const_str_chr_42;
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 47;
        goto try_finally_handler_2;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_path );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 47;
        goto try_finally_handler_2;
    }
    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 47;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_17 = var_info_file.object;

    frame_function->f_lineno = 47;
    tmp_call_arg_element_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 47;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_18 = var_package_name.object;

    frame_function->f_lineno = 48;
    tmp_call_arg_element_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_10, tmp_call_arg_element_15, tmp_call_arg_element_16, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 48;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 46;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 40;
        goto try_finally_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

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
    tmp_return_value = var_info_files.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49077 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
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
    if ((var_glob.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_glob,
            var_glob.object
        );

    }
    if ((var_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_files,
            var_files.object
        );

    }
    if ((var_info_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info_file,
            var_info_file.object
        );

    }
    if ((var_info_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info_files,
            var_info_files.object
        );

    }
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package_name,
            var_package_name.object
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
    if ((par_package_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package_dir,
            par_package_dir.object
        );

    }
    if ((par_parent_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_parent_path,
            par_parent_path.object
        );

    }
    if ((par_parent_package.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_parent_package,
            par_parent_package.object
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
static PyObject *fparse_function_2__get_info_files_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_package_dir = NULL;
    PyObject *_python_par_parent_path = NULL;
    PyObject *_python_par_parent_package = NULL;
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
                PyErr_Format( PyExc_TypeError, "_get_info_files() keywords must be strings" );
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
            if ( found == false && const_str_plain_package_dir == key )
            {
                assert( _python_par_package_dir == NULL );
                _python_par_package_dir = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_parent_path == key )
            {
                assert( _python_par_parent_path == NULL );
                _python_par_parent_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_parent_package == key )
            {
                assert( _python_par_parent_package == NULL );
                _python_par_parent_package = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_package_dir, key ) == 1 )
            {
                assert( _python_par_package_dir == NULL );
                _python_par_package_dir = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_parent_path, key ) == 1 )
            {
                assert( _python_par_parent_path == NULL );
                _python_par_parent_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_parent_package, key ) == 1 )
            {
                assert( _python_par_parent_package == NULL );
                _python_par_parent_package = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_get_info_files() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_package_dir != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_package_dir = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_package_dir == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_package_dir = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_parent_path != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_parent_path = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_parent_path == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_parent_path = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_parent_package != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_parent_package = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_parent_package == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_parent_package = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_package_dir == NULL || _python_par_parent_path == NULL || _python_par_parent_package == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_package_dir, _python_par_parent_path, _python_par_parent_package };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2__get_info_files_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, _python_par_self, _python_par_package_dir, _python_par_parent_path, _python_par_parent_package );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_package_dir );
    Py_XDECREF( _python_par_parent_path );
    Py_XDECREF( _python_par_parent_package );

    return NULL;
}

static PyObject *dparse_function_2__get_info_files_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_2__get_info_files_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2__get_info_files_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__init_info_modules_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_packages )
{
    // No context is used.

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_packages; par_packages.object = _python_par_packages;
    PyObjectLocalVariable var_imp;
    PyObjectLocalVariable var_info_files;
    PyObjectLocalVariable var_info_modules;
    PyObjectLocalVariable var_path;
    PyObjectLocalVariable var_package_name;
    PyObjectLocalVariable var_package_dir;
    PyObjectLocalVariable var_names_files;
    PyObjectLocalVariable var_msg;
    PyObjectLocalVariable var_info_file;
    PyObjectLocalVariable var_fullname;
    PyObjectLocalVariable var_filedescriptor;
    PyObjectLocalVariable var_info_module;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_exec_1__globals;
    PyObjectTempVariable tmp_exec_1__locals;
    PyObjectTempVariable tmp_exec_1__source;
    PyObjectTempVariable tmp_for_loop_3__break_indicator;
    PyObjectTempVariable tmp_for_loop_4__for_iterator;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_or_1__value_1;
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
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
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
    PyObject *tmp_call_arg_element_16;
    PyObject *tmp_call_arg_element_17;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_eval_globals_1;
    PyObject *tmp_eval_locals_1;
    PyObject *tmp_eval_source_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_exec_compiled_1;
    PyObject *tmp_exec_result_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_is_5;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_locals_source;
    PyObject *tmp_locals_value;
    PyObject *tmp_next1_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    int tmp_tried_lineno_8;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b34f3373171b74a656dc5003737de60f, module_numpy$_import_tools );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    tmp_import_locals_1 = INCREASE_REFCOUNT( locals_dict );
    if ((var_imp.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_imp,
            var_imp.object
        );

    }
    if ((var_info_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_info_files,
            var_info_files.object
        );

    }
    if ((var_info_modules.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_info_modules,
            var_info_modules.object
        );

    }
    if ((var_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_path,
            var_path.object
        );

    }
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_package_name,
            var_package_name.object
        );

    }
    if ((var_package_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_package_dir,
            var_package_dir.object
        );

    }
    if ((var_names_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_names_files,
            var_names_files.object
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
    if ((var_info_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_info_file,
            var_info_file.object
        );

    }
    if ((var_fullname.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fullname,
            var_fullname.object
        );

    }
    if ((var_filedescriptor.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_filedescriptor,
            var_filedescriptor.object
        );

    }
    if ((var_info_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_info_module,
            var_info_module.object
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
    if ((par_packages.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_packages,
            par_packages.object
        );

    }
    frame_function->f_lineno = 54;
    tmp_assign_source_1 = IMPORT_MODULE( const_str_plain_imp, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    assert( var_imp.object == NULL );
    var_imp.object = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_info_files.object == NULL );
    var_info_files.object = tmp_assign_source_2;

    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_info_modules );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    assert( var_info_modules.object == NULL );
    var_info_modules.object = tmp_assign_source_3;

    tmp_compare_left_1 = par_packages.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48651 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if (tmp_is_1)
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

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_parent_path );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_4;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_5 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 59;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_assign_source_6 = tmp_for_loop_1__iter_value.object;

    if (var_path.object == NULL)
    {
        var_path.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = var_path.object;
        var_path.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    tmp_source_name_3 = var_info_files.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49077 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extend );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__get_info_files );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = const_str_chr_42;
    tmp_call_arg_element_3 = var_path.object;

    frame_function->f_lineno = 60;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 60;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
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

    goto finally_end_1;
    finally_end_1:;
    goto branch_end_1;
    branch_no_1:;
    tmp_iter_arg_2 = par_packages.object;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48651 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_7;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_8 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 62;
            goto try_finally_handler_2;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    tmp_assign_source_9 = tmp_for_loop_2__iter_value.object;

    if (var_package_name.object == NULL)
    {
        var_package_name.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_package_name.object;
        var_package_name.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_source_name_6 = PyDict_GetItem( locals_dict, const_str_plain_os );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_os );
        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto try_finally_handler_2;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto try_finally_handler_2;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto try_finally_handler_2;
    }
    tmp_source_name_7 = var_package_name.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_split );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );

        frame_function->f_lineno = 63;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_4 = const_str_dot;
    frame_function->f_lineno = 63;
    tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_dircall_arg2_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );

        frame_function->f_lineno = 63;
        goto try_finally_handler_2;
    }
    tmp_assign_source_10 = impl_function_3_complex_call_helper_star_list_of_module___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto try_finally_handler_2;
    }
    if (var_package_dir.object == NULL)
    {
        var_package_dir.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = var_package_dir.object;
        var_package_dir.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    // Tried code
    tmp_assign_source_11 = Py_False;
    if (tmp_for_loop_3__break_indicator.object == NULL)
    {
        tmp_for_loop_3__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = tmp_for_loop_3__break_indicator.object;
        tmp_for_loop_3__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 64;
        goto try_finally_handler_3;
    }

    tmp_iter_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_parent_path );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto try_finally_handler_3;
    }
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto try_finally_handler_3;
    }
    if (tmp_for_loop_3__for_iterator.object == NULL)
    {
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__for_iterator.object;
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_3:;
    // Tried block of try/except
    tmp_next1_arg_1 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next1_arg_1 );
    if ( tmp_assign_source_13 == NULL )
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


        frame_function->f_lineno = 64;
        goto try_except_handler_1;
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
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_compare_left_2 = exception_type;
    tmp_compare_right_2 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto try_finally_handler_4;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_14 = Py_True;
    if (tmp_for_loop_3__break_indicator.object == NULL)
    {
        tmp_for_loop_3__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = tmp_for_loop_3__break_indicator.object;
        tmp_for_loop_3__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );
    goto loop_end_3;
    goto branch_end_2;
    branch_no_2:;
    goto try_finally_handler_4;
    branch_end_2:;
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );

    try_except_end_1:;
    tmp_assign_source_15 = tmp_for_loop_3__iter_value.object;

    if (var_path.object == NULL)
    {
        var_path.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
    }
    else
    {
        PyObject *old = var_path.object;
        var_path.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
        Py_DECREF( old );
    }
    tmp_source_name_9 = par_self.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 65;
        goto try_finally_handler_4;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__get_info_files );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_5 = var_package_dir.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48909 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 65;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_6 = var_path.object;

    frame_function->f_lineno = 65;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
        goto try_finally_handler_4;
    }
    if (var_names_files.object == NULL)
    {
        var_names_files.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = var_names_files.object;
        var_names_files.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    tmp_cond_value_1 = var_names_files.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto try_finally_handler_4;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_10 = var_info_files.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49077 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto try_finally_handler_4;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_extend );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_7 = var_names_files.object;

    frame_function->f_lineno = 67;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_unused );
    goto loop_end_3;
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
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
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_finally_handler_3;
    }

    goto finally_end_2;
    finally_end_2:;
    tmp_compare_left_3 = tmp_for_loop_3__break_indicator.object;

    tmp_compare_right_3 = Py_True;
    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_2)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    // Tried block of try/except
    // Tried code
    tmp_assign_source_17 = Py_None;
    if (tmp_exec_1__globals.object == NULL)
    {
        tmp_exec_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
    }
    else
    {
        PyObject *old = tmp_exec_1__globals.object;
        tmp_exec_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
        Py_DECREF( old );
    }
    tmp_assign_source_18 = Py_None;
    if (tmp_exec_1__locals.object == NULL)
    {
        tmp_exec_1__locals.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
    }
    else
    {
        PyObject *old = tmp_exec_1__locals.object;
        tmp_exec_1__locals.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }
    tmp_compare_left_4 = tmp_exec_1__locals.object;

    tmp_compare_right_4 = Py_None;
    tmp_is_3 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if (tmp_is_3)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_compare_left_5 = tmp_exec_1__globals.object;

    tmp_compare_right_5 = Py_None;
    tmp_is_4 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if (tmp_is_4)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_19 = INCREASE_REFCOUNT( locals_dict );
    if ((var_imp.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_imp,
            var_imp.object
        );

    }
    if ((var_info_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_info_files,
            var_info_files.object
        );

    }
    if ((var_info_modules.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_info_modules,
            var_info_modules.object
        );

    }
    if ((var_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_path,
            var_path.object
        );

    }
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_package_name,
            var_package_name.object
        );

    }
    if ((var_package_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_package_dir,
            var_package_dir.object
        );

    }
    if ((var_names_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_names_files,
            var_names_files.object
        );

    }
    if ((var_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_msg,
            var_msg.object
        );

    }
    if ((var_info_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_info_file,
            var_info_file.object
        );

    }
    if ((var_fullname.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_fullname,
            var_fullname.object
        );

    }
    if ((var_filedescriptor.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_filedescriptor,
            var_filedescriptor.object
        );

    }
    if ((var_info_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_info_module,
            var_info_module.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_packages.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_19,
            const_str_plain_packages,
            par_packages.object
        );

    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_19 = tmp_exec_1__globals.object;

    Py_INCREF( tmp_assign_source_19 );
    condexpr_end_1:;
    assert( tmp_exec_1__locals.object != NULL );
    {
        PyObject *old = tmp_exec_1__locals.object;
        tmp_exec_1__locals.object = tmp_assign_source_19;
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_compare_left_6 = tmp_exec_1__globals.object;

    tmp_compare_right_6 = Py_None;
    tmp_is_5 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    if (tmp_is_5)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_20 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    assert( tmp_exec_1__globals.object != NULL );
    {
        PyObject *old = tmp_exec_1__globals.object;
        tmp_exec_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
        Py_DECREF( old );
    }

    branch_no_6:;
    tmp_binop_left_1 = const_str_digest_6b4552d3334eb7b352e823de2f2570b6;
    tmp_binop_right_1 = var_package_name.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }

    tmp_assign_source_21 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    if (tmp_exec_1__source.object == NULL)
    {
        tmp_exec_1__source.object = tmp_assign_source_21;
    }
    else
    {
        PyObject *old = tmp_exec_1__source.object;
        tmp_exec_1__source.object = tmp_assign_source_21;
        Py_DECREF( old );
    }
    tmp_isinstance_inst_1 = tmp_exec_1__source.object;

    tmp_isinstance_cls_1 = (PyObject *)&PyFile_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_11 = tmp_exec_1__source.object;

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_read );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 71;
    tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS( tmp_called_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    assert( tmp_exec_1__source.object != NULL );
    {
        PyObject *old = tmp_exec_1__source.object;
        tmp_exec_1__source.object = tmp_assign_source_22;
        Py_DECREF( old );
    }

    branch_no_7:;
    tmp_eval_source_1 = tmp_exec_1__source.object;

    tmp_eval_globals_1 = tmp_exec_1__globals.object;

    tmp_eval_locals_1 = tmp_exec_1__locals.object;

    tmp_exec_compiled_1 = COMPILE_CODE( tmp_eval_source_1, const_str_angle_string, const_str_plain_exec, NULL, NULL );
    if ( tmp_exec_compiled_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    tmp_exec_result_1 = EVAL_CODE( tmp_exec_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1 );
    Py_DECREF( tmp_exec_compiled_1 );
    if ( tmp_exec_result_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_exec_result_1 );
    if ( tmp_eval_locals_1 == locals_dict )
    {
        tmp_locals_source = tmp_eval_locals_1;
    }
    else if ( tmp_eval_globals_1 == locals_dict )
    {
        tmp_locals_source = tmp_eval_globals_1;
    }
    else
    {
        tmp_locals_source = NULL;
    }

    if ( tmp_locals_source != NULL )
    {
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_self );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (par_self.object == NULL)
    {
        par_self.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = par_self.object;
        par_self.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_packages );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (par_packages.object == NULL)
    {
        par_packages.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = par_packages.object;
        par_packages.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_imp );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_imp.object == NULL)
    {
        var_imp.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_imp.object;
        var_imp.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_info_files );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_info_files.object == NULL)
    {
        var_info_files.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_info_files.object;
        var_info_files.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_info_modules );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_info_modules.object == NULL)
    {
        var_info_modules.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_info_modules.object;
        var_info_modules.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_path );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_path.object == NULL)
    {
        var_path.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_path.object;
        var_path.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_package_name );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_package_name.object == NULL)
    {
        var_package_name.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_package_name.object;
        var_package_name.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_package_dir );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_package_dir.object == NULL)
    {
        var_package_dir.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_package_dir.object;
        var_package_dir.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_names_files );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_names_files.object == NULL)
    {
        var_names_files.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_names_files.object;
        var_names_files.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_msg );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_msg.object == NULL)
    {
        var_msg.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_msg.object;
        var_msg.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_info_file );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_info_file.object == NULL)
    {
        var_info_file.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_info_file.object;
        var_info_file.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_fullname );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_fullname.object == NULL)
    {
        var_fullname.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_fullname.object;
        var_fullname.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_filedescriptor );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_filedescriptor.object == NULL)
    {
        var_filedescriptor.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_filedescriptor.object;
        var_filedescriptor.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_info_module );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_info_module.object == NULL)
    {
        var_info_module.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_info_module.object;
        var_info_module.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    }
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

    tmp_tried_lineno_3 = frame_function->f_lineno;
    tmp_result = tmp_exec_1__globals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_exec_1__globals.object );
        tmp_exec_1__globals.object = NULL;
    }

    assert( tmp_result != false );
    tmp_result = tmp_exec_1__locals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_exec_1__locals.object );
        tmp_exec_1__locals.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_exec_1__source.object );
    tmp_exec_1__source.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_except_handler_2;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_ass_subvalue_1 = PyDict_GetItem( locals_dict, const_str_plain_info );

    if ( tmp_ass_subvalue_1 == NULL )
    {
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_info );
        if (unlikely( tmp_ass_subvalue_1 == NULL ))
        {
            tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_info );
        }
    }

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49191 ], 26, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 72;
        goto try_except_handler_2;
    }

    tmp_ass_subscribed_1 = var_info_modules.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49217 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 72;
        goto try_except_handler_2;
    }

    tmp_ass_subscript_1 = var_package_name.object;

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 72;
        goto try_except_handler_2;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto try_except_handler_2;
    }
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
    tmp_compare_left_7 = PyThreadState_GET()->exc_type;
    tmp_compare_right_7 = PyExc_ImportError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto try_finally_handler_3;
    }
    if (tmp_exc_match_exception_match_2 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_23 = PyThreadState_GET()->exc_value;
    if (var_msg.object == NULL)
    {
        var_msg.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
    }
    else
    {
        PyObject *old = var_msg.object;
        var_msg.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
        Py_DECREF( old );
    }
    tmp_source_name_12 = par_self.object;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto try_finally_handler_3;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_warn );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto try_finally_handler_3;
    }
    tmp_binop_left_2 = const_str_digest_9528395ffa3e19ecc9b62f55341c1204;
    tmp_binop_right_2 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_package_name.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_1 );
    tmp_source_name_13 = const_str_chr_58;
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_join );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 76;
        goto try_finally_handler_3;
    }
    tmp_source_name_14 = par_self.object;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_right_2 );
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_parent_path );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_right_2 );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 76;
        goto try_finally_handler_3;
    }
    frame_function->f_lineno = 76;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 76;
        goto try_finally_handler_3;
    }
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_msg.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 2, tmp_tuple_element_1 );
    tmp_call_arg_element_8 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 74;
        goto try_finally_handler_3;
    }
    frame_function->f_lineno = 74;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_8;
    branch_no_8:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_3;
    branch_end_8:;
    try_except_end_2:;
    branch_no_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    tmp_result = tmp_for_loop_3__break_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_for_loop_3__break_indicator.object );
        tmp_for_loop_3__break_indicator.object = NULL;
    }

    assert( tmp_result != false );
    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_2;
    }

    goto finally_end_4;
    finally_end_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto try_finally_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto frame_exception_exit_1;
    }

    goto finally_end_5;
    finally_end_5:;
    branch_end_1:;
    tmp_iter_arg_4 = var_info_files.object;

    if ( tmp_iter_arg_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49077 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator.object == NULL );
    tmp_for_loop_4__for_iterator.object = tmp_assign_source_24;

    // Tried code
    loop_start_4:;
    tmp_next_source_3 = tmp_for_loop_4__for_iterator.object;

    tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_25 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_4;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 78;
            goto try_finally_handler_6;
        }
    }

    if (tmp_for_loop_4__iter_value.object == NULL)
    {
        tmp_for_loop_4__iter_value.object = tmp_assign_source_25;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__iter_value.object;
        tmp_for_loop_4__iter_value.object = tmp_assign_source_25;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_5 = tmp_for_loop_4__iter_value.object;

    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto try_finally_handler_7;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_26;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_26;
        Py_DECREF( old );
    }
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_27 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_27 == NULL )
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


        frame_function->f_lineno = 78;
        goto try_finally_handler_7;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_27;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_27;
        Py_DECREF( old );
    }
    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_28 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_28 == NULL )
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


        frame_function->f_lineno = 78;
        goto try_finally_handler_7;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_28;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_28;
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

            goto try_finally_handler_7;
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

        goto try_finally_handler_7;
    }
    tmp_assign_source_29 = tmp_tuple_unpack_1__element_1.object;

    if (var_package_name.object == NULL)
    {
        var_package_name.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
    }
    else
    {
        PyObject *old = var_package_name.object;
        var_package_name.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
        Py_DECREF( old );
    }
    tmp_assign_source_30 = tmp_tuple_unpack_1__element_2.object;

    if (var_info_file.object == NULL)
    {
        var_info_file.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
    }
    else
    {
        PyObject *old = var_info_file.object;
        var_info_file.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
        Py_DECREF( old );
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

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_6;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_compare_left_8 = var_package_name.object;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto try_finally_handler_6;
    }

    tmp_compare_right_8 = var_info_modules.object;

    if ( tmp_compare_right_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49217 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto try_finally_handler_6;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto try_finally_handler_6;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    goto loop_start_4;
    branch_no_9:;
    tmp_source_name_15 = par_self.object;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto try_finally_handler_6;
    }

    tmp_binop_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_parent_name );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto try_finally_handler_6;
    }
    tmp_binop_right_4 = const_str_dot;
    tmp_binop_left_3 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto try_finally_handler_6;
    }
    tmp_binop_right_3 = var_package_name.object;

    if ( tmp_binop_right_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto try_finally_handler_6;
    }

    tmp_assign_source_31 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto try_finally_handler_6;
    }
    if (var_fullname.object == NULL)
    {
        var_fullname.object = tmp_assign_source_31;
    }
    else
    {
        PyObject *old = var_fullname.object;
        var_fullname.object = tmp_assign_source_31;
        Py_DECREF( old );
    }
    tmp_subscr_target_1 = var_info_file.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49275 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto try_finally_handler_6;
    }

    tmp_subscr_subscript_1 = const_int_neg_1;
    tmp_compare_left_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
        goto try_finally_handler_6;
    }
    tmp_compare_right_9 = const_str_plain_c;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        frame_function->f_lineno = 82;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_compare_left_9 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_32 = const_tuple_a41d4e0762ac86b3dbefc3dc8a8c734f_tuple;
    if (var_filedescriptor.object == NULL)
    {
        var_filedescriptor.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
    }
    else
    {
        PyObject *old = var_filedescriptor.object;
        var_filedescriptor.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
        Py_DECREF( old );
    }
    goto branch_end_10;
    branch_no_10:;
    tmp_assign_source_33 = const_tuple_0edeae457f2e941b8090b979674d8622_tuple;
    if (var_filedescriptor.object == NULL)
    {
        var_filedescriptor.object = INCREASE_REFCOUNT( tmp_assign_source_33 );
    }
    else
    {
        PyObject *old = var_filedescriptor.object;
        var_filedescriptor.object = INCREASE_REFCOUNT( tmp_assign_source_33 );
        Py_DECREF( old );
    }
    branch_end_10:;
    // Tried block of try/except
    tmp_source_name_16 = var_imp.object;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto try_except_handler_3;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_load_module );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto try_except_handler_3;
    }
    tmp_binop_left_5 = var_fullname.object;

    tmp_binop_right_5 = const_str_digest_952b0ebdaa6e29e1f0af49159d1fa4bf;
    tmp_call_arg_element_10 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 88;
        goto try_except_handler_3;
    }
    tmp_open_filename_1 = var_info_file.object;

    if ( tmp_open_filename_1 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49275 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 89;
        goto try_except_handler_3;
    }

    tmp_subscr_target_2 = var_filedescriptor.object;

    tmp_subscr_subscript_2 = const_int_pos_1;
    tmp_open_mode_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_open_mode_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 89;
        goto try_except_handler_3;
    }
    tmp_call_arg_element_11 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    Py_DECREF( tmp_open_mode_1 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 89;
        goto try_except_handler_3;
    }
    tmp_call_arg_element_12 = var_info_file.object;

    if ( tmp_call_arg_element_12 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49275 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto try_except_handler_3;
    }

    tmp_call_arg_element_13 = var_filedescriptor.object;

    frame_function->f_lineno = 91;
    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS4( tmp_called_9, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto try_except_handler_3;
    }
    if (var_info_module.object == NULL)
    {
        var_info_module.object = tmp_assign_source_34;
    }
    else
    {
        PyObject *old = var_info_module.object;
        var_info_module.object = tmp_assign_source_34;
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
    tmp_compare_left_10 = PyThreadState_GET()->exc_type;
    tmp_compare_right_10 = PyExc_Exception;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto try_finally_handler_6;
    }
    if (tmp_exc_match_exception_match_3 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_35 = PyThreadState_GET()->exc_value;
    if (var_msg.object == NULL)
    {
        var_msg.object = INCREASE_REFCOUNT( tmp_assign_source_35 );
    }
    else
    {
        PyObject *old = var_msg.object;
        var_msg.object = INCREASE_REFCOUNT( tmp_assign_source_35 );
        Py_DECREF( old );
    }
    tmp_source_name_17 = par_self.object;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto try_finally_handler_6;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_error );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto try_finally_handler_6;
    }
    tmp_call_arg_element_14 = var_msg.object;

    frame_function->f_lineno = 93;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_36 = Py_None;
    if (var_info_module.object == NULL)
    {
        var_info_module.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
    }
    else
    {
        PyObject *old = var_info_module.object;
        var_info_module.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
        Py_DECREF( old );
    }
    goto branch_end_11;
    branch_no_11:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_6;
    branch_end_11:;
    try_except_end_3:;
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_info_module.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49379 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto try_finally_handler_9;
    }

    tmp_compexpr_right_1 = Py_None;
    tmp_assign_source_37 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    if (tmp_or_1__value_1.object == NULL)
    {
        tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_37 );
    }
    else
    {
        PyObject *old = tmp_or_1__value_1.object;
        tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_37 );
        Py_DECREF( old );
    }
    tmp_cond_value_3 = tmp_or_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_9;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_cond_value_2 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_cond_value_2 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_getattr_target_1 = var_info_module.object;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49379 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto try_finally_handler_10;
    }

    tmp_getattr_attr_1 = const_str_plain_ignore;
    tmp_getattr_default_1 = Py_False;
    tmp_cond_value_2 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_10;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
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

        goto try_finally_handler_9;
    }

    goto finally_end_7;
    finally_end_7:;
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
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

        goto try_finally_handler_8;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 96;
        goto try_finally_handler_8;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_18 = var_info_modules.object;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49217 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto try_finally_handler_8;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_pop );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto try_finally_handler_8;
    }
    tmp_call_arg_element_15 = var_package_name.object;

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto try_finally_handler_8;
    }

    tmp_call_arg_element_16 = Py_None;
    frame_function->f_lineno = 97;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_11, tmp_call_arg_element_15, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto try_finally_handler_8;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_12;
    branch_no_12:;
    tmp_source_name_19 = par_self.object;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto try_finally_handler_8;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__init_info_modules );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto try_finally_handler_8;
    }
    tmp_getattr_target_2 = var_info_module.object;

    if ( tmp_getattr_target_2 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49379 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto try_finally_handler_8;
    }

    tmp_getattr_attr_2 = const_str_plain_depends;
    tmp_getattr_default_2 = PyList_New( 0 );
    tmp_call_arg_element_17 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    Py_DECREF( tmp_getattr_default_2 );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_function->f_lineno = 99;
        goto try_finally_handler_8;
    }
    frame_function->f_lineno = 99;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_12 );
    Py_DECREF( tmp_call_arg_element_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto try_finally_handler_8;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_2 = var_info_module.object;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49379 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto try_finally_handler_8;
    }

    tmp_ass_subscribed_2 = var_info_modules.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49217 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto try_finally_handler_8;
    }

    tmp_ass_subscript_2 = var_package_name.object;

    if ( tmp_ass_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto try_finally_handler_8;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
        goto try_finally_handler_8;
    }
    branch_end_12:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto try_finally_handler_6;
    }

    goto finally_end_9;
    finally_end_9:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto try_finally_handler_6;
    }
    goto loop_start_4;
    loop_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
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
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto frame_exception_exit_1;
    }

    goto finally_end_10;
    finally_end_10:;

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


    tmp_frame_locals = INCREASE_REFCOUNT( locals_dict );
    if ((var_imp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_imp,
            var_imp.object
        );

    }
    if ((var_info_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info_files,
            var_info_files.object
        );

    }
    if ((var_info_modules.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info_modules,
            var_info_modules.object
        );

    }
    if ((var_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_path,
            var_path.object
        );

    }
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package_name,
            var_package_name.object
        );

    }
    if ((var_package_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package_dir,
            var_package_dir.object
        );

    }
    if ((var_names_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_names_files,
            var_names_files.object
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
    if ((var_info_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info_file,
            var_info_file.object
        );

    }
    if ((var_fullname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fullname,
            var_fullname.object
        );

    }
    if ((var_filedescriptor.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_filedescriptor,
            var_filedescriptor.object
        );

    }
    if ((var_info_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info_module,
            var_info_module.object
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
    if ((par_packages.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_packages,
            par_packages.object
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
Py_DECREF( locals_dict );
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
Py_DECREF( locals_dict );
    return tmp_return_value;

}
static PyObject *fparse_function_3__init_info_modules_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_packages = NULL;
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
                PyErr_Format( PyExc_TypeError, "_init_info_modules() keywords must be strings" );
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
            if ( found == false && const_str_plain_packages == key )
            {
                assert( _python_par_packages == NULL );
                _python_par_packages = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_packages, key ) == 1 )
            {
                assert( _python_par_packages == NULL );
                _python_par_packages = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_init_info_modules() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_packages != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_packages = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_packages == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_packages = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_packages == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_packages };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3__init_info_modules_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, _python_par_self, _python_par_packages );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_packages );

    return NULL;
}

static PyObject *dparse_function_3__init_info_modules_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_3__init_info_modules_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__init_info_modules_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__get_sorted_names_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_depend_dict;
    PyObjectLocalVariable var_name;
    PyObjectLocalVariable var_info_module;
    PyObjectLocalVariable var_package_names;
    PyObjectLocalVariable var_lst;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_new_lst;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_subscript_2;
    PyObject *tmp_delsubscr_target_1;
    PyObject *tmp_delsubscr_target_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_depend_dict.object == NULL );
    var_depend_dict.object = tmp_assign_source_1;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_985be0986def9269686d31941a05ea63, module_numpy$_import_tools );
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

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_info_modules );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_items );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 110;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
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
        frame_function->f_lineno = 110;
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


        frame_function->f_lineno = 110;
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


        frame_function->f_lineno = 110;
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


        frame_function->f_lineno = 110;
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

    if (var_name.object == NULL)
    {
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = var_name.object;
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2.object;

    if (var_info_module.object == NULL)
    {
        var_info_module.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_info_module.object;
        var_info_module.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
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
    tmp_getattr_target_1 = var_info_module.object;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49379 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }

    tmp_getattr_attr_1 = const_str_plain_depends;
    tmp_getattr_default_1 = PyList_New( 0 );
    tmp_ass_subvalue_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    Py_DECREF( tmp_getattr_default_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_1 = var_depend_dict.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49436 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_1 = var_name.object;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
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
    tmp_assign_source_9 = PyList_New( 0 );
    assert( var_package_names.object == NULL );
    var_package_names.object = tmp_assign_source_9;

    tmp_source_name_3 = var_depend_dict.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49436 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_keys );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 114;
    tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_10;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_11 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 114;
            goto try_finally_handler_3;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_assign_source_12 = tmp_for_loop_2__iter_value.object;

    if (var_name.object == NULL)
    {
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_name.object;
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    tmp_subscr_target_1 = var_depend_dict.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49436 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto try_finally_handler_3;
    }

    tmp_subscr_subscript_1 = var_name.object;

    tmp_cond_value_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto try_finally_handler_3;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 115;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_source_name_4 = var_package_names.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49493 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto try_finally_handler_3;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_1 = var_name.object;

    frame_function->f_lineno = 116;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_delsubscr_target_1 = var_depend_dict.object;

    if ( tmp_delsubscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49436 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto try_finally_handler_3;
    }

    tmp_delsubscr_subscript_1 = var_name.object;

    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto try_finally_handler_3;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
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
    loop_start_3:;
    tmp_cond_value_2 = var_depend_dict.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49436 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    goto loop_end_3;
    branch_no_2:;
    tmp_source_name_5 = var_depend_dict.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49436 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_items );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 120;
    tmp_iter_arg_4 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    if (tmp_for_loop_3__for_iterator.object == NULL)
    {
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__for_iterator.object;
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_4:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_14 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_4;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 120;
            goto try_finally_handler_4;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_5 = tmp_for_loop_3__iter_value.object;

    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_2__source_iter.object == NULL)
    {
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter.object;
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_16 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_16 == NULL )
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


        frame_function->f_lineno = 120;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_2__element_1.object == NULL)
    {
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_1.object;
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_17 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_17 == NULL )
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


        frame_function->f_lineno = 120;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_2__element_2.object == NULL)
    {
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_2.object;
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
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

            goto try_finally_handler_5;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_2 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_5;
    }
    tmp_assign_source_18 = tmp_tuple_unpack_2__element_1.object;

    if (var_name.object == NULL)
    {
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
    }
    else
    {
        PyObject *old = var_name.object;
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }
    tmp_assign_source_19 = tmp_tuple_unpack_2__element_2.object;

    if (var_lst.object == NULL)
    {
        var_lst.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
    }
    else
    {
        PyObject *old = var_lst.object;
        var_lst.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2.object );
    tmp_tuple_unpack_2__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_4;
    }

    goto finally_end_4;
    finally_end_4:;
    // Tried code
    tmp_assign_source_20 = NULL;
    // Tried code
    tmp_iter_arg_6 = var_lst.object;

    if ( tmp_iter_arg_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49552 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto try_finally_handler_7;
    }

    tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto try_finally_handler_7;
    }
    if (tmp_listcontr_1__listcontr_iter.object == NULL)
    {
        tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_21;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__listcontr_iter.object;
        tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_21;
        Py_DECREF( old );
    }
    tmp_assign_source_22 = PyList_New( 0 );
    if (tmp_listcontr_1__listcontr_result.object == NULL)
    {
        tmp_listcontr_1__listcontr_result.object = tmp_assign_source_22;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__listcontr_result.object;
        tmp_listcontr_1__listcontr_result.object = tmp_assign_source_22;
        Py_DECREF( old );
    }
    loop_start_5:;
    tmp_next_source_4 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_23 = ITERATOR_NEXT( tmp_next_source_4 );
    if (tmp_assign_source_23 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_5;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 121;
            goto try_finally_handler_7;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_23;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_23;
        Py_DECREF( old );
    }
    tmp_assign_source_24 = tmp_listcontr_1__iter_value_0.object;

    if (var_n.object == NULL)
    {
        var_n.object = INCREASE_REFCOUNT( tmp_assign_source_24 );
    }
    else
    {
        PyObject *old = var_n.object;
        var_n.object = INCREASE_REFCOUNT( tmp_assign_source_24 );
        Py_DECREF( old );
    }
    tmp_compare_left_1 = var_n.object;

    tmp_compare_right_1 = var_depend_dict.object;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49436 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto try_finally_handler_7;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto try_finally_handler_7;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = var_n.object;

    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto try_finally_handler_7;
    }
    tmp_unused = Py_None;
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto try_finally_handler_7;
    }
    goto loop_start_5;
    loop_end_5:;
    tmp_assign_source_20 = tmp_listcontr_1__listcontr_result.object;

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_6;
    }

    goto finally_end_5;
    finally_end_5:;
    if (var_new_lst.object == NULL)
    {
        var_new_lst.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
    }
    else
    {
        PyObject *old = var_new_lst.object;
        var_new_lst.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_4;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_cond_value_3 = var_new_lst.object;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49601 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 122;
        goto try_finally_handler_4;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto try_finally_handler_4;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_source_name_6 = var_package_names.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49493 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto try_finally_handler_4;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_2 = var_name.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto try_finally_handler_4;
    }

    frame_function->f_lineno = 123;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_delsubscr_target_2 = var_depend_dict.object;

    if ( tmp_delsubscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49436 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 124;
        goto try_finally_handler_4;
    }

    tmp_delsubscr_subscript_2 = var_name.object;

    if ( tmp_delsubscr_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 124;
        goto try_finally_handler_4;
    }

    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_2, tmp_delsubscr_subscript_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 124;
        goto try_finally_handler_4;
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_ass_subvalue_2 = var_new_lst.object;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49601 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto try_finally_handler_4;
    }

    tmp_ass_subscribed_2 = var_depend_dict.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49436 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto try_finally_handler_4;
    }

    tmp_ass_subscript_2 = var_name.object;

    if ( tmp_ass_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto try_finally_handler_4;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto try_finally_handler_4;
    }
    branch_end_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto try_finally_handler_4;
    }
    goto loop_start_4;
    loop_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
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
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto frame_exception_exit_1;
    }

    goto finally_end_7;
    finally_end_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_return_value = var_package_names.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49493 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
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
    if ((var_depend_dict.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_depend_dict,
            var_depend_dict.object
        );

    }
    if ((var_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            var_name.object
        );

    }
    if ((var_info_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info_module,
            var_info_module.object
        );

    }
    if ((var_package_names.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package_names,
            var_package_names.object
        );

    }
    if ((var_lst.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lst,
            var_lst.object
        );

    }
    if ((var_n.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n,
            var_n.object
        );

    }
    if ((var_new_lst.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_new_lst,
            var_new_lst.object
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

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_4__get_sorted_names_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_get_sorted_names() keywords must be strings" );
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
                   "_get_sorted_names() got an unexpected keyword argument '%s'",
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


    return impl_function_4__get_sorted_names_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4__get_sorted_names_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4__get_sorted_names_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__get_sorted_names_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5___call___of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_packages, PyObject *_python_par_options )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_packages; par_packages.object = _python_par_packages;
    PyObjectLocalVariable par_options; par_options.object = _python_par_options;
    PyObjectLocalVariable var_frame;
    PyObjectLocalVariable var_verbose;
    PyObjectLocalVariable var_postpone;
    PyObjectLocalVariable var_package_name;
    PyObjectLocalVariable var_info_module;
    PyObjectLocalVariable var_global_symbols;
    PyObjectLocalVariable var_postpone_import;
    PyObjectLocalVariable var_old_object;
    PyObjectLocalVariable var_cmdstr;
    PyObjectLocalVariable var_new_object;
    PyObjectLocalVariable var_symbol;
    PyObjectLocalVariable var_symbols;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_old_objects;
    PyObjectTempVariable tmp_assign_unpack_1__assign_source;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_and_2__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_and_3__value_1;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_for_loop_4__for_iterator;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_eval_1__globals;
    PyObjectTempVariable tmp_eval_1__locals;
    PyObjectTempVariable tmp_eval_1__source;
    PyObjectTempVariable tmp_eval_2__globals;
    PyObjectTempVariable tmp_eval_2__locals;
    PyObjectTempVariable tmp_eval_2__source;
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
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_left_6;
    PyObject *tmp_binop_left_7;
    PyObject *tmp_binop_left_8;
    PyObject *tmp_binop_left_9;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_binop_right_7;
    PyObject *tmp_binop_right_8;
    PyObject *tmp_binop_right_9;
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
    PyObject *tmp_call_arg_element_21;
    PyObject *tmp_call_arg_element_22;
    PyObject *tmp_call_arg_element_23;
    PyObject *tmp_call_arg_element_24;
    PyObject *tmp_call_arg_element_25;
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
    PyObject *tmp_called_16;
    PyObject *tmp_called_17;
    PyObject *tmp_called_18;
    PyObject *tmp_called_19;
    PyObject *tmp_called_20;
    PyObject *tmp_called_21;
    PyObject *tmp_called_22;
    PyObject *tmp_called_23;
    PyObject *tmp_called_24;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
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
    bool tmp_continue_1;
    PyObject *tmp_eval_compiled_1;
    PyObject *tmp_eval_compiled_2;
    PyObject *tmp_eval_globals_1;
    PyObject *tmp_eval_globals_2;
    PyObject *tmp_eval_locals_1;
    PyObject *tmp_eval_locals_2;
    PyObject *tmp_eval_source_1;
    PyObject *tmp_eval_source_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_is_5;
    bool tmp_is_6;
    bool tmp_is_7;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    bool tmp_isnot_1;
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
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
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
    int tmp_tried_lineno_9;
    int tmp_tried_lineno_10;
    int tmp_tried_lineno_11;
    int tmp_tried_lineno_12;
    int tmp_tried_lineno_13;
    int tmp_tried_lineno_14;
    int tmp_tried_lineno_15;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2b9a9ab4dd66f895f880a6ce59d5eae6, module_numpy$_import_tools );
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

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parent_frame );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    assert( var_frame.object == NULL );
    var_frame.object = tmp_assign_source_1;

    tmp_assattr_name_1 = PyDict_New();
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_info_modules, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_2 = par_options.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11639 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_force;
    tmp_call_arg_element_2 = Py_False;
    frame_function->f_lineno = 168;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
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
    tmp_assattr_name_2 = PyList_New( 0 );
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_imported_packages, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    branch_no_1:;
    // Tried code
    tmp_source_name_3 = par_options.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11639 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 170;
        goto try_finally_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_3 = const_str_plain_verbose;
    tmp_call_arg_element_4 = const_int_neg_1;
    frame_function->f_lineno = 170;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto try_finally_handler_1;
    }
    assert( tmp_assign_unpack_1__assign_source.object == NULL );
    tmp_assign_unpack_1__assign_source.object = tmp_assign_source_2;

    tmp_assattr_name_3 = tmp_assign_unpack_1__assign_source.object;

    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 170;
        goto try_finally_handler_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_verbose, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto try_finally_handler_1;
    }
    tmp_assign_source_3 = tmp_assign_unpack_1__assign_source.object;

    assert( var_verbose.object == NULL );
    var_verbose.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

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
    Py_XDECREF( tmp_assign_unpack_1__assign_source.object );
    tmp_assign_unpack_1__assign_source.object = NULL;

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
    tmp_source_name_4 = par_options.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11639 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_plain_postpone;
    tmp_call_arg_element_6 = Py_None;
    frame_function->f_lineno = 171;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    assert( var_postpone.object == NULL );
    var_postpone.object = tmp_assign_source_4;

    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__init_info_modules );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = NULL;
    // Tried code
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = NULL;
    // Tried code
    tmp_assign_source_5 = par_packages.object;

    if ( tmp_assign_source_5 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48651 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto try_finally_handler_3;
    }

    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 172;
        goto try_finally_handler_3;
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
    tmp_tuple_element_1 = tmp_or_1__value_1.object;

    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_tuple_element_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_tuple_element_1 = Py_None;
    // Re-reraise as necessary after finally was executed.
    goto finally_end_2;
    finally_end_2:;
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
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

        goto try_finally_handler_2;
    }

    goto finally_end_3;
    finally_end_3:;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto frame_exception_exit_1;
    }

    goto finally_end_4;
    finally_end_4:;
    frame_function->f_lineno = 172;
    tmp_unused = CALL_FUNCTION_WITH_POSARGS( tmp_called_4, tmp_call_pos_1 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_pos_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_log );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = const_str_digest_2d7f7a73df65cd0f0fc3010d83ad8a49;
    tmp_source_name_7 = par_self.object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_parent_name );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 174;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__get_sorted_names );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 177;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_6;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_7 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 177;
            goto try_finally_handler_5;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_assign_source_8 = tmp_for_loop_1__iter_value.object;

    if (var_package_name.object == NULL)
    {
        var_package_name.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_package_name.object;
        var_package_name.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_compare_left_1 = var_package_name.object;

    tmp_source_name_9 = par_self.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto try_finally_handler_5;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_imported_packages );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto try_finally_handler_5;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 178;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    goto loop_start_1;
    branch_no_2:;
    tmp_source_name_10 = par_self.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto try_finally_handler_5;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_info_modules );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto try_finally_handler_5;
    }
    tmp_subscr_subscript_1 = var_package_name.object;

    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto try_finally_handler_5;
    }
    if (var_info_module.object == NULL)
    {
        var_info_module.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = var_info_module.object;
        var_info_module.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    tmp_getattr_target_1 = var_info_module.object;

    tmp_getattr_attr_1 = const_str_plain_global_symbols;
    tmp_getattr_default_1 = PyList_New( 0 );
    tmp_assign_source_10 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    Py_DECREF( tmp_getattr_default_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 181;
        goto try_finally_handler_5;
    }
    if (var_global_symbols.object == NULL)
    {
        var_global_symbols.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = var_global_symbols.object;
        var_global_symbols.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_getattr_target_2 = var_info_module.object;

    tmp_getattr_attr_2 = const_str_plain_postpone_import;
    tmp_getattr_default_2 = Py_False;
    tmp_assign_source_11 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto try_finally_handler_5;
    }
    if (var_postpone_import.object == NULL)
    {
        var_postpone_import.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = var_postpone_import.object;
        var_postpone_import.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_continue_1 = false;
    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    // Tried code
    tmp_assign_source_12 = NULL;
    // Tried code
    tmp_assign_source_13 = var_postpone.object;

    if ( tmp_assign_source_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49654 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto try_finally_handler_9;
    }

    if (tmp_and_1__value_1.object == NULL)
    {
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
    }
    else
    {
        PyObject *old = tmp_and_1__value_1.object;
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
        Py_DECREF( old );
    }
    tmp_cond_value_4 = tmp_and_1__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto try_finally_handler_9;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_assign_source_12 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_unary_arg_1 = var_global_symbols.object;

    tmp_assign_source_12 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto try_finally_handler_10;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
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

        goto try_finally_handler_9;
    }

    goto finally_end_5;
    finally_end_5:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_12 = tmp_and_1__value_1.object;

    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
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

        goto try_finally_handler_8;
    }

    goto finally_end_6;
    finally_end_6:;
    if (tmp_or_2__value_1.object == NULL)
    {
        tmp_or_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = tmp_or_2__value_1.object;
        tmp_or_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_7;
    }

    goto finally_end_7;
    finally_end_7:;
    tmp_cond_value_5 = tmp_or_2__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto try_finally_handler_7;
    }
    if (tmp_cond_truth_5 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_cond_value_3 = tmp_or_2__value_1.object;

    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_assign_source_14 = var_postpone_import.object;

    if ( tmp_assign_source_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49708 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_13;
    }

    if (tmp_and_2__value_1.object == NULL)
    {
        tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = tmp_and_2__value_1.object;
        tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    tmp_cond_value_6 = tmp_and_2__value_1.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 184;
        goto try_finally_handler_13;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_1 = var_postpone.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49654 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_14;
    }

    tmp_compexpr_right_1 = Py_None;
    tmp_cond_value_3 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_14:;
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

        goto try_finally_handler_13;
    }

    goto finally_end_8;
    finally_end_8:;
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_3 = tmp_and_2__value_1.object;

    condexpr_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_13:;
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

        goto try_finally_handler_12;
    }

    goto finally_end_9;
    finally_end_9:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
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

        goto try_finally_handler_11;
    }

    goto finally_end_10;
    finally_end_10:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto try_finally_handler_7;
    }

    goto finally_end_11;
    finally_end_11:;
    condexpr_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto try_finally_handler_6;
    }

    goto finally_end_12;
    finally_end_12:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto try_finally_handler_6;
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
    tmp_continue_1 = true;
    goto try_finally_handler_start_1;
    branch_no_3:;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto try_finally_handler_5;
    }

    // Continue if entered via continue.
    if ( tmp_continue_1 )
    {

    goto loop_start_1;
    }
    goto finally_end_13;
    finally_end_13:;
    tmp_source_name_12 = var_frame.object;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto try_finally_handler_5;
    }

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_f_locals );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto try_finally_handler_5;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_get );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_8 = var_package_name.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto try_finally_handler_5;
    }

    tmp_call_arg_element_9 = Py_None;
    frame_function->f_lineno = 187;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto try_finally_handler_5;
    }
    if (var_old_object.object == NULL)
    {
        var_old_object.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_old_object.object;
        var_old_object.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_binop_left_2 = const_str_digest_8617a6c09eb76d9882db8ee31a420654;
    tmp_binop_right_2 = var_package_name.object;

    if ( tmp_binop_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto try_finally_handler_5;
    }

    tmp_assign_source_16 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto try_finally_handler_5;
    }
    if (var_cmdstr.object == NULL)
    {
        var_cmdstr.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = var_cmdstr.object;
        var_cmdstr.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    tmp_source_name_13 = par_self.object;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto try_finally_handler_5;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__execcmd );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 190;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_10 = var_cmdstr.object;

    frame_function->f_lineno = 190;
    tmp_cond_value_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 190;
        goto try_finally_handler_5;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        frame_function->f_lineno = 190;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_cond_value_7 );
    if (tmp_cond_truth_7 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    goto loop_start_1;
    branch_no_4:;
    tmp_source_name_15 = par_self.object;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 192;
        goto try_finally_handler_5;
    }

    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_imported_packages );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 192;
        goto try_finally_handler_5;
    }
    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 192;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_11 = var_package_name.object;

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 192;
        goto try_finally_handler_5;
    }

    frame_function->f_lineno = 192;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 192;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_2 = var_verbose.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49769 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto try_finally_handler_5;
    }

    tmp_compare_right_2 = const_int_neg_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 194;
        goto try_finally_handler_5;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_17 = var_frame.object;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 195;
        goto try_finally_handler_5;
    }

    tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_f_locals );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto try_finally_handler_5;
    }
    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_get );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_12 = var_package_name.object;

    if ( tmp_call_arg_element_12 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 195;
        goto try_finally_handler_5;
    }

    frame_function->f_lineno = 195;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto try_finally_handler_5;
    }
    if (var_new_object.object == NULL)
    {
        var_new_object.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = var_new_object.object;
        var_new_object.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    // Tried code
    tmp_cond_value_8 = NULL;
    // Tried code
    tmp_compexpr_left_2 = var_old_object.object;

    tmp_compexpr_right_2 = Py_None;
    tmp_assign_source_18 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    if (tmp_and_3__value_1.object == NULL)
    {
        tmp_and_3__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
    }
    else
    {
        PyObject *old = tmp_and_3__value_1.object;
        tmp_and_3__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }
    tmp_cond_value_9 = tmp_and_3__value_1.object;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto try_finally_handler_16;
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
    tmp_cond_value_8 = NULL;
    // Tried code
    tmp_result = tmp_and_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_3__value_1.object );
        tmp_and_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_3 = var_old_object.object;

    tmp_compexpr_right_3 = var_new_object.object;

    tmp_cond_value_8 = BOOL_FROM( tmp_compexpr_left_3 != tmp_compexpr_right_3 );
    // Re-reraise as necessary after finally was executed.
    goto finally_end_14;
    finally_end_14:;
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_cond_value_8 = tmp_and_3__value_1.object;

    condexpr_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_16:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_13 != NULL )
    {
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;

        goto try_finally_handler_15;
    }

    goto finally_end_15;
    finally_end_15:;
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto try_finally_handler_15;
    }
    if (tmp_cond_truth_8 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_18 = par_self.object;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto try_finally_handler_15;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_warn );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto try_finally_handler_15;
    }
    tmp_binop_left_3 = const_str_digest_6cfcfc0587503a6d04208d58111eae4e;
    tmp_binop_right_3 = PyTuple_New( 3 );
    tmp_tuple_element_2 = var_package_name.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 198;
        goto try_finally_handler_15;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_2 );
    tmp_source_name_19 = par_self.object;

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 198;
        goto try_finally_handler_15;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__obj2repr );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 198;
        goto try_finally_handler_15;
    }
    tmp_call_arg_element_14 = var_new_object.object;

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_binop_right_3 );
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49822 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 198;
        goto try_finally_handler_15;
    }

    frame_function->f_lineno = 198;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 198;
        goto try_finally_handler_15;
    }
    PyTuple_SET_ITEM( tmp_binop_right_3, 1, tmp_tuple_element_2 );
    tmp_source_name_20 = par_self.object;

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto try_finally_handler_15;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__obj2repr );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 199;
        goto try_finally_handler_15;
    }
    tmp_call_arg_element_15 = var_old_object.object;

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_binop_right_3 );
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49878 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto try_finally_handler_15;
    }

    frame_function->f_lineno = 199;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 199;
        goto try_finally_handler_15;
    }
    PyTuple_SET_ITEM( tmp_binop_right_3, 2, tmp_tuple_element_2 );
    tmp_call_arg_element_13 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 197;
        goto try_finally_handler_15;
    }
    frame_function->f_lineno = 197;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto try_finally_handler_15;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_3__value_1.object );
    tmp_and_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_14 != NULL )
    {
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;

        goto try_finally_handler_5;
    }

    goto finally_end_16;
    finally_end_16:;
    branch_no_5:;
    tmp_compare_left_3 = const_str_dot;
    tmp_compare_right_3 = var_package_name.object;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto try_finally_handler_5;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 201;
        goto try_finally_handler_5;
    }
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_22 = par_self.object;

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto try_finally_handler_5;
    }

    tmp_source_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_parent_export_names );
    if ( tmp_source_name_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto try_finally_handler_5;
    }
    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_append );
    Py_DECREF( tmp_source_name_21 );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_16 = var_package_name.object;

    if ( tmp_call_arg_element_16 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto try_finally_handler_5;
    }

    frame_function->f_lineno = 202;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    tmp_iter_arg_2 = var_global_symbols.object;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49934 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 204;
        goto try_finally_handler_5;
    }

    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 204;
        goto try_finally_handler_5;
    }
    if (tmp_for_loop_2__for_iterator.object == NULL)
    {
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_19;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__for_iterator.object;
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_19;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_20 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 204;
            goto try_finally_handler_18;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_20;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_20;
        Py_DECREF( old );
    }
    tmp_assign_source_21 = tmp_for_loop_2__iter_value.object;

    if (var_symbol.object == NULL)
    {
        var_symbol.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
    }
    else
    {
        PyObject *old = var_symbol.object;
        var_symbol.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
        Py_DECREF( old );
    }
    tmp_compare_left_4 = var_symbol.object;

    tmp_compare_right_4 = const_str_chr_42;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 205;
        goto try_finally_handler_18;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_22 = NULL;
    // Tried code
    tmp_source_name_23 = var_frame.object;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 208;
        goto try_finally_handler_19;
    }

    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_f_globals );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 208;
        goto try_finally_handler_19;
    }
    if (tmp_eval_1__globals.object == NULL)
    {
        tmp_eval_1__globals.object = tmp_assign_source_23;
    }
    else
    {
        PyObject *old = tmp_eval_1__globals.object;
        tmp_eval_1__globals.object = tmp_assign_source_23;
        Py_DECREF( old );
    }
    tmp_source_name_24 = var_frame.object;

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 208;
        goto try_finally_handler_19;
    }

    tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_f_locals );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 208;
        goto try_finally_handler_19;
    }
    if (tmp_eval_1__locals.object == NULL)
    {
        tmp_eval_1__locals.object = tmp_assign_source_24;
    }
    else
    {
        PyObject *old = tmp_eval_1__locals.object;
        tmp_eval_1__locals.object = tmp_assign_source_24;
        Py_DECREF( old );
    }
    tmp_compare_left_5 = tmp_eval_1__locals.object;

    tmp_compare_right_5 = Py_None;
    tmp_is_1 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if (tmp_is_1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_compare_left_6 = tmp_eval_1__globals.object;

    tmp_compare_right_6 = Py_None;
    tmp_is_2 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    if (tmp_is_2)
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_assign_source_25 = PyDict_New();
    if ((var_frame.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_frame,
            var_frame.object
        );

    }
    if ((var_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_verbose,
            var_verbose.object
        );

    }
    if ((var_postpone.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_postpone,
            var_postpone.object
        );

    }
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_package_name,
            var_package_name.object
        );

    }
    if ((var_info_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_info_module,
            var_info_module.object
        );

    }
    if ((var_global_symbols.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_global_symbols,
            var_global_symbols.object
        );

    }
    if ((var_postpone_import.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_postpone_import,
            var_postpone_import.object
        );

    }
    if ((var_old_object.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_old_object,
            var_old_object.object
        );

    }
    if ((var_cmdstr.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_cmdstr,
            var_cmdstr.object
        );

    }
    if ((var_new_object.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_new_object,
            var_new_object.object
        );

    }
    if ((var_symbol.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_symbol,
            var_symbol.object
        );

    }
    if ((var_symbols.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_symbols,
            var_symbols.object
        );

    }
    if ((var_s.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_s,
            var_s.object
        );

    }
    if ((var_old_objects.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_old_objects,
            var_old_objects.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_packages.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_packages,
            par_packages.object
        );

    }
    if ((par_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_25,
            const_str_plain_options,
            par_options.object
        );

    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_25 = tmp_eval_1__globals.object;

    Py_INCREF( tmp_assign_source_25 );
    condexpr_end_6:;
    assert( tmp_eval_1__locals.object != NULL );
    {
        PyObject *old = tmp_eval_1__locals.object;
        tmp_eval_1__locals.object = tmp_assign_source_25;
        Py_DECREF( old );
    }

    branch_no_9:;
    tmp_compare_left_7 = tmp_eval_1__globals.object;

    tmp_compare_right_7 = Py_None;
    tmp_is_3 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if (tmp_is_3)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_26 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    assert( tmp_eval_1__globals.object != NULL );
    {
        PyObject *old = tmp_eval_1__globals.object;
        tmp_eval_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
        Py_DECREF( old );
    }

    branch_no_10:;
    tmp_binop_left_4 = const_str_digest_d3bf73d3df56251f7442ba30c496e06e;
    tmp_binop_right_4 = var_package_name.object;

    if ( tmp_binop_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 207;
        goto try_finally_handler_19;
    }

    tmp_assign_source_27 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 206;
        goto try_finally_handler_19;
    }
    if (tmp_eval_1__source.object == NULL)
    {
        tmp_eval_1__source.object = tmp_assign_source_27;
    }
    else
    {
        PyObject *old = tmp_eval_1__source.object;
        tmp_eval_1__source.object = tmp_assign_source_27;
        Py_DECREF( old );
    }
    tmp_isinstance_inst_1 = tmp_eval_1__source.object;

    tmp_isinstance_cls_1 = (PyObject *)&PyCode_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 206;
        goto try_finally_handler_19;
    }
    if (tmp_res == 1)
    {
        goto branch_no_11;
    }
    else
    {
        goto branch_yes_11;
    }
    branch_yes_11:;
    tmp_source_name_25 = tmp_eval_1__source.object;

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_strip );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 206;
        goto try_finally_handler_19;
    }
    tmp_call_arg_element_17 = const_str_digest_36a0ff6adef8f150baa070bcc241cce5;
    frame_function->f_lineno = 206;
    tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 206;
        goto try_finally_handler_19;
    }
    assert( tmp_eval_1__source.object != NULL );
    {
        PyObject *old = tmp_eval_1__source.object;
        tmp_eval_1__source.object = tmp_assign_source_28;
        Py_DECREF( old );
    }

    branch_no_11:;
    tmp_eval_source_1 = tmp_eval_1__source.object;

    tmp_eval_globals_1 = tmp_eval_1__globals.object;

    tmp_eval_locals_1 = tmp_eval_1__locals.object;

    tmp_eval_compiled_1 = COMPILE_CODE( tmp_eval_source_1, const_str_angle_string, const_str_plain_eval, NULL, NULL );
    if ( tmp_eval_compiled_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 206;
        goto try_finally_handler_19;
    }
    tmp_assign_source_22 = EVAL_CODE( tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1 );
    Py_DECREF( tmp_eval_compiled_1 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 206;
        goto try_finally_handler_19;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_19:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    tmp_result = tmp_eval_1__globals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_eval_1__globals.object );
        tmp_eval_1__globals.object = NULL;
    }

    assert( tmp_result != false );
    tmp_result = tmp_eval_1__locals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_eval_1__locals.object );
        tmp_eval_1__locals.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_eval_1__source.object );
    tmp_eval_1__source.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_15 != NULL )
    {
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;

        goto try_finally_handler_18;
    }

    goto finally_end_17;
    finally_end_17:;
    if (var_symbols.object == NULL)
    {
        var_symbols.object = tmp_assign_source_22;
    }
    else
    {
        PyObject *old = var_symbols.object;
        var_symbols.object = tmp_assign_source_22;
        Py_DECREF( old );
    }
    tmp_compare_left_8 = var_symbols.object;

    tmp_compare_right_8 = Py_None;
    tmp_is_4 = ( tmp_compare_left_8 == tmp_compare_right_8 );
    if (tmp_is_4)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_29 = NULL;
    // Tried code
    tmp_source_name_26 = var_frame.object;

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 211;
        goto try_finally_handler_20;
    }

    tmp_assign_source_30 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_f_globals );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 211;
        goto try_finally_handler_20;
    }
    if (tmp_eval_2__globals.object == NULL)
    {
        tmp_eval_2__globals.object = tmp_assign_source_30;
    }
    else
    {
        PyObject *old = tmp_eval_2__globals.object;
        tmp_eval_2__globals.object = tmp_assign_source_30;
        Py_DECREF( old );
    }
    tmp_source_name_27 = var_frame.object;

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 211;
        goto try_finally_handler_20;
    }

    tmp_assign_source_31 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_f_locals );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 211;
        goto try_finally_handler_20;
    }
    if (tmp_eval_2__locals.object == NULL)
    {
        tmp_eval_2__locals.object = tmp_assign_source_31;
    }
    else
    {
        PyObject *old = tmp_eval_2__locals.object;
        tmp_eval_2__locals.object = tmp_assign_source_31;
        Py_DECREF( old );
    }
    tmp_compare_left_9 = tmp_eval_2__locals.object;

    tmp_compare_right_9 = Py_None;
    tmp_is_5 = ( tmp_compare_left_9 == tmp_compare_right_9 );
    if (tmp_is_5)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_compare_left_10 = tmp_eval_2__globals.object;

    tmp_compare_right_10 = Py_None;
    tmp_is_6 = ( tmp_compare_left_10 == tmp_compare_right_10 );
    if (tmp_is_6)
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_assign_source_32 = PyDict_New();
    if ((var_frame.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_frame,
            var_frame.object
        );

    }
    if ((var_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_verbose,
            var_verbose.object
        );

    }
    if ((var_postpone.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_postpone,
            var_postpone.object
        );

    }
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_package_name,
            var_package_name.object
        );

    }
    if ((var_info_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_info_module,
            var_info_module.object
        );

    }
    if ((var_global_symbols.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_global_symbols,
            var_global_symbols.object
        );

    }
    if ((var_postpone_import.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_postpone_import,
            var_postpone_import.object
        );

    }
    if ((var_old_object.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_old_object,
            var_old_object.object
        );

    }
    if ((var_cmdstr.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_cmdstr,
            var_cmdstr.object
        );

    }
    if ((var_new_object.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_new_object,
            var_new_object.object
        );

    }
    if ((var_symbol.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_symbol,
            var_symbol.object
        );

    }
    if ((var_symbols.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_symbols,
            var_symbols.object
        );

    }
    if ((var_s.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_s,
            var_s.object
        );

    }
    if ((var_old_objects.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_old_objects,
            var_old_objects.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_packages.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_packages,
            par_packages.object
        );

    }
    if ((par_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_32,
            const_str_plain_options,
            par_options.object
        );

    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_assign_source_32 = tmp_eval_2__globals.object;

    Py_INCREF( tmp_assign_source_32 );
    condexpr_end_7:;
    assert( tmp_eval_2__locals.object != NULL );
    {
        PyObject *old = tmp_eval_2__locals.object;
        tmp_eval_2__locals.object = tmp_assign_source_32;
        Py_DECREF( old );
    }

    branch_no_13:;
    tmp_compare_left_11 = tmp_eval_2__globals.object;

    tmp_compare_right_11 = Py_None;
    tmp_is_7 = ( tmp_compare_left_11 == tmp_compare_right_11 );
    if (tmp_is_7)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_assign_source_33 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    assert( tmp_eval_2__globals.object != NULL );
    {
        PyObject *old = tmp_eval_2__globals.object;
        tmp_eval_2__globals.object = INCREASE_REFCOUNT( tmp_assign_source_33 );
        Py_DECREF( old );
    }

    branch_no_14:;
    tmp_binop_left_5 = const_str_digest_794a00a2a4a8222e4f3922201cf84223;
    tmp_binop_right_5 = var_package_name.object;

    if ( tmp_binop_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 210;
        goto try_finally_handler_20;
    }

    tmp_assign_source_34 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto try_finally_handler_20;
    }
    if (tmp_eval_2__source.object == NULL)
    {
        tmp_eval_2__source.object = tmp_assign_source_34;
    }
    else
    {
        PyObject *old = tmp_eval_2__source.object;
        tmp_eval_2__source.object = tmp_assign_source_34;
        Py_DECREF( old );
    }
    tmp_isinstance_inst_2 = tmp_eval_2__source.object;

    tmp_isinstance_cls_2 = (PyObject *)&PyCode_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto try_finally_handler_20;
    }
    if (tmp_res == 1)
    {
        goto branch_no_15;
    }
    else
    {
        goto branch_yes_15;
    }
    branch_yes_15:;
    tmp_source_name_28 = tmp_eval_2__source.object;

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_strip );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto try_finally_handler_20;
    }
    tmp_call_arg_element_18 = const_str_digest_36a0ff6adef8f150baa070bcc241cce5;
    frame_function->f_lineno = 210;
    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_16 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto try_finally_handler_20;
    }
    assert( tmp_eval_2__source.object != NULL );
    {
        PyObject *old = tmp_eval_2__source.object;
        tmp_eval_2__source.object = tmp_assign_source_35;
        Py_DECREF( old );
    }

    branch_no_15:;
    tmp_eval_source_2 = tmp_eval_2__source.object;

    tmp_eval_globals_2 = tmp_eval_2__globals.object;

    tmp_eval_locals_2 = tmp_eval_2__locals.object;

    tmp_eval_compiled_2 = COMPILE_CODE( tmp_eval_source_2, const_str_angle_string, const_str_plain_eval, NULL, NULL );
    if ( tmp_eval_compiled_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto try_finally_handler_20;
    }
    tmp_assign_source_29 = EVAL_CODE( tmp_eval_compiled_2, tmp_eval_globals_2, tmp_eval_locals_2 );
    Py_DECREF( tmp_eval_compiled_2 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto try_finally_handler_20;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_20:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_8 = frame_function->f_lineno;
    tmp_result = tmp_eval_2__globals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_eval_2__globals.object );
        tmp_eval_2__globals.object = NULL;
    }

    assert( tmp_result != false );
    tmp_result = tmp_eval_2__locals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_eval_2__locals.object );
        tmp_eval_2__locals.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_eval_2__source.object );
    tmp_eval_2__source.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_16 != NULL )
    {
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;

        goto try_finally_handler_18;
    }

    goto finally_end_18;
    finally_end_18:;
    if (var_symbols.object == NULL)
    {
        var_symbols.object = tmp_assign_source_29;
    }
    else
    {
        PyObject *old = var_symbols.object;
        var_symbols.object = tmp_assign_source_29;
        Py_DECREF( old );
    }
    // Tried code
    tmp_assign_source_36 = NULL;
    // Tried code
    tmp_iter_arg_3 = var_symbols.object;

    tmp_assign_source_37 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 212;
        goto try_finally_handler_22;
    }
    if (tmp_listcontr_1__listcontr_iter.object == NULL)
    {
        tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_37;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__listcontr_iter.object;
        tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_37;
        Py_DECREF( old );
    }
    tmp_assign_source_38 = PyList_New( 0 );
    if (tmp_listcontr_1__listcontr_result.object == NULL)
    {
        tmp_listcontr_1__listcontr_result.object = tmp_assign_source_38;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__listcontr_result.object;
        tmp_listcontr_1__listcontr_result.object = tmp_assign_source_38;
        Py_DECREF( old );
    }
    loop_start_3:;
    tmp_next_source_3 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_39 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_39 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 212;
            goto try_finally_handler_22;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_39;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_39;
        Py_DECREF( old );
    }
    tmp_assign_source_40 = tmp_listcontr_1__iter_value_0.object;

    if (var_s.object == NULL)
    {
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_40 );
    }
    else
    {
        PyObject *old = var_s.object;
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_40 );
        Py_DECREF( old );
    }
    tmp_source_name_29 = var_s.object;

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_startswith );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 212;
        goto try_finally_handler_22;
    }
    tmp_call_arg_element_19 = const_str_plain__;
    frame_function->f_lineno = 212;
    tmp_cond_value_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_17, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_17 );
    if ( tmp_cond_value_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 212;
        goto try_finally_handler_22;
    }
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        frame_function->f_lineno = 212;
        goto try_finally_handler_22;
    }
    Py_DECREF( tmp_cond_value_10 );
    if (tmp_cond_truth_10 == 1)
    {
        goto branch_no_16;
    }
    else
    {
        goto branch_yes_16;
    }
    branch_yes_16:;
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = var_s.object;

    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 212;
        goto try_finally_handler_22;
    }
    tmp_unused = Py_None;
    branch_no_16:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 212;
        goto try_finally_handler_22;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_assign_source_36 = tmp_listcontr_1__listcontr_result.object;

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_22:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_17 != NULL )
    {
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;

        goto try_finally_handler_21;
    }

    goto finally_end_19;
    finally_end_19:;
    if (var_symbols.object == NULL)
    {
        var_symbols.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
    }
    else
    {
        PyObject *old = var_symbols.object;
        var_symbols.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_21:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_10 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_10;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_18 != NULL )
    {
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;

        goto try_finally_handler_18;
    }

    goto finally_end_20;
    finally_end_20:;
    branch_no_12:;
    goto branch_end_8;
    branch_no_8:;
    tmp_assign_source_41 = PyList_New( 1 );
    tmp_list_element_1 = var_symbol.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_41, 0, tmp_list_element_1 );
    if (var_symbols.object == NULL)
    {
        var_symbols.object = tmp_assign_source_41;
    }
    else
    {
        PyObject *old = var_symbols.object;
        var_symbols.object = tmp_assign_source_41;
        Py_DECREF( old );
    }
    branch_end_8:;
    tmp_compare_left_12 = var_verbose.object;

    if ( tmp_compare_left_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49769 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 216;
        goto try_finally_handler_18;
    }

    tmp_compare_right_12 = const_int_neg_1;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 216;
        goto try_finally_handler_18;
    }
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_assign_source_42 = PyDict_New();
    if (var_old_objects.object == NULL)
    {
        var_old_objects.object = tmp_assign_source_42;
    }
    else
    {
        PyObject *old = var_old_objects.object;
        var_old_objects.object = tmp_assign_source_42;
        Py_DECREF( old );
    }
    tmp_iter_arg_4 = var_symbols.object;

    if ( tmp_iter_arg_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49994 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto try_finally_handler_18;
    }

    tmp_assign_source_43 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto try_finally_handler_18;
    }
    if (tmp_for_loop_3__for_iterator.object == NULL)
    {
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_43;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__for_iterator.object;
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_43;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_44 = ITERATOR_NEXT( tmp_next_source_4 );
    if (tmp_assign_source_44 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_4;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 218;
            goto try_finally_handler_23;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_44;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_44;
        Py_DECREF( old );
    }
    tmp_assign_source_45 = tmp_for_loop_3__iter_value.object;

    if (var_s.object == NULL)
    {
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_45 );
    }
    else
    {
        PyObject *old = var_s.object;
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_45 );
        Py_DECREF( old );
    }
    tmp_compare_left_13 = var_s.object;

    tmp_source_name_30 = var_frame.object;

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 219;
        goto try_finally_handler_23;
    }

    tmp_compare_right_13 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_f_locals );
    if ( tmp_compare_right_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto try_finally_handler_23;
    }
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_13 );

        frame_function->f_lineno = 219;
        goto try_finally_handler_23;
    }
    Py_DECREF( tmp_compare_right_13 );
    if (tmp_cmp_In_2 == 1)
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_source_name_31 = var_frame.object;

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 220;
        goto try_finally_handler_23;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_f_locals );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto try_finally_handler_23;
    }
    tmp_subscr_subscript_2 = var_s.object;

    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto try_finally_handler_23;
    }
    tmp_ass_subscribed_1 = var_old_objects.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50047 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 220;
        goto try_finally_handler_23;
    }

    tmp_ass_subscript_1 = var_s.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto try_finally_handler_23;
    }
    branch_no_18:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto try_finally_handler_23;
    }
    goto loop_start_4;
    loop_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_23:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
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
    if ( exception_keeper_type_19 != NULL )
    {
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;

        goto try_finally_handler_18;
    }

    goto finally_end_21;
    finally_end_21:;
    branch_no_17:;
    tmp_binop_left_8 = const_str_digest_57457f388f11cc2bc2eb1803f4063965;
    tmp_binop_right_8 = var_package_name.object;

    if ( tmp_binop_right_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 222;
        goto try_finally_handler_18;
    }

    tmp_binop_left_7 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    if ( tmp_binop_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto try_finally_handler_18;
    }
    tmp_binop_right_7 = const_str_digest_6b99e14075fac82e097b86d995d2a612;
    tmp_binop_left_6 = BINARY_OPERATION_ADD( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_left_7 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto try_finally_handler_18;
    }
    tmp_binop_right_6 = var_symbol.object;

    if ( tmp_binop_right_6 == NULL )
    {
        Py_DECREF( tmp_binop_left_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50104 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 222;
        goto try_finally_handler_18;
    }

    tmp_assign_source_46 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto try_finally_handler_18;
    }
    if (var_cmdstr.object == NULL)
    {
        var_cmdstr.object = tmp_assign_source_46;
    }
    else
    {
        PyObject *old = var_cmdstr.object;
        var_cmdstr.object = tmp_assign_source_46;
        Py_DECREF( old );
    }
    tmp_source_name_32 = par_self.object;

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 223;
        goto try_finally_handler_18;
    }

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain__execcmd );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 223;
        goto try_finally_handler_18;
    }
    tmp_call_arg_element_20 = var_cmdstr.object;

    frame_function->f_lineno = 223;
    tmp_cond_value_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_18 );
    if ( tmp_cond_value_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 223;
        goto try_finally_handler_18;
    }
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_11 );

        frame_function->f_lineno = 223;
        goto try_finally_handler_18;
    }
    Py_DECREF( tmp_cond_value_11 );
    if (tmp_cond_truth_11 == 1)
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    goto loop_start_2;
    branch_no_19:;
    tmp_compare_left_14 = var_verbose.object;

    if ( tmp_compare_left_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49769 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto try_finally_handler_18;
    }

    tmp_compare_right_14 = const_int_neg_1;
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto try_finally_handler_18;
    }
    if (tmp_cmp_NotEq_3 == 1)
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_source_name_33 = var_old_objects.object;

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50047 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto try_finally_handler_18;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_items );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto try_finally_handler_18;
    }
    frame_function->f_lineno = 227;
    tmp_iter_arg_5 = CALL_FUNCTION_NO_ARGS( tmp_called_19 );
    Py_DECREF( tmp_called_19 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto try_finally_handler_18;
    }
    tmp_assign_source_47 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto try_finally_handler_18;
    }
    if (tmp_for_loop_4__for_iterator.object == NULL)
    {
        tmp_for_loop_4__for_iterator.object = tmp_assign_source_47;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__for_iterator.object;
        tmp_for_loop_4__for_iterator.object = tmp_assign_source_47;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_4__for_iterator.object;

    tmp_assign_source_48 = ITERATOR_NEXT( tmp_next_source_5 );
    if (tmp_assign_source_48 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_5;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 227;
            goto try_finally_handler_24;
        }
    }

    if (tmp_for_loop_4__iter_value.object == NULL)
    {
        tmp_for_loop_4__iter_value.object = tmp_assign_source_48;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__iter_value.object;
        tmp_for_loop_4__iter_value.object = tmp_assign_source_48;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_6 = tmp_for_loop_4__iter_value.object;

    tmp_assign_source_49 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto try_finally_handler_25;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_49;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_49;
        Py_DECREF( old );
    }
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_50 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_50 == NULL )
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


        frame_function->f_lineno = 227;
        goto try_finally_handler_25;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_50;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_50;
        Py_DECREF( old );
    }
    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_51 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_51 == NULL )
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


        frame_function->f_lineno = 227;
        goto try_finally_handler_25;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_51;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_51;
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

            goto try_finally_handler_25;
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

        goto try_finally_handler_25;
    }
    tmp_assign_source_52 = tmp_tuple_unpack_1__element_1.object;

    if (var_s.object == NULL)
    {
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_52 );
    }
    else
    {
        PyObject *old = var_s.object;
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_52 );
        Py_DECREF( old );
    }
    tmp_assign_source_53 = tmp_tuple_unpack_1__element_2.object;

    if (var_old_object.object == NULL)
    {
        var_old_object.object = INCREASE_REFCOUNT( tmp_assign_source_53 );
    }
    else
    {
        PyObject *old = var_old_object.object;
        var_old_object.object = INCREASE_REFCOUNT( tmp_assign_source_53 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_25:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_12 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_12;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_20 != NULL )
    {
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;

        goto try_finally_handler_24;
    }

    goto finally_end_22;
    finally_end_22:;
    tmp_source_name_34 = var_frame.object;

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2076 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto try_finally_handler_24;
    }

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_f_locals );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto try_finally_handler_24;
    }
    tmp_subscr_subscript_3 = var_s.object;

    if ( tmp_subscr_subscript_3 == NULL )
    {
        Py_DECREF( tmp_subscr_target_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto try_finally_handler_24;
    }

    tmp_assign_source_54 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto try_finally_handler_24;
    }
    if (var_new_object.object == NULL)
    {
        var_new_object.object = tmp_assign_source_54;
    }
    else
    {
        PyObject *old = var_new_object.object;
        var_new_object.object = tmp_assign_source_54;
        Py_DECREF( old );
    }
    tmp_compare_left_15 = var_new_object.object;

    tmp_compare_right_15 = var_old_object.object;

    if ( tmp_compare_right_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49878 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto try_finally_handler_24;
    }

    tmp_isnot_1 = ( tmp_compare_left_15 != tmp_compare_right_15 );
    if (tmp_isnot_1)
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_source_name_35 = par_self.object;

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto try_finally_handler_24;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_warn );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto try_finally_handler_24;
    }
    tmp_binop_left_9 = const_str_digest_6cfcfc0587503a6d04208d58111eae4e;
    tmp_binop_right_9 = PyTuple_New( 3 );
    tmp_tuple_element_3 = var_s.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto try_finally_handler_24;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_9, 0, tmp_tuple_element_3 );
    tmp_source_name_36 = par_self.object;

    if ( tmp_source_name_36 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto try_finally_handler_24;
    }

    tmp_called_21 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain__obj2repr );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_binop_right_9 );

        frame_function->f_lineno = 231;
        goto try_finally_handler_24;
    }
    tmp_call_arg_element_22 = var_new_object.object;

    frame_function->f_lineno = 231;
    tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_21, tmp_call_arg_element_22 );
    Py_DECREF( tmp_called_21 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_binop_right_9 );

        frame_function->f_lineno = 231;
        goto try_finally_handler_24;
    }
    PyTuple_SET_ITEM( tmp_binop_right_9, 1, tmp_tuple_element_3 );
    tmp_source_name_37 = par_self.object;

    if ( tmp_source_name_37 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto try_finally_handler_24;
    }

    tmp_called_22 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain__obj2repr );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_binop_right_9 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_24;
    }
    tmp_call_arg_element_23 = var_old_object.object;

    if ( tmp_call_arg_element_23 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_binop_right_9 );
        Py_DECREF( tmp_called_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49878 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto try_finally_handler_24;
    }

    frame_function->f_lineno = 232;
    tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_23 );
    Py_DECREF( tmp_called_22 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_binop_right_9 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_24;
    }
    PyTuple_SET_ITEM( tmp_binop_right_9, 2, tmp_tuple_element_3 );
    tmp_call_arg_element_21 = BINARY_OPERATION_REMAINDER( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_call_arg_element_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );

        frame_function->f_lineno = 230;
        goto try_finally_handler_24;
    }
    frame_function->f_lineno = 230;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_20, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_20 );
    Py_DECREF( tmp_call_arg_element_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto try_finally_handler_24;
    }
    Py_DECREF( tmp_unused );
    branch_no_21:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto try_finally_handler_24;
    }
    goto loop_start_5;
    loop_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_24:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_13 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_4__iter_value.object );
    tmp_for_loop_4__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator.object );
    tmp_for_loop_4__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_13;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_21 != NULL )
    {
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;

        goto try_finally_handler_18;
    }

    goto finally_end_23;
    finally_end_23:;
    branch_no_20:;
    tmp_compare_left_16 = var_symbol.object;

    if ( tmp_compare_left_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50104 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto try_finally_handler_18;
    }

    tmp_compare_right_16 = const_str_chr_42;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_16, tmp_compare_right_16 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto try_finally_handler_18;
    }
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_source_name_39 = par_self.object;

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_18;
    }

    tmp_source_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_parent_export_names );
    if ( tmp_source_name_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto try_finally_handler_18;
    }
    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_extend );
    Py_DECREF( tmp_source_name_38 );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto try_finally_handler_18;
    }
    tmp_call_arg_element_24 = var_symbols.object;

    if ( tmp_call_arg_element_24 == NULL )
    {
        Py_DECREF( tmp_called_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49994 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_18;
    }

    frame_function->f_lineno = 235;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_24 );
    Py_DECREF( tmp_called_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto try_finally_handler_18;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_22;
    branch_no_22:;
    tmp_source_name_41 = par_self.object;

    if ( tmp_source_name_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto try_finally_handler_18;
    }

    tmp_source_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_parent_export_names );
    if ( tmp_source_name_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto try_finally_handler_18;
    }
    tmp_called_24 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_append );
    Py_DECREF( tmp_source_name_40 );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto try_finally_handler_18;
    }
    tmp_call_arg_element_25 = var_symbol.object;

    if ( tmp_call_arg_element_25 == NULL )
    {
        Py_DECREF( tmp_called_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50104 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto try_finally_handler_18;
    }

    frame_function->f_lineno = 237;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_24, tmp_call_arg_element_25 );
    Py_DECREF( tmp_called_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto try_finally_handler_18;
    }
    Py_DECREF( tmp_unused );
    branch_end_22:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 204;
        goto try_finally_handler_18;
    }
    goto loop_start_2;
    loop_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_18:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_14 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_14;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_22 != NULL )
    {
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;

        goto try_finally_handler_5;
    }

    goto finally_end_24;
    finally_end_24:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 177;
        goto try_finally_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_15 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_15;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_23 != NULL )
    {
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;

        goto frame_exception_exit_1;
    }

    goto finally_end_25;
    finally_end_25:;

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
    if ((var_frame.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_frame,
            var_frame.object
        );

    }
    if ((var_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_verbose,
            var_verbose.object
        );

    }
    if ((var_postpone.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_postpone,
            var_postpone.object
        );

    }
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package_name,
            var_package_name.object
        );

    }
    if ((var_info_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info_module,
            var_info_module.object
        );

    }
    if ((var_global_symbols.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_global_symbols,
            var_global_symbols.object
        );

    }
    if ((var_postpone_import.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_postpone_import,
            var_postpone_import.object
        );

    }
    if ((var_old_object.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_old_object,
            var_old_object.object
        );

    }
    if ((var_cmdstr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmdstr,
            var_cmdstr.object
        );

    }
    if ((var_new_object.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_new_object,
            var_new_object.object
        );

    }
    if ((var_symbol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_symbol,
            var_symbol.object
        );

    }
    if ((var_symbols.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_symbols,
            var_symbols.object
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
    if ((var_old_objects.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_old_objects,
            var_old_objects.object
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
    if ((par_packages.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_packages,
            par_packages.object
        );

    }
    if ((par_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_options,
            par_options.object
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
static PyObject *fparse_function_5___call___of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_packages = NULL;
    PyObject *_python_par_options = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_options = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_options = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

            for ( int i = 0; i <= ((PyDictObject *)kw)->ma_mask; i++ )
            {
                PyDictEntry *entry = &((PyDictObject *)kw)->ma_table[ i ];

                if ( entry->me_value != NULL )
                {

#if PYTHON_VERSION < 300
                    if (unlikely( !PyString_Check( entry->me_key ) && !PyUnicode_Check( entry->me_key ) ))
#else
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
#endif
                    {
                        PyErr_Format( PyExc_TypeError, "__call__() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, entry->me_value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
#else
        if ( _PyDict_HasSplitTable( (PyDictObject *)kw) )
        {
            PyDictObject *mp = (PyDictObject *)kw;

            PyObject **newvalues = PyMem_NEW( PyObject *, mp->ma_keys->dk_size );
            assert (newvalues != NULL);

            PyDictObject *split_copy = PyObject_GC_New( PyDictObject, &PyDict_Type );
            assert( split_copy != NULL );

            split_copy->ma_values = newvalues;
            split_copy->ma_keys = mp->ma_keys;
            split_copy->ma_used = mp->ma_used;

            mp->ma_keys->dk_refcnt += 1;

            Nuitka_GC_Track( split_copy );

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &split_copy->ma_keys->dk_entries[ i ];

                if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_options = (PyObject *)split_copy;
        }
        else
        {
            _python_par_options = PyDict_New();

            PyDictObject *mp = (PyDictObject *)kw;

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &mp->ma_keys->dk_entries[i];

                // TODO: One of these cases has been dealt with above.
                PyObject *value;
                if ( mp->ma_values )
                {
                    value = mp->ma_values[ i ];
                }
                else
                {
                    value = entry->me_value;
                }

                if ( value != NULL )
                {
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                    {
                        PyErr_Format( PyExc_TypeError, "__call__() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
        }
#endif
        }
        else
        {
            _python_par_options = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_options, const_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_options, const_str_plain_self );

            kw_found += 1;
        }
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

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_packages = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_packages, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_packages = INCREASE_REFCOUNT( const_tuple_empty );
    }


    return impl_function_5___call___of_class_1_PackageLoader_of_module_numpy$_import_tools( self, _python_par_self, _python_par_packages, _python_par_options );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_packages );
    Py_XDECREF( _python_par_options );

    return NULL;
}

static PyObject *dparse_function_5___call___of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_5___call___of_class_1_PackageLoader_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_5___call___of_class_1_PackageLoader_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6__execcmd_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_cmdstr )
{
    // No context is used.

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_cmdstr; par_cmdstr.object = _python_par_cmdstr;
    PyObjectLocalVariable var_frame;
    PyObjectLocalVariable var_msg;
    PyObjectTempVariable tmp_exec_1__globals;
    PyObjectTempVariable tmp_exec_1__locals;
    PyObjectTempVariable tmp_exec_1__source;
    PyObjectTempVariable tmp_try_except_1__unhandled_indicator;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_eval_globals_1;
    PyObject *tmp_eval_locals_1;
    PyObject *tmp_eval_source_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_exec_compiled_1;
    PyObject *tmp_exec_result_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f86f75e0e6435006a73af9a92827f7ed, module_numpy$_import_tools );
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

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parent_frame );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    assert( var_frame.object == NULL );
    var_frame.object = tmp_assign_source_1;

    tmp_assign_source_2 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator.object == NULL );
    tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    // Tried code
    // Tried block of try/except
    // Tried code
    tmp_source_name_2 = var_frame.object;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_f_globals );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_2;
    }
    assert( tmp_exec_1__globals.object == NULL );
    tmp_exec_1__globals.object = tmp_assign_source_3;

    tmp_source_name_3 = var_frame.object;

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_f_locals );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_2;
    }
    assert( tmp_exec_1__locals.object == NULL );
    tmp_exec_1__locals.object = tmp_assign_source_4;

    tmp_compare_left_1 = tmp_exec_1__locals.object;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if (tmp_is_1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_compare_left_2 = tmp_exec_1__globals.object;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_2)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_5 = INCREASE_REFCOUNT( locals_dict );
    if ((var_frame.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_5,
            const_str_plain_frame,
            var_frame.object
        );

    }
    if ((var_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_5,
            const_str_plain_msg,
            var_msg.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_5,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_cmdstr.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_5,
            const_str_plain_cmdstr,
            par_cmdstr.object
        );

    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_5 = tmp_exec_1__globals.object;

    Py_INCREF( tmp_assign_source_5 );
    condexpr_end_1:;
    assert( tmp_exec_1__locals.object != NULL );
    {
        PyObject *old = tmp_exec_1__locals.object;
        tmp_exec_1__locals.object = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_3 = tmp_exec_1__globals.object;

    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_3)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_6 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    assert( tmp_exec_1__globals.object != NULL );
    {
        PyObject *old = tmp_exec_1__globals.object;
        tmp_exec_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_assign_source_7 = par_cmdstr.object;

    if ( tmp_assign_source_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50156 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto try_finally_handler_2;
    }

    assert( tmp_exec_1__source.object == NULL );
    tmp_exec_1__source.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

    tmp_isinstance_inst_1 = tmp_exec_1__source.object;

    tmp_isinstance_cls_1 = (PyObject *)&PyFile_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_2;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_4 = tmp_exec_1__source.object;

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_read );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 245;
    tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_2;
    }
    assert( tmp_exec_1__source.object != NULL );
    {
        PyObject *old = tmp_exec_1__source.object;
        tmp_exec_1__source.object = tmp_assign_source_8;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_eval_source_1 = tmp_exec_1__source.object;

    tmp_eval_globals_1 = tmp_exec_1__globals.object;

    tmp_eval_locals_1 = tmp_exec_1__locals.object;

    tmp_exec_compiled_1 = COMPILE_CODE( tmp_eval_source_1, const_str_angle_string, const_str_plain_exec, NULL, NULL );
    if ( tmp_exec_compiled_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_2;
    }
    tmp_exec_result_1 = EVAL_CODE( tmp_exec_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1 );
    Py_DECREF( tmp_exec_compiled_1 );
    if ( tmp_exec_result_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_exec_result_1 );
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
    tmp_result = tmp_exec_1__globals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_exec_1__globals.object );
        tmp_exec_1__globals.object = NULL;
    }

    assert( tmp_result != false );
    tmp_result = tmp_exec_1__locals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_exec_1__locals.object );
        tmp_exec_1__locals.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_exec_1__source.object );
    tmp_exec_1__source.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_except_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_assign_source_9 = Py_False;
    if (tmp_try_except_1__unhandled_indicator.object == NULL)
    {
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator.object;
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
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
    tmp_compare_right_4 = PyExc_Exception;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto try_finally_handler_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_10 = PyThreadState_GET()->exc_value;
    assert( var_msg.object == NULL );
    var_msg.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto try_finally_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_error );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto try_finally_handler_1;
    }
    tmp_binop_left_1 = const_str_digest_8ff70fb587a833b137a0fe481eb142cf;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_cmdstr.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50156 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_msg.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 247;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 247;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_1;
    branch_end_4:;
    try_except_end_1:;
    tmp_compare_left_5 = tmp_try_except_1__unhandled_indicator.object;

    tmp_compare_right_5 = Py_True;
    tmp_is_4 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if (tmp_is_4)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto try_finally_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_log );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto try_finally_handler_1;
    }
    tmp_binop_left_2 = const_str_digest_560c44bd280bdaab9a60f35bf44eb43b;
    tmp_binop_right_2 = par_cmdstr.object;

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50156 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 250;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 250;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    try_finally_handler_start_1:;
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
    tmp_result = tmp_try_except_1__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_1__unhandled_indicator.object );
        tmp_try_except_1__unhandled_indicator.object = NULL;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

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


    tmp_frame_locals = INCREASE_REFCOUNT( locals_dict );
    if ((var_frame.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_frame,
            var_frame.object
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
    if ((par_cmdstr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmdstr,
            par_cmdstr.object
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
Py_DECREF( locals_dict );
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
Py_DECREF( locals_dict );
    return tmp_return_value;

}
static PyObject *fparse_function_6__execcmd_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_cmdstr = NULL;
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
                PyErr_Format( PyExc_TypeError, "_execcmd() keywords must be strings" );
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
            if ( found == false && const_str_plain_cmdstr == key )
            {
                assert( _python_par_cmdstr == NULL );
                _python_par_cmdstr = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cmdstr, key ) == 1 )
            {
                assert( _python_par_cmdstr == NULL );
                _python_par_cmdstr = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_execcmd() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_cmdstr != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_cmdstr = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_cmdstr == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_cmdstr = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_cmdstr == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_cmdstr };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6__execcmd_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, _python_par_self, _python_par_cmdstr );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_cmdstr );

    return NULL;
}

static PyObject *dparse_function_6__execcmd_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_6__execcmd_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6__execcmd_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7__obj2repr_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_obj )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_obj; par_obj.object = _python_par_obj;
    PyObjectLocalVariable var_module;
    PyObjectLocalVariable var_file;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_return_value;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    PyObject *tmp_unary_arg_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5bd4abb831b277e7b20a4a50b28b77f7, module_numpy$_import_tools );
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
    tmp_getattr_target_1 = par_obj.object;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10401 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain___module__;
    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    assert( var_module.object == NULL );
    var_module.object = tmp_assign_source_1;

    tmp_getattr_target_2 = par_obj.object;

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10401 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = const_str_plain___file__;
    tmp_getattr_default_2 = Py_None;
    tmp_assign_source_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    assert( var_file.object == NULL );
    var_file.object = tmp_assign_source_2;

    tmp_compare_left_1 = var_module.object;

    tmp_compare_right_1 = Py_None;
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
    tmp_unary_arg_1 = par_obj.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10401 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_2 = UNARY_OPERATION( PyObject_Repr, tmp_unary_arg_1 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_2 = const_str_digest_3856cfbe7d1ed254852f8786722c6a9f;
    tmp_binop_left_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = var_module.object;

    tmp_return_value = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = var_file.object;

    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if (tmp_isnot_2)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_unary_arg_2 = par_obj.object;

    if ( tmp_unary_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10401 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_4 = UNARY_OPERATION( PyObject_Repr, tmp_unary_arg_2 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_4 = const_str_digest_3856cfbe7d1ed254852f8786722c6a9f;
    tmp_binop_left_3 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_3 = var_file.object;

    tmp_return_value = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_unary_arg_3 = par_obj.object;

    if ( tmp_unary_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10401 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_return_value = UNARY_OPERATION( PyObject_Repr, tmp_unary_arg_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
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
    if ((var_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_module,
            var_module.object
        );

    }
    if ((var_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_file,
            var_file.object
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
    if ((par_obj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_obj,
            par_obj.object
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
static PyObject *fparse_function_7__obj2repr_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_obj = NULL;
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
                PyErr_Format( PyExc_TypeError, "_obj2repr() keywords must be strings" );
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
            if ( found == false && const_str_plain_obj == key )
            {
                assert( _python_par_obj == NULL );
                _python_par_obj = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_obj, key ) == 1 )
            {
                assert( _python_par_obj == NULL );
                _python_par_obj = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_obj2repr() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_obj != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_obj = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_obj == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_obj = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_obj == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_obj };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7__obj2repr_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, _python_par_self, _python_par_obj );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_obj );

    return NULL;
}

static PyObject *dparse_function_7__obj2repr_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_7__obj2repr_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7__obj2repr_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_log_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_mess )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_mess; par_mess.object = _python_par_mess;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a4b33b4568da6924ac9a75f1f7271c10, module_numpy$_import_tools );
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

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_verbose );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_str_arg_1 = par_mess.object;

    if ( tmp_str_arg_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50208 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stderr );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_file;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 265;
    tmp_unused = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

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
    if ((par_mess.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mess,
            par_mess.object
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
static PyObject *fparse_function_8_log_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_mess = NULL;
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
                PyErr_Format( PyExc_TypeError, "log() keywords must be strings" );
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
            if ( found == false && const_str_plain_mess == key )
            {
                assert( _python_par_mess == NULL );
                _python_par_mess = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mess, key ) == 1 )
            {
                assert( _python_par_mess == NULL );
                _python_par_mess = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "log() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_mess != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_mess = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_mess == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_mess = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_mess == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_mess };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8_log_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, _python_par_self, _python_par_mess );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_mess );

    return NULL;
}

static PyObject *dparse_function_8_log_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_8_log_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_log_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_warn_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_mess )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_mess; par_mess.object = _python_par_mess;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_10114983f9e153fdbaa88285f161ee34, module_numpy$_import_tools );
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

        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_verbose );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_GtE_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_str_arg_1 = par_mess.object;

    if ( tmp_str_arg_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50208 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stderr );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_file;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 268;
    tmp_unused = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

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
    if ((par_mess.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mess,
            par_mess.object
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
static PyObject *fparse_function_9_warn_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_mess = NULL;
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
                PyErr_Format( PyExc_TypeError, "warn() keywords must be strings" );
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
            if ( found == false && const_str_plain_mess == key )
            {
                assert( _python_par_mess == NULL );
                _python_par_mess = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mess, key ) == 1 )
            {
                assert( _python_par_mess == NULL );
                _python_par_mess = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "warn() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_mess != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_mess = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_mess == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_mess = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_mess == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_mess };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_9_warn_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, _python_par_self, _python_par_mess );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_mess );

    return NULL;
}

static PyObject *dparse_function_9_warn_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_9_warn_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_warn_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_error_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_mess )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_mess; par_mess.object = _python_par_mess;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_85a1c917bc15c264a14a9f5b8c548848, module_numpy$_import_tools );
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

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_verbose );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_neg_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_str_arg_1 = par_mess.object;

    if ( tmp_str_arg_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50208 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stderr );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_file;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 271;
    tmp_unused = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

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
    if ((par_mess.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mess,
            par_mess.object
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
static PyObject *fparse_function_10_error_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_mess = NULL;
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
                PyErr_Format( PyExc_TypeError, "error() keywords must be strings" );
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
            if ( found == false && const_str_plain_mess == key )
            {
                assert( _python_par_mess == NULL );
                _python_par_mess = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mess, key ) == 1 )
            {
                assert( _python_par_mess == NULL );
                _python_par_mess = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "error() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_mess != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_mess = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_mess == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_mess = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_mess == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_mess };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_10_error_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, _python_par_self, _python_par_mess );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_mess );

    return NULL;
}

static PyObject *dparse_function_10_error_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_10_error_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_error_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11__get_doc_title_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_info_module )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_info_module; par_info_module.object = _python_par_info_module;
    PyObjectLocalVariable var_title;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0c4483728f10f035e9206a74f2953ac0, module_numpy$_import_tools );
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
    tmp_getattr_target_1 = par_info_module.object;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49379 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain___doc_title__;
    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }
    assert( var_title.object == NULL );
    var_title.object = tmp_assign_source_1;

    tmp_compare_left_1 = var_title.object;

    tmp_compare_right_1 = Py_None;
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
    tmp_return_value = var_title.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_getattr_target_2 = par_info_module.object;

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49379 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = const_str_plain___doc__;
    tmp_getattr_default_2 = Py_None;
    tmp_assign_source_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    assert( var_title.object != NULL );
    {
        PyObject *old = var_title.object;
        var_title.object = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_compare_left_2 = var_title.object;

    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if (tmp_isnot_2)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = var_title.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_lstrip );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 281;
    tmp_source_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_split );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_newline;
    tmp_call_arg_element_2 = const_int_pos_1;
    frame_function->f_lineno = 281;
    tmp_subscr_target_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    assert( var_title.object != NULL );
    {
        PyObject *old = var_title.object;
        var_title.object = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_return_value = var_title.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;

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
    if ((var_title.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_title,
            var_title.object
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
    if ((par_info_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info_module,
            par_info_module.object
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
    tmp_return_value = const_str_digest_d2433e8f66c13120b8b81284d7022766;
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
static PyObject *fparse_function_11__get_doc_title_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_info_module = NULL;
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
                PyErr_Format( PyExc_TypeError, "_get_doc_title() keywords must be strings" );
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
            if ( found == false && const_str_plain_info_module == key )
            {
                assert( _python_par_info_module == NULL );
                _python_par_info_module = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_info_module, key ) == 1 )
            {
                assert( _python_par_info_module == NULL );
                _python_par_info_module = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_get_doc_title() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_info_module != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_info_module = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_info_module == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_info_module = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_info_module == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_info_module };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_11__get_doc_title_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, _python_par_self, _python_par_info_module );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_info_module );

    return NULL;
}

static PyObject *dparse_function_11__get_doc_title_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_11__get_doc_title_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11__get_doc_title_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12__format_titles_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_titles, PyObject *_python_par_colsep )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_titles; par_titles.object = _python_par_titles;
    PyObjectLocalVariable par_colsep; par_colsep.object = _python_par_colsep;
    PyObjectLocalVariable var_display_window_width;
    PyObjectLocalVariable var_name;
    PyObjectLocalVariable var_title;
    PyObjectLocalVariable var_lengths;
    PyObjectLocalVariable var_max_length;
    PyObjectLocalVariable var_lines;
    PyObjectLocalVariable var_w;
    PyObjectLocalVariable var_words;
    PyObjectLocalVariable var_line;
    PyObjectLocalVariable var_tab;
    PyObjectLocalVariable var_word;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_while_loop_1__break_indicator;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_int_pos_70;
    assert( var_display_window_width.object == NULL );
    var_display_window_width.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dac77975f48158a2a19fb77ddeafb95f, module_numpy$_import_tools );
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
    tmp_assign_source_2 = NULL;
    // Tried code
    tmp_binop_left_1 = NULL;
    // Tried code
    tmp_iter_arg_1 = par_titles.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50258 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto try_finally_handler_2;
    }

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_4;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_5 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 287;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_2 = tmp_listcontr_1__iter_value_0.object;

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_7 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_7 == NULL )
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


        frame_function->f_lineno = 287;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_8 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_8 == NULL )
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


        frame_function->f_lineno = 287;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_8;
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

            goto try_finally_handler_3;
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

        goto try_finally_handler_3;
    }
    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1.object;

    if (var_name.object == NULL)
    {
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_name.object;
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2.object;

    if (var_title.object == NULL)
    {
        var_title.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_title.object;
        var_title.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
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

        goto try_finally_handler_2;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_len_arg_1 = var_name.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto try_finally_handler_2;
    }

    tmp_binop_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto try_finally_handler_2;
    }
    tmp_source_name_1 = var_name.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto try_finally_handler_2;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_find );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 287;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_1 = const_str_dot;
    frame_function->f_lineno = 287;
    tmp_binop_right_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 287;
        goto try_finally_handler_2;
    }
    tmp_binop_left_2 = BINARY_OPERATION_SUB( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto try_finally_handler_2;
    }
    tmp_binop_right_2 = const_int_pos_1;
    tmp_append_value_1 = BINARY_OPERATION_SUB( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto try_finally_handler_2;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_binop_left_1 = tmp_listcontr_1__listcontr_result.object;

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
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
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
    tmp_binop_right_1 = LIST_COPY( const_list_int_0_list );
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto try_finally_handler_1;
    }
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

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

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
    assert( var_lengths.object == NULL );
    var_lengths.object = tmp_assign_source_2;

    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = var_lengths.object;

    frame_function->f_lineno = 288;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }
    assert( var_max_length.object == NULL );
    var_max_length.object = tmp_assign_source_11;

    tmp_assign_source_12 = PyList_New( 0 );
    assert( var_lines.object == NULL );
    var_lines.object = tmp_assign_source_12;

    tmp_iter_arg_3 = par_titles.object;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50258 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_13;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_14 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 290;
            goto try_finally_handler_4;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_4 = tmp_for_loop_1__iter_value.object;

    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 290;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_2__source_iter.object == NULL)
    {
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter.object;
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_16 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_16 == NULL )
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


        frame_function->f_lineno = 290;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_2__element_1.object == NULL)
    {
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_1.object;
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_17 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_17 == NULL )
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


        frame_function->f_lineno = 290;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_2__element_2.object == NULL)
    {
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_2.object;
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
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

            goto try_finally_handler_5;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_2 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_5;
    }
    tmp_assign_source_18 = tmp_tuple_unpack_2__element_1.object;

    if (var_name.object == NULL)
    {
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
    }
    else
    {
        PyObject *old = var_name.object;
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }
    tmp_assign_source_19 = tmp_tuple_unpack_2__element_2.object;

    if (var_title.object == NULL)
    {
        var_title.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
    }
    else
    {
        PyObject *old = var_title.object;
        var_title.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2.object );
    tmp_tuple_unpack_2__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_4;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_slice_source_1 = var_name.object;

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto try_finally_handler_4;
    }

    tmp_source_name_2 = var_name.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto try_finally_handler_4;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_find );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_3 = const_str_dot;
    frame_function->f_lineno = 291;
    tmp_binop_left_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto try_finally_handler_4;
    }
    tmp_binop_right_4 = const_int_pos_1;
    tmp_slice_lower_1 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_slice_lower_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto try_finally_handler_4;
    }
    tmp_assign_source_20 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, Py_None );
    Py_DECREF( tmp_slice_lower_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto try_finally_handler_4;
    }
    if (var_name.object == NULL)
    {
        var_name.object = tmp_assign_source_20;
    }
    else
    {
        PyObject *old = var_name.object;
        var_name.object = tmp_assign_source_20;
        Py_DECREF( old );
    }
    tmp_binop_left_5 = var_max_length.object;

    if ( tmp_binop_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50310 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto try_finally_handler_4;
    }

    tmp_len_arg_2 = var_name.object;

    tmp_binop_right_5 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto try_finally_handler_4;
    }
    tmp_assign_source_21 = BINARY_OPERATION_SUB( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto try_finally_handler_4;
    }
    if (var_w.object == NULL)
    {
        var_w.object = tmp_assign_source_21;
    }
    else
    {
        PyObject *old = var_w.object;
        var_w.object = tmp_assign_source_21;
        Py_DECREF( old );
    }
    tmp_source_name_3 = var_title.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9587 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto try_finally_handler_4;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_split );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 293;
    tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto try_finally_handler_4;
    }
    if (var_words.object == NULL)
    {
        var_words.object = tmp_assign_source_22;
    }
    else
    {
        PyObject *old = var_words.object;
        var_words.object = tmp_assign_source_22;
        Py_DECREF( old );
    }
    tmp_binop_left_6 = const_str_digest_1f2c8c3323a482a729e91b5ac9b43722;
    tmp_binop_right_6 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_name.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_6, 0, tmp_tuple_element_1 );
    tmp_binop_left_7 = var_w.object;

    tmp_binop_right_7 = const_str_space;
    tmp_tuple_element_1 = BINARY_OPERATION_MUL( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_6 );

        frame_function->f_lineno = 294;
        goto try_finally_handler_4;
    }
    PyTuple_SET_ITEM( tmp_binop_right_6, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_colsep.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50366 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 294;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_6, 2, tmp_tuple_element_1 );
    tmp_assign_source_23 = BINARY_OPERATION_REMAINDER( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 294;
        goto try_finally_handler_4;
    }
    if (var_line.object == NULL)
    {
        var_line.object = tmp_assign_source_23;
    }
    else
    {
        PyObject *old = var_line.object;
        var_line.object = tmp_assign_source_23;
        Py_DECREF( old );
    }
    tmp_len_arg_3 = var_line.object;

    tmp_binop_left_8 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_finally_handler_4;
    }
    tmp_binop_right_8 = const_str_space;
    tmp_assign_source_24 = BINARY_OPERATION_MUL( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_finally_handler_4;
    }
    if (var_tab.object == NULL)
    {
        var_tab.object = tmp_assign_source_24;
    }
    else
    {
        PyObject *old = var_tab.object;
        var_tab.object = tmp_assign_source_24;
        Py_DECREF( old );
    }
    // Tried code
    tmp_assign_source_25 = Py_False;
    if (tmp_while_loop_1__break_indicator.object == NULL)
    {
        tmp_while_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
    }
    else
    {
        PyObject *old = tmp_while_loop_1__break_indicator.object;
        tmp_while_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
        Py_DECREF( old );
    }
    loop_start_3:;
    tmp_cond_value_1 = var_words.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 296;
        goto try_finally_handler_6;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_assign_source_26 = Py_True;
    if (tmp_while_loop_1__break_indicator.object == NULL)
    {
        tmp_while_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
    }
    else
    {
        PyObject *old = tmp_while_loop_1__break_indicator.object;
        tmp_while_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
        Py_DECREF( old );
    }
    goto loop_end_3;
    branch_no_1:;
    tmp_source_name_4 = var_words.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pop );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto try_finally_handler_6;
    }
    tmp_call_arg_element_4 = const_int_0;
    frame_function->f_lineno = 297;
    tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto try_finally_handler_6;
    }
    if (var_word.object == NULL)
    {
        var_word.object = tmp_assign_source_27;
    }
    else
    {
        PyObject *old = var_word.object;
        var_word.object = tmp_assign_source_27;
        Py_DECREF( old );
    }
    tmp_len_arg_4 = var_line.object;

    if ( tmp_len_arg_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50418 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 298;
        goto try_finally_handler_6;
    }

    tmp_binop_left_9 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_binop_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto try_finally_handler_6;
    }
    tmp_len_arg_5 = var_word.object;

    tmp_binop_right_9 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_9 );

        frame_function->f_lineno = 298;
        goto try_finally_handler_6;
    }
    tmp_compare_left_1 = BINARY_OPERATION_ADD( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_left_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto try_finally_handler_6;
    }
    tmp_compare_right_1 = var_display_window_width.object;

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50468 ], 66, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 298;
        goto try_finally_handler_6;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 298;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_5 = var_lines.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 16411 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto try_finally_handler_6;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto try_finally_handler_6;
    }
    tmp_call_arg_element_5 = var_line.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50418 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto try_finally_handler_6;
    }

    frame_function->f_lineno = 299;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_28 = var_tab.object;

    if (var_line.object == NULL)
    {
        var_line.object = INCREASE_REFCOUNT( tmp_assign_source_28 );
    }
    else
    {
        PyObject *old = var_line.object;
        var_line.object = INCREASE_REFCOUNT( tmp_assign_source_28 );
        Py_DECREF( old );
    }
    branch_no_2:;
    tmp_assign_source_29 = var_line.object;

    if ( tmp_assign_source_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50418 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto try_finally_handler_6;
    }

    if (tmp_inplace_assign_1__inplace_start.object == NULL)
    {
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_start.object;
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_10 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_left_11 = const_str_space;
    tmp_binop_right_11 = var_word.object;

    tmp_binop_right_10 = BINARY_OPERATION_ADD( tmp_binop_left_11, tmp_binop_right_11 );
    if ( tmp_binop_right_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto try_finally_handler_7;
    }
    tmp_assign_source_30 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_right_10 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto try_finally_handler_7;
    }
    if (tmp_inplace_assign_1__inplace_end.object == NULL)
    {
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_30;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_end.object;
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_30;
        Py_DECREF( old );
    }
    tmp_compare_left_2 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_2 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if (tmp_isnot_1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_31 = tmp_inplace_assign_1__inplace_end.object;

    if (var_line.object == NULL)
    {
        var_line.object = INCREASE_REFCOUNT( tmp_assign_source_31 );
    }
    else
    {
        PyObject *old = var_line.object;
        var_line.object = INCREASE_REFCOUNT( tmp_assign_source_31 );
        Py_DECREF( old );
    }
    branch_no_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_end.object );
    tmp_inplace_assign_1__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_6;
    }

    goto finally_end_5;
    finally_end_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 296;
        goto try_finally_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_compare_left_3 = tmp_while_loop_1__break_indicator.object;

    tmp_compare_right_3 = Py_True;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_6 = var_lines.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 16411 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto try_finally_handler_6;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto try_finally_handler_6;
    }
    tmp_call_arg_element_6 = var_line.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50418 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto try_finally_handler_6;
    }

    frame_function->f_lineno = 303;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    tmp_result = tmp_while_loop_1__break_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_while_loop_1__break_indicator.object );
        tmp_while_loop_1__break_indicator.object = NULL;
    }

    assert( tmp_result != false );
    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_4;
    }

    goto finally_end_6;
    finally_end_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 290;
        goto try_finally_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto frame_exception_exit_1;
    }

    goto finally_end_7;
    finally_end_7:;
    tmp_source_name_7 = const_str_newline;
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = var_lines.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 16411 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 304;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 304;
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
    if ((var_display_window_width.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_display_window_width,
            var_display_window_width.object
        );

    }
    if ((var_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            var_name.object
        );

    }
    if ((var_title.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_title,
            var_title.object
        );

    }
    if ((var_lengths.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lengths,
            var_lengths.object
        );

    }
    if ((var_max_length.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_max_length,
            var_max_length.object
        );

    }
    if ((var_lines.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lines,
            var_lines.object
        );

    }
    if ((var_w.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_w,
            var_w.object
        );

    }
    if ((var_words.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_words,
            var_words.object
        );

    }
    if ((var_line.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_line,
            var_line.object
        );

    }
    if ((var_tab.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tab,
            var_tab.object
        );

    }
    if ((var_word.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_word,
            var_word.object
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
    if ((par_titles.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_titles,
            par_titles.object
        );

    }
    if ((par_colsep.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_colsep,
            par_colsep.object
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
static PyObject *fparse_function_12__format_titles_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_titles = NULL;
    PyObject *_python_par_colsep = NULL;
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
                PyErr_Format( PyExc_TypeError, "_format_titles() keywords must be strings" );
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
            if ( found == false && const_str_plain_titles == key )
            {
                assert( _python_par_titles == NULL );
                _python_par_titles = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_colsep == key )
            {
                assert( _python_par_colsep == NULL );
                _python_par_colsep = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_titles, key ) == 1 )
            {
                assert( _python_par_titles == NULL );
                _python_par_titles = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_colsep, key ) == 1 )
            {
                assert( _python_par_colsep == NULL );
                _python_par_colsep = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_format_titles() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 3 ))
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
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_titles != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_titles = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_titles == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_titles = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_colsep != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_colsep = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_colsep == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_colsep = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_titles == NULL || _python_par_colsep == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_titles, _python_par_colsep };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_12__format_titles_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, _python_par_self, _python_par_titles, _python_par_colsep );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_titles );
    Py_XDECREF( _python_par_colsep );

    return NULL;
}

static PyObject *dparse_function_12__format_titles_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_12__format_titles_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12__format_titles_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_get_pkgdocs_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_sys;
    PyObjectLocalVariable var_titles;
    PyObjectLocalVariable var_symbols;
    PyObjectLocalVariable var_package_name;
    PyObjectLocalVariable var_info_module;
    PyObjectLocalVariable var_global_symbols;
    PyObjectLocalVariable var_fullname;
    PyObjectLocalVariable var_note;
    PyObjectLocalVariable var_retstr;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b1c5c0971d321ed5dd7fc4cd5b90cbd7, module_numpy$_import_tools );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_sys.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_sys,
            var_sys.object
        );

    }
    if ((var_titles.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_titles,
            var_titles.object
        );

    }
    if ((var_symbols.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_symbols,
            var_symbols.object
        );

    }
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_package_name,
            var_package_name.object
        );

    }
    if ((var_info_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_info_module,
            var_info_module.object
        );

    }
    if ((var_global_symbols.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_global_symbols,
            var_global_symbols.object
        );

    }
    if ((var_fullname.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fullname,
            var_fullname.object
        );

    }
    if ((var_note.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_note,
            var_note.object
        );

    }
    if ((var_retstr.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_retstr,
            var_retstr.object
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
    frame_function->f_lineno = 309;
    tmp_assign_source_1 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    assert( var_sys.object == NULL );
    var_sys.object = tmp_assign_source_1;

    tmp_assattr_name_1 = PyDict_New();
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_info_modules, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__init_info_modules );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = Py_None;
    frame_function->f_lineno = 311;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_titles.object == NULL );
    var_titles.object = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( var_symbols.object == NULL );
    var_symbols.object = tmp_assign_source_3;

    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_info_modules );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_items );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 315;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_4;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_5 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 315;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value.object;

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_7 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_7 == NULL )
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


        frame_function->f_lineno = 315;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_8 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_8 == NULL )
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


        frame_function->f_lineno = 315;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_8;
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
    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1.object;

    if (var_package_name.object == NULL)
    {
        var_package_name.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_package_name.object;
        var_package_name.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2.object;

    if (var_info_module.object == NULL)
    {
        var_info_module.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_info_module.object;
        var_info_module.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
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
    tmp_getattr_target_1 = var_info_module.object;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49379 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto try_finally_handler_1;
    }

    tmp_getattr_attr_1 = const_str_plain_global_symbols;
    tmp_getattr_default_1 = PyList_New( 0 );
    tmp_assign_source_11 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    Py_DECREF( tmp_getattr_default_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto try_finally_handler_1;
    }
    if (var_global_symbols.object == NULL)
    {
        var_global_symbols.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = var_global_symbols.object;
        var_global_symbols.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_1;
    }

    tmp_binop_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_parent_name );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto try_finally_handler_1;
    }
    tmp_binop_right_2 = const_str_dot;
    tmp_binop_left_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto try_finally_handler_1;
    }
    tmp_binop_right_1 = var_package_name.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_1;
    }

    tmp_assign_source_12 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto try_finally_handler_1;
    }
    if (var_fullname.object == NULL)
    {
        var_fullname.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = var_fullname.object;
        var_fullname.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    tmp_assign_source_13 = const_str_empty;
    if (var_note.object == NULL)
    {
        var_note.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
    }
    else
    {
        PyObject *old = var_note.object;
        var_note.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
        Py_DECREF( old );
    }
    tmp_compare_left_1 = var_fullname.object;

    tmp_source_name_5 = var_sys.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50534 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 319;
        goto try_finally_handler_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_modules );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 319;
        goto try_finally_handler_1;
    }
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 319;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_14 = const_str_digest_83241ac27e8a408a82d33a7dcddec5e1;
    assert( var_note.object != NULL );
    {
        PyObject *old = var_note.object;
        var_note.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_source_name_6 = var_titles.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50258 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_fullname.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 0, tmp_tuple_element_1 );
    tmp_source_name_7 = par_self.object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__get_doc_title );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_3 = var_info_module.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49379 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 321;
    tmp_binop_left_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    tmp_binop_right_3 = var_note.object;

    tmp_tuple_element_1 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 321;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_1 = var_global_symbols.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 322;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_8 = var_symbols.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49994 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 323;
        goto try_finally_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_append );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 323;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_4 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_package_name.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 323;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 0, tmp_tuple_element_2 );
    tmp_source_name_9 = const_str_digest_fc763cb31e9938f37737394681228f83;
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_join );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 323;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_5 = var_global_symbols.object;

    frame_function->f_lineno = 323;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 323;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 323;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 323;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
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
    tmp_source_name_10 = par_self.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__format_titles );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = var_titles.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50258 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 325;
    tmp_binop_left_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_4 = const_str_digest_110eb41a48aeec64ca8577bf6f78517c;
    tmp_assign_source_15 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    assert( var_retstr.object == NULL );
    var_retstr.object = tmp_assign_source_15;

    tmp_cond_value_2 = var_symbols.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49994 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 329;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 329;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_16 = var_retstr.object;

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_16 );

    // Tried code
    tmp_binop_left_5 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_left_6 = const_str_digest_39eb6506385b611122915a56ad8d9f26;
    tmp_source_name_11 = par_self.object;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 332;
        goto try_finally_handler_3;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__format_titles );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 332;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_7 = var_symbols.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49994 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 332;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_8 = const_str_digest_9a73e5b6a42e4b29fb65c2c7fe12ff01;
    frame_function->f_lineno = 332;
    tmp_binop_right_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 332;
        goto try_finally_handler_3;
    }
    tmp_binop_right_5 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto try_finally_handler_3;
    }
    tmp_assign_source_17 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto try_finally_handler_3;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_17;

    tmp_compare_left_2 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_2 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if (tmp_isnot_1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_18 = tmp_inplace_assign_1__inplace_end.object;

    assert( var_retstr.object != NULL );
    {
        PyObject *old = var_retstr.object;
        var_retstr.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }

    branch_no_4:;
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
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_end.object );
    tmp_inplace_assign_1__inplace_end.object = NULL;

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
    branch_no_3:;
    tmp_return_value = var_retstr.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50583 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 334;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
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
    if ((var_sys.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sys,
            var_sys.object
        );

    }
    if ((var_titles.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_titles,
            var_titles.object
        );

    }
    if ((var_symbols.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_symbols,
            var_symbols.object
        );

    }
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package_name,
            var_package_name.object
        );

    }
    if ((var_info_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info_module,
            var_info_module.object
        );

    }
    if ((var_global_symbols.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_global_symbols,
            var_global_symbols.object
        );

    }
    if ((var_fullname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fullname,
            var_fullname.object
        );

    }
    if ((var_note.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_note,
            var_note.object
        );

    }
    if ((var_retstr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_retstr,
            var_retstr.object
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


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_13_get_pkgdocs_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_pkgdocs() keywords must be strings" );
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
                   "get_pkgdocs() got an unexpected keyword argument '%s'",
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


    return impl_function_13_get_pkgdocs_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_13_get_pkgdocs_of_class_1_PackageLoader_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_13_get_pkgdocs_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_get_pkgdocs_of_class_1_PackageLoader_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_PackageLoaderDebug_of_module_numpy$_import_tools(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__execcmd;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_5872bd087d95898a8e06c737a9ac43d0;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a1059d21c2e01dfb080fc990ba2bd189, module_numpy$_import_tools );
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
    tmp_assign_source_2 = MAKE_FUNCTION_function_1__execcmd_of_class_2_PackageLoaderDebug_of_module_numpy$_import_tools(  );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 337;
        goto frame_exception_exit_1;
    }
    assert( var__execcmd.object == NULL );
    var__execcmd.object = tmp_assign_source_2;


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
    if ((var__execcmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__execcmd,
            var__execcmd.object
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
    if ((var__execcmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__execcmd,
            var__execcmd.object
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


static PyObject *impl_function_1__execcmd_of_class_2_PackageLoaderDebug_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_cmdstr )
{
    // No context is used.

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_cmdstr; par_cmdstr.object = _python_par_cmdstr;
    PyObjectLocalVariable var_frame;
    PyObjectTempVariable tmp_exec_1__globals;
    PyObjectTempVariable tmp_exec_1__locals;
    PyObjectTempVariable tmp_exec_1__source;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_eval_globals_1;
    PyObject *tmp_eval_locals_1;
    PyObject *tmp_eval_source_1;
    PyObject *tmp_exec_compiled_1;
    PyObject *tmp_exec_result_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
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
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unary_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7e9a359e88a2e1a0a278dcd55257bef4, module_numpy$_import_tools );
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

        frame_function->f_lineno = 339;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parent_frame );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 339;
        goto frame_exception_exit_1;
    }
    assert( var_frame.object == NULL );
    var_frame.object = tmp_assign_source_1;

    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_Executing;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_unary_arg_1 = par_cmdstr.object;

    if ( tmp_unary_arg_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50156 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = UNARY_OPERATION( PyObject_Repr, tmp_unary_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_digest_2f43b42fd833d1e77420a8dae7419000;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 2, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_fb4ddbadafbecbaef28aef989e4b600e );
    frame_function->f_lineno = 340;
    tmp_unused = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = PyDict_GetItem( locals_dict, const_str_plain_sys );

    if ( tmp_source_name_3 == NULL )
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_sys );
        if (unlikely( tmp_source_name_3 == NULL ))
        {
            tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_stdout );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_flush );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 341;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code
    tmp_source_name_4 = var_frame.object;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_f_globals );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto try_finally_handler_1;
    }
    assert( tmp_exec_1__globals.object == NULL );
    tmp_exec_1__globals.object = tmp_assign_source_2;

    tmp_source_name_5 = var_frame.object;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_f_locals );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto try_finally_handler_1;
    }
    assert( tmp_exec_1__locals.object == NULL );
    tmp_exec_1__locals.object = tmp_assign_source_3;

    tmp_compare_left_1 = tmp_exec_1__locals.object;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if (tmp_is_1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_compare_left_2 = tmp_exec_1__globals.object;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_2)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_4 = INCREASE_REFCOUNT( locals_dict );
    if ((var_frame.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_4,
            const_str_plain_frame,
            var_frame.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_4,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_cmdstr.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_4,
            const_str_plain_cmdstr,
            par_cmdstr.object
        );

    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_4 = tmp_exec_1__globals.object;

    Py_INCREF( tmp_assign_source_4 );
    condexpr_end_1:;
    assert( tmp_exec_1__locals.object != NULL );
    {
        PyObject *old = tmp_exec_1__locals.object;
        tmp_exec_1__locals.object = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_3 = tmp_exec_1__globals.object;

    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_3)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_5 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    assert( tmp_exec_1__globals.object != NULL );
    {
        PyObject *old = tmp_exec_1__globals.object;
        tmp_exec_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_assign_source_6 = par_cmdstr.object;

    if ( tmp_assign_source_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50156 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 342;
        goto try_finally_handler_1;
    }

    assert( tmp_exec_1__source.object == NULL );
    tmp_exec_1__source.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_isinstance_inst_1 = tmp_exec_1__source.object;

    tmp_isinstance_cls_1 = (PyObject *)&PyFile_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto try_finally_handler_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_6 = tmp_exec_1__source.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_read );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 342;
    tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto try_finally_handler_1;
    }
    assert( tmp_exec_1__source.object != NULL );
    {
        PyObject *old = tmp_exec_1__source.object;
        tmp_exec_1__source.object = tmp_assign_source_7;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_eval_source_1 = tmp_exec_1__source.object;

    tmp_eval_globals_1 = tmp_exec_1__globals.object;

    tmp_eval_locals_1 = tmp_exec_1__locals.object;

    tmp_exec_compiled_1 = COMPILE_CODE( tmp_eval_source_1, const_str_angle_string, const_str_plain_exec, NULL, NULL );
    if ( tmp_exec_compiled_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto try_finally_handler_1;
    }
    tmp_exec_result_1 = EVAL_CODE( tmp_exec_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1 );
    Py_DECREF( tmp_exec_compiled_1 );
    if ( tmp_exec_result_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_exec_result_1 );
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
    tmp_result = tmp_exec_1__globals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_exec_1__globals.object );
        tmp_exec_1__globals.object = NULL;
    }

    assert( tmp_result != false );
    tmp_result = tmp_exec_1__locals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_exec_1__locals.object );
        tmp_exec_1__locals.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_exec_1__source.object );
    tmp_exec_1__source.object = NULL;

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
    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_ok;
    frame_function->f_lineno = 343;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = PyDict_GetItem( locals_dict, const_str_plain_sys );

    if ( tmp_source_name_8 == NULL )
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_sys );
        if (unlikely( tmp_source_name_8 == NULL ))
        {
            tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_stdout );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_flush );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 344;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
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


    tmp_frame_locals = INCREASE_REFCOUNT( locals_dict );
    if ((var_frame.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_frame,
            var_frame.object
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
    if ((par_cmdstr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmdstr,
            par_cmdstr.object
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
Py_DECREF( locals_dict );
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
Py_DECREF( locals_dict );
    return tmp_return_value;

}
static PyObject *fparse_function_1__execcmd_of_class_2_PackageLoaderDebug_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_cmdstr = NULL;
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
                PyErr_Format( PyExc_TypeError, "_execcmd() keywords must be strings" );
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
            if ( found == false && const_str_plain_cmdstr == key )
            {
                assert( _python_par_cmdstr == NULL );
                _python_par_cmdstr = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cmdstr, key ) == 1 )
            {
                assert( _python_par_cmdstr == NULL );
                _python_par_cmdstr = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_execcmd() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_cmdstr != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_cmdstr = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_cmdstr == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_cmdstr = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_cmdstr == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_cmdstr };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1__execcmd_of_class_2_PackageLoaderDebug_of_module_numpy$_import_tools( self, _python_par_self, _python_par_cmdstr );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_cmdstr );

    return NULL;
}

static PyObject *dparse_function_1__execcmd_of_class_2_PackageLoaderDebug_of_module_numpy$_import_tools( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1__execcmd_of_class_2_PackageLoaderDebug_of_module_numpy$_import_tools( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__execcmd_of_class_2_PackageLoaderDebug_of_module_numpy$_import_tools( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_error_of_class_1_PackageLoader_of_module_numpy$_import_tools(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_error_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        dparse_function_10_error_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        const_str_plain_error,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_85a1c917bc15c264a14a9f5b8c548848,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11__get_doc_title_of_class_1_PackageLoader_of_module_numpy$_import_tools(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11__get_doc_title_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        dparse_function_11__get_doc_title_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        const_str_plain__get_doc_title,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_655238a35c3748259407b3cb8b2123e7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        const_str_digest_c9694a680ff298043d3832abbab27eac
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12__format_titles_of_class_1_PackageLoader_of_module_numpy$_import_tools( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12__format_titles_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        dparse_function_12__format_titles_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        const_str_plain__format_titles,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e4cb7c95659a47f24b25fbb1acdc9a4a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_get_pkgdocs_of_class_1_PackageLoader_of_module_numpy$_import_tools(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_get_pkgdocs_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        dparse_function_13_get_pkgdocs_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        const_str_plain_get_pkgdocs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6aa79fbf33a8e058edf5448870064b4e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        const_str_digest_1b52334c5ad89d9ddbb0d846f6a17dd8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_PackageLoader_of_module_numpy$_import_tools( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_PackageLoader_of_module_numpy$_import_tools,
        dparse_function_1___init___of_class_1_PackageLoader_of_module_numpy$_import_tools,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cc25547bbde8d7bcd8bf6511ff134efa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        const_str_digest_22e403d580093af6c3edd664738f0f2d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__execcmd_of_class_2_PackageLoaderDebug_of_module_numpy$_import_tools(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__execcmd_of_class_2_PackageLoaderDebug_of_module_numpy$_import_tools,
        dparse_function_1__execcmd_of_class_2_PackageLoaderDebug_of_module_numpy$_import_tools,
        const_str_plain__execcmd,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e1cd7612fb28a5f06d8cb58b4ea10812,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        const_str_digest_e5552ac44dccda0f74eb46a6e56df171
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__get_info_files_of_class_1_PackageLoader_of_module_numpy$_import_tools( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__get_info_files_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        dparse_function_2__get_info_files_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        const_str_plain__get_info_files,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a26acd223b6d8d00a52f4927d8e834d3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        const_str_digest_36d27e96d6b80b8906c6a7558510bbf3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__init_info_modules_of_class_1_PackageLoader_of_module_numpy$_import_tools( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__init_info_modules_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        dparse_function_3__init_info_modules_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        const_str_plain__init_info_modules,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_df6ec2df30c1972c89975d392e4a847e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        const_str_digest_5d7b2ab1c8096def1d36601af97ffb00
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__get_sorted_names_of_class_1_PackageLoader_of_module_numpy$_import_tools(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__get_sorted_names_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        dparse_function_4__get_sorted_names_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        const_str_plain__get_sorted_names,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fd669c340e64da61ce164b76fe141b95,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        const_str_digest_308566e4177f0dc2224daa8017b3f3f1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5___call___of_class_1_PackageLoader_of_module_numpy$_import_tools(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5___call___of_class_1_PackageLoader_of_module_numpy$_import_tools,
        dparse_function_5___call___of_class_1_PackageLoader_of_module_numpy$_import_tools,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9fd361331f15148c84d03ea48e7e21b6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        const_str_digest_36b13bfd9551f3ab9c6a34f1cae96c75
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__execcmd_of_class_1_PackageLoader_of_module_numpy$_import_tools(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6__execcmd_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        dparse_function_6__execcmd_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        const_str_plain__execcmd,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f35389d9de8aea48f9537ff6f56e09bf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        const_str_digest_e5552ac44dccda0f74eb46a6e56df171
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__obj2repr_of_class_1_PackageLoader_of_module_numpy$_import_tools(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7__obj2repr_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        dparse_function_7__obj2repr_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        const_str_plain__obj2repr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_138705a5a8ec8199ceb74b752fbba530,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        const_str_digest_27914ec3b7152f7274df3c39b71a576c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_log_of_class_1_PackageLoader_of_module_numpy$_import_tools(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_log_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        dparse_function_8_log_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        const_str_plain_log,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a4b33b4568da6924ac9a75f1f7271c10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_warn_of_class_1_PackageLoader_of_module_numpy$_import_tools(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_warn_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        dparse_function_9_warn_of_class_1_PackageLoader_of_module_numpy$_import_tools,
        const_str_plain_warn,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_10114983f9e153fdbaa88285f161ee34,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$_import_tools,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$_import_tools =
{
    PyModuleDef_HEAD_INIT,
    "numpy._import_tools",   /* m_name */
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

MOD_INIT_DECL( numpy$_import_tools )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$_import_tools );
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

    // puts( "in initnumpy$_import_tools" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$_import_tools = Py_InitModule4(
        "numpy._import_tools",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$_import_tools = PyModule_Create( &mdef_numpy$_import_tools );
#endif

    moduledict_numpy$_import_tools = (PyDictObject *)((PyModuleObject *)module_numpy$_import_tools)->md_dict;

    assertObject( module_numpy$_import_tools );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5872bd087d95898a8e06c737a9ac43d0, module_numpy$_import_tools );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$_import_tools );

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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_bases_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_dict_2;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dget_key_2;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_8b7e7422bb361153223c2b041094f774;
    UPDATE_STRING_DICT0( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_aa35f0f694e8859627e3d63a346802ed, module_numpy$_import_tools );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$_import_tools)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_assign_source_8 = LIST_COPY( const_list_str_plain_PackageLoader_list );
    UPDATE_STRING_DICT1( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    // Tried code
    tmp_assign_source_9 = PyTuple_New( 1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_object );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_module->f_lineno = 8;
        goto try_finally_handler_1;
    }
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_9;

    tmp_assign_source_10 = impl_class_1_PackageLoader_of_module_numpy$_import_tools(  );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_10;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
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
    tmp_assign_source_11 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_11 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_11;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_PackageLoader;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 8;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_12;

    tmp_assign_source_13 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_PackageLoader, tmp_assign_source_13 );
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
    tmp_assign_source_14 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_PackageLoader );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PackageLoader );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48412 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 336;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_14, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases.object == NULL );
    tmp_class_creation_2__bases.object = tmp_assign_source_14;

    tmp_assign_source_15 = impl_class_2_PackageLoaderDebug_of_module_numpy$_import_tools(  );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 336;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class_dict.object == NULL );
    tmp_class_creation_2__class_dict.object = tmp_assign_source_15;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict.object;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 336;
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
    tmp_assign_source_16 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 336;
        goto try_finally_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_bases_2 = tmp_class_creation_2__bases.object;

    tmp_assign_source_16 = SELECT_METACLASS( tmp_class_bases_2, GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass.object == NULL );
    tmp_class_creation_2__metaclass.object = tmp_assign_source_16;

    tmp_called_2 = tmp_class_creation_2__metaclass.object;

    tmp_call_arg_element_4 = const_str_plain_PackageLoaderDebug;
    tmp_call_arg_element_5 = tmp_class_creation_2__bases.object;

    tmp_call_arg_element_6 = tmp_class_creation_2__class_dict.object;

    frame_module->f_lineno = 336;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 336;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class.object == NULL );
    tmp_class_creation_2__class.object = tmp_assign_source_17;

    tmp_assign_source_18 = tmp_class_creation_2__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_PackageLoaderDebug, tmp_assign_source_18 );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_environ );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_NUMPY_IMPORT_DEBUG;
    tmp_call_arg_element_8 = const_str_plain_0;
    frame_module->f_lineno = 347;
    tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_module->f_lineno = 347;
        goto frame_exception_exit_1;
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
    tmp_assign_source_19 = GET_STRING_DICT_VALUE( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_PackageLoaderDebug );

    if (unlikely( tmp_assign_source_19 == NULL ))
    {
        tmp_assign_source_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PackageLoaderDebug );
    }

    if ( tmp_assign_source_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48760 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 348;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$_import_tools, (Nuitka_StringObject *)const_str_plain_PackageLoader, tmp_assign_source_19 );
    branch_no_1:;

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

    return MOD_RETURN_VALUE( module_numpy$_import_tools );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
