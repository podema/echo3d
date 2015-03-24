// Generated code for Python source for module 'numpy.distutils.mingw32ccompiler'
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

// The _module_numpy$distutils$mingw32ccompiler is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils$mingw32ccompiler;
PyDictObject *moduledict_numpy$distutils$mingw32ccompiler;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_str_dot;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_80;
extern PyObject *const_str_chr_59;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_w;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_80;
static PyObject *const_str_plain_90;
extern PyObject *const_str_plain_ma;
extern PyObject *const_str_plain_mi;
extern PyObject *const_str_plain_nt;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_st;
static PyObject *const_str_plain_yo;
static PyObject *const_str_plain_100;
extern PyObject *const_str_plain_cmd;
static PyObject *const_str_plain_dll;
static PyObject *const_str_plain_drv;
extern PyObject *const_str_plain_exe;
extern PyObject *const_str_plain_ext;
extern PyObject *const_str_plain_gcc;
extern PyObject *const_str_plain_lib;
extern PyObject *const_str_plain_log;
static PyObject *const_str_plain_maj;
static PyObject *const_str_plain_man;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_x86;
extern PyObject *const_str_plain_PATH;
extern PyObject *const_str_plain_PIPE;
extern PyObject *const_str_plain_arch;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_call;
extern PyObject *const_str_plain_dirs;
extern PyObject *const_str_plain_dump;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_libs;
extern PyObject *const_str_plain_link;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_rest;
extern PyObject *const_str_plain_root;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_syms;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_walk;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_plain_AMD64;
extern PyObject *const_str_plain_Intel;
extern PyObject *const_str_plain_Popen;
static PyObject *const_str_plain_amd64;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_debug;
static PyObject *const_str_plain_dfile;
extern PyObject *const_str_plain_dlist;
static PyObject *const_str_plain_exext;
extern PyObject *const_str_plain_files;
static PyObject *const_str_plain_flist;
extern PyObject *const_str_plain_force;
static PyObject *const_str_plain_getnm;
extern PyObject *const_str_plain_group;
extern PyObject *const_str_plain_major;
extern PyObject *const_str_plain_match;
extern PyObject *const_str_plain_micro;
extern PyObject *const_str_plain_minor;
static PyObject *const_str_plain_msvcr;
static PyObject *const_str_plain_msvcv;
static PyObject *const_str_plain_msver;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_shell;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_win32;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_WINDIR;
static PyObject *const_str_plain__START;
static PyObject *const_str_plain__TABLE;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_config;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_exists;
extern PyObject *const_str_plain_isfile;
extern PyObject *const_str_plain_linker;
extern PyObject *const_str_plain_lstrip;
static PyObject *const_str_plain_manxml;
static PyObject *const_str_plain_msvcrt;
static PyObject *const_str_plain_nm_cmd;
extern PyObject *const_str_plain_prefix;
extern PyObject *const_str_plain_rctype;
extern PyObject *const_str_plain_remove;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_search;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_stdout;
extern PyObject *const_str_plain_system;
static PyObject *const_str_plain_winsxs;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_abspath;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_plain_dllname;
static PyObject *const_str_plain_dlltool;
static PyObject *const_str_plain_dllwrap;
extern PyObject *const_str_plain_dry_run;
extern PyObject *const_str_plain_environ;
static PyObject *const_str_plain_fullver;
static PyObject *const_str_plain_lib2def;
extern PyObject *const_str_plain_mingw32;
extern PyObject *const_str_plain_objects;
static PyObject *const_str_plain_rc_name;
extern PyObject *const_str_plain_retcode;
extern PyObject *const_str_plain_verbose;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain___code__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_basename;
extern PyObject *const_str_plain_compiler;
static PyObject *const_str_plain_def_file;
static PyObject *const_str_plain_def_name;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_dll_file;
static PyObject *const_str_plain_dll_name;
extern PyObject *const_str_plain_filepath;
static PyObject *const_str_plain_find_dll;
extern PyObject *const_str_plain_lib_dirs;
extern PyObject *const_str_plain_lib_file;
extern PyObject *const_str_plain_lib_name;
extern PyObject *const_str_plain_normcase;
static PyObject *const_str_plain_out_file;
static PyObject *const_str_plain_out_name;
static PyObject *const_str_plain_parse_nm;
extern PyObject *const_str_plain_platform;
extern PyObject *const_str_plain_splitext;
extern PyObject *const_str_plain_src_name;
static PyObject *const_str_plain_system32;
extern PyObject *const_str_plain_template;
extern PyObject *const_str_plain_distutils;
extern PyObject *const_str_plain_libraries;
extern PyObject *const_str_plain_linker_so;
static PyObject *const_str_plain_nm_output;
extern PyObject *const_str_plain_obj_names;
extern PyObject *const_str_plain_readlines;
extern PyObject *const_str_plain_strip_dir;
static PyObject *const_str_plain_DEFAULT_NM;
static PyObject *const_str_plain_DEF_HEADER;
static PyObject *const_str_plain_SYSTEMROOT;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_build_temp;
static PyObject *const_str_plain_dump_table;
static PyObject *const_str_plain_linker_dll;
extern PyObject *const_str_plain_linker_exe;
static PyObject *const_str_plain_msvcr_name;
static PyObject *const_str_plain_out_string;
static PyObject *const_str_plain_output_def;
extern PyObject *const_str_plain_output_dir;
extern PyObject *const_str_plain_splitdrive;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_subprocess;
extern PyObject *const_str_plain_temp_files;
extern PyObject *const_str_plain_co_argcount;
extern PyObject *const_str_plain_compiler_so;
static PyObject *const_str_plain_entry_point;
static PyObject *const_str_plain_gcc_version;
static PyObject *const_str_plain_manifest_rc;
extern PyObject *const_str_plain_target_desc;
extern PyObject *const_str_plain_target_lang;
static PyObject *const_str_plain_winsxs_path;
extern PyObject *const_str_plain_CompileError;
extern PyObject *const_str_plain_compiler_cxx;
extern PyObject *const_str_plain_define_macro;
static PyObject *const_str_plain_generate_def;
extern PyObject *const_str_plain_library_dirs;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_StrictVersion;
extern PyObject *const_str_plain_UnixCCompiler;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_compiler_type;
extern PyObject *const_str_plain_exe_extension;
extern PyObject *const_str_plain_extra_preargs;
static PyObject *const_str_plain_manifest_name;
static PyObject *const_str_plain_msvcr_success;
static PyObject *const_str_plain_msvcr_version;
extern PyObject *const_str_plain_obj_extension;
extern PyObject *const_str_plain_export_symbols;
extern PyObject *const_str_plain_extra_postargs;
static PyObject *const_str_plain_msvcr_dll_name;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_src_extensions;
static PyObject *const_str_plain_CygwinCCompiler;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_configtest_name;
static PyObject *const_str_plain_cygwinccompiler;
static PyObject *const_str_plain_find_python_dll;
extern PyObject *const_str_plain_gen_lib_options;
extern PyObject *const_str_plain_output_filename;
static PyObject *const_str_plain_runtime_library;
static PyObject *const_str_plain_set_executables;
static PyObject *const_tuple_str_plain_dll_tuple;
extern PyObject *const_tuple_str_plain_log_tuple;
extern PyObject *const_str_plain_Mingw32CCompiler;
extern PyObject *const_str_plain_UnknownFileError;
extern PyObject *const_str_plain_mingw32ccompiler;
extern PyObject *const_str_plain_object_filenames;
extern PyObject *const_str_plain_source_filenames;
static PyObject *const_tuple_str_plain_arch_tuple;
static PyObject *const_str_plain__find_dll_in_path;
extern PyObject *const_str_plain_generate_manifest;
static PyObject *const_str_plain_get_build_version;
static PyObject *const_str_plain_msvc_manifest_xml;
static PyObject *const_str_plain_msvcr_dbg_success;
extern PyObject *const_tuple_int_0_str_empty_tuple;
static PyObject *const_tuple_str_plain_debug_tuple;
static PyObject *const_tuple_str_plain_msver_tuple;
extern PyObject *const_str_plain_DistutilsExecError;
static PyObject *const_str_plain___MSVCRT_VERSION__;
extern PyObject *const_tuple_str_plain_config_tuple;
static PyObject *const_str_plain__find_dll_in_winsxs;
static PyObject *const_str_plain_build_msvcr_library;
static PyObject *const_tuple_int_0_int_0_int_0_tuple;
static PyObject *const_tuple_str_plain_lib2def_tuple;
static PyObject *const_str_plain_CRT_ASSEMBLY_VERSION;
static PyObject *const_str_plain__MSVCRVER_TO_FULLVER;
static PyObject *const_str_plain__gen_temp_sourcefile;
static PyObject *const_str_plain_build_import_library;
extern PyObject *const_str_plain_msvc_runtime_library;
extern PyObject *const_str_plain_runtime_library_dirs;
static PyObject *const_tuple_str_plain_dll_name_tuple;
extern PyObject *const_str_plain_gen_preprocess_options;
extern PyObject *const_str_plain_get_build_architecture;
static PyObject *const_str_plain_get_build_msvc_version;
static PyObject *const_str_plain__build_import_library_x86;
extern PyObject *const_tuple_str_plain_StrictVersion_tuple;
static PyObject *const_tuple_str_plain_UnixCCompiler_tuple;
static PyObject *const_str_plain_NPY_MINGW_USE_CUSTOM_MSVCR;
static PyObject *const_dict_61b7ac380f41b6e0ae81e447f6f55f5e;
static PyObject *const_dict_74ba9e9c2ef29ec3f0144ba8bbe76bc2;
static PyObject *const_dict_81dfc2caffbd6ff32b7cbafbfd85929a;
static PyObject *const_dict_9c8f7c7ec1beeadc0b1d9b4beca25e71;
static PyObject *const_dict_e722341caa369e2ae55c591496eb7352;
static PyObject *const_dict_eec169d4dd11bb0065ce59b0277f1807;
static PyObject *const_str_plain__build_import_library_amd64;
static PyObject *const_tuple_str_plain_dll_str_plain_st_tuple;
static PyObject *const_tuple_str_plain_get_build_version_tuple;
static PyObject *const_tuple_str_plain_maj_str_plain_min_tuple;
static PyObject *const_tuple_str_plain_dll_str_plain_dfile_tuple;
static PyObject *const_tuple_str_plain_name_str_plain_type_tuple;
static PyObject *const_list_d3a50a4aa333ad6f2970e7e0fff461f1_list;
static PyObject *const_tuple_none_int_0_none_none_none_none_tuple;
static PyObject *const_str_digest_07078a97d66756f213dbca3e379bf084;
static PyObject *const_str_digest_087d5a5cf5ee8a6f4f5ca6c8c5643de2;
static PyObject *const_str_digest_10fe522bcb02dd7f0cc57f07adfc034d;
static PyObject *const_str_digest_11bf6d28d6d9bb5009d64894f97406bb;
static PyObject *const_str_digest_134585df5d1be05c1cdc77a1f7fe9f05;
static PyObject *const_str_digest_158a6552ad2f3a398b60cbf5b0092244;
static PyObject *const_str_digest_1666d3616d597ae05f78a0e697f44da5;
static PyObject *const_str_digest_17efe4d8ee8944292cb1a17e03770207;
static PyObject *const_str_digest_19e3073ec4ab2b0dcf8cb0f8ca1ec35f;
extern PyObject *const_str_digest_1f406ccb0ae00805d4f3c6661348da02;
static PyObject *const_str_digest_213fef395e66630df3575041beeade43;
static PyObject *const_str_digest_2229b13853404fa63a58dbee7277d890;
static PyObject *const_str_digest_25e6af86e4db1c5c0ccf3a0bc8bbff8f;
extern PyObject *const_str_digest_269889131ee4793a82191b78a2eb60e3;
static PyObject *const_str_digest_272f0a04b740763e0a29316bc4af89a4;
extern PyObject *const_str_digest_281372bea41c1cc2820284b52b815f98;
extern PyObject *const_str_digest_29bf226e186bf57b52fac1b0ba1f88ff;
static PyObject *const_str_digest_2d4a2c7dd5d6b15d7ec123b8b8f15b6e;
static PyObject *const_str_digest_3177804803f850d65fa509e5e716f1ed;
static PyObject *const_str_digest_320a364dd0faec89b92bb3cd73aa0efc;
static PyObject *const_str_digest_35210812f7ce0c72395c465da1d15832;
static PyObject *const_str_digest_3657b79c3272a4a9bee01b716c47b393;
static PyObject *const_str_digest_38098f3c57bfe8fb1c048b960eadc583;
static PyObject *const_str_digest_3b5ea55c46aebb3e594050a74df4601e;
extern PyObject *const_str_digest_3cf1150dc41ac01dcb8cfcc35c3f433c;
static PyObject *const_str_digest_425b71721796ac89329691276a2c02c1;
static PyObject *const_str_digest_4319b67df2f1e6ebe25bfc568ef54068;
static PyObject *const_str_digest_49f7ecc0210f1cad44c9adb19dd06e82;
static PyObject *const_str_digest_4d08253ba99d178e0906778519d675a8;
static PyObject *const_str_digest_4d74237e107269a360801c0a2066d34e;
static PyObject *const_str_digest_4f959957c55de3c1fd774424f8608871;
static PyObject *const_str_digest_53a21d3bea71b0f4b0d2793624e54b43;
static PyObject *const_str_digest_5777bfcd4eafe121b3f1375bac48099a;
static PyObject *const_str_digest_5cddcefce4fe7420ea9c4fbfe6b6d4b0;
static PyObject *const_str_digest_6310fa5900d5dc687b4baf6bc3c78eae;
extern PyObject *const_str_digest_644b1f5211d64ec52727780e74026f6e;
static PyObject *const_str_digest_65a9afd95259db5dafe23bd57365f11a;
static PyObject *const_str_digest_692840b546e7cd77eaa7cf257bab65db;
static PyObject *const_str_digest_6c68537ccf79cbc98f02750ab35d7222;
static PyObject *const_str_digest_712b615044e13d4670613072bed7f41c;
static PyObject *const_str_digest_729675cb8850405f6b1ecd5e2ca87625;
static PyObject *const_str_digest_7356d83137a9f0a773d569b9d7fb04b5;
static PyObject *const_str_digest_7dcba6b7ac694a4d74099413341aefc9;
static PyObject *const_str_digest_805e2cda125fd5173424e205f7af402d;
static PyObject *const_str_digest_808c021a44d9be333fcd5e6c5d369aca;
extern PyObject *const_str_digest_84a8de0d7fe6874d2f76baddcb4f6dfd;
static PyObject *const_str_digest_89abae590a645a71f841def6a14fef2c;
static PyObject *const_str_digest_8aad25612334548aee4de0d9347d6267;
static PyObject *const_str_digest_9058172e8d2f36ff912435be00c9d2e5;
extern PyObject *const_str_digest_906e5d559e07c4fefab02226a2790389;
static PyObject *const_str_digest_934df5e88bbb0840c2028c4d167dd357;
static PyObject *const_str_digest_93af3fc4c87f7200c4a5ab3f346bed09;
static PyObject *const_str_digest_94f8f64b5683e26a213345d9a293c082;
static PyObject *const_str_digest_978392afc9d4824e17513ffdddb67ad2;
static PyObject *const_str_digest_9a29dde14d5c359a1feb7014f5e17181;
static PyObject *const_str_digest_9b017020b9d48d433ec90c548e6b5c70;
static PyObject *const_str_digest_9bcc044ab5a81ebfdd2eaa9945652937;
static PyObject *const_str_digest_9bf8b6dea83b3d746d912de11cafcf78;
static PyObject *const_str_digest_a2b81d958fa7e2a740aa7c4a47627e10;
static PyObject *const_str_digest_a42e29bcd65f79e67ab9c906157c4b4d;
static PyObject *const_str_digest_a534acadc22685ee09a66514419aed57;
static PyObject *const_str_digest_a56138d2d3e1e52b783eccae176e3149;
static PyObject *const_str_digest_a6ba2347ca3ece8b6148314683665f8b;
static PyObject *const_str_digest_aad4f21a5da4ba59dcf0d09e37b0a4e2;
static PyObject *const_str_digest_adb68c03eefe0764928d7a3ce91f8742;
static PyObject *const_str_digest_add02f60bad707d36b7e3068641fdf6b;
static PyObject *const_str_digest_af47777532b69dc5447b0de1dbae3143;
static PyObject *const_str_digest_b0c97c398792d4fdbd4f472aae52702a;
static PyObject *const_str_digest_b3868ba70a8f4cf55464dd9926381db1;
static PyObject *const_str_digest_b4d52c0964b4b61dc9eedc594ea0d3c0;
static PyObject *const_str_digest_b9f3bb411d4a96f01bb62a8ad5cd024e;
static PyObject *const_str_digest_bd550a32cebea158a678fb095db4a4c0;
extern PyObject *const_str_digest_c093ffbc531047f3f58d3349fa58e0f7;
extern PyObject *const_str_digest_c0fff8163aabf90b654f2f3ba03fe760;
static PyObject *const_str_digest_c3bb0b5b30f3c5d7b2b95254b3af8905;
extern PyObject *const_str_digest_cc3f9be4b24741259966d1e00234095c;
static PyObject *const_str_digest_cd5c83401f50232501a1a11feba9f67a;
static PyObject *const_str_digest_d5fc5794eb56bf8bc1400f50cc8c3f7b;
extern PyObject *const_str_digest_d72591307adca2be9a60c5e86595b16a;
static PyObject *const_str_digest_d8274ff72bb4dcbdd6a172a5a61d2778;
static PyObject *const_str_digest_dacde8f19fadc3ac4469821d7bf036cf;
static PyObject *const_str_digest_e0733d4e5be8a0417e3ac7f52309fe0a;
static PyObject *const_str_digest_e610227b44cba79c6542a6ac7260a5f9;
static PyObject *const_str_digest_e638c4891a43f3e5114f3b33ab5189ff;
extern PyObject *const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1;
extern PyObject *const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc;
extern PyObject *const_str_digest_e96815b7ef5e09588fce208f53d8fe02;
static PyObject *const_str_digest_e9a24a1cf1d3b56c1e2a52f56484bd8b;
static PyObject *const_str_digest_ebecd4176e891e07137e26a56f4fe02f;
static PyObject *const_str_digest_f5e5d5090e117234ebffffe8b64ce186;
static PyObject *const_str_digest_f6376ef466224f01e226f0b59e71d682;
static PyObject *const_str_plain_check_embedded_msvcr_match_linked;
static PyObject *const_tuple_str_plain_config_str_plain_base_tuple;
static PyObject *const_tuple_str_plain_config_str_plain_root_tuple;
static PyObject *const_tuple_047a8d3f40dae873a5f0caa092fe8b3a_tuple;
static PyObject *const_tuple_20821a27336b67abc17c0b9e5f75f2ee_tuple;
extern PyObject *const_tuple_2a35063b865b1125ac03b149e89b5bd7_tuple;
extern PyObject *const_tuple_4f1f807896fef05b81f6568a1cbbb77e_tuple;
static PyObject *const_tuple_5876d64640d9243c78d9e4f2d1d6d41f_tuple;
static PyObject *const_tuple_5dc551bcc8a8911d9ac8b8d580a89c44_tuple;
static PyObject *const_tuple_7143f3684420cd882f00b1622b2c6550_tuple;
static PyObject *const_tuple_7ce01219379a96d8c7c0914e1374531d_tuple;
static PyObject *const_tuple_a2380342ace04e8882aedf120d95dc57_tuple;
static PyObject *const_tuple_a625397689fd66d11c5d058059ca1100_tuple;
static PyObject *const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple;
static PyObject *const_tuple_b2ff7c5803cd461a72ccd4f7a38f1f13_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_b4ac7033c1c9b83c19a55b1dfc9dd380_tuple;
static PyObject *const_tuple_b6f4cfc8dd190c5761fce775752006e5_tuple;
static PyObject *const_tuple_c07be35e260c0d8fa0b868709b817adb_tuple;
static PyObject *const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple;
static PyObject *const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple;
static PyObject *const_tuple_fed54fa7ead7eb0169794a32aace20cf_tuple;
static PyObject *const_list_str_digest_644b1f5211d64ec52727780e74026f6e_list;
static PyObject *const_tuple_str_plain_msver_str_plain_msvcv_str_plain_maj_tuple;
static PyObject *const_tuple_str_plain_name_str_plain_type_str_plain_rctype_tuple;
static PyObject *const_tuple_str_plain_config_str_plain_root_str_plain_exext_tuple;
static PyObject *const_tuple_str_plain_dll_name_str_plain_path_str_plain_filepath_tuple;
static PyObject *const_list_str_plain_gcc_str_digest_f6376ef466224f01e226f0b59e71d682_list;
static PyObject *const_tuple_str_plain_gen_preprocess_options_str_plain_gen_lib_options_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_80 = UNSTREAM_STRING( &constant_bin[ 332090 ], 2, 0 );
    const_str_plain_90 = UNSTREAM_STRING( &constant_bin[ 85129 ], 2, 0 );
    const_str_plain_yo = UNSTREAM_STRING( &constant_bin[ 8354 ], 2, 1 );
    const_str_plain_100 = UNSTREAM_STRING( &constant_bin[ 353699 ], 3, 0 );
    const_str_plain_dll = UNSTREAM_STRING( &constant_bin[ 107864 ], 3, 1 );
    const_str_plain_drv = UNSTREAM_STRING( &constant_bin[ 107663 ], 3, 1 );
    const_str_plain_maj = UNSTREAM_STRING( &constant_bin[ 28720 ], 3, 1 );
    const_str_plain_man = UNSTREAM_STRING( &constant_bin[ 9657 ], 3, 1 );
    const_str_plain_x86 = UNSTREAM_STRING( &constant_bin[ 108539 ], 3, 1 );
    const_str_plain_AMD64 = UNSTREAM_STRING( &constant_bin[ 915698 ], 5, 1 );
    const_str_plain_amd64 = UNSTREAM_STRING( &constant_bin[ 108483 ], 5, 1 );
    const_str_plain_dfile = UNSTREAM_STRING( &constant_bin[ 108175 ], 5, 1 );
    const_str_plain_exext = UNSTREAM_STRING( &constant_bin[ 936246 ], 5, 1 );
    const_str_plain_flist = UNSTREAM_STRING( &constant_bin[ 108671 ], 5, 1 );
    const_str_plain_getnm = UNSTREAM_STRING( &constant_bin[ 936251 ], 5, 1 );
    const_str_plain_msvcr = UNSTREAM_STRING( &constant_bin[ 107055 ], 5, 1 );
    const_str_plain_msvcv = UNSTREAM_STRING( &constant_bin[ 936256 ], 5, 1 );
    const_str_plain_msver = UNSTREAM_STRING( &constant_bin[ 108984 ], 5, 1 );
    const_str_plain__START = UNSTREAM_STRING( &constant_bin[ 108002 ], 6, 1 );
    const_str_plain__TABLE = UNSTREAM_STRING( &constant_bin[ 74383 ], 6, 1 );
    const_str_plain_manxml = UNSTREAM_STRING( &constant_bin[ 936261 ], 6, 1 );
    const_str_plain_msvcrt = UNSTREAM_STRING( &constant_bin[ 107055 ], 6, 1 );
    const_str_plain_nm_cmd = UNSTREAM_STRING( &constant_bin[ 936267 ], 6, 1 );
    const_str_plain_winsxs = UNSTREAM_STRING( &constant_bin[ 936273 ], 6, 1 );
    const_str_plain_dllname = UNSTREAM_STRING( &constant_bin[ 107864 ], 7, 1 );
    const_str_plain_dlltool = UNSTREAM_STRING( &constant_bin[ 936279 ], 7, 1 );
    const_str_plain_dllwrap = UNSTREAM_STRING( &constant_bin[ 936286 ], 7, 1 );
    const_str_plain_fullver = UNSTREAM_STRING( &constant_bin[ 108879 ], 7, 1 );
    const_str_plain_lib2def = UNSTREAM_STRING( &constant_bin[ 108618 ], 7, 1 );
    const_str_plain_rc_name = UNSTREAM_STRING( &constant_bin[ 81044 ], 7, 1 );
    const_str_plain_def_file = UNSTREAM_STRING( &constant_bin[ 108722 ], 8, 1 );
    const_str_plain_def_name = UNSTREAM_STRING( &constant_bin[ 936293 ], 8, 1 );
    const_str_plain_dll_file = UNSTREAM_STRING( &constant_bin[ 936301 ], 8, 1 );
    const_str_plain_dll_name = UNSTREAM_STRING( &constant_bin[ 108226 ], 8, 1 );
    const_str_plain_find_dll = UNSTREAM_STRING( &constant_bin[ 108383 ], 8, 1 );
    const_str_plain_out_file = UNSTREAM_STRING( &constant_bin[ 108776 ], 8, 1 );
    const_str_plain_out_name = UNSTREAM_STRING( &constant_bin[ 936309 ], 8, 1 );
    const_str_plain_parse_nm = UNSTREAM_STRING( &constant_bin[ 936317 ], 8, 1 );
    const_str_plain_system32 = UNSTREAM_STRING( &constant_bin[ 936325 ], 8, 1 );
    const_str_plain_nm_output = UNSTREAM_STRING( &constant_bin[ 936333 ], 9, 1 );
    const_str_plain_DEFAULT_NM = UNSTREAM_STRING( &constant_bin[ 936342 ], 10, 1 );
    const_str_plain_DEF_HEADER = UNSTREAM_STRING( &constant_bin[ 936352 ], 10, 1 );
    const_str_plain_SYSTEMROOT = UNSTREAM_STRING( &constant_bin[ 936362 ], 10, 1 );
    const_str_plain_dump_table = UNSTREAM_STRING( &constant_bin[ 107963 ], 10, 1 );
    const_str_plain_linker_dll = UNSTREAM_STRING( &constant_bin[ 936372 ], 10, 1 );
    const_str_plain_msvcr_name = UNSTREAM_STRING( &constant_bin[ 108330 ], 10, 1 );
    const_str_plain_out_string = UNSTREAM_STRING( &constant_bin[ 936382 ], 10, 1 );
    const_str_plain_output_def = UNSTREAM_STRING( &constant_bin[ 936392 ], 10, 1 );
    const_str_plain_entry_point = UNSTREAM_STRING( &constant_bin[ 107451 ], 11, 1 );
    const_str_plain_gcc_version = UNSTREAM_STRING( &constant_bin[ 936402 ], 11, 1 );
    const_str_plain_manifest_rc = UNSTREAM_STRING( &constant_bin[ 936413 ], 11, 1 );
    const_str_plain_winsxs_path = UNSTREAM_STRING( &constant_bin[ 936424 ], 11, 1 );
    const_str_plain_generate_def = UNSTREAM_STRING( &constant_bin[ 108420 ], 12, 1 );
    const_str_plain_manifest_name = UNSTREAM_STRING( &constant_bin[ 109287 ], 13, 1 );
    const_str_plain_msvcr_success = UNSTREAM_STRING( &constant_bin[ 936435 ], 13, 1 );
    const_str_plain_msvcr_version = UNSTREAM_STRING( &constant_bin[ 936448 ], 13, 1 );
    const_str_plain_msvcr_dll_name = UNSTREAM_STRING( &constant_bin[ 936461 ], 14, 1 );
    const_str_plain_CygwinCCompiler = UNSTREAM_STRING( &constant_bin[ 936475 ], 15, 1 );
    const_str_plain_configtest_name = UNSTREAM_STRING( &constant_bin[ 109084 ], 15, 1 );
    const_str_plain_cygwinccompiler = UNSTREAM_STRING( &constant_bin[ 936490 ], 15, 1 );
    const_str_plain_find_python_dll = UNSTREAM_STRING( &constant_bin[ 108571 ], 15, 1 );
    const_str_plain_runtime_library = UNSTREAM_STRING( &constant_bin[ 83358 ], 15, 1 );
    const_str_plain_set_executables = UNSTREAM_STRING( &constant_bin[ 936505 ], 15, 1 );
    const_tuple_str_plain_dll_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dll_tuple, 0, const_str_plain_dll ); Py_INCREF( const_str_plain_dll );
    const_tuple_str_plain_arch_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arch_tuple, 0, const_str_plain_arch ); Py_INCREF( const_str_plain_arch );
    const_str_plain__find_dll_in_path = UNSTREAM_STRING( &constant_bin[ 936520 ], 17, 1 );
    const_str_plain_get_build_version = UNSTREAM_STRING( &constant_bin[ 936537 ], 17, 1 );
    const_str_plain_msvc_manifest_xml = UNSTREAM_STRING( &constant_bin[ 109241 ], 17, 1 );
    const_str_plain_msvcr_dbg_success = UNSTREAM_STRING( &constant_bin[ 936554 ], 17, 1 );
    const_tuple_str_plain_debug_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_debug_tuple, 0, const_str_plain_debug ); Py_INCREF( const_str_plain_debug );
    const_tuple_str_plain_msver_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_msver_tuple, 0, const_str_plain_msver ); Py_INCREF( const_str_plain_msver );
    const_str_plain___MSVCRT_VERSION__ = UNSTREAM_STRING( &constant_bin[ 936571 ], 18, 1 );
    const_str_plain__find_dll_in_winsxs = UNSTREAM_STRING( &constant_bin[ 936589 ], 19, 1 );
    const_str_plain_build_msvcr_library = UNSTREAM_STRING( &constant_bin[ 107300 ], 19, 1 );
    const_tuple_int_0_int_0_int_0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_str_plain_lib2def_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_lib2def_tuple, 0, const_str_plain_lib2def ); Py_INCREF( const_str_plain_lib2def );
    const_str_plain_CRT_ASSEMBLY_VERSION = UNSTREAM_STRING( &constant_bin[ 936608 ], 20, 1 );
    const_str_plain__MSVCRVER_TO_FULLVER = UNSTREAM_STRING( &constant_bin[ 107013 ], 20, 1 );
    const_str_plain__gen_temp_sourcefile = UNSTREAM_STRING( &constant_bin[ 936628 ], 20, 1 );
    const_str_plain_build_import_library = UNSTREAM_STRING( &constant_bin[ 107251 ], 20, 1 );
    const_tuple_str_plain_dll_name_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dll_name_tuple, 0, const_str_plain_dll_name ); Py_INCREF( const_str_plain_dll_name );
    const_str_plain_get_build_msvc_version = UNSTREAM_STRING( &constant_bin[ 109128 ], 22, 1 );
    const_str_plain__build_import_library_x86 = UNSTREAM_STRING( &constant_bin[ 108517 ], 25, 1 );
    const_tuple_str_plain_UnixCCompiler_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_UnixCCompiler_tuple, 0, const_str_plain_UnixCCompiler ); Py_INCREF( const_str_plain_UnixCCompiler );
    const_str_plain_NPY_MINGW_USE_CUSTOM_MSVCR = UNSTREAM_STRING( &constant_bin[ 936648 ], 26, 1 );
    const_dict_61b7ac380f41b6e0ae81e447f6f55f5e = _PyDict_NewPresized( 4 );
    const_str_digest_aad4f21a5da4ba59dcf0d09e37b0a4e2 = UNSTREAM_STRING( &constant_bin[ 936674 ], 15, 0 );
    PyDict_SetItem( const_dict_61b7ac380f41b6e0ae81e447f6f55f5e, const_str_plain_linker_exe, const_str_digest_aad4f21a5da4ba59dcf0d09e37b0a4e2 );
    const_str_digest_25e6af86e4db1c5c0ccf3a0bc8bbff8f = UNSTREAM_STRING( &constant_bin[ 936689 ], 45, 0 );
    PyDict_SetItem( const_dict_61b7ac380f41b6e0ae81e447f6f55f5e, const_str_plain_compiler_so, const_str_digest_25e6af86e4db1c5c0ccf3a0bc8bbff8f );
    const_str_digest_bd550a32cebea158a678fb095db4a4c0 = UNSTREAM_STRING( &constant_bin[ 936734 ], 23, 0 );
    PyDict_SetItem( const_dict_61b7ac380f41b6e0ae81e447f6f55f5e, const_str_plain_linker_so, const_str_digest_bd550a32cebea158a678fb095db4a4c0 );
    const_str_digest_087d5a5cf5ee8a6f4f5ca6c8c5643de2 = UNSTREAM_STRING( &constant_bin[ 936689 ], 25, 0 );
    PyDict_SetItem( const_dict_61b7ac380f41b6e0ae81e447f6f55f5e, const_str_plain_compiler, const_str_digest_087d5a5cf5ee8a6f4f5ca6c8c5643de2 );
    const_dict_74ba9e9c2ef29ec3f0144ba8bbe76bc2 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_74ba9e9c2ef29ec3f0144ba8bbe76bc2, const_str_plain_Intel, const_str_plain_x86 );
    PyDict_SetItem( const_dict_74ba9e9c2ef29ec3f0144ba8bbe76bc2, const_str_plain_AMD64, const_str_plain_amd64 );
    const_dict_81dfc2caffbd6ff32b7cbafbfd85929a = _PyDict_NewPresized( 4 );
    const_str_digest_3b5ea55c46aebb3e594050a74df4601e = UNSTREAM_STRING( &constant_bin[ 936757 ], 6, 0 );
    PyDict_SetItem( const_dict_81dfc2caffbd6ff32b7cbafbfd85929a, const_str_plain_linker_exe, const_str_digest_3b5ea55c46aebb3e594050a74df4601e );
    const_str_digest_a56138d2d3e1e52b783eccae176e3149 = UNSTREAM_STRING( &constant_bin[ 936763 ], 55, 0 );
    PyDict_SetItem( const_dict_81dfc2caffbd6ff32b7cbafbfd85929a, const_str_plain_compiler_so, const_str_digest_a56138d2d3e1e52b783eccae176e3149 );
    const_str_digest_1666d3616d597ae05f78a0e697f44da5 = UNSTREAM_STRING( &constant_bin[ 936818 ], 14, 0 );
    PyDict_SetItem( const_dict_81dfc2caffbd6ff32b7cbafbfd85929a, const_str_plain_linker_so, const_str_digest_1666d3616d597ae05f78a0e697f44da5 );
    const_str_digest_89abae590a645a71f841def6a14fef2c = UNSTREAM_STRING( &constant_bin[ 936763 ], 35, 0 );
    PyDict_SetItem( const_dict_81dfc2caffbd6ff32b7cbafbfd85929a, const_str_plain_compiler, const_str_digest_89abae590a645a71f841def6a14fef2c );
    const_dict_9c8f7c7ec1beeadc0b1d9b4beca25e71 = _PyDict_NewPresized( 4 );
    const_str_digest_7356d83137a9f0a773d569b9d7fb04b5 = UNSTREAM_STRING( &constant_bin[ 936674 ], 4, 0 );
    PyDict_SetItem( const_dict_9c8f7c7ec1beeadc0b1d9b4beca25e71, const_str_plain_linker_exe, const_str_digest_7356d83137a9f0a773d569b9d7fb04b5 );
    const_str_digest_425b71721796ac89329691276a2c02c1 = UNSTREAM_STRING( &constant_bin[ 936832 ], 33, 0 );
    PyDict_SetItem( const_dict_9c8f7c7ec1beeadc0b1d9b4beca25e71, const_str_plain_compiler_so, const_str_digest_425b71721796ac89329691276a2c02c1 );
    const_str_digest_adb68c03eefe0764928d7a3ce91f8742 = UNSTREAM_STRING( &constant_bin[ 936865 ], 11, 0 );
    PyDict_SetItem( const_dict_9c8f7c7ec1beeadc0b1d9b4beca25e71, const_str_plain_linker_so, const_str_digest_adb68c03eefe0764928d7a3ce91f8742 );
    const_str_digest_38098f3c57bfe8fb1c048b960eadc583 = UNSTREAM_STRING( &constant_bin[ 936832 ], 13, 0 );
    PyDict_SetItem( const_dict_9c8f7c7ec1beeadc0b1d9b4beca25e71, const_str_plain_compiler, const_str_digest_38098f3c57bfe8fb1c048b960eadc583 );
    const_dict_e722341caa369e2ae55c591496eb7352 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_e722341caa369e2ae55c591496eb7352, const_str_plain_debug, Py_True );
    const_dict_eec169d4dd11bb0065ce59b0277f1807 = _PyDict_NewPresized( 4 );
    const_str_digest_978392afc9d4824e17513ffdddb67ad2 = UNSTREAM_STRING( &constant_bin[ 936876 ], 18, 0 );
    PyDict_SetItem( const_dict_eec169d4dd11bb0065ce59b0277f1807, const_str_plain_linker_exe, const_str_digest_978392afc9d4824e17513ffdddb67ad2 );
    const_str_digest_134585df5d1be05c1cdc77a1f7fe9f05 = UNSTREAM_STRING( &constant_bin[ 936894 ], 67, 0 );
    PyDict_SetItem( const_dict_eec169d4dd11bb0065ce59b0277f1807, const_str_plain_compiler_so, const_str_digest_134585df5d1be05c1cdc77a1f7fe9f05 );
    const_str_digest_4d74237e107269a360801c0a2066d34e = UNSTREAM_STRING( &constant_bin[ 936961 ], 26, 0 );
    PyDict_SetItem( const_dict_eec169d4dd11bb0065ce59b0277f1807, const_str_plain_linker_so, const_str_digest_4d74237e107269a360801c0a2066d34e );
    const_str_digest_a42e29bcd65f79e67ab9c906157c4b4d = UNSTREAM_STRING( &constant_bin[ 936894 ], 47, 0 );
    PyDict_SetItem( const_dict_eec169d4dd11bb0065ce59b0277f1807, const_str_plain_compiler, const_str_digest_a42e29bcd65f79e67ab9c906157c4b4d );
    const_str_plain__build_import_library_amd64 = UNSTREAM_STRING( &constant_bin[ 108461 ], 27, 1 );
    const_tuple_str_plain_dll_str_plain_st_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dll_str_plain_st_tuple, 0, const_str_plain_dll ); Py_INCREF( const_str_plain_dll );
    PyTuple_SET_ITEM( const_tuple_str_plain_dll_str_plain_st_tuple, 1, const_str_plain_st ); Py_INCREF( const_str_plain_st );
    const_tuple_str_plain_get_build_version_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_build_version_tuple, 0, const_str_plain_get_build_version ); Py_INCREF( const_str_plain_get_build_version );
    const_tuple_str_plain_maj_str_plain_min_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_maj_str_plain_min_tuple, 0, const_str_plain_maj ); Py_INCREF( const_str_plain_maj );
    PyTuple_SET_ITEM( const_tuple_str_plain_maj_str_plain_min_tuple, 1, const_str_plain_min ); Py_INCREF( const_str_plain_min );
    const_tuple_str_plain_dll_str_plain_dfile_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dll_str_plain_dfile_tuple, 0, const_str_plain_dll ); Py_INCREF( const_str_plain_dll );
    PyTuple_SET_ITEM( const_tuple_str_plain_dll_str_plain_dfile_tuple, 1, const_str_plain_dfile ); Py_INCREF( const_str_plain_dfile );
    const_tuple_str_plain_name_str_plain_type_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_type_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_type_tuple, 1, const_str_plain_type ); Py_INCREF( const_str_plain_type );
    const_list_d3a50a4aa333ad6f2970e7e0fff461f1_list = PyList_New( 2 );
    const_str_digest_e610227b44cba79c6542a6ac7260a5f9 = UNSTREAM_STRING( &constant_bin[ 936987 ], 3, 0 );
    PyList_SET_ITEM( const_list_d3a50a4aa333ad6f2970e7e0fff461f1_list, 0, const_str_digest_e610227b44cba79c6542a6ac7260a5f9 ); Py_INCREF( const_str_digest_e610227b44cba79c6542a6ac7260a5f9 );
    const_str_digest_4f959957c55de3c1fd774424f8608871 = UNSTREAM_STRING( &constant_bin[ 465529 ], 4, 0 );
    PyList_SET_ITEM( const_list_d3a50a4aa333ad6f2970e7e0fff461f1_list, 1, const_str_digest_4f959957c55de3c1fd774424f8608871 ); Py_INCREF( const_str_digest_4f959957c55de3c1fd774424f8608871 );
    const_tuple_none_int_0_none_none_none_none_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_none_int_0_none_none_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_0_none_none_none_none_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_none_int_0_none_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_0_none_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_0_none_none_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_0_none_none_none_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    const_str_digest_07078a97d66756f213dbca3e379bf084 = UNSTREAM_STRING( &constant_bin[ 444603 ], 3, 0 );
    const_str_digest_10fe522bcb02dd7f0cc57f07adfc034d = UNSTREAM_STRING( &constant_bin[ 936990 ], 343, 0 );
    const_str_digest_11bf6d28d6d9bb5009d64894f97406bb = UNSTREAM_STRING( &constant_bin[ 937333 ], 9, 0 );
    const_str_digest_158a6552ad2f3a398b60cbf5b0092244 = UNSTREAM_STRING( &constant_bin[ 937342 ], 40, 0 );
    const_str_digest_17efe4d8ee8944292cb1a17e03770207 = UNSTREAM_STRING( &constant_bin[ 937382 ], 262, 0 );
    const_str_digest_19e3073ec4ab2b0dcf8cb0f8ca1ec35f = UNSTREAM_STRING( &constant_bin[ 937644 ], 41, 0 );
    const_str_digest_213fef395e66630df3575041beeade43 = UNSTREAM_STRING( &constant_bin[ 937685 ], 72, 0 );
    const_str_digest_2229b13853404fa63a58dbee7277d890 = UNSTREAM_STRING( &constant_bin[ 937757 ], 19, 0 );
    const_str_digest_272f0a04b740763e0a29316bc4af89a4 = UNSTREAM_STRING( &constant_bin[ 937776 ], 5, 0 );
    const_str_digest_2d4a2c7dd5d6b15d7ec123b8b8f15b6e = UNSTREAM_STRING( &constant_bin[ 937781 ], 52, 0 );
    const_str_digest_3177804803f850d65fa509e5e716f1ed = UNSTREAM_STRING( &constant_bin[ 937833 ], 15, 0 );
    const_str_digest_320a364dd0faec89b92bb3cd73aa0efc = UNSTREAM_STRING( &constant_bin[ 937848 ], 14, 0 );
    const_str_digest_35210812f7ce0c72395c465da1d15832 = UNSTREAM_STRING( &constant_bin[ 937862 ], 57, 0 );
    const_str_digest_3657b79c3272a4a9bee01b716c47b393 = UNSTREAM_STRING( &constant_bin[ 937919 ], 138, 0 );
    const_str_digest_4319b67df2f1e6ebe25bfc568ef54068 = UNSTREAM_STRING( &constant_bin[ 938057 ], 36, 0 );
    const_str_digest_49f7ecc0210f1cad44c9adb19dd06e82 = UNSTREAM_STRING( &constant_bin[ 938093 ], 18, 0 );
    const_str_digest_4d08253ba99d178e0906778519d675a8 = UNSTREAM_STRING( &constant_bin[ 938111 ], 7, 0 );
    const_str_digest_53a21d3bea71b0f4b0d2793624e54b43 = UNSTREAM_STRING( &constant_bin[ 938118 ], 7, 0 );
    const_str_digest_5777bfcd4eafe121b3f1375bac48099a = UNSTREAM_STRING( &constant_bin[ 938125 ], 25, 0 );
    const_str_digest_5cddcefce4fe7420ea9c4fbfe6b6d4b0 = UNSTREAM_STRING( &constant_bin[ 938150 ], 75, 0 );
    const_str_digest_6310fa5900d5dc687b4baf6bc3c78eae = UNSTREAM_STRING( &constant_bin[ 938225 ], 22, 0 );
    const_str_digest_65a9afd95259db5dafe23bd57365f11a = UNSTREAM_STRING( &constant_bin[ 938247 ], 44, 0 );
    const_str_digest_692840b546e7cd77eaa7cf257bab65db = UNSTREAM_STRING( &constant_bin[ 938291 ], 58, 0 );
    const_str_digest_6c68537ccf79cbc98f02750ab35d7222 = UNSTREAM_STRING( &constant_bin[ 938349 ], 14, 0 );
    const_str_digest_712b615044e13d4670613072bed7f41c = UNSTREAM_STRING( &constant_bin[ 938363 ], 68, 0 );
    const_str_digest_729675cb8850405f6b1ecd5e2ca87625 = UNSTREAM_STRING( &constant_bin[ 938431 ], 54, 0 );
    const_str_digest_7dcba6b7ac694a4d74099413341aefc9 = UNSTREAM_STRING( &constant_bin[ 938485 ], 38, 0 );
    const_str_digest_805e2cda125fd5173424e205f7af402d = UNSTREAM_STRING( &constant_bin[ 938523 ], 30, 0 );
    const_str_digest_808c021a44d9be333fcd5e6c5d369aca = UNSTREAM_STRING( &constant_bin[ 938553 ], 38, 0 );
    const_str_digest_8aad25612334548aee4de0d9347d6267 = UNSTREAM_STRING( &constant_bin[ 938591 ], 22, 0 );
    const_str_digest_9058172e8d2f36ff912435be00c9d2e5 = UNSTREAM_STRING( &constant_bin[ 938613 ], 61, 0 );
    const_str_digest_934df5e88bbb0840c2028c4d167dd357 = UNSTREAM_STRING( &constant_bin[ 938674 ], 85, 0 );
    const_str_digest_93af3fc4c87f7200c4a5ab3f346bed09 = UNSTREAM_STRING( &constant_bin[ 938759 ], 42, 0 );
    const_str_digest_94f8f64b5683e26a213345d9a293c082 = UNSTREAM_STRING( &constant_bin[ 938801 ], 40, 0 );
    const_str_digest_9a29dde14d5c359a1feb7014f5e17181 = UNSTREAM_STRING( &constant_bin[ 938841 ], 14, 0 );
    const_str_digest_9b017020b9d48d433ec90c548e6b5c70 = UNSTREAM_STRING( &constant_bin[ 452473 ], 2, 0 );
    const_str_digest_9bcc044ab5a81ebfdd2eaa9945652937 = UNSTREAM_STRING( &constant_bin[ 938855 ], 18, 0 );
    const_str_digest_9bf8b6dea83b3d746d912de11cafcf78 = UNSTREAM_STRING( &constant_bin[ 938873 ], 14, 0 );
    const_str_digest_a2b81d958fa7e2a740aa7c4a47627e10 = UNSTREAM_STRING( &constant_bin[ 938887 ], 59, 0 );
    const_str_digest_a534acadc22685ee09a66514419aed57 = UNSTREAM_STRING( &constant_bin[ 938946 ], 41, 0 );
    const_str_digest_a6ba2347ca3ece8b6148314683665f8b = UNSTREAM_STRING( &constant_bin[ 938987 ], 595, 0 );
    const_str_digest_add02f60bad707d36b7e3068641fdf6b = UNSTREAM_STRING( &constant_bin[ 939582 ], 30, 0 );
    const_str_digest_af47777532b69dc5447b0de1dbae3143 = UNSTREAM_STRING( &constant_bin[ 939612 ], 45, 0 );
    const_str_digest_b0c97c398792d4fdbd4f472aae52702a = UNSTREAM_STRING( &constant_bin[ 939657 ], 17, 0 );
    const_str_digest_b3868ba70a8f4cf55464dd9926381db1 = UNSTREAM_STRING( &constant_bin[ 329372 ], 2, 0 );
    const_str_digest_b4d52c0964b4b61dc9eedc594ea0d3c0 = UNSTREAM_STRING( &constant_bin[ 939674 ], 12, 0 );
    const_str_digest_b9f3bb411d4a96f01bb62a8ad5cd024e = UNSTREAM_STRING( &constant_bin[ 939686 ], 10, 0 );
    const_str_digest_c3bb0b5b30f3c5d7b2b95254b3af8905 = UNSTREAM_STRING( &constant_bin[ 939696 ], 9, 0 );
    const_str_digest_cd5c83401f50232501a1a11feba9f67a = UNSTREAM_STRING( &constant_bin[ 939705 ], 14, 0 );
    const_str_digest_d5fc5794eb56bf8bc1400f50cc8c3f7b = UNSTREAM_STRING( &constant_bin[ 939719 ], 43, 0 );
    const_str_digest_d8274ff72bb4dcbdd6a172a5a61d2778 = UNSTREAM_STRING( &constant_bin[ 939762 ], 22, 0 );
    const_str_digest_dacde8f19fadc3ac4469821d7bf036cf = UNSTREAM_STRING( &constant_bin[ 939784 ], 48, 0 );
    const_str_digest_e0733d4e5be8a0417e3ac7f52309fe0a = UNSTREAM_STRING( &constant_bin[ 939832 ], 11, 0 );
    const_str_digest_e638c4891a43f3e5114f3b33ab5189ff = UNSTREAM_STRING( &constant_bin[ 939843 ], 21, 0 );
    const_str_digest_e9a24a1cf1d3b56c1e2a52f56484bd8b = UNSTREAM_STRING( &constant_bin[ 939864 ], 11, 0 );
    const_str_digest_ebecd4176e891e07137e26a56f4fe02f = UNSTREAM_STRING( &constant_bin[ 939875 ], 31, 0 );
    const_str_digest_f5e5d5090e117234ebffffe8b64ce186 = UNSTREAM_STRING( &constant_bin[ 939906 ], 9, 0 );
    const_str_digest_f6376ef466224f01e226f0b59e71d682 = UNSTREAM_STRING( &constant_bin[ 939915 ], 12, 0 );
    const_str_plain_check_embedded_msvcr_match_linked = UNSTREAM_STRING( &constant_bin[ 109179 ], 33, 1 );
    const_tuple_str_plain_config_str_plain_base_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_config_str_plain_base_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_str_plain_config_str_plain_base_tuple, 1, const_str_plain_base ); Py_INCREF( const_str_plain_base );
    const_tuple_str_plain_config_str_plain_root_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_config_str_plain_root_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_str_plain_config_str_plain_root_tuple, 1, const_str_plain_root ); Py_INCREF( const_str_plain_root );
    const_tuple_047a8d3f40dae873a5f0caa092fe8b3a_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_047a8d3f40dae873a5f0caa092fe8b3a_tuple, 0, const_str_plain_msvc_runtime_library ); Py_INCREF( const_str_plain_msvc_runtime_library );
    PyTuple_SET_ITEM( const_tuple_047a8d3f40dae873a5f0caa092fe8b3a_tuple, 1, const_str_plain_get_build_architecture ); Py_INCREF( const_str_plain_get_build_architecture );
    const_tuple_20821a27336b67abc17c0b9e5f75f2ee_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_20821a27336b67abc17c0b9e5f75f2ee_tuple, 0, const_str_plain_dll_name ); Py_INCREF( const_str_plain_dll_name );
    PyTuple_SET_ITEM( const_tuple_20821a27336b67abc17c0b9e5f75f2ee_tuple, 1, const_str_plain_winsxs_path ); Py_INCREF( const_str_plain_winsxs_path );
    PyTuple_SET_ITEM( const_tuple_20821a27336b67abc17c0b9e5f75f2ee_tuple, 2, const_str_plain_root ); Py_INCREF( const_str_plain_root );
    PyTuple_SET_ITEM( const_tuple_20821a27336b67abc17c0b9e5f75f2ee_tuple, 3, const_str_plain_dirs ); Py_INCREF( const_str_plain_dirs );
    PyTuple_SET_ITEM( const_tuple_20821a27336b67abc17c0b9e5f75f2ee_tuple, 4, const_str_plain_files ); Py_INCREF( const_str_plain_files );
    PyTuple_SET_ITEM( const_tuple_20821a27336b67abc17c0b9e5f75f2ee_tuple, 5, const_str_plain_arch ); Py_INCREF( const_str_plain_arch );
    const_tuple_5876d64640d9243c78d9e4f2d1d6d41f_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_5876d64640d9243c78d9e4f2d1d6d41f_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_5876d64640d9243c78d9e4f2d1d6d41f_tuple, 1, const_str_plain_msver ); Py_INCREF( const_str_plain_msver );
    PyTuple_SET_ITEM( const_tuple_5876d64640d9243c78d9e4f2d1d6d41f_tuple, 2, const_str_plain_ma ); Py_INCREF( const_str_plain_ma );
    PyTuple_SET_ITEM( const_tuple_5876d64640d9243c78d9e4f2d1d6d41f_tuple, 3, const_str_plain_mi ); Py_INCREF( const_str_plain_mi );
    PyTuple_SET_ITEM( const_tuple_5876d64640d9243c78d9e4f2d1d6d41f_tuple, 4, const_str_plain_manxml ); Py_INCREF( const_str_plain_manxml );
    PyTuple_SET_ITEM( const_tuple_5876d64640d9243c78d9e4f2d1d6d41f_tuple, 5, const_str_plain_man ); Py_INCREF( const_str_plain_man );
    const_tuple_5dc551bcc8a8911d9ac8b8d580a89c44_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_5dc551bcc8a8911d9ac8b8d580a89c44_tuple, 0, const_str_plain_dll_name ); Py_INCREF( const_str_plain_dll_name );
    PyTuple_SET_ITEM( const_tuple_5dc551bcc8a8911d9ac8b8d580a89c44_tuple, 1, const_str_plain_arch ); Py_INCREF( const_str_plain_arch );
    PyTuple_SET_ITEM( const_tuple_5dc551bcc8a8911d9ac8b8d580a89c44_tuple, 2, const_str_plain__find_dll_in_winsxs ); Py_INCREF( const_str_plain__find_dll_in_winsxs );
    PyTuple_SET_ITEM( const_tuple_5dc551bcc8a8911d9ac8b8d580a89c44_tuple, 3, const_str_plain__find_dll_in_path ); Py_INCREF( const_str_plain__find_dll_in_path );
    const_tuple_7143f3684420cd882f00b1622b2c6550_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_7143f3684420cd882f00b1622b2c6550_tuple, 0, const_str_plain_DistutilsExecError ); Py_INCREF( const_str_plain_DistutilsExecError );
    PyTuple_SET_ITEM( const_tuple_7143f3684420cd882f00b1622b2c6550_tuple, 1, const_str_plain_CompileError ); Py_INCREF( const_str_plain_CompileError );
    PyTuple_SET_ITEM( const_tuple_7143f3684420cd882f00b1622b2c6550_tuple, 2, const_str_plain_UnknownFileError ); Py_INCREF( const_str_plain_UnknownFileError );
    const_tuple_7ce01219379a96d8c7c0914e1374531d_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_7ce01219379a96d8c7c0914e1374531d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7ce01219379a96d8c7c0914e1374531d_tuple, 1, const_str_plain_source_filenames ); Py_INCREF( const_str_plain_source_filenames );
    PyTuple_SET_ITEM( const_tuple_7ce01219379a96d8c7c0914e1374531d_tuple, 2, const_str_plain_strip_dir ); Py_INCREF( const_str_plain_strip_dir );
    PyTuple_SET_ITEM( const_tuple_7ce01219379a96d8c7c0914e1374531d_tuple, 3, const_str_plain_output_dir ); Py_INCREF( const_str_plain_output_dir );
    PyTuple_SET_ITEM( const_tuple_7ce01219379a96d8c7c0914e1374531d_tuple, 4, const_str_plain_obj_names ); Py_INCREF( const_str_plain_obj_names );
    PyTuple_SET_ITEM( const_tuple_7ce01219379a96d8c7c0914e1374531d_tuple, 5, const_str_plain_src_name ); Py_INCREF( const_str_plain_src_name );
    PyTuple_SET_ITEM( const_tuple_7ce01219379a96d8c7c0914e1374531d_tuple, 6, const_str_plain_base ); Py_INCREF( const_str_plain_base );
    PyTuple_SET_ITEM( const_tuple_7ce01219379a96d8c7c0914e1374531d_tuple, 7, const_str_plain_ext ); Py_INCREF( const_str_plain_ext );
    PyTuple_SET_ITEM( const_tuple_7ce01219379a96d8c7c0914e1374531d_tuple, 8, const_str_plain_drv ); Py_INCREF( const_str_plain_drv );
    const_tuple_a2380342ace04e8882aedf120d95dc57_tuple = PyTuple_New( 1 );
    const_list_str_plain_gcc_str_digest_f6376ef466224f01e226f0b59e71d682_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_gcc_str_digest_f6376ef466224f01e226f0b59e71d682_list, 0, const_str_plain_gcc ); Py_INCREF( const_str_plain_gcc );
    PyList_SET_ITEM( const_list_str_plain_gcc_str_digest_f6376ef466224f01e226f0b59e71d682_list, 1, const_str_digest_f6376ef466224f01e226f0b59e71d682 ); Py_INCREF( const_str_digest_f6376ef466224f01e226f0b59e71d682 );
    PyTuple_SET_ITEM( const_tuple_a2380342ace04e8882aedf120d95dc57_tuple, 0, const_list_str_plain_gcc_str_digest_f6376ef466224f01e226f0b59e71d682_list ); Py_INCREF( const_list_str_plain_gcc_str_digest_f6376ef466224f01e226f0b59e71d682_list );
    const_tuple_a625397689fd66d11c5d058059ca1100_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_a625397689fd66d11c5d058059ca1100_tuple, 0, const_str_plain_dll ); Py_INCREF( const_str_plain_dll );
    PyTuple_SET_ITEM( const_tuple_a625397689fd66d11c5d058059ca1100_tuple, 1, const_str_plain_dfile ); Py_INCREF( const_str_plain_dfile );
    PyTuple_SET_ITEM( const_tuple_a625397689fd66d11c5d058059ca1100_tuple, 2, const_str_plain_dump ); Py_INCREF( const_str_plain_dump );
    PyTuple_SET_ITEM( const_tuple_a625397689fd66d11c5d058059ca1100_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_a625397689fd66d11c5d058059ca1100_tuple, 4, const_str_plain_syms ); Py_INCREF( const_str_plain_syms );
    PyTuple_SET_ITEM( const_tuple_a625397689fd66d11c5d058059ca1100_tuple, 5, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_a625397689fd66d11c5d058059ca1100_tuple, 6, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_a625397689fd66d11c5d058059ca1100_tuple, 7, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_a625397689fd66d11c5d058059ca1100_tuple, 8, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple, 1, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple, 2, const_str_plain_dry_run ); Py_INCREF( const_str_plain_dry_run );
    PyTuple_SET_ITEM( const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple, 3, const_str_plain_force ); Py_INCREF( const_str_plain_force );
    PyTuple_SET_ITEM( const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple, 4, const_str_plain_re ); Py_INCREF( const_str_plain_re );
    PyTuple_SET_ITEM( const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple, 5, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple, 6, const_str_plain_out_string ); Py_INCREF( const_str_plain_out_string );
    PyTuple_SET_ITEM( const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple, 7, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple, 8, const_str_plain_entry_point ); Py_INCREF( const_str_plain_entry_point );
    PyTuple_SET_ITEM( const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple, 9, const_str_plain_msvcr_success ); Py_INCREF( const_str_plain_msvcr_success );
    PyTuple_SET_ITEM( const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple, 10, const_str_plain_msvcr_dbg_success ); Py_INCREF( const_str_plain_msvcr_dbg_success );
    PyTuple_SET_ITEM( const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple, 11, const_str_plain_msvcr_version ); Py_INCREF( const_str_plain_msvcr_version );
    const_tuple_b2ff7c5803cd461a72ccd4f7a38f1f13_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_b2ff7c5803cd461a72ccd4f7a38f1f13_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b2ff7c5803cd461a72ccd4f7a38f1f13_tuple, 1, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_b2ff7c5803cd461a72ccd4f7a38f1f13_tuple, 2, const_str_plain_dry_run ); Py_INCREF( const_str_plain_dry_run );
    PyTuple_SET_ITEM( const_tuple_b2ff7c5803cd461a72ccd4f7a38f1f13_tuple, 3, const_str_plain_force ); Py_INCREF( const_str_plain_force );
    const_tuple_b4ac7033c1c9b83c19a55b1dfc9dd380_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_b4ac7033c1c9b83c19a55b1dfc9dd380_tuple, 0, const_str_plain_debug ); Py_INCREF( const_str_plain_debug );
    PyTuple_SET_ITEM( const_tuple_b4ac7033c1c9b83c19a55b1dfc9dd380_tuple, 1, const_str_plain_msvcr_name ); Py_INCREF( const_str_plain_msvcr_name );
    PyTuple_SET_ITEM( const_tuple_b4ac7033c1c9b83c19a55b1dfc9dd380_tuple, 2, const_str_plain_out_name ); Py_INCREF( const_str_plain_out_name );
    PyTuple_SET_ITEM( const_tuple_b4ac7033c1c9b83c19a55b1dfc9dd380_tuple, 3, const_str_plain_out_file ); Py_INCREF( const_str_plain_out_file );
    PyTuple_SET_ITEM( const_tuple_b4ac7033c1c9b83c19a55b1dfc9dd380_tuple, 4, const_str_plain_msvcr_dll_name ); Py_INCREF( const_str_plain_msvcr_dll_name );
    PyTuple_SET_ITEM( const_tuple_b4ac7033c1c9b83c19a55b1dfc9dd380_tuple, 5, const_str_plain_dll_file ); Py_INCREF( const_str_plain_dll_file );
    PyTuple_SET_ITEM( const_tuple_b4ac7033c1c9b83c19a55b1dfc9dd380_tuple, 6, const_str_plain_def_name ); Py_INCREF( const_str_plain_def_name );
    PyTuple_SET_ITEM( const_tuple_b4ac7033c1c9b83c19a55b1dfc9dd380_tuple, 7, const_str_plain_def_file ); Py_INCREF( const_str_plain_def_file );
    PyTuple_SET_ITEM( const_tuple_b4ac7033c1c9b83c19a55b1dfc9dd380_tuple, 8, const_str_plain_cmd ); Py_INCREF( const_str_plain_cmd );
    PyTuple_SET_ITEM( const_tuple_b4ac7033c1c9b83c19a55b1dfc9dd380_tuple, 9, const_str_plain_retcode ); Py_INCREF( const_str_plain_retcode );
    const_tuple_b6f4cfc8dd190c5761fce775752006e5_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b6f4cfc8dd190c5761fce775752006e5_tuple, 0, const_str_plain_dll_file ); Py_INCREF( const_str_plain_dll_file );
    PyTuple_SET_ITEM( const_tuple_b6f4cfc8dd190c5761fce775752006e5_tuple, 1, const_str_plain_out_name ); Py_INCREF( const_str_plain_out_name );
    PyTuple_SET_ITEM( const_tuple_b6f4cfc8dd190c5761fce775752006e5_tuple, 2, const_str_plain_out_file ); Py_INCREF( const_str_plain_out_file );
    PyTuple_SET_ITEM( const_tuple_b6f4cfc8dd190c5761fce775752006e5_tuple, 3, const_str_plain_def_name ); Py_INCREF( const_str_plain_def_name );
    PyTuple_SET_ITEM( const_tuple_b6f4cfc8dd190c5761fce775752006e5_tuple, 4, const_str_plain_def_file ); Py_INCREF( const_str_plain_def_file );
    PyTuple_SET_ITEM( const_tuple_b6f4cfc8dd190c5761fce775752006e5_tuple, 5, const_str_plain_cmd ); Py_INCREF( const_str_plain_cmd );
    const_tuple_c07be35e260c0d8fa0b868709b817adb_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_c07be35e260c0d8fa0b868709b817adb_tuple, 0, const_str_plain_maj ); Py_INCREF( const_str_plain_maj );
    PyTuple_SET_ITEM( const_tuple_c07be35e260c0d8fa0b868709b817adb_tuple, 1, const_str_plain_min ); Py_INCREF( const_str_plain_min );
    PyTuple_SET_ITEM( const_tuple_c07be35e260c0d8fa0b868709b817adb_tuple, 2, const_str_plain_fullver ); Py_INCREF( const_str_plain_fullver );
    PyTuple_SET_ITEM( const_tuple_c07be35e260c0d8fa0b868709b817adb_tuple, 3, const_str_plain_template ); Py_INCREF( const_str_plain_template );
    const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 0, const_str_plain_lib_name ); Py_INCREF( const_str_plain_lib_name );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 1, const_str_plain_lib_file ); Py_INCREF( const_str_plain_lib_file );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 2, const_str_plain_out_name ); Py_INCREF( const_str_plain_out_name );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 3, const_str_plain_out_file ); Py_INCREF( const_str_plain_out_file );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 4, const_str_plain_lib2def ); Py_INCREF( const_str_plain_lib2def );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 5, const_str_plain_def_name ); Py_INCREF( const_str_plain_def_name );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 6, const_str_plain_def_file ); Py_INCREF( const_str_plain_def_file );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 7, const_str_plain_nm_cmd ); Py_INCREF( const_str_plain_nm_cmd );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 8, const_str_plain_nm_output ); Py_INCREF( const_str_plain_nm_output );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 9, const_str_plain_dlist ); Py_INCREF( const_str_plain_dlist );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 10, const_str_plain_flist ); Py_INCREF( const_str_plain_flist );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 11, const_str_plain_dll_name ); Py_INCREF( const_str_plain_dll_name );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 12, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 13, const_str_plain_cmd ); Py_INCREF( const_str_plain_cmd );
    PyTuple_SET_ITEM( const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 14, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 1, const_str_plain_target_desc ); Py_INCREF( const_str_plain_target_desc );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 2, const_str_plain_objects ); Py_INCREF( const_str_plain_objects );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 3, const_str_plain_output_filename ); Py_INCREF( const_str_plain_output_filename );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 4, const_str_plain_output_dir ); Py_INCREF( const_str_plain_output_dir );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 5, const_str_plain_libraries ); Py_INCREF( const_str_plain_libraries );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 6, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 7, const_str_plain_runtime_library_dirs ); Py_INCREF( const_str_plain_runtime_library_dirs );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 8, const_str_plain_export_symbols ); Py_INCREF( const_str_plain_export_symbols );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 9, const_str_plain_debug ); Py_INCREF( const_str_plain_debug );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 10, const_str_plain_extra_preargs ); Py_INCREF( const_str_plain_extra_preargs );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 11, const_str_plain_extra_postargs ); Py_INCREF( const_str_plain_extra_postargs );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 12, const_str_plain_build_temp ); Py_INCREF( const_str_plain_build_temp );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 13, const_str_plain_target_lang ); Py_INCREF( const_str_plain_target_lang );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 14, const_str_plain_runtime_library ); Py_INCREF( const_str_plain_runtime_library );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 15, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 16, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    const_tuple_fed54fa7ead7eb0169794a32aace20cf_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_fed54fa7ead7eb0169794a32aace20cf_tuple, 0, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_fed54fa7ead7eb0169794a32aace20cf_tuple, 1, const_str_plain_maj ); Py_INCREF( const_str_plain_maj );
    PyTuple_SET_ITEM( const_tuple_fed54fa7ead7eb0169794a32aace20cf_tuple, 2, const_str_plain_min ); Py_INCREF( const_str_plain_min );
    PyTuple_SET_ITEM( const_tuple_fed54fa7ead7eb0169794a32aace20cf_tuple, 3, const_str_plain_micro ); Py_INCREF( const_str_plain_micro );
    PyTuple_SET_ITEM( const_tuple_fed54fa7ead7eb0169794a32aace20cf_tuple, 4, const_str_plain_dllname ); Py_INCREF( const_str_plain_dllname );
    PyTuple_SET_ITEM( const_tuple_fed54fa7ead7eb0169794a32aace20cf_tuple, 5, const_str_plain_lib_dirs ); Py_INCREF( const_str_plain_lib_dirs );
    PyTuple_SET_ITEM( const_tuple_fed54fa7ead7eb0169794a32aace20cf_tuple, 6, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_fed54fa7ead7eb0169794a32aace20cf_tuple, 7, const_str_plain_dll ); Py_INCREF( const_str_plain_dll );
    const_list_str_digest_644b1f5211d64ec52727780e74026f6e_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_644b1f5211d64ec52727780e74026f6e_list, 0, const_str_digest_644b1f5211d64ec52727780e74026f6e ); Py_INCREF( const_str_digest_644b1f5211d64ec52727780e74026f6e );
    const_tuple_str_plain_msver_str_plain_msvcv_str_plain_maj_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_msver_str_plain_msvcv_str_plain_maj_tuple, 0, const_str_plain_msver ); Py_INCREF( const_str_plain_msver );
    PyTuple_SET_ITEM( const_tuple_str_plain_msver_str_plain_msvcv_str_plain_maj_tuple, 1, const_str_plain_msvcv ); Py_INCREF( const_str_plain_msvcv );
    PyTuple_SET_ITEM( const_tuple_str_plain_msver_str_plain_msvcv_str_plain_maj_tuple, 2, const_str_plain_maj ); Py_INCREF( const_str_plain_maj );
    const_tuple_str_plain_name_str_plain_type_str_plain_rctype_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_type_str_plain_rctype_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_type_str_plain_rctype_tuple, 1, const_str_plain_type ); Py_INCREF( const_str_plain_type );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_type_str_plain_rctype_tuple, 2, const_str_plain_rctype ); Py_INCREF( const_str_plain_rctype );
    const_tuple_str_plain_config_str_plain_root_str_plain_exext_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_config_str_plain_root_str_plain_exext_tuple, 0, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_str_plain_config_str_plain_root_str_plain_exext_tuple, 1, const_str_plain_root ); Py_INCREF( const_str_plain_root );
    PyTuple_SET_ITEM( const_tuple_str_plain_config_str_plain_root_str_plain_exext_tuple, 2, const_str_plain_exext ); Py_INCREF( const_str_plain_exext );
    const_tuple_str_plain_dll_name_str_plain_path_str_plain_filepath_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dll_name_str_plain_path_str_plain_filepath_tuple, 0, const_str_plain_dll_name ); Py_INCREF( const_str_plain_dll_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_dll_name_str_plain_path_str_plain_filepath_tuple, 1, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_str_plain_dll_name_str_plain_path_str_plain_filepath_tuple, 2, const_str_plain_filepath ); Py_INCREF( const_str_plain_filepath );
    const_tuple_str_plain_gen_preprocess_options_str_plain_gen_lib_options_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_gen_preprocess_options_str_plain_gen_lib_options_tuple, 0, const_str_plain_gen_preprocess_options ); Py_INCREF( const_str_plain_gen_preprocess_options );
    PyTuple_SET_ITEM( const_tuple_str_plain_gen_preprocess_options_str_plain_gen_lib_options_tuple, 1, const_str_plain_gen_lib_options ); Py_INCREF( const_str_plain_gen_lib_options );
}

// The module code objects.
static PyCodeObject *codeobj_ad0e69fc417c9dc1acb42eb3bfd0bda4;
static PyCodeObject *codeobj_37b1f2c878e9c2787fb0727d01f087f0;
static PyCodeObject *codeobj_bddab15959ac9f53a5816f6529e4d73e;
static PyCodeObject *codeobj_de733a21a7c0ba86fbeb7f33a3c4b5fc;
static PyCodeObject *codeobj_7b9ce9c83f8af207541e4e3be813f31b;
static PyCodeObject *codeobj_8b7e222275c0940b0dadd047e0e3abc7;
static PyCodeObject *codeobj_753c088756a017056da0ca6b7296966b;
static PyCodeObject *codeobj_6f89700e4a43b57f99267031aabe2f9e;
static PyCodeObject *codeobj_af1003c6f2e9b89e691f7fd7a1b77c1a;
static PyCodeObject *codeobj_405db3a23005304ade253f5ed421f64e;
static PyCodeObject *codeobj_71bd2a19b5c896aae10dd6163feb3393;
static PyCodeObject *codeobj_bf6b30b50b3973b4151a2274c88b9f53;
static PyCodeObject *codeobj_7f577ebd9781aec801b541b6cd87ae89;
static PyCodeObject *codeobj_e715086dc0432e0705b0c630223278e3;
static PyCodeObject *codeobj_aea9a4863a0569ed791c395e07df3a16;
static PyCodeObject *codeobj_6ab2bf88f2d809e7ce954d70a6ebd1a4;
static PyCodeObject *codeobj_36f04a7475fccaa80544e95de0b5d1e3;
static PyCodeObject *codeobj_787c1ab292b33eb19b81e17284c4a674;
static PyCodeObject *codeobj_ad4264f002bd3493d482c70e78caf6a5;
static PyCodeObject *codeobj_14e0edcf02009f68a527825a4dba97eb;
static PyCodeObject *codeobj_6f103027a02a8de09ca9af92c62447b0;
static PyCodeObject *codeobj_689a2db0c2c16a7c2c8b4ea4d9d1fe14;
static PyCodeObject *codeobj_f44907390a80c993c09d15509cfe0b7f;
static PyCodeObject *codeobj_5fbd0d1dc4f9f79c424cfce0aad1938a;
static PyCodeObject *codeobj_c7a91b01c416d5f65a6903a0b12ed834;
static PyCodeObject *codeobj_477b0c1ac67276d11f343e4e6245b5ce;
static PyCodeObject *codeobj_3dab022c66c6146c963d98721c29b3fa;
static PyCodeObject *codeobj_42dc624cf374778e979876159392ddcf;
static PyCodeObject *codeobj_8a98e36d56e570b48c53d05997884fe7;
static PyCodeObject *codeobj_15b98abe25c111a569b2114dd9f6c206;
static PyCodeObject *codeobj_7f7408c2cc3e7109ac462183a232e913;
static PyCodeObject *codeobj_c3068fabe026d77a9ef5fc1fa96ed97e;
static PyCodeObject *codeobj_c5d8c6bcdc04e66d5dc21d6c9c2aad1b;
static PyCodeObject *codeobj_2a734d201fada26b774c7743d873f906;
static PyCodeObject *codeobj_03dc37969bdb801d439a53eb679e484f;
static PyCodeObject *codeobj_9032aada2f54372be462d10f1bb9b132;
static PyCodeObject *codeobj_ea7800275275a537344bc1351c646b6e;
static PyCodeObject *codeobj_ba708f88b8f0fad564278e37cd8c8d47;
static PyCodeObject *codeobj_2274ee7b6ca1a7bbc20883213536668d;
static PyCodeObject *codeobj_f2be788709f5caaea4546b93994f20a1;
static PyCodeObject *codeobj_f4723b4f4b3093b3d0dedb8be031e99a;
static PyCodeObject *codeobj_d34cea822b51477eb8ce2d277c7048b1;

static void _initModuleCodeObjects(void)
{
    codeobj_ad0e69fc417c9dc1acb42eb3bfd0bda4 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_Mingw32CCompiler, 44, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_37b1f2c878e9c2787fb0727d01f087f0 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain___init__, 51, const_tuple_b2ff7c5803cd461a72ccd4f7a38f1f13_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bddab15959ac9f53a5816f6529e4d73e = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain___init__, 51, const_tuple_ac61cc7682e50112ed7aa832d30da621_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_de733a21a7c0ba86fbeb7f33a3c4b5fc = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain__build_import_library_amd64, 384, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7b9ce9c83f8af207541e4e3be813f31b = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain__build_import_library_amd64, 384, const_tuple_b6f4cfc8dd190c5761fce775752006e5_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8b7e222275c0940b0dadd047e0e3abc7 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain__build_import_library_x86, 404, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_753c088756a017056da0ca6b7296966b = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain__build_import_library_x86, 404, const_tuple_e9698a9796c8c611107409c50d6f32c4_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6f89700e4a43b57f99267031aabe2f9e = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain__find_dll_in_path, 316, const_tuple_str_plain_dll_name_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_af1003c6f2e9b89e691f7fd7a1b77c1a = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain__find_dll_in_path, 316, const_tuple_str_plain_dll_name_str_plain_path_str_plain_filepath_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_405db3a23005304ade253f5ed421f64e = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain__find_dll_in_winsxs, 306, const_tuple_str_plain_dll_name_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_71bd2a19b5c896aae10dd6163feb3393 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain__find_dll_in_winsxs, 306, const_tuple_20821a27336b67abc17c0b9e5f75f2ee_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bf6b30b50b3973b4151a2274c88b9f53 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_build_import_library, 372, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7f577ebd9781aec801b541b6cd87ae89 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_build_import_library, 372, const_tuple_str_plain_arch_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e715086dc0432e0705b0c630223278e3 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_build_msvcr_library, 326, const_tuple_str_plain_debug_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aea9a4863a0569ed791c395e07df3a16 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_build_msvcr_library, 326, const_tuple_b4ac7033c1c9b83c19a55b1dfc9dd380_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6ab2bf88f2d809e7ce954d70a6ebd1a4 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_check_embedded_msvcr_match_linked, 533, const_tuple_str_plain_msver_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_36f04a7475fccaa80544e95de0b5d1e3 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_check_embedded_msvcr_match_linked, 533, const_tuple_str_plain_msver_str_plain_msvcv_str_plain_maj_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_787c1ab292b33eb19b81e17284c4a674 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_configtest_name, 549, const_tuple_str_plain_config_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ad4264f002bd3493d482c70e78caf6a5 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_configtest_name, 549, const_tuple_str_plain_config_str_plain_base_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_14e0edcf02009f68a527825a4dba97eb = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_dump_table, 264, const_tuple_str_plain_dll_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6f103027a02a8de09ca9af92c62447b0 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_dump_table, 264, const_tuple_str_plain_dll_str_plain_st_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_689a2db0c2c16a7c2c8b4ea4d9d1fe14 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_find_dll, 301, const_tuple_str_plain_dll_name_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f44907390a80c993c09d15509cfe0b7f = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_find_dll, 301, const_tuple_5dc551bcc8a8911d9ac8b8d580a89c44_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5fbd0d1dc4f9f79c424cfce0aad1938a = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_find_python_dll, 240, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c7a91b01c416d5f65a6903a0b12ed834 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_find_python_dll, 240, const_tuple_fed54fa7ead7eb0169794a32aace20cf_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_477b0c1ac67276d11f343e4e6245b5ce = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_generate_def, 268, const_tuple_str_plain_dll_str_plain_dfile_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3dab022c66c6146c963d98721c29b3fa = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_generate_def, 268, const_tuple_a625397689fd66d11c5d058059ca1100_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_42dc624cf374778e979876159392ddcf = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_generate_manifest, 564, const_tuple_str_plain_config_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8a98e36d56e570b48c53d05997884fe7 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_generate_manifest, 564, const_tuple_5876d64640d9243c78d9e4f2d1d6d41f_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_15b98abe25c111a569b2114dd9f6c206 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_link, 163, const_tuple_4f1f807896fef05b81f6568a1cbbb77e_tuple, 14, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7f7408c2cc3e7109ac462183a232e913 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_link, 163, const_tuple_fd952aa012cb9e050133f5969f6e1a41_tuple, 14, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c3068fabe026d77a9ef5fc1fa96ed97e = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_manifest_name, 553, const_tuple_str_plain_config_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c5d8c6bcdc04e66d5dc21d6c9c2aad1b = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_manifest_name, 553, const_tuple_str_plain_config_str_plain_root_str_plain_exext_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2a734d201fada26b774c7743d873f906 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_manifest_rc, 509, const_tuple_str_plain_name_str_plain_type_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_03dc37969bdb801d439a53eb679e484f = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_manifest_rc, 509, const_tuple_str_plain_name_str_plain_type_str_plain_rctype_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9032aada2f54372be462d10f1bb9b132 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_mingw32ccompiler, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ea7800275275a537344bc1351c646b6e = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_msvc_manifest_xml, 477, const_tuple_str_plain_maj_str_plain_min_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ba708f88b8f0fad564278e37cd8c8d47 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_msvc_manifest_xml, 477, const_tuple_c07be35e260c0d8fa0b868709b817adb_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2274ee7b6ca1a7bbc20883213536668d = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_object_filenames, 205, const_tuple_2a35063b865b1125ac03b149e89b5bd7_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f2be788709f5caaea4546b93994f20a1 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_object_filenames, 205, const_tuple_7ce01219379a96d8c7c0914e1374531d_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f4723b4f4b3093b3d0dedb8be031e99a = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_rc_name, 559, const_tuple_str_plain_config_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d34cea822b51477eb8ce2d277c7048b1 = MAKE_CODEOBJ( const_str_digest_712b615044e13d4670613072bed7f41c, const_str_plain_rc_name, 559, const_tuple_str_plain_config_str_plain_root_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler(  );


NUITKA_CROSS_MODULE PyObject *impl_function_3_complex_call_helper_star_list_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_star_arg_list );


static PyObject *MAKE_FUNCTION_function_10_msvc_manifest_xml_of_module_numpy$distutils$mingw32ccompiler(  );


static PyObject *MAKE_FUNCTION_function_11_manifest_rc_of_module_numpy$distutils$mingw32ccompiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_12_check_embedded_msvcr_match_linked_of_module_numpy$distutils$mingw32ccompiler(  );


static PyObject *MAKE_FUNCTION_function_13_configtest_name_of_module_numpy$distutils$mingw32ccompiler(  );


static PyObject *MAKE_FUNCTION_function_14_manifest_name_of_module_numpy$distutils$mingw32ccompiler(  );


static PyObject *MAKE_FUNCTION_function_15_rc_name_of_module_numpy$distutils$mingw32ccompiler(  );


static PyObject *MAKE_FUNCTION_function_16_generate_manifest_of_module_numpy$distutils$mingw32ccompiler(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( PyObjectSharedLocalVariable &closure_arch );


// This structure is for attachment as self of function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler.
// It is allocated at the time the function object is created.
struct _context_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler_t
{
    // The function can access a read-only closure of the creator.
    PyObjectSharedLocalVariable closure_arch;
};

static void _context_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler_destructor( void *context_voidptr )
{
    _context_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler_t *_python_context = (_context_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_2__find_dll_in_path_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler(  );


static PyObject *MAKE_FUNCTION_function_2_find_python_dll_of_module_numpy$distutils$mingw32ccompiler(  );


static PyObject *MAKE_FUNCTION_function_2_link_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_dump_table_of_module_numpy$distutils$mingw32ccompiler(  );


static PyObject *MAKE_FUNCTION_function_3_object_filenames_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_generate_def_of_module_numpy$distutils$mingw32ccompiler(  );


static PyObject *MAKE_FUNCTION_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler(  );


static PyObject *MAKE_FUNCTION_function_6_build_msvcr_library_of_module_numpy$distutils$mingw32ccompiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_7_build_import_library_of_module_numpy$distutils$mingw32ccompiler(  );


static PyObject *MAKE_FUNCTION_function_8__build_import_library_amd64_of_module_numpy$distutils$mingw32ccompiler(  );


static PyObject *MAKE_FUNCTION_function_9__build_import_library_x86_of_module_numpy$distutils$mingw32ccompiler(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var_compiler_type;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var_link;
    PyObjectLocalVariable var_object_filenames;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_3cf1150dc41ac01dcb8cfcc35c3f433c;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_213fef395e66630df3575041beeade43;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_assign_source_3 = const_str_plain_mingw32;
    assert( var_compiler_type.object == NULL );
    var_compiler_type.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ad0e69fc417c9dc1acb42eb3bfd0bda4, module_numpy$distutils$mingw32ccompiler );
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
    tmp_defaults_1 = const_tuple_int_0_int_0_int_0_tuple;
    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_4;

    tmp_defaults_2 = const_tuple_none_int_0_none_none_none_none_tuple;
    tmp_assign_source_5 = MAKE_FUNCTION_function_2_link_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }
    assert( var_link.object == NULL );
    var_link.object = tmp_assign_source_5;

    tmp_defaults_3 = const_tuple_int_0_str_empty_tuple;
    tmp_assign_source_6 = MAKE_FUNCTION_function_3_object_filenames_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 205;
        goto frame_exception_exit_1;
    }
    assert( var_object_filenames.object == NULL );
    var_object_filenames.object = tmp_assign_source_6;


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
    if ((var_compiler_type.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_compiler_type,
            var_compiler_type.object
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
    if ((var_link.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_link,
            var_link.object
        );

    }
    if ((var_object_filenames.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_object_filenames,
            var_object_filenames.object
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
    if ((var_compiler_type.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_compiler_type,
            var_compiler_type.object
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
    if ((var_link.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_link,
            var_link.object
        );

    }
    if ((var_object_filenames.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_object_filenames,
            var_object_filenames.object
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


static PyObject *impl_function_1___init___of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_verbose, PyObject *_python_par_dry_run, PyObject *_python_par_force )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_verbose; par_verbose.object = _python_par_verbose;
    PyObjectLocalVariable par_dry_run; par_dry_run.object = _python_par_dry_run;
    PyObjectLocalVariable par_force; par_force.object = _python_par_force;
    PyObjectLocalVariable var_re;
    PyObjectLocalVariable var_p;
    PyObjectLocalVariable var_out_string;
    PyObjectLocalVariable var_result;
    PyObjectLocalVariable var_entry_point;
    PyObjectLocalVariable var_msvcr_success;
    PyObjectLocalVariable var_msvcr_dbg_success;
    PyObjectLocalVariable var_msvcr_version;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_kw_4;
    PyObject *tmp_call_kw_5;
    PyObject *tmp_call_kw_6;
    PyObject *tmp_call_kw_7;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    int tmp_cmp_LtE_1;
    int tmp_cmp_LtE_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_37b1f2c878e9c2787fb0727d01f087f0, module_numpy$distutils$mingw32ccompiler );
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_distutils );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_distutils );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91769 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cygwinccompiler );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CygwinCCompiler );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_self.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_verbose.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49769 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_dry_run.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83192 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_force.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82408 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 57;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 57;
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

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_gcc_version );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_is_1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_re.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_re,
            var_re.object
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
    if ((var_out_string.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_out_string,
            var_out_string.object
        );

    }
    if ((var_result.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_result,
            var_result.object
        );

    }
    if ((var_entry_point.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_entry_point,
            var_entry_point.object
        );

    }
    if ((var_msvcr_success.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_msvcr_success,
            var_msvcr_success.object
        );

    }
    if ((var_msvcr_dbg_success.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_msvcr_dbg_success,
            var_msvcr_dbg_success.object
        );

    }
    if ((var_msvcr_version.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_msvcr_version,
            var_msvcr_version.object
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
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_dry_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dry_run,
            par_dry_run.object
        );

    }
    if ((par_force.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_force,
            par_force.object
        );

    }
    frame_function->f_lineno = 62;
    tmp_assign_source_1 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    assert( var_re.object == NULL );
    var_re.object = tmp_assign_source_1;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_subprocess );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107157 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Popen );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = DEEP_COPY( const_tuple_a2380342ace04e8882aedf120d95dc57_tuple );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = Py_True;
    tmp_dict_key_1 = const_str_plain_shell;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_subprocess );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107157 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_PIPE );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_stdout;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 64;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    assert( var_p.object == NULL );
    var_p.object = tmp_assign_source_2;

    tmp_source_name_8 = var_p.object;

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_stdout );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_read );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 65;
    tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    assert( var_out_string.object == NULL );
    var_out_string.object = tmp_assign_source_3;

    tmp_source_name_10 = var_p.object;

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_stdout );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_close );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 66;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = var_re.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_search );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_digest_b9f3bb411d4a96f01bb62a8ad5cd024e;
    tmp_call_arg_element_6 = var_out_string.object;

    frame_function->f_lineno = 67;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    assert( var_result.object == NULL );
    var_result.object = tmp_assign_source_4;

    tmp_cond_value_1 = var_result.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
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
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_StrictVersion );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StrictVersion );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107196 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = var_result.object;

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_group );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = const_int_pos_1;
    frame_function->f_lineno = 69;
    tmp_call_arg_element_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 69;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_gcc_version, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_2:;
    branch_no_1:;
    tmp_source_name_13 = par_self.object;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_gcc_version );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_digest_4d08253ba99d178e0906778519d675a8;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_LtE_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_5 = const_str_digest_2229b13853404fa63a58dbee7277d890;
    assert( var_entry_point.object == NULL );
    var_entry_point.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    goto branch_end_3;
    branch_no_3:;
    tmp_assign_source_6 = const_str_empty;
    assert( var_entry_point.object == NULL );
    var_entry_point.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    branch_end_3:;
    tmp_source_name_14 = par_self.object;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_linker_dll );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_str_plain_dllwrap;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_2 = const_str_plain_dllwrap;
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_linker, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_15 = par_self.object;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_linker_dll );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_str_plain_gcc;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assattr_name_3 = const_str_digest_644b1f5211d64ec52727780e74026f6e;
    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_linker, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    branch_end_4:;
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_build_import_library );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_build_import_library );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107238 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 91;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_build_msvcr_library );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_build_msvcr_library );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107287 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 94;
    tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS( tmp_called_9 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    assert( var_msvcr_success.object == NULL );
    var_msvcr_success.object = tmp_assign_source_7;

    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_build_msvcr_library );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_build_msvcr_library );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107287 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_2 = PyDict_Copy( const_dict_e722341caa369e2ae55c591496eb7352 );
    frame_function->f_lineno = 95;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_10, tmp_call_kw_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    assert( var_msvcr_dbg_success.object == NULL );
    var_msvcr_dbg_success.object = tmp_assign_source_8;

    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_assign_source_9 = var_msvcr_success.object;

    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    tmp_cond_value_3 = tmp_or_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_2;
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
    tmp_cond_value_2 = tmp_or_1__value_1.object;

    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_2 = var_msvcr_dbg_success.object;

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
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_16 = par_self.object;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 98;
        goto try_finally_handler_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_define_macro );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_9 = const_str_plain_NPY_MINGW_USE_CUSTOM_MSVCR;
    frame_function->f_lineno = 98;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
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
    tmp_binop_left_1 = const_str_digest_53a21d3bea71b0f4b0d2793624e54b43;
    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_msvc_runtime_library );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_msvc_runtime_library );
    }

    if ( tmp_called_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107335 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 101;
    tmp_source_name_17 = CALL_FUNCTION_NO_ARGS( tmp_called_13 );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_lstrip );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = const_str_plain_msvcr;
    frame_function->f_lineno = 101;
    tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    assert( var_msvcr_version.object == NULL );
    var_msvcr_version.object = tmp_assign_source_10;

    tmp_source_name_18 = par_self.object;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_define_macro );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = const_str_plain___MSVCRT_VERSION__;
    tmp_call_arg_element_12 = var_msvcr_version.object;

    frame_function->f_lineno = 102;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_14, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_15 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_get_build_architecture );

    if (unlikely( tmp_called_15 == NULL ))
    {
        tmp_called_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_build_architecture );
    }

    if ( tmp_called_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107384 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 117;
    tmp_compare_left_5 = CALL_FUNCTION_NO_ARGS( tmp_called_15 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = const_str_plain_AMD64;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_19 = par_self.object;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_gcc_version );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_6 = const_str_digest_07078a97d66756f213dbca3e379bf084;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_6 );
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_20 = par_self.object;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_set_executables );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_call_kw_3 = PyDict_Copy( const_dict_eec169d4dd11bb0065ce59b0277f1807 );
    frame_function->f_lineno = 123;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_16, tmp_call_kw_3 );
    Py_DECREF( tmp_called_16 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_21 = par_self.object;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_set_executables );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_call_kw_4 = PyDict_Copy( const_dict_81dfc2caffbd6ff32b7cbafbfd85929a );
    frame_function->f_lineno = 130;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_17, tmp_call_kw_4 );
    Py_DECREF( tmp_called_17 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_8:;
    goto branch_end_7;
    branch_no_7:;
    tmp_source_name_22 = par_self.object;

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_gcc_version );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = const_str_digest_272f0a04b740763e0a29316bc4af89a4;
    tmp_cmp_LtE_2 = RICH_COMPARE_BOOL_LE( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_LtE_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_7 );
    if (tmp_cmp_LtE_2 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_23 = par_self.object;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_set_executables );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    tmp_call_kw_5 = _PyDict_NewPresized( 4 );
    tmp_dict_value_3 = const_str_digest_8aad25612334548aee4de0d9347d6267;
    tmp_dict_key_3 = const_str_plain_compiler;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = const_str_digest_dacde8f19fadc3ac4469821d7bf036cf;
    tmp_dict_key_4 = const_str_plain_compiler_so;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = const_str_digest_aad4f21a5da4ba59dcf0d09e37b0a4e2;
    tmp_dict_key_5 = const_str_plain_linker_exe;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_binop_left_2 = const_str_digest_ebecd4176e891e07137e26a56f4fe02f;
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_source_name_24 = par_self.object;

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_kw_5 );
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 137;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_linker );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_kw_5 );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 137;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_entry_point.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_kw_5 );
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107435 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 137;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_1 );
    tmp_dict_value_6 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_kw_5 );

        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = const_str_plain_linker_so;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    frame_function->f_lineno = 136;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_18, tmp_call_kw_5 );
    Py_DECREF( tmp_called_18 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_25 = par_self.object;

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 138;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_gcc_version );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_8 = const_str_digest_07078a97d66756f213dbca3e379bf084;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        frame_function->f_lineno = 138;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_8 );
    if (tmp_cmp_Lt_2 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_26 = par_self.object;

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_set_executables );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_call_kw_6 = PyDict_Copy( const_dict_61b7ac380f41b6e0ae81e447f6f55f5e );
    frame_function->f_lineno = 142;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_19, tmp_call_kw_6 );
    Py_DECREF( tmp_called_19 );
    Py_DECREF( tmp_call_kw_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 142;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_10;
    branch_no_10:;
    tmp_source_name_27 = par_self.object;

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_set_executables );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_call_kw_7 = PyDict_Copy( const_dict_9c8f7c7ec1beeadc0b1d9b4beca25e71 );
    frame_function->f_lineno = 148;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_20, tmp_call_kw_7 );
    Py_DECREF( tmp_called_20 );
    Py_DECREF( tmp_call_kw_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_10:;
    branch_end_9:;
    branch_end_7:;
    tmp_assattr_name_4 = LIST_COPY( const_list_str_digest_644b1f5211d64ec52727780e74026f6e_list );
    tmp_assattr_target_4 = par_self.object;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_compiler_cxx, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );

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
    if ((var_re.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_re,
            var_re.object
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
    if ((var_out_string.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_out_string,
            var_out_string.object
        );

    }
    if ((var_result.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_result,
            var_result.object
        );

    }
    if ((var_entry_point.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_entry_point,
            var_entry_point.object
        );

    }
    if ((var_msvcr_success.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msvcr_success,
            var_msvcr_success.object
        );

    }
    if ((var_msvcr_dbg_success.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msvcr_dbg_success,
            var_msvcr_dbg_success.object
        );

    }
    if ((var_msvcr_version.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msvcr_version,
            var_msvcr_version.object
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
    if ((par_dry_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dry_run,
            par_dry_run.object
        );

    }
    if ((par_force.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_force,
            par_force.object
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
static PyObject *fparse_function_1___init___of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_verbose = NULL;
    PyObject *_python_par_dry_run = NULL;
    PyObject *_python_par_force = NULL;
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
            if ( found == false && const_str_plain_dry_run == key )
            {
                assert( _python_par_dry_run == NULL );
                _python_par_dry_run = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_force == key )
            {
                assert( _python_par_force == NULL );
                _python_par_force = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dry_run, key ) == 1 )
            {
                assert( _python_par_dry_run == NULL );
                _python_par_dry_run = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_force, key ) == 1 )
            {
                assert( _python_par_force == NULL );
                _python_par_force = value;

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
         if (unlikely( _python_par_verbose != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_verbose = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_verbose == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_verbose = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_dry_run != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_dry_run = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_dry_run == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_dry_run = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_force != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_force = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_force == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_force = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_verbose == NULL || _python_par_dry_run == NULL || _python_par_force == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_verbose, _python_par_dry_run, _python_par_force };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_self, _python_par_verbose, _python_par_dry_run, _python_par_force );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_verbose );
    Py_XDECREF( _python_par_dry_run );
    Py_XDECREF( _python_par_force );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_1___init___of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_link_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_target_desc, PyObject *_python_par_objects, PyObject *_python_par_output_filename, PyObject *_python_par_output_dir, PyObject *_python_par_libraries, PyObject *_python_par_library_dirs, PyObject *_python_par_runtime_library_dirs, PyObject *_python_par_export_symbols, PyObject *_python_par_debug, PyObject *_python_par_extra_preargs, PyObject *_python_par_extra_postargs, PyObject *_python_par_build_temp, PyObject *_python_par_target_lang )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_target_desc; par_target_desc.object = _python_par_target_desc;
    PyObjectLocalVariable par_objects; par_objects.object = _python_par_objects;
    PyObjectLocalVariable par_output_filename; par_output_filename.object = _python_par_output_filename;
    PyObjectLocalVariable par_output_dir; par_output_dir.object = _python_par_output_dir;
    PyObjectLocalVariable par_libraries; par_libraries.object = _python_par_libraries;
    PyObjectLocalVariable par_library_dirs; par_library_dirs.object = _python_par_library_dirs;
    PyObjectLocalVariable par_runtime_library_dirs; par_runtime_library_dirs.object = _python_par_runtime_library_dirs;
    PyObjectLocalVariable par_export_symbols; par_export_symbols.object = _python_par_export_symbols;
    PyObjectLocalVariable par_debug; par_debug.object = _python_par_debug;
    PyObjectLocalVariable par_extra_preargs; par_extra_preargs.object = _python_par_extra_preargs;
    PyObjectLocalVariable par_extra_postargs; par_extra_postargs.object = _python_par_extra_postargs;
    PyObjectLocalVariable par_build_temp; par_build_temp.object = _python_par_build_temp;
    PyObjectLocalVariable par_target_lang; par_target_lang.object = _python_par_target_lang;
    PyObjectLocalVariable var_runtime_library;
    PyObjectLocalVariable var_args;
    PyObjectLocalVariable var_func;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_15b98abe25c111a569b2114dd9f6c206, module_numpy$distutils$mingw32ccompiler );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_msvc_runtime_library );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_msvc_runtime_library );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107335 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 179;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 179;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 179;
        goto frame_exception_exit_1;
    }
    assert( var_runtime_library.object == NULL );
    var_runtime_library.object = tmp_assign_source_1;

    tmp_cond_value_1 = var_runtime_library.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
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
    tmp_cond_value_2 = par_libraries.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 181;
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
    tmp_assign_source_2 = PyList_New( 0 );
    if (par_libraries.object == NULL)
    {
        par_libraries.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_libraries.object;
        par_libraries.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    branch_no_2:;
    tmp_source_name_1 = par_libraries.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = var_runtime_library.object;

    frame_function->f_lineno = 183;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_assign_source_3 = PyTuple_New( 14 );
    tmp_tuple_element_1 = par_self.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_target_desc.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 103711 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_objects.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81736 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_output_filename.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 103650 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 3, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_output_dir.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80864 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 4, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_libraries.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 5, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_library_dirs.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83284 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 6, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_runtime_library_dirs.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83342 ], 66, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 7, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 8, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_debug.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81520 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 9, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_extra_preargs.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81571 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 10, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_extra_postargs.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81407 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 11, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_build_temp.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107492 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 12, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_target_lang.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107548 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 13, tmp_tuple_element_1 );
    assert( var_args.object == NULL );
    var_args.object = tmp_assign_source_3;

    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_gcc_version );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_digest_272f0a04b740763e0a29316bc4af89a4;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_distutils );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_distutils );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91769 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_cygwinccompiler );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_CygwinCCompiler );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_link );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    assert( var_func.object == NULL );
    var_func.object = tmp_assign_source_4;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_UnixCCompiler );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnixCCompiler );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107605 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_link );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }
    assert( var_func.object == NULL );
    var_func.object = tmp_assign_source_5;

    branch_end_3:;
    tmp_dircall_arg1_1 = var_func.object;

    tmp_slice_source_1 = var_args.object;

    tmp_source_name_8 = var_func.object;

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___code__ );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_slice_upper_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_co_argcount );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_dircall_arg2_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_unused = impl_function_3_complex_call_helper_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), tmp_dircall_arg2_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
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
    if ((var_runtime_library.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_runtime_library,
            var_runtime_library.object
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
    if ((var_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            var_func.object
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
    if ((par_target_desc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_target_desc,
            par_target_desc.object
        );

    }
    if ((par_objects.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_objects,
            par_objects.object
        );

    }
    if ((par_output_filename.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_output_filename,
            par_output_filename.object
        );

    }
    if ((par_output_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_output_dir,
            par_output_dir.object
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
    if ((par_runtime_library_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_runtime_library_dirs,
            par_runtime_library_dirs.object
        );

    }
    if ((par_export_symbols.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_export_symbols,
            par_export_symbols.object
        );

    }
    if ((par_debug.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_debug,
            par_debug.object
        );

    }
    if ((par_extra_preargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_extra_preargs,
            par_extra_preargs.object
        );

    }
    if ((par_extra_postargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_extra_postargs,
            par_extra_postargs.object
        );

    }
    if ((par_build_temp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build_temp,
            par_build_temp.object
        );

    }
    if ((par_target_lang.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_target_lang,
            par_target_lang.object
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
static PyObject *fparse_function_2_link_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_target_desc = NULL;
    PyObject *_python_par_objects = NULL;
    PyObject *_python_par_output_filename = NULL;
    PyObject *_python_par_output_dir = NULL;
    PyObject *_python_par_libraries = NULL;
    PyObject *_python_par_library_dirs = NULL;
    PyObject *_python_par_runtime_library_dirs = NULL;
    PyObject *_python_par_export_symbols = NULL;
    PyObject *_python_par_debug = NULL;
    PyObject *_python_par_extra_preargs = NULL;
    PyObject *_python_par_extra_postargs = NULL;
    PyObject *_python_par_build_temp = NULL;
    PyObject *_python_par_target_lang = NULL;
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
                PyErr_Format( PyExc_TypeError, "link() keywords must be strings" );
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
            if ( found == false && const_str_plain_target_desc == key )
            {
                assert( _python_par_target_desc == NULL );
                _python_par_target_desc = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_objects == key )
            {
                assert( _python_par_objects == NULL );
                _python_par_objects = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_output_filename == key )
            {
                assert( _python_par_output_filename == NULL );
                _python_par_output_filename = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_output_dir == key )
            {
                assert( _python_par_output_dir == NULL );
                _python_par_output_dir = value;

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
            if ( found == false && const_str_plain_runtime_library_dirs == key )
            {
                assert( _python_par_runtime_library_dirs == NULL );
                _python_par_runtime_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_export_symbols == key )
            {
                assert( _python_par_export_symbols == NULL );
                _python_par_export_symbols = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_debug == key )
            {
                assert( _python_par_debug == NULL );
                _python_par_debug = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_extra_preargs == key )
            {
                assert( _python_par_extra_preargs == NULL );
                _python_par_extra_preargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_extra_postargs == key )
            {
                assert( _python_par_extra_postargs == NULL );
                _python_par_extra_postargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_build_temp == key )
            {
                assert( _python_par_build_temp == NULL );
                _python_par_build_temp = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_target_lang == key )
            {
                assert( _python_par_target_lang == NULL );
                _python_par_target_lang = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_target_desc, key ) == 1 )
            {
                assert( _python_par_target_desc == NULL );
                _python_par_target_desc = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_objects, key ) == 1 )
            {
                assert( _python_par_objects == NULL );
                _python_par_objects = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_output_filename, key ) == 1 )
            {
                assert( _python_par_output_filename == NULL );
                _python_par_output_filename = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_output_dir, key ) == 1 )
            {
                assert( _python_par_output_dir == NULL );
                _python_par_output_dir = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_runtime_library_dirs, key ) == 1 )
            {
                assert( _python_par_runtime_library_dirs == NULL );
                _python_par_runtime_library_dirs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_export_symbols, key ) == 1 )
            {
                assert( _python_par_export_symbols == NULL );
                _python_par_export_symbols = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_debug, key ) == 1 )
            {
                assert( _python_par_debug == NULL );
                _python_par_debug = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_extra_preargs, key ) == 1 )
            {
                assert( _python_par_extra_preargs == NULL );
                _python_par_extra_preargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_extra_postargs, key ) == 1 )
            {
                assert( _python_par_extra_postargs == NULL );
                _python_par_extra_postargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_build_temp, key ) == 1 )
            {
                assert( _python_par_build_temp == NULL );
                _python_par_build_temp = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_target_lang, key ) == 1 )
            {
                assert( _python_par_target_lang == NULL );
                _python_par_target_lang = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "link() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 14 ))
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
        if ( 0 + self->m_defaults_given >= 14  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 14 ) );
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
         if (unlikely( _python_par_target_desc != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_target_desc = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_target_desc == NULL )
    {
        if ( 1 + self->m_defaults_given >= 14  )
        {
            _python_par_target_desc = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 14 ) );
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
         if (unlikely( _python_par_objects != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_objects = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_objects == NULL )
    {
        if ( 2 + self->m_defaults_given >= 14  )
        {
            _python_par_objects = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 14 ) );
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
         if (unlikely( _python_par_output_filename != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_output_filename = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_output_filename == NULL )
    {
        if ( 3 + self->m_defaults_given >= 14  )
        {
            _python_par_output_filename = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 14 ) );
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
         if (unlikely( _python_par_output_dir != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_output_dir = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_output_dir == NULL )
    {
        if ( 4 + self->m_defaults_given >= 14  )
        {
            _python_par_output_dir = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 14 ) );
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
         if (unlikely( _python_par_libraries != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_libraries = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_libraries == NULL )
    {
        if ( 5 + self->m_defaults_given >= 14  )
        {
            _python_par_libraries = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 14 ) );
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
         if (unlikely( _python_par_library_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_library_dirs = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_library_dirs == NULL )
    {
        if ( 6 + self->m_defaults_given >= 14  )
        {
            _python_par_library_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 14 ) );
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
         if (unlikely( _python_par_runtime_library_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_runtime_library_dirs = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_runtime_library_dirs == NULL )
    {
        if ( 7 + self->m_defaults_given >= 14  )
        {
            _python_par_runtime_library_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 14 ) );
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
         if (unlikely( _python_par_export_symbols != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_export_symbols = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_export_symbols == NULL )
    {
        if ( 8 + self->m_defaults_given >= 14  )
        {
            _python_par_export_symbols = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 14 ) );
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
    if (likely( 9 < args_given ))
    {
         if (unlikely( _python_par_debug != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 9 );
             goto error_exit;
         }

        _python_par_debug = INCREASE_REFCOUNT( args[ 9 ] );
    }
    else if ( _python_par_debug == NULL )
    {
        if ( 9 + self->m_defaults_given >= 14  )
        {
            _python_par_debug = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 9 - 14 ) );
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
    if (likely( 10 < args_given ))
    {
         if (unlikely( _python_par_extra_preargs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 10 );
             goto error_exit;
         }

        _python_par_extra_preargs = INCREASE_REFCOUNT( args[ 10 ] );
    }
    else if ( _python_par_extra_preargs == NULL )
    {
        if ( 10 + self->m_defaults_given >= 14  )
        {
            _python_par_extra_preargs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 10 - 14 ) );
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
    if (likely( 11 < args_given ))
    {
         if (unlikely( _python_par_extra_postargs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 11 );
             goto error_exit;
         }

        _python_par_extra_postargs = INCREASE_REFCOUNT( args[ 11 ] );
    }
    else if ( _python_par_extra_postargs == NULL )
    {
        if ( 11 + self->m_defaults_given >= 14  )
        {
            _python_par_extra_postargs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 11 - 14 ) );
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
    if (likely( 12 < args_given ))
    {
         if (unlikely( _python_par_build_temp != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 12 );
             goto error_exit;
         }

        _python_par_build_temp = INCREASE_REFCOUNT( args[ 12 ] );
    }
    else if ( _python_par_build_temp == NULL )
    {
        if ( 12 + self->m_defaults_given >= 14  )
        {
            _python_par_build_temp = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 12 - 14 ) );
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
    if (likely( 13 < args_given ))
    {
         if (unlikely( _python_par_target_lang != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 13 );
             goto error_exit;
         }

        _python_par_target_lang = INCREASE_REFCOUNT( args[ 13 ] );
    }
    else if ( _python_par_target_lang == NULL )
    {
        if ( 13 + self->m_defaults_given >= 14  )
        {
            _python_par_target_lang = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 13 - 14 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_target_desc == NULL || _python_par_objects == NULL || _python_par_output_filename == NULL || _python_par_output_dir == NULL || _python_par_libraries == NULL || _python_par_library_dirs == NULL || _python_par_runtime_library_dirs == NULL || _python_par_export_symbols == NULL || _python_par_debug == NULL || _python_par_extra_preargs == NULL || _python_par_extra_postargs == NULL || _python_par_build_temp == NULL || _python_par_target_lang == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_target_desc, _python_par_objects, _python_par_output_filename, _python_par_output_dir, _python_par_libraries, _python_par_library_dirs, _python_par_runtime_library_dirs, _python_par_export_symbols, _python_par_debug, _python_par_extra_preargs, _python_par_extra_postargs, _python_par_build_temp, _python_par_target_lang };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_link_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_self, _python_par_target_desc, _python_par_objects, _python_par_output_filename, _python_par_output_dir, _python_par_libraries, _python_par_library_dirs, _python_par_runtime_library_dirs, _python_par_export_symbols, _python_par_debug, _python_par_extra_preargs, _python_par_extra_postargs, _python_par_build_temp, _python_par_target_lang );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_target_desc );
    Py_XDECREF( _python_par_objects );
    Py_XDECREF( _python_par_output_filename );
    Py_XDECREF( _python_par_output_dir );
    Py_XDECREF( _python_par_libraries );
    Py_XDECREF( _python_par_library_dirs );
    Py_XDECREF( _python_par_runtime_library_dirs );
    Py_XDECREF( _python_par_export_symbols );
    Py_XDECREF( _python_par_debug );
    Py_XDECREF( _python_par_extra_preargs );
    Py_XDECREF( _python_par_extra_postargs );
    Py_XDECREF( _python_par_build_temp );
    Py_XDECREF( _python_par_target_lang );

    return NULL;
}

static PyObject *dparse_function_2_link_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 14 )
    {
        return impl_function_2_link_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ), INCREASE_REFCOUNT( args[ 10 ] ), INCREASE_REFCOUNT( args[ 11 ] ), INCREASE_REFCOUNT( args[ 12 ] ), INCREASE_REFCOUNT( args[ 13 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_link_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_object_filenames_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_source_filenames, PyObject *_python_par_strip_dir, PyObject *_python_par_output_dir )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_source_filenames; par_source_filenames.object = _python_par_source_filenames;
    PyObjectLocalVariable par_strip_dir; par_strip_dir.object = _python_par_strip_dir;
    PyObjectLocalVariable par_output_dir; par_output_dir.object = _python_par_output_dir;
    PyObjectLocalVariable var_obj_names;
    PyObjectLocalVariable var_src_name;
    PyObjectLocalVariable var_base;
    PyObjectLocalVariable var_ext;
    PyObjectLocalVariable var_drv;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
    int tmp_cmp_NotIn_1;
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
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2274ee7b6ca1a7bbc20883213536668d, module_numpy$distutils$mingw32ccompiler );
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
    tmp_compare_left_1 = par_output_dir.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80864 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 209;
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
    tmp_assign_source_1 = const_str_empty;
    if (par_output_dir.object == NULL)
    {
        par_output_dir.object = INCREASE_REFCOUNT( tmp_assign_source_1 );
    }
    else
    {
        PyObject *old = par_output_dir.object;
        par_output_dir.object = INCREASE_REFCOUNT( tmp_assign_source_1 );
        Py_DECREF( old );
    }
    branch_no_1:;
    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_obj_names.object == NULL );
    var_obj_names.object = tmp_assign_source_2;

    tmp_iter_arg_1 = par_source_filenames.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80920 ], 62, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 211;
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
        frame_function->f_lineno = 211;
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

    if (var_src_name.object == NULL)
    {
        var_src_name.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_src_name.object;
        var_src_name.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 213;
        goto try_finally_handler_2;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 213;
        goto try_finally_handler_2;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_splitext );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 213;
        goto try_finally_handler_2;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 213;
        goto try_finally_handler_2;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 213;
        goto try_finally_handler_2;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_normcase );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 213;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_2 = var_src_name.object;

    frame_function->f_lineno = 213;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 213;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 213;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 213;
        goto try_finally_handler_2;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 213;
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


        frame_function->f_lineno = 213;
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


        frame_function->f_lineno = 213;
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

    if (var_base.object == NULL)
    {
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_base.object;
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2.object;

    if (var_ext.object == NULL)
    {
        var_ext.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_ext.object;
        var_ext.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
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
    // Tried code
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto try_finally_handler_3;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto try_finally_handler_3;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_splitdrive );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_3 = var_base.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto try_finally_handler_3;
    }

    frame_function->f_lineno = 218;
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto try_finally_handler_3;
    }
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_2__source_iter.object == NULL)
    {
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter.object;
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_12 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 218;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_2__element_1.object == NULL)
    {
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_1.object;
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_13 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
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


        frame_function->f_lineno = 218;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_2__element_2.object == NULL)
    {
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_2.object;
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_13;
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

            goto try_finally_handler_3;
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

        goto try_finally_handler_3;
    }
    tmp_assign_source_14 = tmp_tuple_unpack_2__element_1.object;

    if (var_drv.object == NULL)
    {
        var_drv.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = var_drv.object;
        var_drv.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    tmp_assign_source_15 = tmp_tuple_unpack_2__element_2.object;

    if (var_base.object == NULL)
    {
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
    }
    else
    {
        PyObject *old = var_base.object;
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
        Py_DECREF( old );
    }
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

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2.object );
    tmp_tuple_unpack_2__element_2.object = NULL;

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
    tmp_cond_value_1 = var_drv.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107647 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 219;
        goto try_finally_handler_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
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
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_base.object;

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 220;
        goto try_finally_handler_1;
    }

    tmp_assign_source_16 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto try_finally_handler_1;
    }
    if (var_base.object == NULL)
    {
        var_base.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = var_base.object;
        var_base.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    branch_no_2:;
    tmp_compare_left_2 = var_ext.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 222;
        goto try_finally_handler_1;
    }

    tmp_source_name_7 = par_self.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 222;
        goto try_finally_handler_1;
    }

    tmp_binop_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_src_extensions );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto try_finally_handler_1;
    }
    tmp_binop_right_1 = LIST_COPY( const_list_d3a50a4aa333ad6f2970e7e0fff461f1_list );
    tmp_compare_right_2 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto try_finally_handler_1;
    }
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 222;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_UnknownFileError );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnknownFileError );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80982 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 223;
        goto try_finally_handler_1;
    }

    tmp_binop_left_2 = const_str_digest_cc3f9be4b24741259966d1e00234095c;
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_ext.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 225;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_src_name.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81027 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 225;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 224;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 223;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_3:;
    tmp_cond_value_2 = par_strip_dir.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81081 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto try_finally_handler_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto try_finally_handler_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto try_finally_handler_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_basename );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_5 = var_base.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 227;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto try_finally_handler_1;
    }
    if (var_base.object == NULL)
    {
        var_base.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = var_base.object;
        var_base.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    branch_no_4:;
    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_ext.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto try_finally_handler_5;
    }

    tmp_compexpr_right_1 = const_str_digest_4f959957c55de3c1fd774424f8608871;
    tmp_assign_source_18 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto try_finally_handler_5;
    }
    if (tmp_or_1__value_1.object == NULL)
    {
        tmp_or_1__value_1.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = tmp_or_1__value_1.object;
        tmp_or_1__value_1.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    tmp_cond_value_4 = tmp_or_1__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto try_finally_handler_5;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_cond_value_3 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_cond_value_3 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = var_ext.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto try_finally_handler_6;
    }

    tmp_compexpr_right_2 = const_str_digest_e610227b44cba79c6542a6ac7260a5f9;
    tmp_cond_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto try_finally_handler_6;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
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

        goto try_finally_handler_5;
    }

    goto finally_end_3;
    finally_end_3:;
    condexpr_end_1:;
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
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 228;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_cond_value_3 );
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_10 = var_obj_names.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81136 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto try_finally_handler_4;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_append );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto try_finally_handler_4;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto try_finally_handler_4;
    }

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_path );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 230;
        goto try_finally_handler_4;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_join );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 230;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_7 = par_output_dir.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80864 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto try_finally_handler_4;
    }

    tmp_binop_left_4 = var_base.object;

    if ( tmp_binop_left_4 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto try_finally_handler_4;
    }

    tmp_binop_right_4 = var_ext.object;

    if ( tmp_binop_right_4 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto try_finally_handler_4;
    }

    tmp_binop_left_3 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 231;
        goto try_finally_handler_4;
    }
    tmp_source_name_13 = par_self.object;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto try_finally_handler_4;
    }

    tmp_binop_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_obj_extension );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 231;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_8 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 231;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 231;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 231;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 230;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_14 = var_obj_names.object;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81136 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto try_finally_handler_4;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto try_finally_handler_4;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto try_finally_handler_4;
    }

    tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_path );
    if ( tmp_source_name_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 233;
        goto try_finally_handler_4;
    }
    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_join );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 233;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_10 = par_output_dir.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80864 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto try_finally_handler_4;
    }

    tmp_binop_left_5 = var_base.object;

    if ( tmp_binop_left_5 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto try_finally_handler_4;
    }

    tmp_source_name_17 = par_self.object;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto try_finally_handler_4;
    }

    tmp_binop_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_obj_extension );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 234;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_11 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 234;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 234;
    tmp_call_arg_element_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_9, tmp_call_arg_element_10, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 234;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 233;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_1;
    }

    goto finally_end_5;
    finally_end_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 211;
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
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
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
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto frame_exception_exit_1;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_return_value = var_obj_names.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81136 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
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
    if ((var_obj_names.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_obj_names,
            var_obj_names.object
        );

    }
    if ((var_src_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_src_name,
            var_src_name.object
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
    if ((var_ext.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ext,
            var_ext.object
        );

    }
    if ((var_drv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_drv,
            var_drv.object
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
    if ((par_source_filenames.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_source_filenames,
            par_source_filenames.object
        );

    }
    if ((par_strip_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_strip_dir,
            par_strip_dir.object
        );

    }
    if ((par_output_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_output_dir,
            par_output_dir.object
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
static PyObject *fparse_function_3_object_filenames_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_source_filenames = NULL;
    PyObject *_python_par_strip_dir = NULL;
    PyObject *_python_par_output_dir = NULL;
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
                PyErr_Format( PyExc_TypeError, "object_filenames() keywords must be strings" );
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
            if ( found == false && const_str_plain_source_filenames == key )
            {
                assert( _python_par_source_filenames == NULL );
                _python_par_source_filenames = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_strip_dir == key )
            {
                assert( _python_par_strip_dir == NULL );
                _python_par_strip_dir = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_output_dir == key )
            {
                assert( _python_par_output_dir == NULL );
                _python_par_output_dir = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_source_filenames, key ) == 1 )
            {
                assert( _python_par_source_filenames == NULL );
                _python_par_source_filenames = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_strip_dir, key ) == 1 )
            {
                assert( _python_par_strip_dir == NULL );
                _python_par_strip_dir = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_output_dir, key ) == 1 )
            {
                assert( _python_par_output_dir == NULL );
                _python_par_output_dir = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "object_filenames() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_source_filenames != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_source_filenames = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_source_filenames == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_source_filenames = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_strip_dir != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_strip_dir = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_strip_dir == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_strip_dir = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_output_dir != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_output_dir = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_output_dir == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_output_dir = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_source_filenames == NULL || _python_par_strip_dir == NULL || _python_par_output_dir == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_source_filenames, _python_par_strip_dir, _python_par_output_dir };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_object_filenames_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_self, _python_par_source_filenames, _python_par_strip_dir, _python_par_output_dir );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_source_filenames );
    Py_XDECREF( _python_par_strip_dir );
    Py_XDECREF( _python_par_output_dir );

    return NULL;
}

static PyObject *dparse_function_3_object_filenames_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_3_object_filenames_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_object_filenames_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_find_python_dll_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_i;
    PyObjectLocalVariable var_maj;
    PyObjectLocalVariable var_min;
    PyObjectLocalVariable var_micro;
    PyObjectLocalVariable var_dllname;
    PyObjectLocalVariable var_lib_dirs;
    PyObjectLocalVariable var_d;
    PyObjectLocalVariable var_dll;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_1__element_3;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
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
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5fbd0d1dc4f9f79c424cfce0aad1938a, module_numpy$distutils$mingw32ccompiler );
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
    tmp_assign_source_1 = NULL;
    // Tried code
    tmp_iter_arg_1 = NULL;
    // Tried code
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 3;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto try_finally_handler_3;
    }

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto try_finally_handler_3;
    }
    tmp_iter_arg_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto try_finally_handler_3;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto try_finally_handler_3;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

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
        frame_function->f_lineno = 241;
            goto try_finally_handler_3;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_listcontr_1__iter_value_0.object;

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_int_arg_1 = var_i.object;

    tmp_append_value_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto try_finally_handler_3;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto try_finally_handler_3;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto try_finally_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_iter_arg_1 = tmp_listcontr_1__listcontr_result.object;

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
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

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
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
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
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

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
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_6 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 241;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_6;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_7 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
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


        frame_function->f_lineno = 241;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_7;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_8 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 2 );
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


        frame_function->f_lineno = 241;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_3.object == NULL );
    tmp_tuple_unpack_1__element_3.object = tmp_assign_source_8;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_1;
    }
    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1.object;

    assert( var_maj.object == NULL );
    var_maj.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2.object;

    assert( var_min.object == NULL );
    var_min.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_3.object;

    assert( var_micro.object == NULL );
    var_micro.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

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
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3.object );
    tmp_tuple_unpack_1__element_3.object = NULL;

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
    tmp_binop_left_1 = const_str_digest_6c68537ccf79cbc98f02750ab35d7222;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_maj.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107696 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_min.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107745 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_12 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }
    assert( var_dllname.object == NULL );
    var_dllname.object = tmp_assign_source_12;

    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = const_str_digest_9a29dde14d5c359a1feb7014f5e17181;
    tmp_binop_right_2 = var_dllname.object;

    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 243;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_13 = PyList_New( 0 );
    assert( var_lib_dirs.object == NULL );
    var_lib_dirs.object = tmp_assign_source_13;

    tmp_source_name_2 = var_lib_dirs.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_prefix );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 250;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = var_lib_dirs.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_prefix );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_plain_lib;
    frame_function->f_lineno = 251;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 251;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried block of try/except
    tmp_source_name_8 = var_lib_dirs.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_append );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto try_except_handler_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto try_except_handler_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_path );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 253;
        goto try_except_handler_1;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_join );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 253;
        goto try_except_handler_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto try_except_handler_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_environ );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 253;
        goto try_except_handler_1;
    }
    tmp_subscr_subscript_1 = const_str_plain_SYSTEMROOT;
    tmp_call_arg_element_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 253;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_8 = const_str_plain_system32;
    frame_function->f_lineno = 253;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 253;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 253;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
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
    tmp_compare_right_1 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_no_1:;
    try_except_end_1:;
    tmp_iter_arg_3 = var_lib_dirs.object;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107794 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_14;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_15 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 257;
            goto try_finally_handler_4;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_assign_source_16 = tmp_for_loop_1__iter_value.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
        Py_DECREF( old );
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 258;
        goto try_finally_handler_4;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_path );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto try_finally_handler_4;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_join );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_9 = var_d.object;

    tmp_call_arg_element_10 = var_dllname.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107848 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 258;
        goto try_finally_handler_4;
    }

    frame_function->f_lineno = 258;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto try_finally_handler_4;
    }
    if (var_dll.object == NULL)
    {
        var_dll.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = var_dll.object;
        var_dll.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 259;
        goto try_finally_handler_4;
    }

    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_path );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto try_finally_handler_4;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_exists );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_11 = var_dll.object;

    frame_function->f_lineno = 259;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto try_finally_handler_4;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 259;
        goto try_finally_handler_4;
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
    tmp_return_value = var_dll.object;

    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto try_finally_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    try_finally_handler_start_1:;
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
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_binop_left_3 = const_str_digest_49f7ecc0210f1cad44c9adb19dd06e82;
    tmp_binop_right_3 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_dllname.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107848 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_lib_dirs.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107794 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 1, tmp_tuple_element_2 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 262;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 262;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;

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
    if ((var_i.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_i,
            var_i.object
        );

    }
    if ((var_maj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_maj,
            var_maj.object
        );

    }
    if ((var_min.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_min,
            var_min.object
        );

    }
    if ((var_micro.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_micro,
            var_micro.object
        );

    }
    if ((var_dllname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dllname,
            var_dllname.object
        );

    }
    if ((var_lib_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lib_dirs,
            var_lib_dirs.object
        );

    }
    if ((var_d.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_d,
            var_d.object
        );

    }
    if ((var_dll.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dll,
            var_dll.object
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
static PyObject *fparse_function_2_find_python_dll_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2_find_python_dll_of_module_numpy$distutils$mingw32ccompiler( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_2_find_python_dll_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_2_find_python_dll_of_module_numpy$distutils$mingw32ccompiler( self );
    }
    else
    {
        PyObject *result = fparse_function_2_find_python_dll_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_dump_table_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_dll )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_dll; par_dll.object = _python_par_dll;
    PyObjectLocalVariable var_st;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_14e0edcf02009f68a527825a4dba97eb, module_numpy$distutils$mingw32ccompiler );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_subprocess );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107157 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Popen );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyList_New( 3 );
    tmp_list_element_1 = const_str_digest_e9a24a1cf1d3b56c1e2a52f56484bd8b;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    tmp_list_element_1 = const_str_digest_b3868ba70a8f4cf55464dd9926381db1;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 1, tmp_list_element_1 );
    tmp_list_element_1 = par_dll.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107901 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 2, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_subprocess );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107157 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PIPE );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_stdout;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 265;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    assert( var_st.object == NULL );
    var_st.object = tmp_assign_source_1;

    tmp_source_name_4 = var_st.object;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stdout );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_readlines );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 266;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
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
    if ((var_st.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_st,
            var_st.object
        );

    }
    if ((par_dll.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dll,
            par_dll.object
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
static PyObject *fparse_function_3_dump_table_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_dll = NULL;
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
                PyErr_Format( PyExc_TypeError, "dump_table() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_dll == key )
            {
                assert( _python_par_dll == NULL );
                _python_par_dll = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dll, key ) == 1 )
            {
                assert( _python_par_dll == NULL );
                _python_par_dll = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "dump_table() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_dll != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_dll = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_dll == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_dll = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_dll == NULL ))
    {
        PyObject *values[] = { _python_par_dll };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_dump_table_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_dll );

error_exit:;

    Py_XDECREF( _python_par_dll );

    return NULL;
}

static PyObject *dparse_function_3_dump_table_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_dump_table_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_dump_table_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_generate_def_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_dll, PyObject *_python_par_dfile )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_dll; par_dll.object = _python_par_dll;
    PyObjectLocalVariable par_dfile; par_dfile.object = _python_par_dfile;
    PyObjectLocalVariable var_dump;
    PyObjectLocalVariable var_i;
    PyObjectLocalVariable var_syms;
    PyObjectLocalVariable var_j;
    PyObjectLocalVariable var_m;
    PyObjectLocalVariable var_d;
    PyObjectLocalVariable var_s;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_1__break_indicator;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
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
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next1_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_range2_high_1;
    PyObject *tmp_range2_low_1;
    PyObject *tmp_range_arg_1;
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
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_477b0c1ac67276d11f343e4e6245b5ce, module_numpy$distutils$mingw32ccompiler );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_dump_table );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dump_table );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107950 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_dll.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107901 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 273;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    assert( var_dump.object == NULL );
    var_dump.object = tmp_assign_source_1;

    // Tried code
    tmp_assign_source_2 = Py_False;
    assert( tmp_for_loop_1__break_indicator.object == NULL );
    tmp_for_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_len_arg_1 = var_dump.object;

    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto try_finally_handler_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto try_finally_handler_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto try_finally_handler_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_3;

    // Tried code
    loop_start_1:;
    // Tried block of try/except
    tmp_next1_arg_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next1_arg_1 );
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


        frame_function->f_lineno = 274;
        goto try_except_handler_1;
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
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_compare_left_1 = exception_type;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto try_finally_handler_2;
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
    tmp_assign_source_5 = Py_True;
    if (tmp_for_loop_1__break_indicator.object == NULL)
    {
        tmp_for_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = tmp_for_loop_1__break_indicator.object;
        tmp_for_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    goto try_finally_handler_2;
    branch_end_1:;
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );

    try_except_end_1:;
    tmp_assign_source_6 = tmp_for_loop_1__iter_value.object;

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__START );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__START );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107989 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto try_finally_handler_2;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_match );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto try_finally_handler_2;
    }
    tmp_subscr_target_1 = var_dump.object;

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108024 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_1 = var_i.object;

    tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 275;
        goto try_finally_handler_2;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_decode );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 275;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 275;
    tmp_call_arg_element_2 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 275;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 275;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto try_finally_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 275;
        goto try_finally_handler_2;
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
    goto loop_end_1;
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

        goto try_finally_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_compare_left_2 = tmp_for_loop_1__break_indicator.object;

    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_1 = const_str_digest_d8274ff72bb4dcbdd6a172a5a61d2778;
    frame_function->f_lineno = 278;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 278;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_3:;
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
    tmp_result = tmp_for_loop_1__break_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_for_loop_1__break_indicator.object );
        tmp_for_loop_1__break_indicator.object = NULL;
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
    tmp_assign_source_7 = PyList_New( 0 );
    assert( var_syms.object == NULL );
    var_syms.object = tmp_assign_source_7;

    tmp_binop_left_1 = var_i.object;

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = const_int_pos_1;
    tmp_range2_low_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_range2_low_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = var_dump.object;

    if ( tmp_len_arg_2 == NULL )
    {
        Py_DECREF( tmp_range2_low_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108024 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_range2_high_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_range2_high_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_range2_low_1 );

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_2 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
    Py_DECREF( tmp_range2_low_1 );
    Py_DECREF( tmp_range2_high_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_8;

    // Tried code
    loop_start_2:;
    tmp_next_source_1 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_9 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 281;
            goto try_finally_handler_3;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    tmp_assign_source_10 = tmp_for_loop_2__iter_value.object;

    if (var_j.object == NULL)
    {
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_j.object;
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__TABLE );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__TABLE );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108074 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 282;
        goto try_finally_handler_3;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_match );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 282;
        goto try_finally_handler_3;
    }
    tmp_subscr_target_2 = var_dump.object;

    if ( tmp_subscr_target_2 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108024 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 282;
        goto try_finally_handler_3;
    }

    tmp_subscr_subscript_2 = var_j.object;

    tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 282;
        goto try_finally_handler_3;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_decode );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 282;
        goto try_finally_handler_3;
    }
    frame_function->f_lineno = 282;
    tmp_call_arg_element_3 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 282;
        goto try_finally_handler_3;
    }
    frame_function->f_lineno = 282;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 282;
        goto try_finally_handler_3;
    }
    if (var_m.object == NULL)
    {
        var_m.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = var_m.object;
        var_m.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_cond_value_2 = var_m.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto try_finally_handler_3;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_5 = var_syms.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108109 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 284;
        goto try_finally_handler_3;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_4 = PyTuple_New( 2 );
    tmp_source_name_7 = var_m.object;

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_group );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 284;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_5 = const_int_pos_1;
    frame_function->f_lineno = 284;
    tmp_source_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 284;
        goto try_finally_handler_3;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_strip );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 284;
        goto try_finally_handler_3;
    }
    frame_function->f_lineno = 284;
    tmp_int_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 284;
        goto try_finally_handler_3;
    }
    tmp_tuple_element_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 284;
        goto try_finally_handler_3;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 0, tmp_tuple_element_1 );
    tmp_source_name_8 = var_m.object;

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_group );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 284;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_6 = const_int_pos_2;
    frame_function->f_lineno = 284;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 284;
        goto try_finally_handler_3;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 284;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    goto loop_end_2;
    branch_end_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
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
    tmp_len_arg_3 = var_syms.object;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108109 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_warn );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = const_str_digest_6310fa5900d5dc687b4baf6bc3c78eae;
    tmp_binop_right_2 = par_dll.object;

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107901 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 289;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    tmp_open_filename_1 = par_dfile.object;

    if ( tmp_open_filename_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108159 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_open_mode_1 = const_str_plain_w;
    tmp_assign_source_12 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    assert( var_d.object == NULL );
    var_d.object = tmp_assign_source_12;

    tmp_source_name_10 = var_d.object;

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_write );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_3 = const_str_digest_9bcc044ab5a81ebfdd2eaa9945652937;
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_path );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_basename );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = par_dll.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107901 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 292;
    tmp_binop_right_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 292;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_13 = var_d.object;

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_write );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = const_str_digest_65a9afd95259db5dafe23bd57365f11a;
    frame_function->f_lineno = 293;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_14 = var_d.object;

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_write );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 294;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = const_str_digest_add02f60bad707d36b7e3068641fdf6b;
    frame_function->f_lineno = 294;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 294;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_15 = var_d.object;

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_write );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = const_str_digest_c3bb0b5b30f3c5d7b2b95254b3af8905;
    frame_function->f_lineno = 295;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_3 = var_syms.object;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108109 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator.object == NULL );
    tmp_for_loop_3__for_iterator.object = tmp_assign_source_13;

    // Tried code
    loop_start_3:;
    tmp_next_source_2 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_14 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 296;
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
    tmp_assign_source_15 = tmp_for_loop_3__iter_value.object;

    if (var_s.object == NULL)
    {
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
    }
    else
    {
        PyObject *old = var_s.object;
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
        Py_DECREF( old );
    }
    tmp_source_name_16 = var_d.object;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6034 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 298;
        goto try_finally_handler_4;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_write );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto try_finally_handler_4;
    }
    tmp_binop_left_4 = const_str_digest_906e5d559e07c4fefab02226a2790389;
    tmp_subscr_target_3 = var_s.object;

    tmp_subscr_subscript_3 = const_int_pos_1;
    tmp_binop_right_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );

        frame_function->f_lineno = 298;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_13 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );

        frame_function->f_lineno = 298;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 298;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_16 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 296;
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
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

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
    tmp_source_name_17 = var_d.object;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6034 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_close );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 299;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_17 );
    Py_DECREF( tmp_called_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
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
    if ((var_dump.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dump,
            var_dump.object
        );

    }
    if ((var_i.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_i,
            var_i.object
        );

    }
    if ((var_syms.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_syms,
            var_syms.object
        );

    }
    if ((var_j.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_j,
            var_j.object
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
    if ((par_dll.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dll,
            par_dll.object
        );

    }
    if ((par_dfile.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dfile,
            par_dfile.object
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
static PyObject *fparse_function_4_generate_def_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_dll = NULL;
    PyObject *_python_par_dfile = NULL;
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
                PyErr_Format( PyExc_TypeError, "generate_def() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_dll == key )
            {
                assert( _python_par_dll == NULL );
                _python_par_dll = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_dfile == key )
            {
                assert( _python_par_dfile == NULL );
                _python_par_dfile = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dll, key ) == 1 )
            {
                assert( _python_par_dll == NULL );
                _python_par_dll = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dfile, key ) == 1 )
            {
                assert( _python_par_dfile == NULL );
                _python_par_dfile = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "generate_def() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_dll != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_dll = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_dll == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_dll = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_dfile != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_dfile = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_dfile == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_dfile = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_dll == NULL || _python_par_dfile == NULL ))
    {
        PyObject *values[] = { _python_par_dll, _python_par_dfile };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_generate_def_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_dll, _python_par_dfile );

error_exit:;

    Py_XDECREF( _python_par_dll );
    Py_XDECREF( _python_par_dfile );

    return NULL;
}

static PyObject *dparse_function_4_generate_def_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_4_generate_def_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_generate_def_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_dll_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_dll_name; par_dll_name.object = _python_par_dll_name;
    PyObjectSharedLocalVariable var_arch;
    PyObjectLocalVariable var__find_dll_in_winsxs;
    PyObjectLocalVariable var__find_dll_in_path;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_689a2db0c2c16a7c2c8b4ea4d9d1fe14, module_numpy$distutils$mingw32ccompiler );
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
    tmp_subscr_target_1 = PyDict_Copy( const_dict_74ba9e9c2ef29ec3f0144ba8bbe76bc2 );
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_get_build_architecture );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_build_architecture );
    }

    if ( tmp_called_1 == NULL )
    {
        Py_DECREF( tmp_subscr_target_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107384 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 304;
    tmp_subscr_subscript_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_subscr_subscript_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_target_1 );

        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    Py_DECREF( tmp_subscr_subscript_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    if (var_arch.storage->object == NULL)
    {
        var_arch.storage->object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = var_arch.storage->object;
        var_arch.storage->object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_assign_source_2 = MAKE_FUNCTION_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( var_arch );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    assert( var__find_dll_in_winsxs.object == NULL );
    var__find_dll_in_winsxs.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_2__find_dll_in_path_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 316;
        goto frame_exception_exit_1;
    }
    assert( var__find_dll_in_path.object == NULL );
    var__find_dll_in_path.object = tmp_assign_source_3;

    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_called_2 = var__find_dll_in_winsxs.object;

    tmp_call_arg_element_1 = par_dll_name.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108210 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 324;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto try_finally_handler_2;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_4;

    tmp_cond_value_1 = tmp_or_1__value_1.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
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
    tmp_return_value = tmp_or_1__value_1.object;

    Py_INCREF( tmp_return_value );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_3 = var__find_dll_in_path.object;

    tmp_call_arg_element_2 = par_dll_name.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108210 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto try_finally_handler_3;
    }

    frame_function->f_lineno = 324;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
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
    goto try_finally_handler_start_1;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_3;
    finally_end_3:;

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
    if ((var_arch.storage != NULL && var_arch.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arch,
            var_arch.storage->object
        );

    }
    if ((var__find_dll_in_winsxs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__find_dll_in_winsxs,
            var__find_dll_in_winsxs.object
        );

    }
    if ((var__find_dll_in_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__find_dll_in_path,
            var__find_dll_in_path.object
        );

    }
    if ((par_dll_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dll_name,
            par_dll_name.object
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
static PyObject *fparse_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_dll_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "find_dll() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_dll_name == key )
            {
                assert( _python_par_dll_name == NULL );
                _python_par_dll_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dll_name, key ) == 1 )
            {
                assert( _python_par_dll_name == NULL );
                _python_par_dll_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "find_dll() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_dll_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_dll_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_dll_name == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_dll_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_dll_name == NULL ))
    {
        PyObject *values[] = { _python_par_dll_name };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_dll_name );

error_exit:;

    Py_XDECREF( _python_par_dll_name );

    return NULL;
}

static PyObject *dparse_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_dll_name )
{
    // The context of the function.
    struct _context_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler_t *_python_context = (struct _context_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalVariable par_dll_name; par_dll_name.object = _python_par_dll_name;
    PyObjectLocalVariable var_winsxs_path;
    PyObjectLocalVariable var_root;
    PyObjectLocalVariable var_dirs;
    PyObjectLocalVariable var_files;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_1__element_3;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_405db3a23005304ade253f5ed421f64e, module_numpy$distutils$mingw32ccompiler );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_environ );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_str_plain_WINDIR;
    tmp_call_arg_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_winsxs;
    frame_function->f_lineno = 308;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    assert( var_winsxs_path.object == NULL );
    var_winsxs_path.object = tmp_assign_source_1;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_exists );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = var_winsxs_path.object;

    frame_function->f_lineno = 309;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 309;
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
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_walk );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = var_winsxs_path.object;

    frame_function->f_lineno = 311;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
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
        frame_function->f_lineno = 311;
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


        frame_function->f_lineno = 311;
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


        frame_function->f_lineno = 311;
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


        frame_function->f_lineno = 311;
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
    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_7 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 2 );
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


        frame_function->f_lineno = 311;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__element_3.object == NULL)
    {
        tmp_tuple_unpack_1__element_3.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_3.object;
        tmp_tuple_unpack_1__element_3.object = tmp_assign_source_7;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_2;
    }
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1.object;

    if (var_root.object == NULL)
    {
        var_root.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_root.object;
        var_root.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2.object;

    if (var_dirs.object == NULL)
    {
        var_dirs.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_dirs.object;
        var_dirs.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_assign_source_10 = tmp_tuple_unpack_1__element_3.object;

    if (var_files.object == NULL)
    {
        var_files.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_files.object;
        var_files.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3.object );
    tmp_tuple_unpack_1__element_3.object = NULL;

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
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_compexpr_left_1 = par_dll_name.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108210 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto try_finally_handler_4;
    }

    tmp_compexpr_right_1 = var_files.object;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48966 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto try_finally_handler_4;
    }

    tmp_assign_source_11 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_4;
    }
    if (tmp_and_1__value_1.object == NULL)
    {
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = tmp_and_1__value_1.object;
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    tmp_cond_value_3 = tmp_and_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_4;
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
    tmp_compexpr_left_2 = _python_context->closure_arch.storage->object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108264 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto try_finally_handler_5;
    }

    tmp_compexpr_right_2 = var_root.object;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30256 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto try_finally_handler_5;
    }

    tmp_cond_value_2 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_5;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
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

        goto try_finally_handler_4;
    }

    goto finally_end_2;
    finally_end_2:;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_2 = tmp_and_1__value_1.object;

    condexpr_end_1:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_3;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_3;
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
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto try_finally_handler_3;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 313;
        goto try_finally_handler_3;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 313;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_5 = var_root.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30256 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_6 = par_dll_name.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108210 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto try_finally_handler_3;
    }

    frame_function->f_lineno = 313;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 313;
        goto try_finally_handler_3;
    }
    goto try_finally_handler_start_2;
    branch_no_2:;
    try_finally_handler_start_2:;
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

        goto try_finally_handler_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto try_finally_handler_start_1;
    }

    goto finally_end_4;
    finally_end_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
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
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_5;
    finally_end_5:;

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
    if ((var_winsxs_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_winsxs_path,
            var_winsxs_path.object
        );

    }
    if ((var_root.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_root,
            var_root.object
        );

    }
    if ((var_dirs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dirs,
            var_dirs.object
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
    if ((_python_context->closure_arch.storage != NULL && _python_context->closure_arch.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arch,
            _python_context->closure_arch.storage->object
        );

    }
    if ((par_dll_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dll_name,
            par_dll_name.object
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
static PyObject *fparse_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_dll_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "_find_dll_in_winsxs() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_dll_name == key )
            {
                assert( _python_par_dll_name == NULL );
                _python_par_dll_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dll_name, key ) == 1 )
            {
                assert( _python_par_dll_name == NULL );
                _python_par_dll_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_find_dll_in_winsxs() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_dll_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_dll_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_dll_name == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_dll_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_dll_name == NULL ))
    {
        PyObject *values[] = { _python_par_dll_name };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_dll_name );

error_exit:;

    Py_XDECREF( _python_par_dll_name );

    return NULL;
}

static PyObject *dparse_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__find_dll_in_path_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_dll_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_dll_name; par_dll_name.object = _python_par_dll_name;
    PyObjectLocalVariable var_path;
    PyObjectLocalVariable var_filepath;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_list_element_1;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6f89700e4a43b57f99267031aabe2f9e, module_numpy$distutils$mingw32ccompiler );
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
    tmp_binop_left_1 = PyList_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prefix );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_binop_left_1, 0, tmp_list_element_1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_environ );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_str_plain_PATH;
    tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_split );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_chr_59;
    frame_function->f_lineno = 319;
    tmp_binop_right_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 319;
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
        frame_function->f_lineno = 319;
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

    if (var_path.object == NULL)
    {
        var_path.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = var_path.object;
        var_path.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 320;
        goto try_finally_handler_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 320;
        goto try_finally_handler_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 320;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = var_path.object;

    tmp_call_arg_element_3 = par_dll_name.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108210 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 320;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 320;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 320;
        goto try_finally_handler_1;
    }
    if (var_filepath.object == NULL)
    {
        var_filepath.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = var_filepath.object;
        var_filepath.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_path );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_exists );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_4 = var_filepath.object;

    frame_function->f_lineno = 321;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 321;
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
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 322;
        goto try_finally_handler_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 322;
        goto try_finally_handler_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 322;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_5 = var_filepath.object;

    frame_function->f_lineno = 322;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 322;
        goto try_finally_handler_1;
    }
    goto try_finally_handler_start_1;
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 319;
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
    if ((var_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_path,
            var_path.object
        );

    }
    if ((var_filepath.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_filepath,
            var_filepath.object
        );

    }
    if ((par_dll_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dll_name,
            par_dll_name.object
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
static PyObject *fparse_function_2__find_dll_in_path_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_dll_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "_find_dll_in_path() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_dll_name == key )
            {
                assert( _python_par_dll_name == NULL );
                _python_par_dll_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dll_name, key ) == 1 )
            {
                assert( _python_par_dll_name == NULL );
                _python_par_dll_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_find_dll_in_path() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_dll_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_dll_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_dll_name == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_dll_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_dll_name == NULL ))
    {
        PyObject *values[] = { _python_par_dll_name };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2__find_dll_in_path_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_dll_name );

error_exit:;

    Py_XDECREF( _python_par_dll_name );

    return NULL;
}

static PyObject *dparse_function_2__find_dll_in_path_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2__find_dll_in_path_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2__find_dll_in_path_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_build_msvcr_library_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_debug )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_debug; par_debug.object = _python_par_debug;
    PyObjectLocalVariable var_msvcr_name;
    PyObjectLocalVariable var_out_name;
    PyObjectLocalVariable var_out_file;
    PyObjectLocalVariable var_msvcr_dll_name;
    PyObjectLocalVariable var_dll_file;
    PyObjectLocalVariable var_def_name;
    PyObjectLocalVariable var_def_file;
    PyObjectLocalVariable var_cmd;
    PyObjectLocalVariable var_retcode;
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
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
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
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    bool tmp_isnot_1;
    PyObject *tmp_list_element_1;
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
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unary_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e715086dc0432e0705b0c630223278e3, module_numpy$distutils$mingw32ccompiler );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 327;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 327;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_nt;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 327;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_msvc_runtime_library );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_msvc_runtime_library );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107335 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 330;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }
    assert( var_msvcr_name.object == NULL );
    var_msvcr_name.object = tmp_assign_source_1;

    tmp_source_name_2 = var_msvcr_name.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_lstrip );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 333;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_msvcr;
    frame_function->f_lineno = 333;
    tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 333;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 333;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_80;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 333;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 334;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_debug );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 334;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_digest_9058172e8d2f36ff912435be00c9d2e5;
    frame_function->f_lineno = 334;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 334;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_cond_value_1 = par_debug.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81520 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 337;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 337;
        goto frame_exception_exit_1;
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
    tmp_assign_source_2 = var_msvcr_name.object;

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_1 = const_str_plain_d;
    tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 338;
        goto try_finally_handler_1;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_3;

    tmp_compare_left_3 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_3 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_4 = tmp_inplace_assign_1__inplace_end.object;

    assert( var_msvcr_name.object != NULL );
    {
        PyObject *old = var_msvcr_name.object;
        var_msvcr_name.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }

    branch_no_4:;
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
    branch_no_3:;
    tmp_binop_left_2 = const_str_digest_281372bea41c1cc2820284b52b815f98;
    tmp_binop_right_2 = var_msvcr_name.object;

    if ( tmp_binop_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108314 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }
    assert( var_out_name.object == NULL );
    var_out_name.object = tmp_assign_source_5;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_prefix );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_plain_libs;
    tmp_call_arg_element_5 = var_out_name.object;

    frame_function->f_lineno = 342;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }
    assert( var_out_file.object == NULL );
    var_out_file.object = tmp_assign_source_6;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = var_out_file.object;

    frame_function->f_lineno = 343;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_debug );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_3 = const_str_digest_158a6552ad2f3a398b60cbf5b0092244;
    tmp_binop_right_3 = var_out_file.object;

    tmp_call_arg_element_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 344;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_5:;
    tmp_binop_left_4 = var_msvcr_name.object;

    if ( tmp_binop_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108314 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 348;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_4 = const_str_digest_e96815b7ef5e09588fce208f53d8fe02;
    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 348;
        goto frame_exception_exit_1;
    }
    assert( var_msvcr_dll_name.object == NULL );
    var_msvcr_dll_name.object = tmp_assign_source_7;

    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_find_dll );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_find_dll );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108370 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = var_msvcr_dll_name.object;

    frame_function->f_lineno = 349;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_8 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }
    assert( var_dll_file.object == NULL );
    var_dll_file.object = tmp_assign_source_8;

    tmp_cond_value_3 = var_dll_file.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 350;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_warn );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_5 = const_str_digest_93af3fc4c87f7200c4a5ab3f346bed09;
    tmp_binop_right_5 = var_msvcr_dll_name.object;

    tmp_call_arg_element_9 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 351;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_6:;
    tmp_binop_left_6 = const_str_digest_f5e5d5090e117234ebffffe8b64ce186;
    tmp_binop_right_6 = var_msvcr_name.object;

    if ( tmp_binop_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108314 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_9 = BINARY_OPERATION_REMAINDER( tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }
    assert( var_def_name.object == NULL );
    var_def_name.object = tmp_assign_source_9;

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_path );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_join );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_prefix );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = const_str_plain_libs;
    tmp_call_arg_element_12 = var_def_name.object;

    frame_function->f_lineno = 355;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_9, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    assert( var_def_file.object == NULL );
    var_def_file.object = tmp_assign_source_10;

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 357;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_info );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_7 = const_str_digest_808c021a44d9be333fcd5e6c5d369aca;
    tmp_binop_right_7 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_out_file.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_7, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_dll_file.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_7, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_13 = BINARY_OPERATION_REMAINDER( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 357;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 357;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_generate_def );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_generate_def );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108407 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = var_dll_file.object;

    tmp_call_arg_element_15 = var_def_file.object;

    frame_function->f_lineno = 361;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_11, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_11 = PyList_New( 5 );
    tmp_list_element_1 = const_str_plain_dlltool;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_11, 0, tmp_list_element_1 );
    tmp_list_element_1 = const_str_digest_9b017020b9d48d433ec90c548e6b5c70;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_11, 1, tmp_list_element_1 );
    tmp_list_element_1 = var_def_file.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_11, 2, tmp_list_element_1 );
    tmp_list_element_1 = const_str_digest_269889131ee4793a82191b78a2eb60e3;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_11, 3, tmp_list_element_1 );
    tmp_list_element_1 = var_out_file.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_11, 4, tmp_list_element_1 );
    assert( var_cmd.object == NULL );
    var_cmd.object = tmp_assign_source_11;

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_subprocess );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107157 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 365;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_call );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 365;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = var_cmd.object;

    frame_function->f_lineno = 365;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 365;
        goto frame_exception_exit_1;
    }
    assert( var_retcode.object == NULL );
    var_retcode.object = tmp_assign_source_12;

    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_remove );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = var_def_file.object;

    frame_function->f_lineno = 368;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_unary_arg_1 = var_retcode.object;

    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
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
    if ((var_msvcr_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msvcr_name,
            var_msvcr_name.object
        );

    }
    if ((var_out_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_out_name,
            var_out_name.object
        );

    }
    if ((var_out_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_out_file,
            var_out_file.object
        );

    }
    if ((var_msvcr_dll_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msvcr_dll_name,
            var_msvcr_dll_name.object
        );

    }
    if ((var_dll_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dll_file,
            var_dll_file.object
        );

    }
    if ((var_def_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_def_name,
            var_def_name.object
        );

    }
    if ((var_def_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_def_file,
            var_def_file.object
        );

    }
    if ((var_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmd,
            var_cmd.object
        );

    }
    if ((var_retcode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_retcode,
            var_retcode.object
        );

    }
    if ((par_debug.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_debug,
            par_debug.object
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
static PyObject *fparse_function_6_build_msvcr_library_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_debug = NULL;
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
                PyErr_Format( PyExc_TypeError, "build_msvcr_library() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_debug == key )
            {
                assert( _python_par_debug == NULL );
                _python_par_debug = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_debug, key ) == 1 )
            {
                assert( _python_par_debug == NULL );
                _python_par_debug = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "build_msvcr_library() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_debug != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_debug = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_debug == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_debug = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_debug == NULL ))
    {
        PyObject *values[] = { _python_par_debug };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6_build_msvcr_library_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_debug );

error_exit:;

    Py_XDECREF( _python_par_debug );

    return NULL;
}

static PyObject *dparse_function_6_build_msvcr_library_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_6_build_msvcr_library_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_build_msvcr_library_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_build_import_library_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_arch;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bf6b30b50b3973b4151a2274c88b9f53, module_numpy$distutils$mingw32ccompiler );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_nt;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 373;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_get_build_architecture );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_build_architecture );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107384 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 376;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto frame_exception_exit_1;
    }
    assert( var_arch.object == NULL );
    var_arch.object = tmp_assign_source_1;

    tmp_compare_left_2 = var_arch.object;

    tmp_compare_right_2 = const_str_plain_AMD64;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__build_import_library_amd64 );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__build_import_library_amd64 );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108448 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 378;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 378;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 378;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_3 = var_arch.object;

    tmp_compare_right_3 = const_str_plain_Intel;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 379;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__build_import_library_x86 );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__build_import_library_x86 );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108504 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 380;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_binop_left_1 = const_str_digest_b0c97c398792d4fdbd4f472aae52702a;
    tmp_binop_right_1 = var_arch.object;

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 382;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 382;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_3:;
    branch_end_2:;

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
    if ((var_arch.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arch,
            var_arch.object
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
static PyObject *fparse_function_7_build_import_library_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_7_build_import_library_of_module_numpy$distutils$mingw32ccompiler( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_7_build_import_library_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_7_build_import_library_of_module_numpy$distutils$mingw32ccompiler( self );
    }
    else
    {
        PyObject *result = fparse_function_7_build_import_library_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8__build_import_library_amd64_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_dll_file;
    PyObjectLocalVariable var_out_name;
    PyObjectLocalVariable var_out_file;
    PyObjectLocalVariable var_def_name;
    PyObjectLocalVariable var_def_file;
    PyObjectLocalVariable var_cmd;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
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
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_arg_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_de733a21a7c0ba86fbeb7f33a3c4b5fc, module_numpy$distutils$mingw32ccompiler );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_find_python_dll );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_find_python_dll );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108558 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 385;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 385;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 385;
        goto frame_exception_exit_1;
    }
    assert( var_dll_file.object == NULL );
    var_dll_file.object = tmp_assign_source_1;

    tmp_binop_left_1 = const_str_digest_3177804803f850d65fa509e5e716f1ed;
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 2;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    tmp_tuple_arg_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_tuple_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    assert( var_out_name.object == NULL );
    var_out_name.object = tmp_assign_source_2;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_prefix );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_libs;
    tmp_call_arg_element_3 = var_out_name.object;

    frame_function->f_lineno = 388;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }
    assert( var_out_file.object == NULL );
    var_out_file.object = tmp_assign_source_3;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = var_out_file.object;

    frame_function->f_lineno = 389;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 389;
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
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_debug );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = const_str_digest_a534acadc22685ee09a66514419aed57;
    tmp_binop_right_2 = var_out_file.object;

    tmp_call_arg_element_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 390;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_binop_left_3 = const_str_digest_320a364dd0faec89b92bb3cd73aa0efc;
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = 2;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_version_info );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_tuple_arg_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_tuple_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_3 = PySequence_Tuple( tmp_tuple_arg_2 );
    Py_DECREF( tmp_tuple_arg_2 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    assert( var_def_name.object == NULL );
    var_def_name.object = tmp_assign_source_4;

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_path );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_join );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_prefix );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_libs;
    tmp_call_arg_element_8 = var_def_name.object;

    frame_function->f_lineno = 394;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }
    assert( var_def_file.object == NULL );
    var_def_file.object = tmp_assign_source_5;

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_info );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_4 = const_str_digest_2d4a2c7dd5d6b15d7ec123b8b8f15b6e;
    tmp_binop_right_4 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_out_file.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_dll_file.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_9 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 396;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_generate_def );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_generate_def );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108407 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = var_dll_file.object;

    tmp_call_arg_element_11 = var_def_file.object;

    frame_function->f_lineno = 399;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_10, tmp_call_arg_element_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_6 = PyList_New( 5 );
    tmp_list_element_1 = const_str_plain_dlltool;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_6, 0, tmp_list_element_1 );
    tmp_list_element_1 = const_str_digest_9b017020b9d48d433ec90c548e6b5c70;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_6, 1, tmp_list_element_1 );
    tmp_list_element_1 = var_def_file.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_6, 2, tmp_list_element_1 );
    tmp_list_element_1 = const_str_digest_269889131ee4793a82191b78a2eb60e3;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_6, 3, tmp_list_element_1 );
    tmp_list_element_1 = var_out_file.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_6, 4, tmp_list_element_1 );
    assert( var_cmd.object == NULL );
    var_cmd.object = tmp_assign_source_6;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_subprocess );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107157 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Popen );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = var_cmd.object;

    frame_function->f_lineno = 402;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 402;
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
    if ((var_dll_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dll_file,
            var_dll_file.object
        );

    }
    if ((var_out_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_out_name,
            var_out_name.object
        );

    }
    if ((var_out_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_out_file,
            var_out_file.object
        );

    }
    if ((var_def_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_def_name,
            var_def_name.object
        );

    }
    if ((var_def_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_def_file,
            var_def_file.object
        );

    }
    if ((var_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmd,
            var_cmd.object
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
static PyObject *fparse_function_8__build_import_library_amd64_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_8__build_import_library_amd64_of_module_numpy$distutils$mingw32ccompiler( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_8__build_import_library_amd64_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_8__build_import_library_amd64_of_module_numpy$distutils$mingw32ccompiler( self );
    }
    else
    {
        PyObject *result = fparse_function_8__build_import_library_amd64_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9__build_import_library_x86_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_lib_name;
    PyObjectLocalVariable var_lib_file;
    PyObjectLocalVariable var_out_name;
    PyObjectLocalVariable var_out_file;
    PyObjectLocalVariable var_lib2def;
    PyObjectLocalVariable var_def_name;
    PyObjectLocalVariable var_def_file;
    PyObjectLocalVariable var_nm_cmd;
    PyObjectLocalVariable var_nm_output;
    PyObjectLocalVariable var_dlist;
    PyObjectLocalVariable var_flist;
    PyObjectLocalVariable var_dll_name;
    PyObjectLocalVariable var_args;
    PyObjectLocalVariable var_cmd;
    PyObjectLocalVariable var_status;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    Py_ssize_t tmp_slice_index_upper_4;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_4;
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
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_arg_2;
    PyObject *tmp_tuple_arg_3;
    PyObject *tmp_tuple_arg_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8b7e222275c0940b0dadd047e0e3abc7, module_numpy$distutils$mingw32ccompiler );
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
    tmp_binop_left_1 = const_str_digest_cd5c83401f50232501a1a11feba9f67a;
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 2;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    tmp_tuple_arg_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_tuple_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    assert( var_lib_name.object == NULL );
    var_lib_name.object = tmp_assign_source_1;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_prefix );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_libs;
    tmp_call_arg_element_3 = var_lib_name.object;

    frame_function->f_lineno = 408;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }
    assert( var_lib_file.object == NULL );
    var_lib_file.object = tmp_assign_source_2;

    tmp_binop_left_2 = const_str_digest_3177804803f850d65fa509e5e716f1ed;
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = 2;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 409;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_version_info );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
        goto frame_exception_exit_1;
    }
    tmp_tuple_arg_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_tuple_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_2 = PySequence_Tuple( tmp_tuple_arg_2 );
    Py_DECREF( tmp_tuple_arg_2 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
        goto frame_exception_exit_1;
    }
    assert( var_out_name.object == NULL );
    var_out_name.object = tmp_assign_source_3;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_path );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_prefix );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_plain_libs;
    tmp_call_arg_element_6 = var_out_name.object;

    frame_function->f_lineno = 410;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }
    assert( var_out_file.object == NULL );
    var_out_file.object = tmp_assign_source_4;

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 411;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_path );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 411;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 411;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = var_lib_file.object;

    frame_function->f_lineno = 411;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 411;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 411;
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
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 412;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_warn );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 412;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_3 = const_str_digest_d5fc5794eb56bf8bc1400f50cc8c3f7b;
    tmp_binop_right_3 = var_lib_file.object;

    tmp_call_arg_element_8 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 412;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 412;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 412;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 414;
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_path );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 414;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 414;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = var_out_file.object;

    frame_function->f_lineno = 414;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 414;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 414;
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
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_debug );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_4 = const_str_digest_a534acadc22685ee09a66514419aed57;
    tmp_binop_right_4 = var_out_file.object;

    tmp_call_arg_element_10 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 415;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_info );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_5 = const_str_digest_94f8f64b5683e26a213345d9a293c082;
    tmp_binop_right_5 = var_out_file.object;

    tmp_call_arg_element_11 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 417;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_lib_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_lib_name,
            var_lib_name.object
        );

    }
    if ((var_lib_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_lib_file,
            var_lib_file.object
        );

    }
    if ((var_out_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_out_name,
            var_out_name.object
        );

    }
    if ((var_out_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_out_file,
            var_out_file.object
        );

    }
    if ((var_lib2def.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_lib2def,
            var_lib2def.object
        );

    }
    if ((var_def_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_def_name,
            var_def_name.object
        );

    }
    if ((var_def_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_def_file,
            var_def_file.object
        );

    }
    if ((var_nm_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_nm_cmd,
            var_nm_cmd.object
        );

    }
    if ((var_nm_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_nm_output,
            var_nm_output.object
        );

    }
    if ((var_dlist.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dlist,
            var_dlist.object
        );

    }
    if ((var_flist.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_flist,
            var_flist.object
        );

    }
    if ((var_dll_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dll_name,
            var_dll_name.object
        );

    }
    if ((var_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_args,
            var_args.object
        );

    }
    if ((var_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_cmd,
            var_cmd.object
        );

    }
    if ((var_status.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_status,
            var_status.object
        );

    }
    frame_function->f_lineno = 419;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_c0fff8163aabf90b654f2f3ba03fe760, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_lib2def_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_lib2def );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }
    assert( var_lib2def.object == NULL );
    var_lib2def.object = tmp_assign_source_5;

    tmp_binop_left_6 = const_str_digest_320a364dd0faec89b92bb3cd73aa0efc;
    tmp_sliceslicedel_index_lower_3 = 0;
    tmp_slice_index_upper_3 = 2;
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_version_info );
    if ( tmp_slice_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }
    tmp_tuple_arg_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    Py_DECREF( tmp_slice_source_3 );
    if ( tmp_tuple_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_6 = PySequence_Tuple( tmp_tuple_arg_3 );
    Py_DECREF( tmp_tuple_arg_3 );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = BINARY_OPERATION_REMAINDER( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }
    assert( var_def_name.object == NULL );
    var_def_name.object = tmp_assign_source_6;

    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }

    tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_path );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_join );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_prefix );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = const_str_plain_libs;
    tmp_call_arg_element_14 = var_def_name.object;

    frame_function->f_lineno = 422;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_8, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    assert( var_def_file.object == NULL );
    var_def_file.object = tmp_assign_source_7;

    tmp_binop_left_7 = const_str_digest_29bf226e186bf57b52fac1b0ba1f88ff;
    tmp_binop_right_7 = PyTuple_New( 2 );
    tmp_source_name_20 = var_lib2def.object;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_DEFAULT_NM );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_7 );

        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_7, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_lib_file.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_7, 1, tmp_tuple_element_1 );
    tmp_assign_source_8 = BINARY_OPERATION_REMAINDER( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }
    assert( var_nm_cmd.object == NULL );
    var_nm_cmd.object = tmp_assign_source_8;

    tmp_source_name_21 = var_lib2def.object;

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_getnm );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_15 = var_nm_cmd.object;

    frame_function->f_lineno = 424;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }
    assert( var_nm_output.object == NULL );
    var_nm_output.object = tmp_assign_source_9;

    // Tried code
    tmp_source_name_22 = var_lib2def.object;

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_parse_nm );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_16 = var_nm_output.object;

    frame_function->f_lineno = 425;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
        goto try_finally_handler_1;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_10;

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


        frame_function->f_lineno = 425;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_11;

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


        frame_function->f_lineno = 425;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_12;

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
    tmp_assign_source_13 = tmp_tuple_unpack_1__element_1.object;

    assert( var_dlist.object == NULL );
    var_dlist.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

    tmp_assign_source_14 = tmp_tuple_unpack_1__element_2.object;

    assert( var_flist.object == NULL );
    var_flist.object = INCREASE_REFCOUNT( tmp_assign_source_14 );

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
    tmp_source_name_23 = var_lib2def.object;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108602 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_output_def );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = var_dlist.object;

    if ( tmp_call_arg_element_17 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94791 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_18 = var_flist.object;

    if ( tmp_call_arg_element_18 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108655 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }

    tmp_source_name_24 = var_lib2def.object;

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108602 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_19 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_DEF_HEADER );
    if ( tmp_call_arg_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    tmp_open_filename_1 = var_def_file.object;

    if ( tmp_open_filename_1 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108706 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }

    tmp_open_mode_1 = const_str_plain_w;
    tmp_call_arg_element_20 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 426;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_11, tmp_call_arg_element_17, tmp_call_arg_element_18, tmp_call_arg_element_19, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_19 );
    Py_DECREF( tmp_call_arg_element_20 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_8 = const_str_digest_6c68537ccf79cbc98f02750ab35d7222;
    tmp_sliceslicedel_index_lower_4 = 0;
    tmp_slice_index_upper_4 = 2;
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 428;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_version_info );
    if ( tmp_slice_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 428;
        goto frame_exception_exit_1;
    }
    tmp_tuple_arg_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
    Py_DECREF( tmp_slice_source_4 );
    if ( tmp_tuple_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 428;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_8 = PySequence_Tuple( tmp_tuple_arg_4 );
    Py_DECREF( tmp_tuple_arg_4 );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 428;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = BINARY_OPERATION_REMAINDER( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 428;
        goto frame_exception_exit_1;
    }
    assert( var_dll_name.object == NULL );
    var_dll_name.object = tmp_assign_source_15;

    tmp_assign_source_16 = PyTuple_New( 3 );
    tmp_tuple_element_2 = var_dll_name.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_16, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_def_file.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108706 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 429;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_16, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_out_file.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108760 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 429;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_16, 2, tmp_tuple_element_2 );
    assert( var_args.object == NULL );
    var_args.object = tmp_assign_source_16;

    tmp_binop_left_9 = const_str_digest_af47777532b69dc5447b0de1dbae3143;
    tmp_binop_right_9 = var_args.object;

    tmp_assign_source_17 = BINARY_OPERATION_REMAINDER( tmp_binop_left_9, tmp_binop_right_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 430;
        goto frame_exception_exit_1;
    }
    assert( var_cmd.object == NULL );
    var_cmd.object = tmp_assign_source_17;

    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 431;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_system );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 431;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_21 = var_cmd.object;

    frame_function->f_lineno = 431;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 431;
        goto frame_exception_exit_1;
    }
    assert( var_status.object == NULL );
    var_status.object = tmp_assign_source_18;

    tmp_cond_value_3 = var_status.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 433;
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
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 434;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_warn );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 434;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_22 = const_str_digest_692840b546e7cd77eaa7cf257bab65db;
    frame_function->f_lineno = 434;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_22 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 434;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;

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
    if ((var_lib_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lib_name,
            var_lib_name.object
        );

    }
    if ((var_lib_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lib_file,
            var_lib_file.object
        );

    }
    if ((var_out_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_out_name,
            var_out_name.object
        );

    }
    if ((var_out_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_out_file,
            var_out_file.object
        );

    }
    if ((var_lib2def.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lib2def,
            var_lib2def.object
        );

    }
    if ((var_def_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_def_name,
            var_def_name.object
        );

    }
    if ((var_def_file.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_def_file,
            var_def_file.object
        );

    }
    if ((var_nm_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nm_cmd,
            var_nm_cmd.object
        );

    }
    if ((var_nm_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nm_output,
            var_nm_output.object
        );

    }
    if ((var_dlist.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dlist,
            var_dlist.object
        );

    }
    if ((var_flist.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_flist,
            var_flist.object
        );

    }
    if ((var_dll_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dll_name,
            var_dll_name.object
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
    if ((var_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmd,
            var_cmd.object
        );

    }
    if ((var_status.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_status,
            var_status.object
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
static PyObject *fparse_function_9__build_import_library_x86_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_9__build_import_library_x86_of_module_numpy$distutils$mingw32ccompiler( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_9__build_import_library_x86_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_9__build_import_library_x86_of_module_numpy$distutils$mingw32ccompiler( self );
    }
    else
    {
        PyObject *result = fparse_function_9__build_import_library_x86_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_msvc_manifest_xml_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_maj, PyObject *_python_par_min )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_maj; par_maj.object = _python_par_maj;
    PyObjectLocalVariable par_min; par_min.object = _python_par_min;
    PyObjectLocalVariable var_fullver;
    PyObjectLocalVariable var_template;
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
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ea7800275275a537344bc1351c646b6e, module_numpy$distutils$mingw32ccompiler );
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
    // Tried block of try/except
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__MSVCRVER_TO_FULLVER );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__MSVCRVER_TO_FULLVER );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108814 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 481;
        goto try_except_handler_1;
    }

    tmp_binop_left_2 = par_maj.object;

    if ( tmp_binop_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107696 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 481;
        goto try_except_handler_1;
    }

    tmp_binop_right_2 = const_int_pos_10;
    tmp_binop_left_1 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 481;
        goto try_except_handler_1;
    }
    tmp_binop_right_1 = par_min.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107745 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 481;
        goto try_except_handler_1;
    }

    tmp_str_arg_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 481;
        goto try_except_handler_1;
    }
    tmp_subscr_subscript_1 = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_subscr_subscript_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 481;
        goto try_except_handler_1;
    }
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_subscript_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 481;
        goto try_except_handler_1;
    }
    assert( var_fullver.object == NULL );
    var_fullver.object = tmp_assign_source_1;

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
    tmp_compare_right_1 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 482;
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
    tmp_binop_left_3 = const_str_digest_19e3073ec4ab2b0dcf8cb0f8ca1ec35f;
    tmp_binop_right_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_maj.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107696 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 484;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_min.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107745 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 484;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 1, tmp_tuple_element_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 483;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 483;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 483;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 483;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    try_except_end_1:;
    tmp_assign_source_2 = const_str_digest_a6ba2347ca3ece8b6148314683665f8b;
    assert( var_template.object == NULL );
    var_template.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_binop_left_4 = var_template.object;

    tmp_binop_right_4 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = var_fullver.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108863 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 507;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_fullver;
    PyDict_SetItem( tmp_binop_right_4, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_maj.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107696 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 507;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_maj;
    PyDict_SetItem( tmp_binop_right_4, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_min.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107745 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 507;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_min;
    PyDict_SetItem( tmp_binop_right_4, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 507;
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
    if ((var_fullver.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fullver,
            var_fullver.object
        );

    }
    if ((var_template.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_template,
            var_template.object
        );

    }
    if ((par_maj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_maj,
            par_maj.object
        );

    }
    if ((par_min.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_min,
            par_min.object
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
static PyObject *fparse_function_10_msvc_manifest_xml_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_maj = NULL;
    PyObject *_python_par_min = NULL;
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
                PyErr_Format( PyExc_TypeError, "msvc_manifest_xml() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_maj == key )
            {
                assert( _python_par_maj == NULL );
                _python_par_maj = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_min == key )
            {
                assert( _python_par_min == NULL );
                _python_par_min = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maj, key ) == 1 )
            {
                assert( _python_par_maj == NULL );
                _python_par_maj = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_min, key ) == 1 )
            {
                assert( _python_par_min == NULL );
                _python_par_min = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "msvc_manifest_xml() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_maj != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_maj = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_maj == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_maj = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_min != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_min = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_min == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_min = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_maj == NULL || _python_par_min == NULL ))
    {
        PyObject *values[] = { _python_par_maj, _python_par_min };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_10_msvc_manifest_xml_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_maj, _python_par_min );

error_exit:;

    Py_XDECREF( _python_par_maj );
    Py_XDECREF( _python_par_min );

    return NULL;
}

static PyObject *dparse_function_10_msvc_manifest_xml_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_10_msvc_manifest_xml_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_msvc_manifest_xml_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_manifest_rc_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_name, PyObject *_python_par_type )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_name; par_name.object = _python_par_name;
    PyObjectLocalVariable par_type; par_type.object = _python_par_type;
    PyObjectLocalVariable var_rctype;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2a734d201fada26b774c7743d873f906, module_numpy$distutils$mingw32ccompiler );
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
    tmp_compare_left_1 = par_type.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25149 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 522;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_str_plain_dll;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 522;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = const_int_pos_2;
    assert( var_rctype.object == NULL );
    var_rctype.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = par_type.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25149 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 524;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_str_plain_exe;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 524;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = const_int_pos_1;
    assert( var_rctype.object == NULL );
    var_rctype.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    goto branch_end_2;
    branch_no_2:;
    tmp_binop_left_1 = const_str_digest_e638c4891a43f3e5114f3b33ab5189ff;
    tmp_binop_right_1 = par_type.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25149 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 527;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 527;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_2:;
    branch_end_1:;
    tmp_binop_left_2 = const_str_digest_7dcba6b7ac694a4d74099413341aefc9;
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_rctype.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108916 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 531;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_name.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 531;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 531;
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
    if ((var_rctype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rctype,
            var_rctype.object
        );

    }
    if ((par_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            par_name.object
        );

    }
    if ((par_type.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_type,
            par_type.object
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
static PyObject *fparse_function_11_manifest_rc_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_type = NULL;
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
                PyErr_Format( PyExc_TypeError, "manifest_rc() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_name == key )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_type == key )
            {
                assert( _python_par_type == NULL );
                _python_par_type = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_name, key ) == 1 )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_type, key ) == 1 )
            {
                assert( _python_par_type == NULL );
                _python_par_type = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "manifest_rc() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_name == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_type != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_type = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_type == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_type = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_name == NULL || _python_par_type == NULL ))
    {
        PyObject *values[] = { _python_par_name, _python_par_type };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_11_manifest_rc_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_name, _python_par_type );

error_exit:;

    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_type );

    return NULL;
}

static PyObject *dparse_function_11_manifest_rc_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_11_manifest_rc_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_manifest_rc_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_check_embedded_msvcr_match_linked_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_msver )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_msver; par_msver.object = _python_par_msver;
    PyObjectLocalVariable var_msvcv;
    PyObjectLocalVariable var_maj;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_value_1;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6ab2bf88f2d809e7ce954d70a6ebd1a4, module_numpy$distutils$mingw32ccompiler );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_msvc_runtime_library );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_msvc_runtime_library );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107335 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 537;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 537;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 537;
        goto frame_exception_exit_1;
    }
    assert( var_msvcv.object == NULL );
    var_msvcv.object = tmp_assign_source_1;

    tmp_cond_value_1 = var_msvcv.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 538;
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
    tmp_source_name_1 = var_msvcv.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_startswith );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 539;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_msvcr;
    frame_function->f_lineno = 539;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 539;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 539;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_raise_type_1 = PyExc_AssertionError;
    tmp_raise_value_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_msvcv.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_raise_value_1, 0, tmp_tuple_element_1 );
    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    frame_function->f_lineno = 539;
    RAISE_EXCEPTION_WITH_VALUE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_sliceslicedel_index_lower_1 = 5;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_msvcv.object;

    tmp_int_arg_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }
    assert( var_maj.object == NULL );
    var_maj.object = tmp_assign_source_2;

    tmp_compare_left_1 = var_maj.object;

    tmp_int_arg_2 = par_msver.object;

    if ( tmp_int_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108968 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = PyNumber_Int( tmp_int_arg_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_binop_left_1 = const_str_digest_5cddcefce4fe7420ea9c4fbfe6b6d4b0;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_int_arg_3 = par_msver.object;

    if ( tmp_int_arg_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 108968 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 547;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = PyNumber_Int( tmp_int_arg_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 547;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_maj.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_2 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 545;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 544;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 544;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 544;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
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
    if ((var_msvcv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msvcv,
            var_msvcv.object
        );

    }
    if ((var_maj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_maj,
            var_maj.object
        );

    }
    if ((par_msver.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msver,
            par_msver.object
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
static PyObject *fparse_function_12_check_embedded_msvcr_match_linked_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_msver = NULL;
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
                PyErr_Format( PyExc_TypeError, "check_embedded_msvcr_match_linked() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_msver == key )
            {
                assert( _python_par_msver == NULL );
                _python_par_msver = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_msver, key ) == 1 )
            {
                assert( _python_par_msver == NULL );
                _python_par_msver = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "check_embedded_msvcr_match_linked() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_msver != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_msver = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_msver == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_msver = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_msver == NULL ))
    {
        PyObject *values[] = { _python_par_msver };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_12_check_embedded_msvcr_match_linked_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_msver );

error_exit:;

    Py_XDECREF( _python_par_msver );

    return NULL;
}

static PyObject *dparse_function_12_check_embedded_msvcr_match_linked_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_12_check_embedded_msvcr_match_linked_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_check_embedded_msvcr_match_linked_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_configtest_name_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_config )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_config; par_config.object = _python_par_config;
    PyObjectLocalVariable var_base;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_787c1ab292b33eb19b81e17284c4a674, module_numpy$distutils$mingw32ccompiler );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_basename );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_config.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109019 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__gen_temp_sourcefile );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_yo;
    tmp_call_arg_element_3 = PyList_New( 0 );
    tmp_call_arg_element_4 = const_str_plain_c;
    frame_function->f_lineno = 550;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 550;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }
    assert( var_base.object == NULL );
    var_base.object = tmp_assign_source_1;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 551;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 551;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_splitext );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 551;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = var_base.object;

    frame_function->f_lineno = 551;
    tmp_subscr_target_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 551;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 551;
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
    if ((var_base.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_base,
            var_base.object
        );

    }
    if ((par_config.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_config,
            par_config.object
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
static PyObject *fparse_function_13_configtest_name_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_config = NULL;
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
                PyErr_Format( PyExc_TypeError, "configtest_name() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_config == key )
            {
                assert( _python_par_config == NULL );
                _python_par_config = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_config, key ) == 1 )
            {
                assert( _python_par_config == NULL );
                _python_par_config = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "configtest_name() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_config != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_config = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_config == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_config = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_config == NULL ))
    {
        PyObject *values[] = { _python_par_config };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_13_configtest_name_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_config );

error_exit:;

    Py_XDECREF( _python_par_config );

    return NULL;
}

static PyObject *dparse_function_13_configtest_name_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_13_configtest_name_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_configtest_name_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_manifest_name_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_config )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_config; par_config.object = _python_par_config;
    PyObjectLocalVariable var_root;
    PyObjectLocalVariable var_exext;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c3068fabe026d77a9ef5fc1fa96ed97e, module_numpy$distutils$mingw32ccompiler );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_configtest_name );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_configtest_name );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109071 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 555;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_config.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109019 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 555;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 555;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 555;
        goto frame_exception_exit_1;
    }
    assert( var_root.object == NULL );
    var_root.object = tmp_assign_source_1;

    tmp_source_name_2 = par_config.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109019 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 556;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_compiler );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 556;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exe_extension );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 556;
        goto frame_exception_exit_1;
    }
    assert( var_exext.object == NULL );
    var_exext.object = tmp_assign_source_2;

    tmp_binop_left_2 = var_root.object;

    tmp_binop_right_2 = var_exext.object;

    tmp_binop_left_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 557;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = const_str_digest_11bf6d28d6d9bb5009d64894f97406bb;
    tmp_return_value = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 557;
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
    if ((var_root.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_root,
            var_root.object
        );

    }
    if ((var_exext.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_exext,
            var_exext.object
        );

    }
    if ((par_config.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_config,
            par_config.object
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
static PyObject *fparse_function_14_manifest_name_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_config = NULL;
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
                PyErr_Format( PyExc_TypeError, "manifest_name() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_config == key )
            {
                assert( _python_par_config == NULL );
                _python_par_config = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_config, key ) == 1 )
            {
                assert( _python_par_config == NULL );
                _python_par_config = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "manifest_name() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_config != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_config = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_config == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_config = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_config == NULL ))
    {
        PyObject *values[] = { _python_par_config };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_14_manifest_name_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_config );

error_exit:;

    Py_XDECREF( _python_par_config );

    return NULL;
}

static PyObject *dparse_function_14_manifest_name_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_14_manifest_name_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_manifest_name_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_rc_name_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_config )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_config; par_config.object = _python_par_config;
    PyObjectLocalVariable var_root;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f4723b4f4b3093b3d0dedb8be031e99a, module_numpy$distutils$mingw32ccompiler );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_configtest_name );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_configtest_name );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109071 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 561;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_config.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109019 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 561;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 561;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 561;
        goto frame_exception_exit_1;
    }
    assert( var_root.object == NULL );
    var_root.object = tmp_assign_source_1;

    tmp_binop_left_1 = var_root.object;

    tmp_binop_right_1 = const_str_digest_e610227b44cba79c6542a6ac7260a5f9;
    tmp_return_value = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 562;
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
    if ((var_root.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_root,
            var_root.object
        );

    }
    if ((par_config.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_config,
            par_config.object
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
static PyObject *fparse_function_15_rc_name_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_config = NULL;
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
                PyErr_Format( PyExc_TypeError, "rc_name() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_config == key )
            {
                assert( _python_par_config == NULL );
                _python_par_config = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_config, key ) == 1 )
            {
                assert( _python_par_config == NULL );
                _python_par_config = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "rc_name() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_config != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_config = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_config == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_config = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_config == NULL ))
    {
        PyObject *values[] = { _python_par_config };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_15_rc_name_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_config );

error_exit:;

    Py_XDECREF( _python_par_config );

    return NULL;
}

static PyObject *dparse_function_15_rc_name_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_15_rc_name_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_rc_name_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_generate_manifest_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_config )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_config; par_config.object = _python_par_config;
    PyObjectLocalVariable var_msver;
    PyObjectLocalVariable var_ma;
    PyObjectLocalVariable var_mi;
    PyObjectLocalVariable var_manxml;
    PyObjectLocalVariable var_man;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    bool tmp_isnot_1;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_42dc624cf374778e979876159392ddcf, module_numpy$distutils$mingw32ccompiler );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_get_build_msvc_version );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_build_msvc_version );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109115 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 565;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 565;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 565;
        goto frame_exception_exit_1;
    }
    assert( var_msver.object == NULL );
    var_msver.object = tmp_assign_source_1;

    tmp_compare_left_1 = var_msver.object;

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
    tmp_compare_left_2 = var_msver.object;

    tmp_compare_right_2 = const_int_pos_8;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 567;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_GtE_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_check_embedded_msvcr_match_linked );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_check_embedded_msvcr_match_linked );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109166 ], 62, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 568;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = var_msver.object;

    frame_function->f_lineno = 568;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 568;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_int_arg_1 = var_msver.object;

    tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 569;
        goto frame_exception_exit_1;
    }
    assert( var_ma.object == NULL );
    var_ma.object = tmp_assign_source_2;

    tmp_binop_left_2 = var_msver.object;

    tmp_binop_right_2 = var_ma.object;

    tmp_binop_left_1 = BINARY_OPERATION_SUB( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 570;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = const_int_pos_10;
    tmp_int_arg_2 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 570;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 570;
        goto frame_exception_exit_1;
    }
    assert( var_mi.object == NULL );
    var_mi.object = tmp_assign_source_3;

    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_msvc_manifest_xml );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_msvc_manifest_xml );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109228 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 572;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = var_ma.object;

    tmp_call_arg_element_3 = var_mi.object;

    frame_function->f_lineno = 572;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 572;
        goto frame_exception_exit_1;
    }
    assert( var_manxml.object == NULL );
    var_manxml.object = tmp_assign_source_4;

    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_manifest_name );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_manifest_name );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109274 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 573;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_config.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109019 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 573;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 573;
    tmp_open_filename_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    if ( tmp_open_filename_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 573;
        goto frame_exception_exit_1;
    }
    tmp_open_mode_1 = const_str_plain_w;
    tmp_assign_source_5 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    Py_DECREF( tmp_open_filename_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 573;
        goto frame_exception_exit_1;
    }
    assert( var_man.object == NULL );
    var_man.object = tmp_assign_source_5;

    tmp_source_name_2 = par_config.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109019 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 574;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_temp_files );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 574;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 574;
        goto frame_exception_exit_1;
    }
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_manifest_name );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_manifest_name );
    }

    if ( tmp_called_6 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109274 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 574;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = par_config.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109019 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 574;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 574;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 574;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 574;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 574;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = var_man.object;

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_write );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 575;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = var_manxml.object;

    frame_function->f_lineno = 575;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 575;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = var_man.object;

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_close );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 576;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 576;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 576;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
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
    if ((var_msver.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msver,
            var_msver.object
        );

    }
    if ((var_ma.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ma,
            var_ma.object
        );

    }
    if ((var_mi.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mi,
            var_mi.object
        );

    }
    if ((var_manxml.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_manxml,
            var_manxml.object
        );

    }
    if ((var_man.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_man,
            var_man.object
        );

    }
    if ((par_config.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_config,
            par_config.object
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
static PyObject *fparse_function_16_generate_manifest_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_config = NULL;
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
                PyErr_Format( PyExc_TypeError, "generate_manifest() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_config == key )
            {
                assert( _python_par_config == NULL );
                _python_par_config = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_config, key ) == 1 )
            {
                assert( _python_par_config == NULL );
                _python_par_config = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "generate_manifest() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_config != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_config = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_config == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_config = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_config == NULL ))
    {
        PyObject *values[] = { _python_par_config };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_16_generate_manifest_of_module_numpy$distutils$mingw32ccompiler( self, _python_par_config );

error_exit:;

    Py_XDECREF( _python_par_config );

    return NULL;
}

static PyObject *dparse_function_16_generate_manifest_of_module_numpy$distutils$mingw32ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_16_generate_manifest_of_module_numpy$distutils$mingw32ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_generate_manifest_of_module_numpy$distutils$mingw32ccompiler( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_msvc_manifest_xml_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_msvc_manifest_xml_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_10_msvc_manifest_xml_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_msvc_manifest_xml,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ba708f88b8f0fad564278e37cd8c8d47,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        const_str_digest_934df5e88bbb0840c2028c4d167dd357
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_manifest_rc_of_module_numpy$distutils$mingw32ccompiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_manifest_rc_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_11_manifest_rc_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_manifest_rc,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_03dc37969bdb801d439a53eb679e484f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        const_str_digest_10fe522bcb02dd7f0cc57f07adfc034d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_check_embedded_msvcr_match_linked_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_check_embedded_msvcr_match_linked_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_12_check_embedded_msvcr_match_linked_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_check_embedded_msvcr_match_linked,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_36f04a7475fccaa80544e95de0b5d1e3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        const_str_digest_729675cb8850405f6b1ecd5e2ca87625
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_configtest_name_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_configtest_name_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_13_configtest_name_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_configtest_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ad4264f002bd3493d482c70e78caf6a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_manifest_name_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_manifest_name_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_14_manifest_name_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_manifest_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c5d8c6bcdc04e66d5dc21d6c9c2aad1b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_rc_name_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_rc_name_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_15_rc_name_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_rc_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d34cea822b51477eb8ce2d277c7048b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_generate_manifest_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_generate_manifest_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_16_generate_manifest_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_generate_manifest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8a98e36d56e570b48c53d05997884fe7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_1___init___of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bddab15959ac9f53a5816f6529e4d73e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler( PyObjectSharedLocalVariable &closure_arch )
{
    struct _context_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler_t *_python_context = new _context_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler_t;

    // Copy the parameter default values and closure values over.
    _python_context->closure_arch.shareWith( closure_arch );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain__find_dll_in_winsxs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_71bd2a19b5c896aae10dd6163feb3393,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None,
        _python_context,
        _context_function_1__find_dll_in_winsxs_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__find_dll_in_path_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__find_dll_in_path_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_2__find_dll_in_path_of_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain__find_dll_in_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_af1003c6f2e9b89e691f7fd7a1b77c1a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_find_python_dll_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_find_python_dll_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_2_find_python_dll_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_find_python_dll,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c7a91b01c416d5f65a6903a0b12ed834,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_link_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_link_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_2_link_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_link,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7f7408c2cc3e7109ac462183a232e913,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_dump_table_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_dump_table_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_3_dump_table_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_dump_table,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6f103027a02a8de09ca9af92c62447b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_object_filenames_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_object_filenames_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_3_object_filenames_of_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_object_filenames,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f2be788709f5caaea4546b93994f20a1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_generate_def_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_generate_def_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_4_generate_def_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_generate_def,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3dab022c66c6146c963d98721c29b3fa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        const_str_digest_3657b79c3272a4a9bee01b716c47b393
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_find_dll,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f44907390a80c993c09d15509cfe0b7f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_build_msvcr_library_of_module_numpy$distutils$mingw32ccompiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_build_msvcr_library_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_6_build_msvcr_library_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_build_msvcr_library,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aea9a4863a0569ed791c395e07df3a16,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_build_import_library_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_build_import_library_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_7_build_import_library_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain_build_import_library,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7f577ebd9781aec801b541b6cd87ae89,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8__build_import_library_amd64_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8__build_import_library_amd64_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_8__build_import_library_amd64_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain__build_import_library_amd64,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7b9ce9c83f8af207541e4e3be813f31b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9__build_import_library_x86_of_module_numpy$distutils$mingw32ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9__build_import_library_x86_of_module_numpy$distutils$mingw32ccompiler,
        dparse_function_9__build_import_library_x86_of_module_numpy$distutils$mingw32ccompiler,
        const_str_plain__build_import_library_x86,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_753c088756a017056da0ca6b7296966b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$mingw32ccompiler,
        const_str_digest_a2b81d958fa7e2a740aa7c4a47627e10
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils$mingw32ccompiler =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils.mingw32ccompiler",   /* m_name */
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

MOD_INIT_DECL( numpy$distutils$mingw32ccompiler )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils$mingw32ccompiler );
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

    // puts( "in initnumpy$distutils$mingw32ccompiler" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils$mingw32ccompiler = Py_InitModule4(
        "numpy.distutils.mingw32ccompiler",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils$mingw32ccompiler = PyModule_Create( &mdef_numpy$distutils$mingw32ccompiler );
#endif

    moduledict_numpy$distutils$mingw32ccompiler = (PyDictObject *)((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;

    assertObject( module_numpy$distutils$mingw32ccompiler );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_3cf1150dc41ac01dcb8cfcc35c3f433c, module_numpy$distutils$mingw32ccompiler );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils$mingw32ccompiler );

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
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_1__element_3;
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
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
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
    PyObject *tmp_binop_right_1;
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
    PyObject *tmp_class_bases_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_key_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
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
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    tmp_assign_source_1 = const_str_digest_17efe4d8ee8944292cb1a17e03770207;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_712b615044e13d4670613072bed7f41c;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_9032aada2f54372be462d10f1bb9b132, module_numpy$distutils$mingw32ccompiler );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 12;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 13;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 14;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_subprocess, tmp_import_globals_6, tmp_import_globals_6, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_subprocess, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 15;
    tmp_assign_source_9 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_7, tmp_import_globals_7, Py_None, const_int_0 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 18;
    tmp_assign_source_10 = IMPORT_MODULE( const_str_digest_1f406ccb0ae00805d4f3c6661348da02, tmp_import_globals_8, tmp_import_globals_8, Py_None, const_int_0 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_numpy, tmp_assign_source_10 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_3;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_empty, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_log_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_log );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_11 );
    goto branch_end_1;
    branch_no_1:;
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_c0fff8163aabf90b654f2f3ba03fe760, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_log_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_log );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_12 );
    branch_end_1:;
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 30;
    tmp_assign_source_13 = IMPORT_MODULE( const_str_digest_5777bfcd4eafe121b3f1375bac48099a, tmp_import_globals_11, tmp_import_globals_11, Py_None, const_int_0 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_distutils, tmp_assign_source_13 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 31;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_c093ffbc531047f3f58d3349fa58e0f7, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_StrictVersion_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_StrictVersion );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_StrictVersion, tmp_assign_source_14 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 32;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_1f406ccb0ae00805d4f3c6661348da02, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_plain_gen_preprocess_options_str_plain_gen_lib_options_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_gen_preprocess_options );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_gen_preprocess_options, tmp_assign_source_15 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 32;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_1f406ccb0ae00805d4f3c6661348da02, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_plain_gen_preprocess_options_str_plain_gen_lib_options_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_gen_lib_options );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_gen_lib_options, tmp_assign_source_16 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 33;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc, tmp_import_globals_15, tmp_import_globals_15, const_tuple_7143f3684420cd882f00b1622b2c6550_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_DistutilsExecError );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_DistutilsExecError, tmp_assign_source_17 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 33;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc, tmp_import_globals_16, tmp_import_globals_16, const_tuple_7143f3684420cd882f00b1622b2c6550_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_CompileError );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_CompileError, tmp_assign_source_18 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 33;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc, tmp_import_globals_17, tmp_import_globals_17, const_tuple_7143f3684420cd882f00b1622b2c6550_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_UnknownFileError );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_UnknownFileError, tmp_assign_source_19 );
    tmp_import_globals_18 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 35;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_84a8de0d7fe6874d2f76baddcb4f6dfd, tmp_import_globals_18, tmp_import_globals_18, const_tuple_str_plain_UnixCCompiler_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_UnixCCompiler );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_UnixCCompiler, tmp_assign_source_20 );
    tmp_import_globals_19 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_d72591307adca2be9a60c5e86595b16a, tmp_import_globals_19, tmp_import_globals_19, const_tuple_str_plain_get_build_version_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_get_build_version );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_get_build_msvc_version, tmp_assign_source_21 );
    tmp_import_globals_20 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 37;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_20, tmp_import_globals_20, const_tuple_047a8d3f40dae873a5f0caa092fe8b3a_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_msvc_runtime_library );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_msvc_runtime_library, tmp_assign_source_22 );
    tmp_import_globals_21 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 37;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_21, tmp_import_globals_21, const_tuple_047a8d3f40dae873a5f0caa092fe8b3a_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_get_build_architecture );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_get_build_architecture, tmp_assign_source_23 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4457 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_compile );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_805e2cda125fd5173424e205f7af402d;
    frame_module->f_lineno = 40;
    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__START, tmp_assign_source_24 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4457 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_compile );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_digest_4319b67df2f1e6ebe25bfc568ef54068;
    frame_module->f_lineno = 41;
    tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__TABLE, tmp_assign_source_25 );
    // Tried code
    tmp_assign_source_26 = PyTuple_New( 1 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_distutils );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_distutils );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 91776 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 44;
        goto try_finally_handler_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_cygwinccompiler );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_26 );

        frame_module->f_lineno = 44;
        goto try_finally_handler_1;
    }
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_CygwinCCompiler );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_26 );

        frame_module->f_lineno = 44;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_26, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_26;

    tmp_assign_source_27 = impl_class_1_Mingw32CCompiler_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 44;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_27;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 44;
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
    tmp_assign_source_28 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 44;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_28 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_28;

    tmp_called_3 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_3 = const_str_plain_Mingw32CCompiler;
    tmp_call_arg_element_4 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_5 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 44;
    tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 44;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_29;

    tmp_assign_source_30 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_Mingw32CCompiler, tmp_assign_source_30 );
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
    tmp_assign_source_31 = MAKE_FUNCTION_function_2_find_python_dll_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_31 );

        frame_module->f_lineno = 240;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_find_python_dll, tmp_assign_source_31 );
    tmp_assign_source_32 = MAKE_FUNCTION_function_3_dump_table_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        frame_module->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_dump_table, tmp_assign_source_32 );
    tmp_assign_source_33 = MAKE_FUNCTION_function_4_generate_def_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_33 );

        frame_module->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_generate_def, tmp_assign_source_33 );
    tmp_assign_source_34 = MAKE_FUNCTION_function_5_find_dll_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_34 );

        frame_module->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_find_dll, tmp_assign_source_34 );
    tmp_defaults_1 = const_tuple_false_tuple;
    tmp_assign_source_35 = MAKE_FUNCTION_function_6_build_msvcr_library_of_module_numpy$distutils$mingw32ccompiler( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        frame_module->f_lineno = 326;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_build_msvcr_library, tmp_assign_source_35 );
    tmp_assign_source_36 = MAKE_FUNCTION_function_7_build_import_library_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        frame_module->f_lineno = 372;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_build_import_library, tmp_assign_source_36 );
    tmp_assign_source_37 = MAKE_FUNCTION_function_8__build_import_library_amd64_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_37 );

        frame_module->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__build_import_library_amd64, tmp_assign_source_37 );
    tmp_assign_source_38 = MAKE_FUNCTION_function_9__build_import_library_x86_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_38 );

        frame_module->f_lineno = 404;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__build_import_library_x86, tmp_assign_source_38 );
    tmp_assign_source_39 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__MSVCRVER_TO_FULLVER, tmp_assign_source_39 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 458;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_platform );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 458;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_str_plain_win32;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_module->f_lineno = 458;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried block of try/except
    tmp_import_globals_22 = ((PyModuleObject *)module_numpy$distutils$mingw32ccompiler)->md_dict;
    frame_module->f_lineno = 460;
    tmp_assign_source_40 = IMPORT_MODULE( const_str_plain_msvcrt, tmp_import_globals_22, tmp_import_globals_22, Py_None, const_int_0 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 460;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_msvcrt, tmp_assign_source_40 );
    tmp_ass_subvalue_1 = const_str_digest_b4d52c0964b4b61dc9eedc594ea0d3c0;
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__MSVCRVER_TO_FULLVER );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__MSVCRVER_TO_FULLVER );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107007 ], 42, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 463;
        goto try_except_handler_1;
    }

    tmp_ass_subscript_1 = const_str_plain_80;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 463;
        goto try_except_handler_1;
    }
    tmp_ass_subvalue_2 = const_str_digest_e0733d4e5be8a0417e3ac7f52309fe0a;
    tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__MSVCRVER_TO_FULLVER );

    if (unlikely( tmp_ass_subscribed_2 == NULL ))
    {
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__MSVCRVER_TO_FULLVER );
    }

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107007 ], 42, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 464;
        goto try_except_handler_1;
    }

    tmp_ass_subscript_2 = const_str_plain_90;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 464;
        goto try_except_handler_1;
    }
    tmp_ass_subvalue_3 = const_str_digest_9bf8b6dea83b3d746d912de11cafcf78;
    tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__MSVCRVER_TO_FULLVER );

    if (unlikely( tmp_ass_subscribed_3 == NULL ))
    {
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__MSVCRVER_TO_FULLVER );
    }

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107007 ], 42, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 466;
        goto try_except_handler_1;
    }

    tmp_ass_subscript_3 = const_str_plain_100;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 466;
        goto try_except_handler_1;
    }
    tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_msvcrt );

    if (unlikely( tmp_hasattr_source_1 == NULL ))
    {
        tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_msvcrt );
    }

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107049 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 467;
        goto try_except_handler_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_CRT_ASSEMBLY_VERSION;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 467;
        goto try_except_handler_1;
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
    // Tried code
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_msvcrt );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_msvcrt );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107049 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 468;
        goto try_finally_handler_2;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_CRT_ASSEMBLY_VERSION );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 468;
        goto try_finally_handler_2;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_split );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 468;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_6 = const_str_dot;
    tmp_call_arg_element_7 = const_int_pos_2;
    frame_module->f_lineno = 468;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 468;
        goto try_finally_handler_2;
    }
    tmp_assign_source_41 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 468;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_41;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_42 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_42 == NULL )
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


        frame_module->f_lineno = 468;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_42;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_43 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_43 == NULL )
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


        frame_module->f_lineno = 468;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_43;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_44 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_44 == NULL )
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


        frame_module->f_lineno = 468;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3.object == NULL );
    tmp_tuple_unpack_1__element_3.object = tmp_assign_source_44;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_2;
    }
    tmp_assign_source_45 = tmp_tuple_unpack_1__element_1.object;

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_major, tmp_assign_source_45 );
    tmp_assign_source_46 = tmp_tuple_unpack_1__element_2.object;

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_minor, tmp_assign_source_46 );
    tmp_assign_source_47 = tmp_tuple_unpack_1__element_3.object;

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_rest, tmp_assign_source_47 );
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
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3.object );
    tmp_tuple_unpack_1__element_3.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_2;
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
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_msvcrt );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_msvcrt );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107049 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 469;
        goto try_except_handler_1;
    }

    tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_CRT_ASSEMBLY_VERSION );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 469;
        goto try_except_handler_1;
    }
    tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain__MSVCRVER_TO_FULLVER );

    if (unlikely( tmp_ass_subscribed_4 == NULL ))
    {
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__MSVCRVER_TO_FULLVER );
    }

    if ( tmp_ass_subscribed_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107007 ], 42, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 469;
        goto try_except_handler_1;
    }

    tmp_binop_left_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_major );

    if (unlikely( tmp_binop_left_1 == NULL ))
    {
        tmp_binop_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_major );
    }

    if ( tmp_binop_left_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107077 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 469;
        goto try_except_handler_1;
    }

    tmp_binop_right_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_minor );

    if (unlikely( tmp_binop_right_1 == NULL ))
    {
        tmp_binop_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_minor );
    }

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107104 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 469;
        goto try_except_handler_1;
    }

    tmp_ass_subscript_4 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_ass_subscript_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_4 );

        frame_module->f_lineno = 469;
        goto try_except_handler_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subscript_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 469;
        goto try_except_handler_1;
    }
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$distutils$mingw32ccompiler, const_str_plain_major );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107077 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 470;
        goto try_except_handler_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$distutils$mingw32ccompiler, const_str_plain_minor );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107104 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 470;
        goto try_except_handler_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$distutils$mingw32ccompiler, const_str_plain_rest );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107131 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 470;
        goto try_except_handler_1;
    }

    branch_no_3:;
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
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 471;
        goto frame_exception_exit_1;
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
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3854 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 475;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_warn );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 475;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = const_str_digest_35210812f7ce0c72395c465da1d15832;
    frame_module->f_lineno = 475;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 475;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_4:;
    try_except_end_1:;
    branch_no_2:;
    tmp_assign_source_48 = MAKE_FUNCTION_function_10_msvc_manifest_xml_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_48 );

        frame_module->f_lineno = 477;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_msvc_manifest_xml, tmp_assign_source_48 );
    tmp_defaults_2 = const_tuple_str_plain_dll_tuple;
    tmp_assign_source_49 = MAKE_FUNCTION_function_11_manifest_rc_of_module_numpy$distutils$mingw32ccompiler( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_49 );

        frame_module->f_lineno = 509;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_manifest_rc, tmp_assign_source_49 );
    tmp_assign_source_50 = MAKE_FUNCTION_function_12_check_embedded_msvcr_match_linked_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_50 );

        frame_module->f_lineno = 533;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_check_embedded_msvcr_match_linked, tmp_assign_source_50 );
    tmp_assign_source_51 = MAKE_FUNCTION_function_13_configtest_name_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        frame_module->f_lineno = 549;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_configtest_name, tmp_assign_source_51 );
    tmp_assign_source_52 = MAKE_FUNCTION_function_14_manifest_name_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_52 );

        frame_module->f_lineno = 553;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_manifest_name, tmp_assign_source_52 );
    tmp_assign_source_53 = MAKE_FUNCTION_function_15_rc_name_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_53 );

        frame_module->f_lineno = 559;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_rc_name, tmp_assign_source_53 );
    tmp_assign_source_54 = MAKE_FUNCTION_function_16_generate_manifest_of_module_numpy$distutils$mingw32ccompiler(  );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_54 );

        frame_module->f_lineno = 564;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$mingw32ccompiler, (Nuitka_StringObject *)const_str_plain_generate_manifest, tmp_assign_source_54 );

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

    return MOD_RETURN_VALUE( module_numpy$distutils$mingw32ccompiler );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
