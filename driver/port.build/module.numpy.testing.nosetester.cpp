// Generated code for Python source for module 'numpy.testing.nosetester'
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

// The _module_numpy$testing$nosetester is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$testing$nosetester;
PyDictObject *moduledict_numpy$testing$nosetester;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_str_dot;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_t;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_p2;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_run;
extern PyObject *const_str_plain_sep;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_argv;
extern PyObject *const_str_plain_exit;
static PyObject *const_str_plain_fast;
extern PyObject *const_str_plain_full;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_nose;
extern PyObject *const_str_plain_path;
static PyObject *const_str_plain_plug;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain_bench;
extern PyObject *const_str_plain_ename;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_label;
static PyObject *const_str_plain_npdir;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_scipy;
static PyObject *const_str_plain_spdir;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_always;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_ignore;
static PyObject *const_str_plain_master;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_remove;
extern PyObject *const_str_plain_result;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_builtin;
extern PyObject *const_str_plain_develop;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_doctest;
static PyObject *const_str_plain_gen_ext;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_package;
extern PyObject *const_str_plain_plugins;
extern PyObject *const_str_plain_release;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_reverse;
extern PyObject *const_str_plain_verbose;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_category;
static PyObject *const_str_plain_coverage;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_doctests;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_plain_excludes;
static PyObject *const_str_plain_f2py_ext;
extern PyObject *const_str_plain_f_locals;
extern PyObject *const_str_plain_filepath;
extern PyObject *const_str_plain_fullpath;
extern PyObject *const_str_plain_pkg_name;
static PyObject *const_str_plain_swig_ext;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_Unplugger;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain__getframe;
static PyObject *const_str_plain_fine_nose;
static PyObject *const_str_plain_pyrex_ext;
static PyObject *const_str_plain_pyversion;
extern PyObject *const_str_plain_NoseTester;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain__test_argv;
static PyObject *const_str_plain__warn_opts;
static PyObject *const_str_plain_addplugins;
extern PyObject *const_str_plain_basestring;
static PyObject *const_str_plain_extra_argv;
extern PyObject *const_str_plain_nosetester;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_plain_add_plugins;
static PyObject *const_str_plain_file_to_run;
extern PyObject *const_str_plain_import_nose;
extern PyObject *const_str_plain_noseclasses;
static PyObject *const_str_plain_warningtype;
extern PyObject *const_str_plain_KnownFailure;
extern PyObject *const_str_plain_NumpyDoctest;
static PyObject *const_str_plain_doctest_argv;
static PyObject *const_str_plain_f2py_f90_ext;
extern PyObject *const_str_plain_package_name;
extern PyObject *const_str_plain_package_path;
extern PyObject *const_str_plain_FutureWarning;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_resetwarnings;
extern PyObject *const_str_plain_RuntimeWarning;
extern PyObject *const_str_plain_catch_warnings;
extern PyObject *const_str_plain_filterwarnings;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_raise_warnings;
static PyObject *const_str_plain___versioninfo__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_NumpyTestProgram;
extern PyObject *const_str_plain_get_package_name;
extern PyObject *const_str_plain_run_module_suite;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain__show_system_info;
static PyObject *const_str_plain_prepare_test_args;
extern PyObject *const_tuple_str_plain_error_tuple;
static PyObject *const_tuple_str_plain_utils_tuple;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_tuple_str_plain_always_tuple;
extern PyObject *const_tuple_str_plain_ignore_tuple;
static PyObject *const_str_plain_minimum_nose_version;
static PyObject *const_tuple_str_plain_filepath_tuple;
static PyObject *const_str_plain__get_custom_doctester;
static PyObject *const_tuple_str_plain_Unplugger_tuple;
extern PyObject *const_tuple_str_plain_basestring_tuple;
static PyObject *const_tuple_str_plain_file_to_run_tuple;
extern PyObject *const_str_plain_ModuleDeprecationWarning;
static PyObject *const_tuple_int_0_int_pos_10_int_0_tuple;
static PyObject *const_tuple_none_str_plain_release_tuple;
static PyObject *const_tuple_str_plain_NumpyDoctest_tuple;
static PyObject *const_dict_9e93ae750d410ac953fc12d564eeb98e;
extern PyObject *const_dict_a815b95e8620d5d7012876c85aae519c;
extern PyObject *const_dict_cdc56397a7eac51c5bef5ec6274b6e27;
static PyObject *const_tuple_str_plain_NumpyTestProgram_tuple;
static PyObject *const_tuple_str_plain_fast_int_pos_1_none_tuple;
static PyObject *const_list_3c36bd63d0dc6f098640860458605e23_list;
static PyObject *const_str_digest_0b58c122fcca629903180e433b7d983f;
static PyObject *const_str_digest_0daaad4342c7df8d440dcd4008fc162e;
static PyObject *const_str_digest_0de9faf1e5c1c3f5e962fa194d45abc6;
static PyObject *const_str_digest_0eaf23f45e4536e9fb2bf93a84d8b2b0;
static PyObject *const_str_digest_13d731448227fdf5faf3b58029b59efc;
static PyObject *const_str_digest_15165f8cfbeb7a4e667e51b998e9e000;
static PyObject *const_str_digest_158a0017de584cc39316de7b7ac370d8;
static PyObject *const_str_digest_1948949d4f4a36797ae7d3bb98e211fd;
extern PyObject *const_str_digest_25d3f72ed569804b370be11292769a28;
static PyObject *const_str_digest_2756a9acaf47d0600fbfef18d732474c;
static PyObject *const_str_digest_3162c7e2144a437eab588d7d7ac2d891;
static PyObject *const_str_digest_3852f29111da472f358dab01f1fce3f0;
static PyObject *const_str_digest_3872216f9438043bca9b82f9a8c71513;
static PyObject *const_str_digest_3d15c6c948bee840fb8753e6e2349534;
extern PyObject *const_str_digest_406381251d2d4637ebfac7f24cc49c6f;
static PyObject *const_str_digest_45dc0e9e6c3fd2291c2781dbe7261a16;
extern PyObject *const_str_digest_464a805946c974981b824481c79cc593;
static PyObject *const_str_digest_4bbe32f80d669e8493019af175d96be1;
extern PyObject *const_str_digest_5af3952a21febac509b898339a728c82;
static PyObject *const_str_digest_62014e0187bf03fc31f7b5732962fcf7;
static PyObject *const_str_digest_68df292065de2a7fc2ec3e7ee1962d00;
static PyObject *const_str_digest_7339242ca3267aef50b5d7e210d26873;
static PyObject *const_str_digest_77caed2ad08ca512616c963995870660;
static PyObject *const_str_digest_8651892d2479c6813ade12f04d68d79e;
static PyObject *const_str_digest_96748849c7c40b273804a1b2d86af7c0;
extern PyObject *const_str_digest_9718270fe5d2c916ce2b6f64e75a37af;
static PyObject *const_str_digest_a9e48869afd3f3be4d040cab32259a3f;
static PyObject *const_str_digest_ab4ccf292aec9aff733eeacffd0be5f0;
static PyObject *const_str_digest_aeff3e2228673d0df38df7298066d8bf;
static PyObject *const_str_digest_af064253e0000f28cd78163942be10fc;
extern PyObject *const_str_digest_c1f47a7aec6425d38d77d4e87ccbd06c;
static PyObject *const_str_digest_c627c022b07e7c0b7255c733bdb7f264;
static PyObject *const_str_digest_cacfcd6301fbb2e35776c01aabf8220a;
static PyObject *const_str_digest_cad3b0402549dcdcb67807a162c55834;
static PyObject *const_str_digest_d05888d52ccb86aa9c73cfc712d82e1c;
extern PyObject *const_str_digest_d3ec01d5ce6ebb692b8e0f7f90e7fc3d;
static PyObject *const_str_digest_d93aec8fb37fa55b775e311af99f882c;
static PyObject *const_str_digest_dffd31aa42c3c51aa1320a38a0aab40a;
static PyObject *const_str_digest_ea9fcf326c6be021e66270bc3d976a35;
static PyObject *const_str_digest_eb127da9003fecc929f07a0f0c299e8a;
static PyObject *const_str_digest_eda38f3e67a8c18c1ec906dfdb27350d;
static PyObject *const_str_digest_eeca16f0ffd385c5bee4d375cc5e5348;
static PyObject *const_str_digest_fcf159dfd0eb6cbc000ab74152a7138f;
static PyObject *const_str_digest_fd76c88427117592b82fbf3a7f5efaed;
static PyObject *const_tuple_04a1954539bdb7b5428183ea1bff8093_tuple;
static PyObject *const_tuple_0587202bdc5d42c94a9d5e047db6d4b3_tuple;
static PyObject *const_tuple_09c68725c484a10aaae41fa434a232ea_tuple;
static PyObject *const_tuple_3c46e818cd3a81f46ff7a1bc4f68521b_tuple;
static PyObject *const_tuple_3ca2e26190c7982e98ca3e6a0da77242_tuple;
static PyObject *const_tuple_51aae2d2d18c0ea0b6dc54a377a29232_tuple;
static PyObject *const_tuple_632773ce4efce1dc21bccb3021033b4e_tuple;
static PyObject *const_tuple_6c3db0353d6ebff12dd27582d1a7fb93_tuple;
static PyObject *const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple;
static PyObject *const_tuple_70c6406625cdc2adb259cdb4771e8d38_tuple;
static PyObject *const_tuple_a42b64bc8bf8e01911e97062de336db1_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_d866406deda79d1eb8a5a082f30b0d89_tuple;
static PyObject *const_tuple_str_plain_file_to_run_str_plain_f_tuple;
extern PyObject *const_tuple_str_plain_ModuleDeprecationWarning_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_NumpyDoctest_tuple;
static PyObject *const_list_str_digest_3872216f9438043bca9b82f9a8c71513_list;
static PyObject *const_list_str_digest_eda38f3e67a8c18c1ec906dfdb27350d_list;
static PyObject *const_tuple_str_plain_fast_int_pos_1_none_false_false_tuple;
static PyObject *const_tuple_str_plain_KnownFailure_str_plain_Unplugger_tuple;
static PyObject *const_tuple_str_plain_fast_int_pos_1_none_false_false_none_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_package_str_plain_raise_warnings_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_fast = UNSTREAM_STRING( &constant_bin[ 183215 ], 4, 1 );
    const_str_plain_plug = UNSTREAM_STRING( &constant_bin[ 5261 ], 4, 1 );
    const_str_plain_npdir = UNSTREAM_STRING( &constant_bin[ 2012721 ], 5, 1 );
    const_str_plain_spdir = UNSTREAM_STRING( &constant_bin[ 2012726 ], 5, 1 );
    const_str_plain_master = UNSTREAM_STRING( &constant_bin[ 985045 ], 6, 1 );
    const_str_plain_builtin = UNSTREAM_STRING( &constant_bin[ 4731 ], 7, 1 );
    const_str_plain_gen_ext = UNSTREAM_STRING( &constant_bin[ 2012731 ], 7, 1 );
    const_str_plain_coverage = UNSTREAM_STRING( &constant_bin[ 213030 ], 8, 1 );
    const_str_plain_f2py_ext = UNSTREAM_STRING( &constant_bin[ 2012738 ], 8, 1 );
    const_str_plain_swig_ext = UNSTREAM_STRING( &constant_bin[ 2012746 ], 8, 1 );
    const_str_plain_fine_nose = UNSTREAM_STRING( &constant_bin[ 212711 ], 9, 1 );
    const_str_plain_pyrex_ext = UNSTREAM_STRING( &constant_bin[ 2012754 ], 9, 1 );
    const_str_plain_pyversion = UNSTREAM_STRING( &constant_bin[ 2012763 ], 9, 1 );
    const_str_plain__test_argv = UNSTREAM_STRING( &constant_bin[ 2012772 ], 10, 1 );
    const_str_plain__warn_opts = UNSTREAM_STRING( &constant_bin[ 2012782 ], 10, 1 );
    const_str_plain_addplugins = UNSTREAM_STRING( &constant_bin[ 2012792 ], 10, 1 );
    const_str_plain_extra_argv = UNSTREAM_STRING( &constant_bin[ 212974 ], 10, 1 );
    const_str_plain_add_plugins = UNSTREAM_STRING( &constant_bin[ 2012802 ], 11, 1 );
    const_str_plain_file_to_run = UNSTREAM_STRING( &constant_bin[ 212766 ], 11, 1 );
    const_str_plain_warningtype = UNSTREAM_STRING( &constant_bin[ 2012813 ], 11, 1 );
    const_str_plain_doctest_argv = UNSTREAM_STRING( &constant_bin[ 213138 ], 12, 1 );
    const_str_plain_f2py_f90_ext = UNSTREAM_STRING( &constant_bin[ 2012824 ], 12, 1 );
    const_str_plain_resetwarnings = UNSTREAM_STRING( &constant_bin[ 2012836 ], 13, 1 );
    const_str_plain_raise_warnings = UNSTREAM_STRING( &constant_bin[ 212863 ], 14, 1 );
    const_str_plain___versioninfo__ = UNSTREAM_STRING( &constant_bin[ 2012849 ], 15, 1 );
    const_str_plain__show_system_info = UNSTREAM_STRING( &constant_bin[ 2012864 ], 17, 1 );
    const_str_plain_prepare_test_args = UNSTREAM_STRING( &constant_bin[ 2012881 ], 17, 1 );
    const_tuple_str_plain_utils_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_utils_tuple, 0, const_str_plain_utils ); Py_INCREF( const_str_plain_utils );
    const_str_plain_minimum_nose_version = UNSTREAM_STRING( &constant_bin[ 212645 ], 20, 1 );
    const_tuple_str_plain_filepath_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_filepath_tuple, 0, const_str_plain_filepath ); Py_INCREF( const_str_plain_filepath );
    const_str_plain__get_custom_doctester = UNSTREAM_STRING( &constant_bin[ 2012898 ], 21, 1 );
    const_tuple_str_plain_Unplugger_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Unplugger_tuple, 0, const_str_plain_Unplugger ); Py_INCREF( const_str_plain_Unplugger );
    const_tuple_str_plain_file_to_run_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_file_to_run_tuple, 0, const_str_plain_file_to_run ); Py_INCREF( const_str_plain_file_to_run );
    const_tuple_int_0_int_pos_10_int_0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_10_int_0_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_10_int_0_tuple, 1, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_10_int_0_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_none_str_plain_release_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_release_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_release_tuple, 1, const_str_plain_release ); Py_INCREF( const_str_plain_release );
    const_tuple_str_plain_NumpyDoctest_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NumpyDoctest_tuple, 0, const_str_plain_NumpyDoctest ); Py_INCREF( const_str_plain_NumpyDoctest );
    const_dict_9e93ae750d410ac953fc12d564eeb98e = _PyDict_NewPresized( 1 );
    const_str_digest_3162c7e2144a437eab588d7d7ac2d891 = UNSTREAM_STRING( &constant_bin[ 2012919 ], 23, 0 );
    PyDict_SetItem( const_dict_9e93ae750d410ac953fc12d564eeb98e, const_str_plain_message, const_str_digest_3162c7e2144a437eab588d7d7ac2d891 );
    const_tuple_str_plain_NumpyTestProgram_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NumpyTestProgram_tuple, 0, const_str_plain_NumpyTestProgram ); Py_INCREF( const_str_plain_NumpyTestProgram );
    const_tuple_str_plain_fast_int_pos_1_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_tuple, 0, const_str_plain_fast ); Py_INCREF( const_str_plain_fast );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_list_3c36bd63d0dc6f098640860458605e23_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_3c36bd63d0dc6f098640860458605e23_list, 0, const_str_plain_f2py_ext ); Py_INCREF( const_str_plain_f2py_ext );
    PyList_SET_ITEM( const_list_3c36bd63d0dc6f098640860458605e23_list, 1, const_str_plain_f2py_f90_ext ); Py_INCREF( const_str_plain_f2py_f90_ext );
    PyList_SET_ITEM( const_list_3c36bd63d0dc6f098640860458605e23_list, 2, const_str_plain_gen_ext ); Py_INCREF( const_str_plain_gen_ext );
    PyList_SET_ITEM( const_list_3c36bd63d0dc6f098640860458605e23_list, 3, const_str_plain_pyrex_ext ); Py_INCREF( const_str_plain_pyrex_ext );
    PyList_SET_ITEM( const_list_3c36bd63d0dc6f098640860458605e23_list, 4, const_str_plain_swig_ext ); Py_INCREF( const_str_plain_swig_ext );
    const_str_digest_0b58c122fcca629903180e433b7d983f = UNSTREAM_STRING( &constant_bin[ 2012942 ], 26, 0 );
    const_str_digest_0daaad4342c7df8d440dcd4008fc162e = UNSTREAM_STRING( &constant_bin[ 2012968 ], 1768, 0 );
    const_str_digest_0de9faf1e5c1c3f5e962fa194d45abc6 = UNSTREAM_STRING( &constant_bin[ 2014736 ], 38, 0 );
    const_str_digest_0eaf23f45e4536e9fb2bf93a84d8b2b0 = UNSTREAM_STRING( &constant_bin[ 2014774 ], 187, 0 );
    const_str_digest_13d731448227fdf5faf3b58029b59efc = UNSTREAM_STRING( &constant_bin[ 2014961 ], 13, 0 );
    const_str_digest_15165f8cfbeb7a4e667e51b998e9e000 = UNSTREAM_STRING( &constant_bin[ 2014974 ], 514, 0 );
    const_str_digest_158a0017de584cc39316de7b7ac370d8 = UNSTREAM_STRING( &constant_bin[ 2015488 ], 87, 0 );
    const_str_digest_1948949d4f4a36797ae7d3bb98e211fd = UNSTREAM_STRING( &constant_bin[ 2015575 ], 35, 0 );
    const_str_digest_2756a9acaf47d0600fbfef18d732474c = UNSTREAM_STRING( &constant_bin[ 2015610 ], 13, 0 );
    const_str_digest_3852f29111da472f358dab01f1fce3f0 = UNSTREAM_STRING( &constant_bin[ 382319 ], 2, 0 );
    const_str_digest_3872216f9438043bca9b82f9a8c71513 = UNSTREAM_STRING( &constant_bin[ 2015623 ], 5, 0 );
    const_str_digest_3d15c6c948bee840fb8753e6e2349534 = UNSTREAM_STRING( &constant_bin[ 2015628 ], 16, 0 );
    const_str_digest_45dc0e9e6c3fd2291c2781dbe7261a16 = UNSTREAM_STRING( &constant_bin[ 2015644 ], 25, 0 );
    const_str_digest_4bbe32f80d669e8493019af175d96be1 = UNSTREAM_STRING( &constant_bin[ 2015669 ], 7, 0 );
    const_str_digest_62014e0187bf03fc31f7b5732962fcf7 = UNSTREAM_STRING( &constant_bin[ 2015676 ], 11, 0 );
    const_str_digest_68df292065de2a7fc2ec3e7ee1962d00 = UNSTREAM_STRING( &constant_bin[ 2015687 ], 24, 0 );
    const_str_digest_7339242ca3267aef50b5d7e210d26873 = UNSTREAM_STRING( &constant_bin[ 2015711 ], 17, 0 );
    const_str_digest_77caed2ad08ca512616c963995870660 = UNSTREAM_STRING( &constant_bin[ 2015728 ], 20, 0 );
    const_str_digest_8651892d2479c6813ade12f04d68d79e = UNSTREAM_STRING( &constant_bin[ 2015748 ], 24, 0 );
    const_str_digest_96748849c7c40b273804a1b2d86af7c0 = UNSTREAM_STRING( &constant_bin[ 2015772 ], 9, 0 );
    const_str_digest_a9e48869afd3f3be4d040cab32259a3f = UNSTREAM_STRING( &constant_bin[ 2015781 ], 21, 0 );
    const_str_digest_ab4ccf292aec9aff733eeacffd0be5f0 = UNSTREAM_STRING( &constant_bin[ 2015802 ], 16, 0 );
    const_str_digest_aeff3e2228673d0df38df7298066d8bf = UNSTREAM_STRING( &constant_bin[ 2015818 ], 24, 0 );
    const_str_digest_af064253e0000f28cd78163942be10fc = UNSTREAM_STRING( &constant_bin[ 2015842 ], 2279, 0 );
    const_str_digest_c627c022b07e7c0b7255c733bdb7f264 = UNSTREAM_STRING( &constant_bin[ 2018121 ], 18, 0 );
    const_str_digest_cacfcd6301fbb2e35776c01aabf8220a = UNSTREAM_STRING( &constant_bin[ 2018139 ], 101, 0 );
    const_str_digest_cad3b0402549dcdcb67807a162c55834 = UNSTREAM_STRING( &constant_bin[ 2018240 ], 60, 0 );
    const_str_digest_d05888d52ccb86aa9c73cfc712d82e1c = UNSTREAM_STRING( &constant_bin[ 2018300 ], 25, 0 );
    const_str_digest_d93aec8fb37fa55b775e311af99f882c = UNSTREAM_STRING( &constant_bin[ 2018325 ], 15, 0 );
    const_str_digest_dffd31aa42c3c51aa1320a38a0aab40a = UNSTREAM_STRING( &constant_bin[ 2018340 ], 231, 0 );
    const_str_digest_ea9fcf326c6be021e66270bc3d976a35 = UNSTREAM_STRING( &constant_bin[ 2018571 ], 34, 0 );
    const_str_digest_eb127da9003fecc929f07a0f0c299e8a = UNSTREAM_STRING( &constant_bin[ 2018605 ], 1517, 0 );
    const_str_digest_eda38f3e67a8c18c1ec906dfdb27350d = UNSTREAM_STRING( &constant_bin[ 2020122 ], 14, 0 );
    const_str_digest_eeca16f0ffd385c5bee4d375cc5e5348 = UNSTREAM_STRING( &constant_bin[ 358702 ], 7, 0 );
    const_str_digest_fcf159dfd0eb6cbc000ab74152a7138f = UNSTREAM_STRING( &constant_bin[ 2013431 ], 8, 0 );
    const_str_digest_fd76c88427117592b82fbf3a7f5efaed = UNSTREAM_STRING( &constant_bin[ 2020136 ], 294, 0 );
    const_tuple_04a1954539bdb7b5428183ea1bff8093_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_04a1954539bdb7b5428183ea1bff8093_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_04a1954539bdb7b5428183ea1bff8093_tuple, 1, const_str_plain_label ); Py_INCREF( const_str_plain_label );
    PyTuple_SET_ITEM( const_tuple_04a1954539bdb7b5428183ea1bff8093_tuple, 2, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_04a1954539bdb7b5428183ea1bff8093_tuple, 3, const_str_plain_extra_argv ); Py_INCREF( const_str_plain_extra_argv );
    PyTuple_SET_ITEM( const_tuple_04a1954539bdb7b5428183ea1bff8093_tuple, 4, const_str_plain_doctests ); Py_INCREF( const_str_plain_doctests );
    PyTuple_SET_ITEM( const_tuple_04a1954539bdb7b5428183ea1bff8093_tuple, 5, const_str_plain_coverage ); Py_INCREF( const_str_plain_coverage );
    const_tuple_0587202bdc5d42c94a9d5e047db6d4b3_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0587202bdc5d42c94a9d5e047db6d4b3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0587202bdc5d42c94a9d5e047db6d4b3_tuple, 1, const_str_plain_label ); Py_INCREF( const_str_plain_label );
    PyTuple_SET_ITEM( const_tuple_0587202bdc5d42c94a9d5e047db6d4b3_tuple, 2, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_0587202bdc5d42c94a9d5e047db6d4b3_tuple, 3, const_str_plain_extra_argv ); Py_INCREF( const_str_plain_extra_argv );
    const_tuple_09c68725c484a10aaae41fa434a232ea_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 1, const_str_plain_label ); Py_INCREF( const_str_plain_label );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 2, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 3, const_str_plain_extra_argv ); Py_INCREF( const_str_plain_extra_argv );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 4, const_str_plain_doctests ); Py_INCREF( const_str_plain_doctests );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 5, const_str_plain_coverage ); Py_INCREF( const_str_plain_coverage );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 6, const_str_plain_raise_warnings ); Py_INCREF( const_str_plain_raise_warnings );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 7, const_str_plain_utils ); Py_INCREF( const_str_plain_utils );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 8, const_str_plain_doctest ); Py_INCREF( const_str_plain_doctest );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 9, const_str_plain__warn_opts ); Py_INCREF( const_str_plain__warn_opts );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 10, const_str_plain_warningtype ); Py_INCREF( const_str_plain_warningtype );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 11, const_str_plain_NumpyTestProgram ); Py_INCREF( const_str_plain_NumpyTestProgram );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 12, const_str_plain_argv ); Py_INCREF( const_str_plain_argv );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 13, const_str_plain_plugins ); Py_INCREF( const_str_plain_plugins );
    PyTuple_SET_ITEM( const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 14, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_tuple_3c46e818cd3a81f46ff7a1bc4f68521b_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_3c46e818cd3a81f46ff7a1bc4f68521b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3c46e818cd3a81f46ff7a1bc4f68521b_tuple, 1, const_str_plain_label ); Py_INCREF( const_str_plain_label );
    PyTuple_SET_ITEM( const_tuple_3c46e818cd3a81f46ff7a1bc4f68521b_tuple, 2, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_3c46e818cd3a81f46ff7a1bc4f68521b_tuple, 3, const_str_plain_extra_argv ); Py_INCREF( const_str_plain_extra_argv );
    PyTuple_SET_ITEM( const_tuple_3c46e818cd3a81f46ff7a1bc4f68521b_tuple, 4, const_str_plain_doctests ); Py_INCREF( const_str_plain_doctests );
    PyTuple_SET_ITEM( const_tuple_3c46e818cd3a81f46ff7a1bc4f68521b_tuple, 5, const_str_plain_coverage ); Py_INCREF( const_str_plain_coverage );
    PyTuple_SET_ITEM( const_tuple_3c46e818cd3a81f46ff7a1bc4f68521b_tuple, 6, const_str_plain_raise_warnings ); Py_INCREF( const_str_plain_raise_warnings );
    const_tuple_3ca2e26190c7982e98ca3e6a0da77242_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_3ca2e26190c7982e98ca3e6a0da77242_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3ca2e26190c7982e98ca3e6a0da77242_tuple, 1, const_str_plain_label ); Py_INCREF( const_str_plain_label );
    PyTuple_SET_ITEM( const_tuple_3ca2e26190c7982e98ca3e6a0da77242_tuple, 2, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_3ca2e26190c7982e98ca3e6a0da77242_tuple, 3, const_str_plain_extra_argv ); Py_INCREF( const_str_plain_extra_argv );
    PyTuple_SET_ITEM( const_tuple_3ca2e26190c7982e98ca3e6a0da77242_tuple, 4, const_str_plain_argv ); Py_INCREF( const_str_plain_argv );
    PyTuple_SET_ITEM( const_tuple_3ca2e26190c7982e98ca3e6a0da77242_tuple, 5, const_str_plain_nose ); Py_INCREF( const_str_plain_nose );
    PyTuple_SET_ITEM( const_tuple_3ca2e26190c7982e98ca3e6a0da77242_tuple, 6, const_str_plain_Unplugger ); Py_INCREF( const_str_plain_Unplugger );
    PyTuple_SET_ITEM( const_tuple_3ca2e26190c7982e98ca3e6a0da77242_tuple, 7, const_str_plain_add_plugins ); Py_INCREF( const_str_plain_add_plugins );
    const_tuple_51aae2d2d18c0ea0b6dc54a377a29232_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_51aae2d2d18c0ea0b6dc54a377a29232_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_51aae2d2d18c0ea0b6dc54a377a29232_tuple, 1, const_str_plain_package ); Py_INCREF( const_str_plain_package );
    PyTuple_SET_ITEM( const_tuple_51aae2d2d18c0ea0b6dc54a377a29232_tuple, 2, const_str_plain_raise_warnings ); Py_INCREF( const_str_plain_raise_warnings );
    PyTuple_SET_ITEM( const_tuple_51aae2d2d18c0ea0b6dc54a377a29232_tuple, 3, const_str_plain_package_name ); Py_INCREF( const_str_plain_package_name );
    PyTuple_SET_ITEM( const_tuple_51aae2d2d18c0ea0b6dc54a377a29232_tuple, 4, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_51aae2d2d18c0ea0b6dc54a377a29232_tuple, 5, const_str_plain_package_path ); Py_INCREF( const_str_plain_package_path );
    const_tuple_632773ce4efce1dc21bccb3021033b4e_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_632773ce4efce1dc21bccb3021033b4e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_632773ce4efce1dc21bccb3021033b4e_tuple, 1, const_str_plain_nose ); Py_INCREF( const_str_plain_nose );
    PyTuple_SET_ITEM( const_tuple_632773ce4efce1dc21bccb3021033b4e_tuple, 2, const_str_plain_numpy ); Py_INCREF( const_str_plain_numpy );
    PyTuple_SET_ITEM( const_tuple_632773ce4efce1dc21bccb3021033b4e_tuple, 3, const_str_plain_npdir ); Py_INCREF( const_str_plain_npdir );
    PyTuple_SET_ITEM( const_tuple_632773ce4efce1dc21bccb3021033b4e_tuple, 4, const_str_plain_scipy ); Py_INCREF( const_str_plain_scipy );
    PyTuple_SET_ITEM( const_tuple_632773ce4efce1dc21bccb3021033b4e_tuple, 5, const_str_plain_spdir ); Py_INCREF( const_str_plain_spdir );
    PyTuple_SET_ITEM( const_tuple_632773ce4efce1dc21bccb3021033b4e_tuple, 6, const_str_plain_pyversion ); Py_INCREF( const_str_plain_pyversion );
    const_tuple_6c3db0353d6ebff12dd27582d1a7fb93_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_6c3db0353d6ebff12dd27582d1a7fb93_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6c3db0353d6ebff12dd27582d1a7fb93_tuple, 1, const_str_plain_label ); Py_INCREF( const_str_plain_label );
    PyTuple_SET_ITEM( const_tuple_6c3db0353d6ebff12dd27582d1a7fb93_tuple, 2, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_6c3db0353d6ebff12dd27582d1a7fb93_tuple, 3, const_str_plain_extra_argv ); Py_INCREF( const_str_plain_extra_argv );
    PyTuple_SET_ITEM( const_tuple_6c3db0353d6ebff12dd27582d1a7fb93_tuple, 4, const_str_plain_argv ); Py_INCREF( const_str_plain_argv );
    const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 1, const_str_plain_label ); Py_INCREF( const_str_plain_label );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 2, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 3, const_str_plain_extra_argv ); Py_INCREF( const_str_plain_extra_argv );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 4, const_str_plain_doctests ); Py_INCREF( const_str_plain_doctests );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 5, const_str_plain_coverage ); Py_INCREF( const_str_plain_coverage );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 6, const_str_plain_argv ); Py_INCREF( const_str_plain_argv );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 7, const_str_plain_ename ); Py_INCREF( const_str_plain_ename );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 8, const_str_plain_nose ); Py_INCREF( const_str_plain_nose );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 9, const_str_plain_KnownFailure ); Py_INCREF( const_str_plain_KnownFailure );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 10, const_str_plain_Unplugger ); Py_INCREF( const_str_plain_Unplugger );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 11, const_str_plain_plugins ); Py_INCREF( const_str_plain_plugins );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 12, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 13, const_str_plain_doctest_argv ); Py_INCREF( const_str_plain_doctest_argv );
    PyTuple_SET_ITEM( const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 14, const_str_plain_plug ); Py_INCREF( const_str_plain_plug );
    const_tuple_70c6406625cdc2adb259cdb4771e8d38_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_70c6406625cdc2adb259cdb4771e8d38_tuple, 0, const_str_digest_5af3952a21febac509b898339a728c82 ); Py_INCREF( const_str_digest_5af3952a21febac509b898339a728c82 );
    PyTuple_SET_ITEM( const_tuple_70c6406625cdc2adb259cdb4771e8d38_tuple, 1, const_str_digest_d3ec01d5ce6ebb692b8e0f7f90e7fc3d ); Py_INCREF( const_str_digest_d3ec01d5ce6ebb692b8e0f7f90e7fc3d );
    const_tuple_a42b64bc8bf8e01911e97062de336db1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a42b64bc8bf8e01911e97062de336db1_tuple, 0, const_str_plain_filepath ); Py_INCREF( const_str_plain_filepath );
    PyTuple_SET_ITEM( const_tuple_a42b64bc8bf8e01911e97062de336db1_tuple, 1, const_str_plain_fullpath ); Py_INCREF( const_str_plain_fullpath );
    PyTuple_SET_ITEM( const_tuple_a42b64bc8bf8e01911e97062de336db1_tuple, 2, const_str_plain_pkg_name ); Py_INCREF( const_str_plain_pkg_name );
    PyTuple_SET_ITEM( const_tuple_a42b64bc8bf8e01911e97062de336db1_tuple, 3, const_str_plain_p2 ); Py_INCREF( const_str_plain_p2 );
    const_tuple_d866406deda79d1eb8a5a082f30b0d89_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d866406deda79d1eb8a5a082f30b0d89_tuple, 0, const_str_plain_fine_nose ); Py_INCREF( const_str_plain_fine_nose );
    PyTuple_SET_ITEM( const_tuple_d866406deda79d1eb8a5a082f30b0d89_tuple, 1, const_str_plain_minimum_nose_version ); Py_INCREF( const_str_plain_minimum_nose_version );
    PyTuple_SET_ITEM( const_tuple_d866406deda79d1eb8a5a082f30b0d89_tuple, 2, const_str_plain_nose ); Py_INCREF( const_str_plain_nose );
    PyTuple_SET_ITEM( const_tuple_d866406deda79d1eb8a5a082f30b0d89_tuple, 3, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_tuple_str_plain_file_to_run_str_plain_f_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_file_to_run_str_plain_f_tuple, 0, const_str_plain_file_to_run ); Py_INCREF( const_str_plain_file_to_run );
    PyTuple_SET_ITEM( const_tuple_str_plain_file_to_run_str_plain_f_tuple, 1, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_tuple_str_plain_self_str_plain_NumpyDoctest_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_NumpyDoctest_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_NumpyDoctest_tuple, 1, const_str_plain_NumpyDoctest ); Py_INCREF( const_str_plain_NumpyDoctest );
    const_list_str_digest_3872216f9438043bca9b82f9a8c71513_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_3872216f9438043bca9b82f9a8c71513_list, 0, const_str_digest_3872216f9438043bca9b82f9a8c71513 ); Py_INCREF( const_str_digest_3872216f9438043bca9b82f9a8c71513 );
    const_list_str_digest_eda38f3e67a8c18c1ec906dfdb27350d_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_eda38f3e67a8c18c1ec906dfdb27350d_list, 0, const_str_digest_eda38f3e67a8c18c1ec906dfdb27350d ); Py_INCREF( const_str_digest_eda38f3e67a8c18c1ec906dfdb27350d );
    const_tuple_str_plain_fast_int_pos_1_none_false_false_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_false_false_tuple, 0, const_str_plain_fast ); Py_INCREF( const_str_plain_fast );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_false_false_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_false_false_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_false_false_tuple, 3, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_false_false_tuple, 4, Py_False ); Py_INCREF( Py_False );
    const_tuple_str_plain_KnownFailure_str_plain_Unplugger_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_KnownFailure_str_plain_Unplugger_tuple, 0, const_str_plain_KnownFailure ); Py_INCREF( const_str_plain_KnownFailure );
    PyTuple_SET_ITEM( const_tuple_str_plain_KnownFailure_str_plain_Unplugger_tuple, 1, const_str_plain_Unplugger ); Py_INCREF( const_str_plain_Unplugger );
    const_tuple_str_plain_fast_int_pos_1_none_false_false_none_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_false_false_none_tuple, 0, const_str_plain_fast ); Py_INCREF( const_str_plain_fast );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_false_false_none_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_false_false_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_false_false_none_tuple, 3, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_false_false_none_tuple, 4, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_str_plain_fast_int_pos_1_none_false_false_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_self_str_plain_package_str_plain_raise_warnings_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_package_str_plain_raise_warnings_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_package_str_plain_raise_warnings_tuple, 1, const_str_plain_package ); Py_INCREF( const_str_plain_package );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_package_str_plain_raise_warnings_tuple, 2, const_str_plain_raise_warnings ); Py_INCREF( const_str_plain_raise_warnings );
}

// The module code objects.
static PyCodeObject *codeobj_364ccdfa063f23a708da4c2429062915;
static PyCodeObject *codeobj_5c21f876e8f4c87b7e822588d97b8533;
static PyCodeObject *codeobj_0aa0017b140ff06b5f5e3b41e722ab11;
static PyCodeObject *codeobj_bab12b1c5bc5d1db5d1e4ba7f5d35339;
static PyCodeObject *codeobj_e47d15d1839ab43520ceb8d7e9973017;
static PyCodeObject *codeobj_d870d5235e9dfa505eb8c8088db3990c;
static PyCodeObject *codeobj_69f6955829a1311d7a68fdf59e1becfe;
static PyCodeObject *codeobj_be66594ab86cd712e30816f05e00d314;
static PyCodeObject *codeobj_9155e3afbea60ba141afe4044cfaff64;
static PyCodeObject *codeobj_fb7197cf5ed4315f9dcef673673852e9;
static PyCodeObject *codeobj_aa2aa2b4720d37fbdf89fef6e58ea72f;
static PyCodeObject *codeobj_72130d966ffc95d13be7a97b0820f09e;
static PyCodeObject *codeobj_3622fef0a39dbf3d0740ee50e18985bc;
static PyCodeObject *codeobj_2fe61f236e912aebf333bbd3e9d8f196;
static PyCodeObject *codeobj_1548ff85944d1eaa0456d99085007621;
static PyCodeObject *codeobj_ef8ef86c8080a03ddf89b31cfdd13b92;
static PyCodeObject *codeobj_75e32ae98b38b8b78de28226b7a9dcbe;
static PyCodeObject *codeobj_06c5672c45d9cf49f644c5300d775451;
static PyCodeObject *codeobj_f0d3dad92569b9daa258f43b42e24080;
static PyCodeObject *codeobj_81a98a3259189679c1af4e386f2ff4f3;
static PyCodeObject *codeobj_128a18e0d275ffe06381c2844f9b6518;
static PyCodeObject *codeobj_e5985d5909c51cd780790307350099ac;

static void _initModuleCodeObjects(void)
{
    codeobj_364ccdfa063f23a708da4c2429062915 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_NoseTester, 88, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5c21f876e8f4c87b7e822588d97b8533 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain___init__, 140, const_tuple_str_plain_self_str_plain_package_str_plain_raise_warnings_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0aa0017b140ff06b5f5e3b41e722ab11 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain___init__, 140, const_tuple_51aae2d2d18c0ea0b6dc54a377a29232_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bab12b1c5bc5d1db5d1e4ba7f5d35339 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain__get_custom_doctester, 221, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e47d15d1839ab43520ceb8d7e9973017 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain__get_custom_doctester, 221, const_tuple_str_plain_self_str_plain_NumpyDoctest_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d870d5235e9dfa505eb8c8088db3990c = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain__show_system_info, 203, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_69f6955829a1311d7a68fdf59e1becfe = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain__show_system_info, 203, const_tuple_632773ce4efce1dc21bccb3021033b4e_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_be66594ab86cd712e30816f05e00d314 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain__test_argv, 166, const_tuple_0587202bdc5d42c94a9d5e047db6d4b3_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9155e3afbea60ba141afe4044cfaff64 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain__test_argv, 166, const_tuple_6c3db0353d6ebff12dd27582d1a7fb93_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fb7197cf5ed4315f9dcef673673852e9 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_bench, 390, const_tuple_0587202bdc5d42c94a9d5e047db6d4b3_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aa2aa2b4720d37fbdf89fef6e58ea72f = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_bench, 390, const_tuple_3ca2e26190c7982e98ca3e6a0da77242_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_72130d966ffc95d13be7a97b0820f09e = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_get_package_name, 16, const_tuple_str_plain_filepath_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3622fef0a39dbf3d0740ee50e18985bc = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_get_package_name, 16, const_tuple_a42b64bc8bf8e01911e97062de336db1_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2fe61f236e912aebf333bbd3e9d8f196 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_import_nose, 56, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1548ff85944d1eaa0456d99085007621 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_import_nose, 56, const_tuple_d866406deda79d1eb8a5a082f30b0d89_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ef8ef86c8080a03ddf89b31cfdd13b92 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_nosetester, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_75e32ae98b38b8b78de28226b7a9dcbe = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_prepare_test_args, 231, const_tuple_04a1954539bdb7b5428183ea1bff8093_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_06c5672c45d9cf49f644c5300d775451 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_prepare_test_args, 231, const_tuple_706fdf61336239f5c1ae66a8937144c1_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f0d3dad92569b9daa258f43b42e24080 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_run_module_suite, 78, const_tuple_str_plain_file_to_run_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_81a98a3259189679c1af4e386f2ff4f3 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_run_module_suite, 78, const_tuple_str_plain_file_to_run_str_plain_f_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_128a18e0d275ffe06381c2844f9b6518 = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_test, 277, const_tuple_3c46e818cd3a81f46ff7a1bc4f68521b_tuple, 7, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e5985d5909c51cd780790307350099ac = MAKE_CODEOBJ( const_str_digest_cad3b0402549dcdcb67807a162c55834, const_str_plain_test, 277, const_tuple_09c68725c484a10aaae41fa434a232ea_tuple, 7, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_4_NoseTester_of_module_numpy$testing$nosetester(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_NoseTester_of_module_numpy$testing$nosetester( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1_get_package_name_of_module_numpy$testing$nosetester(  );


static PyObject *MAKE_FUNCTION_function_2__test_argv_of_class_4_NoseTester_of_module_numpy$testing$nosetester(  );


static PyObject *MAKE_FUNCTION_function_2_import_nose_of_module_numpy$testing$nosetester(  );


static PyObject *MAKE_FUNCTION_function_3__show_system_info_of_class_4_NoseTester_of_module_numpy$testing$nosetester(  );


static PyObject *MAKE_FUNCTION_function_3_run_module_suite_of_module_numpy$testing$nosetester( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4__get_custom_doctester_of_class_4_NoseTester_of_module_numpy$testing$nosetester(  );


static PyObject *MAKE_FUNCTION_function_5_prepare_test_args_of_class_4_NoseTester_of_module_numpy$testing$nosetester( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_6_test_of_class_4_NoseTester_of_module_numpy$testing$nosetester( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_7_bench_of_class_4_NoseTester_of_module_numpy$testing$nosetester( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_get_package_name_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject *_python_par_filepath )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_filepath; par_filepath.object = _python_par_filepath;
    PyObjectLocalVariable var_fullpath;
    PyObjectLocalVariable var_pkg_name;
    PyObjectLocalVariable var_p2;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    bool tmp_break_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_72130d966ffc95d13be7a97b0820f09e, module_numpy$testing$nosetester );
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
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = par_filepath.object;

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212473 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    assert( var_fullpath.object == NULL );
    var_fullpath.object = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_pkg_name.object == NULL );
    var_pkg_name.object = tmp_assign_source_2;

    loop_start_1:;
    tmp_break_1 = false;
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_1 = const_str_digest_5af3952a21febac509b898339a728c82;
    tmp_compexpr_right_1 = par_filepath.object;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212473 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 34;
        goto try_finally_handler_2;
    }

    tmp_assign_source_3 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 34;
        goto try_finally_handler_2;
    }
    if (tmp_or_1__value_1.object == NULL)
    {
        tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = tmp_or_1__value_1.object;
        tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 34;
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
    tmp_cond_value_1 = tmp_or_1__value_1.object;

    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = const_str_digest_d3ec01d5ce6ebb692b8e0f7f90e7fc3d;
    tmp_compexpr_right_2 = par_filepath.object;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212473 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 34;
        goto try_finally_handler_3;
    }

    tmp_cond_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 34;
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


        frame_function->f_lineno = 34;
        goto try_finally_handler_1;
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
    tmp_break_1 = true;
    goto try_finally_handler_start_1;
    branch_no_1:;
    try_finally_handler_start_1:;
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
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

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

    // Break if entered via break.
    if ( tmp_break_1 )
    {

    goto loop_end_1;
    }
    goto finally_end_3;
    finally_end_3:;
    // Tried code
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_os );

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
        goto try_finally_handler_4;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto try_finally_handler_4;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_split );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_1 = par_filepath.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212473 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 35;
        goto try_finally_handler_4;
    }

    frame_function->f_lineno = 35;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto try_finally_handler_4;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto try_finally_handler_4;
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


        frame_function->f_lineno = 35;
        goto try_finally_handler_4;
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


        frame_function->f_lineno = 35;
        goto try_finally_handler_4;
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

            goto try_finally_handler_4;
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

        goto try_finally_handler_4;
    }
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1.object;

    if (par_filepath.object == NULL)
    {
        par_filepath.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = par_filepath.object;
        par_filepath.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2.object;

    if (var_p2.object == NULL)
    {
        var_p2.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_p2.object;
        var_p2.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
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
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

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

    goto finally_end_4;
    finally_end_4:;
    tmp_compare_left_1 = var_p2.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212527 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_tuple_70c6406625cdc2adb259cdb4771e8d38_tuple;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    tmp_source_name_3 = var_pkg_name.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 115084 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = var_p2.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212527 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 38;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_cond_value_3 = var_pkg_name.object;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 115084 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_compare_left_2 = const_str_plain_scipy;
    tmp_compare_right_2 = var_fullpath.object;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212575 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = const_str_plain_scipy;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_return_value = const_str_plain_numpy;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_4:;
    branch_no_3:;
    tmp_source_name_4 = var_pkg_name.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 115084 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_reverse );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 48;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_subscr_target_1 = var_pkg_name.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 115084 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_source_name_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_endswith );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_digest_25d3f72ed569804b370be11292769a28;
    frame_function->f_lineno = 51;
    tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_6 = var_pkg_name.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 115084 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_pop );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_int_0;
    frame_function->f_lineno = 52;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    tmp_source_name_7 = const_str_dot;
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = var_pkg_name.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 115084 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 54;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
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
    if ((var_fullpath.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fullpath,
            var_fullpath.object
        );

    }
    if ((var_pkg_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pkg_name,
            var_pkg_name.object
        );

    }
    if ((var_p2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_p2,
            var_p2.object
        );

    }
    if ((par_filepath.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_filepath,
            par_filepath.object
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
static PyObject *fparse_function_1_get_package_name_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_filepath = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_package_name() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_filepath == key )
            {
                assert( _python_par_filepath == NULL );
                _python_par_filepath = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_filepath, key ) == 1 )
            {
                assert( _python_par_filepath == NULL );
                _python_par_filepath = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_package_name() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_filepath != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_filepath = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_filepath == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_filepath = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_filepath == NULL ))
    {
        PyObject *values[] = { _python_par_filepath };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_get_package_name_of_module_numpy$testing$nosetester( self, _python_par_filepath );

error_exit:;

    Py_XDECREF( _python_par_filepath );

    return NULL;
}

static PyObject *dparse_function_1_get_package_name_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_get_package_name_of_module_numpy$testing$nosetester( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_get_package_name_of_module_numpy$testing$nosetester( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_import_nose_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_fine_nose;
    PyObjectLocalVariable var_minimum_nose_version;
    PyObjectLocalVariable var_nose;
    PyObjectLocalVariable var_msg;
    PyObjectTempVariable tmp_try_except_1__unhandled_indicator;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    bool tmp_is_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( var_fine_nose.object == NULL );
    var_fine_nose.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_tuple_int_0_int_pos_10_int_0_tuple;
    assert( var_minimum_nose_version.object == NULL );
    var_minimum_nose_version.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_assign_source_3 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator.object == NULL );
    tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2fe61f236e912aebf333bbd3e9d8f196, module_numpy$testing$nosetester );
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
    // Tried code
    // Tried block of try/except
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_fine_nose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fine_nose,
            var_fine_nose.object
        );

    }
    if ((var_minimum_nose_version.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_minimum_nose_version,
            var_minimum_nose_version.object
        );

    }
    if ((var_nose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_nose,
            var_nose.object
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
    frame_function->f_lineno = 62;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_nose, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto try_except_handler_1;
    }
    assert( var_nose.object == NULL );
    var_nose.object = tmp_assign_source_4;

    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_assign_source_5 = Py_False;
    if (tmp_try_except_1__unhandled_indicator.object == NULL)
    {
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator.object;
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
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
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto try_finally_handler_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_6 = Py_False;
    if (var_fine_nose.object == NULL)
    {
        var_fine_nose.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = var_fine_nose.object;
        var_fine_nose.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_1;
    branch_end_1:;
    try_except_end_1:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator.object;

    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_1 = var_nose.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 210329 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto try_finally_handler_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___versioninfo__ );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto try_finally_handler_1;
    }
    tmp_compare_right_3 = var_minimum_nose_version.object;

    if ( tmp_compare_right_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212629 ], 66, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto try_finally_handler_1;
    }

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 66;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_7 = Py_False;
    if (var_fine_nose.object == NULL)
    {
        var_fine_nose.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = var_fine_nose.object;
        var_fine_nose.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    branch_no_3:;
    branch_no_2:;
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
    tmp_result = tmp_try_except_1__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_1__unhandled_indicator.object );
        tmp_try_except_1__unhandled_indicator.object = NULL;
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

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_cond_value_1 = var_fine_nose.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212695 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_binop_left_1 = const_str_digest_158a0017de584cc39316de7b7ac370d8;
    tmp_binop_right_1 = var_minimum_nose_version.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212629 ], 66, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_8 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    assert( var_msg.object == NULL );
    var_msg.object = tmp_assign_source_8;

    tmp_make_exception_arg_1 = var_msg.object;

    frame_function->f_lineno = 74;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 74;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_return_value = var_nose.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 210329 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
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
    if ((var_fine_nose.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fine_nose,
            var_fine_nose.object
        );

    }
    if ((var_minimum_nose_version.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_minimum_nose_version,
            var_minimum_nose_version.object
        );

    }
    if ((var_nose.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nose,
            var_nose.object
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
static PyObject *fparse_function_2_import_nose_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           args_given + kw_size
        );
#else
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           kw_size > 0 ? kw : NULL,
           args_given
        );
#endif

        goto error_exit;
    }


    return impl_function_2_import_nose_of_module_numpy$testing$nosetester( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_2_import_nose_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_2_import_nose_of_module_numpy$testing$nosetester( self );
    }
    else
    {
        PyObject *result = fparse_function_2_import_nose_of_module_numpy$testing$nosetester( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_run_module_suite_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject *_python_par_file_to_run )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_file_to_run; par_file_to_run.object = _python_par_file_to_run;
    PyObjectLocalVariable var_f;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f0d3dad92569b9daa258f43b42e24080, module_numpy$testing$nosetester );
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
    tmp_compare_left_1 = par_file_to_run.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212750 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__getframe );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_int_pos_1;
    frame_function->f_lineno = 80;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    assert( var_f.object == NULL );
    var_f.object = tmp_assign_source_1;

    tmp_source_name_3 = var_f.object;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_f_locals );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain___file__;
    tmp_call_arg_element_3 = Py_None;
    frame_function->f_lineno = 81;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    if (par_file_to_run.object == NULL)
    {
        par_file_to_run.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_file_to_run.object;
        par_file_to_run.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    tmp_compare_left_2 = par_file_to_run.object;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_2)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 83;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    branch_no_1:;
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_import_nose );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_import_nose );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212807 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 85;
    tmp_source_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_run );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = PyList_New( 2 );
    tmp_list_element_1 = const_str_empty;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_dict_value_1, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_file_to_run.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212750 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_dict_value_1, 1, tmp_list_element_1 );
    tmp_dict_key_1 = const_str_plain_argv;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 85;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_3, tmp_call_kw_1 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
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
    if ((var_f.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_f,
            var_f.object
        );

    }
    if ((par_file_to_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_file_to_run,
            par_file_to_run.object
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
static PyObject *fparse_function_3_run_module_suite_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_file_to_run = NULL;
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
                PyErr_Format( PyExc_TypeError, "run_module_suite() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_file_to_run == key )
            {
                assert( _python_par_file_to_run == NULL );
                _python_par_file_to_run = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_file_to_run, key ) == 1 )
            {
                assert( _python_par_file_to_run == NULL );
                _python_par_file_to_run = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "run_module_suite() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_file_to_run != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_file_to_run = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_file_to_run == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_file_to_run = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_file_to_run == NULL ))
    {
        PyObject *values[] = { _python_par_file_to_run };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_run_module_suite_of_module_numpy$testing$nosetester( self, _python_par_file_to_run );

error_exit:;

    Py_XDECREF( _python_par_file_to_run );

    return NULL;
}

static PyObject *dparse_function_3_run_module_suite_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_run_module_suite_of_module_numpy$testing$nosetester( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_run_module_suite_of_module_numpy$testing$nosetester( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_NoseTester_of_module_numpy$testing$nosetester(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var_excludes;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var__test_argv;
    PyObjectLocalVariable var__show_system_info;
    PyObjectLocalVariable var__get_custom_doctester;
    PyObjectLocalVariable var_prepare_test_args;
    PyObjectLocalVariable var_test;
    PyObjectLocalVariable var_bench;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_aeff3e2228673d0df38df7298066d8bf;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_eb127da9003fecc929f07a0f0c299e8a;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_assign_source_3 = LIST_COPY( const_list_3c36bd63d0dc6f098640860458605e23_list );
    assert( var_excludes.object == NULL );
    var_excludes.object = tmp_assign_source_3;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_364ccdfa063f23a708da4c2429062915, module_numpy$testing$nosetester );
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
    tmp_defaults_1 = const_tuple_none_str_plain_release_tuple;
    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_4_NoseTester_of_module_numpy$testing$nosetester( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 140;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_2__test_argv_of_class_4_NoseTester_of_module_numpy$testing$nosetester(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    assert( var__test_argv.object == NULL );
    var__test_argv.object = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_3__show_system_info_of_class_4_NoseTester_of_module_numpy$testing$nosetester(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }
    assert( var__show_system_info.object == NULL );
    var__show_system_info.object = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_4__get_custom_doctester_of_class_4_NoseTester_of_module_numpy$testing$nosetester(  );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }
    assert( var__get_custom_doctester.object == NULL );
    var__get_custom_doctester.object = tmp_assign_source_7;

    tmp_defaults_2 = const_tuple_str_plain_fast_int_pos_1_none_false_false_tuple;
    tmp_assign_source_8 = MAKE_FUNCTION_function_5_prepare_test_args_of_class_4_NoseTester_of_module_numpy$testing$nosetester( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    assert( var_prepare_test_args.object == NULL );
    var_prepare_test_args.object = tmp_assign_source_8;

    tmp_defaults_3 = const_tuple_str_plain_fast_int_pos_1_none_false_false_none_tuple;
    tmp_assign_source_9 = MAKE_FUNCTION_function_6_test_of_class_4_NoseTester_of_module_numpy$testing$nosetester( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    assert( var_test.object == NULL );
    var_test.object = tmp_assign_source_9;

    tmp_defaults_4 = const_tuple_str_plain_fast_int_pos_1_none_tuple;
    tmp_assign_source_10 = MAKE_FUNCTION_function_7_bench_of_class_4_NoseTester_of_module_numpy$testing$nosetester( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    assert( var_bench.object == NULL );
    var_bench.object = tmp_assign_source_10;


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
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___doc__,
            var___doc__.object
        );

    }
    if ((var_excludes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_excludes,
            var_excludes.object
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
    if ((var__test_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__test_argv,
            var__test_argv.object
        );

    }
    if ((var__show_system_info.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__show_system_info,
            var__show_system_info.object
        );

    }
    if ((var__get_custom_doctester.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__get_custom_doctester,
            var__get_custom_doctester.object
        );

    }
    if ((var_prepare_test_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_prepare_test_args,
            var_prepare_test_args.object
        );

    }
    if ((var_test.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_test,
            var_test.object
        );

    }
    if ((var_bench.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bench,
            var_bench.object
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
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__.object
        );

    }
    if ((var_excludes.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_excludes,
            var_excludes.object
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
    if ((var__test_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__test_argv,
            var__test_argv.object
        );

    }
    if ((var__show_system_info.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__show_system_info,
            var__show_system_info.object
        );

    }
    if ((var__get_custom_doctester.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__get_custom_doctester,
            var__get_custom_doctester.object
        );

    }
    if ((var_prepare_test_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_prepare_test_args,
            var_prepare_test_args.object
        );

    }
    if ((var_test.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_test,
            var_test.object
        );

    }
    if ((var_bench.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_bench,
            var_bench.object
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


static PyObject *impl_function_1___init___of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_package, PyObject *_python_par_raise_warnings )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_package; par_package.object = _python_par_package;
    PyObjectLocalVariable par_raise_warnings; par_raise_warnings.object = _python_par_raise_warnings;
    PyObjectLocalVariable var_package_name;
    PyObjectLocalVariable var_f;
    PyObjectLocalVariable var_package_path;
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
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
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
    PyObject *tmp_str_arg_1;
    PyObject *tmp_type_arg_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_None;
    assert( var_package_name.object == NULL );
    var_package_name.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5c21f876e8f4c87b7e822588d97b8533, module_numpy$testing$nosetester );
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
    tmp_compare_left_1 = par_package.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87730 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__getframe );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_int_pos_1;
    frame_function->f_lineno = 143;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }
    assert( var_f.object == NULL );
    var_f.object = tmp_assign_source_2;

    tmp_source_name_3 = var_f.object;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_f_locals );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain___file__;
    tmp_call_arg_element_3 = Py_None;
    frame_function->f_lineno = 144;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }
    assert( var_package_path.object == NULL );
    var_package_path.object = tmp_assign_source_3;

    tmp_compare_left_2 = var_package_path.object;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_2)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 146;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = var_package_path.object;

    frame_function->f_lineno = 147;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    assert( var_package_path.object != NULL );
    {
        PyObject *old = var_package_path.object;
        var_package_path.object = tmp_assign_source_4;
        Py_DECREF( old );
    }

    tmp_source_name_7 = var_f.object;

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_f_locals );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_get );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_plain___name__;
    tmp_call_arg_element_6 = Py_None;
    frame_function->f_lineno = 148;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    assert( var_package_name.object != NULL );
    {
        PyObject *old = var_package_name.object;
        var_package_name.object = tmp_assign_source_5;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_package.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87730 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_type_arg_1 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_type_arg_1 == NULL ))
    {
        tmp_type_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
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
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_package.object;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87730 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___file__ );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 150;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    assert( var_package_path.object == NULL );
    var_package_path.object = tmp_assign_source_6;

    tmp_getattr_target_1 = par_package.object;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87730 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain___name__;
    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_7 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    assert( var_package_name.object != NULL );
    {
        PyObject *old = var_package_name.object;
        var_package_name.object = tmp_assign_source_7;
        Py_DECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_str_arg_1 = par_package.object;

    if ( tmp_str_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87730 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_8 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    assert( var_package_path.object == NULL );
    var_package_path.object = tmp_assign_source_8;

    branch_end_3:;
    branch_end_1:;
    tmp_assattr_name_1 = var_package_path.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 111826 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_package_path, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_3 = var_package_name.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 159;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_3)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_get_package_name );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_package_name );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212004 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = var_package_path.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 111826 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 160;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_8 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    if (var_package_name.object == NULL)
    {
        var_package_name.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = var_package_name.object;
        var_package_name.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    branch_no_4:;
    tmp_assattr_name_2 = var_package_name.object;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_package_name, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_raise_warnings.object;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212847 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_raise_warnings, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
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
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package_name,
            var_package_name.object
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
    if ((var_package_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package_path,
            var_package_path.object
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
    if ((par_package.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package,
            par_package.object
        );

    }
    if ((par_raise_warnings.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_raise_warnings,
            par_raise_warnings.object
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
static PyObject *fparse_function_1___init___of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_package = NULL;
    PyObject *_python_par_raise_warnings = NULL;
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
            if ( found == false && const_str_plain_package == key )
            {
                assert( _python_par_package == NULL );
                _python_par_package = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_raise_warnings == key )
            {
                assert( _python_par_raise_warnings == NULL );
                _python_par_raise_warnings = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_package, key ) == 1 )
            {
                assert( _python_par_package == NULL );
                _python_par_package = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_raise_warnings, key ) == 1 )
            {
                assert( _python_par_raise_warnings == NULL );
                _python_par_raise_warnings = value;

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
         if (unlikely( _python_par_package != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_package = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_package == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_package = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_raise_warnings != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_raise_warnings = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_raise_warnings == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_raise_warnings = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_package == NULL || _python_par_raise_warnings == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_package, _python_par_raise_warnings };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, _python_par_self, _python_par_package, _python_par_raise_warnings );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_package );
    Py_XDECREF( _python_par_raise_warnings );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1___init___of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__test_argv_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_label, PyObject *_python_par_verbose, PyObject *_python_par_extra_argv )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_label; par_label.object = _python_par_label;
    PyObjectLocalVariable par_verbose; par_verbose.object = _python_par_verbose;
    PyObjectLocalVariable par_extra_argv; par_extra_argv.object = _python_par_extra_argv;
    PyObjectLocalVariable var_argv;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_3__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_3__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_4__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_4__inplace_end;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    int tmp_cmp_Eq_1;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_str_arg_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_be66594ab86cd712e30816f05e00d314, module_numpy$testing$nosetester );
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
    tmp_assign_source_1 = PyList_New( 3 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain___file__ );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___file__ );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99062 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_1, 0, tmp_list_element_1 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_package_path );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_1, 1, tmp_list_element_1 );
    tmp_list_element_1 = const_str_digest_406381251d2d4637ebfac7f24cc49c6f;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_1, 2, tmp_list_element_1 );
    assert( var_argv.object == NULL );
    var_argv.object = tmp_assign_source_1;

    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_assign_source_2 = par_label.object;

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212907 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_2;
    }

    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 184;
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
    tmp_compexpr_left_1 = par_label.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212907 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_3;
    }

    tmp_compexpr_right_1 = const_str_plain_full;
    tmp_cond_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 184;
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

        frame_function->f_lineno = 184;
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
    tmp_isinstance_inst_1 = par_label.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212907 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto try_finally_handler_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_basestring );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 68141 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto try_finally_handler_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 185;
        goto try_finally_handler_1;
    }
    if (tmp_res == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_ea9fcf326c6be021e66270bc3d976a35;
    frame_function->f_lineno = 186;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 186;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 186;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_2:;
    tmp_compare_left_1 = par_label.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212907 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }

    tmp_compare_right_1 = const_str_plain_fast;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_3 = const_str_digest_fcf159dfd0eb6cbc000ab74152a7138f;
    if (par_label.object == NULL)
    {
        par_label.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = par_label.object;
        par_label.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
    branch_no_3:;
    tmp_assign_source_4 = var_argv.object;

    if ( tmp_assign_source_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto try_finally_handler_1;
    }

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_1 = PyList_New( 2 );
    tmp_list_element_2 = const_str_digest_3852f29111da472f358dab01f1fce3f0;
    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_binop_right_1, 0, tmp_list_element_2 );
    tmp_list_element_2 = par_label.object;

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212907 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_binop_right_1, 1, tmp_list_element_2 );
    tmp_assign_source_5 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto try_finally_handler_4;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_5;

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
    tmp_assign_source_6 = tmp_inplace_assign_1__inplace_end.object;

    if (var_argv.object == NULL)
    {
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = var_argv.object;
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    branch_no_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_end.object );
    tmp_inplace_assign_1__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_1;
    }

    goto finally_end_3;
    finally_end_3:;
    branch_no_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

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

    goto finally_end_4;
    finally_end_4:;
    tmp_assign_source_7 = var_argv.object;

    if ( tmp_assign_source_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_2__inplace_start.object == NULL );
    tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

    // Tried code
    tmp_binop_left_2 = tmp_inplace_assign_2__inplace_start.object;

    tmp_binop_right_2 = PyList_New( 2 );
    tmp_list_element_3 = const_str_digest_62014e0187bf03fc31f7b5732962fcf7;
    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_binop_right_2, 0, tmp_list_element_3 );
    tmp_str_arg_1 = par_verbose.object;

    if ( tmp_str_arg_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49769 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto try_finally_handler_5;
    }

    tmp_list_element_3 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 190;
        goto try_finally_handler_5;
    }
    PyList_SET_ITEM( tmp_binop_right_2, 1, tmp_list_element_3 );
    tmp_assign_source_8 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 190;
        goto try_finally_handler_5;
    }
    assert( tmp_inplace_assign_2__inplace_end.object == NULL );
    tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_8;

    tmp_compare_left_3 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_3 = tmp_inplace_assign_2__inplace_end.object;

    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_2)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_9 = tmp_inplace_assign_2__inplace_end.object;

    if (var_argv.object == NULL)
    {
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_argv.object;
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    branch_no_5:;
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

    tmp_tried_lineno_3 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_2__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_start.object );
        tmp_inplace_assign_2__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_2__inplace_end.object );
    tmp_inplace_assign_2__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
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
    tmp_assign_source_10 = var_argv.object;

    if ( tmp_assign_source_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_3__inplace_start.object == NULL );
    tmp_inplace_assign_3__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

    // Tried code
    tmp_binop_left_3 = tmp_inplace_assign_3__inplace_start.object;

    tmp_binop_right_3 = LIST_COPY( const_list_str_digest_3872216f9438043bca9b82f9a8c71513_list );
    tmp_assign_source_11 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto try_finally_handler_6;
    }
    assert( tmp_inplace_assign_3__inplace_end.object == NULL );
    tmp_inplace_assign_3__inplace_end.object = tmp_assign_source_11;

    tmp_compare_left_4 = tmp_inplace_assign_3__inplace_start.object;

    tmp_compare_right_4 = tmp_inplace_assign_3__inplace_end.object;

    tmp_isnot_3 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if (tmp_isnot_3)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_12 = tmp_inplace_assign_3__inplace_end.object;

    if (var_argv.object == NULL)
    {
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_argv.object;
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    branch_no_6:;
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

    tmp_tried_lineno_4 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_3__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_3__inplace_start.object );
        tmp_inplace_assign_3__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_3__inplace_end.object );
    tmp_inplace_assign_3__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto frame_exception_exit_1;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_cond_value_3 = par_extra_argv.object;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212958 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_13 = var_argv.object;

    if ( tmp_assign_source_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_4__inplace_start.object == NULL );
    tmp_inplace_assign_4__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

    // Tried code
    tmp_binop_left_4 = tmp_inplace_assign_4__inplace_start.object;

    tmp_binop_right_4 = par_extra_argv.object;

    if ( tmp_binop_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212958 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 200;
        goto try_finally_handler_7;
    }

    tmp_assign_source_14 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 200;
        goto try_finally_handler_7;
    }
    assert( tmp_inplace_assign_4__inplace_end.object == NULL );
    tmp_inplace_assign_4__inplace_end.object = tmp_assign_source_14;

    tmp_compare_left_5 = tmp_inplace_assign_4__inplace_start.object;

    tmp_compare_right_5 = tmp_inplace_assign_4__inplace_end.object;

    tmp_isnot_4 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if (tmp_isnot_4)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_15 = tmp_inplace_assign_4__inplace_end.object;

    if (var_argv.object == NULL)
    {
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
    }
    else
    {
        PyObject *old = var_argv.object;
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
        Py_DECREF( old );
    }
    branch_no_8:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_4__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_4__inplace_start.object );
        tmp_inplace_assign_4__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_4__inplace_end.object );
    tmp_inplace_assign_4__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
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
    branch_no_7:;
    tmp_return_value = var_argv.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
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
    if ((var_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_argv,
            var_argv.object
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
    if ((par_label.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_label,
            par_label.object
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
    if ((par_extra_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_extra_argv,
            par_extra_argv.object
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
static PyObject *fparse_function_2__test_argv_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_label = NULL;
    PyObject *_python_par_verbose = NULL;
    PyObject *_python_par_extra_argv = NULL;
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
                PyErr_Format( PyExc_TypeError, "_test_argv() keywords must be strings" );
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
            if ( found == false && const_str_plain_label == key )
            {
                assert( _python_par_label == NULL );
                _python_par_label = value;

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
            if ( found == false && const_str_plain_extra_argv == key )
            {
                assert( _python_par_extra_argv == NULL );
                _python_par_extra_argv = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_label, key ) == 1 )
            {
                assert( _python_par_label == NULL );
                _python_par_label = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_extra_argv, key ) == 1 )
            {
                assert( _python_par_extra_argv == NULL );
                _python_par_extra_argv = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_test_argv() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_label != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_label = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_label == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_label = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_verbose != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_verbose = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_verbose == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_verbose = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_extra_argv != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_extra_argv = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_extra_argv == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_extra_argv = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_label == NULL || _python_par_verbose == NULL || _python_par_extra_argv == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_label, _python_par_verbose, _python_par_extra_argv };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2__test_argv_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, _python_par_self, _python_par_label, _python_par_verbose, _python_par_extra_argv );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_label );
    Py_XDECREF( _python_par_verbose );
    Py_XDECREF( _python_par_extra_argv );

    return NULL;
}

static PyObject *dparse_function_2__test_argv_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_2__test_argv_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2__test_argv_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__show_system_info_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_nose;
    PyObjectLocalVariable var_numpy;
    PyObjectLocalVariable var_npdir;
    PyObjectLocalVariable var_scipy;
    PyObjectLocalVariable var_spdir;
    PyObjectLocalVariable var_pyversion;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
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
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d870d5235e9dfa505eb8c8088db3990c, module_numpy$testing$nosetester );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_import_nose );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_import_nose );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212807 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 204;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 204;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 204;
        goto frame_exception_exit_1;
    }
    assert( var_nose.object == NULL );
    var_nose.object = tmp_assign_source_1;

    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_nose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_nose,
            var_nose.object
        );

    }
    if ((var_numpy.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_numpy,
            var_numpy.object
        );

    }
    if ((var_npdir.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_npdir,
            var_npdir.object
        );

    }
    if ((var_scipy.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_scipy,
            var_scipy.object
        );

    }
    if ((var_spdir.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_spdir,
            var_spdir.object
        );

    }
    if ((var_pyversion.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_pyversion,
            var_pyversion.object
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
    frame_function->f_lineno = 206;
    tmp_assign_source_2 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 206;
        goto frame_exception_exit_1;
    }
    assert( var_numpy.object == NULL );
    var_numpy.object = tmp_assign_source_2;

    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 207;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = const_str_digest_3d15c6c948bee840fb8753e6e2349534;
    tmp_source_name_1 = var_numpy.object;

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___version__ );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 207;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 207;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 207;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 207;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 208;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = var_numpy.object;

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___file__ );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 208;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 208;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 208;
        goto frame_exception_exit_1;
    }
    assert( var_npdir.object == NULL );
    var_npdir.object = tmp_assign_source_3;

    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 209;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = const_str_digest_8651892d2479c6813ade12f04d68d79e;
    tmp_binop_right_2 = var_npdir.object;

    tmp_call_arg_element_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 209;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 209;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 209;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_1 = const_str_plain_scipy;
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_package_name );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 211;
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
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_nose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_nose,
            var_nose.object
        );

    }
    if ((var_numpy.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_numpy,
            var_numpy.object
        );

    }
    if ((var_npdir.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_npdir,
            var_npdir.object
        );

    }
    if ((var_scipy.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_scipy,
            var_scipy.object
        );

    }
    if ((var_spdir.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_spdir,
            var_spdir.object
        );

    }
    if ((var_pyversion.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_pyversion,
            var_pyversion.object
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
    frame_function->f_lineno = 212;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_scipy, tmp_import_globals_2, tmp_import_locals_2, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 212;
        goto frame_exception_exit_1;
    }
    assert( var_scipy.object == NULL );
    var_scipy.object = tmp_assign_source_4;

    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_3 = const_str_digest_ab4ccf292aec9aff733eeacffd0be5f0;
    tmp_source_name_6 = var_scipy.object;

    tmp_binop_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___version__ );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 213;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = var_scipy.object;

    tmp_call_arg_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___file__ );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 214;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }
    assert( var_spdir.object == NULL );
    var_spdir.object = tmp_assign_source_5;

    tmp_called_7 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_4 = const_str_digest_68df292065de2a7fc2ec3e7ee1962d00;
    tmp_binop_right_4 = var_spdir.object;

    tmp_call_arg_element_6 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 215;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 217;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_version );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 217;
        goto frame_exception_exit_1;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_replace );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 217;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_newline;
    tmp_call_arg_element_8 = const_str_empty;
    frame_function->f_lineno = 217;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 217;
        goto frame_exception_exit_1;
    }
    assert( var_pyversion.object == NULL );
    var_pyversion.object = tmp_assign_source_6;

    tmp_called_9 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_5 = const_str_digest_7339242ca3267aef50b5d7e210d26873;
    tmp_binop_right_5 = var_pyversion.object;

    tmp_call_arg_element_9 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 218;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_10 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_6 = const_str_digest_a9e48869afd3f3be4d040cab32259a3f;
    tmp_source_name_12 = var_nose.object;

    tmp_binop_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___versioninfo__ );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = BINARY_OPERATION_REMAINDER( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 219;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
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
    if ((var_nose.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nose,
            var_nose.object
        );

    }
    if ((var_numpy.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_numpy,
            var_numpy.object
        );

    }
    if ((var_npdir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_npdir,
            var_npdir.object
        );

    }
    if ((var_scipy.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_scipy,
            var_scipy.object
        );

    }
    if ((var_spdir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_spdir,
            var_spdir.object
        );

    }
    if ((var_pyversion.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pyversion,
            var_pyversion.object
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
static PyObject *fparse_function_3__show_system_info_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_show_system_info() keywords must be strings" );
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
                   "_show_system_info() got an unexpected keyword argument '%s'",
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


    return impl_function_3__show_system_info_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3__show_system_info_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3__show_system_info_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__show_system_info_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__get_custom_doctester_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_NumpyDoctest;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bab12b1c5bc5d1db5d1e4ba7f5d35339, module_numpy$testing$nosetester );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_NumpyDoctest.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_NumpyDoctest,
            var_NumpyDoctest.object
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
    frame_function->f_lineno = 228;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_noseclasses, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_NumpyDoctest_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_NumpyDoctest );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    assert( var_NumpyDoctest.object == NULL );
    var_NumpyDoctest.object = tmp_assign_source_1;

    tmp_called_1 = var_NumpyDoctest.object;

    frame_function->f_lineno = 229;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
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
    if ((var_NumpyDoctest.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_NumpyDoctest,
            var_NumpyDoctest.object
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
static PyObject *fparse_function_4__get_custom_doctester_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_get_custom_doctester() keywords must be strings" );
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
                   "_get_custom_doctester() got an unexpected keyword argument '%s'",
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


    return impl_function_4__get_custom_doctester_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4__get_custom_doctester_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4__get_custom_doctester_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__get_custom_doctester_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_prepare_test_args_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_label, PyObject *_python_par_verbose, PyObject *_python_par_extra_argv, PyObject *_python_par_doctests, PyObject *_python_par_coverage )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_label; par_label.object = _python_par_label;
    PyObjectLocalVariable par_verbose; par_verbose.object = _python_par_verbose;
    PyObjectLocalVariable par_extra_argv; par_extra_argv.object = _python_par_extra_argv;
    PyObjectLocalVariable par_doctests; par_doctests.object = _python_par_doctests;
    PyObjectLocalVariable par_coverage; par_coverage.object = _python_par_coverage;
    PyObjectLocalVariable var_argv;
    PyObjectLocalVariable var_ename;
    PyObjectLocalVariable var_nose;
    PyObjectLocalVariable var_KnownFailure;
    PyObjectLocalVariable var_Unplugger;
    PyObjectLocalVariable var_plugins;
    PyObjectLocalVariable var_p;
    PyObjectLocalVariable var_doctest_argv;
    PyObjectLocalVariable var_plug;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_end;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_inplace_assign_3__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_3__inplace_end;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_and_2__value_1;
    PyObjectTempVariable tmp_inplace_assign_4__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_4__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_5__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_5__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_6__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_6__inplace_end;
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
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_left_6;
    PyObject *tmp_binop_left_7;
    PyObject *tmp_binop_left_8;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_binop_right_7;
    PyObject *tmp_binop_right_8;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_locals_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    bool tmp_isnot_6;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_list_element_4;
    PyObject *tmp_list_element_5;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
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
    PyObject *tmp_unary_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_75e32ae98b38b8b78de28226b7a9dcbe, module_numpy$testing$nosetester );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_import_nose );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_import_nose );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212807 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 245;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__test_argv );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_label.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212907 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_verbose.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49769 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_extra_argv.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212958 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 247;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    assert( var_argv.object == NULL );
    var_argv.object = tmp_assign_source_1;

    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_excludes );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
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
        frame_function->f_lineno = 249;
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
    tmp_assign_source_4 = tmp_for_loop_1__iter_value.object;

    if (var_ename.object == NULL)
    {
        var_ename.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_ename.object;
        var_ename.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_assign_source_5 = var_argv.object;

    if ( tmp_assign_source_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto try_finally_handler_1;
    }

    if (tmp_inplace_assign_1__inplace_start.object == NULL)
    {
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_start.object;
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_1 = PyList_New( 2 );
    tmp_list_element_1 = const_str_digest_96748849c7c40b273804a1b2d86af7c0;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_binop_right_1, 0, tmp_list_element_1 );
    tmp_list_element_1 = var_ename.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_binop_right_1, 1, tmp_list_element_1 );
    tmp_assign_source_6 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto try_finally_handler_2;
    }
    if (tmp_inplace_assign_1__inplace_end.object == NULL)
    {
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_end.object;
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
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
    tmp_assign_source_7 = tmp_inplace_assign_1__inplace_end.object;

    if (var_argv.object == NULL)
    {
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = var_argv.object;
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
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
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_end.object );
    tmp_inplace_assign_1__inplace_end.object = NULL;

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
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
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
    tmp_cond_value_1 = par_coverage.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213014 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
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
    tmp_assign_source_8 = var_argv.object;

    if ( tmp_assign_source_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_2__inplace_start.object == NULL );
    tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

    // Tried code
    tmp_binop_left_2 = tmp_inplace_assign_2__inplace_start.object;

    tmp_binop_right_2 = PyList_New( 4 );
    tmp_binop_left_3 = const_str_digest_c627c022b07e7c0b7255c733bdb7f264;
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto try_finally_handler_3;
    }

    tmp_binop_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_package_name );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 253;
        goto try_finally_handler_3;
    }
    tmp_list_element_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 253;
        goto try_finally_handler_3;
    }
    PyList_SET_ITEM( tmp_binop_right_2, 0, tmp_list_element_2 );
    tmp_list_element_2 = const_str_digest_d93aec8fb37fa55b775e311af99f882c;
    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_binop_right_2, 1, tmp_list_element_2 );
    tmp_list_element_2 = const_str_digest_13d731448227fdf5faf3b58029b59efc;
    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_binop_right_2, 2, tmp_list_element_2 );
    tmp_list_element_2 = const_str_digest_2756a9acaf47d0600fbfef18d732474c;
    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_binop_right_2, 3, tmp_list_element_2 );
    tmp_assign_source_9 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto try_finally_handler_3;
    }
    assert( tmp_inplace_assign_2__inplace_end.object == NULL );
    tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_9;

    tmp_compare_left_2 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_2 = tmp_inplace_assign_2__inplace_end.object;

    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if (tmp_isnot_2)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_10 = tmp_inplace_assign_2__inplace_end.object;

    if (var_argv.object == NULL)
    {
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_argv.object;
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    branch_no_3:;
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
    tmp_result = tmp_inplace_assign_2__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_start.object );
        tmp_inplace_assign_2__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_2__inplace_end.object );
    tmp_inplace_assign_2__inplace_end.object = NULL;

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
    branch_no_2:;
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_argv,
            var_argv.object
        );

    }
    if ((var_ename.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ename,
            var_ename.object
        );

    }
    if ((var_nose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_nose,
            var_nose.object
        );

    }
    if ((var_KnownFailure.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_KnownFailure,
            var_KnownFailure.object
        );

    }
    if ((var_Unplugger.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_Unplugger,
            var_Unplugger.object
        );

    }
    if ((var_plugins.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_plugins,
            var_plugins.object
        );

    }
    if ((var_p.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_p,
            var_p.object
        );

    }
    if ((var_doctest_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_doctest_argv,
            var_doctest_argv.object
        );

    }
    if ((var_plug.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_plug,
            var_plug.object
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
    if ((par_label.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_label,
            par_label.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_extra_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_extra_argv,
            par_extra_argv.object
        );

    }
    if ((par_doctests.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_doctests,
            par_doctests.object
        );

    }
    if ((par_coverage.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_coverage,
            par_coverage.object
        );

    }
    frame_function->f_lineno = 256;
    tmp_assign_source_11 = IMPORT_MODULE( const_str_digest_77caed2ad08ca512616c963995870660, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    assert( var_nose.object == NULL );
    var_nose.object = tmp_assign_source_11;

    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_argv,
            var_argv.object
        );

    }
    if ((var_ename.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ename,
            var_ename.object
        );

    }
    if ((var_nose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_nose,
            var_nose.object
        );

    }
    if ((var_KnownFailure.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_KnownFailure,
            var_KnownFailure.object
        );

    }
    if ((var_Unplugger.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_Unplugger,
            var_Unplugger.object
        );

    }
    if ((var_plugins.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_plugins,
            var_plugins.object
        );

    }
    if ((var_p.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_p,
            var_p.object
        );

    }
    if ((var_doctest_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_doctest_argv,
            var_doctest_argv.object
        );

    }
    if ((var_plug.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_plug,
            var_plug.object
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
    if ((par_label.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_label,
            par_label.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_extra_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_extra_argv,
            par_extra_argv.object
        );

    }
    if ((par_doctests.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_doctests,
            par_doctests.object
        );

    }
    if ((par_coverage.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_coverage,
            par_coverage.object
        );

    }
    frame_function->f_lineno = 257;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_noseclasses, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_KnownFailure_str_plain_Unplugger_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_KnownFailure );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    assert( var_KnownFailure.object == NULL );
    var_KnownFailure.object = tmp_assign_source_12;

    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    tmp_import_locals_3 = PyDict_New();
    if ((var_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_argv,
            var_argv.object
        );

    }
    if ((var_ename.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_ename,
            var_ename.object
        );

    }
    if ((var_nose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_nose,
            var_nose.object
        );

    }
    if ((var_KnownFailure.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_KnownFailure,
            var_KnownFailure.object
        );

    }
    if ((var_Unplugger.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_Unplugger,
            var_Unplugger.object
        );

    }
    if ((var_plugins.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_plugins,
            var_plugins.object
        );

    }
    if ((var_p.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_p,
            var_p.object
        );

    }
    if ((var_doctest_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_doctest_argv,
            var_doctest_argv.object
        );

    }
    if ((var_plug.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_plug,
            var_plug.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_label.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_label,
            par_label.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_extra_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_extra_argv,
            par_extra_argv.object
        );

    }
    if ((par_doctests.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_doctests,
            par_doctests.object
        );

    }
    if ((par_coverage.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_coverage,
            par_coverage.object
        );

    }
    frame_function->f_lineno = 257;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_noseclasses, tmp_import_globals_3, tmp_import_locals_3, const_tuple_str_plain_KnownFailure_str_plain_Unplugger_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Unplugger );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    assert( var_Unplugger.object == NULL );
    var_Unplugger.object = tmp_assign_source_13;

    tmp_assign_source_14 = PyList_New( 1 );
    tmp_called_3 = var_KnownFailure.object;

    frame_function->f_lineno = 258;
    tmp_list_element_3 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_14 );

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_14, 0, tmp_list_element_3 );
    assert( var_plugins.object == NULL );
    var_plugins.object = tmp_assign_source_14;

    tmp_assign_source_15 = var_plugins.object;

    assert( tmp_inplace_assign_3__inplace_start.object == NULL );
    tmp_inplace_assign_3__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    // Tried code
    tmp_assign_source_16 = NULL;
    // Tried code
    tmp_binop_left_4 = tmp_inplace_assign_3__inplace_start.object;

    tmp_binop_right_4 = NULL;
    // Tried code
    tmp_source_name_6 = var_nose.object;

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_plugins );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto try_finally_handler_6;
    }
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_builtin );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto try_finally_handler_6;
    }
    tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto try_finally_handler_6;
    }
    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto try_finally_handler_6;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_17;

    tmp_assign_source_18 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_18;

    loop_start_2:;
    tmp_next_source_2 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_19 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_19 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 259;
            goto try_finally_handler_6;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_19;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_19;
        Py_DECREF( old );
    }
    tmp_assign_source_20 = tmp_listcontr_1__iter_value_0.object;

    if (var_p.object == NULL)
    {
        var_p.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
    }
    else
    {
        PyObject *old = var_p.object;
        var_p.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_called_4 = var_p.object;

    frame_function->f_lineno = 259;
    tmp_append_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto try_finally_handler_6;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto try_finally_handler_6;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto try_finally_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_binop_right_4 = tmp_listcontr_1__listcontr_result.object;

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_5;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_assign_source_16 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
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
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_4;
    }

    goto finally_end_5;
    finally_end_5:;
    assert( tmp_inplace_assign_3__inplace_end.object == NULL );
    tmp_inplace_assign_3__inplace_end.object = tmp_assign_source_16;

    tmp_compare_left_3 = tmp_inplace_assign_3__inplace_start.object;

    tmp_compare_right_3 = tmp_inplace_assign_3__inplace_end.object;

    tmp_isnot_3 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_3)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_21 = tmp_inplace_assign_3__inplace_end.object;

    if (var_plugins.object == NULL)
    {
        var_plugins.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
    }
    else
    {
        PyObject *old = var_plugins.object;
        var_plugins.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
        Py_DECREF( old );
    }
    branch_no_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_3__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_3__inplace_start.object );
        tmp_inplace_assign_3__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_3__inplace_end.object );
    tmp_inplace_assign_3__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto frame_exception_exit_1;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_compexpr_left_1 = const_str_digest_eda38f3e67a8c18c1ec906dfdb27350d;
    tmp_compexpr_right_1 = var_argv.object;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_22 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    assert( var_doctest_argv.object == NULL );
    var_doctest_argv.object = INCREASE_REFCOUNT( tmp_assign_source_22 );

    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_compexpr_left_2 = par_doctests.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213068 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto try_finally_handler_8;
    }

    tmp_compexpr_right_2 = Py_False;
    tmp_assign_source_23 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto try_finally_handler_8;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_23;

    tmp_cond_value_3 = tmp_and_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto try_finally_handler_8;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_2 = var_doctest_argv.object;

    // Re-reraise as necessary after finally was executed.
    goto finally_end_7;
    finally_end_7:;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_2 = tmp_and_1__value_1.object;

    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
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

        goto try_finally_handler_7;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto try_finally_handler_7;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_24 = Py_True;
    if (par_doctests.object == NULL)
    {
        par_doctests.object = INCREASE_REFCOUNT( tmp_assign_source_24 );
    }
    else
    {
        PyObject *old = par_doctests.object;
        par_doctests.object = INCREASE_REFCOUNT( tmp_assign_source_24 );
        Py_DECREF( old );
    }
    branch_no_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto frame_exception_exit_1;
    }

    goto finally_end_9;
    finally_end_9:;
    tmp_source_name_7 = par_self.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__get_custom_doctester );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 264;
    tmp_assign_source_25 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    assert( var_plug.object == NULL );
    var_plug.object = tmp_assign_source_25;

    tmp_compare_left_4 = var_plug.object;

    tmp_compare_right_4 = Py_None;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if (tmp_is_1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    // Tried code
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_assign_source_26 = par_doctests.object;

    if ( tmp_assign_source_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213068 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto try_finally_handler_11;
    }

    assert( tmp_and_2__value_1.object == NULL );
    tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_26 );

    tmp_cond_value_5 = tmp_and_2__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_11;
    }
    if (tmp_cond_truth_5 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_unary_arg_1 = var_doctest_argv.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213122 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto try_finally_handler_12;
    }

    tmp_cond_value_4 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_12;
    }
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
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_4 = tmp_and_2__value_1.object;

    condexpr_end_2:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto try_finally_handler_10;
    }

    goto finally_end_11;
    finally_end_11:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_10;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_27 = var_argv.object;

    if ( tmp_assign_source_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto try_finally_handler_10;
    }

    assert( tmp_inplace_assign_4__inplace_start.object == NULL );
    tmp_inplace_assign_4__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_27 );

    // Tried code
    tmp_binop_left_5 = tmp_inplace_assign_4__inplace_start.object;

    tmp_binop_right_5 = LIST_COPY( const_list_str_digest_eda38f3e67a8c18c1ec906dfdb27350d_list );
    tmp_assign_source_28 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto try_finally_handler_13;
    }
    assert( tmp_inplace_assign_4__inplace_end.object == NULL );
    tmp_inplace_assign_4__inplace_end.object = tmp_assign_source_28;

    tmp_compare_left_5 = tmp_inplace_assign_4__inplace_start.object;

    tmp_compare_right_5 = tmp_inplace_assign_4__inplace_end.object;

    tmp_isnot_4 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if (tmp_isnot_4)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_29 = tmp_inplace_assign_4__inplace_end.object;

    if (var_argv.object == NULL)
    {
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
    }
    else
    {
        PyObject *old = var_argv.object;
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
        Py_DECREF( old );
    }
    branch_no_8:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_8 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_4__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_4__inplace_start.object );
        tmp_inplace_assign_4__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_4__inplace_end.object );
    tmp_inplace_assign_4__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto try_finally_handler_10;
    }

    goto finally_end_12;
    finally_end_12:;
    branch_no_7:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto frame_exception_exit_1;
    }

    goto finally_end_13;
    finally_end_13:;
    goto branch_end_6;
    branch_no_6:;
    tmp_cond_value_6 = var_doctest_argv.object;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213122 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_8 = var_argv.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_remove );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_digest_eda38f3e67a8c18c1ec906dfdb27350d;
    frame_function->f_lineno = 271;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_9:;
    tmp_assign_source_30 = var_plugins.object;

    if ( tmp_assign_source_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213180 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 272;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_5__inplace_start.object == NULL );
    tmp_inplace_assign_5__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_30 );

    // Tried code
    tmp_binop_left_6 = tmp_inplace_assign_5__inplace_start.object;

    tmp_binop_right_6 = PyList_New( 2 );
    tmp_called_7 = var_Unplugger.object;

    if ( tmp_called_7 == NULL )
    {
        Py_DECREF( tmp_binop_right_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213233 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 272;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_5 = const_str_plain_doctest;
    frame_function->f_lineno = 272;
    tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_5 );
    if ( tmp_list_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_6 );

        frame_function->f_lineno = 272;
        goto try_finally_handler_14;
    }
    PyList_SET_ITEM( tmp_binop_right_6, 0, tmp_list_element_4 );
    tmp_list_element_4 = var_plug.object;

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_binop_right_6, 1, tmp_list_element_4 );
    tmp_assign_source_31 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 272;
        goto try_finally_handler_14;
    }
    assert( tmp_inplace_assign_5__inplace_end.object == NULL );
    tmp_inplace_assign_5__inplace_end.object = tmp_assign_source_31;

    tmp_compare_left_6 = tmp_inplace_assign_5__inplace_start.object;

    tmp_compare_right_6 = tmp_inplace_assign_5__inplace_end.object;

    tmp_isnot_5 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if (tmp_isnot_5)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_32 = tmp_inplace_assign_5__inplace_end.object;

    if (var_plugins.object == NULL)
    {
        var_plugins.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
    }
    else
    {
        PyObject *old = var_plugins.object;
        var_plugins.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
        Py_DECREF( old );
    }
    branch_no_10:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_10 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_5__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_5__inplace_start.object );
        tmp_inplace_assign_5__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_5__inplace_end.object );
    tmp_inplace_assign_5__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_10;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_13 != NULL )
    {
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;

        goto frame_exception_exit_1;
    }

    goto finally_end_14;
    finally_end_14:;
    tmp_cond_value_7 = par_doctests.object;

    if ( tmp_cond_value_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213068 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_7 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_33 = var_argv.object;

    if ( tmp_assign_source_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_6__inplace_start.object == NULL );
    tmp_inplace_assign_6__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_33 );

    // Tried code
    tmp_binop_left_7 = tmp_inplace_assign_6__inplace_start.object;

    tmp_binop_right_7 = PyList_New( 1 );
    tmp_binop_left_8 = const_str_digest_eeca16f0ffd385c5bee4d375cc5e5348;
    tmp_source_name_9 = var_plug.object;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_binop_right_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213288 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto try_finally_handler_15;
    }

    tmp_binop_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_name );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_7 );

        frame_function->f_lineno = 274;
        goto try_finally_handler_15;
    }
    tmp_list_element_5 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_list_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_7 );

        frame_function->f_lineno = 274;
        goto try_finally_handler_15;
    }
    PyList_SET_ITEM( tmp_binop_right_7, 0, tmp_list_element_5 );
    tmp_assign_source_34 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto try_finally_handler_15;
    }
    assert( tmp_inplace_assign_6__inplace_end.object == NULL );
    tmp_inplace_assign_6__inplace_end.object = tmp_assign_source_34;

    tmp_compare_left_7 = tmp_inplace_assign_6__inplace_start.object;

    tmp_compare_right_7 = tmp_inplace_assign_6__inplace_end.object;

    tmp_isnot_6 = ( tmp_compare_left_7 != tmp_compare_right_7 );
    if (tmp_isnot_6)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_35 = tmp_inplace_assign_6__inplace_end.object;

    if (var_argv.object == NULL)
    {
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_35 );
    }
    else
    {
        PyObject *old = var_argv.object;
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_35 );
        Py_DECREF( old );
    }
    branch_no_12:;
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

    tmp_tried_lineno_11 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_6__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_6__inplace_start.object );
        tmp_inplace_assign_6__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_6__inplace_end.object );
    tmp_inplace_assign_6__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_11;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_14 != NULL )
    {
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;

        goto frame_exception_exit_1;
    }

    goto finally_end_15;
    finally_end_15:;
    branch_no_11:;
    branch_end_6:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_argv.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_plugins.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213180 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
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
    if ((var_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_argv,
            var_argv.object
        );

    }
    if ((var_ename.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ename,
            var_ename.object
        );

    }
    if ((var_nose.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nose,
            var_nose.object
        );

    }
    if ((var_KnownFailure.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_KnownFailure,
            var_KnownFailure.object
        );

    }
    if ((var_Unplugger.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Unplugger,
            var_Unplugger.object
        );

    }
    if ((var_plugins.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_plugins,
            var_plugins.object
        );

    }
    if ((var_p.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_p,
            var_p.object
        );

    }
    if ((var_doctest_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_doctest_argv,
            var_doctest_argv.object
        );

    }
    if ((var_plug.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_plug,
            var_plug.object
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
    if ((par_label.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_label,
            par_label.object
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
    if ((par_extra_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_extra_argv,
            par_extra_argv.object
        );

    }
    if ((par_doctests.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_doctests,
            par_doctests.object
        );

    }
    if ((par_coverage.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_coverage,
            par_coverage.object
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
static PyObject *fparse_function_5_prepare_test_args_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_label = NULL;
    PyObject *_python_par_verbose = NULL;
    PyObject *_python_par_extra_argv = NULL;
    PyObject *_python_par_doctests = NULL;
    PyObject *_python_par_coverage = NULL;
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
                PyErr_Format( PyExc_TypeError, "prepare_test_args() keywords must be strings" );
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
            if ( found == false && const_str_plain_label == key )
            {
                assert( _python_par_label == NULL );
                _python_par_label = value;

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
            if ( found == false && const_str_plain_extra_argv == key )
            {
                assert( _python_par_extra_argv == NULL );
                _python_par_extra_argv = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_doctests == key )
            {
                assert( _python_par_doctests == NULL );
                _python_par_doctests = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_coverage == key )
            {
                assert( _python_par_coverage == NULL );
                _python_par_coverage = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_label, key ) == 1 )
            {
                assert( _python_par_label == NULL );
                _python_par_label = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_extra_argv, key ) == 1 )
            {
                assert( _python_par_extra_argv == NULL );
                _python_par_extra_argv = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_doctests, key ) == 1 )
            {
                assert( _python_par_doctests == NULL );
                _python_par_doctests = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_coverage, key ) == 1 )
            {
                assert( _python_par_coverage == NULL );
                _python_par_coverage = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "prepare_test_args() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_label != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_label = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_label == NULL )
    {
        if ( 1 + self->m_defaults_given >= 6  )
        {
            _python_par_label = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 6 ) );
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
         if (unlikely( _python_par_verbose != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_verbose = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_verbose == NULL )
    {
        if ( 2 + self->m_defaults_given >= 6  )
        {
            _python_par_verbose = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 6 ) );
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
         if (unlikely( _python_par_extra_argv != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_extra_argv = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_extra_argv == NULL )
    {
        if ( 3 + self->m_defaults_given >= 6  )
        {
            _python_par_extra_argv = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 6 ) );
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
         if (unlikely( _python_par_doctests != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_doctests = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_doctests == NULL )
    {
        if ( 4 + self->m_defaults_given >= 6  )
        {
            _python_par_doctests = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 6 ) );
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
         if (unlikely( _python_par_coverage != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_coverage = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_coverage == NULL )
    {
        if ( 5 + self->m_defaults_given >= 6  )
        {
            _python_par_coverage = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 6 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_label == NULL || _python_par_verbose == NULL || _python_par_extra_argv == NULL || _python_par_doctests == NULL || _python_par_coverage == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_label, _python_par_verbose, _python_par_extra_argv, _python_par_doctests, _python_par_coverage };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_prepare_test_args_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, _python_par_self, _python_par_label, _python_par_verbose, _python_par_extra_argv, _python_par_doctests, _python_par_coverage );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_label );
    Py_XDECREF( _python_par_verbose );
    Py_XDECREF( _python_par_extra_argv );
    Py_XDECREF( _python_par_doctests );
    Py_XDECREF( _python_par_coverage );

    return NULL;
}

static PyObject *dparse_function_5_prepare_test_args_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_5_prepare_test_args_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_prepare_test_args_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_test_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_label, PyObject *_python_par_verbose, PyObject *_python_par_extra_argv, PyObject *_python_par_doctests, PyObject *_python_par_coverage, PyObject *_python_par_raise_warnings )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_label; par_label.object = _python_par_label;
    PyObjectLocalVariable par_verbose; par_verbose.object = _python_par_verbose;
    PyObjectLocalVariable par_extra_argv; par_extra_argv.object = _python_par_extra_argv;
    PyObjectLocalVariable par_doctests; par_doctests.object = _python_par_doctests;
    PyObjectLocalVariable par_coverage; par_coverage.object = _python_par_coverage;
    PyObjectLocalVariable par_raise_warnings; par_raise_warnings.object = _python_par_raise_warnings;
    PyObjectLocalVariable var_utils;
    PyObjectLocalVariable var_doctest;
    PyObjectLocalVariable var__warn_opts;
    PyObjectLocalVariable var_warningtype;
    PyObjectLocalVariable var_NumpyTestProgram;
    PyObjectLocalVariable var_argv;
    PyObjectLocalVariable var_plugins;
    PyObjectLocalVariable var_t;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_with_1__source;
    PyObjectTempVariable tmp_with_1__exit;
    PyObjectTempVariable tmp_with_1__enter;
    PyObjectTempVariable tmp_with_1__indicator;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
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
    PyObject *tmp_attr_source_1;
    PyObject *tmp_attr_source_2;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_kw_4;
    PyObject *tmp_call_kw_5;
    PyObject *tmp_call_kw_6;
    PyObject *tmp_call_kw_7;
    PyObject *tmp_call_kw_8;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_call_pos_3;
    PyObject *tmp_call_pos_4;
    PyObject *tmp_call_pos_5;
    PyObject *tmp_call_pos_6;
    PyObject *tmp_call_pos_7;
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
    int tmp_cmp_In_1;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_arg_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_locals_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_is_1;
    bool tmp_is_2;
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
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_128a18e0d275ffe06381c2844f9b6518, module_numpy$testing$nosetester );
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
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_verbose.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49769 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = const_int_pos_3;
    frame_function->f_lineno = 341;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }
    if (par_verbose.object == NULL)
    {
        par_verbose.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_verbose.object;
        par_verbose.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_utils.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_utils,
            var_utils.object
        );

    }
    if ((var_doctest.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_doctest,
            var_doctest.object
        );

    }
    if ((var__warn_opts.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain__warn_opts,
            var__warn_opts.object
        );

    }
    if ((var_warningtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_warningtype,
            var_warningtype.object
        );

    }
    if ((var_NumpyTestProgram.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_NumpyTestProgram,
            var_NumpyTestProgram.object
        );

    }
    if ((var_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_argv,
            var_argv.object
        );

    }
    if ((var_plugins.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_plugins,
            var_plugins.object
        );

    }
    if ((var_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_t,
            var_t.object
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
    if ((par_label.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_label,
            par_label.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_extra_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_extra_argv,
            par_extra_argv.object
        );

    }
    if ((par_doctests.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_doctests,
            par_doctests.object
        );

    }
    if ((par_coverage.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_coverage,
            par_coverage.object
        );

    }
    if ((par_raise_warnings.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_raise_warnings,
            par_raise_warnings.object
        );

    }
    frame_function->f_lineno = 343;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_empty, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_utils_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_utils );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    assert( var_utils.object == NULL );
    var_utils.object = tmp_assign_source_2;

    tmp_assattr_name_1 = par_verbose.object;

    tmp_assattr_target_1 = var_utils.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_verbose, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = par_doctests.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213068 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 346;
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
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = const_str_digest_0de9faf1e5c1c3f5e962fa194d45abc6;
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_package_name );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 347;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_called_3 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = const_str_digest_45dc0e9e6c3fd2291c2781dbe7261a16;
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_package_name );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 349;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__show_system_info );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 351;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_utils.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_utils,
            var_utils.object
        );

    }
    if ((var_doctest.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_doctest,
            var_doctest.object
        );

    }
    if ((var__warn_opts.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain__warn_opts,
            var__warn_opts.object
        );

    }
    if ((var_warningtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_warningtype,
            var_warningtype.object
        );

    }
    if ((var_NumpyTestProgram.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_NumpyTestProgram,
            var_NumpyTestProgram.object
        );

    }
    if ((var_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_argv,
            var_argv.object
        );

    }
    if ((var_plugins.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_plugins,
            var_plugins.object
        );

    }
    if ((var_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_t,
            var_t.object
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
    if ((par_label.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_label,
            par_label.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_extra_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_extra_argv,
            par_extra_argv.object
        );

    }
    if ((par_doctests.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_doctests,
            par_doctests.object
        );

    }
    if ((par_coverage.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_coverage,
            par_coverage.object
        );

    }
    if ((par_raise_warnings.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_raise_warnings,
            par_raise_warnings.object
        );

    }
    frame_function->f_lineno = 354;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_doctest, tmp_import_globals_2, tmp_import_locals_2, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }
    assert( var_doctest.object == NULL );
    var_doctest.object = tmp_assign_source_3;

    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = var_doctest.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_master, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = par_raise_warnings.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212847 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 357;
        goto frame_exception_exit_1;
    }

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
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 358;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_raise_warnings );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 358;
        goto frame_exception_exit_1;
    }
    if (par_raise_warnings.object == NULL)
    {
        par_raise_warnings.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = par_raise_warnings.object;
        par_raise_warnings.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    branch_no_2:;
    tmp_dict_arg_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6864 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10320 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_develop;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_value_2 = const_tuple_empty;
    tmp_dict_key_2 = const_str_plain_release;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_assign_source_5 = tmp_dict_arg_1;
    assert( var__warn_opts.object == NULL );
    var__warn_opts.object = tmp_assign_source_5;

    tmp_compare_left_2 = par_raise_warnings.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212847 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = var__warn_opts.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_keys );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 362;
    tmp_compare_right_2 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_subscr_target_1 = var__warn_opts.object;

    tmp_subscr_subscript_1 = par_raise_warnings.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212847 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 363;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 363;
        goto frame_exception_exit_1;
    }
    if (par_raise_warnings.object == NULL)
    {
        par_raise_warnings.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = par_raise_warnings.object;
        par_raise_warnings.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    branch_no_3:;
    // Tried code
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_catch_warnings );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 365;
    tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS( tmp_called_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }
    assert( tmp_with_1__source.object == NULL );
    tmp_with_1__source.object = tmp_assign_source_7;

    tmp_attr_source_1 = tmp_with_1__source.object;

    tmp_assign_source_8 = LOOKUP_SPECIAL( tmp_attr_source_1, const_str_plain___exit__ );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }
    assert( tmp_with_1__exit.object == NULL );
    tmp_with_1__exit.object = tmp_assign_source_8;

    tmp_attr_source_2 = tmp_with_1__source.object;

    tmp_called_7 = LOOKUP_SPECIAL( tmp_attr_source_2, const_str_plain___enter__ );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 365;
    tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }
    assert( tmp_with_1__enter.object == NULL );
    tmp_with_1__enter.object = tmp_assign_source_9;

    tmp_assign_source_10 = Py_True;
    assert( tmp_with_1__indicator.object == NULL );
    tmp_with_1__indicator.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

    // Tried code
    // Tried block of try/except
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 368;
        goto try_except_handler_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_resetwarnings );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 368;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 371;
        goto try_except_handler_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_filterwarnings );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto try_except_handler_1;
    }
    tmp_call_pos_1 = const_tuple_str_plain_always_tuple;
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_dict_value_3 == NULL ))
    {
        tmp_dict_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6864 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 371;
        goto try_except_handler_1;
    }

    tmp_dict_key_3 = const_str_plain_category;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 371;
    tmp_unused = CALL_FUNCTION( tmp_called_9, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_1 = par_raise_warnings.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212847 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_except_handler_1;
    }

    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_except_handler_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_11;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_12 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 373;
            goto try_finally_handler_3;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    tmp_assign_source_13 = tmp_for_loop_1__iter_value.object;

    if (var_warningtype.object == NULL)
    {
        var_warningtype.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
    }
    else
    {
        PyObject *old = var_warningtype.object;
        var_warningtype.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
        Py_DECREF( old );
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 374;
        goto try_finally_handler_3;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_filterwarnings );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_3;
    }
    tmp_call_pos_2 = const_tuple_str_plain_error_tuple;
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_4 = var_warningtype.object;

    tmp_dict_key_4 = const_str_plain_category;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 374;
    tmp_unused = CALL_FUNCTION( tmp_called_10, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_finally_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

        goto try_except_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_except_handler_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_filterwarnings );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_except_handler_1;
    }
    tmp_call_pos_3 = const_tuple_str_plain_ignore_tuple;
    tmp_call_kw_3 = PyDict_Copy( const_dict_9e93ae750d410ac953fc12d564eeb98e );
    frame_function->f_lineno = 376;
    tmp_unused = CALL_FUNCTION( tmp_called_11, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 377;
        goto try_except_handler_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_filterwarnings );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
        goto try_except_handler_1;
    }
    tmp_call_pos_4 = const_tuple_str_plain_ignore_tuple;
    tmp_call_kw_4 = PyDict_Copy( const_dict_cdc56397a7eac51c5bef5ec6274b6e27 );
    frame_function->f_lineno = 377;
    tmp_unused = CALL_FUNCTION( tmp_called_12, tmp_call_pos_4, tmp_call_kw_4 );
    Py_DECREF( tmp_called_12 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 378;
        goto try_except_handler_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_filterwarnings );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 378;
        goto try_except_handler_1;
    }
    tmp_call_pos_5 = const_tuple_str_plain_ignore_tuple;
    tmp_call_kw_5 = PyDict_Copy( const_dict_a815b95e8620d5d7012876c85aae519c );
    frame_function->f_lineno = 378;
    tmp_unused = CALL_FUNCTION( tmp_called_13, tmp_call_pos_5, tmp_call_kw_5 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 378;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 379;
        goto try_except_handler_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_filterwarnings );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 379;
        goto try_except_handler_1;
    }
    tmp_call_pos_6 = const_tuple_str_plain_ignore_tuple;
    tmp_call_kw_6 = _PyDict_NewPresized( 1 );
    tmp_dict_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_ModuleDeprecationWarning );

    if (unlikely( tmp_dict_value_5 == NULL ))
    {
        tmp_dict_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModuleDeprecationWarning );
    }

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_call_kw_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213338 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 379;
        goto try_except_handler_1;
    }

    tmp_dict_key_5 = const_str_plain_category;
    PyDict_SetItem( tmp_call_kw_6, tmp_dict_key_5, tmp_dict_value_5 );
    frame_function->f_lineno = 379;
    tmp_unused = CALL_FUNCTION( tmp_called_14, tmp_call_pos_6, tmp_call_kw_6 );
    Py_DECREF( tmp_called_14 );
    Py_DECREF( tmp_call_kw_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 379;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 380;
        goto try_except_handler_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_filterwarnings );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto try_except_handler_1;
    }
    tmp_call_pos_7 = const_tuple_str_plain_ignore_tuple;
    tmp_call_kw_7 = _PyDict_NewPresized( 1 );
    tmp_dict_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_FutureWarning );

    if (unlikely( tmp_dict_value_6 == NULL ))
    {
        tmp_dict_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FutureWarning );
    }

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        Py_DECREF( tmp_call_kw_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 167882 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 380;
        goto try_except_handler_1;
    }

    tmp_dict_key_6 = const_str_plain_category;
    PyDict_SetItem( tmp_call_kw_7, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 380;
    tmp_unused = CALL_FUNCTION( tmp_called_15, tmp_call_pos_7, tmp_call_kw_7 );
    Py_DECREF( tmp_called_15 );
    Py_DECREF( tmp_call_kw_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    tmp_import_locals_3 = PyDict_New();
    if ((var_utils.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_utils,
            var_utils.object
        );

    }
    if ((var_doctest.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_doctest,
            var_doctest.object
        );

    }
    if ((var__warn_opts.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain__warn_opts,
            var__warn_opts.object
        );

    }
    if ((var_warningtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_warningtype,
            var_warningtype.object
        );

    }
    if ((var_NumpyTestProgram.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_NumpyTestProgram,
            var_NumpyTestProgram.object
        );

    }
    if ((var_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_argv,
            var_argv.object
        );

    }
    if ((var_plugins.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_plugins,
            var_plugins.object
        );

    }
    if ((var_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_t,
            var_t.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_label.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_label,
            par_label.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_extra_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_extra_argv,
            par_extra_argv.object
        );

    }
    if ((par_doctests.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_doctests,
            par_doctests.object
        );

    }
    if ((par_coverage.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_coverage,
            par_coverage.object
        );

    }
    if ((par_raise_warnings.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_3,
            const_str_plain_raise_warnings,
            par_raise_warnings.object
        );

    }
    frame_function->f_lineno = 382;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_noseclasses, tmp_import_globals_3, tmp_import_locals_3, const_tuple_str_plain_NumpyTestProgram_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto try_except_handler_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_NumpyTestProgram );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto try_except_handler_1;
    }
    assert( var_NumpyTestProgram.object == NULL );
    var_NumpyTestProgram.object = tmp_assign_source_14;

    // Tried code
    tmp_source_name_15 = par_self.object;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 384;
        goto try_finally_handler_4;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_prepare_test_args );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_5 = par_label.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212907 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 385;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_6 = par_verbose.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49769 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 385;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_7 = par_extra_argv.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212958 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 385;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_8 = par_doctests.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213068 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 385;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_9 = par_coverage.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213014 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 385;
        goto try_finally_handler_4;
    }

    frame_function->f_lineno = 385;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS5( tmp_called_16, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_16 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 385;
        goto try_finally_handler_4;
    }
    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_15;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_16 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 384;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_16;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_17 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
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


        frame_function->f_lineno = 384;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_17;

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

            goto try_finally_handler_4;
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

        goto try_finally_handler_4;
    }
    tmp_assign_source_18 = tmp_tuple_unpack_1__element_1.object;

    assert( var_argv.object == NULL );
    var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_18 );

    tmp_assign_source_19 = tmp_tuple_unpack_1__element_2.object;

    assert( var_plugins.object == NULL );
    var_plugins.object = INCREASE_REFCOUNT( tmp_assign_source_19 );

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
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_except_handler_1;
    }

    goto finally_end_2;
    finally_end_2:;
    tmp_called_17 = var_NumpyTestProgram.object;

    if ( tmp_called_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213391 ], 62, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 386;
        goto try_except_handler_1;
    }

    tmp_call_kw_8 = _PyDict_NewPresized( 3 );
    tmp_dict_value_7 = var_argv.object;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_call_kw_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 386;
        goto try_except_handler_1;
    }

    tmp_dict_key_7 = const_str_plain_argv;
    PyDict_SetItem( tmp_call_kw_8, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = Py_False;
    tmp_dict_key_8 = const_str_plain_exit;
    PyDict_SetItem( tmp_call_kw_8, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_value_9 = var_plugins.object;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_call_kw_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213180 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 386;
        goto try_except_handler_1;
    }

    tmp_dict_key_9 = const_str_plain_plugins;
    PyDict_SetItem( tmp_call_kw_8, tmp_dict_key_9, tmp_dict_value_9 );
    frame_function->f_lineno = 386;
    tmp_assign_source_20 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_17, tmp_call_kw_8 );
    Py_DECREF( tmp_call_kw_8 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto try_except_handler_1;
    }
    assert( var_t.object == NULL );
    var_t.object = tmp_assign_source_20;

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
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_BaseException;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );



        goto try_finally_handler_2;
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
    tmp_assign_source_21 = Py_False;
    if (tmp_with_1__indicator.object == NULL)
    {
        tmp_with_1__indicator.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
    }
    else
    {
        PyObject *old = tmp_with_1__indicator.object;
        tmp_with_1__indicator.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
        Py_DECREF( old );
    }
    tmp_called_18 = tmp_with_1__exit.object;

    tmp_call_arg_element_10 = PyThreadState_GET()->exc_type;
    tmp_call_arg_element_11 = PyThreadState_GET()->exc_value;
    tmp_call_arg_element_12 = PyThreadState_GET()->exc_traceback;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_18, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );



        goto try_finally_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );


        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_2;
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_2;
    branch_end_4:;
    try_except_end_1:;
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

    tmp_tried_lineno_3 = frame_function->f_lineno;
    tmp_compare_left_4 = tmp_with_1__indicator.object;

    tmp_compare_right_4 = Py_True;
    tmp_is_2 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if (tmp_is_2)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_19 = tmp_with_1__exit.object;

    tmp_call_arg_element_13 = Py_None;
    tmp_call_arg_element_14 = Py_None;
    tmp_call_arg_element_15 = Py_None;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_19, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );



        goto try_finally_handler_error_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_1;
    }

    goto finally_end_3;
    try_finally_handler_error_1:;
    Py_XDECREF( exception_keeper_type_3 );exception_keeper_type_3 = NULL;
    Py_XDECREF( exception_keeper_value_3 );exception_keeper_value_3 = NULL;
    Py_XDECREF( exception_keeper_tb_3 );exception_keeper_tb_3 = NULL;
    goto try_finally_handler_1;
    finally_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_with_1__source.object );
    tmp_with_1__source.object = NULL;

    Py_XDECREF( tmp_with_1__enter.object );
    tmp_with_1__enter.object = NULL;

    Py_XDECREF( tmp_with_1__exit.object );
    tmp_with_1__exit.object = NULL;

    Py_XDECREF( tmp_with_1__indicator.object );
    tmp_with_1__indicator.object = NULL;

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
    tmp_source_name_16 = var_t.object;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_result );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }
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
    if ((var_utils.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_utils,
            var_utils.object
        );

    }
    if ((var_doctest.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_doctest,
            var_doctest.object
        );

    }
    if ((var__warn_opts.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__warn_opts,
            var__warn_opts.object
        );

    }
    if ((var_warningtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_warningtype,
            var_warningtype.object
        );

    }
    if ((var_NumpyTestProgram.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_NumpyTestProgram,
            var_NumpyTestProgram.object
        );

    }
    if ((var_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_argv,
            var_argv.object
        );

    }
    if ((var_plugins.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_plugins,
            var_plugins.object
        );

    }
    if ((var_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t,
            var_t.object
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
    if ((par_label.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_label,
            par_label.object
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
    if ((par_extra_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_extra_argv,
            par_extra_argv.object
        );

    }
    if ((par_doctests.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_doctests,
            par_doctests.object
        );

    }
    if ((par_coverage.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_coverage,
            par_coverage.object
        );

    }
    if ((par_raise_warnings.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_raise_warnings,
            par_raise_warnings.object
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
static PyObject *fparse_function_6_test_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_label = NULL;
    PyObject *_python_par_verbose = NULL;
    PyObject *_python_par_extra_argv = NULL;
    PyObject *_python_par_doctests = NULL;
    PyObject *_python_par_coverage = NULL;
    PyObject *_python_par_raise_warnings = NULL;
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
                PyErr_Format( PyExc_TypeError, "test() keywords must be strings" );
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
            if ( found == false && const_str_plain_label == key )
            {
                assert( _python_par_label == NULL );
                _python_par_label = value;

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
            if ( found == false && const_str_plain_extra_argv == key )
            {
                assert( _python_par_extra_argv == NULL );
                _python_par_extra_argv = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_doctests == key )
            {
                assert( _python_par_doctests == NULL );
                _python_par_doctests = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_coverage == key )
            {
                assert( _python_par_coverage == NULL );
                _python_par_coverage = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_raise_warnings == key )
            {
                assert( _python_par_raise_warnings == NULL );
                _python_par_raise_warnings = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_label, key ) == 1 )
            {
                assert( _python_par_label == NULL );
                _python_par_label = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_extra_argv, key ) == 1 )
            {
                assert( _python_par_extra_argv == NULL );
                _python_par_extra_argv = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_doctests, key ) == 1 )
            {
                assert( _python_par_doctests == NULL );
                _python_par_doctests = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_coverage, key ) == 1 )
            {
                assert( _python_par_coverage == NULL );
                _python_par_coverage = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_raise_warnings, key ) == 1 )
            {
                assert( _python_par_raise_warnings == NULL );
                _python_par_raise_warnings = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "test() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_label != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_label = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_label == NULL )
    {
        if ( 1 + self->m_defaults_given >= 7  )
        {
            _python_par_label = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 7 ) );
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
         if (unlikely( _python_par_verbose != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_verbose = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_verbose == NULL )
    {
        if ( 2 + self->m_defaults_given >= 7  )
        {
            _python_par_verbose = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 7 ) );
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
         if (unlikely( _python_par_extra_argv != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_extra_argv = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_extra_argv == NULL )
    {
        if ( 3 + self->m_defaults_given >= 7  )
        {
            _python_par_extra_argv = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 7 ) );
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
         if (unlikely( _python_par_doctests != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_doctests = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_doctests == NULL )
    {
        if ( 4 + self->m_defaults_given >= 7  )
        {
            _python_par_doctests = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 7 ) );
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
         if (unlikely( _python_par_coverage != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_coverage = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_coverage == NULL )
    {
        if ( 5 + self->m_defaults_given >= 7  )
        {
            _python_par_coverage = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 7 ) );
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
         if (unlikely( _python_par_raise_warnings != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_raise_warnings = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_raise_warnings == NULL )
    {
        if ( 6 + self->m_defaults_given >= 7  )
        {
            _python_par_raise_warnings = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 7 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_label == NULL || _python_par_verbose == NULL || _python_par_extra_argv == NULL || _python_par_doctests == NULL || _python_par_coverage == NULL || _python_par_raise_warnings == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_label, _python_par_verbose, _python_par_extra_argv, _python_par_doctests, _python_par_coverage, _python_par_raise_warnings };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6_test_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, _python_par_self, _python_par_label, _python_par_verbose, _python_par_extra_argv, _python_par_doctests, _python_par_coverage, _python_par_raise_warnings );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_label );
    Py_XDECREF( _python_par_verbose );
    Py_XDECREF( _python_par_extra_argv );
    Py_XDECREF( _python_par_doctests );
    Py_XDECREF( _python_par_coverage );
    Py_XDECREF( _python_par_raise_warnings );

    return NULL;
}

static PyObject *dparse_function_6_test_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 7 )
    {
        return impl_function_6_test_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_test_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_bench_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_label, PyObject *_python_par_verbose, PyObject *_python_par_extra_argv )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_label; par_label.object = _python_par_label;
    PyObjectLocalVariable par_verbose; par_verbose.object = _python_par_verbose;
    PyObjectLocalVariable par_extra_argv; par_extra_argv.object = _python_par_extra_argv;
    PyObjectLocalVariable var_argv;
    PyObjectLocalVariable var_nose;
    PyObjectLocalVariable var_Unplugger;
    PyObjectLocalVariable var_add_plugins;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_isnot_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    bool tmp_result;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fb7197cf5ed4315f9dcef673673852e9, module_numpy$testing$nosetester );
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
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 446;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = const_str_digest_d05888d52ccb86aa9c73cfc712d82e1c;
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 446;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_package_name );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 446;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 446;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 446;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 446;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 447;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__show_system_info );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 447;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 447;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 447;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 449;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__test_argv );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_label.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212907 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 449;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_verbose.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49769 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 449;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_extra_argv.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212958 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 449;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 449;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto frame_exception_exit_1;
    }
    assert( var_argv.object == NULL );
    var_argv.object = tmp_assign_source_1;

    tmp_assign_source_2 = var_argv.object;

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    // Tried code
    tmp_binop_left_2 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_2 = PyList_New( 2 );
    tmp_list_element_1 = const_str_digest_4bbe32f80d669e8493019af175d96be1;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_binop_right_2, 0, tmp_list_element_1 );
    tmp_binop_left_3 = const_str_digest_0b58c122fcca629903180e433b7d983f;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 450;
        goto try_finally_handler_1;
    }

    tmp_binop_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sep );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 450;
        goto try_finally_handler_1;
    }
    tmp_list_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 450;
        goto try_finally_handler_1;
    }
    PyList_SET_ITEM( tmp_binop_right_2, 1, tmp_list_element_1 );
    tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 450;
        goto try_finally_handler_1;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_3;

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
    tmp_assign_source_4 = tmp_inplace_assign_1__inplace_end.object;

    assert( var_argv.object != NULL );
    {
        PyObject *old = var_argv.object;
        var_argv.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }

    branch_no_1:;
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
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_end.object );
    tmp_inplace_assign_1__inplace_end.object = NULL;

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
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_import_nose );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_import_nose );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 212807 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 453;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 453;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 453;
        goto frame_exception_exit_1;
    }
    assert( var_nose.object == NULL );
    var_nose.object = tmp_assign_source_5;

    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_argv,
            var_argv.object
        );

    }
    if ((var_nose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_nose,
            var_nose.object
        );

    }
    if ((var_Unplugger.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_Unplugger,
            var_Unplugger.object
        );

    }
    if ((var_add_plugins.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_add_plugins,
            var_add_plugins.object
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
    if ((par_label.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_label,
            par_label.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_extra_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_extra_argv,
            par_extra_argv.object
        );

    }
    frame_function->f_lineno = 456;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_noseclasses, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_Unplugger_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 456;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Unplugger );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 456;
        goto frame_exception_exit_1;
    }
    assert( var_Unplugger.object == NULL );
    var_Unplugger.object = tmp_assign_source_6;

    tmp_assign_source_7 = PyList_New( 1 );
    tmp_called_5 = var_Unplugger.object;

    tmp_call_arg_element_5 = const_str_plain_doctest;
    frame_function->f_lineno = 457;
    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 457;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_7, 0, tmp_list_element_2 );
    assert( var_add_plugins.object == NULL );
    var_add_plugins.object = tmp_assign_source_7;

    tmp_source_name_5 = var_nose.object;

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_run );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 459;
        goto frame_exception_exit_1;
    }
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = var_argv.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 459;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_argv;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = var_add_plugins.object;

    tmp_dict_key_2 = const_str_plain_addplugins;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 459;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_6, tmp_call_kw_1 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 459;
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
    if ((var_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_argv,
            var_argv.object
        );

    }
    if ((var_nose.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nose,
            var_nose.object
        );

    }
    if ((var_Unplugger.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Unplugger,
            var_Unplugger.object
        );

    }
    if ((var_add_plugins.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_add_plugins,
            var_add_plugins.object
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
    if ((par_label.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_label,
            par_label.object
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
    if ((par_extra_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_extra_argv,
            par_extra_argv.object
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
static PyObject *fparse_function_7_bench_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_label = NULL;
    PyObject *_python_par_verbose = NULL;
    PyObject *_python_par_extra_argv = NULL;
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
                PyErr_Format( PyExc_TypeError, "bench() keywords must be strings" );
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
            if ( found == false && const_str_plain_label == key )
            {
                assert( _python_par_label == NULL );
                _python_par_label = value;

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
            if ( found == false && const_str_plain_extra_argv == key )
            {
                assert( _python_par_extra_argv == NULL );
                _python_par_extra_argv = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_label, key ) == 1 )
            {
                assert( _python_par_label == NULL );
                _python_par_label = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_extra_argv, key ) == 1 )
            {
                assert( _python_par_extra_argv == NULL );
                _python_par_extra_argv = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "bench() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_label != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_label = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_label == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_label = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_verbose != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_verbose = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_verbose == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_verbose = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_extra_argv != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_extra_argv = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_extra_argv == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_extra_argv = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_label == NULL || _python_par_verbose == NULL || _python_par_extra_argv == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_label, _python_par_verbose, _python_par_extra_argv };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7_bench_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, _python_par_self, _python_par_label, _python_par_verbose, _python_par_extra_argv );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_label );
    Py_XDECREF( _python_par_verbose );
    Py_XDECREF( _python_par_extra_argv );

    return NULL;
}

static PyObject *dparse_function_7_bench_of_class_4_NoseTester_of_module_numpy$testing$nosetester( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_7_bench_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_bench_of_class_4_NoseTester_of_module_numpy$testing$nosetester( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_NoseTester_of_module_numpy$testing$nosetester( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        dparse_function_1___init___of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0aa0017b140ff06b5f5e3b41e722ab11,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$testing$nosetester,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_get_package_name_of_module_numpy$testing$nosetester(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_get_package_name_of_module_numpy$testing$nosetester,
        dparse_function_1_get_package_name_of_module_numpy$testing$nosetester,
        const_str_plain_get_package_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3622fef0a39dbf3d0740ee50e18985bc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$testing$nosetester,
        const_str_digest_fd76c88427117592b82fbf3a7f5efaed
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__test_argv_of_class_4_NoseTester_of_module_numpy$testing$nosetester(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__test_argv_of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        dparse_function_2__test_argv_of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        const_str_plain__test_argv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9155e3afbea60ba141afe4044cfaff64,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$testing$nosetester,
        const_str_digest_15165f8cfbeb7a4e667e51b998e9e000
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_import_nose_of_module_numpy$testing$nosetester(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_import_nose_of_module_numpy$testing$nosetester,
        dparse_function_2_import_nose_of_module_numpy$testing$nosetester,
        const_str_plain_import_nose,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1548ff85944d1eaa0456d99085007621,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$testing$nosetester,
        const_str_digest_1948949d4f4a36797ae7d3bb98e211fd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__show_system_info_of_class_4_NoseTester_of_module_numpy$testing$nosetester(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__show_system_info_of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        dparse_function_3__show_system_info_of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        const_str_plain__show_system_info,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_69f6955829a1311d7a68fdf59e1becfe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$testing$nosetester,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_run_module_suite_of_module_numpy$testing$nosetester( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_run_module_suite_of_module_numpy$testing$nosetester,
        dparse_function_3_run_module_suite_of_module_numpy$testing$nosetester,
        const_str_plain_run_module_suite,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_81a98a3259189679c1af4e386f2ff4f3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$testing$nosetester,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__get_custom_doctester_of_class_4_NoseTester_of_module_numpy$testing$nosetester(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__get_custom_doctester_of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        dparse_function_4__get_custom_doctester_of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        const_str_plain__get_custom_doctester,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e47d15d1839ab43520ceb8d7e9973017,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$testing$nosetester,
        const_str_digest_0eaf23f45e4536e9fb2bf93a84d8b2b0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_prepare_test_args_of_class_4_NoseTester_of_module_numpy$testing$nosetester( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_prepare_test_args_of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        dparse_function_5_prepare_test_args_of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        const_str_plain_prepare_test_args,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_06c5672c45d9cf49f644c5300d775451,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$testing$nosetester,
        const_str_digest_dffd31aa42c3c51aa1320a38a0aab40a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_test_of_class_4_NoseTester_of_module_numpy$testing$nosetester( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_test_of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        dparse_function_6_test_of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        const_str_plain_test,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e5985d5909c51cd780790307350099ac,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$testing$nosetester,
        const_str_digest_af064253e0000f28cd78163942be10fc
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_bench_of_class_4_NoseTester_of_module_numpy$testing$nosetester( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_bench_of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        dparse_function_7_bench_of_class_4_NoseTester_of_module_numpy$testing$nosetester,
        const_str_plain_bench,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aa2aa2b4720d37fbdf89fef6e58ea72f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$testing$nosetester,
        const_str_digest_0daaad4342c7df8d440dcd4008fc162e
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$testing$nosetester =
{
    PyModuleDef_HEAD_INIT,
    "numpy.testing.nosetester",   /* m_name */
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

MOD_INIT_DECL( numpy$testing$nosetester )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$testing$nosetester );
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

    // puts( "in initnumpy$testing$nosetester" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$testing$nosetester = Py_InitModule4(
        "numpy.testing.nosetester",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$testing$nosetester = PyModule_Create( &mdef_numpy$testing$nosetester );
#endif

    moduledict_numpy$testing$nosetester = (PyDictObject *)((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;

    assertObject( module_numpy$testing$nosetester );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_aeff3e2228673d0df38df7298066d8bf, module_numpy$testing$nosetester );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$testing$nosetester );

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
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
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
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_class_bases_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;

    // Module code.
    tmp_assign_source_1 = const_str_digest_cacfcd6301fbb2e35776c01aabf8220a;
    UPDATE_STRING_DICT0( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_cad3b0402549dcdcb67807a162c55834;
    UPDATE_STRING_DICT0( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_ef8ef86c8080a03ddf89b31cfdd13b92, module_numpy$testing$nosetester );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    frame_module->f_lineno = 9;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    frame_module->f_lineno = 10;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    frame_module->f_lineno = 11;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_6, tmp_import_globals_6, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_9718270fe5d2c916ce2b6f64e75a37af, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_basestring_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_basestring );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$testing$nosetester)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_ModuleDeprecationWarning_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ModuleDeprecationWarning );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_ModuleDeprecationWarning, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_function_1_get_package_name_of_module_numpy$testing$nosetester(  );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_get_package_name, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_function_2_import_nose_of_module_numpy$testing$nosetester(  );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_12 );

        frame_module->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_import_nose, tmp_assign_source_12 );
    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_13 = MAKE_FUNCTION_function_3_run_module_suite_of_module_numpy$testing$nosetester( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_13 );

        frame_module->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_run_module_suite, tmp_assign_source_13 );
    // Tried code
    tmp_assign_source_14 = PyTuple_New( 1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_object );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_14 );

        frame_module->f_lineno = 88;
        goto try_finally_handler_1;
    }
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_14, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_14;

    tmp_assign_source_15 = impl_class_4_NoseTester_of_module_numpy$testing$nosetester(  );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 88;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_15;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 88;
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
    tmp_assign_source_16 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 88;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_16 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_16;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_NoseTester;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 88;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 88;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_17;

    tmp_assign_source_18 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$testing$nosetester, (Nuitka_StringObject *)const_str_plain_NoseTester, tmp_assign_source_18 );
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

    return MOD_RETURN_VALUE( module_numpy$testing$nosetester );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
