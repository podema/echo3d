// Generated code for Python source for module 'numpy.distutils.command.build_ext'
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

// The _module_numpy$distutils$command$build_ext is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils$command$build_ext;
PyDictObject *moduledict_numpy$distutils$command$build_ext;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_str_dot;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_o;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_t;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_Set;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_dir;
extern PyObject *const_str_plain_ext;
extern PyObject *const_str_plain_f77;
extern PyObject *const_str_plain_f90;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_kws;
extern PyObject *const_str_plain_lib;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_run;
extern PyObject *const_str_plain_set;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_glob;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_msvc;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_sets;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_binfo;
static PyObject *const_str_plain_clibs;
extern PyObject *const_str_plain_ctype;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_force;
extern PyObject *const_str_plain_newer;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_undef;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_c_libs;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_isfile;
extern PyObject *const_str_plain_libdir;
extern PyObject *const_str_plain_linker;
extern PyObject *const_str_plain_macros;
extern PyObject *const_str_plain_mkpath;
extern PyObject *const_str_plain_remove;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_abspath;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_cygpath;
extern PyObject *const_str_plain_depends;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_dry_run;
extern PyObject *const_str_plain_inplace;
extern PyObject *const_str_plain_libfile;
extern PyObject *const_str_plain_libname;
extern PyObject *const_str_plain_modpath;
extern PyObject *const_str_plain_objects;
extern PyObject *const_str_plain_outputs;
extern PyObject *const_str_plain_package;
extern PyObject *const_str_plain_sources;
extern PyObject *const_str_plain_use_tee;
extern PyObject *const_str_plain_verbose;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_build_py;
extern PyObject *const_str_plain_compiler;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_dst_name;
extern PyObject *const_str_plain_fullname;
static PyObject *const_str_plain_have_run;
extern PyObject *const_str_plain_language;
extern PyObject *const_str_plain_libfile2;
extern PyObject *const_str_plain_need_cxx;
extern PyObject *const_str_plain_build_ext;
extern PyObject *const_str_plain_build_lib;
extern PyObject *const_str_plain_build_src;
static PyObject *const_str_plain_c_objects;
extern PyObject *const_str_plain_c_sources;
extern PyObject *const_str_plain_copy_file;
extern PyObject *const_str_plain_customize;
extern PyObject *const_str_plain_f_objects;
extern PyObject *const_str_plain_f_sources;
extern PyObject *const_str_plain_fcompiler;
extern PyObject *const_str_plain_filenames;
extern PyObject *const_str_plain_incl_dirs;
extern PyObject *const_str_plain_libraries;
extern PyObject *const_str_plain_move_file;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_build_clib;
extern PyObject *const_str_plain_build_info;
extern PyObject *const_str_plain_build_temp;
extern PyObject *const_str_plain_c_compiler;
static PyObject *const_str_plain_c_lib_dirs;
extern PyObject *const_str_plain_extensions;
extern PyObject *const_str_plain_extra_args;
static PyObject *const_str_plain_f_lib_dirs;
extern PyObject *const_str_plain_fileexists;
static PyObject *const_str_plain_new_c_libs;
extern PyObject *const_str_plain_output_dir;
extern PyObject *const_str_plain_requiref90;
extern PyObject *const_str_plain_startswith;
static PyObject *const_str_plain_c_libraries;
extern PyObject *const_str_plain_cxx_sources;
extern PyObject *const_str_plain_description;
extern PyObject *const_str_plain_get_outputs;
extern PyObject *const_str_plain_get_version;
extern PyObject *const_str_plain_is_sequence;
extern PyObject *const_str_plain_module_dirs;
extern PyObject *const_str_plain_newer_group;
extern PyObject *const_str_plain_package_dir;
extern PyObject *const_str_plain_run_command;
extern PyObject *const_str_plain_target_lang;
extern PyObject *const_str_plain_cxx_compiler;
extern PyObject *const_str_plain_distribution;
extern PyObject *const_str_plain_exec_command;
static PyObject *const_str_plain_ext_filename;
static PyObject *const_str_plain_ext_language;
extern PyObject *const_str_plain_help_options;
extern PyObject *const_str_plain_include_dirs;
extern PyObject *const_str_plain_library_dirs;
extern PyObject *const_str_plain_msvc_version;
extern PyObject *const_str_plain_new_compiler;
extern PyObject *const_str_plain_swig_sources;
extern PyObject *const_str_plain_undef_macros;
extern PyObject *const_str_plain_user_options;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain__cxx_compiler;
static PyObject *const_str_plain__f77_compiler;
static PyObject *const_str_plain__f90_compiler;
static PyObject *const_str_plain_all_languages;
extern PyObject *const_str_plain_combine_paths;
extern PyObject *const_str_plain_compiler_type;
extern PyObject *const_str_plain_customize_cmd;
extern PyObject *const_str_plain_define_macros;
static PyObject *const_str_plain_ext_languages;
extern PyObject *const_str_plain_extra_objects;
extern PyObject *const_str_plain_get_libraries;
extern PyObject *const_str_plain_has_f_sources;
extern PyObject *const_str_plain_new_fcompiler;
static PyObject *const_str_plain_old_build_ext;
extern PyObject *const_str_plain_DistutilsError;
static PyObject *const_str_plain_c_library_dirs;
extern PyObject *const_str_plain_export_symbols;
extern PyObject *const_str_plain_extra_postargs;
extern PyObject *const_str_plain_filter_sources;
extern PyObject *const_str_plain_module_options;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_build_extension;
static PyObject *const_str_plain_detect_language;
extern PyObject *const_str_plain_extra_link_args;
extern PyObject *const_str_plain_fmodule_sources;
extern PyObject *const_str_plain_get_command_obj;
extern PyObject *const_str_plain_get_package_dir;
extern PyObject *const_str_plain_has_c_libraries;
extern PyObject *const_str_plain_has_cxx_sources;
extern PyObject *const_tuple_str_plain_Set_tuple;
extern PyObject *const_tuple_str_plain_log_tuple;
static PyObject *const_str_plain_build_extensions;
extern PyObject *const_str_plain_ensure_finalized;
extern PyObject *const_str_plain_existing_modules;
extern PyObject *const_str_plain_finalize_options;
extern PyObject *const_str_plain_get_ext_filename;
extern PyObject *const_str_plain_get_ext_fullname;
extern PyObject *const_str_plain_get_source_files;
extern PyObject *const_str_plain_module_build_dir;
extern PyObject *const_str_plain_source_languages;
extern PyObject *const_tuple_str_plain_glob_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_create_static_lib;
extern PyObject *const_str_plain_module_dir_switch;
static PyObject *const_str_plain_need_cxx_compiler;
static PyObject *const_str_plain_need_f77_compiler;
static PyObject *const_str_plain_need_f90_compiler;
extern PyObject *const_str_plain_DistutilsFileError;
extern PyObject *const_str_plain_extra_compile_args;
static PyObject *const_str_plain_get_export_symbols;
extern PyObject *const_str_plain_initialize_options;
static PyObject *const_str_plain_link_shared_object;
extern PyObject *const_str_plain_show_customization;
extern PyObject *const_str_plain_DistutilsSetupError;
static PyObject *const_str_plain__gfortran_workaround;
extern PyObject *const_str_plain_get_ext_source_files;
extern PyObject *const_str_plain_runtime_library_dirs;
extern PyObject *const_str_plain_check_extensions_list;
extern PyObject *const_str_plain_get_finalized_command;
extern PyObject *const_tuple_str_plain_build_ext_tuple;
extern PyObject *const_tuple_str_plain_copy_file_tuple;
static PyObject *const_str_plain__add_dummy_mingwex_sym;
extern PyObject *const_str_plain_extra_f77_compile_args;
extern PyObject *const_str_plain_extra_f90_compile_args;
extern PyObject *const_str_plain_get_build_architecture;
extern PyObject *const_str_plain_get_numpy_include_dirs;
extern PyObject *const_str_plain_show_fortran_compilers;
extern PyObject *const_tuple_str_plain_newer_group_tuple;
extern PyObject *const_tuple_str_plain_exec_command_tuple;
extern PyObject *const_tuple_str_plain_new_compiler_tuple;
static PyObject *const_tuple_str_plain_combine_paths_tuple;
extern PyObject *const_tuple_str_plain_new_fcompiler_tuple;
extern PyObject *const_dict_3be937dfcb6326ab62ea1b692cc71009;
extern PyObject *const_list_str_plain_f77_str_plain_f90_list;
static PyObject *const_str_plain__libs_with_msvc_and_fortran;
extern PyObject *const_tuple_str_plain_self_str_plain_ext_tuple;
extern PyObject *const_str_digest_042fb074b113ef83cbeec96065895a9e;
static PyObject *const_str_digest_05634a60dddb2fe80de1186eac51a144;
static PyObject *const_str_digest_06b422385f239f2395aff6a1cd60f30c;
static PyObject *const_str_digest_0e4921df71b782b43adc42f393e09e46;
extern PyObject *const_str_digest_121afe86c7350e5208f86c496e7b2dbd;
extern PyObject *const_str_digest_1a18da63cbbfb49cb9616e6bfd35f662;
static PyObject *const_str_digest_1df052269d46d0dc5e16228abf1fd40d;
static PyObject *const_str_digest_201403af0deb09e8bec50bbd0a2c735d;
static PyObject *const_str_digest_221332bda5cd3eaf5962caedaea1e20f;
extern PyObject *const_str_digest_281372bea41c1cc2820284b52b815f98;
extern PyObject *const_str_digest_2b4a68262e2530d19ed27f39d54ab744;
extern PyObject *const_str_digest_34d4a33660dc01be9663386794dab04b;
static PyObject *const_str_digest_396a81a8b9a834ccc00d711bf4aad4fc;
static PyObject *const_str_digest_3f7da3abb6fade90660a79422b97e777;
static PyObject *const_str_digest_42a310526012119baba197e135337e96;
extern PyObject *const_str_digest_43fa4cfce65fed3921bb3bd77c4c2566;
static PyObject *const_str_digest_44230834b9c86297da3e1dc3df076638;
extern PyObject *const_str_digest_45ccd415cc3ac96c00d7d81674d1238e;
static PyObject *const_str_digest_4c2ffb8c6e769dbb360f42545a0ff959;
extern PyObject *const_str_digest_4e1df17c1b7cdf4d421633c2f6340f5b;
static PyObject *const_str_digest_50858cbed80c4d4f595f41d02cb4e265;
extern PyObject *const_str_digest_51be3512c32becf5c3cb2669da2620f7;
static PyObject *const_str_digest_5dbaa0bfeb851a15188fd28f4b8dca2d;
extern PyObject *const_str_digest_6786c771ff638c2613791fc0ba5bb563;
extern PyObject *const_str_digest_696d37d40d3d675ed013f0aeba963c8f;
extern PyObject *const_str_digest_6ce809eacf90ba125b40fa4bd903962e;
static PyObject *const_str_digest_6d2102122f8a73e152ec8af9f95f513e;
extern PyObject *const_str_digest_6f91d8e2487ef4b22be973547e3256ce;
extern PyObject *const_str_digest_758551d6d461af441d835f7d23f3be12;
static PyObject *const_str_digest_7666a8995cd67e440dd3e750376a0316;
extern PyObject *const_str_digest_82da08cae06897a215db1f3ea599b730;
extern PyObject *const_str_digest_8acec9b707fb08fa95386d8360c9e9fc;
static PyObject *const_str_digest_8b40701e10d24430f74e9d7df2dc18a7;
extern PyObject *const_str_digest_8c502b55d1a696af3bd6a84ff79122bf;
extern PyObject *const_str_digest_8daee860afb12937dc1f5ec4646035c2;
static PyObject *const_str_digest_97344a32ef1815ac51ed00e9fd9474c7;
extern PyObject *const_str_digest_9ee0065fb030b4d6c1f397a7967d740e;
extern PyObject *const_str_digest_ac719e6487ba32e132f9bd3899f7dbcd;
extern PyObject *const_str_digest_b0db852c702255d781b62d43833a84e9;
extern PyObject *const_str_digest_b3256b58bf2b478cd81d90e27e3282d2;
extern PyObject *const_str_digest_c06ba646398ac2139f7dc22a7c880f70;
extern PyObject *const_str_digest_c0ab1120b239d942b77d52b1ebe617bb;
extern PyObject *const_str_digest_c0fff8163aabf90b654f2f3ba03fe760;
extern PyObject *const_str_digest_d26e0a82bef27643030272f7ebabd7e2;
extern PyObject *const_str_digest_db5bfec63bd14f8434476719cf705ad5;
static PyObject *const_str_digest_e5a45ad5e03da6973e11be84f98cc906;
extern PyObject *const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1;
extern PyObject *const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc;
static PyObject *const_str_digest_ec893437fee87c799d7d05a01c2e655b;
static PyObject *const_str_digest_f009f74be943bb832805e55aa2dfff60;
static PyObject *const_tuple_2b661c2dd5de156dc0ffa03cfe853cdc_tuple;
static PyObject *const_tuple_32e5c084ab1b4692985127a7925d549a_tuple;
static PyObject *const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple;
extern PyObject *const_tuple_9608cb38ad8cfabaffebc40aea72718c_tuple;
static PyObject *const_tuple_9d96976babf556d15c456c7216b3a323_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple;
static PyObject *const_tuple_dd6f066290cb1550add1b02b155df829_tuple;
static PyObject *const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple;
static PyObject *const_tuple_f04dded3545b09309f299bcd811a3c64_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_sources_tuple;
extern PyObject *const_tuple_str_plain_show_fortran_compilers_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_c_sources_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_incl_dirs_tuple;
extern PyObject *const_list_tuple_9608cb38ad8cfabaffebc40aea72718c_tuple_list;
static PyObject *const_tuple_str_plain_self_str_plain_filenames_str_plain_ext_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_clibs = UNSTREAM_STRING( &constant_bin[ 86166 ], 5, 1 );
    const_str_plain_c_libs = UNSTREAM_STRING( &constant_bin[ 86249 ], 6, 1 );
    const_str_plain_dst_name = UNSTREAM_STRING( &constant_bin[ 898813 ], 8, 1 );
    const_str_plain_have_run = UNSTREAM_STRING( &constant_bin[ 898821 ], 8, 1 );
    const_str_plain_c_objects = UNSTREAM_STRING( &constant_bin[ 86991 ], 9, 1 );
    const_str_plain_c_lib_dirs = UNSTREAM_STRING( &constant_bin[ 86301 ], 10, 1 );
    const_str_plain_f_lib_dirs = UNSTREAM_STRING( &constant_bin[ 87367 ], 10, 1 );
    const_str_plain_new_c_libs = UNSTREAM_STRING( &constant_bin[ 898829 ], 10, 1 );
    const_str_plain_c_libraries = UNSTREAM_STRING( &constant_bin[ 87156 ], 11, 1 );
    const_str_plain_ext_filename = UNSTREAM_STRING( &constant_bin[ 87098 ], 12, 1 );
    const_str_plain_ext_language = UNSTREAM_STRING( &constant_bin[ 86357 ], 12, 1 );
    const_str_plain__cxx_compiler = UNSTREAM_STRING( &constant_bin[ 80280 ], 13, 1 );
    const_str_plain__f77_compiler = UNSTREAM_STRING( &constant_bin[ 898839 ], 13, 1 );
    const_str_plain__f90_compiler = UNSTREAM_STRING( &constant_bin[ 86764 ], 13, 1 );
    const_str_plain_all_languages = UNSTREAM_STRING( &constant_bin[ 86474 ], 13, 1 );
    const_str_plain_ext_languages = UNSTREAM_STRING( &constant_bin[ 86357 ], 13, 1 );
    const_str_plain_old_build_ext = UNSTREAM_STRING( &constant_bin[ 86023 ], 13, 1 );
    const_str_plain_c_library_dirs = UNSTREAM_STRING( &constant_bin[ 87213 ], 14, 1 );
    const_str_plain_build_extension = UNSTREAM_STRING( &constant_bin[ 898852 ], 15, 1 );
    const_str_plain_detect_language = UNSTREAM_STRING( &constant_bin[ 898867 ], 15, 1 );
    const_str_plain_build_extensions = UNSTREAM_STRING( &constant_bin[ 898882 ], 16, 1 );
    const_str_plain_need_cxx_compiler = UNSTREAM_STRING( &constant_bin[ 898898 ], 17, 1 );
    const_str_plain_need_f77_compiler = UNSTREAM_STRING( &constant_bin[ 898915 ], 17, 1 );
    const_str_plain_need_f90_compiler = UNSTREAM_STRING( &constant_bin[ 86760 ], 17, 1 );
    const_str_plain_get_export_symbols = UNSTREAM_STRING( &constant_bin[ 898932 ], 18, 1 );
    const_str_plain_link_shared_object = UNSTREAM_STRING( &constant_bin[ 898950 ], 18, 1 );
    const_str_plain__gfortran_workaround = UNSTREAM_STRING( &constant_bin[ 898968 ], 20, 1 );
    const_str_plain__add_dummy_mingwex_sym = UNSTREAM_STRING( &constant_bin[ 898988 ], 22, 1 );
    const_tuple_str_plain_combine_paths_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_combine_paths_tuple, 0, const_str_plain_combine_paths ); Py_INCREF( const_str_plain_combine_paths );
    const_str_plain__libs_with_msvc_and_fortran = UNSTREAM_STRING( &constant_bin[ 899010 ], 27, 1 );
    const_str_digest_05634a60dddb2fe80de1186eac51a144 = UNSTREAM_STRING( &constant_bin[ 899037 ], 45, 0 );
    const_str_digest_06b422385f239f2395aff6a1cd60f30c = UNSTREAM_STRING( &constant_bin[ 899082 ], 22, 0 );
    const_str_digest_0e4921df71b782b43adc42f393e09e46 = UNSTREAM_STRING( &constant_bin[ 899104 ], 76, 0 );
    const_str_digest_1df052269d46d0dc5e16228abf1fd40d = UNSTREAM_STRING( &constant_bin[ 899180 ], 33, 0 );
    const_str_digest_201403af0deb09e8bec50bbd0a2c735d = UNSTREAM_STRING( &constant_bin[ 899213 ], 23, 0 );
    const_str_digest_221332bda5cd3eaf5962caedaea1e20f = UNSTREAM_STRING( &constant_bin[ 899236 ], 77, 0 );
    const_str_digest_396a81a8b9a834ccc00d711bf4aad4fc = UNSTREAM_STRING( &constant_bin[ 899313 ], 106, 0 );
    const_str_digest_3f7da3abb6fade90660a79422b97e777 = UNSTREAM_STRING( &constant_bin[ 899419 ], 67, 0 );
    const_str_digest_42a310526012119baba197e135337e96 = UNSTREAM_STRING( &constant_bin[ 899486 ], 33, 0 );
    const_str_digest_44230834b9c86297da3e1dc3df076638 = UNSTREAM_STRING( &constant_bin[ 899519 ], 53, 0 );
    const_str_digest_4c2ffb8c6e769dbb360f42545a0ff959 = UNSTREAM_STRING( &constant_bin[ 899572 ], 84, 0 );
    const_str_digest_50858cbed80c4d4f595f41d02cb4e265 = UNSTREAM_STRING( &constant_bin[ 899656 ], 33, 0 );
    const_str_digest_5dbaa0bfeb851a15188fd28f4b8dca2d = UNSTREAM_STRING( &constant_bin[ 899689 ], 46, 0 );
    const_str_digest_6d2102122f8a73e152ec8af9f95f513e = UNSTREAM_STRING( &constant_bin[ 899735 ], 75, 0 );
    const_str_digest_7666a8995cd67e440dd3e750376a0316 = UNSTREAM_STRING( &constant_bin[ 899810 ], 7, 0 );
    const_str_digest_8b40701e10d24430f74e9d7df2dc18a7 = UNSTREAM_STRING( &constant_bin[ 899817 ], 36, 0 );
    const_str_digest_97344a32ef1815ac51ed00e9fd9474c7 = UNSTREAM_STRING( &constant_bin[ 899853 ], 58, 0 );
    const_str_digest_e5a45ad5e03da6973e11be84f98cc906 = UNSTREAM_STRING( &constant_bin[ 899911 ], 62, 0 );
    const_str_digest_ec893437fee87c799d7d05a01c2e655b = UNSTREAM_STRING( &constant_bin[ 899973 ], 69, 0 );
    const_str_digest_f009f74be943bb832805e55aa2dfff60 = UNSTREAM_STRING( &constant_bin[ 900042 ], 45, 0 );
    const_tuple_2b661c2dd5de156dc0ffa03cfe853cdc_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_2b661c2dd5de156dc0ffa03cfe853cdc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2b661c2dd5de156dc0ffa03cfe853cdc_tuple, 1, const_str_plain_fcompiler ); Py_INCREF( const_str_plain_fcompiler );
    PyTuple_SET_ITEM( const_tuple_2b661c2dd5de156dc0ffa03cfe853cdc_tuple, 2, const_str_plain_c_libraries ); Py_INCREF( const_str_plain_c_libraries );
    PyTuple_SET_ITEM( const_tuple_2b661c2dd5de156dc0ffa03cfe853cdc_tuple, 3, const_str_plain_c_library_dirs ); Py_INCREF( const_str_plain_c_library_dirs );
    const_tuple_32e5c084ab1b4692985127a7925d549a_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 900087 ], 480 );
    const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 1, const_str_plain_fcompiler ); Py_INCREF( const_str_plain_fcompiler );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 2, const_str_plain_c_libraries ); Py_INCREF( const_str_plain_c_libraries );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 3, const_str_plain_c_library_dirs ); Py_INCREF( const_str_plain_c_library_dirs );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 4, const_str_plain_libname ); Py_INCREF( const_str_plain_libname );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 5, const_str_plain_fileexists ); Py_INCREF( const_str_plain_fileexists );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 6, const_str_plain_libdir ); Py_INCREF( const_str_plain_libdir );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 7, const_str_plain_libfile ); Py_INCREF( const_str_plain_libfile );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 8, const_str_plain_libfile2 ); Py_INCREF( const_str_plain_libfile2 );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 9, const_str_plain_f_lib_dirs ); Py_INCREF( const_str_plain_f_lib_dirs );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 10, const_str_plain_dir ); Py_INCREF( const_str_plain_dir );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 11, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 12, const_str_plain_o ); Py_INCREF( const_str_plain_o );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 13, const_str_plain_lib ); Py_INCREF( const_str_plain_lib );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 14, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 15, const_str_plain_dst_name ); Py_INCREF( const_str_plain_dst_name );
    const_tuple_9d96976babf556d15c456c7216b3a323_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 0, const_str_plain_filter_sources ); Py_INCREF( const_str_plain_filter_sources );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 1, const_str_plain_has_f_sources ); Py_INCREF( const_str_plain_has_f_sources );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 2, const_str_plain_has_cxx_sources ); Py_INCREF( const_str_plain_has_cxx_sources );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 3, const_str_plain_get_ext_source_files ); Py_INCREF( const_str_plain_get_ext_source_files );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 4, const_str_plain_get_numpy_include_dirs ); Py_INCREF( const_str_plain_get_numpy_include_dirs );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 5, const_str_plain_is_sequence ); Py_INCREF( const_str_plain_is_sequence );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 6, const_str_plain_get_build_architecture ); Py_INCREF( const_str_plain_get_build_architecture );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 7, const_str_plain_msvc_version ); Py_INCREF( const_str_plain_msvc_version );
    const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple, 1, const_str_plain_outputs ); Py_INCREF( const_str_plain_outputs );
    PyTuple_SET_ITEM( const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple, 2, const_str_plain_ext ); Py_INCREF( const_str_plain_ext );
    PyTuple_SET_ITEM( const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple, 3, const_str_plain_fullname ); Py_INCREF( const_str_plain_fullname );
    const_tuple_dd6f066290cb1550add1b02b155df829_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 900567 ], 357 );
    const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple, 0, const_str_plain_DistutilsFileError ); Py_INCREF( const_str_plain_DistutilsFileError );
    PyTuple_SET_ITEM( const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple, 1, const_str_plain_DistutilsSetupError ); Py_INCREF( const_str_plain_DistutilsSetupError );
    PyTuple_SET_ITEM( const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple, 2, const_str_plain_DistutilsError ); Py_INCREF( const_str_plain_DistutilsError );
    const_tuple_f04dded3545b09309f299bcd811a3c64_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f04dded3545b09309f299bcd811a3c64_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f04dded3545b09309f299bcd811a3c64_tuple, 1, const_str_plain_c_sources ); Py_INCREF( const_str_plain_c_sources );
    PyTuple_SET_ITEM( const_tuple_f04dded3545b09309f299bcd811a3c64_tuple, 2, const_str_plain_build_src ); Py_INCREF( const_str_plain_build_src );
    PyTuple_SET_ITEM( const_tuple_f04dded3545b09309f299bcd811a3c64_tuple, 3, const_str_plain_build_clib ); Py_INCREF( const_str_plain_build_clib );
    PyTuple_SET_ITEM( const_tuple_f04dded3545b09309f299bcd811a3c64_tuple, 4, const_str_plain_objects ); Py_INCREF( const_str_plain_objects );
    const_tuple_str_plain_self_str_plain_c_sources_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_c_sources_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_c_sources_tuple, 1, const_str_plain_c_sources ); Py_INCREF( const_str_plain_c_sources );
    const_tuple_str_plain_self_str_plain_incl_dirs_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_incl_dirs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_incl_dirs_tuple, 1, const_str_plain_incl_dirs ); Py_INCREF( const_str_plain_incl_dirs );
    const_tuple_str_plain_self_str_plain_filenames_str_plain_ext_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_filenames_str_plain_ext_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_filenames_str_plain_ext_tuple, 1, const_str_plain_filenames ); Py_INCREF( const_str_plain_filenames );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_filenames_str_plain_ext_tuple, 2, const_str_plain_ext ); Py_INCREF( const_str_plain_ext );
}

// The module code objects.
static PyCodeObject *codeobj_1c7e26164ec7f8dad1de484a15669784;
static PyCodeObject *codeobj_00f7011a87204026976182732eebc3f4;
static PyCodeObject *codeobj_33060f533469ab29d646bf99d0635b74;
static PyCodeObject *codeobj_922c840479f53dbbbae8ad6dd688aa26;
static PyCodeObject *codeobj_3c744a44fa6f15c1cfbf030cb5aaa3af;
static PyCodeObject *codeobj_bf6e54a9f93505f45f2ad64e424d0843;
static PyCodeObject *codeobj_c99653d107410727c2b868902a957edd;
static PyCodeObject *codeobj_58489f9e855ecc2fc22e0fd53c4c78c7;
static PyCodeObject *codeobj_c7518153148bd3ef30c34850062b8a3f;
static PyCodeObject *codeobj_65619a90cc71326cdff6702e381b0541;
static PyCodeObject *codeobj_28cbb6cddce7bb282d25ca60820e129b;
static PyCodeObject *codeobj_97fa0e12cabfa0c53fec6a5dfb4209d7;
static PyCodeObject *codeobj_4b98c97026217655487cded716ecf63f;
static PyCodeObject *codeobj_80be05a059ccfa7fd2711db2137f474a;
static PyCodeObject *codeobj_72cc4542990c329ceeba7ab6277f32bc;
static PyCodeObject *codeobj_23b211cdac798983db5f931679d54568;
static PyCodeObject *codeobj_2e7ab93f79a53a6cf61ebd7304a8a32b;
static PyCodeObject *codeobj_12d2d864317dab8ab1ecee0aea14710b;

static void _initModuleCodeObjects(void)
{
    codeobj_1c7e26164ec7f8dad1de484a15669784 = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain__add_dummy_mingwex_sym, 424, const_tuple_str_plain_self_str_plain_c_sources_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_00f7011a87204026976182732eebc3f4 = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain__add_dummy_mingwex_sym, 424, const_tuple_f04dded3545b09309f299bcd811a3c64_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_33060f533469ab29d646bf99d0635b74 = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain__libs_with_msvc_and_fortran, 432, const_tuple_2b661c2dd5de156dc0ffa03cfe853cdc_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_922c840479f53dbbbae8ad6dd688aa26 = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain__libs_with_msvc_and_fortran, 432, const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3c744a44fa6f15c1cfbf030cb5aaa3af = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_build_ext, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bf6e54a9f93505f45f2ad64e424d0843 = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_build_ext, 30, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c99653d107410727c2b868902a957edd = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_build_extension, 241, const_tuple_str_plain_self_str_plain_ext_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_58489f9e855ecc2fc22e0fd53c4c78c7 = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_build_extension, 241, const_tuple_32e5c084ab1b4692985127a7925d549a_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c7518153148bd3ef30c34850062b8a3f = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_finalize_options, 48, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_65619a90cc71326cdff6702e381b0541 = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_finalize_options, 48, const_tuple_str_plain_self_str_plain_incl_dirs_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_28cbb6cddce7bb282d25ca60820e129b = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_get_outputs, 493, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_97fa0e12cabfa0c53fec6a5dfb4209d7 = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_get_outputs, 493, const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4b98c97026217655487cded716ecf63f = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_get_source_files, 486, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_80be05a059ccfa7fd2711db2137f474a = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_get_source_files, 486, const_tuple_str_plain_self_str_plain_filenames_str_plain_ext_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_72cc4542990c329ceeba7ab6277f32bc = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_initialize_options, 44, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_23b211cdac798983db5f931679d54568 = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_run, 54, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2e7ab93f79a53a6cf61ebd7304a8a32b = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_run, 54, const_tuple_dd6f066290cb1550add1b02b155df829_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_12d2d864317dab8ab1ecee0aea14710b = MAKE_CODEOBJ( const_str_digest_ec893437fee87c799d7d05a01c2e655b, const_str_plain_swig_sources, 237, const_tuple_str_plain_self_str_plain_sources_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );


NUITKA_CROSS_MODULE PyObject *impl_function_5_complex_call_helper_pos_keywords_star_dict_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_kw, PyObject *_python_par_star_arg_dict );


static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_2_finalize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_3_run_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_4_swig_sources_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_5_build_extension_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_8_get_source_files_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_9_get_outputs_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var_description;
    PyObjectLocalVariable var_user_options;
    PyObjectLocalVariable var_help_options;
    PyObjectLocalVariable var_initialize_options;
    PyObjectLocalVariable var_finalize_options;
    PyObjectLocalVariable var_run;
    PyObjectLocalVariable var_swig_sources;
    PyObjectLocalVariable var_build_extension;
    PyObjectLocalVariable var__add_dummy_mingwex_sym;
    PyObjectLocalVariable var__libs_with_msvc_and_fortran;
    PyObjectLocalVariable var_get_source_files;
    PyObjectLocalVariable var_get_outputs;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_42a310526012119baba197e135337e96;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_97344a32ef1815ac51ed00e9fd9474c7;
    assert( var_description.object == NULL );
    var_description.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bf6e54a9f93505f45f2ad64e424d0843, module_numpy$distutils$command$build_ext );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_old_build_ext );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_build_ext );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86052 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_user_options );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = LIST_COPY( const_list_tuple_9608cb38ad8cfabaffebc40aea72718c_tuple_list );
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    assert( var_user_options.object == NULL );
    var_user_options.object = tmp_assign_source_3;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_old_build_ext );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_build_ext );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86052 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_help_options );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_2 = PyList_New( 1 );
    tmp_list_element_1 = PyTuple_New( 4 );
    tmp_tuple_element_1 = const_str_digest_4e1df17c1b7cdf4d421633c2f6340f5b;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_digest_82da08cae06897a215db1f3ea599b730;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_show_fortran_compilers );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_show_fortran_compilers );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        Py_DECREF( tmp_binop_right_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84232 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 3, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_binop_right_2, 0, tmp_list_element_1 );
    tmp_assign_source_4 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    assert( var_help_options.object == NULL );
    var_help_options.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_1_initialize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    assert( var_initialize_options.object == NULL );
    var_initialize_options.object = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_2_finalize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    assert( var_finalize_options.object == NULL );
    var_finalize_options.object = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_3_run_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    assert( var_run.object == NULL );
    var_run.object = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_4_swig_sources_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    assert( var_swig_sources.object == NULL );
    var_swig_sources.object = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_5_build_extension_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    assert( var_build_extension.object == NULL );
    var_build_extension.object = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }
    assert( var__add_dummy_mingwex_sym.object == NULL );
    var__add_dummy_mingwex_sym.object = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_function->f_lineno = 432;
        goto frame_exception_exit_1;
    }
    assert( var__libs_with_msvc_and_fortran.object == NULL );
    var__libs_with_msvc_and_fortran.object = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_function_8_get_source_files_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_12 );

        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }
    assert( var_get_source_files.object == NULL );
    var_get_source_files.object = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_function_9_get_outputs_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_13 );

        frame_function->f_lineno = 493;
        goto frame_exception_exit_1;
    }
    assert( var_get_outputs.object == NULL );
    var_get_outputs.object = tmp_assign_source_13;


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
    if ((var_description.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_description,
            var_description.object
        );

    }
    if ((var_user_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_user_options,
            var_user_options.object
        );

    }
    if ((var_help_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_help_options,
            var_help_options.object
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
    if ((var_finalize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_finalize_options,
            var_finalize_options.object
        );

    }
    if ((var_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_run,
            var_run.object
        );

    }
    if ((var_swig_sources.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_swig_sources,
            var_swig_sources.object
        );

    }
    if ((var_build_extension.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build_extension,
            var_build_extension.object
        );

    }
    if ((var__add_dummy_mingwex_sym.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__add_dummy_mingwex_sym,
            var__add_dummy_mingwex_sym.object
        );

    }
    if ((var__libs_with_msvc_and_fortran.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__libs_with_msvc_and_fortran,
            var__libs_with_msvc_and_fortran.object
        );

    }
    if ((var_get_source_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_get_source_files,
            var_get_source_files.object
        );

    }
    if ((var_get_outputs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_get_outputs,
            var_get_outputs.object
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
    if ((var_description.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_description,
            var_description.object
        );

    }
    if ((var_user_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_user_options,
            var_user_options.object
        );

    }
    if ((var_help_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_help_options,
            var_help_options.object
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
    if ((var_finalize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_finalize_options,
            var_finalize_options.object
        );

    }
    if ((var_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_run,
            var_run.object
        );

    }
    if ((var_swig_sources.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_swig_sources,
            var_swig_sources.object
        );

    }
    if ((var_build_extension.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_build_extension,
            var_build_extension.object
        );

    }
    if ((var__add_dummy_mingwex_sym.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__add_dummy_mingwex_sym,
            var__add_dummy_mingwex_sym.object
        );

    }
    if ((var__libs_with_msvc_and_fortran.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__libs_with_msvc_and_fortran,
            var__libs_with_msvc_and_fortran.object
        );

    }
    if ((var_get_source_files.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_get_source_files,
            var_get_source_files.object
        );

    }
    if ((var_get_outputs.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_get_outputs,
            var_get_outputs.object
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


static PyObject *impl_function_1_initialize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject *_python_par_self )
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_72cc4542990c329ceeba7ab6277f32bc, module_numpy$distutils$command$build_ext );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_old_build_ext );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_build_ext );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86052 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_initialize_options );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_self.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 45;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_fcompiler, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
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
static PyObject *fparse_function_1_initialize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1_initialize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1_initialize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_initialize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_initialize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_finalize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_incl_dirs;
    PyObjectTempVariable tmp_or_1__value_1;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c7518153148bd3ef30c34850062b8a3f, module_numpy$distutils$command$build_ext );
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

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_include_dirs );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    assert( var_incl_dirs.object == NULL );
    var_incl_dirs.object = tmp_assign_source_1;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_old_build_ext );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_build_ext );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86052 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_finalize_options );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_self.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 50;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_1 = var_incl_dirs.object;

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
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_include_dirs );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extend );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = NULL;
    // Tried code
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = NULL;
    // Tried code
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 52;
        goto try_finally_handler_2;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_distribution );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 52;
        goto try_finally_handler_2;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_include_dirs );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 52;
        goto try_finally_handler_2;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_2;

    tmp_cond_value_1 = tmp_or_1__value_1.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 52;
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
    tmp_tuple_element_1 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_tuple_element_1 );
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
    tmp_tuple_element_1 = PyList_New( 0 );
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
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
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
    frame_function->f_lineno = 52;
    tmp_unused = CALL_FUNCTION_WITH_POSARGS( tmp_called_2, tmp_call_pos_1 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_pos_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 52;
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
    if ((var_incl_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_incl_dirs,
            var_incl_dirs.object
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
static PyObject *fparse_function_2_finalize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "finalize_options() keywords must be strings" );
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
                   "finalize_options() got an unexpected keyword argument '%s'",
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


    return impl_function_2_finalize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_finalize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_finalize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_finalize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_run_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_build_clib;
    PyObjectLocalVariable var_new_compiler;
    PyObjectLocalVariable var_new_fcompiler;
    PyObjectLocalVariable var_compiler_type;
    PyObjectLocalVariable var_clibs;
    PyObjectLocalVariable var_libname;
    PyObjectLocalVariable var_build_info;
    PyObjectLocalVariable var_all_languages;
    PyObjectLocalVariable var_ext;
    PyObjectLocalVariable var_ext_languages;
    PyObjectLocalVariable var_c_libs;
    PyObjectLocalVariable var_c_lib_dirs;
    PyObjectLocalVariable var_macros;
    PyObjectLocalVariable var_binfo;
    PyObjectLocalVariable var_m;
    PyObjectLocalVariable var_l;
    PyObjectLocalVariable var_new_c_libs;
    PyObjectLocalVariable var_ext_language;
    PyObjectLocalVariable var_need_f90_compiler;
    PyObjectLocalVariable var_need_f77_compiler;
    PyObjectLocalVariable var_need_cxx_compiler;
    PyObjectLocalVariable var_compiler;
    PyObjectLocalVariable var_ctype;
    PyObjectLocalVariable var_fcompiler;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_for_loop_4__for_iterator;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_end;
    PyObjectTempVariable tmp_for_loop_5__for_iterator;
    PyObjectTempVariable tmp_for_loop_5__iter_value;
    PyObjectTempVariable tmp_for_loop_6__for_iterator;
    PyObjectTempVariable tmp_for_loop_6__iter_value;
    PyObjectTempVariable tmp_or_3__value_1;
    PyObjectTempVariable tmp_and_2__value_1;
    PyObjectTempVariable tmp_and_2__value_2;
    PyObjectTempVariable tmp_and_3__value_1;
    PyObjectTempVariable tmp_and_4__value_1;
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
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_name_15;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
    PyObject *tmp_assattr_target_14;
    PyObject *tmp_assattr_target_15;
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
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
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
    PyObject *tmp_call_arg_element_17;
    PyObject *tmp_call_arg_element_18;
    PyObject *tmp_call_arg_element_19;
    PyObject *tmp_call_arg_element_20;
    PyObject *tmp_call_arg_element_21;
    PyObject *tmp_call_arg_element_22;
    PyObject *tmp_call_arg_element_23;
    PyObject *tmp_call_arg_element_24;
    PyObject *tmp_call_arg_element_25;
    PyObject *tmp_call_arg_element_26;
    PyObject *tmp_call_arg_element_27;
    PyObject *tmp_call_arg_element_28;
    PyObject *tmp_call_arg_element_29;
    PyObject *tmp_call_arg_element_30;
    PyObject *tmp_call_arg_element_31;
    PyObject *tmp_call_arg_element_32;
    PyObject *tmp_call_arg_element_33;
    PyObject *tmp_call_arg_element_34;
    PyObject *tmp_call_arg_element_35;
    PyObject *tmp_call_arg_element_36;
    PyObject *tmp_call_arg_element_37;
    PyObject *tmp_call_arg_element_38;
    PyObject *tmp_call_arg_element_39;
    PyObject *tmp_call_arg_element_40;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_kw_4;
    PyObject *tmp_call_kw_5;
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
    PyObject *tmp_called_25;
    PyObject *tmp_called_26;
    PyObject *tmp_called_27;
    PyObject *tmp_called_28;
    PyObject *tmp_called_29;
    PyObject *tmp_called_30;
    PyObject *tmp_called_31;
    PyObject *tmp_called_32;
    PyObject *tmp_called_33;
    PyObject *tmp_called_34;
    PyObject *tmp_called_35;
    PyObject *tmp_called_36;
    PyObject *tmp_called_37;
    PyObject *tmp_called_38;
    PyObject *tmp_called_39;
    PyObject *tmp_called_40;
    PyObject *tmp_called_41;
    PyObject *tmp_called_42;
    PyObject *tmp_called_43;
    PyObject *tmp_called_44;
    PyObject *tmp_called_45;
    PyObject *tmp_called_46;
    PyObject *tmp_called_47;
    PyObject *tmp_called_48;
    PyObject *tmp_called_49;
    PyObject *tmp_called_50;
    PyObject *tmp_called_51;
    PyObject *tmp_called_52;
    PyObject *tmp_called_53;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
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
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
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
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
    int tmp_cond_truth_20;
    int tmp_cond_truth_21;
    int tmp_cond_truth_22;
    int tmp_cond_truth_23;
    int tmp_cond_truth_24;
    int tmp_cond_truth_25;
    int tmp_cond_truth_26;
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
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
    PyObject *tmp_cond_value_20;
    PyObject *tmp_cond_value_21;
    PyObject *tmp_cond_value_22;
    PyObject *tmp_cond_value_23;
    PyObject *tmp_cond_value_24;
    PyObject *tmp_cond_value_25;
    PyObject *tmp_cond_value_26;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
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
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_source_name_48;
    PyObject *tmp_source_name_49;
    PyObject *tmp_source_name_50;
    PyObject *tmp_source_name_51;
    PyObject *tmp_source_name_52;
    PyObject *tmp_source_name_53;
    PyObject *tmp_source_name_54;
    PyObject *tmp_source_name_55;
    PyObject *tmp_source_name_56;
    PyObject *tmp_source_name_57;
    PyObject *tmp_source_name_58;
    PyObject *tmp_source_name_59;
    PyObject *tmp_source_name_60;
    PyObject *tmp_source_name_61;
    PyObject *tmp_source_name_62;
    PyObject *tmp_source_name_63;
    PyObject *tmp_source_name_64;
    PyObject *tmp_source_name_65;
    PyObject *tmp_source_name_66;
    PyObject *tmp_source_name_67;
    PyObject *tmp_source_name_68;
    PyObject *tmp_source_name_69;
    PyObject *tmp_source_name_70;
    PyObject *tmp_source_name_71;
    PyObject *tmp_source_name_72;
    PyObject *tmp_source_name_73;
    PyObject *tmp_source_name_74;
    PyObject *tmp_source_name_75;
    PyObject *tmp_source_name_76;
    PyObject *tmp_source_name_77;
    PyObject *tmp_source_name_78;
    PyObject *tmp_source_name_79;
    PyObject *tmp_source_name_80;
    PyObject *tmp_source_name_81;
    PyObject *tmp_source_name_82;
    PyObject *tmp_source_name_83;
    PyObject *tmp_source_name_84;
    PyObject *tmp_source_name_85;
    PyObject *tmp_source_name_86;
    PyObject *tmp_source_name_87;
    PyObject *tmp_source_name_88;
    PyObject *tmp_source_name_89;
    PyObject *tmp_source_name_90;
    PyObject *tmp_source_name_91;
    PyObject *tmp_source_name_92;
    PyObject *tmp_source_name_93;
    PyObject *tmp_source_name_94;
    PyObject *tmp_source_name_95;
    PyObject *tmp_source_name_96;
    PyObject *tmp_source_name_97;
    PyObject *tmp_source_name_98;
    PyObject *tmp_source_name_99;
    PyObject *tmp_source_name_100;
    PyObject *tmp_source_name_101;
    PyObject *tmp_source_name_102;
    PyObject *tmp_source_name_103;
    PyObject *tmp_source_name_104;
    PyObject *tmp_source_name_105;
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
    int tmp_tried_lineno_16;
    int tmp_tried_lineno_17;
    int tmp_tried_lineno_18;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_23b211cdac798983db5f931679d54568, module_numpy$distutils$command$build_ext );
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

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extensions );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_run_command );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_build_src;
    frame_function->f_lineno = 59;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_distribution );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_has_c_libraries );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 61;
    tmp_cond_value_2 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_inplace );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 62;
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
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_distribution );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_have_run );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_get );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_build_clib;
    frame_function->f_lineno = 63;
    tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
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
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_warn );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_digest_221332bda5cd3eaf5962caedaea1e20f;
    frame_function->f_lineno = 64;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = par_self.object;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_distribution );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_get_command_obj );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_plain_build_clib;
    frame_function->f_lineno = 66;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    assert( var_build_clib.object == NULL );
    var_build_clib.object = tmp_assign_source_1;

    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_13 = par_self.object;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_distribution );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_get_command_obj );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_plain_build_clib;
    frame_function->f_lineno = 68;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    assert( var_build_clib.object == NULL );
    var_build_clib.object = tmp_assign_source_2;

    tmp_assattr_name_1 = const_int_pos_1;
    tmp_assattr_target_1 = var_build_clib.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_inplace, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = var_build_clib.object;

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_ensure_finalized );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 70;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_15 = var_build_clib.object;

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_run );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 71;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_1 = const_int_pos_1;
    tmp_source_name_17 = par_self.object;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }

    tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_distribution );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_have_run );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_plain_build_clib;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_18 = par_self.object;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_run_command );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = const_str_plain_build_clib;
    frame_function->f_lineno = 75;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_19 = par_self.object;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_get_finalized_command );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_build_clib;
    frame_function->f_lineno = 76;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    assert( var_build_clib.object == NULL );
    var_build_clib.object = tmp_assign_source_3;

    branch_end_3:;
    tmp_source_name_21 = par_self.object;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_library_dirs );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_append );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = var_build_clib.object;

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86094 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_build_clib );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 77;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_4 = Py_None;
    assert( var_build_clib.object == NULL );
    var_build_clib.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    branch_end_2:;
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_build_clib.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_build_clib,
            var_build_clib.object
        );

    }
    if ((var_new_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_new_compiler,
            var_new_compiler.object
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
    if ((var_compiler_type.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_compiler_type,
            var_compiler_type.object
        );

    }
    if ((var_clibs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_clibs,
            var_clibs.object
        );

    }
    if ((var_libname.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_libname,
            var_libname.object
        );

    }
    if ((var_build_info.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_build_info,
            var_build_info.object
        );

    }
    if ((var_all_languages.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_all_languages,
            var_all_languages.object
        );

    }
    if ((var_ext.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ext,
            var_ext.object
        );

    }
    if ((var_ext_languages.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ext_languages,
            var_ext_languages.object
        );

    }
    if ((var_c_libs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_c_libs,
            var_c_libs.object
        );

    }
    if ((var_c_lib_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_c_lib_dirs,
            var_c_lib_dirs.object
        );

    }
    if ((var_macros.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_macros,
            var_macros.object
        );

    }
    if ((var_binfo.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_binfo,
            var_binfo.object
        );

    }
    if ((var_m.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_m,
            var_m.object
        );

    }
    if ((var_l.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_l,
            var_l.object
        );

    }
    if ((var_new_c_libs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_new_c_libs,
            var_new_c_libs.object
        );

    }
    if ((var_ext_language.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ext_language,
            var_ext_language.object
        );

    }
    if ((var_need_f90_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_need_f90_compiler,
            var_need_f90_compiler.object
        );

    }
    if ((var_need_f77_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_need_f77_compiler,
            var_need_f77_compiler.object
        );

    }
    if ((var_need_cxx_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_need_cxx_compiler,
            var_need_cxx_compiler.object
        );

    }
    if ((var_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_compiler,
            var_compiler.object
        );

    }
    if ((var_ctype.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ctype,
            var_ctype.object
        );

    }
    if ((var_fcompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fcompiler,
            var_fcompiler.object
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
    frame_function->f_lineno = 86;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_8acec9b707fb08fa95386d8360c9e9fc, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_new_compiler_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_new_compiler );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    assert( var_new_compiler.object == NULL );
    var_new_compiler.object = tmp_assign_source_5;

    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_build_clib.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_build_clib,
            var_build_clib.object
        );

    }
    if ((var_new_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_new_compiler,
            var_new_compiler.object
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
    if ((var_compiler_type.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_compiler_type,
            var_compiler_type.object
        );

    }
    if ((var_clibs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_clibs,
            var_clibs.object
        );

    }
    if ((var_libname.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_libname,
            var_libname.object
        );

    }
    if ((var_build_info.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_build_info,
            var_build_info.object
        );

    }
    if ((var_all_languages.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_all_languages,
            var_all_languages.object
        );

    }
    if ((var_ext.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ext,
            var_ext.object
        );

    }
    if ((var_ext_languages.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ext_languages,
            var_ext_languages.object
        );

    }
    if ((var_c_libs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_c_libs,
            var_c_libs.object
        );

    }
    if ((var_c_lib_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_c_lib_dirs,
            var_c_lib_dirs.object
        );

    }
    if ((var_macros.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_macros,
            var_macros.object
        );

    }
    if ((var_binfo.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_binfo,
            var_binfo.object
        );

    }
    if ((var_m.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_m,
            var_m.object
        );

    }
    if ((var_l.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_l,
            var_l.object
        );

    }
    if ((var_new_c_libs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_new_c_libs,
            var_new_c_libs.object
        );

    }
    if ((var_ext_language.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ext_language,
            var_ext_language.object
        );

    }
    if ((var_need_f90_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_need_f90_compiler,
            var_need_f90_compiler.object
        );

    }
    if ((var_need_f77_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_need_f77_compiler,
            var_need_f77_compiler.object
        );

    }
    if ((var_need_cxx_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_need_cxx_compiler,
            var_need_cxx_compiler.object
        );

    }
    if ((var_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_compiler,
            var_compiler.object
        );

    }
    if ((var_ctype.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ctype,
            var_ctype.object
        );

    }
    if ((var_fcompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_fcompiler,
            var_fcompiler.object
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
    frame_function->f_lineno = 87;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_c0ab1120b239d942b77d52b1ebe617bb, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_new_fcompiler_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_new_fcompiler );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    assert( var_new_fcompiler.object == NULL );
    var_new_fcompiler.object = tmp_assign_source_6;

    tmp_source_name_23 = par_self.object;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_compiler );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    assert( var_compiler_type.object == NULL );
    var_compiler_type.object = tmp_assign_source_7;

    tmp_called_12 = var_new_compiler.object;

    tmp_call_kw_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = var_compiler_type.object;

    tmp_dict_key_1 = const_str_plain_compiler;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_source_name_24 = par_self.object;

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_verbose );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_verbose;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_source_name_25 = par_self.object;

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_dry_run );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_dry_run;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_source_name_26 = par_self.object;

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_force );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_force;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    frame_function->f_lineno = 94;
    tmp_assattr_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_12, tmp_call_kw_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_compiler, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_28 = par_self.object;

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_source_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_compiler );
    if ( tmp_source_name_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_customize );
    Py_DECREF( tmp_source_name_27 );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_source_name_29 = par_self.object;

    if ( tmp_source_name_29 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_distribution );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 95;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_31 = par_self.object;

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_source_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_compiler );
    if ( tmp_source_name_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_customize_cmd );
    Py_DECREF( tmp_source_name_30 );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = par_self.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 96;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_33 = par_self.object;

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_source_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_compiler );
    if ( tmp_source_name_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_show_customization );
    Py_DECREF( tmp_source_name_32 );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 97;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_15 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_8 = PyDict_New();
    assert( var_clibs.object == NULL );
    var_clibs.object = tmp_assign_source_8;

    tmp_compare_left_1 = var_build_clib.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86094 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if (tmp_isnot_1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_9 = NULL;
    // Tried code
    tmp_iter_arg_1 = NULL;
    // Tried code
    tmp_source_name_34 = var_build_clib.object;

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86094 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto try_finally_handler_2;
    }

    tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_libraries );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto try_finally_handler_2;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_10;

    tmp_cond_value_5 = tmp_or_1__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto try_finally_handler_2;
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
    tmp_iter_arg_1 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_iter_arg_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_iter_arg_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_iter_arg_1 = PyList_New( 0 );
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
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
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
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_9;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_11 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 102;
            goto try_finally_handler_4;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value.object;

    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_13 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 102;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_14 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_14 == NULL )
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


        frame_function->f_lineno = 102;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_14;
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

            goto try_finally_handler_5;
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

        goto try_finally_handler_5;
    }
    tmp_assign_source_15 = tmp_tuple_unpack_1__element_1.object;

    if (var_libname.object == NULL)
    {
        var_libname.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
    }
    else
    {
        PyObject *old = var_libname.object;
        var_libname.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
        Py_DECREF( old );
    }
    tmp_assign_source_16 = tmp_tuple_unpack_1__element_2.object;

    if (var_build_info.object == NULL)
    {
        var_build_info.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
    }
    else
    {
        PyObject *old = var_build_info.object;
        var_build_info.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
        Py_DECREF( old );
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
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_4;
    }

    goto finally_end_4;
    finally_end_4:;
    // Tried code
    tmp_cond_value_6 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_libname.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto try_finally_handler_7;
    }

    tmp_compexpr_right_1 = var_clibs.object;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86150 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto try_finally_handler_7;
    }

    tmp_assign_source_17 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto try_finally_handler_7;
    }
    if (tmp_and_1__value_1.object == NULL)
    {
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
    }
    else
    {
        PyObject *old = tmp_and_1__value_1.object;
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
        Py_DECREF( old );
    }
    tmp_cond_value_7 = tmp_and_1__value_1.object;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto try_finally_handler_7;
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
    tmp_cond_value_6 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_1 = var_clibs.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86150 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto try_finally_handler_8;
    }

    tmp_subscr_subscript_1 = var_libname.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto try_finally_handler_8;
    }

    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto try_finally_handler_8;
    }
    tmp_compexpr_right_2 = var_build_info.object;

    if ( tmp_compexpr_right_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84493 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto try_finally_handler_8;
    }

    tmp_cond_value_6 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto try_finally_handler_8;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
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

        goto try_finally_handler_7;
    }

    goto finally_end_5;
    finally_end_5:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_6 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_6 );
    condexpr_end_2:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_6;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        frame_function->f_lineno = 103;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_cond_value_6 );
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto try_finally_handler_6;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_warn );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto try_finally_handler_6;
    }
    tmp_binop_left_1 = const_str_digest_6d2102122f8a73e152ec8af9f95f513e;
    tmp_binop_right_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_libname.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 300;
    tmp_subscr_target_2 = var_clibs.object;

    if ( tmp_subscr_target_2 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86150 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto try_finally_handler_6;
    }

    tmp_subscr_subscript_2 = var_libname.object;

    if ( tmp_subscr_subscript_2 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto try_finally_handler_6;
    }

    tmp_unary_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 106;
        goto try_finally_handler_6;
    }
    tmp_slice_source_1 = UNARY_OPERATION( PyObject_Repr, tmp_unary_arg_1 );
    Py_DECREF( tmp_unary_arg_1 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 106;
        goto try_finally_handler_6;
    }
    tmp_tuple_element_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 106;
        goto try_finally_handler_6;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = 300;
    tmp_unary_arg_2 = var_build_info.object;

    if ( tmp_unary_arg_2 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84493 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto try_finally_handler_6;
    }

    tmp_slice_source_2 = UNARY_OPERATION( PyObject_Repr, tmp_unary_arg_2 );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 106;
        goto try_finally_handler_6;
    }
    tmp_tuple_element_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 106;
        goto try_finally_handler_6;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 2, tmp_tuple_element_1 );
    tmp_call_arg_element_11 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );

        frame_function->f_lineno = 104;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 104;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_16 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
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

        goto try_finally_handler_4;
    }

    goto finally_end_7;
    finally_end_7:;
    tmp_ass_subvalue_2 = var_build_info.object;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84493 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto try_finally_handler_4;
    }

    tmp_ass_subscribed_2 = var_clibs.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86150 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto try_finally_handler_4;
    }

    tmp_ass_subscript_2 = var_libname.object;

    if ( tmp_ass_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto try_finally_handler_4;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto try_finally_handler_4;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto try_finally_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
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

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto frame_exception_exit_1;
    }

    goto finally_end_8;
    finally_end_8:;
    branch_no_5:;
    tmp_assign_source_18 = NULL;
    // Tried code
    tmp_iter_arg_3 = NULL;
    // Tried code
    tmp_source_name_37 = par_self.object;

    if ( tmp_source_name_37 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 109;
        goto try_finally_handler_10;
    }

    tmp_source_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_distribution );
    if ( tmp_source_name_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto try_finally_handler_10;
    }
    tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_libraries );
    Py_DECREF( tmp_source_name_36 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto try_finally_handler_10;
    }
    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = tmp_assign_source_19;

    tmp_cond_value_8 = tmp_or_2__value_1.object;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto try_finally_handler_10;
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
    tmp_iter_arg_3 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_iter_arg_3 );
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_iter_arg_3 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_iter_arg_3 = PyList_New( 0 );
    // Re-reraise as necessary after finally was executed.
    goto finally_end_9;
    finally_end_9:;
    condexpr_end_3:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto try_finally_handler_9;
    }

    goto finally_end_10;
    finally_end_10:;
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto try_finally_handler_9;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto frame_exception_exit_1;
    }

    goto finally_end_11;
    finally_end_11:;
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_18;

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
        frame_function->f_lineno = 109;
            goto try_finally_handler_12;
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
    // Tried code
    tmp_iter_arg_4 = tmp_for_loop_2__iter_value.object;

    tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto try_finally_handler_13;
    }
    if (tmp_tuple_unpack_2__source_iter.object == NULL)
    {
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_21;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter.object;
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_21;
        Py_DECREF( old );
    }
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_22 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_22 == NULL )
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


        frame_function->f_lineno = 109;
        goto try_finally_handler_13;
    }
    if (tmp_tuple_unpack_2__element_1.object == NULL)
    {
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_22;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_1.object;
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_22;
        Py_DECREF( old );
    }
    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_23 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_23 == NULL )
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


        frame_function->f_lineno = 109;
        goto try_finally_handler_13;
    }
    if (tmp_tuple_unpack_2__element_2.object == NULL)
    {
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_23;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_2.object;
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_23;
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

            goto try_finally_handler_13;
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

        goto try_finally_handler_13;
    }
    tmp_assign_source_24 = tmp_tuple_unpack_2__element_1.object;

    if (var_libname.object == NULL)
    {
        var_libname.object = INCREASE_REFCOUNT( tmp_assign_source_24 );
    }
    else
    {
        PyObject *old = var_libname.object;
        var_libname.object = INCREASE_REFCOUNT( tmp_assign_source_24 );
        Py_DECREF( old );
    }
    tmp_assign_source_25 = tmp_tuple_unpack_2__element_2.object;

    if (var_build_info.object == NULL)
    {
        var_build_info.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
    }
    else
    {
        PyObject *old = var_build_info.object;
        var_build_info.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_13:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2.object );
    tmp_tuple_unpack_2__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto try_finally_handler_12;
    }

    goto finally_end_12;
    finally_end_12:;
    tmp_compare_left_2 = var_libname.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto try_finally_handler_12;
    }

    tmp_compare_right_2 = var_clibs.object;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86150 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto try_finally_handler_12;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto try_finally_handler_12;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    goto loop_start_2;
    branch_no_7:;
    tmp_ass_subvalue_3 = var_build_info.object;

    if ( tmp_ass_subvalue_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84493 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
        goto try_finally_handler_12;
    }

    tmp_ass_subscribed_3 = var_clibs.object;

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86150 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
        goto try_finally_handler_12;
    }

    tmp_ass_subscript_3 = var_libname.object;

    if ( tmp_ass_subscript_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
        goto try_finally_handler_12;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 113;
        goto try_finally_handler_12;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto try_finally_handler_12;
    }
    goto loop_start_2;
    loop_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
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

    goto finally_end_13;
    finally_end_13:;
    tmp_called_17 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_set );

    if (unlikely( tmp_called_17 == NULL ))
    {
        tmp_called_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set );
    }

    if ( tmp_called_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86201 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 117;
    tmp_assign_source_26 = CALL_FUNCTION_NO_ARGS( tmp_called_17 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    assert( var_all_languages.object == NULL );
    var_all_languages.object = tmp_assign_source_26;

    tmp_source_name_38 = par_self.object;

    if ( tmp_source_name_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_5 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_extensions );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator.object == NULL );
    tmp_for_loop_3__for_iterator.object = tmp_assign_source_27;

    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_28 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_28 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 118;
            goto try_finally_handler_14;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_28;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_28;
        Py_DECREF( old );
    }
    tmp_assign_source_29 = tmp_for_loop_3__iter_value.object;

    if (var_ext.object == NULL)
    {
        var_ext.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
    }
    else
    {
        PyObject *old = var_ext.object;
        var_ext.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
        Py_DECREF( old );
    }
    tmp_called_18 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_set );

    if (unlikely( tmp_called_18 == NULL ))
    {
        tmp_called_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set );
    }

    if ( tmp_called_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86201 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto try_finally_handler_14;
    }

    frame_function->f_lineno = 119;
    tmp_assign_source_30 = CALL_FUNCTION_NO_ARGS( tmp_called_18 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_14;
    }
    if (var_ext_languages.object == NULL)
    {
        var_ext_languages.object = tmp_assign_source_30;
    }
    else
    {
        PyObject *old = var_ext_languages.object;
        var_ext_languages.object = tmp_assign_source_30;
        Py_DECREF( old );
    }
    tmp_assign_source_31 = PyList_New( 0 );
    if (var_c_libs.object == NULL)
    {
        var_c_libs.object = tmp_assign_source_31;
    }
    else
    {
        PyObject *old = var_c_libs.object;
        var_c_libs.object = tmp_assign_source_31;
        Py_DECREF( old );
    }
    tmp_assign_source_32 = PyList_New( 0 );
    if (var_c_lib_dirs.object == NULL)
    {
        var_c_lib_dirs.object = tmp_assign_source_32;
    }
    else
    {
        PyObject *old = var_c_lib_dirs.object;
        var_c_lib_dirs.object = tmp_assign_source_32;
        Py_DECREF( old );
    }
    tmp_assign_source_33 = PyList_New( 0 );
    if (var_macros.object == NULL)
    {
        var_macros.object = tmp_assign_source_33;
    }
    else
    {
        PyObject *old = var_macros.object;
        var_macros.object = tmp_assign_source_33;
        Py_DECREF( old );
    }
    tmp_source_name_39 = var_ext.object;

    tmp_iter_arg_6 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_libraries );
    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto try_finally_handler_14;
    }
    tmp_assign_source_34 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto try_finally_handler_14;
    }
    if (tmp_for_loop_4__for_iterator.object == NULL)
    {
        tmp_for_loop_4__for_iterator.object = tmp_assign_source_34;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__for_iterator.object;
        tmp_for_loop_4__for_iterator.object = tmp_assign_source_34;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator.object;

    tmp_assign_source_35 = ITERATOR_NEXT( tmp_next_source_4 );
    if (tmp_assign_source_35 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_4;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 123;
            goto try_finally_handler_15;
        }
    }

    if (tmp_for_loop_4__iter_value.object == NULL)
    {
        tmp_for_loop_4__iter_value.object = tmp_assign_source_35;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__iter_value.object;
        tmp_for_loop_4__iter_value.object = tmp_assign_source_35;
        Py_DECREF( old );
    }
    tmp_assign_source_36 = tmp_for_loop_4__iter_value.object;

    if (var_libname.object == NULL)
    {
        var_libname.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
    }
    else
    {
        PyObject *old = var_libname.object;
        var_libname.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
        Py_DECREF( old );
    }
    tmp_compare_left_3 = var_libname.object;

    tmp_compare_right_3 = var_clibs.object;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86150 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 124;
        goto try_finally_handler_15;
    }

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 124;
        goto try_finally_handler_15;
    }
    if (tmp_cmp_In_2 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_subscr_target_3 = var_clibs.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86150 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 125;
        goto try_finally_handler_15;
    }

    tmp_subscr_subscript_3 = var_libname.object;

    tmp_assign_source_37 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto try_finally_handler_15;
    }
    if (var_binfo.object == NULL)
    {
        var_binfo.object = tmp_assign_source_37;
    }
    else
    {
        PyObject *old = var_binfo.object;
        var_binfo.object = tmp_assign_source_37;
        Py_DECREF( old );
    }
    tmp_assign_source_38 = var_c_libs.object;

    if ( tmp_assign_source_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86233 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto try_finally_handler_15;
    }

    if (tmp_inplace_assign_1__inplace_start.object == NULL)
    {
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_38 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_start.object;
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_38 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_2 = tmp_inplace_assign_1__inplace_start.object;

    tmp_source_name_40 = var_binfo.object;

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_get );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_12 = const_str_plain_libraries;
    tmp_call_arg_element_13 = PyList_New( 0 );
    frame_function->f_lineno = 126;
    tmp_binop_right_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_19, tmp_call_arg_element_12, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_19 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto try_finally_handler_16;
    }
    tmp_assign_source_39 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto try_finally_handler_16;
    }
    if (tmp_inplace_assign_1__inplace_end.object == NULL)
    {
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_39;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_end.object;
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_39;
        Py_DECREF( old );
    }
    tmp_compare_left_4 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_4 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_2 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if (tmp_isnot_2)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assign_source_40 = tmp_inplace_assign_1__inplace_end.object;

    if (var_c_libs.object == NULL)
    {
        var_c_libs.object = INCREASE_REFCOUNT( tmp_assign_source_40 );
    }
    else
    {
        PyObject *old = var_c_libs.object;
        var_c_libs.object = INCREASE_REFCOUNT( tmp_assign_source_40 );
        Py_DECREF( old );
    }
    branch_no_9:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_16:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_8 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_end.object );
    tmp_inplace_assign_1__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto try_finally_handler_15;
    }

    goto finally_end_14;
    finally_end_14:;
    tmp_assign_source_41 = var_c_lib_dirs.object;

    if ( tmp_assign_source_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86285 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto try_finally_handler_15;
    }

    if (tmp_inplace_assign_2__inplace_start.object == NULL)
    {
        tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_41 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_2__inplace_start.object;
        tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_41 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_3 = tmp_inplace_assign_2__inplace_start.object;

    tmp_source_name_41 = var_binfo.object;

    if ( tmp_source_name_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85941 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto try_finally_handler_17;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_get );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto try_finally_handler_17;
    }
    tmp_call_arg_element_14 = const_str_plain_library_dirs;
    tmp_call_arg_element_15 = PyList_New( 0 );
    frame_function->f_lineno = 127;
    tmp_binop_right_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_20, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_20 );
    Py_DECREF( tmp_call_arg_element_15 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto try_finally_handler_17;
    }
    tmp_assign_source_42 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto try_finally_handler_17;
    }
    if (tmp_inplace_assign_2__inplace_end.object == NULL)
    {
        tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_42;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_2__inplace_end.object;
        tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_42;
        Py_DECREF( old );
    }
    tmp_compare_left_5 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_5 = tmp_inplace_assign_2__inplace_end.object;

    tmp_isnot_3 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if (tmp_isnot_3)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_43 = tmp_inplace_assign_2__inplace_end.object;

    if (var_c_lib_dirs.object == NULL)
    {
        var_c_lib_dirs.object = INCREASE_REFCOUNT( tmp_assign_source_43 );
    }
    else
    {
        PyObject *old = var_c_lib_dirs.object;
        var_c_lib_dirs.object = INCREASE_REFCOUNT( tmp_assign_source_43 );
        Py_DECREF( old );
    }
    branch_no_10:;
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

    tmp_tried_lineno_9 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_2__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_start.object );
        tmp_inplace_assign_2__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_2__inplace_end.object );
    tmp_inplace_assign_2__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
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
    tmp_source_name_42 = var_binfo.object;

    if ( tmp_source_name_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85941 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 128;
        goto try_finally_handler_15;
    }

    tmp_called_21 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_get );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 128;
        goto try_finally_handler_15;
    }
    tmp_call_arg_element_16 = const_str_plain_macros;
    tmp_call_arg_element_17 = PyList_New( 0 );
    frame_function->f_lineno = 128;
    tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_21, tmp_call_arg_element_16, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_21 );
    Py_DECREF( tmp_call_arg_element_17 );
    if ( tmp_iter_arg_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 128;
        goto try_finally_handler_15;
    }
    tmp_assign_source_44 = MAKE_ITERATOR( tmp_iter_arg_7 );
    Py_DECREF( tmp_iter_arg_7 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 128;
        goto try_finally_handler_15;
    }
    if (tmp_for_loop_5__for_iterator.object == NULL)
    {
        tmp_for_loop_5__for_iterator.object = tmp_assign_source_44;
    }
    else
    {
        PyObject *old = tmp_for_loop_5__for_iterator.object;
        tmp_for_loop_5__for_iterator.object = tmp_assign_source_44;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator.object;

    tmp_assign_source_45 = ITERATOR_NEXT( tmp_next_source_5 );
    if (tmp_assign_source_45 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_5;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 128;
            goto try_finally_handler_18;
        }
    }

    if (tmp_for_loop_5__iter_value.object == NULL)
    {
        tmp_for_loop_5__iter_value.object = tmp_assign_source_45;
    }
    else
    {
        PyObject *old = tmp_for_loop_5__iter_value.object;
        tmp_for_loop_5__iter_value.object = tmp_assign_source_45;
        Py_DECREF( old );
    }
    tmp_assign_source_46 = tmp_for_loop_5__iter_value.object;

    if (var_m.object == NULL)
    {
        var_m.object = INCREASE_REFCOUNT( tmp_assign_source_46 );
    }
    else
    {
        PyObject *old = var_m.object;
        var_m.object = INCREASE_REFCOUNT( tmp_assign_source_46 );
        Py_DECREF( old );
    }
    tmp_compare_left_6 = var_m.object;

    tmp_compare_right_6 = var_macros.object;

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81244 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 129;
        goto try_finally_handler_18;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 129;
        goto try_finally_handler_18;
    }
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_43 = var_macros.object;

    if ( tmp_source_name_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81244 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 130;
        goto try_finally_handler_18;
    }

    tmp_called_22 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_append );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto try_finally_handler_18;
    }
    tmp_call_arg_element_18 = var_m.object;

    frame_function->f_lineno = 130;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto try_finally_handler_18;
    }
    Py_DECREF( tmp_unused );
    branch_no_11:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 128;
        goto try_finally_handler_18;
    }
    goto loop_start_5;
    loop_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_18:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
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
    if ( exception_keeper_type_14 != NULL )
    {
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;

        goto try_finally_handler_15;
    }

    goto finally_end_16;
    finally_end_16:;
    branch_no_8:;
    tmp_source_name_45 = var_clibs.object;

    if ( tmp_source_name_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86150 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto try_finally_handler_15;
    }

    tmp_called_24 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_get );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto try_finally_handler_15;
    }
    tmp_call_arg_element_19 = var_libname.object;

    if ( tmp_call_arg_element_19 == NULL )
    {
        Py_DECREF( tmp_called_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto try_finally_handler_15;
    }

    tmp_call_arg_element_20 = PyDict_New();
    frame_function->f_lineno = 132;
    tmp_source_name_44 = CALL_FUNCTION_WITH_ARGS2( tmp_called_24, tmp_call_arg_element_19, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_24 );
    Py_DECREF( tmp_call_arg_element_20 );
    if ( tmp_source_name_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto try_finally_handler_15;
    }
    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_get );
    Py_DECREF( tmp_source_name_44 );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto try_finally_handler_15;
    }
    tmp_call_arg_element_21 = const_str_plain_source_languages;
    tmp_call_arg_element_22 = PyList_New( 0 );
    frame_function->f_lineno = 132;
    tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_23, tmp_call_arg_element_21, tmp_call_arg_element_22 );
    Py_DECREF( tmp_called_23 );
    Py_DECREF( tmp_call_arg_element_22 );
    if ( tmp_iter_arg_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto try_finally_handler_15;
    }
    tmp_assign_source_47 = MAKE_ITERATOR( tmp_iter_arg_8 );
    Py_DECREF( tmp_iter_arg_8 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto try_finally_handler_15;
    }
    if (tmp_for_loop_6__for_iterator.object == NULL)
    {
        tmp_for_loop_6__for_iterator.object = tmp_assign_source_47;
    }
    else
    {
        PyObject *old = tmp_for_loop_6__for_iterator.object;
        tmp_for_loop_6__for_iterator.object = tmp_assign_source_47;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_6:;
    tmp_next_source_6 = tmp_for_loop_6__for_iterator.object;

    tmp_assign_source_48 = ITERATOR_NEXT( tmp_next_source_6 );
    if (tmp_assign_source_48 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_6;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 132;
            goto try_finally_handler_19;
        }
    }

    if (tmp_for_loop_6__iter_value.object == NULL)
    {
        tmp_for_loop_6__iter_value.object = tmp_assign_source_48;
    }
    else
    {
        PyObject *old = tmp_for_loop_6__iter_value.object;
        tmp_for_loop_6__iter_value.object = tmp_assign_source_48;
        Py_DECREF( old );
    }
    tmp_assign_source_49 = tmp_for_loop_6__iter_value.object;

    if (var_l.object == NULL)
    {
        var_l.object = INCREASE_REFCOUNT( tmp_assign_source_49 );
    }
    else
    {
        PyObject *old = var_l.object;
        var_l.object = INCREASE_REFCOUNT( tmp_assign_source_49 );
        Py_DECREF( old );
    }
    tmp_source_name_46 = var_ext_languages.object;

    if ( tmp_source_name_46 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86341 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 133;
        goto try_finally_handler_19;
    }

    tmp_called_25 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_add );
    if ( tmp_called_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
        goto try_finally_handler_19;
    }
    tmp_call_arg_element_23 = var_l.object;

    frame_function->f_lineno = 133;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_25, tmp_call_arg_element_23 );
    Py_DECREF( tmp_called_25 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
        goto try_finally_handler_19;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto try_finally_handler_19;
    }
    goto loop_start_6;
    loop_end_6:;
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

    tmp_tried_lineno_11 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_6__iter_value.object );
    tmp_for_loop_6__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_6__for_iterator.object );
    tmp_for_loop_6__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_11;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_15 != NULL )
    {
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;

        goto try_finally_handler_15;
    }

    goto finally_end_17;
    finally_end_17:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto try_finally_handler_15;
    }
    goto loop_start_4;
    loop_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_15:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_12 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_4__iter_value.object );
    tmp_for_loop_4__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator.object );
    tmp_for_loop_4__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_12;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_16 != NULL )
    {
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;

        goto try_finally_handler_14;
    }

    goto finally_end_18;
    finally_end_18:;
    tmp_cond_value_9 = var_c_libs.object;

    if ( tmp_cond_value_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86233 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 134;
        goto try_finally_handler_14;
    }

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 134;
        goto try_finally_handler_14;
    }
    if (tmp_cond_truth_9 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_47 = var_ext.object;

    if ( tmp_source_name_47 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto try_finally_handler_14;
    }

    tmp_binop_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_libraries );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
        goto try_finally_handler_14;
    }
    tmp_binop_right_4 = var_c_libs.object;

    if ( tmp_binop_right_4 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86233 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto try_finally_handler_14;
    }

    tmp_assign_source_50 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
        goto try_finally_handler_14;
    }
    if (var_new_c_libs.object == NULL)
    {
        var_new_c_libs.object = tmp_assign_source_50;
    }
    else
    {
        PyObject *old = var_new_c_libs.object;
        var_new_c_libs.object = tmp_assign_source_50;
        Py_DECREF( old );
    }
    tmp_source_name_48 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_48 == NULL ))
    {
        tmp_source_name_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_48 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 136;
        goto try_finally_handler_14;
    }

    tmp_called_26 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_info );
    if ( tmp_called_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto try_finally_handler_14;
    }
    tmp_binop_left_5 = const_str_digest_05634a60dddb2fe80de1186eac51a144;
    tmp_binop_right_5 = PyTuple_New( 3 );
    tmp_source_name_49 = var_ext.object;

    if ( tmp_source_name_49 == NULL )
    {
        Py_DECREF( tmp_called_26 );
        Py_DECREF( tmp_binop_right_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 137;
        goto try_finally_handler_14;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_name );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_26 );
        Py_DECREF( tmp_binop_right_5 );

        frame_function->f_lineno = 137;
        goto try_finally_handler_14;
    }
    PyTuple_SET_ITEM( tmp_binop_right_5, 0, tmp_tuple_element_2 );
    tmp_source_name_50 = var_ext.object;

    if ( tmp_source_name_50 == NULL )
    {
        Py_DECREF( tmp_called_26 );
        Py_DECREF( tmp_binop_right_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 137;
        goto try_finally_handler_14;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_libraries );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_26 );
        Py_DECREF( tmp_binop_right_5 );

        frame_function->f_lineno = 137;
        goto try_finally_handler_14;
    }
    PyTuple_SET_ITEM( tmp_binop_right_5, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_new_c_libs.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_5, 2, tmp_tuple_element_2 );
    tmp_call_arg_element_24 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_call_arg_element_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_26 );

        frame_function->f_lineno = 136;
        goto try_finally_handler_14;
    }
    frame_function->f_lineno = 136;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_26, tmp_call_arg_element_24 );
    Py_DECREF( tmp_called_26 );
    Py_DECREF( tmp_call_arg_element_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_3 = var_new_c_libs.object;

    tmp_assattr_target_3 = var_ext.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 138;
        goto try_finally_handler_14;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_libraries, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_14;
    }
    tmp_source_name_51 = var_ext.object;

    if ( tmp_source_name_51 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto try_finally_handler_14;
    }

    tmp_binop_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_library_dirs );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto try_finally_handler_14;
    }
    tmp_binop_right_6 = var_c_lib_dirs.object;

    if ( tmp_binop_right_6 == NULL )
    {
        Py_DECREF( tmp_binop_left_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86285 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto try_finally_handler_14;
    }

    tmp_assattr_name_4 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto try_finally_handler_14;
    }
    tmp_assattr_target_4 = var_ext.object;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto try_finally_handler_14;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_library_dirs, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        frame_function->f_lineno = 139;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_assattr_name_4 );
    branch_no_12:;
    tmp_cond_value_10 = var_macros.object;

    if ( tmp_cond_value_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81244 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 140;
        goto try_finally_handler_14;
    }

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto try_finally_handler_14;
    }
    if (tmp_cond_truth_10 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_52 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_52 == NULL ))
    {
        tmp_source_name_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_52 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 141;
        goto try_finally_handler_14;
    }

    tmp_called_27 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_info );
    if ( tmp_called_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 141;
        goto try_finally_handler_14;
    }
    tmp_binop_left_7 = const_str_digest_f009f74be943bb832805e55aa2dfff60;
    tmp_binop_right_7 = PyTuple_New( 2 );
    tmp_source_name_53 = var_ext.object;

    if ( tmp_source_name_53 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_binop_right_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto try_finally_handler_14;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_name );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_binop_right_7 );

        frame_function->f_lineno = 142;
        goto try_finally_handler_14;
    }
    PyTuple_SET_ITEM( tmp_binop_right_7, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_macros.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_binop_right_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81244 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto try_finally_handler_14;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_7, 1, tmp_tuple_element_3 );
    tmp_call_arg_element_25 = BINARY_OPERATION_REMAINDER( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_call_arg_element_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );

        frame_function->f_lineno = 141;
        goto try_finally_handler_14;
    }
    frame_function->f_lineno = 141;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_27, tmp_call_arg_element_25 );
    Py_DECREF( tmp_called_27 );
    Py_DECREF( tmp_call_arg_element_25 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 141;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_54 = var_ext.object;

    if ( tmp_source_name_54 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto try_finally_handler_14;
    }

    tmp_binop_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_define_macros );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto try_finally_handler_14;
    }
    tmp_binop_right_8 = var_macros.object;

    if ( tmp_binop_right_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81244 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto try_finally_handler_14;
    }

    tmp_assattr_name_5 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto try_finally_handler_14;
    }
    tmp_assattr_target_5 = var_ext.object;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto try_finally_handler_14;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_define_macros, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        frame_function->f_lineno = 143;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_assattr_name_5 );
    branch_no_13:;
    tmp_called_28 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_has_f_sources );

    if (unlikely( tmp_called_28 == NULL ))
    {
        tmp_called_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_has_f_sources );
    }

    if ( tmp_called_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84451 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto try_finally_handler_14;
    }

    tmp_source_name_55 = var_ext.object;

    if ( tmp_source_name_55 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_26 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_sources );
    if ( tmp_call_arg_element_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto try_finally_handler_14;
    }
    frame_function->f_lineno = 146;
    tmp_cond_value_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_28, tmp_call_arg_element_26 );
    Py_DECREF( tmp_call_arg_element_26 );
    if ( tmp_cond_value_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto try_finally_handler_14;
    }
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_11 );

        frame_function->f_lineno = 146;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_cond_value_11 );
    if (tmp_cond_truth_11 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_56 = var_ext_languages.object;

    if ( tmp_source_name_56 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86341 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto try_finally_handler_14;
    }

    tmp_called_29 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_add );
    if ( tmp_called_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_14;
    }
    tmp_call_arg_element_27 = const_str_plain_f77;
    frame_function->f_lineno = 147;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_29, tmp_call_arg_element_27 );
    Py_DECREF( tmp_called_29 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_unused );
    branch_no_14:;
    tmp_called_30 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_has_cxx_sources );

    if (unlikely( tmp_called_30 == NULL ))
    {
        tmp_called_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_has_cxx_sources );
    }

    if ( tmp_called_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84549 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto try_finally_handler_14;
    }

    tmp_source_name_57 = var_ext.object;

    if ( tmp_source_name_57 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_28 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_sources );
    if ( tmp_call_arg_element_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto try_finally_handler_14;
    }
    frame_function->f_lineno = 148;
    tmp_cond_value_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_30, tmp_call_arg_element_28 );
    Py_DECREF( tmp_call_arg_element_28 );
    if ( tmp_cond_value_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto try_finally_handler_14;
    }
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_12 );

        frame_function->f_lineno = 148;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_cond_value_12 );
    if (tmp_cond_truth_12 == 1)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_58 = var_ext_languages.object;

    if ( tmp_source_name_58 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86341 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto try_finally_handler_14;
    }

    tmp_called_31 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_add );
    if ( tmp_called_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto try_finally_handler_14;
    }
    tmp_call_arg_element_29 = const_str_digest_6ce809eacf90ba125b40fa4bd903962e;
    frame_function->f_lineno = 149;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_31, tmp_call_arg_element_29 );
    Py_DECREF( tmp_called_31 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_unused );
    branch_no_15:;
    // Tried code
    tmp_assign_source_51 = NULL;
    // Tried code
    tmp_source_name_59 = var_ext.object;

    if ( tmp_source_name_59 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto try_finally_handler_21;
    }

    tmp_assign_source_52 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_language );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto try_finally_handler_21;
    }
    if (tmp_or_3__value_1.object == NULL)
    {
        tmp_or_3__value_1.object = tmp_assign_source_52;
    }
    else
    {
        PyObject *old = tmp_or_3__value_1.object;
        tmp_or_3__value_1.object = tmp_assign_source_52;
        Py_DECREF( old );
    }
    tmp_cond_value_13 = tmp_or_3__value_1.object;

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto try_finally_handler_21;
    }
    if (tmp_cond_truth_13 == 1)
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_assign_source_51 = tmp_or_3__value_1.object;

    Py_INCREF( tmp_assign_source_51 );
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_51 = NULL;
    // Tried code
    tmp_result = tmp_or_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_3__value_1.object );
        tmp_or_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_61 = par_self.object;

    if ( tmp_source_name_61 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto try_finally_handler_22;
    }

    tmp_source_name_60 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_compiler );
    if ( tmp_source_name_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto try_finally_handler_22;
    }
    tmp_called_32 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_detect_language );
    Py_DECREF( tmp_source_name_60 );
    if ( tmp_called_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto try_finally_handler_22;
    }
    tmp_source_name_62 = var_ext.object;

    if ( tmp_source_name_62 == NULL )
    {
        Py_DECREF( tmp_called_32 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto try_finally_handler_22;
    }

    tmp_call_arg_element_30 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_sources );
    if ( tmp_call_arg_element_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );

        frame_function->f_lineno = 150;
        goto try_finally_handler_22;
    }
    frame_function->f_lineno = 150;
    tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS1( tmp_called_32, tmp_call_arg_element_30 );
    Py_DECREF( tmp_called_32 );
    Py_DECREF( tmp_call_arg_element_30 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto try_finally_handler_22;
    }
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
    condexpr_end_4:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_18 != NULL )
    {
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;

        goto try_finally_handler_20;
    }

    goto finally_end_20;
    finally_end_20:;
    if (var_l.object == NULL)
    {
        var_l.object = tmp_assign_source_51;
    }
    else
    {
        PyObject *old = var_l.object;
        var_l.object = tmp_assign_source_51;
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_20:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_13 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_3__value_1.object );
    tmp_or_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_13;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_19 != NULL )
    {
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;

        goto try_finally_handler_14;
    }

    goto finally_end_21;
    finally_end_21:;
    tmp_cond_value_14 = var_l.object;

    if ( tmp_cond_value_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto try_finally_handler_14;
    }

    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto try_finally_handler_14;
    }
    if (tmp_cond_truth_14 == 1)
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_source_name_63 = var_ext_languages.object;

    if ( tmp_source_name_63 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86341 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto try_finally_handler_14;
    }

    tmp_called_33 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_add );
    if ( tmp_called_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_14;
    }
    tmp_call_arg_element_31 = var_l.object;

    if ( tmp_call_arg_element_31 == NULL )
    {
        Py_DECREF( tmp_called_33 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto try_finally_handler_14;
    }

    frame_function->f_lineno = 152;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_33, tmp_call_arg_element_31 );
    Py_DECREF( tmp_called_33 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_unused );
    branch_no_16:;
    tmp_compare_left_7 = const_str_digest_6ce809eacf90ba125b40fa4bd903962e;
    tmp_compare_right_7 = var_ext_languages.object;

    if ( tmp_compare_right_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86341 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto try_finally_handler_14;
    }

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
        goto try_finally_handler_14;
    }
    if (tmp_cmp_In_3 == 1)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_assign_source_53 = const_str_digest_6ce809eacf90ba125b40fa4bd903962e;
    if (var_ext_language.object == NULL)
    {
        var_ext_language.object = INCREASE_REFCOUNT( tmp_assign_source_53 );
    }
    else
    {
        PyObject *old = var_ext_language.object;
        var_ext_language.object = INCREASE_REFCOUNT( tmp_assign_source_53 );
        Py_DECREF( old );
    }
    goto branch_end_17;
    branch_no_17:;
    tmp_compare_left_8 = const_str_plain_f90;
    tmp_compare_right_8 = var_ext_languages.object;

    if ( tmp_compare_right_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86341 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto try_finally_handler_14;
    }

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    if ( tmp_cmp_In_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto try_finally_handler_14;
    }
    if (tmp_cmp_In_4 == 1)
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_assign_source_54 = const_str_plain_f90;
    if (var_ext_language.object == NULL)
    {
        var_ext_language.object = INCREASE_REFCOUNT( tmp_assign_source_54 );
    }
    else
    {
        PyObject *old = var_ext_language.object;
        var_ext_language.object = INCREASE_REFCOUNT( tmp_assign_source_54 );
        Py_DECREF( old );
    }
    goto branch_end_18;
    branch_no_18:;
    tmp_compare_left_9 = const_str_plain_f77;
    tmp_compare_right_9 = var_ext_languages.object;

    if ( tmp_compare_right_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86341 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 158;
        goto try_finally_handler_14;
    }

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    if ( tmp_cmp_In_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto try_finally_handler_14;
    }
    if (tmp_cmp_In_5 == 1)
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_assign_source_55 = const_str_plain_f77;
    if (var_ext_language.object == NULL)
    {
        var_ext_language.object = INCREASE_REFCOUNT( tmp_assign_source_55 );
    }
    else
    {
        PyObject *old = var_ext_language.object;
        var_ext_language.object = INCREASE_REFCOUNT( tmp_assign_source_55 );
        Py_DECREF( old );
    }
    goto branch_end_19;
    branch_no_19:;
    tmp_assign_source_56 = const_str_plain_c;
    if (var_ext_language.object == NULL)
    {
        var_ext_language.object = INCREASE_REFCOUNT( tmp_assign_source_56 );
    }
    else
    {
        PyObject *old = var_ext_language.object;
        var_ext_language.object = INCREASE_REFCOUNT( tmp_assign_source_56 );
        Py_DECREF( old );
    }
    branch_end_19:;
    branch_end_18:;
    branch_end_17:;
    // Tried code
    tmp_cond_value_15 = NULL;
    // Tried code
    tmp_assign_source_57 = var_l.object;

    if ( tmp_assign_source_57 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_24;
    }

    if (tmp_and_2__value_2.object == NULL)
    {
        tmp_and_2__value_2.object = INCREASE_REFCOUNT( tmp_assign_source_57 );
    }
    else
    {
        PyObject *old = tmp_and_2__value_2.object;
        tmp_and_2__value_2.object = INCREASE_REFCOUNT( tmp_assign_source_57 );
        Py_DECREF( old );
    }
    tmp_cond_value_16 = tmp_and_2__value_2.object;

    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto try_finally_handler_24;
    }
    if (tmp_cond_truth_16 == 1)
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_cond_value_15 = NULL;
    // Tried code
    tmp_cond_value_15 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_2.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_2.object );
        tmp_and_2__value_2.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_15 = NULL;
    // Tried code
    tmp_compexpr_left_3 = var_l.object;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_27;
    }

    tmp_compexpr_right_3 = var_ext_language.object;

    if ( tmp_compexpr_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86400 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_27;
    }

    tmp_assign_source_58 = RICH_COMPARE_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto try_finally_handler_27;
    }
    if (tmp_and_2__value_1.object == NULL)
    {
        tmp_and_2__value_1.object = tmp_assign_source_58;
    }
    else
    {
        PyObject *old = tmp_and_2__value_1.object;
        tmp_and_2__value_1.object = tmp_assign_source_58;
        Py_DECREF( old );
    }
    tmp_cond_value_17 = tmp_and_2__value_1.object;

    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto try_finally_handler_27;
    }
    if (tmp_cond_truth_17 == 1)
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_cond_value_15 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_64 = var_ext.object;

    if ( tmp_source_name_64 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_28;
    }

    tmp_cond_value_15 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_language );
    if ( tmp_cond_value_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto try_finally_handler_28;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_28:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_20 != NULL )
    {
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;

        goto try_finally_handler_27;
    }

    goto finally_end_22;
    finally_end_22:;
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_cond_value_15 = tmp_and_2__value_1.object;

    Py_INCREF( tmp_cond_value_15 );
    condexpr_end_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_27:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_21 != NULL )
    {
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;

        goto try_finally_handler_26;
    }

    goto finally_end_23;
    finally_end_23:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_26:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_22 != NULL )
    {
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;

        goto try_finally_handler_25;
    }

    goto finally_end_24;
    finally_end_24:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_25:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_14 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_14;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_23 != NULL )
    {
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;

        goto try_finally_handler_24;
    }

    goto finally_end_25;
    finally_end_25:;
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_cond_value_15 = tmp_and_2__value_2.object;

    Py_INCREF( tmp_cond_value_15 );
    condexpr_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_24:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_24 != NULL )
    {
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;

        goto try_finally_handler_23;
    }

    goto finally_end_26;
    finally_end_26:;
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_15 );

        frame_function->f_lineno = 162;
        goto try_finally_handler_23;
    }
    Py_DECREF( tmp_cond_value_15 );
    if (tmp_cond_truth_15 == 1)
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_source_name_65 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_65 == NULL ))
    {
        tmp_source_name_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_65 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 163;
        goto try_finally_handler_23;
    }

    tmp_called_34 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_warn );
    if ( tmp_called_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto try_finally_handler_23;
    }
    tmp_binop_left_9 = const_str_digest_5dbaa0bfeb851a15188fd28f4b8dca2d;
    tmp_binop_right_9 = PyTuple_New( 3 );
    tmp_source_name_66 = var_ext.object;

    if ( tmp_source_name_66 == NULL )
    {
        Py_DECREF( tmp_called_34 );
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto try_finally_handler_23;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_name );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_34 );
        Py_DECREF( tmp_binop_right_9 );

        frame_function->f_lineno = 164;
        goto try_finally_handler_23;
    }
    PyTuple_SET_ITEM( tmp_binop_right_9, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_l.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_called_34 );
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto try_finally_handler_23;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_binop_right_9, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_ext_language.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_called_34 );
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86400 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto try_finally_handler_23;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_binop_right_9, 2, tmp_tuple_element_4 );
    tmp_call_arg_element_32 = BINARY_OPERATION_REMAINDER( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_call_arg_element_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_34 );

        frame_function->f_lineno = 163;
        goto try_finally_handler_23;
    }
    frame_function->f_lineno = 163;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_34, tmp_call_arg_element_32 );
    Py_DECREF( tmp_called_34 );
    Py_DECREF( tmp_call_arg_element_32 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto try_finally_handler_23;
    }
    Py_DECREF( tmp_unused );
    branch_no_20:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_15 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_2.object );
    tmp_and_2__value_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_15;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_25 != NULL )
    {
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;

        goto try_finally_handler_14;
    }

    goto finally_end_27;
    finally_end_27:;
    tmp_assattr_name_6 = var_ext_language.object;

    if ( tmp_assattr_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86400 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_14;
    }

    tmp_assattr_target_6 = var_ext.object;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_14;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_language, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto try_finally_handler_14;
    }
    tmp_source_name_67 = var_all_languages.object;

    if ( tmp_source_name_67 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86458 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto try_finally_handler_14;
    }

    tmp_called_35 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_update );
    if ( tmp_called_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
        goto try_finally_handler_14;
    }
    tmp_call_arg_element_33 = var_ext_languages.object;

    if ( tmp_call_arg_element_33 == NULL )
    {
        Py_DECREF( tmp_called_35 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86341 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto try_finally_handler_14;
    }

    frame_function->f_lineno = 167;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_35, tmp_call_arg_element_33 );
    Py_DECREF( tmp_called_35 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto try_finally_handler_14;
    }
    goto loop_start_3;
    loop_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_14:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_16 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_16;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_26 != NULL )
    {
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;

        goto frame_exception_exit_1;
    }

    goto finally_end_28;
    finally_end_28:;
    tmp_compexpr_left_4 = const_str_plain_f90;
    tmp_compexpr_right_4 = var_all_languages.object;

    if ( tmp_compexpr_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86458 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_59 = SEQUENCE_CONTAINS( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    assert( var_need_f90_compiler.object == NULL );
    var_need_f90_compiler.object = INCREASE_REFCOUNT( tmp_assign_source_59 );

    tmp_compexpr_left_5 = const_str_plain_f77;
    tmp_compexpr_right_5 = var_all_languages.object;

    if ( tmp_compexpr_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86458 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_60 = SEQUENCE_CONTAINS( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    assert( var_need_f77_compiler.object == NULL );
    var_need_f77_compiler.object = INCREASE_REFCOUNT( tmp_assign_source_60 );

    tmp_compexpr_left_6 = const_str_digest_6ce809eacf90ba125b40fa4bd903962e;
    tmp_compexpr_right_6 = var_all_languages.object;

    if ( tmp_compexpr_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86458 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_61 = SEQUENCE_CONTAINS( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    assert( var_need_cxx_compiler.object == NULL );
    var_need_cxx_compiler.object = INCREASE_REFCOUNT( tmp_assign_source_61 );

    tmp_cond_value_18 = var_need_cxx_compiler.object;

    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_18 == 1)
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_called_36 = var_new_compiler.object;

    if ( tmp_called_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86517 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_2 = _PyDict_NewPresized( 4 );
    tmp_dict_value_5 = var_compiler_type.object;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86575 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_compiler;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_source_name_68 = par_self.object;

    if ( tmp_source_name_68 == NULL )
    {
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_verbose );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = const_str_plain_verbose;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    tmp_source_name_69 = par_self.object;

    if ( tmp_source_name_69 == NULL )
    {
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_dry_run );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = const_str_plain_dry_run;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    tmp_source_name_70 = par_self.object;

    if ( tmp_source_name_70 == NULL )
    {
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_force );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = const_str_plain_force;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    frame_function->f_lineno = 178;
    tmp_assattr_name_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_36, tmp_call_kw_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_7 = par_self.object;

    if ( tmp_assattr_target_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__cxx_compiler, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    tmp_source_name_71 = par_self.object;

    if ( tmp_source_name_71 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_62 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain__cxx_compiler );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 179;
        goto frame_exception_exit_1;
    }
    assert( var_compiler.object == NULL );
    var_compiler.object = tmp_assign_source_62;

    tmp_source_name_72 = var_compiler.object;

    tmp_called_37 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_customize );
    if ( tmp_called_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_source_name_73 = par_self.object;

    if ( tmp_source_name_73 == NULL )
    {
        Py_DECREF( tmp_called_37 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_distribution );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_37 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_5 );
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_9 = var_need_cxx_compiler.object;

    tmp_dict_key_9 = const_str_plain_need_cxx;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_9, tmp_dict_value_9 );
    frame_function->f_lineno = 180;
    tmp_unused = CALL_FUNCTION( tmp_called_37, tmp_call_pos_1, tmp_call_kw_3 );
    Py_DECREF( tmp_called_37 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_74 = var_compiler.object;

    tmp_called_38 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_customize_cmd );
    if ( tmp_called_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_34 = par_self.object;

    if ( tmp_call_arg_element_34 == NULL )
    {
        Py_DECREF( tmp_called_38 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 181;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_38, tmp_call_arg_element_34 );
    Py_DECREF( tmp_called_38 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_75 = var_compiler.object;

    tmp_called_39 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_show_customization );
    if ( tmp_called_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 182;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_39 );
    Py_DECREF( tmp_called_39 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_76 = var_compiler.object;

    tmp_called_40 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_cxx_compiler );
    if ( tmp_called_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 183;
    tmp_assattr_name_8 = CALL_FUNCTION_NO_ARGS( tmp_called_40 );
    Py_DECREF( tmp_called_40 );
    if ( tmp_assattr_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_8 = par_self.object;

    if ( tmp_assattr_target_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain__cxx_compiler, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_8 );
    goto branch_end_21;
    branch_no_21:;
    tmp_assattr_name_9 = Py_None;
    tmp_assattr_target_9 = par_self.object;

    if ( tmp_assattr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain__cxx_compiler, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }
    branch_end_21:;
    tmp_cond_value_19 = var_need_f77_compiler.object;

    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_19 == 1)
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_source_name_77 = par_self.object;

    if ( tmp_source_name_77 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_63 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain_fcompiler );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }
    assert( var_ctype.object == NULL );
    var_ctype.object = tmp_assign_source_63;

    tmp_called_41 = var_new_fcompiler.object;

    if ( tmp_called_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86634 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_4 = _PyDict_NewPresized( 6 );
    tmp_source_name_78 = par_self.object;

    if ( tmp_source_name_78 == NULL )
    {
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain_fcompiler );
    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_4 );

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_10 = const_str_plain_compiler;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    tmp_source_name_79 = par_self.object;

    if ( tmp_source_name_79 == NULL )
    {
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_11 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain_verbose );
    if ( tmp_dict_value_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_4 );

        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_11 = const_str_plain_verbose;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_value_11 );
    tmp_source_name_80 = par_self.object;

    if ( tmp_source_name_80 == NULL )
    {
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_12 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain_dry_run );
    if ( tmp_dict_value_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_4 );

        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_12 = const_str_plain_dry_run;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_12, tmp_dict_value_12 );
    Py_DECREF( tmp_dict_value_12 );
    tmp_source_name_81 = par_self.object;

    if ( tmp_source_name_81 == NULL )
    {
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_13 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_force );
    if ( tmp_dict_value_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_4 );

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_13 = const_str_plain_force;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_13, tmp_dict_value_13 );
    Py_DECREF( tmp_dict_value_13 );
    tmp_dict_value_14 = Py_False;
    tmp_dict_key_14 = const_str_plain_requiref90;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_14, tmp_dict_value_14 );
    tmp_source_name_82 = par_self.object;

    if ( tmp_source_name_82 == NULL )
    {
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_15 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_compiler );
    if ( tmp_dict_value_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_4 );

        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_15 = const_str_plain_c_compiler;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_15, tmp_dict_value_15 );
    Py_DECREF( tmp_dict_value_15 );
    frame_function->f_lineno = 195;
    tmp_assattr_name_10 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_41, tmp_call_kw_4 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_assattr_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_10 = par_self.object;

    if ( tmp_assattr_target_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain__f77_compiler, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    tmp_source_name_83 = par_self.object;

    if ( tmp_source_name_83 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_64 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain__f77_compiler );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    assert( var_fcompiler.object == NULL );
    var_fcompiler.object = tmp_assign_source_64;

    tmp_cond_value_20 = var_fcompiler.object;

    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_20 == 1)
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_source_name_84 = var_fcompiler.object;

    tmp_assign_source_65 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain_compiler_type );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    assert( var_ctype.object != NULL );
    {
        PyObject *old = var_ctype.object;
        var_ctype.object = tmp_assign_source_65;
        Py_DECREF( old );
    }

    tmp_source_name_85 = var_fcompiler.object;

    tmp_called_42 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain_customize );
    if ( tmp_called_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_source_name_86 = par_self.object;

    if ( tmp_source_name_86 == NULL )
    {
        Py_DECREF( tmp_called_42 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_35 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_distribution );
    if ( tmp_call_arg_element_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_42 );

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 199;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_42, tmp_call_arg_element_35 );
    Py_DECREF( tmp_called_42 );
    Py_DECREF( tmp_call_arg_element_35 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_23:;
    // Tried code
    tmp_cond_value_21 = NULL;
    // Tried code
    tmp_assign_source_66 = var_fcompiler.object;

    assert( tmp_and_3__value_1.object == NULL );
    tmp_and_3__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_66 );

    tmp_cond_value_22 = tmp_and_3__value_1.object;

    tmp_cond_truth_22 = CHECK_IF_TRUE( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 200;
        goto try_finally_handler_30;
    }
    if (tmp_cond_truth_22 == 1)
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_cond_value_21 = NULL;
    // Tried code
    tmp_result = tmp_and_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_3__value_1.object );
        tmp_and_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_87 = var_fcompiler.object;

    tmp_called_43 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain_get_version );
    if ( tmp_called_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 200;
        goto try_finally_handler_31;
    }
    frame_function->f_lineno = 200;
    tmp_cond_value_21 = CALL_FUNCTION_NO_ARGS( tmp_called_43 );
    Py_DECREF( tmp_called_43 );
    if ( tmp_cond_value_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 200;
        goto try_finally_handler_31;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_31:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_27 != NULL )
    {
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;

        goto try_finally_handler_30;
    }

    goto finally_end_29;
    finally_end_29:;
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_21 = tmp_and_3__value_1.object;

    Py_INCREF( tmp_cond_value_21 );
    condexpr_end_7:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_30:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_28 != NULL )
    {
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;

        goto try_finally_handler_29;
    }

    goto finally_end_30;
    finally_end_30:;
    tmp_cond_truth_21 = CHECK_IF_TRUE( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_21 );

        frame_function->f_lineno = 200;
        goto try_finally_handler_29;
    }
    Py_DECREF( tmp_cond_value_21 );
    if (tmp_cond_truth_21 == 1)
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    tmp_source_name_88 = var_fcompiler.object;

    if ( tmp_source_name_88 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto try_finally_handler_29;
    }

    tmp_called_44 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_customize_cmd );
    if ( tmp_called_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 201;
        goto try_finally_handler_29;
    }
    tmp_call_arg_element_36 = par_self.object;

    if ( tmp_call_arg_element_36 == NULL )
    {
        Py_DECREF( tmp_called_44 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto try_finally_handler_29;
    }

    frame_function->f_lineno = 201;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_44, tmp_call_arg_element_36 );
    Py_DECREF( tmp_called_44 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 201;
        goto try_finally_handler_29;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_89 = var_fcompiler.object;

    if ( tmp_source_name_89 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto try_finally_handler_29;
    }

    tmp_called_45 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_show_customization );
    if ( tmp_called_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto try_finally_handler_29;
    }
    frame_function->f_lineno = 202;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_45 );
    Py_DECREF( tmp_called_45 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto try_finally_handler_29;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_24;
    branch_no_24:;
    tmp_source_name_90 = par_self.object;

    if ( tmp_source_name_90 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 204;
        goto try_finally_handler_29;
    }

    tmp_called_46 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain_warn );
    if ( tmp_called_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 204;
        goto try_finally_handler_29;
    }
    tmp_binop_left_10 = const_str_digest_1df052269d46d0dc5e16228abf1fd40d;
    tmp_binop_right_10 = var_ctype.object;

    if ( tmp_binop_right_10 == NULL )
    {
        Py_DECREF( tmp_called_46 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86693 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 205;
        goto try_finally_handler_29;
    }

    tmp_call_arg_element_37 = BINARY_OPERATION_REMAINDER( tmp_binop_left_10, tmp_binop_right_10 );
    if ( tmp_call_arg_element_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_46 );

        frame_function->f_lineno = 204;
        goto try_finally_handler_29;
    }
    frame_function->f_lineno = 204;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_46, tmp_call_arg_element_37 );
    Py_DECREF( tmp_called_46 );
    Py_DECREF( tmp_call_arg_element_37 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 204;
        goto try_finally_handler_29;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_11 = Py_None;
    tmp_assattr_target_11 = par_self.object;

    if ( tmp_assattr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 206;
        goto try_finally_handler_29;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain__f77_compiler, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 206;
        goto try_finally_handler_29;
    }
    branch_end_24:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_29:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_17 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_3__value_1.object );
    tmp_and_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_17;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_29 != NULL )
    {
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;

        goto frame_exception_exit_1;
    }

    goto finally_end_31;
    finally_end_31:;
    goto branch_end_22;
    branch_no_22:;
    tmp_assattr_name_12 = Py_None;
    tmp_assattr_target_12 = par_self.object;

    if ( tmp_assattr_target_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 208;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain__f77_compiler, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 208;
        goto frame_exception_exit_1;
    }
    branch_end_22:;
    tmp_cond_value_23 = var_need_f90_compiler.object;

    if ( tmp_cond_value_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86744 ], 63, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_23 = CHECK_IF_TRUE( tmp_cond_value_23 );
    if ( tmp_cond_truth_23 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_23 == 1)
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_source_name_91 = par_self.object;

    if ( tmp_source_name_91 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 212;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_67 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain_fcompiler );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 212;
        goto frame_exception_exit_1;
    }
    if (var_ctype.object == NULL)
    {
        var_ctype.object = tmp_assign_source_67;
    }
    else
    {
        PyObject *old = var_ctype.object;
        var_ctype.object = tmp_assign_source_67;
        Py_DECREF( old );
    }
    tmp_called_47 = var_new_fcompiler.object;

    if ( tmp_called_47 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86634 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_5 = _PyDict_NewPresized( 6 );
    tmp_source_name_92 = par_self.object;

    if ( tmp_source_name_92 == NULL )
    {
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_16 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain_fcompiler );
    if ( tmp_dict_value_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_5 );

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_16 = const_str_plain_compiler;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_16, tmp_dict_value_16 );
    Py_DECREF( tmp_dict_value_16 );
    tmp_source_name_93 = par_self.object;

    if ( tmp_source_name_93 == NULL )
    {
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_17 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_verbose );
    if ( tmp_dict_value_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_5 );

        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_17 = const_str_plain_verbose;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_17, tmp_dict_value_17 );
    Py_DECREF( tmp_dict_value_17 );
    tmp_source_name_94 = par_self.object;

    if ( tmp_source_name_94 == NULL )
    {
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_18 = LOOKUP_ATTRIBUTE( tmp_source_name_94, const_str_plain_dry_run );
    if ( tmp_dict_value_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_5 );

        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_18 = const_str_plain_dry_run;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_18, tmp_dict_value_18 );
    Py_DECREF( tmp_dict_value_18 );
    tmp_source_name_95 = par_self.object;

    if ( tmp_source_name_95 == NULL )
    {
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_19 = LOOKUP_ATTRIBUTE( tmp_source_name_95, const_str_plain_force );
    if ( tmp_dict_value_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_5 );

        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_19 = const_str_plain_force;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_19, tmp_dict_value_19 );
    Py_DECREF( tmp_dict_value_19 );
    tmp_dict_value_20 = Py_True;
    tmp_dict_key_20 = const_str_plain_requiref90;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_20, tmp_dict_value_20 );
    tmp_source_name_96 = par_self.object;

    if ( tmp_source_name_96 == NULL )
    {
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_21 = LOOKUP_ATTRIBUTE( tmp_source_name_96, const_str_plain_compiler );
    if ( tmp_dict_value_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_5 );

        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_21 = const_str_plain_c_compiler;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_21, tmp_dict_value_21 );
    Py_DECREF( tmp_dict_value_21 );
    frame_function->f_lineno = 218;
    tmp_assattr_name_13 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_47, tmp_call_kw_5 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_assattr_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_13 = par_self.object;

    if ( tmp_assattr_target_13 == NULL )
    {
        Py_DECREF( tmp_assattr_name_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain__f90_compiler, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_13 );

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_13 );
    tmp_source_name_97 = par_self.object;

    if ( tmp_source_name_97 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_68 = LOOKUP_ATTRIBUTE( tmp_source_name_97, const_str_plain__f90_compiler );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    if (var_fcompiler.object == NULL)
    {
        var_fcompiler.object = tmp_assign_source_68;
    }
    else
    {
        PyObject *old = var_fcompiler.object;
        var_fcompiler.object = tmp_assign_source_68;
        Py_DECREF( old );
    }
    tmp_cond_value_24 = var_fcompiler.object;

    tmp_cond_truth_24 = CHECK_IF_TRUE( tmp_cond_value_24 );
    if ( tmp_cond_truth_24 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_24 == 1)
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    tmp_source_name_98 = var_fcompiler.object;

    tmp_assign_source_69 = LOOKUP_ATTRIBUTE( tmp_source_name_98, const_str_plain_compiler_type );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }
    assert( var_ctype.object != NULL );
    {
        PyObject *old = var_ctype.object;
        var_ctype.object = tmp_assign_source_69;
        Py_DECREF( old );
    }

    tmp_source_name_99 = var_fcompiler.object;

    tmp_called_48 = LOOKUP_ATTRIBUTE( tmp_source_name_99, const_str_plain_customize );
    if ( tmp_called_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_source_name_100 = par_self.object;

    if ( tmp_source_name_100 == NULL )
    {
        Py_DECREF( tmp_called_48 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 222;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_38 = LOOKUP_ATTRIBUTE( tmp_source_name_100, const_str_plain_distribution );
    if ( tmp_call_arg_element_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_48 );

        frame_function->f_lineno = 222;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 222;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_48, tmp_call_arg_element_38 );
    Py_DECREF( tmp_called_48 );
    Py_DECREF( tmp_call_arg_element_38 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_26:;
    // Tried code
    tmp_cond_value_25 = NULL;
    // Tried code
    tmp_assign_source_70 = var_fcompiler.object;

    assert( tmp_and_4__value_1.object == NULL );
    tmp_and_4__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_70 );

    tmp_cond_value_26 = tmp_and_4__value_1.object;

    tmp_cond_truth_26 = CHECK_IF_TRUE( tmp_cond_value_26 );
    if ( tmp_cond_truth_26 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 223;
        goto try_finally_handler_33;
    }
    if (tmp_cond_truth_26 == 1)
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_cond_value_25 = NULL;
    // Tried code
    tmp_result = tmp_and_4__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_4__value_1.object );
        tmp_and_4__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_101 = var_fcompiler.object;

    tmp_called_49 = LOOKUP_ATTRIBUTE( tmp_source_name_101, const_str_plain_get_version );
    if ( tmp_called_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 223;
        goto try_finally_handler_34;
    }
    frame_function->f_lineno = 223;
    tmp_cond_value_25 = CALL_FUNCTION_NO_ARGS( tmp_called_49 );
    Py_DECREF( tmp_called_49 );
    if ( tmp_cond_value_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 223;
        goto try_finally_handler_34;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_34:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_30 != NULL )
    {
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;

        goto try_finally_handler_33;
    }

    goto finally_end_32;
    finally_end_32:;
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_cond_value_25 = tmp_and_4__value_1.object;

    Py_INCREF( tmp_cond_value_25 );
    condexpr_end_8:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_33:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_31 != NULL )
    {
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;

        goto try_finally_handler_32;
    }

    goto finally_end_33;
    finally_end_33:;
    tmp_cond_truth_25 = CHECK_IF_TRUE( tmp_cond_value_25 );
    if ( tmp_cond_truth_25 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_25 );

        frame_function->f_lineno = 223;
        goto try_finally_handler_32;
    }
    Py_DECREF( tmp_cond_value_25 );
    if (tmp_cond_truth_25 == 1)
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    tmp_source_name_102 = var_fcompiler.object;

    if ( tmp_source_name_102 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 224;
        goto try_finally_handler_32;
    }

    tmp_called_50 = LOOKUP_ATTRIBUTE( tmp_source_name_102, const_str_plain_customize_cmd );
    if ( tmp_called_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto try_finally_handler_32;
    }
    tmp_call_arg_element_39 = par_self.object;

    if ( tmp_call_arg_element_39 == NULL )
    {
        Py_DECREF( tmp_called_50 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 224;
        goto try_finally_handler_32;
    }

    frame_function->f_lineno = 224;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_50, tmp_call_arg_element_39 );
    Py_DECREF( tmp_called_50 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto try_finally_handler_32;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_103 = var_fcompiler.object;

    if ( tmp_source_name_103 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 225;
        goto try_finally_handler_32;
    }

    tmp_called_51 = LOOKUP_ATTRIBUTE( tmp_source_name_103, const_str_plain_show_customization );
    if ( tmp_called_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 225;
        goto try_finally_handler_32;
    }
    frame_function->f_lineno = 225;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_51 );
    Py_DECREF( tmp_called_51 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 225;
        goto try_finally_handler_32;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_27;
    branch_no_27:;
    tmp_source_name_104 = par_self.object;

    if ( tmp_source_name_104 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto try_finally_handler_32;
    }

    tmp_called_52 = LOOKUP_ATTRIBUTE( tmp_source_name_104, const_str_plain_warn );
    if ( tmp_called_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto try_finally_handler_32;
    }
    tmp_binop_left_11 = const_str_digest_50858cbed80c4d4f595f41d02cb4e265;
    tmp_binop_right_11 = var_ctype.object;

    if ( tmp_binop_right_11 == NULL )
    {
        Py_DECREF( tmp_called_52 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86693 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto try_finally_handler_32;
    }

    tmp_call_arg_element_40 = BINARY_OPERATION_REMAINDER( tmp_binop_left_11, tmp_binop_right_11 );
    if ( tmp_call_arg_element_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_52 );

        frame_function->f_lineno = 227;
        goto try_finally_handler_32;
    }
    frame_function->f_lineno = 227;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_52, tmp_call_arg_element_40 );
    Py_DECREF( tmp_called_52 );
    Py_DECREF( tmp_call_arg_element_40 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto try_finally_handler_32;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_14 = Py_None;
    tmp_assattr_target_14 = par_self.object;

    if ( tmp_assattr_target_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto try_finally_handler_32;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain__f90_compiler, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto try_finally_handler_32;
    }
    branch_end_27:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_32:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_18 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_4__value_1.object );
    tmp_and_4__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_18;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_32 != NULL )
    {
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;

        goto frame_exception_exit_1;
    }

    goto finally_end_34;
    finally_end_34:;
    goto branch_end_25;
    branch_no_25:;
    tmp_assattr_name_15 = Py_None;
    tmp_assattr_target_15 = par_self.object;

    if ( tmp_assattr_target_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain__f90_compiler, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    branch_end_25:;
    tmp_source_name_105 = par_self.object;

    if ( tmp_source_name_105 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_called_53 = LOOKUP_ATTRIBUTE( tmp_source_name_105, const_str_plain_build_extensions );
    if ( tmp_called_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 234;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_53 );
    Py_DECREF( tmp_called_53 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
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
    if ((var_build_clib.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build_clib,
            var_build_clib.object
        );

    }
    if ((var_new_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_new_compiler,
            var_new_compiler.object
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
    if ((var_compiler_type.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_compiler_type,
            var_compiler_type.object
        );

    }
    if ((var_clibs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_clibs,
            var_clibs.object
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
    if ((var_build_info.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build_info,
            var_build_info.object
        );

    }
    if ((var_all_languages.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_all_languages,
            var_all_languages.object
        );

    }
    if ((var_ext.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ext,
            var_ext.object
        );

    }
    if ((var_ext_languages.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ext_languages,
            var_ext_languages.object
        );

    }
    if ((var_c_libs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c_libs,
            var_c_libs.object
        );

    }
    if ((var_c_lib_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c_lib_dirs,
            var_c_lib_dirs.object
        );

    }
    if ((var_macros.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_macros,
            var_macros.object
        );

    }
    if ((var_binfo.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_binfo,
            var_binfo.object
        );

    }
    if ((var_m.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_m,
            var_m.object
        );

    }
    if ((var_l.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_l,
            var_l.object
        );

    }
    if ((var_new_c_libs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_new_c_libs,
            var_new_c_libs.object
        );

    }
    if ((var_ext_language.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ext_language,
            var_ext_language.object
        );

    }
    if ((var_need_f90_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_need_f90_compiler,
            var_need_f90_compiler.object
        );

    }
    if ((var_need_f77_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_need_f77_compiler,
            var_need_f77_compiler.object
        );

    }
    if ((var_need_cxx_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_need_cxx_compiler,
            var_need_cxx_compiler.object
        );

    }
    if ((var_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_compiler,
            var_compiler.object
        );

    }
    if ((var_ctype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ctype,
            var_ctype.object
        );

    }
    if ((var_fcompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fcompiler,
            var_fcompiler.object
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
static PyObject *fparse_function_3_run_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "run() keywords must be strings" );
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
                   "run() got an unexpected keyword argument '%s'",
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


    return impl_function_3_run_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_run_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_run_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_run_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_swig_sources_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_sources )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_sources; par_sources.object = _python_par_sources;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_12d2d864317dab8ab1ecee0aea14710b, module_numpy$distutils$command$build_ext );
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
    tmp_return_value = par_sources.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81191 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 239;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_sources.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sources,
            par_sources.object
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
static PyObject *fparse_function_4_swig_sources_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_sources = NULL;
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
                PyErr_Format( PyExc_TypeError, "swig_sources() keywords must be strings" );
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
            if ( found == false && const_str_plain_sources == key )
            {
                assert( _python_par_sources == NULL );
                _python_par_sources = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_sources, key ) == 1 )
            {
                assert( _python_par_sources == NULL );
                _python_par_sources = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "swig_sources() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_sources != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_sources = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_sources == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_sources = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_sources == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_sources };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_swig_sources_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, _python_par_self, _python_par_sources );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_sources );

    return NULL;
}

static PyObject *dparse_function_4_swig_sources_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_4_swig_sources_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_swig_sources_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_build_extension_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_ext )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_ext; par_ext.object = _python_par_ext;
    PyObjectLocalVariable var_sources;
    PyObjectLocalVariable var_fullname;
    PyObjectLocalVariable var_modpath;
    PyObjectLocalVariable var_package;
    PyObjectLocalVariable var_base;
    PyObjectLocalVariable var_build_py;
    PyObjectLocalVariable var_package_dir;
    PyObjectLocalVariable var_ext_filename;
    PyObjectLocalVariable var_depends;
    PyObjectLocalVariable var_extra_args;
    PyObjectLocalVariable var_macros;
    PyObjectLocalVariable var_undef;
    PyObjectLocalVariable var_c_sources;
    PyObjectLocalVariable var_cxx_sources;
    PyObjectLocalVariable var_f_sources;
    PyObjectLocalVariable var_fmodule_sources;
    PyObjectLocalVariable var_fcompiler;
    PyObjectLocalVariable var_cxx_compiler;
    PyObjectLocalVariable var_kws;
    PyObjectLocalVariable var_output_dir;
    PyObjectLocalVariable var_include_dirs;
    PyObjectLocalVariable var_c_objects;
    PyObjectLocalVariable var_extra_postargs;
    PyObjectLocalVariable var_f_objects;
    PyObjectLocalVariable var_module_dirs;
    PyObjectLocalVariable var_module_build_dir;
    PyObjectLocalVariable var_existing_modules;
    PyObjectLocalVariable var_f;
    PyObjectLocalVariable var_t;
    PyObjectLocalVariable var_objects;
    PyObjectLocalVariable var_libraries;
    PyObjectLocalVariable var_library_dirs;
    PyObjectLocalVariable var_linker;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_or_3__value_1;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_1__element_3;
    PyObjectTempVariable tmp_tuple_unpack_1__element_4;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObjectTempVariable tmp_or_4__value_1;
    PyObjectTempVariable tmp_or_5__value_1;
    PyObjectTempVariable tmp_or_6__value_1;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_or_7__value_1;
    PyObjectTempVariable tmp_and_2__value_1;
    PyObjectTempVariable tmp_and_3__value_1;
    PyObjectTempVariable tmp_and_4__value_1;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_3__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_3__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_4__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_4__inplace_end;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_inplace_assign_5__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_5__inplace_end;
    PyObjectTempVariable tmp_or_8__value_1;
    PyObjectTempVariable tmp_and_5__value_1;
    PyObjectTempVariable tmp_and_6__value_1;
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
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
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
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
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
    PyObject *tmp_binop_left_12;
    PyObject *tmp_binop_left_13;
    PyObject *tmp_binop_left_14;
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
    PyObject *tmp_binop_right_12;
    PyObject *tmp_binop_right_13;
    PyObject *tmp_binop_right_14;
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
    PyObject *tmp_call_arg_element_26;
    PyObject *tmp_call_arg_element_27;
    PyObject *tmp_call_arg_element_28;
    PyObject *tmp_call_arg_element_29;
    PyObject *tmp_call_arg_element_30;
    PyObject *tmp_call_arg_element_31;
    PyObject *tmp_call_arg_element_32;
    PyObject *tmp_call_arg_element_33;
    PyObject *tmp_call_arg_element_34;
    PyObject *tmp_call_arg_element_35;
    PyObject *tmp_call_arg_element_36;
    PyObject *tmp_call_arg_element_37;
    PyObject *tmp_call_arg_element_38;
    PyObject *tmp_call_arg_element_39;
    PyObject *tmp_call_arg_element_40;
    PyObject *tmp_call_arg_element_41;
    PyObject *tmp_call_arg_element_42;
    PyObject *tmp_call_arg_element_43;
    PyObject *tmp_call_arg_element_44;
    PyObject *tmp_call_arg_element_45;
    PyObject *tmp_call_arg_element_46;
    PyObject *tmp_call_arg_element_47;
    PyObject *tmp_call_arg_element_48;
    PyObject *tmp_call_arg_element_49;
    PyObject *tmp_call_arg_element_50;
    PyObject *tmp_call_arg_element_51;
    PyObject *tmp_call_arg_element_52;
    PyObject *tmp_call_arg_element_53;
    PyObject *tmp_call_arg_element_54;
    PyObject *tmp_call_arg_element_55;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
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
    PyObject *tmp_called_25;
    PyObject *tmp_called_26;
    PyObject *tmp_called_27;
    PyObject *tmp_called_28;
    PyObject *tmp_called_29;
    PyObject *tmp_called_30;
    PyObject *tmp_called_31;
    PyObject *tmp_called_32;
    PyObject *tmp_called_33;
    PyObject *tmp_called_34;
    PyObject *tmp_called_35;
    PyObject *tmp_called_36;
    PyObject *tmp_called_37;
    PyObject *tmp_called_38;
    PyObject *tmp_called_39;
    PyObject *tmp_called_40;
    PyObject *tmp_called_41;
    PyObject *tmp_called_42;
    PyObject *tmp_called_43;
    PyObject *tmp_called_44;
    PyObject *tmp_called_45;
    PyObject *tmp_called_46;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    int tmp_cmp_GtE_1;
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
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_left_8;
    PyObject *tmp_compexpr_left_9;
    PyObject *tmp_compexpr_left_10;
    PyObject *tmp_compexpr_left_11;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    PyObject *tmp_compexpr_right_8;
    PyObject *tmp_compexpr_right_9;
    PyObject *tmp_compexpr_right_10;
    PyObject *tmp_compexpr_right_11;
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
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
    int tmp_cond_truth_20;
    int tmp_cond_truth_21;
    int tmp_cond_truth_22;
    int tmp_cond_truth_23;
    int tmp_cond_truth_24;
    int tmp_cond_truth_25;
    int tmp_cond_truth_26;
    int tmp_cond_truth_27;
    int tmp_cond_truth_28;
    int tmp_cond_truth_29;
    int tmp_cond_truth_30;
    int tmp_cond_truth_31;
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
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
    PyObject *tmp_cond_value_20;
    PyObject *tmp_cond_value_21;
    PyObject *tmp_cond_value_22;
    PyObject *tmp_cond_value_23;
    PyObject *tmp_cond_value_24;
    PyObject *tmp_cond_value_25;
    PyObject *tmp_cond_value_26;
    PyObject *tmp_cond_value_27;
    PyObject *tmp_cond_value_28;
    PyObject *tmp_cond_value_29;
    PyObject *tmp_cond_value_30;
    PyObject *tmp_cond_value_31;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_key_22;
    PyObject *tmp_dict_key_23;
    PyObject *tmp_dict_key_24;
    PyObject *tmp_dict_key_25;
    PyObject *tmp_dict_key_26;
    PyObject *tmp_dict_key_27;
    PyObject *tmp_dict_key_28;
    PyObject *tmp_dict_key_29;
    PyObject *tmp_dict_key_30;
    PyObject *tmp_dict_key_31;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_dict_value_22;
    PyObject *tmp_dict_value_23;
    PyObject *tmp_dict_value_24;
    PyObject *tmp_dict_value_25;
    PyObject *tmp_dict_value_26;
    PyObject *tmp_dict_value_27;
    PyObject *tmp_dict_value_28;
    PyObject *tmp_dict_value_29;
    PyObject *tmp_dict_value_30;
    PyObject *tmp_dict_value_31;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg2_3;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg3_3;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_dircall_arg4_2;
    PyObject *tmp_dircall_arg4_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    bool tmp_isnot_6;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    Py_ssize_t tmp_slice_index_upper_4;
    Py_ssize_t tmp_slice_index_upper_5;
    Py_ssize_t tmp_slice_index_upper_6;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    PyObject *tmp_slice_source_5;
    PyObject *tmp_slice_source_6;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_4;
    Py_ssize_t tmp_sliceslicedel_index_lower_5;
    Py_ssize_t tmp_sliceslicedel_index_lower_6;
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
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_source_name_48;
    PyObject *tmp_source_name_49;
    PyObject *tmp_source_name_50;
    PyObject *tmp_source_name_51;
    PyObject *tmp_source_name_52;
    PyObject *tmp_source_name_53;
    PyObject *tmp_source_name_54;
    PyObject *tmp_source_name_55;
    PyObject *tmp_source_name_56;
    PyObject *tmp_source_name_57;
    PyObject *tmp_source_name_58;
    PyObject *tmp_source_name_59;
    PyObject *tmp_source_name_60;
    PyObject *tmp_source_name_61;
    PyObject *tmp_source_name_62;
    PyObject *tmp_source_name_63;
    PyObject *tmp_source_name_64;
    PyObject *tmp_source_name_65;
    PyObject *tmp_source_name_66;
    PyObject *tmp_source_name_67;
    PyObject *tmp_source_name_68;
    PyObject *tmp_source_name_69;
    PyObject *tmp_source_name_70;
    PyObject *tmp_source_name_71;
    PyObject *tmp_source_name_72;
    PyObject *tmp_source_name_73;
    PyObject *tmp_source_name_74;
    PyObject *tmp_source_name_75;
    PyObject *tmp_source_name_76;
    PyObject *tmp_source_name_77;
    PyObject *tmp_source_name_78;
    PyObject *tmp_source_name_79;
    PyObject *tmp_source_name_80;
    PyObject *tmp_source_name_81;
    PyObject *tmp_source_name_82;
    PyObject *tmp_source_name_83;
    PyObject *tmp_source_name_84;
    PyObject *tmp_source_name_85;
    PyObject *tmp_source_name_86;
    PyObject *tmp_source_name_87;
    PyObject *tmp_source_name_88;
    PyObject *tmp_source_name_89;
    PyObject *tmp_source_name_90;
    PyObject *tmp_source_name_91;
    PyObject *tmp_source_name_92;
    PyObject *tmp_source_name_93;
    PyObject *tmp_source_name_94;
    PyObject *tmp_source_name_95;
    PyObject *tmp_source_name_96;
    PyObject *tmp_source_name_97;
    PyObject *tmp_source_name_98;
    PyObject *tmp_source_name_99;
    PyObject *tmp_source_name_100;
    PyObject *tmp_source_name_101;
    PyObject *tmp_source_name_102;
    PyObject *tmp_source_name_103;
    PyObject *tmp_source_name_104;
    PyObject *tmp_source_name_105;
    PyObject *tmp_source_name_106;
    PyObject *tmp_source_name_107;
    PyObject *tmp_source_name_108;
    PyObject *tmp_source_name_109;
    PyObject *tmp_source_name_110;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
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
    int tmp_tried_lineno_16;
    int tmp_tried_lineno_17;
    int tmp_tried_lineno_18;
    int tmp_tried_lineno_19;
    int tmp_tried_lineno_20;
    int tmp_tried_lineno_21;
    int tmp_tried_lineno_22;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c99653d107410727c2b868902a957edd, module_numpy$distutils$command$build_ext );
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
    tmp_source_name_1 = par_ext.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sources );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }
    assert( var_sources.object == NULL );
    var_sources.object = tmp_assign_source_1;

    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_sources.object;

    tmp_compexpr_right_1 = Py_None;
    tmp_assign_source_2 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_is_sequence );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_sequence );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80736 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_1 = var_sources.object;

    frame_function->f_lineno = 243;
    tmp_unary_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto try_finally_handler_3;
    }
    tmp_cond_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    Py_DECREF( tmp_unary_arg_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
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


        frame_function->f_lineno = 243;
        goto try_finally_handler_1;
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsSetupError );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DistutilsSetupError );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84841 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 244;
        goto try_finally_handler_1;
    }

    tmp_binop_left_1 = const_str_digest_396a81a8b9a834ccc00d711bf4aad4fc;
    tmp_source_name_2 = par_ext.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto try_finally_handler_1;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 245;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 244;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
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

    goto finally_end_3;
    finally_end_3:;
    tmp_list_arg_1 = var_sources.object;

    if ( tmp_list_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81191 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }
    if (var_sources.object == NULL)
    {
        var_sources.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = var_sources.object;
        var_sources.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_cond_value_3 = var_sources.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get_ext_fullname );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_ext.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 253;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    assert( var_fullname.object == NULL );
    var_fullname.object = tmp_assign_source_4;

    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_inplace );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_6 = var_fullname.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_split );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_dot;
    frame_function->f_lineno = 255;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    assert( var_modpath.object == NULL );
    var_modpath.object = tmp_assign_source_5;

    tmp_source_name_7 = const_str_dot;
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_modpath.object;

    tmp_call_arg_element_5 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 256;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    assert( var_package.object == NULL );
    var_package.object = tmp_assign_source_6;

    tmp_subscr_target_1 = var_modpath.object;

    tmp_subscr_subscript_1 = const_int_neg_1;
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    assert( var_base.object == NULL );
    var_base.object = tmp_assign_source_7;

    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_get_finalized_command );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = const_str_plain_build_py;
    frame_function->f_lineno = 258;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    assert( var_build_py.object == NULL );
    var_build_py.object = tmp_assign_source_8;

    tmp_source_name_9 = var_build_py.object;

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_get_package_dir );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = var_package.object;

    frame_function->f_lineno = 259;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }
    assert( var_package_dir.object == NULL );
    var_package_dir.object = tmp_assign_source_9;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_path );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_join );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = var_package_dir.object;

    tmp_source_name_12 = par_self.object;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_get_ext_filename );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = var_base.object;

    frame_function->f_lineno = 261;
    tmp_call_arg_element_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 261;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    assert( var_ext_filename.object == NULL );
    var_ext_filename.object = tmp_assign_source_10;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_path );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }
    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_join );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = par_self.object;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_build_lib );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = par_self.object;

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_get_ext_filename );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = var_fullname.object;

    frame_function->f_lineno = 264;
    tmp_call_arg_element_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 264;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_11 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    assert( var_ext_filename.object == NULL );
    var_ext_filename.object = tmp_assign_source_11;

    branch_end_3:;
    tmp_binop_left_2 = var_sources.object;

    tmp_source_name_17 = par_ext.object;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_depends );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    assert( var_depends.object == NULL );
    var_depends.object = tmp_assign_source_12;

    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_unary_arg_2 = NULL;
    // Tried code
    tmp_source_name_18 = par_self.object;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto try_finally_handler_5;
    }

    tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_force );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_5;
    }
    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = tmp_assign_source_13;

    tmp_cond_value_6 = tmp_or_2__value_1.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_5;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_unary_arg_2 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_unary_arg_2 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_unary_arg_2 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_newer_group );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_newer_group );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85216 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_14 = var_depends.object;

    tmp_call_arg_element_15 = var_ext_filename.object;

    tmp_call_arg_element_16 = const_str_plain_newer;
    frame_function->f_lineno = 267;
    tmp_unary_arg_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_12, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_16 );
    if ( tmp_unary_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_6;
    }
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
    condexpr_end_2:;
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
    tmp_cond_value_5 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_2 );
    Py_DECREF( tmp_unary_arg_2 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_4;
    }
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

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
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
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_debug );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = const_str_digest_8b40701e10d24430f74e9d7df2dc18a7;
    tmp_source_name_20 = par_ext.object;

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_18 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_name );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 268;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_13, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_arg_element_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_info );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = const_str_digest_201403af0deb09e8bec50bbd0a2c735d;
    tmp_source_name_22 = par_ext.object;

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_20 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_name );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 271;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_14, tmp_call_arg_element_19, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_14 );
    Py_DECREF( tmp_call_arg_element_20 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_4:;
    // Tried code
    tmp_assign_source_14 = NULL;
    // Tried code
    tmp_source_name_23 = par_ext.object;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto try_finally_handler_8;
    }

    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_extra_compile_args );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto try_finally_handler_8;
    }
    assert( tmp_or_3__value_1.object == NULL );
    tmp_or_3__value_1.object = tmp_assign_source_15;

    tmp_cond_value_7 = tmp_or_3__value_1.object;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto try_finally_handler_8;
    }
    if (tmp_cond_truth_7 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_assign_source_14 = tmp_or_3__value_1.object;

    Py_INCREF( tmp_assign_source_14 );
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_14 = NULL;
    // Tried code
    tmp_result = tmp_or_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_3__value_1.object );
        tmp_or_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_assign_source_14 = PyList_New( 0 );
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
    assert( var_extra_args.object == NULL );
    var_extra_args.object = tmp_assign_source_14;

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

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_3__value_1.object );
    tmp_or_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
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
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
    tmp_source_name_24 = par_ext.object;

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_define_macros );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    assert( var_macros.object == NULL );
    var_macros.object = tmp_assign_source_16;

    tmp_source_name_25 = par_ext.object;

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_undef_macros );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_17;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_18 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 275;
            goto try_finally_handler_10;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    tmp_assign_source_19 = tmp_for_loop_1__iter_value.object;

    if (var_undef.object == NULL)
    {
        var_undef.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
    }
    else
    {
        PyObject *old = var_undef.object;
        var_undef.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
        Py_DECREF( old );
    }
    tmp_source_name_26 = var_macros.object;

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81244 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 276;
        goto try_finally_handler_10;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_append );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 276;
        goto try_finally_handler_10;
    }
    tmp_call_arg_element_21 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_undef.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_21, 0, tmp_tuple_element_1 );
    frame_function->f_lineno = 276;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_15 );
    Py_DECREF( tmp_call_arg_element_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 276;
        goto try_finally_handler_10;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
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
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto frame_exception_exit_1;
    }

    goto finally_end_10;
    finally_end_10:;
    // Tried code
    tmp_called_16 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_filter_sources );

    if (unlikely( tmp_called_16 == NULL ))
    {
        tmp_called_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_filter_sources );
    }

    if ( tmp_called_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84889 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto try_finally_handler_11;
    }

    tmp_source_name_27 = par_ext.object;

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto try_finally_handler_11;
    }

    tmp_call_arg_element_22 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_sources );
    if ( tmp_call_arg_element_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 279;
        goto try_finally_handler_11;
    }
    frame_function->f_lineno = 279;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_22 );
    Py_DECREF( tmp_call_arg_element_22 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 279;
        goto try_finally_handler_11;
    }
    tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
        goto try_finally_handler_11;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_20;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_21 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_21 == NULL )
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


        frame_function->f_lineno = 278;
        goto try_finally_handler_11;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_21;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_22 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_22 == NULL )
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


        frame_function->f_lineno = 278;
        goto try_finally_handler_11;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_22;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_23 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_23 == NULL )
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


        frame_function->f_lineno = 278;
        goto try_finally_handler_11;
    }
    assert( tmp_tuple_unpack_1__element_3.object == NULL );
    tmp_tuple_unpack_1__element_3.object = tmp_assign_source_23;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_24 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 3 );
    if ( tmp_assign_source_24 == NULL )
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


        frame_function->f_lineno = 278;
        goto try_finally_handler_11;
    }
    assert( tmp_tuple_unpack_1__element_4.object == NULL );
    tmp_tuple_unpack_1__element_4.object = tmp_assign_source_24;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_11;
    }
    tmp_assign_source_25 = tmp_tuple_unpack_1__element_1.object;

    assert( var_c_sources.object == NULL );
    var_c_sources.object = INCREASE_REFCOUNT( tmp_assign_source_25 );

    tmp_assign_source_26 = tmp_tuple_unpack_1__element_2.object;

    assert( var_cxx_sources.object == NULL );
    var_cxx_sources.object = INCREASE_REFCOUNT( tmp_assign_source_26 );

    tmp_assign_source_27 = tmp_tuple_unpack_1__element_3.object;

    assert( var_f_sources.object == NULL );
    var_f_sources.object = INCREASE_REFCOUNT( tmp_assign_source_27 );

    tmp_assign_source_28 = tmp_tuple_unpack_1__element_4.object;

    assert( var_fmodule_sources.object == NULL );
    var_fmodule_sources.object = INCREASE_REFCOUNT( tmp_assign_source_28 );

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

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3.object );
    tmp_tuple_unpack_1__element_3.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4.object );
    tmp_tuple_unpack_1__element_4.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto frame_exception_exit_1;
    }

    goto finally_end_11;
    finally_end_11:;
    tmp_source_name_29 = par_self.object;

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_source_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_compiler );
    if ( tmp_source_name_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_compiler_type );
    Py_DECREF( tmp_source_name_28 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_msvc;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_cond_value_8 = var_cxx_sources.object;

    if ( tmp_cond_value_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85048 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
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
    tmp_source_name_30 = var_extra_args.object;

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86807 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_append );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_23 = const_str_digest_7666a8995cd67e440dd3e750376a0316;
    frame_function->f_lineno = 286;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_17, tmp_call_arg_element_23 );
    Py_DECREF( tmp_called_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_assign_source_29 = var_c_sources.object;

    if ( tmp_assign_source_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84993 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_29 );

    // Tried code
    tmp_binop_left_3 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_3 = var_cxx_sources.object;

    if ( tmp_binop_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85048 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 289;
        goto try_finally_handler_12;
    }

    tmp_assign_source_30 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
        goto try_finally_handler_12;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_30;

    tmp_compare_left_2 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_2 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if (tmp_isnot_1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_31 = tmp_inplace_assign_1__inplace_end.object;

    if (var_c_sources.object == NULL)
    {
        var_c_sources.object = INCREASE_REFCOUNT( tmp_assign_source_31 );
    }
    else
    {
        PyObject *old = var_c_sources.object;
        var_c_sources.object = INCREASE_REFCOUNT( tmp_assign_source_31 );
        Py_DECREF( old );
    }
    branch_no_7:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_end.object );
    tmp_inplace_assign_1__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto frame_exception_exit_1;
    }

    goto finally_end_12;
    finally_end_12:;
    tmp_assign_source_32 = PyList_New( 0 );
    if (var_cxx_sources.object == NULL)
    {
        var_cxx_sources.object = tmp_assign_source_32;
    }
    else
    {
        PyObject *old = var_cxx_sources.object;
        var_cxx_sources.object = tmp_assign_source_32;
        Py_DECREF( old );
    }
    branch_no_5:;
    tmp_source_name_31 = par_ext.object;

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_language );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_str_plain_f90;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_32 = par_self.object;

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 294;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_33 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain__f90_compiler );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 294;
        goto frame_exception_exit_1;
    }
    assert( var_fcompiler.object == NULL );
    var_fcompiler.object = tmp_assign_source_33;

    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_33 = par_ext.object;

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_language );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_str_plain_f77;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_34 = par_self.object;

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_34 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain__f77_compiler );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    assert( var_fcompiler.object == NULL );
    var_fcompiler.object = tmp_assign_source_34;

    goto branch_end_9;
    branch_no_9:;
    // Tried code
    tmp_assign_source_35 = NULL;
    // Tried code
    tmp_source_name_35 = par_self.object;

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 298;
        goto try_finally_handler_14;
    }

    tmp_assign_source_36 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain__f90_compiler );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto try_finally_handler_14;
    }
    assert( tmp_or_4__value_1.object == NULL );
    tmp_or_4__value_1.object = tmp_assign_source_36;

    tmp_cond_value_9 = tmp_or_4__value_1.object;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto try_finally_handler_14;
    }
    if (tmp_cond_truth_9 == 1)
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_assign_source_35 = tmp_or_4__value_1.object;

    Py_INCREF( tmp_assign_source_35 );
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_35 = NULL;
    // Tried code
    tmp_result = tmp_or_4__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_4__value_1.object );
        tmp_or_4__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_36 = par_self.object;

    if ( tmp_source_name_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 298;
        goto try_finally_handler_15;
    }

    tmp_assign_source_35 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain__f77_compiler );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto try_finally_handler_15;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_15:;
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

        goto try_finally_handler_14;
    }

    goto finally_end_13;
    finally_end_13:;
    condexpr_end_4:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_13 != NULL )
    {
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;

        goto try_finally_handler_13;
    }

    goto finally_end_14;
    finally_end_14:;
    if (var_fcompiler.object == NULL)
    {
        var_fcompiler.object = tmp_assign_source_35;
    }
    else
    {
        PyObject *old = var_fcompiler.object;
        var_fcompiler.object = tmp_assign_source_35;
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_13:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_4__value_1.object );
    tmp_or_4__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
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
    branch_end_9:;
    branch_end_8:;
    tmp_compare_left_5 = var_fcompiler.object;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if (tmp_isnot_2)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assattr_name_1 = NULL;
    // Tried code
    tmp_hasattr_source_1 = par_ext.object;

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 300;
        goto try_finally_handler_16;
    }

    tmp_hasattr_attr_1 = const_str_plain_extra_f77_compile_args;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 300;
        goto try_finally_handler_16;
    }
    if (tmp_res == 1)
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_assattr_name_1 = NULL;
    // Tried code
    tmp_source_name_37 = par_ext.object;

    if ( tmp_source_name_37 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 300;
        goto try_finally_handler_17;
    }

    tmp_assign_source_37 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_extra_f77_compile_args );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 300;
        goto try_finally_handler_17;
    }
    assert( tmp_or_5__value_1.object == NULL );
    tmp_or_5__value_1.object = tmp_assign_source_37;

    tmp_cond_value_10 = tmp_or_5__value_1.object;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 300;
        goto try_finally_handler_17;
    }
    if (tmp_cond_truth_10 == 1)
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_assattr_name_1 = tmp_or_5__value_1.object;

    Py_INCREF( tmp_assattr_name_1 );
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assattr_name_1 = NULL;
    // Tried code
    tmp_result = tmp_or_5__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_5__value_1.object );
        tmp_or_5__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_assattr_name_1 = PyList_New( 0 );
    // Re-reraise as necessary after finally was executed.
    goto finally_end_16;
    finally_end_16:;
    condexpr_end_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_17:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_15 != NULL )
    {
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;

        goto try_finally_handler_16;
    }

    goto finally_end_17;
    finally_end_17:;
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_assattr_name_1 = PyList_New( 0 );
    condexpr_end_5:;
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

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_5__value_1.object );
    tmp_or_5__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_16 != NULL )
    {
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;

        goto frame_exception_exit_1;
    }

    goto finally_end_18;
    finally_end_18:;
    tmp_assattr_target_1 = var_fcompiler.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 300;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_extra_f77_compile_args, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 300;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = NULL;
    // Tried code
    tmp_hasattr_source_2 = par_ext.object;

    if ( tmp_hasattr_source_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto try_finally_handler_19;
    }

    tmp_hasattr_attr_2 = const_str_plain_extra_f90_compile_args;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto try_finally_handler_19;
    }
    if (tmp_res == 1)
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_assattr_name_2 = NULL;
    // Tried code
    tmp_source_name_38 = par_ext.object;

    if ( tmp_source_name_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto try_finally_handler_20;
    }

    tmp_assign_source_38 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_extra_f90_compile_args );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto try_finally_handler_20;
    }
    assert( tmp_or_6__value_1.object == NULL );
    tmp_or_6__value_1.object = tmp_assign_source_38;

    tmp_cond_value_11 = tmp_or_6__value_1.object;

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto try_finally_handler_20;
    }
    if (tmp_cond_truth_11 == 1)
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_assattr_name_2 = tmp_or_6__value_1.object;

    Py_INCREF( tmp_assattr_name_2 );
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_assattr_name_2 = NULL;
    // Tried code
    tmp_result = tmp_or_6__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_6__value_1.object );
        tmp_or_6__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_assattr_name_2 = PyList_New( 0 );
    // Re-reraise as necessary after finally was executed.
    goto finally_end_19;
    finally_end_19:;
    condexpr_end_8:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_20:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_17 != NULL )
    {
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;

        goto try_finally_handler_19;
    }

    goto finally_end_20;
    finally_end_20:;
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_assattr_name_2 = PyList_New( 0 );
    condexpr_end_7:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_6__value_1.object );
    tmp_or_6__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_18 != NULL )
    {
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;

        goto frame_exception_exit_1;
    }

    goto finally_end_21;
    finally_end_21:;
    tmp_assattr_target_2 = var_fcompiler.object;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_extra_f90_compile_args, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    branch_no_10:;
    tmp_source_name_39 = par_self.object;

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_39 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain__cxx_compiler );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }
    assert( var_cxx_compiler.object == NULL );
    var_cxx_compiler.object = tmp_assign_source_39;

    // Tried code
    tmp_cond_value_12 = NULL;
    // Tried code
    tmp_assign_source_40 = var_cxx_sources.object;

    if ( tmp_assign_source_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85048 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto try_finally_handler_23;
    }

    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_40 );

    tmp_cond_value_13 = tmp_and_1__value_1.object;

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto try_finally_handler_23;
    }
    if (tmp_cond_truth_13 == 1)
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_cond_value_12 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = var_cxx_compiler.object;

    tmp_compexpr_right_2 = Py_None;
    tmp_cond_value_12 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    // Re-reraise as necessary after finally was executed.
    goto finally_end_22;
    finally_end_22:;
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_cond_value_12 = tmp_and_1__value_1.object;

    condexpr_end_9:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_19 != NULL )
    {
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;

        goto try_finally_handler_22;
    }

    goto finally_end_23;
    finally_end_23:;
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto try_finally_handler_22;
    }
    if (tmp_cond_truth_12 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_called_18 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsError );

    if (unlikely( tmp_called_18 == NULL ))
    {
        tmp_called_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DistutilsError );
    }

    if ( tmp_called_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85366 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto try_finally_handler_22;
    }

    tmp_binop_left_4 = const_str_digest_44230834b9c86297da3e1dc3df076638;
    tmp_source_name_40 = par_ext.object;

    if ( tmp_source_name_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 307;
        goto try_finally_handler_22;
    }

    tmp_binop_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_name );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto try_finally_handler_22;
    }
    tmp_call_arg_element_24 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_call_arg_element_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto try_finally_handler_22;
    }
    frame_function->f_lineno = 306;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_24 );
    Py_DECREF( tmp_call_arg_element_24 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto try_finally_handler_22;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 306;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_22;
    branch_no_11:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_22:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_10 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_10;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_20 != NULL )
    {
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;

        goto frame_exception_exit_1;
    }

    goto finally_end_24;
    finally_end_24:;
    // Tried code
    tmp_cond_value_14 = NULL;
    // Tried code
    // Tried code
    tmp_assign_source_41 = NULL;
    // Tried code
    tmp_assign_source_42 = var_f_sources.object;

    if ( tmp_assign_source_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85161 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto try_finally_handler_28;
    }

    assert( tmp_or_7__value_1.object == NULL );
    tmp_or_7__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_42 );

    tmp_cond_value_15 = tmp_or_7__value_1.object;

    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto try_finally_handler_28;
    }
    if (tmp_cond_truth_15 == 1)
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_assign_source_41 = tmp_or_7__value_1.object;

    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_assign_source_41 = NULL;
    // Tried code
    tmp_result = tmp_or_7__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_7__value_1.object );
        tmp_or_7__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_assign_source_41 = var_fmodule_sources.object;

    if ( tmp_assign_source_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84932 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto try_finally_handler_29;
    }

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_29:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_21 != NULL )
    {
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;

        goto try_finally_handler_28;
    }

    goto finally_end_25;
    finally_end_25:;
    condexpr_end_10:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_28:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_22 != NULL )
    {
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;

        goto try_finally_handler_27;
    }

    goto finally_end_26;
    finally_end_26:;
    assert( tmp_and_2__value_1.object == NULL );
    tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_41 );

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_27:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_11 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_7__value_1.object );
    tmp_or_7__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_11;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_23 != NULL )
    {
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;

        goto try_finally_handler_26;
    }

    goto finally_end_27;
    finally_end_27:;
    tmp_cond_value_16 = tmp_and_2__value_1.object;

    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto try_finally_handler_26;
    }
    if (tmp_cond_truth_16 == 1)
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_cond_value_14 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_3 = var_fcompiler.object;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto try_finally_handler_30;
    }

    tmp_compexpr_right_3 = Py_None;
    tmp_cond_value_14 = BOOL_FROM( tmp_compexpr_left_3 == tmp_compexpr_right_3 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_30:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_24 != NULL )
    {
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;

        goto try_finally_handler_26;
    }

    goto finally_end_28;
    finally_end_28:;
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_cond_value_14 = tmp_and_2__value_1.object;

    condexpr_end_11:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_26:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_25 != NULL )
    {
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;

        goto try_finally_handler_25;
    }

    goto finally_end_29;
    finally_end_29:;
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto try_finally_handler_25;
    }
    if (tmp_cond_truth_14 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_19 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsError );

    if (unlikely( tmp_called_19 == NULL ))
    {
        tmp_called_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DistutilsError );
    }

    if ( tmp_called_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85366 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 309;
        goto try_finally_handler_25;
    }

    tmp_binop_left_5 = const_str_digest_e5a45ad5e03da6973e11be84f98cc906;
    tmp_source_name_41 = par_ext.object;

    if ( tmp_source_name_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto try_finally_handler_25;
    }

    tmp_binop_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_name );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto try_finally_handler_25;
    }
    tmp_call_arg_element_25 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_call_arg_element_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto try_finally_handler_25;
    }
    frame_function->f_lineno = 309;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_25 );
    Py_DECREF( tmp_call_arg_element_25 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto try_finally_handler_25;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 309;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_25;
    branch_no_12:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_25:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_12 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_12;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_26 != NULL )
    {
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;

        goto frame_exception_exit_1;
    }

    goto finally_end_30;
    finally_end_30:;
    // Tried code
    tmp_cond_value_17 = NULL;
    // Tried code
    tmp_source_name_42 = par_ext.object;

    if ( tmp_source_name_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto try_finally_handler_32;
    }

    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_language );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto try_finally_handler_32;
    }
    tmp_compexpr_right_4 = LIST_COPY( const_list_str_plain_f77_str_plain_f90_list );
    tmp_assign_source_43 = SEQUENCE_CONTAINS( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );

        frame_function->f_lineno = 311;
        goto try_finally_handler_32;
    }
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    assert( tmp_and_3__value_1.object == NULL );
    tmp_and_3__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_43 );

    tmp_cond_value_18 = tmp_and_3__value_1.object;

    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto try_finally_handler_32;
    }
    if (tmp_cond_truth_18 == 1)
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_cond_value_17 = NULL;
    // Tried code
    tmp_result = tmp_and_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_3__value_1.object );
        tmp_and_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_5 = var_fcompiler.object;

    if ( tmp_compexpr_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto try_finally_handler_33;
    }

    tmp_compexpr_right_5 = Py_None;
    tmp_cond_value_17 = BOOL_FROM( tmp_compexpr_left_5 == tmp_compexpr_right_5 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_33:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_27 != NULL )
    {
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;

        goto try_finally_handler_32;
    }

    goto finally_end_31;
    finally_end_31:;
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_cond_value_17 = tmp_and_3__value_1.object;

    condexpr_end_12:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_32:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_28 != NULL )
    {
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;

        goto try_finally_handler_31;
    }

    goto finally_end_32;
    finally_end_32:;
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto try_finally_handler_31;
    }
    if (tmp_cond_truth_17 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_43 = par_self.object;

    if ( tmp_source_name_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto try_finally_handler_31;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_warn );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_31;
    }
    tmp_binop_left_6 = const_str_digest_4c2ffb8c6e769dbb360f42545a0ff959;
    tmp_source_name_44 = par_ext.object;

    if ( tmp_source_name_44 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto try_finally_handler_31;
    }

    tmp_binop_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_name );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );

        frame_function->f_lineno = 313;
        goto try_finally_handler_31;
    }
    tmp_call_arg_element_26 = BINARY_OPERATION_REMAINDER( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_call_arg_element_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );

        frame_function->f_lineno = 312;
        goto try_finally_handler_31;
    }
    frame_function->f_lineno = 312;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_20, tmp_call_arg_element_26 );
    Py_DECREF( tmp_called_20 );
    Py_DECREF( tmp_call_arg_element_26 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_31;
    }
    Py_DECREF( tmp_unused );
    branch_no_13:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_31:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_13 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_3__value_1.object );
    tmp_and_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_13;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_29 != NULL )
    {
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;

        goto frame_exception_exit_1;
    }

    goto finally_end_33;
    finally_end_33:;
    // Tried code
    tmp_cond_value_19 = NULL;
    // Tried code
    tmp_source_name_45 = par_ext.object;

    if ( tmp_source_name_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto try_finally_handler_35;
    }

    tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_language );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto try_finally_handler_35;
    }
    tmp_compexpr_right_6 = const_str_digest_6ce809eacf90ba125b40fa4bd903962e;
    tmp_assign_source_44 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto try_finally_handler_35;
    }
    assert( tmp_and_4__value_1.object == NULL );
    tmp_and_4__value_1.object = tmp_assign_source_44;

    tmp_cond_value_20 = tmp_and_4__value_1.object;

    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto try_finally_handler_35;
    }
    if (tmp_cond_truth_20 == 1)
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_cond_value_19 = NULL;
    // Tried code
    tmp_result = tmp_and_4__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_4__value_1.object );
        tmp_and_4__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_7 = var_cxx_compiler.object;

    if ( tmp_compexpr_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86863 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto try_finally_handler_36;
    }

    tmp_compexpr_right_7 = Py_None;
    tmp_cond_value_19 = BOOL_FROM( tmp_compexpr_left_7 == tmp_compexpr_right_7 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_36:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_30 != NULL )
    {
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;

        goto try_finally_handler_35;
    }

    goto finally_end_34;
    finally_end_34:;
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_cond_value_19 = tmp_and_4__value_1.object;

    condexpr_end_13:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_35:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_31 != NULL )
    {
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;

        goto try_finally_handler_34;
    }

    goto finally_end_35;
    finally_end_35:;
    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto try_finally_handler_34;
    }
    if (tmp_cond_truth_19 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_46 = par_self.object;

    if ( tmp_source_name_46 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 315;
        goto try_finally_handler_34;
    }

    tmp_called_21 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_warn );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto try_finally_handler_34;
    }
    tmp_binop_left_7 = const_str_digest_0e4921df71b782b43adc42f393e09e46;
    tmp_source_name_47 = par_ext.object;

    if ( tmp_source_name_47 == NULL )
    {
        Py_DECREF( tmp_called_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto try_finally_handler_34;
    }

    tmp_binop_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_name );
    if ( tmp_binop_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_21 );

        frame_function->f_lineno = 316;
        goto try_finally_handler_34;
    }
    tmp_call_arg_element_27 = BINARY_OPERATION_REMAINDER( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_call_arg_element_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_21 );

        frame_function->f_lineno = 315;
        goto try_finally_handler_34;
    }
    frame_function->f_lineno = 315;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_21, tmp_call_arg_element_27 );
    Py_DECREF( tmp_called_21 );
    Py_DECREF( tmp_call_arg_element_27 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto try_finally_handler_34;
    }
    Py_DECREF( tmp_unused );
    branch_no_14:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_34:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_14 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_4__value_1.object );
    tmp_and_4__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_14;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_32 != NULL )
    {
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;

        goto frame_exception_exit_1;
    }

    goto finally_end_36;
    finally_end_36:;
    tmp_assign_source_45 = _PyDict_NewPresized( 1 );
    tmp_source_name_48 = par_ext.object;

    if ( tmp_source_name_48 == NULL )
    {
        Py_DECREF( tmp_assign_source_45 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 318;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_depends );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_45 );

        frame_function->f_lineno = 318;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_depends;
    PyDict_SetItem( tmp_assign_source_45, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( var_kws.object == NULL );
    var_kws.object = tmp_assign_source_45;

    tmp_source_name_49 = par_self.object;

    if ( tmp_source_name_49 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_46 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_build_temp );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }
    assert( var_output_dir.object == NULL );
    var_output_dir.object = tmp_assign_source_46;

    tmp_source_name_50 = par_ext.object;

    if ( tmp_source_name_50 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_include_dirs );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_called_22 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_get_numpy_include_dirs );

    if (unlikely( tmp_called_22 == NULL ))
    {
        tmp_called_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_numpy_include_dirs );
    }

    if ( tmp_called_22 == NULL )
    {
        Py_DECREF( tmp_binop_left_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85409 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 321;
    tmp_binop_right_8 = CALL_FUNCTION_NO_ARGS( tmp_called_22 );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_8 );

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_47 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }
    assert( var_include_dirs.object == NULL );
    var_include_dirs.object = tmp_assign_source_47;

    tmp_assign_source_48 = PyList_New( 0 );
    assert( var_c_objects.object == NULL );
    var_c_objects.object = tmp_assign_source_48;

    tmp_cond_value_21 = var_c_sources.object;

    if ( tmp_cond_value_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84993 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_21 = CHECK_IF_TRUE( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_21 == 1)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_51 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_51 == NULL ))
    {
        tmp_source_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_51 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_info );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_28 = const_str_digest_8c502b55d1a696af3bd6a84ff79122bf;
    frame_function->f_lineno = 325;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_28 );
    Py_DECREF( tmp_called_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_53 = par_self.object;

    if ( tmp_source_name_53 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }

    tmp_source_name_52 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_compiler );
    if ( tmp_source_name_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_compile );
    Py_DECREF( tmp_source_name_52 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_c_sources.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84993 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 5 );
    tmp_dict_value_2 = var_output_dir.object;

    tmp_dict_key_2 = const_str_plain_output_dir;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = var_macros.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81244 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 328;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_macros;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = var_include_dirs.object;

    tmp_dict_key_4 = const_str_plain_include_dirs;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_source_name_54 = par_self.object;

    if ( tmp_source_name_54 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_debug );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_debug;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    tmp_dict_value_6 = var_extra_args.object;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86807 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 331;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_extra_postargs;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dircall_arg4_1 = var_kws.object;

    tmp_assign_source_49 = impl_function_5_complex_call_helper_pos_keywords_star_dict_of_module___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, INCREASE_REFCOUNT( tmp_dircall_arg4_1 ) );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }
    assert( var_c_objects.object != NULL );
    {
        PyObject *old = var_c_objects.object;
        var_c_objects.object = tmp_assign_source_49;
        Py_DECREF( old );
    }

    branch_no_15:;
    tmp_cond_value_22 = var_cxx_sources.object;

    if ( tmp_cond_value_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85048 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 334;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_22 = CHECK_IF_TRUE( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 334;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_22 == 1)
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_source_name_55 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_55 == NULL ))
    {
        tmp_source_name_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_55 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 335;
        goto frame_exception_exit_1;
    }

    tmp_called_24 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_info );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 335;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_29 = const_str_digest_43fa4cfce65fed3921bb3bd77c4c2566;
    frame_function->f_lineno = 335;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_24, tmp_call_arg_element_29 );
    Py_DECREF( tmp_called_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 335;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_50 = var_c_objects.object;

    assert( tmp_inplace_assign_2__inplace_start.object == NULL );
    tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_50 );

    // Tried code
    tmp_binop_left_9 = tmp_inplace_assign_2__inplace_start.object;

    tmp_source_name_56 = var_cxx_compiler.object;

    if ( tmp_source_name_56 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86863 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 336;
        goto try_finally_handler_37;
    }

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_compile );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 336;
        goto try_finally_handler_37;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_cxx_sources.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85048 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 336;
        goto try_finally_handler_37;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_3 );
    tmp_dircall_arg3_2 = _PyDict_NewPresized( 5 );
    tmp_dict_value_7 = var_output_dir.object;

    tmp_dict_key_7 = const_str_plain_output_dir;
    PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = var_macros.object;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81244 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 338;
        goto try_finally_handler_37;
    }

    tmp_dict_key_8 = const_str_plain_macros;
    PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_value_9 = var_include_dirs.object;

    tmp_dict_key_9 = const_str_plain_include_dirs;
    PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_source_name_57 = par_self.object;

    if ( tmp_source_name_57 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 340;
        goto try_finally_handler_37;
    }

    tmp_dict_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_debug );
    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );

        frame_function->f_lineno = 340;
        goto try_finally_handler_37;
    }
    tmp_dict_key_10 = const_str_plain_debug;
    PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    tmp_dict_value_11 = var_extra_args.object;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86807 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 341;
        goto try_finally_handler_37;
    }

    tmp_dict_key_11 = const_str_plain_extra_postargs;
    PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dircall_arg4_2 = var_kws.object;

    tmp_binop_right_9 = impl_function_5_complex_call_helper_pos_keywords_star_dict_of_module___internal__( tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, INCREASE_REFCOUNT( tmp_dircall_arg4_2 ) );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 336;
        goto try_finally_handler_37;
    }
    tmp_assign_source_51 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 336;
        goto try_finally_handler_37;
    }
    assert( tmp_inplace_assign_2__inplace_end.object == NULL );
    tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_51;

    tmp_compare_left_6 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_6 = tmp_inplace_assign_2__inplace_end.object;

    tmp_isnot_3 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if (tmp_isnot_3)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_assign_source_52 = tmp_inplace_assign_2__inplace_end.object;

    assert( var_c_objects.object != NULL );
    {
        PyObject *old = var_c_objects.object;
        var_c_objects.object = INCREASE_REFCOUNT( tmp_assign_source_52 );
        Py_DECREF( old );
    }

    branch_no_17:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_37:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_15 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_2__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_start.object );
        tmp_inplace_assign_2__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_2__inplace_end.object );
    tmp_inplace_assign_2__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_15;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_33 != NULL )
    {
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;

        goto frame_exception_exit_1;
    }

    goto finally_end_37;
    finally_end_37:;
    branch_no_16:;
    tmp_assign_source_53 = PyList_New( 0 );
    assert( var_extra_postargs.object == NULL );
    var_extra_postargs.object = tmp_assign_source_53;

    tmp_assign_source_54 = PyList_New( 0 );
    assert( var_f_objects.object == NULL );
    var_f_objects.object = tmp_assign_source_54;

    tmp_cond_value_23 = var_fmodule_sources.object;

    if ( tmp_cond_value_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84932 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_23 = CHECK_IF_TRUE( tmp_cond_value_23 );
    if ( tmp_cond_truth_23 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_23 == 1)
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_source_name_58 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_58 == NULL ))
    {
        tmp_source_name_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_58 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_called_25 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_info );
    if ( tmp_called_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_30 = const_str_digest_34d4a33660dc01be9663386794dab04b;
    frame_function->f_lineno = 347;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_25, tmp_call_arg_element_30 );
    Py_DECREF( tmp_called_25 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_sliceslicedel_index_lower_3 = 0;
    tmp_slice_index_upper_3 = PY_SSIZE_T_MAX;
    tmp_source_name_59 = par_ext.object;

    if ( tmp_source_name_59 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 348;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_module_dirs );
    if ( tmp_slice_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 348;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_55 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    Py_DECREF( tmp_slice_source_3 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 348;
        goto frame_exception_exit_1;
    }
    assert( var_module_dirs.object == NULL );
    var_module_dirs.object = tmp_assign_source_55;

    tmp_source_name_61 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_61 == NULL ))
    {
        tmp_source_name_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_61 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }

    tmp_source_name_60 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_path );
    if ( tmp_source_name_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }
    tmp_called_26 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_join );
    Py_DECREF( tmp_source_name_60 );
    if ( tmp_called_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }
    tmp_source_name_62 = par_self.object;

    if ( tmp_source_name_62 == NULL )
    {
        Py_DECREF( tmp_called_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 350;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_31 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_build_temp );
    if ( tmp_call_arg_element_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_26 );

        frame_function->f_lineno = 350;
        goto frame_exception_exit_1;
    }
    tmp_source_name_64 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_64 == NULL ))
    {
        tmp_source_name_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_64 == NULL )
    {
        Py_DECREF( tmp_called_26 );
        Py_DECREF( tmp_call_arg_element_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 350;
        goto frame_exception_exit_1;
    }

    tmp_source_name_63 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_path );
    if ( tmp_source_name_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_26 );
        Py_DECREF( tmp_call_arg_element_31 );

        frame_function->f_lineno = 350;
        goto frame_exception_exit_1;
    }
    tmp_called_27 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_63 );
    if ( tmp_called_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_26 );
        Py_DECREF( tmp_call_arg_element_31 );

        frame_function->f_lineno = 350;
        goto frame_exception_exit_1;
    }
    tmp_source_name_65 = par_self.object;

    if ( tmp_source_name_65 == NULL )
    {
        Py_DECREF( tmp_called_26 );
        Py_DECREF( tmp_call_arg_element_31 );
        Py_DECREF( tmp_called_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }

    tmp_called_28 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_get_ext_filename );
    if ( tmp_called_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_26 );
        Py_DECREF( tmp_call_arg_element_31 );
        Py_DECREF( tmp_called_27 );

        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_34 = var_fullname.object;

    if ( tmp_call_arg_element_34 == NULL )
    {
        Py_DECREF( tmp_called_26 );
        Py_DECREF( tmp_call_arg_element_31 );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_called_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86921 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 351;
    tmp_call_arg_element_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_28, tmp_call_arg_element_34 );
    Py_DECREF( tmp_called_28 );
    if ( tmp_call_arg_element_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_26 );
        Py_DECREF( tmp_call_arg_element_31 );
        Py_DECREF( tmp_called_27 );

        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 351;
    tmp_call_arg_element_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_27, tmp_call_arg_element_33 );
    Py_DECREF( tmp_called_27 );
    Py_DECREF( tmp_call_arg_element_33 );
    if ( tmp_call_arg_element_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_26 );
        Py_DECREF( tmp_call_arg_element_31 );

        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 350;
    tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS2( tmp_called_26, tmp_call_arg_element_31, tmp_call_arg_element_32 );
    Py_DECREF( tmp_called_26 );
    Py_DECREF( tmp_call_arg_element_31 );
    Py_DECREF( tmp_call_arg_element_32 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 350;
        goto frame_exception_exit_1;
    }
    assert( var_module_build_dir.object == NULL );
    var_module_build_dir.object = tmp_assign_source_56;

    tmp_source_name_66 = par_self.object;

    if ( tmp_source_name_66 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 353;
        goto frame_exception_exit_1;
    }

    tmp_called_29 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_mkpath );
    if ( tmp_called_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 353;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_35 = var_module_build_dir.object;

    frame_function->f_lineno = 353;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_29, tmp_call_arg_element_35 );
    Py_DECREF( tmp_called_29 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 353;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_67 = var_fcompiler.object;

    if ( tmp_source_name_67 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_module_dir_switch );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = Py_None;
    tmp_is_1 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    Py_DECREF( tmp_compare_left_7 );
    if (tmp_is_1)
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_called_30 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_called_30 == NULL ))
    {
        tmp_called_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_called_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_36 = const_str_digest_758551d6d461af441d835f7d23f3be12;
    frame_function->f_lineno = 355;
    tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS1( tmp_called_30, tmp_call_arg_element_36 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    assert( var_existing_modules.object == NULL );
    var_existing_modules.object = tmp_assign_source_57;

    branch_no_19:;
    tmp_assign_source_58 = var_extra_postargs.object;

    assert( tmp_inplace_assign_3__inplace_start.object == NULL );
    tmp_inplace_assign_3__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_58 );

    // Tried code
    tmp_binop_left_10 = tmp_inplace_assign_3__inplace_start.object;

    tmp_source_name_68 = var_fcompiler.object;

    if ( tmp_source_name_68 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 356;
        goto try_finally_handler_38;
    }

    tmp_called_31 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_module_options );
    if ( tmp_called_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto try_finally_handler_38;
    }
    tmp_call_arg_element_37 = var_module_dirs.object;

    tmp_call_arg_element_38 = var_module_build_dir.object;

    frame_function->f_lineno = 357;
    tmp_binop_right_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_31, tmp_call_arg_element_37, tmp_call_arg_element_38 );
    Py_DECREF( tmp_called_31 );
    if ( tmp_binop_right_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
        goto try_finally_handler_38;
    }
    tmp_assign_source_59 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_right_10 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto try_finally_handler_38;
    }
    assert( tmp_inplace_assign_3__inplace_end.object == NULL );
    tmp_inplace_assign_3__inplace_end.object = tmp_assign_source_59;

    tmp_compare_left_8 = tmp_inplace_assign_3__inplace_start.object;

    tmp_compare_right_8 = tmp_inplace_assign_3__inplace_end.object;

    tmp_isnot_4 = ( tmp_compare_left_8 != tmp_compare_right_8 );
    if (tmp_isnot_4)
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_assign_source_60 = tmp_inplace_assign_3__inplace_end.object;

    assert( var_extra_postargs.object != NULL );
    {
        PyObject *old = var_extra_postargs.object;
        var_extra_postargs.object = INCREASE_REFCOUNT( tmp_assign_source_60 );
        Py_DECREF( old );
    }

    branch_no_20:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_38:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_16 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_3__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_3__inplace_start.object );
        tmp_inplace_assign_3__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_3__inplace_end.object );
    tmp_inplace_assign_3__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_16;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_34 != NULL )
    {
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;

        goto frame_exception_exit_1;
    }

    goto finally_end_38;
    finally_end_38:;
    tmp_assign_source_61 = var_f_objects.object;

    if ( tmp_assign_source_61 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85666 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 358;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_4__inplace_start.object == NULL );
    tmp_inplace_assign_4__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_61 );

    // Tried code
    tmp_binop_left_11 = tmp_inplace_assign_4__inplace_start.object;

    tmp_source_name_69 = var_fcompiler.object;

    if ( tmp_source_name_69 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 358;
        goto try_finally_handler_39;
    }

    tmp_called_32 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_compile );
    if ( tmp_called_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 358;
        goto try_finally_handler_39;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_4 = var_fmodule_sources.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84932 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 358;
        goto try_finally_handler_39;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_4 );
    tmp_call_kw_1 = _PyDict_NewPresized( 6 );
    tmp_source_name_70 = par_self.object;

    if ( tmp_source_name_70 == NULL )
    {
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 359;
        goto try_finally_handler_39;
    }

    tmp_dict_value_12 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_build_temp );
    if ( tmp_dict_value_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 359;
        goto try_finally_handler_39;
    }
    tmp_dict_key_12 = const_str_plain_output_dir;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_12, tmp_dict_value_12 );
    Py_DECREF( tmp_dict_value_12 );
    tmp_dict_value_13 = var_macros.object;

    if ( tmp_dict_value_13 == NULL )
    {
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81244 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto try_finally_handler_39;
    }

    tmp_dict_key_13 = const_str_plain_macros;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_13, tmp_dict_value_13 );
    tmp_dict_value_14 = var_include_dirs.object;

    if ( tmp_dict_value_14 == NULL )
    {
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 361;
        goto try_finally_handler_39;
    }

    tmp_dict_key_14 = const_str_plain_include_dirs;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_14, tmp_dict_value_14 );
    tmp_source_name_71 = par_self.object;

    if ( tmp_source_name_71 == NULL )
    {
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto try_finally_handler_39;
    }

    tmp_dict_value_15 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain_debug );
    if ( tmp_dict_value_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 362;
        goto try_finally_handler_39;
    }
    tmp_dict_key_15 = const_str_plain_debug;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_15, tmp_dict_value_15 );
    Py_DECREF( tmp_dict_value_15 );
    tmp_dict_value_16 = var_extra_postargs.object;

    if ( tmp_dict_value_16 == NULL )
    {
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81407 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 363;
        goto try_finally_handler_39;
    }

    tmp_dict_key_16 = const_str_plain_extra_postargs;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_16, tmp_dict_value_16 );
    tmp_source_name_72 = par_ext.object;

    if ( tmp_source_name_72 == NULL )
    {
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 364;
        goto try_finally_handler_39;
    }

    tmp_dict_value_17 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_depends );
    if ( tmp_dict_value_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 364;
        goto try_finally_handler_39;
    }
    tmp_dict_key_17 = const_str_plain_depends;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_17, tmp_dict_value_17 );
    Py_DECREF( tmp_dict_value_17 );
    frame_function->f_lineno = 364;
    tmp_binop_right_11 = CALL_FUNCTION( tmp_called_32, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_32 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_binop_right_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
        goto try_finally_handler_39;
    }
    tmp_assign_source_62 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_11, tmp_binop_right_11 );
    Py_DECREF( tmp_binop_right_11 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 358;
        goto try_finally_handler_39;
    }
    assert( tmp_inplace_assign_4__inplace_end.object == NULL );
    tmp_inplace_assign_4__inplace_end.object = tmp_assign_source_62;

    tmp_compare_left_9 = tmp_inplace_assign_4__inplace_start.object;

    tmp_compare_right_9 = tmp_inplace_assign_4__inplace_end.object;

    tmp_isnot_5 = ( tmp_compare_left_9 != tmp_compare_right_9 );
    if (tmp_isnot_5)
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_assign_source_63 = tmp_inplace_assign_4__inplace_end.object;

    if (var_f_objects.object == NULL)
    {
        var_f_objects.object = INCREASE_REFCOUNT( tmp_assign_source_63 );
    }
    else
    {
        PyObject *old = var_f_objects.object;
        var_f_objects.object = INCREASE_REFCOUNT( tmp_assign_source_63 );
        Py_DECREF( old );
    }
    branch_no_21:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_39:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_17 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_4__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_4__inplace_start.object );
        tmp_inplace_assign_4__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_4__inplace_end.object );
    tmp_inplace_assign_4__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_17;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_35 != NULL )
    {
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;

        goto frame_exception_exit_1;
    }

    goto finally_end_39;
    finally_end_39:;
    tmp_source_name_73 = var_fcompiler.object;

    if ( tmp_source_name_73 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 366;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_module_dir_switch );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 366;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_10 = Py_None;
    tmp_is_2 = ( tmp_compare_left_10 == tmp_compare_right_10 );
    Py_DECREF( tmp_compare_left_10 );
    if (tmp_is_2)
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_called_33 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_called_33 == NULL ))
    {
        tmp_called_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_called_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 367;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_39 = const_str_digest_758551d6d461af441d835f7d23f3be12;
    frame_function->f_lineno = 367;
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_33, tmp_call_arg_element_39 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 367;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_64 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 367;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_64;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_65 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_65 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 367;
            goto try_finally_handler_40;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_65;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_65;
        Py_DECREF( old );
    }
    tmp_assign_source_66 = tmp_for_loop_2__iter_value.object;

    if (var_f.object == NULL)
    {
        var_f.object = INCREASE_REFCOUNT( tmp_assign_source_66 );
    }
    else
    {
        PyObject *old = var_f.object;
        var_f.object = INCREASE_REFCOUNT( tmp_assign_source_66 );
        Py_DECREF( old );
    }
    tmp_compare_left_11 = var_f.object;

    tmp_compare_right_11 = var_existing_modules.object;

    if ( tmp_compare_right_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85721 ], 62, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 368;
        goto try_finally_handler_40;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto try_finally_handler_40;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    goto loop_start_2;
    branch_no_23:;
    tmp_source_name_75 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_75 == NULL ))
    {
        tmp_source_name_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_75 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 370;
        goto try_finally_handler_40;
    }

    tmp_source_name_74 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_path );
    if ( tmp_source_name_74 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto try_finally_handler_40;
    }
    tmp_called_34 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_join );
    Py_DECREF( tmp_source_name_74 );
    if ( tmp_called_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto try_finally_handler_40;
    }
    tmp_call_arg_element_40 = var_module_build_dir.object;

    if ( tmp_call_arg_element_40 == NULL )
    {
        Py_DECREF( tmp_called_34 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85604 ], 62, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 370;
        goto try_finally_handler_40;
    }

    tmp_call_arg_element_41 = var_f.object;

    frame_function->f_lineno = 370;
    tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS2( tmp_called_34, tmp_call_arg_element_40, tmp_call_arg_element_41 );
    Py_DECREF( tmp_called_34 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto try_finally_handler_40;
    }
    if (var_t.object == NULL)
    {
        var_t.object = tmp_assign_source_67;
    }
    else
    {
        PyObject *old = var_t.object;
        var_t.object = tmp_assign_source_67;
        Py_DECREF( old );
    }
    tmp_source_name_77 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_77 == NULL ))
    {
        tmp_source_name_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_77 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 371;
        goto try_finally_handler_40;
    }

    tmp_source_name_76 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain_path );
    if ( tmp_source_name_76 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto try_finally_handler_40;
    }
    tmp_called_35 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_76 );
    if ( tmp_called_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto try_finally_handler_40;
    }
    tmp_call_arg_element_42 = var_f.object;

    frame_function->f_lineno = 371;
    tmp_compare_left_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_35, tmp_call_arg_element_42 );
    Py_DECREF( tmp_called_35 );
    if ( tmp_compare_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto try_finally_handler_40;
    }
    tmp_source_name_79 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_79 == NULL ))
    {
        tmp_source_name_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_79 == NULL )
    {
        Py_DECREF( tmp_compare_left_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 371;
        goto try_finally_handler_40;
    }

    tmp_source_name_78 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain_path );
    if ( tmp_source_name_78 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_12 );

        frame_function->f_lineno = 371;
        goto try_finally_handler_40;
    }
    tmp_called_36 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_78 );
    if ( tmp_called_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_12 );

        frame_function->f_lineno = 371;
        goto try_finally_handler_40;
    }
    tmp_call_arg_element_43 = var_t.object;

    frame_function->f_lineno = 371;
    tmp_compare_right_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_36, tmp_call_arg_element_43 );
    Py_DECREF( tmp_called_36 );
    if ( tmp_compare_right_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_12 );

        frame_function->f_lineno = 371;
        goto try_finally_handler_40;
    }
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_12 );
        Py_DECREF( tmp_compare_right_12 );

        frame_function->f_lineno = 371;
        goto try_finally_handler_40;
    }
    Py_DECREF( tmp_compare_left_12 );
    Py_DECREF( tmp_compare_right_12 );
    if (tmp_cmp_Eq_4 == 1)
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    goto loop_start_2;
    branch_no_24:;
    tmp_source_name_81 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_81 == NULL ))
    {
        tmp_source_name_81 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_81 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_40;
    }

    tmp_source_name_80 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_path );
    if ( tmp_source_name_80 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_finally_handler_40;
    }
    tmp_called_37 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_80 );
    if ( tmp_called_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_finally_handler_40;
    }
    tmp_call_arg_element_44 = var_t.object;

    frame_function->f_lineno = 373;
    tmp_cond_value_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_37, tmp_call_arg_element_44 );
    Py_DECREF( tmp_called_37 );
    if ( tmp_cond_value_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_finally_handler_40;
    }
    tmp_cond_truth_24 = CHECK_IF_TRUE( tmp_cond_value_24 );
    if ( tmp_cond_truth_24 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_24 );

        frame_function->f_lineno = 373;
        goto try_finally_handler_40;
    }
    Py_DECREF( tmp_cond_value_24 );
    if (tmp_cond_truth_24 == 1)
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_source_name_82 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_82 == NULL ))
    {
        tmp_source_name_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_82 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 374;
        goto try_finally_handler_40;
    }

    tmp_called_38 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_remove );
    if ( tmp_called_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_40;
    }
    tmp_call_arg_element_45 = var_t.object;

    frame_function->f_lineno = 374;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_38, tmp_call_arg_element_45 );
    Py_DECREF( tmp_called_38 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_40;
    }
    Py_DECREF( tmp_unused );
    branch_no_25:;
    // Tried block of try/except
    tmp_source_name_83 = par_self.object;

    if ( tmp_source_name_83 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_except_handler_1;
    }

    tmp_called_39 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain_move_file );
    if ( tmp_called_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_46 = var_f.object;

    tmp_call_arg_element_47 = var_module_build_dir.object;

    if ( tmp_call_arg_element_47 == NULL )
    {
        Py_DECREF( tmp_called_39 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85604 ], 62, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 376;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_39, tmp_call_arg_element_46, tmp_call_arg_element_47 );
    Py_DECREF( tmp_called_39 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
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
    tmp_compare_left_13 = PyThreadState_GET()->exc_type;
    tmp_compare_right_13 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsFileError );

    if (unlikely( tmp_compare_right_13 == NULL ))
    {
        tmp_compare_right_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DistutilsFileError );
    }

    if ( tmp_compare_right_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85783 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 377;
        goto try_finally_handler_40;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
        goto try_finally_handler_40;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    tmp_source_name_84 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_84 == NULL ))
    {
        tmp_source_name_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_84 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 378;
        goto try_finally_handler_40;
    }

    tmp_called_40 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain_warn );
    if ( tmp_called_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 378;
        goto try_finally_handler_40;
    }
    tmp_binop_left_12 = const_str_digest_c06ba646398ac2139f7dc22a7c880f70;
    tmp_binop_right_12 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_f.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_called_40 );
        Py_DECREF( tmp_binop_right_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6491 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 379;
        goto try_finally_handler_40;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_binop_right_12, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_module_build_dir.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_called_40 );
        Py_DECREF( tmp_binop_right_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85604 ], 62, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 379;
        goto try_finally_handler_40;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_binop_right_12, 1, tmp_tuple_element_5 );
    tmp_call_arg_element_48 = BINARY_OPERATION_REMAINDER( tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_right_12 );
    if ( tmp_call_arg_element_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_40 );

        frame_function->f_lineno = 378;
        goto try_finally_handler_40;
    }
    frame_function->f_lineno = 378;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_40, tmp_call_arg_element_48 );
    Py_DECREF( tmp_called_40 );
    Py_DECREF( tmp_call_arg_element_48 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 378;
        goto try_finally_handler_40;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_26;
    branch_no_26:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_40;
    branch_end_26:;
    try_except_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 367;
        goto try_finally_handler_40;
    }
    goto loop_start_2;
    loop_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_40:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_18 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_18;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_36 != NULL )
    {
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;

        goto frame_exception_exit_1;
    }

    goto finally_end_40;
    finally_end_40:;
    branch_no_22:;
    branch_no_18:;
    tmp_cond_value_25 = var_f_sources.object;

    if ( tmp_cond_value_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85161 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_25 = CHECK_IF_TRUE( tmp_cond_value_25 );
    if ( tmp_cond_truth_25 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_25 == 1)
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    tmp_source_name_85 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_85 == NULL ))
    {
        tmp_source_name_85 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_85 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }

    tmp_called_41 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain_info );
    if ( tmp_called_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_49 = const_str_digest_6f91d8e2487ef4b22be973547e3256ce;
    frame_function->f_lineno = 381;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_41, tmp_call_arg_element_49 );
    Py_DECREF( tmp_called_41 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_68 = var_f_objects.object;

    if ( tmp_assign_source_68 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85666 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_5__inplace_start.object == NULL );
    tmp_inplace_assign_5__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_68 );

    // Tried code
    tmp_binop_left_13 = tmp_inplace_assign_5__inplace_start.object;

    tmp_source_name_86 = var_fcompiler.object;

    if ( tmp_source_name_86 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto try_finally_handler_41;
    }

    tmp_called_42 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_compile );
    if ( tmp_called_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto try_finally_handler_41;
    }
    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_6 = var_f_sources.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_called_42 );
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85161 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto try_finally_handler_41;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_6 );
    tmp_call_kw_2 = _PyDict_NewPresized( 6 );
    tmp_source_name_87 = par_self.object;

    if ( tmp_source_name_87 == NULL )
    {
        Py_DECREF( tmp_called_42 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 383;
        goto try_finally_handler_41;
    }

    tmp_dict_value_18 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain_build_temp );
    if ( tmp_dict_value_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_42 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 383;
        goto try_finally_handler_41;
    }
    tmp_dict_key_18 = const_str_plain_output_dir;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_18, tmp_dict_value_18 );
    Py_DECREF( tmp_dict_value_18 );
    tmp_dict_value_19 = var_macros.object;

    if ( tmp_dict_value_19 == NULL )
    {
        Py_DECREF( tmp_called_42 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81244 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 384;
        goto try_finally_handler_41;
    }

    tmp_dict_key_19 = const_str_plain_macros;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_19, tmp_dict_value_19 );
    tmp_dict_value_20 = var_include_dirs.object;

    if ( tmp_dict_value_20 == NULL )
    {
        Py_DECREF( tmp_called_42 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 385;
        goto try_finally_handler_41;
    }

    tmp_dict_key_20 = const_str_plain_include_dirs;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_20, tmp_dict_value_20 );
    tmp_source_name_88 = par_self.object;

    if ( tmp_source_name_88 == NULL )
    {
        Py_DECREF( tmp_called_42 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 386;
        goto try_finally_handler_41;
    }

    tmp_dict_value_21 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_debug );
    if ( tmp_dict_value_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_42 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 386;
        goto try_finally_handler_41;
    }
    tmp_dict_key_21 = const_str_plain_debug;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_21, tmp_dict_value_21 );
    Py_DECREF( tmp_dict_value_21 );
    tmp_dict_value_22 = var_extra_postargs.object;

    if ( tmp_dict_value_22 == NULL )
    {
        Py_DECREF( tmp_called_42 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81407 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 387;
        goto try_finally_handler_41;
    }

    tmp_dict_key_22 = const_str_plain_extra_postargs;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_22, tmp_dict_value_22 );
    tmp_source_name_89 = par_ext.object;

    if ( tmp_source_name_89 == NULL )
    {
        Py_DECREF( tmp_called_42 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 388;
        goto try_finally_handler_41;
    }

    tmp_dict_value_23 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_depends );
    if ( tmp_dict_value_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_42 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 388;
        goto try_finally_handler_41;
    }
    tmp_dict_key_23 = const_str_plain_depends;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_23, tmp_dict_value_23 );
    Py_DECREF( tmp_dict_value_23 );
    frame_function->f_lineno = 388;
    tmp_binop_right_13 = CALL_FUNCTION( tmp_called_42, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_called_42 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_binop_right_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto try_finally_handler_41;
    }
    tmp_assign_source_69 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_13, tmp_binop_right_13 );
    Py_DECREF( tmp_binop_right_13 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto try_finally_handler_41;
    }
    assert( tmp_inplace_assign_5__inplace_end.object == NULL );
    tmp_inplace_assign_5__inplace_end.object = tmp_assign_source_69;

    tmp_compare_left_14 = tmp_inplace_assign_5__inplace_start.object;

    tmp_compare_right_14 = tmp_inplace_assign_5__inplace_end.object;

    tmp_isnot_6 = ( tmp_compare_left_14 != tmp_compare_right_14 );
    if (tmp_isnot_6)
    {
        goto branch_yes_28;
    }
    else
    {
        goto branch_no_28;
    }
    branch_yes_28:;
    tmp_assign_source_70 = tmp_inplace_assign_5__inplace_end.object;

    if (var_f_objects.object == NULL)
    {
        var_f_objects.object = INCREASE_REFCOUNT( tmp_assign_source_70 );
    }
    else
    {
        PyObject *old = var_f_objects.object;
        var_f_objects.object = INCREASE_REFCOUNT( tmp_assign_source_70 );
        Py_DECREF( old );
    }
    branch_no_28:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_41:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_19 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_5__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_5__inplace_start.object );
        tmp_inplace_assign_5__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_5__inplace_end.object );
    tmp_inplace_assign_5__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_19;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_37 != NULL )
    {
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;

        goto frame_exception_exit_1;
    }

    goto finally_end_41;
    finally_end_41:;
    branch_no_27:;
    tmp_binop_left_14 = var_c_objects.object;

    if ( tmp_binop_left_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86975 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_14 = var_f_objects.object;

    if ( tmp_binop_right_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85666 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_71 = BINARY_OPERATION_ADD( tmp_binop_left_14, tmp_binop_right_14 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    assert( var_objects.object == NULL );
    var_objects.object = tmp_assign_source_71;

    tmp_source_name_90 = par_ext.object;

    if ( tmp_source_name_90 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 392;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_26 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain_extra_objects );
    if ( tmp_cond_value_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 392;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_26 = CHECK_IF_TRUE( tmp_cond_value_26 );
    if ( tmp_cond_truth_26 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_26 );

        frame_function->f_lineno = 392;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_26 );
    if (tmp_cond_truth_26 == 1)
    {
        goto branch_yes_29;
    }
    else
    {
        goto branch_no_29;
    }
    branch_yes_29:;
    tmp_source_name_91 = var_objects.object;

    tmp_called_43 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain_extend );
    if ( tmp_called_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_source_name_92 = par_ext.object;

    if ( tmp_source_name_92 == NULL )
    {
        Py_DECREF( tmp_called_43 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_50 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain_extra_objects );
    if ( tmp_call_arg_element_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_43 );

        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 393;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_43, tmp_call_arg_element_50 );
    Py_DECREF( tmp_called_43 );
    Py_DECREF( tmp_call_arg_element_50 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_29:;
    // Tried code
    tmp_assign_source_72 = NULL;
    // Tried code
    tmp_source_name_93 = par_ext.object;

    if ( tmp_source_name_93 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 394;
        goto try_finally_handler_43;
    }

    tmp_assign_source_73 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_extra_link_args );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto try_finally_handler_43;
    }
    assert( tmp_or_8__value_1.object == NULL );
    tmp_or_8__value_1.object = tmp_assign_source_73;

    tmp_cond_value_27 = tmp_or_8__value_1.object;

    tmp_cond_truth_27 = CHECK_IF_TRUE( tmp_cond_value_27 );
    if ( tmp_cond_truth_27 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto try_finally_handler_43;
    }
    if (tmp_cond_truth_27 == 1)
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_assign_source_72 = tmp_or_8__value_1.object;

    Py_INCREF( tmp_assign_source_72 );
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_assign_source_72 = NULL;
    // Tried code
    tmp_result = tmp_or_8__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_8__value_1.object );
        tmp_or_8__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_assign_source_72 = PyList_New( 0 );
    // Re-reraise as necessary after finally was executed.
    goto finally_end_42;
    finally_end_42:;
    condexpr_end_14:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_43:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_38 != NULL )
    {
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;

        goto try_finally_handler_42;
    }

    goto finally_end_43;
    finally_end_43:;
    if (var_extra_args.object == NULL)
    {
        var_extra_args.object = tmp_assign_source_72;
    }
    else
    {
        PyObject *old = var_extra_args.object;
        var_extra_args.object = tmp_assign_source_72;
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_42:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_20 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_8__value_1.object );
    tmp_or_8__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_20;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_39 != NULL )
    {
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;

        goto frame_exception_exit_1;
    }

    goto finally_end_44;
    finally_end_44:;
    tmp_sliceslicedel_index_lower_4 = 0;
    tmp_slice_index_upper_4 = PY_SSIZE_T_MAX;
    tmp_source_name_94 = par_self.object;

    if ( tmp_source_name_94 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 395;
        goto frame_exception_exit_1;
    }

    tmp_called_44 = LOOKUP_ATTRIBUTE( tmp_source_name_94, const_str_plain_get_libraries );
    if ( tmp_called_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 395;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_51 = par_ext.object;

    if ( tmp_call_arg_element_51 == NULL )
    {
        Py_DECREF( tmp_called_44 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 395;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 395;
    tmp_slice_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_44, tmp_call_arg_element_51 );
    Py_DECREF( tmp_called_44 );
    if ( tmp_slice_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 395;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_74 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
    Py_DECREF( tmp_slice_source_4 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 395;
        goto frame_exception_exit_1;
    }
    assert( var_libraries.object == NULL );
    var_libraries.object = tmp_assign_source_74;

    tmp_sliceslicedel_index_lower_5 = 0;
    tmp_slice_index_upper_5 = PY_SSIZE_T_MAX;
    tmp_source_name_95 = par_ext.object;

    if ( tmp_source_name_95 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_95, const_str_plain_library_dirs );
    if ( tmp_slice_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_75 = LOOKUP_INDEX_SLICE( tmp_slice_source_5, tmp_sliceslicedel_index_lower_5, tmp_slice_index_upper_5 );
    Py_DECREF( tmp_slice_source_5 );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }
    assert( var_library_dirs.object == NULL );
    var_library_dirs.object = tmp_assign_source_75;

    tmp_source_name_97 = par_self.object;

    if ( tmp_source_name_97 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }

    tmp_source_name_96 = LOOKUP_ATTRIBUTE( tmp_source_name_97, const_str_plain_compiler );
    if ( tmp_source_name_96 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_76 = LOOKUP_ATTRIBUTE( tmp_source_name_96, const_str_plain_link_shared_object );
    Py_DECREF( tmp_source_name_96 );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }
    assert( var_linker.object == NULL );
    var_linker.object = tmp_assign_source_76;

    tmp_source_name_99 = par_self.object;

    if ( tmp_source_name_99 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_source_name_98 = LOOKUP_ATTRIBUTE( tmp_source_name_99, const_str_plain_compiler );
    if ( tmp_source_name_98 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_15 = LOOKUP_ATTRIBUTE( tmp_source_name_98, const_str_plain_compiler_type );
    Py_DECREF( tmp_source_name_98 );
    if ( tmp_compare_left_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_15 = const_str_plain_msvc;
    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_15 );

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_15 );
    if (tmp_cmp_Eq_5 == 1)
    {
        goto branch_yes_30;
    }
    else
    {
        goto branch_no_30;
    }
    branch_yes_30:;
    tmp_source_name_100 = par_self.object;

    if ( tmp_source_name_100 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 403;
        goto frame_exception_exit_1;
    }

    tmp_called_45 = LOOKUP_ATTRIBUTE( tmp_source_name_100, const_str_plain__libs_with_msvc_and_fortran );
    if ( tmp_called_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 403;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_52 = var_fcompiler.object;

    if ( tmp_call_arg_element_52 == NULL )
    {
        Py_DECREF( tmp_called_45 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 403;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_53 = var_libraries.object;

    tmp_call_arg_element_54 = var_library_dirs.object;

    frame_function->f_lineno = 403;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_45, tmp_call_arg_element_52, tmp_call_arg_element_53, tmp_call_arg_element_54 );
    Py_DECREF( tmp_called_45 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 403;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_30;
    branch_no_30:;
    // Tried code
    tmp_cond_value_28 = NULL;
    // Tried code
    tmp_source_name_101 = par_ext.object;

    if ( tmp_source_name_101 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 405;
        goto try_finally_handler_46;
    }

    tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_101, const_str_plain_language );
    if ( tmp_compexpr_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 405;
        goto try_finally_handler_46;
    }
    tmp_compexpr_right_8 = LIST_COPY( const_list_str_plain_f77_str_plain_f90_list );
    tmp_assign_source_77 = SEQUENCE_CONTAINS( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_8 );
        Py_DECREF( tmp_compexpr_right_8 );

        frame_function->f_lineno = 405;
        goto try_finally_handler_46;
    }
    Py_DECREF( tmp_compexpr_left_8 );
    Py_DECREF( tmp_compexpr_right_8 );
    assert( tmp_and_5__value_1.object == NULL );
    tmp_and_5__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_77 );

    tmp_cond_value_29 = tmp_and_5__value_1.object;

    tmp_cond_truth_29 = CHECK_IF_TRUE( tmp_cond_value_29 );
    if ( tmp_cond_truth_29 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 405;
        goto try_finally_handler_46;
    }
    if (tmp_cond_truth_29 == 1)
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_cond_value_28 = NULL;
    // Tried code
    tmp_result = tmp_and_5__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_5__value_1.object );
        tmp_and_5__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_9 = var_fcompiler.object;

    if ( tmp_compexpr_left_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 405;
        goto try_finally_handler_47;
    }

    tmp_compexpr_right_9 = Py_None;
    tmp_cond_value_28 = BOOL_FROM( tmp_compexpr_left_9 != tmp_compexpr_right_9 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_47:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_40 != NULL )
    {
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;

        goto try_finally_handler_46;
    }

    goto finally_end_45;
    finally_end_45:;
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_cond_value_28 = tmp_and_5__value_1.object;

    condexpr_end_15:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_46:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_41 != NULL )
    {
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;

        goto try_finally_handler_45;
    }

    goto finally_end_46;
    finally_end_46:;
    tmp_cond_truth_28 = CHECK_IF_TRUE( tmp_cond_value_28 );
    if ( tmp_cond_truth_28 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 405;
        goto try_finally_handler_45;
    }
    if (tmp_cond_truth_28 == 1)
    {
        goto branch_yes_31;
    }
    else
    {
        goto branch_no_31;
    }
    branch_yes_31:;
    tmp_source_name_102 = var_fcompiler.object;

    if ( tmp_source_name_102 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 406;
        goto try_finally_handler_45;
    }

    tmp_assign_source_78 = LOOKUP_ATTRIBUTE( tmp_source_name_102, const_str_plain_link_shared_object );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 406;
        goto try_finally_handler_45;
    }
    if (var_linker.object == NULL)
    {
        var_linker.object = tmp_assign_source_78;
    }
    else
    {
        PyObject *old = var_linker.object;
        var_linker.object = tmp_assign_source_78;
        Py_DECREF( old );
    }
    branch_no_31:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_45:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_21 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_5__value_1.object );
    tmp_and_5__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_21;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_42 != NULL )
    {
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;

        goto frame_exception_exit_1;
    }

    goto finally_end_47;
    finally_end_47:;
    branch_end_30:;
    // Tried code
    tmp_cond_value_30 = NULL;
    // Tried code
    tmp_source_name_103 = par_ext.object;

    if ( tmp_source_name_103 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 407;
        goto try_finally_handler_49;
    }

    tmp_compexpr_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_103, const_str_plain_language );
    if ( tmp_compexpr_left_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto try_finally_handler_49;
    }
    tmp_compexpr_right_10 = const_str_digest_6ce809eacf90ba125b40fa4bd903962e;
    tmp_assign_source_79 = RICH_COMPARE_EQ( tmp_compexpr_left_10, tmp_compexpr_right_10 );
    Py_DECREF( tmp_compexpr_left_10 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto try_finally_handler_49;
    }
    assert( tmp_and_6__value_1.object == NULL );
    tmp_and_6__value_1.object = tmp_assign_source_79;

    tmp_cond_value_31 = tmp_and_6__value_1.object;

    tmp_cond_truth_31 = CHECK_IF_TRUE( tmp_cond_value_31 );
    if ( tmp_cond_truth_31 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto try_finally_handler_49;
    }
    if (tmp_cond_truth_31 == 1)
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_cond_value_30 = NULL;
    // Tried code
    tmp_result = tmp_and_6__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_6__value_1.object );
        tmp_and_6__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_11 = var_cxx_compiler.object;

    if ( tmp_compexpr_left_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86863 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 407;
        goto try_finally_handler_50;
    }

    tmp_compexpr_right_11 = Py_None;
    tmp_cond_value_30 = BOOL_FROM( tmp_compexpr_left_11 != tmp_compexpr_right_11 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_50:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_43 != NULL )
    {
        exception_type = exception_keeper_type_43;
        exception_value = exception_keeper_value_43;
        exception_tb = exception_keeper_tb_43;

        goto try_finally_handler_49;
    }

    goto finally_end_48;
    finally_end_48:;
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_cond_value_30 = tmp_and_6__value_1.object;

    condexpr_end_16:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_49:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_44 != NULL )
    {
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;

        goto try_finally_handler_48;
    }

    goto finally_end_49;
    finally_end_49:;
    tmp_cond_truth_30 = CHECK_IF_TRUE( tmp_cond_value_30 );
    if ( tmp_cond_truth_30 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto try_finally_handler_48;
    }
    if (tmp_cond_truth_30 == 1)
    {
        goto branch_yes_32;
    }
    else
    {
        goto branch_no_32;
    }
    branch_yes_32:;
    tmp_source_name_104 = var_cxx_compiler.object;

    if ( tmp_source_name_104 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86863 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 408;
        goto try_finally_handler_48;
    }

    tmp_assign_source_80 = LOOKUP_ATTRIBUTE( tmp_source_name_104, const_str_plain_link_shared_object );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto try_finally_handler_48;
    }
    if (var_linker.object == NULL)
    {
        var_linker.object = tmp_assign_source_80;
    }
    else
    {
        PyObject *old = var_linker.object;
        var_linker.object = tmp_assign_source_80;
        Py_DECREF( old );
    }
    branch_no_32:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_48:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_22 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_6__value_1.object );
    tmp_and_6__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_22;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_45 != NULL )
    {
        exception_type = exception_keeper_type_45;
        exception_value = exception_keeper_value_45;
        exception_tb = exception_keeper_tb_45;

        goto frame_exception_exit_1;
    }

    goto finally_end_50;
    finally_end_50:;
    tmp_sliceslicedel_index_lower_6 = 0;
    tmp_slice_index_upper_6 = 3;
    tmp_source_name_105 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_105 == NULL ))
    {
        tmp_source_name_105 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_105 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_105, const_str_plain_version );
    if ( tmp_slice_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_16 = LOOKUP_INDEX_SLICE( tmp_slice_source_6, tmp_sliceslicedel_index_lower_6, tmp_slice_index_upper_6 );
    Py_DECREF( tmp_slice_source_6 );
    if ( tmp_compare_left_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_16 = const_str_digest_1a18da63cbbfb49cb9616e6bfd35f662;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_16, tmp_compare_right_16 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_16 );

        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_16 );
    if (tmp_cmp_GtE_1 == 1)
    {
        goto branch_yes_33;
    }
    else
    {
        goto branch_no_33;
    }
    branch_yes_33:;
    tmp_assign_source_81 = _PyDict_NewPresized( 1 );
    tmp_source_name_106 = par_ext.object;

    if ( tmp_source_name_106 == NULL )
    {
        Py_DECREF( tmp_assign_source_81 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 411;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_24 = LOOKUP_ATTRIBUTE( tmp_source_name_106, const_str_plain_language );
    if ( tmp_dict_value_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_81 );

        frame_function->f_lineno = 411;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_24 = const_str_plain_target_lang;
    PyDict_SetItem( tmp_assign_source_81, tmp_dict_key_24, tmp_dict_value_24 );
    Py_DECREF( tmp_dict_value_24 );
    if (var_kws.object == NULL)
    {
        var_kws.object = tmp_assign_source_81;
    }
    else
    {
        PyObject *old = var_kws.object;
        var_kws.object = tmp_assign_source_81;
        Py_DECREF( old );
    }
    goto branch_end_33;
    branch_no_33:;
    tmp_assign_source_82 = PyDict_New();
    if (var_kws.object == NULL)
    {
        var_kws.object = tmp_assign_source_82;
    }
    else
    {
        PyObject *old = var_kws.object;
        var_kws.object = tmp_assign_source_82;
        Py_DECREF( old );
    }
    branch_end_33:;
    tmp_dircall_arg1_3 = var_linker.object;

    if ( tmp_dircall_arg1_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87030 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_3 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_objects.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81736 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_ext_filename.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87082 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 1, tmp_tuple_element_7 );
    tmp_dircall_arg3_3 = _PyDict_NewPresized( 7 );
    tmp_dict_value_25 = var_libraries.object;

    if ( tmp_dict_value_25 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 416;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_25 = const_str_plain_libraries;
    PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_25, tmp_dict_value_25 );
    tmp_dict_value_26 = var_library_dirs.object;

    if ( tmp_dict_value_26 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83284 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_26 = const_str_plain_library_dirs;
    PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_26, tmp_dict_value_26 );
    tmp_source_name_107 = par_ext.object;

    if ( tmp_source_name_107 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 418;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_27 = LOOKUP_ATTRIBUTE( tmp_source_name_107, const_str_plain_runtime_library_dirs );
    if ( tmp_dict_value_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_3 );

        frame_function->f_lineno = 418;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_27 = const_str_plain_runtime_library_dirs;
    PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_27, tmp_dict_value_27 );
    Py_DECREF( tmp_dict_value_27 );
    tmp_dict_value_28 = var_extra_args.object;

    if ( tmp_dict_value_28 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86807 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_28 = const_str_plain_extra_postargs;
    PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_28, tmp_dict_value_28 );
    tmp_source_name_108 = par_self.object;

    if ( tmp_source_name_108 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 420;
        goto frame_exception_exit_1;
    }

    tmp_called_46 = LOOKUP_ATTRIBUTE( tmp_source_name_108, const_str_plain_get_export_symbols );
    if ( tmp_called_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_3 );

        frame_function->f_lineno = 420;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_55 = par_ext.object;

    if ( tmp_call_arg_element_55 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_3 );
        Py_DECREF( tmp_called_46 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 420;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 420;
    tmp_dict_value_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_46, tmp_call_arg_element_55 );
    Py_DECREF( tmp_called_46 );
    if ( tmp_dict_value_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_3 );

        frame_function->f_lineno = 420;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_29 = const_str_plain_export_symbols;
    PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_29, tmp_dict_value_29 );
    Py_DECREF( tmp_dict_value_29 );
    tmp_source_name_109 = par_self.object;

    if ( tmp_source_name_109 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_30 = LOOKUP_ATTRIBUTE( tmp_source_name_109, const_str_plain_debug );
    if ( tmp_dict_value_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_3 );

        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_30 = const_str_plain_debug;
    PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_30, tmp_dict_value_30 );
    Py_DECREF( tmp_dict_value_30 );
    tmp_source_name_110 = par_self.object;

    if ( tmp_source_name_110 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_31 = LOOKUP_ATTRIBUTE( tmp_source_name_110, const_str_plain_build_temp );
    if ( tmp_dict_value_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_3 );

        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_31 = const_str_plain_build_temp;
    PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_31, tmp_dict_value_31 );
    Py_DECREF( tmp_dict_value_31 );
    tmp_dircall_arg4_3 = var_kws.object;

    tmp_unused = impl_function_5_complex_call_helper_pos_keywords_star_dict_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_3 ), tmp_dircall_arg2_3, tmp_dircall_arg3_3, INCREASE_REFCOUNT( tmp_dircall_arg4_3 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
    if ((var_sources.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sources,
            var_sources.object
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
    if ((var_modpath.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_modpath,
            var_modpath.object
        );

    }
    if ((var_package.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package,
            var_package.object
        );

    }
    if ((var_base.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_base,
            var_base.object
        );

    }
    if ((var_build_py.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build_py,
            var_build_py.object
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
    if ((var_ext_filename.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ext_filename,
            var_ext_filename.object
        );

    }
    if ((var_depends.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_depends,
            var_depends.object
        );

    }
    if ((var_extra_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_extra_args,
            var_extra_args.object
        );

    }
    if ((var_macros.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_macros,
            var_macros.object
        );

    }
    if ((var_undef.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_undef,
            var_undef.object
        );

    }
    if ((var_c_sources.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c_sources,
            var_c_sources.object
        );

    }
    if ((var_cxx_sources.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cxx_sources,
            var_cxx_sources.object
        );

    }
    if ((var_f_sources.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_f_sources,
            var_f_sources.object
        );

    }
    if ((var_fmodule_sources.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fmodule_sources,
            var_fmodule_sources.object
        );

    }
    if ((var_fcompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fcompiler,
            var_fcompiler.object
        );

    }
    if ((var_cxx_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cxx_compiler,
            var_cxx_compiler.object
        );

    }
    if ((var_kws.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_kws,
            var_kws.object
        );

    }
    if ((var_output_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_output_dir,
            var_output_dir.object
        );

    }
    if ((var_include_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_include_dirs,
            var_include_dirs.object
        );

    }
    if ((var_c_objects.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c_objects,
            var_c_objects.object
        );

    }
    if ((var_extra_postargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_extra_postargs,
            var_extra_postargs.object
        );

    }
    if ((var_f_objects.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_f_objects,
            var_f_objects.object
        );

    }
    if ((var_module_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_module_dirs,
            var_module_dirs.object
        );

    }
    if ((var_module_build_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_module_build_dir,
            var_module_build_dir.object
        );

    }
    if ((var_existing_modules.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_existing_modules,
            var_existing_modules.object
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
    if ((var_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t,
            var_t.object
        );

    }
    if ((var_objects.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_objects,
            var_objects.object
        );

    }
    if ((var_libraries.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_libraries,
            var_libraries.object
        );

    }
    if ((var_library_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_library_dirs,
            var_library_dirs.object
        );

    }
    if ((var_linker.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_linker,
            var_linker.object
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
    if ((par_ext.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ext,
            par_ext.object
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
static PyObject *fparse_function_5_build_extension_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_ext = NULL;
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
                PyErr_Format( PyExc_TypeError, "build_extension() keywords must be strings" );
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
            if ( found == false && const_str_plain_ext == key )
            {
                assert( _python_par_ext == NULL );
                _python_par_ext = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ext, key ) == 1 )
            {
                assert( _python_par_ext == NULL );
                _python_par_ext = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "build_extension() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_ext != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_ext = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_ext == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_ext = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_ext == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_ext };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_build_extension_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, _python_par_self, _python_par_ext );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_ext );

    return NULL;
}

static PyObject *dparse_function_5_build_extension_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_5_build_extension_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_build_extension_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_c_sources )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_c_sources; par_c_sources.object = _python_par_c_sources;
    PyObjectLocalVariable var_build_src;
    PyObjectLocalVariable var_build_clib;
    PyObjectLocalVariable var_objects;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
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
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1c7e26164ec7f8dad1de484a15669784, module_numpy$distutils$command$build_ext );
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

        frame_function->f_lineno = 425;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_finalized_command );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_build_src;
    frame_function->f_lineno = 425;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_build_src );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
        goto frame_exception_exit_1;
    }
    assert( var_build_src.object == NULL );
    var_build_src.object = tmp_assign_source_1;

    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get_finalized_command );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_build_clib;
    frame_function->f_lineno = 426;
    tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_build_clib );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    assert( var_build_clib.object == NULL );
    var_build_clib.object = tmp_assign_source_2;

    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 427;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_compiler );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 427;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_compile );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 427;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyList_New( 1 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 427;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );

        frame_function->f_lineno = 427;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );

        frame_function->f_lineno = 427;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = var_build_src.object;

    tmp_call_arg_element_4 = const_str_digest_06b422385f239f2395aff6a1cd60f30c;
    frame_function->f_lineno = 428;
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );

        frame_function->f_lineno = 428;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_9 = par_self.object;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 429;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_build_temp );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 429;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_output_dir;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 429;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 429;
        goto frame_exception_exit_1;
    }
    assert( var_objects.object == NULL );
    var_objects.object = tmp_assign_source_3;

    tmp_source_name_11 = par_self.object;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 430;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_compiler );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 430;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_create_static_lib );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 430;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_objects.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_str_plain__gfortran_workaround;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 1, tmp_tuple_element_2 );
    tmp_call_kw_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_2 = var_build_clib.object;

    tmp_dict_key_2 = const_str_plain_output_dir;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_source_name_12 = par_self.object;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 430;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_debug );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 430;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_debug;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    frame_function->f_lineno = 430;
    tmp_unused = CALL_FUNCTION( tmp_called_5, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 430;
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
    if ((var_build_src.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build_src,
            var_build_src.object
        );

    }
    if ((var_build_clib.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build_clib,
            var_build_clib.object
        );

    }
    if ((var_objects.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_objects,
            var_objects.object
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
    if ((par_c_sources.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c_sources,
            par_c_sources.object
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
static PyObject *fparse_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_c_sources = NULL;
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
                PyErr_Format( PyExc_TypeError, "_add_dummy_mingwex_sym() keywords must be strings" );
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
            if ( found == false && const_str_plain_c_sources == key )
            {
                assert( _python_par_c_sources == NULL );
                _python_par_c_sources = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_c_sources, key ) == 1 )
            {
                assert( _python_par_c_sources == NULL );
                _python_par_c_sources = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_add_dummy_mingwex_sym() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_c_sources != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_c_sources = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_c_sources == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_c_sources = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_c_sources == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_c_sources };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, _python_par_self, _python_par_c_sources );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_c_sources );

    return NULL;
}

static PyObject *dparse_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_fcompiler, PyObject *_python_par_c_libraries, PyObject *_python_par_c_library_dirs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_fcompiler; par_fcompiler.object = _python_par_fcompiler;
    PyObjectLocalVariable par_c_libraries; par_c_libraries.object = _python_par_c_libraries;
    PyObjectLocalVariable par_c_library_dirs; par_c_library_dirs.object = _python_par_c_library_dirs;
    PyObjectLocalVariable var_libname;
    PyObjectLocalVariable var_fileexists;
    PyObjectLocalVariable var_libdir;
    PyObjectLocalVariable var_libfile;
    PyObjectLocalVariable var_libfile2;
    PyObjectLocalVariable var_f_lib_dirs;
    PyObjectLocalVariable var_dir;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_o;
    PyObjectLocalVariable var_lib;
    PyObjectLocalVariable var_p;
    PyObjectLocalVariable var_dst_name;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_for_loop_4__for_iterator;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_left_6;
    PyObject *tmp_binop_left_7;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_binop_right_7;
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
    PyObject *tmp_call_arg_element_26;
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
    PyObject *tmp_called_16;
    PyObject *tmp_called_17;
    PyObject *tmp_called_18;
    PyObject *tmp_called_19;
    PyObject *tmp_called_20;
    int tmp_cmp_NotIn_1;
    int tmp_cmp_NotIn_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
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
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_33060f533469ab29d646bf99d0635b74, module_numpy$distutils$command$build_ext );
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
    tmp_compare_left_1 = par_fcompiler.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 434;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_iter_arg_1 = par_c_libraries.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87140 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 436;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 436;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_1;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_2 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 436;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    tmp_assign_source_3 = tmp_for_loop_1__iter_value.object;

    if (var_libname.object == NULL)
    {
        var_libname.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = var_libname.object;
        var_libname.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
    tmp_source_name_1 = var_libname.object;

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_startswith );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = const_str_plain_msvc;
    frame_function->f_lineno = 437;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 437;
        goto try_finally_handler_1;
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
    goto loop_start_1;
    branch_no_2:;
    tmp_assign_source_4 = Py_False;
    if (var_fileexists.object == NULL)
    {
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_fileexists.object;
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_assign_source_5 = NULL;
    // Tried code
    tmp_iter_arg_2 = NULL;
    // Tried code
    tmp_assign_source_6 = par_c_library_dirs.object;

    if ( tmp_assign_source_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87197 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 439;
        goto try_finally_handler_3;
    }

    if (tmp_or_1__value_1.object == NULL)
    {
        tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = tmp_or_1__value_1.object;
        tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
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
    tmp_iter_arg_2 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_iter_arg_2 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_iter_arg_2 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_iter_arg_2 = PyList_New( 0 );
    // Re-reraise as necessary after finally was executed.
    goto finally_end_1;
    finally_end_1:;
    condexpr_end_1:;
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

    goto finally_end_2;
    finally_end_2:;
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
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

        goto try_finally_handler_1;
    }

    goto finally_end_3;
    finally_end_3:;
    if (tmp_for_loop_2__for_iterator.object == NULL)
    {
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__for_iterator.object;
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_7 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 439;
            goto try_finally_handler_5;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_assign_source_8 = tmp_for_loop_2__iter_value.object;

    if (var_libdir.object == NULL)
    {
        var_libdir.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_libdir.object;
        var_libdir.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 440;
        goto try_finally_handler_5;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 440;
        goto try_finally_handler_5;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 440;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_2 = var_libdir.object;

    tmp_binop_left_1 = const_str_digest_db5bfec63bd14f8434476719cf705ad5;
    tmp_binop_right_1 = var_libname.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 440;
        goto try_finally_handler_5;
    }

    tmp_call_arg_element_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 440;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 440;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 440;
        goto try_finally_handler_5;
    }
    if (var_libfile.object == NULL)
    {
        var_libfile.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = var_libfile.object;
        var_libfile.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 441;
        goto try_finally_handler_5;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
        goto try_finally_handler_5;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_4 = var_libfile.object;

    frame_function->f_lineno = 441;
    tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
        goto try_finally_handler_5;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 441;
        goto try_finally_handler_5;
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
    tmp_assign_source_10 = Py_True;
    if (var_fileexists.object == NULL)
    {
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_fileexists.object;
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    goto loop_end_2;
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
        goto try_finally_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
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

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_1;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_cond_value_4 = var_fileexists.object;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87257 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 444;
        goto try_finally_handler_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 444;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_4 == 1)
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
    tmp_assign_source_11 = Py_False;
    if (var_fileexists.object == NULL)
    {
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = var_fileexists.object;
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    tmp_iter_arg_3 = par_c_library_dirs.object;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87197 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 447;
        goto try_finally_handler_1;
    }

    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 447;
        goto try_finally_handler_1;
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
        frame_function->f_lineno = 447;
            goto try_finally_handler_6;
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

    if (var_libdir.object == NULL)
    {
        var_libdir.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = var_libdir.object;
        var_libdir.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 448;
        goto try_finally_handler_6;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_path );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 448;
        goto try_finally_handler_6;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 448;
        goto try_finally_handler_6;
    }
    tmp_call_arg_element_5 = var_libdir.object;

    tmp_binop_left_2 = const_str_digest_281372bea41c1cc2820284b52b815f98;
    tmp_binop_right_2 = var_libname.object;

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 448;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_6 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 448;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 448;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 448;
        goto try_finally_handler_6;
    }
    if (var_libfile.object == NULL)
    {
        var_libfile.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_libfile.object;
        var_libfile.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 449;
        goto try_finally_handler_6;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto try_finally_handler_6;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto try_finally_handler_6;
    }
    tmp_call_arg_element_7 = var_libfile.object;

    frame_function->f_lineno = 449;
    tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto try_finally_handler_6;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 449;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 452;
        goto try_finally_handler_6;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_path );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 452;
        goto try_finally_handler_6;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_join );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 452;
        goto try_finally_handler_6;
    }
    tmp_source_name_12 = par_self.object;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 452;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_build_temp );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 452;
        goto try_finally_handler_6;
    }
    tmp_binop_left_3 = var_libname.object;

    if ( tmp_binop_left_3 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 452;
        goto try_finally_handler_6;
    }

    tmp_binop_right_3 = const_str_digest_696d37d40d3d675ed013f0aeba963c8f;
    tmp_call_arg_element_9 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 452;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 452;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 452;
        goto try_finally_handler_6;
    }
    if (var_libfile2.object == NULL)
    {
        var_libfile2.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = var_libfile2.object;
        var_libfile2.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_copy_file );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy_file );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87313 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 453;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_10 = var_libfile.object;

    tmp_call_arg_element_11 = var_libfile2.object;

    frame_function->f_lineno = 453;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_10, tmp_call_arg_element_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 453;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_13 = par_self.object;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 454;
        goto try_finally_handler_6;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_build_temp );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 454;
        goto try_finally_handler_6;
    }
    tmp_compare_right_2 = par_c_library_dirs.object;

    if ( tmp_compare_right_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87197 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 454;
        goto try_finally_handler_6;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 454;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_14 = par_c_library_dirs.object;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87197 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 455;
        goto try_finally_handler_6;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 455;
        goto try_finally_handler_6;
    }
    tmp_source_name_15 = par_self.object;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 455;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_build_temp );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 455;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 455;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 455;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_assign_source_17 = Py_True;
    if (var_fileexists.object == NULL)
    {
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
    }
    else
    {
        PyObject *old = var_fileexists.object;
        var_fileexists.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
        Py_DECREF( old );
    }
    goto loop_end_3;
    branch_no_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 447;
        goto try_finally_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
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

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_1;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_cond_value_6 = var_fileexists.object;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87257 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 458;
        goto try_finally_handler_1;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 458;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    goto loop_start_1;
    branch_no_7:;
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 459;
        goto try_finally_handler_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_warn );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 459;
        goto try_finally_handler_1;
    }
    tmp_binop_left_4 = const_str_digest_45ccd415cc3ac96c00d7d81674d1238e;
    tmp_binop_right_4 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_libname.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78664 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 460;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_c_library_dirs.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87197 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 460;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_13 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 459;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 459;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 459;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 436;
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
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto frame_exception_exit_1;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_assign_source_18 = PyList_New( 0 );
    assert( var_f_lib_dirs.object == NULL );
    var_f_lib_dirs.object = tmp_assign_source_18;

    tmp_source_name_17 = par_fcompiler.object;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 464;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_library_dirs );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 464;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 464;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator.object == NULL );
    tmp_for_loop_4__for_iterator.object = tmp_assign_source_19;

    // Tried code
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator.object;

    tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_4 );
    if (tmp_assign_source_20 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_4;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 464;
            goto try_finally_handler_7;
        }
    }

    if (tmp_for_loop_4__iter_value.object == NULL)
    {
        tmp_for_loop_4__iter_value.object = tmp_assign_source_20;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__iter_value.object;
        tmp_for_loop_4__iter_value.object = tmp_assign_source_20;
        Py_DECREF( old );
    }
    tmp_assign_source_21 = tmp_for_loop_4__iter_value.object;

    if (var_dir.object == NULL)
    {
        var_dir.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
    }
    else
    {
        PyObject *old = var_dir.object;
        var_dir.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
        Py_DECREF( old );
    }
    tmp_source_name_18 = var_dir.object;

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_startswith );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 467;
        goto try_finally_handler_7;
    }
    tmp_call_arg_element_14 = const_str_digest_6786c771ff638c2613791fc0ba5bb563;
    frame_function->f_lineno = 467;
    tmp_cond_value_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 467;
        goto try_finally_handler_7;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        frame_function->f_lineno = 467;
        goto try_finally_handler_7;
    }
    Py_DECREF( tmp_cond_value_7 );
    if (tmp_cond_truth_7 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    // Tried code
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_exec_command );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exec_command );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80776 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 468;
        goto try_finally_handler_8;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyList_New( 3 );
    tmp_list_element_1 = const_str_plain_cygpath;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_2, 0, tmp_list_element_1 );
    tmp_list_element_1 = const_str_digest_b0db852c702255d781b62d43833a84e9;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_2, 1, tmp_list_element_1 );
    tmp_list_element_1 = var_dir.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_2, 2, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_3be937dfcb6326ab62ea1b692cc71009 );
    frame_function->f_lineno = 468;
    tmp_iter_arg_5 = CALL_FUNCTION( tmp_called_11, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
        goto try_finally_handler_8;
    }
    tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
        goto try_finally_handler_8;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_22;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_22;
        Py_DECREF( old );
    }
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_23 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_23 == NULL )
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


        frame_function->f_lineno = 468;
        goto try_finally_handler_8;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_23;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_23;
        Py_DECREF( old );
    }
    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_24 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_24 == NULL )
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


        frame_function->f_lineno = 468;
        goto try_finally_handler_8;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_24;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_24;
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

            goto try_finally_handler_8;
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

        goto try_finally_handler_8;
    }
    tmp_assign_source_25 = tmp_tuple_unpack_1__element_1.object;

    if (var_s.object == NULL)
    {
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
    }
    else
    {
        PyObject *old = var_s.object;
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
        Py_DECREF( old );
    }
    tmp_assign_source_26 = tmp_tuple_unpack_1__element_2.object;

    if (var_o.object == NULL)
    {
        var_o.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
    }
    else
    {
        PyObject *old = var_o.object;
        var_o.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
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

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
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
    tmp_cond_value_8 = var_s.object;

    if ( tmp_cond_value_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 469;
        goto try_finally_handler_7;
    }

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 469;
        goto try_finally_handler_7;
    }
    if (tmp_cond_truth_8 == 1)
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    tmp_assign_source_27 = var_o.object;

    if ( tmp_assign_source_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12331 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 470;
        goto try_finally_handler_7;
    }

    if (var_dir.object == NULL)
    {
        var_dir.object = INCREASE_REFCOUNT( tmp_assign_source_27 );
    }
    else
    {
        PyObject *old = var_dir.object;
        var_dir.object = INCREASE_REFCOUNT( tmp_assign_source_27 );
        Py_DECREF( old );
    }
    branch_no_9:;
    branch_no_8:;
    tmp_source_name_19 = var_f_lib_dirs.object;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87351 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 471;
        goto try_finally_handler_7;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_append );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 471;
        goto try_finally_handler_7;
    }
    tmp_call_arg_element_15 = var_dir.object;

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87407 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 471;
        goto try_finally_handler_7;
    }

    frame_function->f_lineno = 471;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 471;
        goto try_finally_handler_7;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 464;
        goto try_finally_handler_7;
    }
    goto loop_start_4;
    loop_end_4:;
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

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_4__iter_value.object );
    tmp_for_loop_4__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator.object );
    tmp_for_loop_4__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto frame_exception_exit_1;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_source_name_20 = par_c_library_dirs.object;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87197 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 472;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_extend );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 472;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = var_f_lib_dirs.object;

    if ( tmp_call_arg_element_16 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87351 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 472;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 472;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 472;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_21 = par_fcompiler.object;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85256 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_6 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_libraries );
    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_5__for_iterator.object == NULL );
    tmp_for_loop_5__for_iterator.object = tmp_assign_source_28;

    // Tried code
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator.object;

    tmp_assign_source_29 = ITERATOR_NEXT( tmp_next_source_5 );
    if (tmp_assign_source_29 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_5;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 475;
            goto try_finally_handler_9;
        }
    }

    if (tmp_for_loop_5__iter_value.object == NULL)
    {
        tmp_for_loop_5__iter_value.object = tmp_assign_source_29;
    }
    else
    {
        PyObject *old = tmp_for_loop_5__iter_value.object;
        tmp_for_loop_5__iter_value.object = tmp_assign_source_29;
        Py_DECREF( old );
    }
    tmp_assign_source_30 = tmp_for_loop_5__iter_value.object;

    if (var_lib.object == NULL)
    {
        var_lib.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
    }
    else
    {
        PyObject *old = var_lib.object;
        var_lib.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
        Py_DECREF( old );
    }
    tmp_source_name_22 = var_lib.object;

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_startswith );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 476;
        goto try_finally_handler_9;
    }
    tmp_call_arg_element_17 = const_str_plain_msvc;
    frame_function->f_lineno = 476;
    tmp_cond_value_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 476;
        goto try_finally_handler_9;
    }
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        frame_function->f_lineno = 476;
        goto try_finally_handler_9;
    }
    Py_DECREF( tmp_cond_value_9 );
    if (tmp_cond_truth_9 == 1)
    {
        goto branch_no_10;
    }
    else
    {
        goto branch_yes_10;
    }
    branch_yes_10:;
    tmp_source_name_23 = par_c_libraries.object;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87140 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 477;
        goto try_finally_handler_9;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_append );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 477;
        goto try_finally_handler_9;
    }
    tmp_call_arg_element_18 = var_lib.object;

    frame_function->f_lineno = 477;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 477;
        goto try_finally_handler_9;
    }
    Py_DECREF( tmp_unused );
    tmp_called_16 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_combine_paths );

    if (unlikely( tmp_called_16 == NULL ))
    {
        tmp_called_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_combine_paths );
    }

    if ( tmp_called_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87456 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 478;
        goto try_finally_handler_9;
    }

    tmp_call_arg_element_19 = var_f_lib_dirs.object;

    if ( tmp_call_arg_element_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87351 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 478;
        goto try_finally_handler_9;
    }

    tmp_binop_left_6 = const_str_plain_lib;
    tmp_binop_right_6 = var_lib.object;

    tmp_binop_left_5 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 478;
        goto try_finally_handler_9;
    }
    tmp_binop_right_5 = const_str_digest_51be3512c32becf5c3cb2669da2620f7;
    tmp_call_arg_element_20 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 478;
        goto try_finally_handler_9;
    }
    frame_function->f_lineno = 478;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS2( tmp_called_16, tmp_call_arg_element_19, tmp_call_arg_element_20 );
    Py_DECREF( tmp_call_arg_element_20 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 478;
        goto try_finally_handler_9;
    }
    if (var_p.object == NULL)
    {
        var_p.object = tmp_assign_source_31;
    }
    else
    {
        PyObject *old = var_p.object;
        var_p.object = tmp_assign_source_31;
        Py_DECREF( old );
    }
    tmp_cond_value_10 = var_p.object;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 479;
        goto try_finally_handler_9;
    }
    if (tmp_cond_truth_10 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 480;
        goto try_finally_handler_9;
    }

    tmp_source_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_path );
    if ( tmp_source_name_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 480;
        goto try_finally_handler_9;
    }
    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_join );
    Py_DECREF( tmp_source_name_24 );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 480;
        goto try_finally_handler_9;
    }
    tmp_source_name_26 = par_self.object;

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_called_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 480;
        goto try_finally_handler_9;
    }

    tmp_call_arg_element_21 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_build_temp );
    if ( tmp_call_arg_element_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_17 );

        frame_function->f_lineno = 480;
        goto try_finally_handler_9;
    }
    tmp_binop_left_7 = var_lib.object;

    tmp_binop_right_7 = const_str_digest_696d37d40d3d675ed013f0aeba963c8f;
    tmp_call_arg_element_22 = BINARY_OPERATION_ADD( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_call_arg_element_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_arg_element_21 );

        frame_function->f_lineno = 480;
        goto try_finally_handler_9;
    }
    frame_function->f_lineno = 480;
    tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS2( tmp_called_17, tmp_call_arg_element_21, tmp_call_arg_element_22 );
    Py_DECREF( tmp_called_17 );
    Py_DECREF( tmp_call_arg_element_21 );
    Py_DECREF( tmp_call_arg_element_22 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 480;
        goto try_finally_handler_9;
    }
    if (var_dst_name.object == NULL)
    {
        var_dst_name.object = tmp_assign_source_32;
    }
    else
    {
        PyObject *old = var_dst_name.object;
        var_dst_name.object = tmp_assign_source_32;
        Py_DECREF( old );
    }
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 481;
        goto try_finally_handler_9;
    }

    tmp_source_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_path );
    if ( tmp_source_name_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 481;
        goto try_finally_handler_9;
    }
    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_27 );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 481;
        goto try_finally_handler_9;
    }
    tmp_call_arg_element_23 = var_dst_name.object;

    frame_function->f_lineno = 481;
    tmp_cond_value_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_23 );
    Py_DECREF( tmp_called_18 );
    if ( tmp_cond_value_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 481;
        goto try_finally_handler_9;
    }
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_11 );

        frame_function->f_lineno = 481;
        goto try_finally_handler_9;
    }
    Py_DECREF( tmp_cond_value_11 );
    if (tmp_cond_truth_11 == 1)
    {
        goto branch_no_12;
    }
    else
    {
        goto branch_yes_12;
    }
    branch_yes_12:;
    tmp_called_19 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_copy_file );

    if (unlikely( tmp_called_19 == NULL ))
    {
        tmp_called_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy_file );
    }

    if ( tmp_called_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87313 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 482;
        goto try_finally_handler_9;
    }

    tmp_subscr_target_1 = var_p.object;

    tmp_subscr_subscript_1 = const_int_0;
    tmp_call_arg_element_24 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_call_arg_element_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 482;
        goto try_finally_handler_9;
    }
    tmp_call_arg_element_25 = var_dst_name.object;

    frame_function->f_lineno = 482;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_19, tmp_call_arg_element_24, tmp_call_arg_element_25 );
    Py_DECREF( tmp_call_arg_element_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 482;
        goto try_finally_handler_9;
    }
    Py_DECREF( tmp_unused );
    branch_no_12:;
    tmp_source_name_29 = par_self.object;

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 483;
        goto try_finally_handler_9;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_build_temp );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 483;
        goto try_finally_handler_9;
    }
    tmp_compare_right_3 = par_c_library_dirs.object;

    if ( tmp_compare_right_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87197 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 483;
        goto try_finally_handler_9;
    }

    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_NotIn_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 483;
        goto try_finally_handler_9;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_NotIn_2 == 0)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_30 = par_c_library_dirs.object;

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87197 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 484;
        goto try_finally_handler_9;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_append );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 484;
        goto try_finally_handler_9;
    }
    tmp_source_name_31 = par_self.object;

    if ( tmp_source_name_31 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 484;
        goto try_finally_handler_9;
    }

    tmp_call_arg_element_26 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_build_temp );
    if ( tmp_call_arg_element_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );

        frame_function->f_lineno = 484;
        goto try_finally_handler_9;
    }
    frame_function->f_lineno = 484;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_20, tmp_call_arg_element_26 );
    Py_DECREF( tmp_called_20 );
    Py_DECREF( tmp_call_arg_element_26 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 484;
        goto try_finally_handler_9;
    }
    Py_DECREF( tmp_unused );
    branch_no_13:;
    branch_no_11:;
    branch_no_10:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto try_finally_handler_9;
    }
    goto loop_start_5;
    loop_end_5:;
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

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_5__iter_value.object );
    tmp_for_loop_5__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_5__for_iterator.object );
    tmp_for_loop_5__for_iterator.object = NULL;

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
    if ((var_f_lib_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_f_lib_dirs,
            var_f_lib_dirs.object
        );

    }
    if ((var_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dir,
            var_dir.object
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
    if ((var_lib.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lib,
            var_lib.object
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
    if ((var_dst_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dst_name,
            var_dst_name.object
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
    if ((par_fcompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fcompiler,
            par_fcompiler.object
        );

    }
    if ((par_c_libraries.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c_libraries,
            par_c_libraries.object
        );

    }
    if ((par_c_library_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c_library_dirs,
            par_c_library_dirs.object
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
static PyObject *fparse_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_fcompiler = NULL;
    PyObject *_python_par_c_libraries = NULL;
    PyObject *_python_par_c_library_dirs = NULL;
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
                PyErr_Format( PyExc_TypeError, "_libs_with_msvc_and_fortran() keywords must be strings" );
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
            if ( found == false && const_str_plain_fcompiler == key )
            {
                assert( _python_par_fcompiler == NULL );
                _python_par_fcompiler = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_c_libraries == key )
            {
                assert( _python_par_c_libraries == NULL );
                _python_par_c_libraries = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_c_library_dirs == key )
            {
                assert( _python_par_c_library_dirs == NULL );
                _python_par_c_library_dirs = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_fcompiler, key ) == 1 )
            {
                assert( _python_par_fcompiler == NULL );
                _python_par_fcompiler = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_c_libraries, key ) == 1 )
            {
                assert( _python_par_c_libraries == NULL );
                _python_par_c_libraries = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_c_library_dirs, key ) == 1 )
            {
                assert( _python_par_c_library_dirs == NULL );
                _python_par_c_library_dirs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_libs_with_msvc_and_fortran() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_fcompiler != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_fcompiler = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_fcompiler == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_fcompiler = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_c_libraries != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_c_libraries = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_c_libraries == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_c_libraries = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_c_library_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_c_library_dirs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_c_library_dirs == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_c_library_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_fcompiler == NULL || _python_par_c_libraries == NULL || _python_par_c_library_dirs == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_fcompiler, _python_par_c_libraries, _python_par_c_library_dirs };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, _python_par_self, _python_par_fcompiler, _python_par_c_libraries, _python_par_c_library_dirs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_fcompiler );
    Py_XDECREF( _python_par_c_libraries );
    Py_XDECREF( _python_par_c_library_dirs );

    return NULL;
}

static PyObject *dparse_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_get_source_files_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_filenames;
    PyObjectLocalVariable var_ext;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4b98c97026217655487cded716ecf63f, module_numpy$distutils$command$build_ext );
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

        frame_function->f_lineno = 487;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_check_extensions_list );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 487;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 487;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_extensions );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 487;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 487;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 487;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_filenames.object == NULL );
    var_filenames.object = tmp_assign_source_1;

    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 489;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extensions );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 489;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 489;
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
        frame_function->f_lineno = 489;
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

    if (var_ext.object == NULL)
    {
        var_ext.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_ext.object;
        var_ext.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_source_name_4 = var_filenames.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84683 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 490;
        goto try_finally_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_extend );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 490;
        goto try_finally_handler_1;
    }
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_get_ext_source_files );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_ext_source_files );
    }

    if ( tmp_called_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87498 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 490;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_3 = var_ext.object;

    frame_function->f_lineno = 490;
    tmp_call_arg_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 490;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 490;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 490;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 489;
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
    tmp_return_value = var_filenames.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84683 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 491;
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
    if ((var_filenames.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_filenames,
            var_filenames.object
        );

    }
    if ((var_ext.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ext,
            var_ext.object
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
static PyObject *fparse_function_8_get_source_files_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_source_files() keywords must be strings" );
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
                   "get_source_files() got an unexpected keyword argument '%s'",
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


    return impl_function_8_get_source_files_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_8_get_source_files_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_8_get_source_files_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_get_source_files_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_get_outputs_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_outputs;
    PyObjectLocalVariable var_ext;
    PyObjectLocalVariable var_fullname;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_28cbb6cddce7bb282d25ca60820e129b, module_numpy$distutils$command$build_ext );
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

        frame_function->f_lineno = 494;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_check_extensions_list );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 494;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 494;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_extensions );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 494;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 494;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 494;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_outputs.object == NULL );
    var_outputs.object = tmp_assign_source_1;

    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 497;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extensions );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 497;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 497;
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
        frame_function->f_lineno = 497;
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

    if (var_ext.object == NULL)
    {
        var_ext.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_ext.object;
        var_ext.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_source_name_4 = var_ext.object;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sources );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 498;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 498;
        goto try_finally_handler_1;
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
    goto loop_start_1;
    branch_no_1:;
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 500;
        goto try_finally_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get_ext_fullname );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 500;
        goto try_finally_handler_1;
    }
    tmp_source_name_6 = var_ext.object;

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_name );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 500;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 500;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 500;
        goto try_finally_handler_1;
    }
    if (var_fullname.object == NULL)
    {
        var_fullname.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = var_fullname.object;
        var_fullname.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_source_name_7 = var_outputs.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87547 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 501;
        goto try_finally_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_append );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 501;
        goto try_finally_handler_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 501;
        goto try_finally_handler_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 501;
        goto try_finally_handler_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_join );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 501;
        goto try_finally_handler_1;
    }
    tmp_source_name_10 = par_self.object;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 501;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_build_lib );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 501;
        goto try_finally_handler_1;
    }
    tmp_source_name_11 = par_self.object;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 502;
        goto try_finally_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_get_ext_filename );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 502;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_6 = var_fullname.object;

    frame_function->f_lineno = 502;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 502;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 502;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 502;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 501;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 501;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 497;
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
    tmp_return_value = var_outputs.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87547 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 503;
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
    if ((var_outputs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_outputs,
            var_outputs.object
        );

    }
    if ((var_ext.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ext,
            var_ext.object
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
static PyObject *fparse_function_9_get_outputs_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_outputs() keywords must be strings" );
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
                   "get_outputs() got an unexpected keyword argument '%s'",
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


    return impl_function_9_get_outputs_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_9_get_outputs_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_9_get_outputs_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_get_outputs_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_initialize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        dparse_function_1_initialize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        const_str_plain_initialize_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_72cc4542990c329ceeba7ab6277f32bc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_finalize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_finalize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        dparse_function_2_finalize_options_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        const_str_plain_finalize_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_65619a90cc71326cdff6702e381b0541,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_run_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_run_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        dparse_function_3_run_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        const_str_plain_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2e7ab93f79a53a6cf61ebd7304a8a32b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_swig_sources_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_swig_sources_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        dparse_function_4_swig_sources_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        const_str_plain_swig_sources,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_12d2d864317dab8ab1ecee0aea14710b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_build_extension_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_build_extension_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        dparse_function_5_build_extension_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        const_str_plain_build_extension,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_58489f9e855ecc2fc22e0fd53c4c78c7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        dparse_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        const_str_plain__add_dummy_mingwex_sym,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_00f7011a87204026976182732eebc3f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        dparse_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        const_str_plain__libs_with_msvc_and_fortran,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_922c840479f53dbbbae8ad6dd688aa26,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_get_source_files_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_get_source_files_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        dparse_function_8_get_source_files_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        const_str_plain_get_source_files,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_80be05a059ccfa7fd2711db2137f474a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_get_outputs_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_get_outputs_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        dparse_function_9_get_outputs_of_class_1_build_ext_of_module_numpy$distutils$command$build_ext,
        const_str_plain_get_outputs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_97fa0e12cabfa0c53fec6a5dfb4209d7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils$command$build_ext =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils.command.build_ext",   /* m_name */
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

MOD_INIT_DECL( numpy$distutils$command$build_ext )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils$command$build_ext );
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

    // puts( "in initnumpy$distutils$command$build_ext" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils$command$build_ext = Py_InitModule4(
        "numpy.distutils.command.build_ext",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils$command$build_ext = PyModule_Create( &mdef_numpy$distutils$command$build_ext );
#endif

    moduledict_numpy$distutils$command$build_ext = (PyDictObject *)((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;

    assertObject( module_numpy$distutils$command$build_ext );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_42a310526012119baba197e135337e96, module_numpy$distutils$command$build_ext );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils$command$build_ext );

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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_class_bases_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_key_1;
    int tmp_exc_match_exception_match_1;
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
    PyObject *tmp_import_globals_20;
    PyObject *tmp_import_globals_21;
    PyObject *tmp_import_globals_22;
    PyObject *tmp_import_globals_23;
    PyObject *tmp_import_globals_24;
    PyObject *tmp_import_globals_25;
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
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    tmp_assign_source_1 = const_str_digest_3f7da3abb6fade90660a79422b97e777;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ec893437fee87c799d7d05a01c2e655b;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_3c744a44fa6f15c1cfbf030cb5aaa3af, module_numpy$distutils$command$build_ext );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 6;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 7;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_glob, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_glob_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_glob );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_glob, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_d26e0a82bef27643030272f7ebabd7e2, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_newer_group_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_newer_group );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_newer_group, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_ac719e6487ba32e132f9bd3899f7dbcd, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_build_ext_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_build_ext );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_old_build_ext, tmp_assign_source_10 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc, tmp_import_globals_9, tmp_import_globals_9, const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_DistutilsFileError );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsFileError, tmp_assign_source_11 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc, tmp_import_globals_10, tmp_import_globals_10, const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_DistutilsSetupError );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsSetupError, tmp_assign_source_12 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc, tmp_import_globals_11, tmp_import_globals_11, const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_DistutilsError );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsError, tmp_assign_source_13 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_8daee860afb12937dc1f5ec4646035c2, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_copy_file_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_copy_file );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_copy_file, tmp_assign_source_14 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_c0fff8163aabf90b654f2f3ba03fe760, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_plain_log_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_log );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_15 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_9ee0065fb030b4d6c1f397a7967d740e, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_plain_exec_command_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_exec_command );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_exec_command, tmp_assign_source_16 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_b3256b58bf2b478cd81d90e27e3282d2, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_combine_paths_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_combine_paths );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_combine_paths, tmp_assign_source_17 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_16, tmp_import_globals_16, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_filter_sources );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_filter_sources, tmp_assign_source_18 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_17, tmp_import_globals_17, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_has_f_sources );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_has_f_sources, tmp_assign_source_19 );
    tmp_import_globals_18 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_18, tmp_import_globals_18, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_has_cxx_sources );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_has_cxx_sources, tmp_assign_source_20 );
    tmp_import_globals_19 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_19, tmp_import_globals_19, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_get_ext_source_files );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_get_ext_source_files, tmp_assign_source_21 );
    tmp_import_globals_20 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_20, tmp_import_globals_20, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_get_numpy_include_dirs );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_get_numpy_include_dirs, tmp_assign_source_22 );
    tmp_import_globals_21 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_21, tmp_import_globals_21, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_is_sequence );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_is_sequence, tmp_assign_source_23 );
    tmp_import_globals_22 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_20 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_22, tmp_import_globals_22, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_get_build_architecture );
    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_get_build_architecture, tmp_assign_source_24 );
    tmp_import_globals_23 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_21 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_23, tmp_import_globals_23, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_msvc_version );
    Py_DECREF( tmp_import_name_from_21 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_msvc_version, tmp_assign_source_25 );
    tmp_import_globals_24 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_22 = IMPORT_MODULE( const_str_digest_2b4a68262e2530d19ed27f39d54ab744, tmp_import_globals_24, tmp_import_globals_24, const_tuple_str_plain_show_fortran_compilers_tuple, const_int_0 );
    if ( tmp_import_name_from_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_show_fortran_compilers );
    Py_DECREF( tmp_import_name_from_22 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_show_fortran_compilers, tmp_assign_source_26 );
    // Tried block of try/except
    tmp_unused = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_set );

    if (unlikely( tmp_unused == NULL ))
    {
        tmp_unused = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set );
    }

    if ( tmp_unused == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85992 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 26;
        goto try_except_handler_1;
    }

    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_module );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_module ) );
    }
    else if ( exception_tb->tb_frame != frame_module || exception_tb->tb_lineno != frame_module->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_module, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_NameError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
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
    tmp_import_globals_25 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 28;
    tmp_import_name_from_23 = IMPORT_MODULE( const_str_plain_sets, tmp_import_globals_25, tmp_import_globals_25, const_tuple_str_plain_Set_tuple, const_int_0 );
    if ( tmp_import_name_from_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_Set );
    Py_DECREF( tmp_import_name_from_23 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_set, tmp_assign_source_27 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    try_except_end_1:;
    // Tried code
    tmp_assign_source_28 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_old_build_ext );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_build_ext );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86017 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 30;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_28, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_28;

    tmp_assign_source_29 = impl_class_1_build_ext_of_module_numpy$distutils$command$build_ext(  );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_29;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
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
    tmp_assign_source_30 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_30 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_30;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_build_ext;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 30;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_31;

    tmp_assign_source_32 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_build_ext, tmp_assign_source_32 );
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
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

    return MOD_RETURN_VALUE( module_numpy$distutils$command$build_ext );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
