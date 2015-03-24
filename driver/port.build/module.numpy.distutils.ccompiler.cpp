// Generated code for Python source for module 'numpy.distutils.ccompiler'
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

// The _module_numpy$distutils$ccompiler is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils$ccompiler;
PyDictObject *moduledict_numpy$distutils$ccompiler;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_empty;
extern PyObject *const_str_space;
extern PyObject *const_dict_empty;
extern PyObject *const_str_chr_34;
extern PyObject *const_str_chr_39;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_chr_92;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_o;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_v;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain__m;
extern PyObject *const_str_plain_cc;
extern PyObject *const_str_plain_fc;
extern PyObject *const_str_plain_kw;
extern PyObject *const_str_plain_mx;
extern PyObject *const_str_plain_nt;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_re;
static PyObject *const_str_plain__cc;
extern PyObject *const_str_plain_aix;
static PyObject *const_str_plain_beg;
extern PyObject *const_str_plain_cmd;
static PyObject *const_str_plain_cxx;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_ext;
extern PyObject *const_str_plain_f77;
extern PyObject *const_str_plain_f90;
extern PyObject *const_str_plain_fix;
extern PyObject *const_str_plain_gcc;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_pat;
extern PyObject *const_str_plain_pos;
extern PyObject *const_str_plain_src;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_attr;
extern PyObject *const_str_plain_base;
static PyObject *const_str_plain_bcpp;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_dist;
static PyObject *const_str_plain_emxc;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_msvc;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_plat;
extern PyObject *const_str_plain_prop;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_span;
extern PyObject *const_str_plain_warn;
extern PyObject *const_list_int_0_list;
static PyObject *const_str_plain_allow;
extern PyObject *const_str_plain_build;
extern PyObject *const_str_plain_ccomp;
extern PyObject *const_str_plain_debug;
static PyObject *const_str_plain_fcomp;
extern PyObject *const_str_plain_force;
extern PyObject *const_str_plain_group;
extern PyObject *const_str_plain_intel;
extern PyObject *const_str_plain_isabs;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_klass;
extern PyObject *const_str_plain_lines;
static PyObject *const_str_plain_macro;
extern PyObject *const_str_plain_match;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_props;
extern PyObject *const_str_plain_rfind;
extern PyObject *const_str_plain_rpath;
extern PyObject *const_str_plain_spawn;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_types;
extern PyObject *const_str_plain_undef;
static PyObject *const_str_plain_unixc;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_win32;
extern PyObject *const_str_plain_words;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_plain_absoft;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_define;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_ignore;
static PyObject *const_str_plain_intele;
extern PyObject *const_str_plain_lstrip;
extern PyObject *const_str_plain_macros;
extern PyObject *const_str_plain_module;
extern PyObject *const_str_plain_output;
static PyObject *const_str_plain_pathcc;
extern PyObject *const_str_plain_remove;
extern PyObject *const_str_plain_search;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_string;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_abspath;
extern PyObject *const_str_plain_cc_args;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_plain_cygwinc;
extern PyObject *const_str_plain_depends;
extern PyObject *const_str_plain_display;
extern PyObject *const_str_plain_dry_run;
static PyObject *const_str_plain_intelem;
static PyObject *const_str_plain_matcher;
extern PyObject *const_str_plain_mingw32;
extern PyObject *const_str_plain_modules;
extern PyObject *const_str_plain_objects;
extern PyObject *const_str_plain_pp_opts;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_sources;
extern PyObject *const_str_plain_use_tee;
extern PyObject *const_str_plain_verbose;
extern PyObject *const_str_plain_version;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain__compile;
extern PyObject *const_str_plain_attrname;
extern PyObject *const_str_plain_basename;
extern PyObject *const_str_plain_compiler;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_lib_opts;
extern PyObject *const_str_plain_need_cxx;
extern PyObject *const_str_plain_normpath;
static PyObject *const_str_plain_obj_name;
extern PyObject *const_str_plain_platform;
extern PyObject *const_str_plain_splitext;
extern PyObject *const_str_plain_src_name;
extern PyObject *const_str_plain_CCompiler;
extern PyObject *const_str_plain_FCompiler;
extern PyObject *const_str_plain_ccompiler;
static PyObject *const_str_plain_compiler_;
extern PyObject *const_str_plain_customize;
extern PyObject *const_str_plain_cyg2win32;
extern PyObject *const_str_plain_distutils;
extern PyObject *const_str_plain_fcompiler;
extern PyObject *const_str_plain_ld_so_aix;
extern PyObject *const_str_plain_libraries;
extern PyObject *const_str_plain_linker_so;
extern PyObject *const_str_plain_obj_names;
extern PyObject *const_str_plain_ok_status;
extern PyObject *const_str_plain_strip_dir;
extern PyObject *const_str_plain_threshold;
extern PyObject *const_str_plain_MethodType;
extern PyObject *const_str_plain___future__;
static PyObject *const_str_plain__dquote_re;
static PyObject *const_str_plain__squote_re;
extern PyObject *const_str_plain_class_name;
extern PyObject *const_str_plain_output_dir;
extern PyObject *const_str_plain_quote_args;
extern PyObject *const_str_plain_splitdrive;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_whitespace;
extern PyObject *const_str_plain__global_log;
extern PyObject *const_str_plain_compiler_so;
extern PyObject *const_str_plain_executables;
extern PyObject *const_str_plain_get_version;
extern PyObject *const_str_plain_is_sequence;
extern PyObject *const_str_plain_method_name;
extern PyObject *const_str_plain_module_name;
extern PyObject *const_str_plain_version_cmd;
static PyObject *const_str_plain_LooseVersion;
static PyObject *const_str_plain__get_cc_args;
extern PyObject *const_str_plain_compiler_cxx;
extern PyObject *const_str_plain_cxx_compiler;
extern PyObject *const_str_plain_define_macro;
extern PyObject *const_str_plain_exec_command;
extern PyObject *const_str_plain_include_dirs;
extern PyObject *const_str_plain_library_dirs;
static PyObject *const_str_plain_link_objects;
extern PyObject *const_str_plain_new_compiler;
extern PyObject *const_str_plain_split_quoted;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain__has_white_re;
static PyObject *const_str_plain__wordchars_re;
extern PyObject *const_str_plain_compiler_type;
extern PyObject *const_str_plain_customize_cmd;
extern PyObject *const_str_plain_extra_preargs;
extern PyObject *const_str_plain_get_exception;
extern PyObject *const_str_plain_obj_extension;
extern PyObject *const_str_plain_object_switch;
static PyObject *const_str_plain_pathccompiler;
extern PyObject *const_str_plain_set_libraries;
static PyObject *const_str_plain_version_match;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_tuple_tuple_empty_tuple;
static PyObject *const_str_plain_IntelCCompiler;
static PyObject *const_str_plain__setup_compile;
extern PyObject *const_str_plain_compile_switch;
extern PyObject *const_str_plain_compiler_class;
extern PyObject *const_str_plain_extra_postargs;
static PyObject *const_str_plain_intelccompiler;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_replace_method;
extern PyObject *const_str_plain_src_extensions;
static PyObject *const_str_plain_undefine_macro;
static PyObject *const_str_plain_version_string;
static PyObject *const_str_plain_CCompiler_spawn;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_gen_lib_options;
extern PyObject *const_str_plain_version_pattern;
extern PyObject *const_tuple_str_plain_log_tuple;
extern PyObject *const_str_plain_Mingw32CCompiler;
extern PyObject *const_str_plain_UnknownFileError;
extern PyObject *const_str_plain_find_executables;
extern PyObject *const_str_plain_long_description;
extern PyObject *const_str_plain_mingw32ccompiler;
extern PyObject *const_str_plain_object_filenames;
static PyObject *const_str_plain_objects_to_build;
static PyObject *const_str_plain_set_include_dirs;
extern PyObject *const_str_plain_set_library_dirs;
static PyObject *const_str_plain_set_link_objects;
extern PyObject *const_str_plain_source_filenames;
extern PyObject *const_tuple_str_plain_attr_tuple;
extern PyObject *const_tuple_str_plain_copy_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain_CCompiler_compile;
extern PyObject *const_tuple_int_0_str_empty_tuple;
extern PyObject *const_str_plain_DistutilsExecError;
static PyObject *const_str_plain_PathScaleCCompiler;
extern PyObject *const_str_plain__default_compilers;
static PyObject *const_str_plain_customize_compiler;
extern PyObject *const_str_plain_show_customization;
static PyObject *const_str_plain_CCompiler_customize;
static PyObject *const_str_plain_IntelEM64TCCompiler;
static PyObject *const_str_plain__compiler_to_string;
extern PyObject *const_str_plain_DistutilsModuleError;
static PyObject *const_str_plain_get_default_compiler;
extern PyObject *const_str_plain_runtime_library_dirs;
static PyObject *const_str_plain_simple_version_match;
extern PyObject *const_tuple_str_plain_compiler_tuple;
static PyObject *const_str_plain_CCompiler_get_version;
static PyObject *const_str_plain_IntelItaniumCCompiler;
static PyObject *const_tuple_str_plain_FCompiler_tuple;
extern PyObject *const_tuple_str_plain_ccompiler_tuple;
static PyObject *const_str_plain_CCompiler_cxx_compiler;
extern PyObject *const_str_plain_DistutilsPlatformError;
extern PyObject *const_str_plain_gen_preprocess_options;
static PyObject *const_str_plain_CCompiler_customize_cmd;
static PyObject *const_str_plain__distutils_new_compiler;
static PyObject *const_str_plain_set_runtime_library_dirs;
static PyObject *const_tuple_str_plain_LooseVersion_tuple;
extern PyObject *const_tuple_str_plain_exec_command_tuple;
extern PyObject *const_tuple_str_plain_get_exception_tuple;
static PyObject *const_str_plain_CCompiler_object_filenames;
static PyObject *const_str_plain__distutils_gen_lib_options;
static PyObject *const_tuple_str_plain_version_string_tuple;
extern PyObject *const_dict_b1a2663050a223bbe4faca09adcc1ea8;
static PyObject *const_str_plain_CCompiler_show_customization;
static PyObject *const_tuple_none_none_int_0_int_0_int_0_tuple;
static PyObject *const_tuple_str_plain_customize_compiler_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_cxx_tuple;
static PyObject *const_tuple_str_plain_nt_str_plain_mingw32_tuple;
static PyObject *const_str_digest_0a124e61b2c618847fb417c2313d1389;
static PyObject *const_str_digest_0acb7bcc91b00ce38fe1acaa53a9497a;
static PyObject *const_str_digest_0b631465326a1e968e8ffa294e7636e5;
static PyObject *const_str_digest_13ef067840e129dcf81714996c5d26ef;
static PyObject *const_str_digest_14605c1b786f9388ed9c45ec7a9b204d;
static PyObject *const_str_digest_156e7189431f3e8f47855f1996978eb4;
extern PyObject *const_str_digest_1f406ccb0ae00805d4f3c6661348da02;
extern PyObject *const_str_digest_1fd876f4d3c80a59f5d80495fbe7531f;
static PyObject *const_str_digest_2246366696bebfe141467cd3274505c0;
static PyObject *const_str_digest_2689ec4348c04e5f79c11e173bc032af;
static PyObject *const_str_digest_315862fea59f59e3bff82dcca158cd76;
static PyObject *const_str_digest_33fa6cd73b05352a59f346f557f0d2f7;
static PyObject *const_str_digest_4186c7e9a403777c921f316f2f292ac1;
extern PyObject *const_str_digest_58b9e70b65a77700ba66e9c64d6b9f89;
static PyObject *const_str_digest_642c4953c10956304ed8030d7d8fd84b;
extern PyObject *const_str_digest_644b1f5211d64ec52727780e74026f6e;
static PyObject *const_str_digest_69ccb7ef78a14aa201ceef70bfaa08ec;
extern PyObject *const_str_digest_6ce809eacf90ba125b40fa4bd903962e;
static PyObject *const_str_digest_74b88a7354b529fa7275e6a033e2860d;
static PyObject *const_str_digest_7539176c408c007a66f14ca5543e73fa;
static PyObject *const_str_digest_7546285d268b38157ff4c787fd251112;
static PyObject *const_str_digest_756fb54f5f36f49e888fe0abaadcbb62;
static PyObject *const_str_digest_75a8101b22051510b18a1d15c97e0ae5;
static PyObject *const_str_digest_7c78e3b01b8ff34c1824145215a87def;
static PyObject *const_str_digest_8139e2e77c3f463770c65fc89cdc2f52;
static PyObject *const_str_digest_839f92c87cbec01c94540bfb3313f8be;
static PyObject *const_str_digest_83ce5d844b3936d6087e41a2ebc9d71f;
extern PyObject *const_str_digest_8acec9b707fb08fa95386d8360c9e9fc;
static PyObject *const_str_digest_8b930df90c5713cf49efd329e536402d;
static PyObject *const_str_digest_8f81fe0bc2abc4ff562db30841aa4cbf;
static PyObject *const_str_digest_8f977d91eeabf4f5bd7c70d08389b6b8;
extern PyObject *const_str_digest_90027b1d66347d1decac561bb6f2be2c;
static PyObject *const_str_digest_9659554a9a9888f14d147bafbd4fdf1d;
static PyObject *const_str_digest_9bc133b4b414e78d0bdf3aef328e1a78;
extern PyObject *const_str_digest_9ee0065fb030b4d6c1f397a7967d740e;
static PyObject *const_str_digest_a7b03f661f02573d7e607d311dc55867;
static PyObject *const_str_digest_aad631fec92179afa4664bb117c27de7;
static PyObject *const_str_digest_ad751c14da9642307e19249fd77f8a27;
static PyObject *const_str_digest_b1277d10781b42009d0a7a27674285f5;
extern PyObject *const_str_digest_b28a3f4d5438b3141e85648c06a2c61a;
static PyObject *const_str_digest_b4ffdddcf7a1599de6b44486c9c2fba3;
static PyObject *const_str_digest_b54874aa45c812755e46502f59e75fb5;
extern PyObject *const_str_digest_c093ffbc531047f3f58d3349fa58e0f7;
extern PyObject *const_str_digest_c0ab1120b239d942b77d52b1ebe617bb;
extern PyObject *const_str_digest_c0fff8163aabf90b654f2f3ba03fe760;
static PyObject *const_str_digest_c59e88920cb108f5cb78387c0dc8bc05;
static PyObject *const_str_digest_c7634b0d3b2e6f96b8daeb5b3fe65b43;
extern PyObject *const_str_digest_cc3f9be4b24741259966d1e00234095c;
static PyObject *const_str_digest_d09f5b2ad48fa26b7d952d02eab5ccde;
static PyObject *const_str_digest_d1401730c17fac674c5c2d7ff8a351f4;
static PyObject *const_str_digest_d54430dcda2423281c62396ed3f6ff62;
static PyObject *const_str_digest_dcdac4fb47dcedffe1b3fe5feb42051b;
static PyObject *const_str_digest_defca75cd144439f66f2e870b8f36c71;
static PyObject *const_str_digest_e4d68f89a0c82383cc50819b85e38905;
static PyObject *const_str_digest_e749133856208e9f02a20fee3761e9e8;
static PyObject *const_str_digest_e7c1c39a27def49fc1a65a20f55d85be;
extern PyObject *const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1;
extern PyObject *const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc;
static PyObject *const_str_digest_f3f443cfe5d6b57bf7e5ac67170d74ec;
static PyObject *const_str_digest_f4aba597ac19660d644818535d81c0f9;
static PyObject *const_str_digest_f5481b113e8cb5dd2d8d5d30ab3e0ae8;
static PyObject *const_str_plain__distutils_gen_preprocess_options;
static PyObject *const_tuple_06a860a789f105b8b1713ba26e8c9255_tuple;
static PyObject *const_tuple_0ad137b8cda362046401e5ae22e44422_tuple;
static PyObject *const_tuple_262a675ebf90ead5864f41217f9b5710_tuple;
extern PyObject *const_tuple_2a35063b865b1125ac03b149e89b5bd7_tuple;
static PyObject *const_tuple_33cbe077bb71a25db237f0b0347a72c2_tuple;
static PyObject *const_tuple_39130cd9de230c6101d251edda7bd1e2_tuple;
static PyObject *const_tuple_3a6285201c0e01a884762b88e2ee78a5_tuple;
static PyObject *const_tuple_421b8db525d151d70257415453c21a10_tuple;
static PyObject *const_tuple_62592a2964d8aafd0d4e2191579c78f2_tuple;
static PyObject *const_tuple_6588a1b4d86e93aedda8aa7be52b487e_tuple;
static PyObject *const_tuple_699ad37c0c246d112a75919bc3f7a1fb_tuple;
static PyObject *const_tuple_69a8004e24b83e736347e4b2e789448d_tuple;
static PyObject *const_tuple_6fe443234cf2c456d2bccce7463d1e98_tuple;
static PyObject *const_tuple_784d89085a69e83fc1cf1c198c8c0d56_tuple;
static PyObject *const_tuple_7c277a7d04eb1ad7d299f9b7ceb6cdc4_tuple;
static PyObject *const_tuple_807249008b8e18d1f6bab125cf7c3d85_tuple;
static PyObject *const_tuple_91ad9508e574e38e67011733ae2d8033_tuple;
static PyObject *const_tuple_943b1b693fa019ddab6bc94fe1d12f1c_tuple;
static PyObject *const_tuple_a08553a40a5b469c5d1e8e2e2f266ad4_tuple;
static PyObject *const_tuple_ad14f9d5da6054a779b47b667867241f_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_b618115106008a738aee226beaf7f074_tuple;
static PyObject *const_tuple_bb03945c83f1bb8146c768bd1bdc6d0e_tuple;
static PyObject *const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple;
static PyObject *const_tuple_cd50ba7c7cc1b85dba59c5dbb1b3f98e_tuple;
static PyObject *const_tuple_eb8f16c36c8b60fd5d95b0620e3bcaa5_tuple;
static PyObject *const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple;
static PyObject *const_tuple_f1813ad9d6f339414f3aec0f95791057_tuple;
static PyObject *const_tuple_f3a3cc2bb57641ea01abf2b5ee1b59ba_tuple;
static PyObject *const_tuple_f97c671979b9d677cda717a459069b04_tuple;
static PyObject *const_tuple_fce77df4ef2a4acb5fb81d3b3741bc4d_tuple;
static PyObject *const_tuple_none_none_none_int_0_none_none_none_tuple;
static PyObject *const_tuple_str_plain_macros_str_plain_include_dirs_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_version_string_tuple;
static PyObject *const_tuple_str_plain_f77_str_plain_f90_str_plain_fix_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple;
static PyObject *const_tuple_tuple_str_plain_nt_str_plain_mingw32_tuple_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_cmd_str_plain_ignore_tuple;
static PyObject *const_tuple_str_plain_pat_str_plain_ignore_str_plain_start_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_cmd_str_plain_display_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_attrname_str_plain_attr_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_dist_str_plain_need_cxx_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_force_str_plain_ok_status_tuple;
static PyObject *const_tuple_str_plain_klass_str_plain_method_name_str_plain_func_tuple;
static PyObject *const_tuple_str_plain_cc_str_digest_6ce809eacf90ba125b40fa4bd903962e_tuple;
static PyObject *const_tuple_str_plain_gcc_str_digest_644b1f5211d64ec52727780e74026f6e_tuple;
static PyObject *const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_intel_tuple;
static PyObject *const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_intele_tuple;
static PyObject *const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_pathcc_tuple;

static void _initModuleConstants(void)
{
    const_str_plain__cc = UNSTREAM_STRING( &constant_bin[ 80482 ], 3, 1 );
    const_str_plain_beg = UNSTREAM_STRING( &constant_bin[ 83812 ], 3, 1 );
    const_str_plain_cxx = UNSTREAM_STRING( &constant_bin[ 80281 ], 3, 1 );
    const_str_plain_bcpp = UNSTREAM_STRING( &constant_bin[ 889612 ], 4, 1 );
    const_str_plain_emxc = UNSTREAM_STRING( &constant_bin[ 889616 ], 4, 1 );
    const_str_plain_allow = UNSTREAM_STRING( &constant_bin[ 27369 ], 5, 1 );
    const_str_plain_fcomp = UNSTREAM_STRING( &constant_bin[ 85272 ], 5, 1 );
    const_str_plain_macro = UNSTREAM_STRING( &constant_bin[ 81260 ], 5, 1 );
    const_str_plain_unixc = UNSTREAM_STRING( &constant_bin[ 889620 ], 5, 1 );
    const_str_plain_absoft = UNSTREAM_STRING( &constant_bin[ 889625 ], 6, 1 );
    const_str_plain_define = UNSTREAM_STRING( &constant_bin[ 175 ], 6, 1 );
    const_str_plain_intele = UNSTREAM_STRING( &constant_bin[ 889631 ], 6, 1 );
    const_str_plain_pathcc = UNSTREAM_STRING( &constant_bin[ 889637 ], 6, 1 );
    const_str_plain_cygwinc = UNSTREAM_STRING( &constant_bin[ 889643 ], 7, 1 );
    const_str_plain_intelem = UNSTREAM_STRING( &constant_bin[ 889650 ], 7, 1 );
    const_str_plain_matcher = UNSTREAM_STRING( &constant_bin[ 82639 ], 7, 1 );
    const_str_plain_obj_name = UNSTREAM_STRING( &constant_bin[ 81152 ], 8, 1 );
    const_str_plain_compiler_ = UNSTREAM_STRING( &constant_bin[ 80315 ], 9, 1 );
    const_str_plain__dquote_re = UNSTREAM_STRING( &constant_bin[ 83728 ], 10, 1 );
    const_str_plain__squote_re = UNSTREAM_STRING( &constant_bin[ 83689 ], 10, 1 );
    const_str_plain_LooseVersion = UNSTREAM_STRING( &constant_bin[ 82741 ], 12, 1 );
    const_str_plain__get_cc_args = UNSTREAM_STRING( &constant_bin[ 889657 ], 12, 1 );
    const_str_plain_link_objects = UNSTREAM_STRING( &constant_bin[ 889669 ], 12, 1 );
    const_str_plain__has_white_re = UNSTREAM_STRING( &constant_bin[ 83767 ], 13, 1 );
    const_str_plain__wordchars_re = UNSTREAM_STRING( &constant_bin[ 83647 ], 13, 1 );
    const_str_plain_pathccompiler = UNSTREAM_STRING( &constant_bin[ 889681 ], 13, 1 );
    const_str_plain_version_match = UNSTREAM_STRING( &constant_bin[ 889694 ], 13, 1 );
    const_str_plain_IntelCCompiler = UNSTREAM_STRING( &constant_bin[ 889707 ], 14, 1 );
    const_str_plain__setup_compile = UNSTREAM_STRING( &constant_bin[ 889721 ], 14, 1 );
    const_str_plain_intelccompiler = UNSTREAM_STRING( &constant_bin[ 889735 ], 14, 1 );
    const_str_plain_undefine_macro = UNSTREAM_STRING( &constant_bin[ 889749 ], 14, 1 );
    const_str_plain_version_string = UNSTREAM_STRING( &constant_bin[ 82315 ], 14, 1 );
    const_str_plain_CCompiler_spawn = UNSTREAM_STRING( &constant_bin[ 79968 ], 15, 1 );
    const_str_plain_objects_to_build = UNSTREAM_STRING( &constant_bin[ 81805 ], 16, 1 );
    const_str_plain_set_include_dirs = UNSTREAM_STRING( &constant_bin[ 889763 ], 16, 1 );
    const_str_plain_set_link_objects = UNSTREAM_STRING( &constant_bin[ 889779 ], 16, 1 );
    const_str_plain_CCompiler_compile = UNSTREAM_STRING( &constant_bin[ 80053 ], 17, 1 );
    const_str_plain_PathScaleCCompiler = UNSTREAM_STRING( &constant_bin[ 889795 ], 18, 1 );
    const_str_plain_customize_compiler = UNSTREAM_STRING( &constant_bin[ 82211 ], 18, 1 );
    const_str_plain_CCompiler_customize = UNSTREAM_STRING( &constant_bin[ 80092 ], 19, 1 );
    const_str_plain_IntelEM64TCCompiler = UNSTREAM_STRING( &constant_bin[ 889813 ], 19, 1 );
    const_str_plain__compiler_to_string = UNSTREAM_STRING( &constant_bin[ 82163 ], 19, 1 );
    const_str_plain_get_default_compiler = UNSTREAM_STRING( &constant_bin[ 82914 ], 20, 1 );
    const_str_plain_simple_version_match = UNSTREAM_STRING( &constant_bin[ 889832 ], 20, 1 );
    const_str_plain_CCompiler_get_version = UNSTREAM_STRING( &constant_bin[ 80228 ], 21, 1 );
    const_str_plain_IntelItaniumCCompiler = UNSTREAM_STRING( &constant_bin[ 889852 ], 21, 1 );
    const_tuple_str_plain_FCompiler_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FCompiler_tuple, 0, const_str_plain_FCompiler ); Py_INCREF( const_str_plain_FCompiler );
    const_str_plain_CCompiler_cxx_compiler = UNSTREAM_STRING( &constant_bin[ 80271 ], 22, 1 );
    const_str_plain_CCompiler_customize_cmd = UNSTREAM_STRING( &constant_bin[ 80092 ], 23, 1 );
    const_str_plain__distutils_new_compiler = UNSTREAM_STRING( &constant_bin[ 889873 ], 23, 1 );
    const_str_plain_set_runtime_library_dirs = UNSTREAM_STRING( &constant_bin[ 889896 ], 24, 1 );
    const_tuple_str_plain_LooseVersion_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LooseVersion_tuple, 0, const_str_plain_LooseVersion ); Py_INCREF( const_str_plain_LooseVersion );
    const_str_plain_CCompiler_object_filenames = UNSTREAM_STRING( &constant_bin[ 80005 ], 26, 1 );
    const_str_plain__distutils_gen_lib_options = UNSTREAM_STRING( &constant_bin[ 83421 ], 26, 1 );
    const_tuple_str_plain_version_string_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_version_string_tuple, 0, const_str_plain_version_string ); Py_INCREF( const_str_plain_version_string );
    const_str_plain_CCompiler_show_customization = UNSTREAM_STRING( &constant_bin[ 80137 ], 28, 1 );
    const_tuple_none_none_int_0_int_0_int_0_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_int_0_int_0_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_int_0_int_0_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_int_0_int_0_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_int_0_int_0_tuple, 3, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_int_0_int_0_tuple, 4, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_str_plain_customize_compiler_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_customize_compiler_tuple, 0, const_str_plain_customize_compiler ); Py_INCREF( const_str_plain_customize_compiler );
    const_tuple_str_plain_self_str_plain_cxx_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cxx_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cxx_tuple, 1, const_str_plain_cxx ); Py_INCREF( const_str_plain_cxx );
    const_tuple_str_plain_nt_str_plain_mingw32_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_nt_str_plain_mingw32_tuple, 0, const_str_plain_nt ); Py_INCREF( const_str_plain_nt );
    PyTuple_SET_ITEM( const_tuple_str_plain_nt_str_plain_mingw32_tuple, 1, const_str_plain_mingw32 ); Py_INCREF( const_str_plain_mingw32 );
    const_str_digest_0a124e61b2c618847fb417c2313d1389 = UNSTREAM_STRING( &constant_bin[ 889920 ], 10, 0 );
    const_str_digest_0acb7bcc91b00ce38fe1acaa53a9497a = UNSTREAM_STRING( &constant_bin[ 889930 ], 52, 0 );
    const_str_digest_0b631465326a1e968e8ffa294e7636e5 = UNSTREAM_STRING( &constant_bin[ 889982 ], 55, 0 );
    const_str_digest_13ef067840e129dcf81714996c5d26ef = UNSTREAM_STRING( &constant_bin[ 890037 ], 19, 0 );
    const_str_digest_14605c1b786f9388ed9c45ec7a9b204d = UNSTREAM_STRING( &constant_bin[ 890056 ], 15, 0 );
    const_str_digest_156e7189431f3e8f47855f1996978eb4 = UNSTREAM_STRING( &constant_bin[ 890071 ], 19, 0 );
    const_str_digest_2246366696bebfe141467cd3274505c0 = UNSTREAM_STRING( &constant_bin[ 890090 ], 53, 0 );
    const_str_digest_2689ec4348c04e5f79c11e173bc032af = UNSTREAM_STRING( &constant_bin[ 890143 ], 41, 0 );
    const_str_digest_315862fea59f59e3bff82dcca158cd76 = UNSTREAM_STRING( &constant_bin[ 890184 ], 645, 0 );
    const_str_digest_33fa6cd73b05352a59f346f557f0d2f7 = UNSTREAM_STRING( &constant_bin[ 890829 ], 853, 0 );
    const_str_digest_4186c7e9a403777c921f316f2f292ac1 = UNSTREAM_STRING( &constant_bin[ 891682 ], 215, 0 );
    const_str_digest_642c4953c10956304ed8030d7d8fd84b = UNSTREAM_STRING( &constant_bin[ 891897 ], 40, 0 );
    const_str_digest_69ccb7ef78a14aa201ceef70bfaa08ec = UNSTREAM_STRING( &constant_bin[ 891937 ], 19, 0 );
    const_str_digest_74b88a7354b529fa7275e6a033e2860d = UNSTREAM_STRING( &constant_bin[ 891956 ], 15, 0 );
    const_str_digest_7539176c408c007a66f14ca5543e73fa = UNSTREAM_STRING( &constant_bin[ 891971 ], 431, 0 );
    const_str_digest_7546285d268b38157ff4c787fd251112 = UNSTREAM_STRING( &constant_bin[ 892402 ], 40, 0 );
    const_str_digest_756fb54f5f36f49e888fe0abaadcbb62 = UNSTREAM_STRING( &constant_bin[ 892442 ], 21, 0 );
    const_str_digest_75a8101b22051510b18a1d15c97e0ae5 = UNSTREAM_STRING( &constant_bin[ 892463 ], 2, 0 );
    const_str_digest_7c78e3b01b8ff34c1824145215a87def = UNSTREAM_STRING( &constant_bin[ 892465 ], 961, 0 );
    const_str_digest_8139e2e77c3f463770c65fc89cdc2f52 = UNSTREAM_STRING( &constant_bin[ 893426 ], 80, 0 );
    const_str_digest_839f92c87cbec01c94540bfb3313f8be = UNSTREAM_STRING( &constant_bin[ 893506 ], 61, 0 );
    const_str_digest_83ce5d844b3936d6087e41a2ebc9d71f = UNSTREAM_STRING( &constant_bin[ 893567 ], 50, 0 );
    const_str_digest_8b930df90c5713cf49efd329e536402d = UNSTREAM_STRING( &constant_bin[ 893617 ], 734, 0 );
    const_str_digest_8f81fe0bc2abc4ff562db30841aa4cbf = UNSTREAM_STRING( &constant_bin[ 894351 ], 34, 0 );
    const_str_digest_8f977d91eeabf4f5bd7c70d08389b6b8 = UNSTREAM_STRING( &constant_bin[ 894385 ], 33, 0 );
    const_str_digest_9659554a9a9888f14d147bafbd4fdf1d = UNSTREAM_STRING( &constant_bin[ 894418 ], 877, 0 );
    const_str_digest_9bc133b4b414e78d0bdf3aef328e1a78 = UNSTREAM_STRING( &constant_bin[ 891039 ], 7, 0 );
    const_str_digest_a7b03f661f02573d7e607d311dc55867 = UNSTREAM_STRING( &constant_bin[ 895295 ], 7, 0 );
    const_str_digest_aad631fec92179afa4664bb117c27de7 = UNSTREAM_STRING( &constant_bin[ 895302 ], 21, 0 );
    const_str_digest_ad751c14da9642307e19249fd77f8a27 = UNSTREAM_STRING( &constant_bin[ 895323 ], 483, 0 );
    const_str_digest_b1277d10781b42009d0a7a27674285f5 = UNSTREAM_STRING( &constant_bin[ 895806 ], 17, 0 );
    const_str_digest_b4ffdddcf7a1599de6b44486c9c2fba3 = UNSTREAM_STRING( &constant_bin[ 895823 ], 20, 0 );
    const_str_digest_b54874aa45c812755e46502f59e75fb5 = UNSTREAM_STRING( &constant_bin[ 895843 ], 50, 0 );
    const_str_digest_c59e88920cb108f5cb78387c0dc8bc05 = UNSTREAM_STRING( &constant_bin[ 895893 ], 66, 0 );
    const_str_digest_c7634b0d3b2e6f96b8daeb5b3fe65b43 = UNSTREAM_STRING( &constant_bin[ 895959 ], 13, 0 );
    const_str_digest_d09f5b2ad48fa26b7d952d02eab5ccde = UNSTREAM_STRING( &constant_bin[ 895972 ], 17, 0 );
    const_str_digest_d1401730c17fac674c5c2d7ff8a351f4 = UNSTREAM_STRING( &constant_bin[ 895989 ], 29, 0 );
    const_str_digest_d54430dcda2423281c62396ed3f6ff62 = UNSTREAM_STRING( &constant_bin[ 896018 ], 23, 0 );
    const_str_digest_dcdac4fb47dcedffe1b3fe5feb42051b = UNSTREAM_STRING( &constant_bin[ 374389 ], 2, 0 );
    const_str_digest_defca75cd144439f66f2e870b8f36c71 = UNSTREAM_STRING( &constant_bin[ 896041 ], 178, 0 );
    const_str_digest_e4d68f89a0c82383cc50819b85e38905 = UNSTREAM_STRING( &constant_bin[ 896219 ], 44, 0 );
    const_str_digest_e749133856208e9f02a20fee3761e9e8 = UNSTREAM_STRING( &constant_bin[ 896263 ], 23, 0 );
    const_str_digest_e7c1c39a27def49fc1a65a20f55d85be = UNSTREAM_STRING( &constant_bin[ 896286 ], 43, 0 );
    const_str_digest_f3f443cfe5d6b57bf7e5ac67170d74ec = UNSTREAM_STRING( &constant_bin[ 896329 ], 62, 0 );
    const_str_digest_f4aba597ac19660d644818535d81c0f9 = UNSTREAM_STRING( &constant_bin[ 896391 ], 16, 0 );
    const_str_digest_f5481b113e8cb5dd2d8d5d30ab3e0ae8 = UNSTREAM_STRING( &constant_bin[ 436097 ], 6, 0 );
    const_str_plain__distutils_gen_preprocess_options = UNSTREAM_STRING( &constant_bin[ 83585 ], 33, 1 );
    const_tuple_06a860a789f105b8b1713ba26e8c9255_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_06a860a789f105b8b1713ba26e8c9255_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_06a860a789f105b8b1713ba26e8c9255_tuple, 1, const_str_plain_sources ); Py_INCREF( const_str_plain_sources );
    PyTuple_SET_ITEM( const_tuple_06a860a789f105b8b1713ba26e8c9255_tuple, 2, const_str_plain_output_dir ); Py_INCREF( const_str_plain_output_dir );
    PyTuple_SET_ITEM( const_tuple_06a860a789f105b8b1713ba26e8c9255_tuple, 3, const_str_plain_macros ); Py_INCREF( const_str_plain_macros );
    PyTuple_SET_ITEM( const_tuple_06a860a789f105b8b1713ba26e8c9255_tuple, 4, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_06a860a789f105b8b1713ba26e8c9255_tuple, 5, const_str_plain_debug ); Py_INCREF( const_str_plain_debug );
    PyTuple_SET_ITEM( const_tuple_06a860a789f105b8b1713ba26e8c9255_tuple, 6, const_str_plain_extra_preargs ); Py_INCREF( const_str_plain_extra_preargs );
    PyTuple_SET_ITEM( const_tuple_06a860a789f105b8b1713ba26e8c9255_tuple, 7, const_str_plain_extra_postargs ); Py_INCREF( const_str_plain_extra_postargs );
    PyTuple_SET_ITEM( const_tuple_06a860a789f105b8b1713ba26e8c9255_tuple, 8, const_str_plain_depends ); Py_INCREF( const_str_plain_depends );
    const_tuple_0ad137b8cda362046401e5ae22e44422_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_0ad137b8cda362046401e5ae22e44422_tuple, 0, const_str_plain_compiler ); Py_INCREF( const_str_plain_compiler );
    PyTuple_SET_ITEM( const_tuple_0ad137b8cda362046401e5ae22e44422_tuple, 1, const_str_plain_props ); Py_INCREF( const_str_plain_props );
    PyTuple_SET_ITEM( const_tuple_0ad137b8cda362046401e5ae22e44422_tuple, 2, const_str_plain_mx ); Py_INCREF( const_str_plain_mx );
    PyTuple_SET_ITEM( const_tuple_0ad137b8cda362046401e5ae22e44422_tuple, 3, const_str_plain_keys ); Py_INCREF( const_str_plain_keys );
    PyTuple_SET_ITEM( const_tuple_0ad137b8cda362046401e5ae22e44422_tuple, 4, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_0ad137b8cda362046401e5ae22e44422_tuple, 5, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_0ad137b8cda362046401e5ae22e44422_tuple, 6, const_str_plain_lines ); Py_INCREF( const_str_plain_lines );
    PyTuple_SET_ITEM( const_tuple_0ad137b8cda362046401e5ae22e44422_tuple, 7, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_0ad137b8cda362046401e5ae22e44422_tuple, 8, const_str_plain_prop ); Py_INCREF( const_str_plain_prop );
    const_tuple_262a675ebf90ead5864f41217f9b5710_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_262a675ebf90ead5864f41217f9b5710_tuple, 0, const_str_plain_version_string ); Py_INCREF( const_str_plain_version_string );
    PyTuple_SET_ITEM( const_tuple_262a675ebf90ead5864f41217f9b5710_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_262a675ebf90ead5864f41217f9b5710_tuple, 2, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_262a675ebf90ead5864f41217f9b5710_tuple, 3, const_str_plain_pat ); Py_INCREF( const_str_plain_pat );
    const_tuple_33cbe077bb71a25db237f0b0347a72c2_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_33cbe077bb71a25db237f0b0347a72c2_tuple, 0, const_str_plain_mingw32ccompiler ); Py_INCREF( const_str_plain_mingw32ccompiler );
    PyTuple_SET_ITEM( const_tuple_33cbe077bb71a25db237f0b0347a72c2_tuple, 1, const_str_plain_Mingw32CCompiler ); Py_INCREF( const_str_plain_Mingw32CCompiler );
    PyTuple_SET_ITEM( const_tuple_33cbe077bb71a25db237f0b0347a72c2_tuple, 2, const_str_digest_f3f443cfe5d6b57bf7e5ac67170d74ec ); Py_INCREF( const_str_digest_f3f443cfe5d6b57bf7e5ac67170d74ec );
    const_tuple_39130cd9de230c6101d251edda7bd1e2_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_39130cd9de230c6101d251edda7bd1e2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_39130cd9de230c6101d251edda7bd1e2_tuple, 1, const_str_plain_cmd ); Py_INCREF( const_str_plain_cmd );
    PyTuple_SET_ITEM( const_tuple_39130cd9de230c6101d251edda7bd1e2_tuple, 2, const_str_plain_ignore ); Py_INCREF( const_str_plain_ignore );
    PyTuple_SET_ITEM( const_tuple_39130cd9de230c6101d251edda7bd1e2_tuple, 3, const_str_plain_allow ); Py_INCREF( const_str_plain_allow );
    PyTuple_SET_ITEM( const_tuple_39130cd9de230c6101d251edda7bd1e2_tuple, 4, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_39130cd9de230c6101d251edda7bd1e2_tuple, 5, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_39130cd9de230c6101d251edda7bd1e2_tuple, 6, const_str_plain_macro ); Py_INCREF( const_str_plain_macro );
    const_tuple_3a6285201c0e01a884762b88e2ee78a5_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_3a6285201c0e01a884762b88e2ee78a5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3a6285201c0e01a884762b88e2ee78a5_tuple, 1, const_str_plain_force ); Py_INCREF( const_str_plain_force );
    PyTuple_SET_ITEM( const_tuple_3a6285201c0e01a884762b88e2ee78a5_tuple, 2, const_str_plain_ok_status ); Py_INCREF( const_str_plain_ok_status );
    PyTuple_SET_ITEM( const_tuple_3a6285201c0e01a884762b88e2ee78a5_tuple, 3, const_str_plain_version_cmd ); Py_INCREF( const_str_plain_version_cmd );
    PyTuple_SET_ITEM( const_tuple_3a6285201c0e01a884762b88e2ee78a5_tuple, 4, const_str_plain_matcher ); Py_INCREF( const_str_plain_matcher );
    PyTuple_SET_ITEM( const_tuple_3a6285201c0e01a884762b88e2ee78a5_tuple, 5, const_str_plain_pat ); Py_INCREF( const_str_plain_pat );
    PyTuple_SET_ITEM( const_tuple_3a6285201c0e01a884762b88e2ee78a5_tuple, 6, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_3a6285201c0e01a884762b88e2ee78a5_tuple, 7, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    PyTuple_SET_ITEM( const_tuple_3a6285201c0e01a884762b88e2ee78a5_tuple, 8, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    const_tuple_421b8db525d151d70257415453c21a10_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_421b8db525d151d70257415453c21a10_tuple, 0, const_str_plain_cyg2win32 ); Py_INCREF( const_str_plain_cyg2win32 );
    PyTuple_SET_ITEM( const_tuple_421b8db525d151d70257415453c21a10_tuple, 1, const_str_plain_is_sequence ); Py_INCREF( const_str_plain_is_sequence );
    PyTuple_SET_ITEM( const_tuple_421b8db525d151d70257415453c21a10_tuple, 2, const_str_plain_mingw32 ); Py_INCREF( const_str_plain_mingw32 );
    PyTuple_SET_ITEM( const_tuple_421b8db525d151d70257415453c21a10_tuple, 3, const_str_plain_quote_args ); Py_INCREF( const_str_plain_quote_args );
    const_tuple_62592a2964d8aafd0d4e2191579c78f2_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_62592a2964d8aafd0d4e2191579c78f2_tuple, 0, const_str_plain_intelccompiler ); Py_INCREF( const_str_plain_intelccompiler );
    PyTuple_SET_ITEM( const_tuple_62592a2964d8aafd0d4e2191579c78f2_tuple, 1, const_str_plain_IntelEM64TCCompiler ); Py_INCREF( const_str_plain_IntelEM64TCCompiler );
    PyTuple_SET_ITEM( const_tuple_62592a2964d8aafd0d4e2191579c78f2_tuple, 2, const_str_digest_7546285d268b38157ff4c787fd251112 ); Py_INCREF( const_str_digest_7546285d268b38157ff4c787fd251112 );
    const_tuple_6588a1b4d86e93aedda8aa7be52b487e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_6588a1b4d86e93aedda8aa7be52b487e_tuple, 0, const_str_plain_pat ); Py_INCREF( const_str_plain_pat );
    PyTuple_SET_ITEM( const_tuple_6588a1b4d86e93aedda8aa7be52b487e_tuple, 1, const_str_plain_ignore ); Py_INCREF( const_str_plain_ignore );
    PyTuple_SET_ITEM( const_tuple_6588a1b4d86e93aedda8aa7be52b487e_tuple, 2, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_6588a1b4d86e93aedda8aa7be52b487e_tuple, 3, const_str_plain_matcher ); Py_INCREF( const_str_plain_matcher );
    const_tuple_699ad37c0c246d112a75919bc3f7a1fb_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_699ad37c0c246d112a75919bc3f7a1fb_tuple, 0, const_str_digest_9bc133b4b414e78d0bdf3aef328e1a78 ); Py_INCREF( const_str_digest_9bc133b4b414e78d0bdf3aef328e1a78 );
    PyTuple_SET_ITEM( const_tuple_699ad37c0c246d112a75919bc3f7a1fb_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    PyTuple_SET_ITEM( const_tuple_699ad37c0c246d112a75919bc3f7a1fb_tuple, 2, const_str_empty ); Py_INCREF( const_str_empty );
    const_tuple_69a8004e24b83e736347e4b2e789448d_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_69a8004e24b83e736347e4b2e789448d_tuple, 0, const_str_digest_a7b03f661f02573d7e607d311dc55867 ); Py_INCREF( const_str_digest_a7b03f661f02573d7e607d311dc55867 );
    PyTuple_SET_ITEM( const_tuple_69a8004e24b83e736347e4b2e789448d_tuple, 1, const_str_plain_intelem ); Py_INCREF( const_str_plain_intelem );
    const_tuple_6fe443234cf2c456d2bccce7463d1e98_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_6fe443234cf2c456d2bccce7463d1e98_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6fe443234cf2c456d2bccce7463d1e98_tuple, 1, const_str_plain_version_string ); Py_INCREF( const_str_plain_version_string );
    PyTuple_SET_ITEM( const_tuple_6fe443234cf2c456d2bccce7463d1e98_tuple, 2, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    PyTuple_SET_ITEM( const_tuple_6fe443234cf2c456d2bccce7463d1e98_tuple, 3, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_tuple_784d89085a69e83fc1cf1c198c8c0d56_tuple = PyTuple_New( 4 );
    const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_intel_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_intel_tuple, 0, const_str_digest_a7b03f661f02573d7e607d311dc55867 ); Py_INCREF( const_str_digest_a7b03f661f02573d7e607d311dc55867 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_intel_tuple, 1, const_str_plain_intel ); Py_INCREF( const_str_plain_intel );
    PyTuple_SET_ITEM( const_tuple_784d89085a69e83fc1cf1c198c8c0d56_tuple, 0, const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_intel_tuple ); Py_INCREF( const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_intel_tuple );
    const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_intele_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_intele_tuple, 0, const_str_digest_a7b03f661f02573d7e607d311dc55867 ); Py_INCREF( const_str_digest_a7b03f661f02573d7e607d311dc55867 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_intele_tuple, 1, const_str_plain_intele ); Py_INCREF( const_str_plain_intele );
    PyTuple_SET_ITEM( const_tuple_784d89085a69e83fc1cf1c198c8c0d56_tuple, 1, const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_intele_tuple ); Py_INCREF( const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_intele_tuple );
    PyTuple_SET_ITEM( const_tuple_784d89085a69e83fc1cf1c198c8c0d56_tuple, 2, const_tuple_69a8004e24b83e736347e4b2e789448d_tuple ); Py_INCREF( const_tuple_69a8004e24b83e736347e4b2e789448d_tuple );
    const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_pathcc_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_pathcc_tuple, 0, const_str_digest_a7b03f661f02573d7e607d311dc55867 ); Py_INCREF( const_str_digest_a7b03f661f02573d7e607d311dc55867 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_pathcc_tuple, 1, const_str_plain_pathcc ); Py_INCREF( const_str_plain_pathcc );
    PyTuple_SET_ITEM( const_tuple_784d89085a69e83fc1cf1c198c8c0d56_tuple, 3, const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_pathcc_tuple ); Py_INCREF( const_tuple_str_digest_a7b03f661f02573d7e607d311dc55867_str_plain_pathcc_tuple );
    const_tuple_7c277a7d04eb1ad7d299f9b7ceb6cdc4_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 896407 ], 272 );
    const_tuple_807249008b8e18d1f6bab125cf7c3d85_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_807249008b8e18d1f6bab125cf7c3d85_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_807249008b8e18d1f6bab125cf7c3d85_tuple, 1, const_str_plain_words ); Py_INCREF( const_str_plain_words );
    PyTuple_SET_ITEM( const_tuple_807249008b8e18d1f6bab125cf7c3d85_tuple, 2, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    PyTuple_SET_ITEM( const_tuple_807249008b8e18d1f6bab125cf7c3d85_tuple, 3, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_807249008b8e18d1f6bab125cf7c3d85_tuple, 4, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    PyTuple_SET_ITEM( const_tuple_807249008b8e18d1f6bab125cf7c3d85_tuple, 5, const_str_plain_beg ); Py_INCREF( const_str_plain_beg );
    const_tuple_91ad9508e574e38e67011733ae2d8033_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_91ad9508e574e38e67011733ae2d8033_tuple, 0, const_str_plain_msvc ); Py_INCREF( const_str_plain_msvc );
    PyTuple_SET_ITEM( const_tuple_91ad9508e574e38e67011733ae2d8033_tuple, 1, const_str_plain_bcpp ); Py_INCREF( const_str_plain_bcpp );
    PyTuple_SET_ITEM( const_tuple_91ad9508e574e38e67011733ae2d8033_tuple, 2, const_str_plain_cygwinc ); Py_INCREF( const_str_plain_cygwinc );
    PyTuple_SET_ITEM( const_tuple_91ad9508e574e38e67011733ae2d8033_tuple, 3, const_str_plain_emxc ); Py_INCREF( const_str_plain_emxc );
    PyTuple_SET_ITEM( const_tuple_91ad9508e574e38e67011733ae2d8033_tuple, 4, const_str_plain_unixc ); Py_INCREF( const_str_plain_unixc );
    const_tuple_943b1b693fa019ddab6bc94fe1d12f1c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_943b1b693fa019ddab6bc94fe1d12f1c_tuple, 0, const_str_plain_plat ); Py_INCREF( const_str_plain_plat );
    PyTuple_SET_ITEM( const_tuple_943b1b693fa019ddab6bc94fe1d12f1c_tuple, 1, const_str_plain_compiler ); Py_INCREF( const_str_plain_compiler );
    PyTuple_SET_ITEM( const_tuple_943b1b693fa019ddab6bc94fe1d12f1c_tuple, 2, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_943b1b693fa019ddab6bc94fe1d12f1c_tuple, 3, const_str_plain_dry_run ); Py_INCREF( const_str_plain_dry_run );
    PyTuple_SET_ITEM( const_tuple_943b1b693fa019ddab6bc94fe1d12f1c_tuple, 4, const_str_plain_force ); Py_INCREF( const_str_plain_force );
    const_tuple_a08553a40a5b469c5d1e8e2e2f266ad4_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_a08553a40a5b469c5d1e8e2e2f266ad4_tuple, 0, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_a08553a40a5b469c5d1e8e2e2f266ad4_tuple, 1, const_str_plain_libraries ); Py_INCREF( const_str_plain_libraries );
    PyTuple_SET_ITEM( const_tuple_a08553a40a5b469c5d1e8e2e2f266ad4_tuple, 2, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_a08553a40a5b469c5d1e8e2e2f266ad4_tuple, 3, const_str_plain_object_switch ); Py_INCREF( const_str_plain_object_switch );
    PyTuple_SET_ITEM( const_tuple_a08553a40a5b469c5d1e8e2e2f266ad4_tuple, 4, const_str_plain_compile_switch ); Py_INCREF( const_str_plain_compile_switch );
    PyTuple_SET_ITEM( const_tuple_a08553a40a5b469c5d1e8e2e2f266ad4_tuple, 5, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    PyTuple_SET_ITEM( const_tuple_a08553a40a5b469c5d1e8e2e2f266ad4_tuple, 6, const_str_plain_define ); Py_INCREF( const_str_plain_define );
    PyTuple_SET_ITEM( const_tuple_a08553a40a5b469c5d1e8e2e2f266ad4_tuple, 7, const_str_plain_undef ); Py_INCREF( const_str_plain_undef );
    PyTuple_SET_ITEM( const_tuple_a08553a40a5b469c5d1e8e2e2f266ad4_tuple, 8, const_str_plain_rpath ); Py_INCREF( const_str_plain_rpath );
    PyTuple_SET_ITEM( const_tuple_a08553a40a5b469c5d1e8e2e2f266ad4_tuple, 9, const_str_plain_link_objects ); Py_INCREF( const_str_plain_link_objects );
    const_tuple_ad14f9d5da6054a779b47b667867241f_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_ad14f9d5da6054a779b47b667867241f_tuple, 0, const_str_plain_intelccompiler ); Py_INCREF( const_str_plain_intelccompiler );
    PyTuple_SET_ITEM( const_tuple_ad14f9d5da6054a779b47b667867241f_tuple, 1, const_str_plain_IntelCCompiler ); Py_INCREF( const_str_plain_IntelCCompiler );
    PyTuple_SET_ITEM( const_tuple_ad14f9d5da6054a779b47b667867241f_tuple, 2, const_str_digest_642c4953c10956304ed8030d7d8fd84b ); Py_INCREF( const_str_digest_642c4953c10956304ed8030d7d8fd84b );
    const_tuple_b618115106008a738aee226beaf7f074_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_b618115106008a738aee226beaf7f074_tuple, 0, const_str_plain_compiler ); Py_INCREF( const_str_plain_compiler );
    PyTuple_SET_ITEM( const_tuple_b618115106008a738aee226beaf7f074_tuple, 1, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_b618115106008a738aee226beaf7f074_tuple, 2, const_str_plain_runtime_library_dirs ); Py_INCREF( const_str_plain_runtime_library_dirs );
    PyTuple_SET_ITEM( const_tuple_b618115106008a738aee226beaf7f074_tuple, 3, const_str_plain_libraries ); Py_INCREF( const_str_plain_libraries );
    PyTuple_SET_ITEM( const_tuple_b618115106008a738aee226beaf7f074_tuple, 4, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_b618115106008a738aee226beaf7f074_tuple, 5, const_str_plain_lib_opts ); Py_INCREF( const_str_plain_lib_opts );
    PyTuple_SET_ITEM( const_tuple_b618115106008a738aee226beaf7f074_tuple, 6, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_bb03945c83f1bb8146c768bd1bdc6d0e_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_bb03945c83f1bb8146c768bd1bdc6d0e_tuple, 0, const_str_plain_DistutilsExecError ); Py_INCREF( const_str_plain_DistutilsExecError );
    PyTuple_SET_ITEM( const_tuple_bb03945c83f1bb8146c768bd1bdc6d0e_tuple, 1, const_str_plain_DistutilsModuleError ); Py_INCREF( const_str_plain_DistutilsModuleError );
    PyTuple_SET_ITEM( const_tuple_bb03945c83f1bb8146c768bd1bdc6d0e_tuple, 2, const_str_plain_DistutilsPlatformError ); Py_INCREF( const_str_plain_DistutilsPlatformError );
    const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple, 1, const_str_plain_source_filenames ); Py_INCREF( const_str_plain_source_filenames );
    PyTuple_SET_ITEM( const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple, 2, const_str_plain_strip_dir ); Py_INCREF( const_str_plain_strip_dir );
    PyTuple_SET_ITEM( const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple, 3, const_str_plain_output_dir ); Py_INCREF( const_str_plain_output_dir );
    PyTuple_SET_ITEM( const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple, 4, const_str_plain_obj_names ); Py_INCREF( const_str_plain_obj_names );
    PyTuple_SET_ITEM( const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple, 5, const_str_plain_src_name ); Py_INCREF( const_str_plain_src_name );
    PyTuple_SET_ITEM( const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple, 6, const_str_plain_base ); Py_INCREF( const_str_plain_base );
    PyTuple_SET_ITEM( const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple, 7, const_str_plain_ext ); Py_INCREF( const_str_plain_ext );
    PyTuple_SET_ITEM( const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple, 8, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple, 9, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple, 10, const_str_plain_obj_name ); Py_INCREF( const_str_plain_obj_name );
    const_tuple_cd50ba7c7cc1b85dba59c5dbb1b3f98e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_cd50ba7c7cc1b85dba59c5dbb1b3f98e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_cd50ba7c7cc1b85dba59c5dbb1b3f98e_tuple, 1, const_str_plain_dist ); Py_INCREF( const_str_plain_dist );
    PyTuple_SET_ITEM( const_tuple_cd50ba7c7cc1b85dba59c5dbb1b3f98e_tuple, 2, const_str_plain_need_cxx ); Py_INCREF( const_str_plain_need_cxx );
    PyTuple_SET_ITEM( const_tuple_cd50ba7c7cc1b85dba59c5dbb1b3f98e_tuple, 3, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_cd50ba7c7cc1b85dba59c5dbb1b3f98e_tuple, 4, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_tuple_eb8f16c36c8b60fd5d95b0620e3bcaa5_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_eb8f16c36c8b60fd5d95b0620e3bcaa5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_eb8f16c36c8b60fd5d95b0620e3bcaa5_tuple, 1, const_str_plain_cmd ); Py_INCREF( const_str_plain_cmd );
    PyTuple_SET_ITEM( const_tuple_eb8f16c36c8b60fd5d95b0620e3bcaa5_tuple, 2, const_str_plain_display ); Py_INCREF( const_str_plain_display );
    PyTuple_SET_ITEM( const_tuple_eb8f16c36c8b60fd5d95b0620e3bcaa5_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_eb8f16c36c8b60fd5d95b0620e3bcaa5_tuple, 4, const_str_plain_o ); Py_INCREF( const_str_plain_o );
    PyTuple_SET_ITEM( const_tuple_eb8f16c36c8b60fd5d95b0620e3bcaa5_tuple, 5, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple, 0, const_str_plain_plat ); Py_INCREF( const_str_plain_plat );
    PyTuple_SET_ITEM( const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple, 1, const_str_plain_compiler ); Py_INCREF( const_str_plain_compiler );
    PyTuple_SET_ITEM( const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple, 2, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple, 3, const_str_plain_dry_run ); Py_INCREF( const_str_plain_dry_run );
    PyTuple_SET_ITEM( const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple, 4, const_str_plain_force ); Py_INCREF( const_str_plain_force );
    PyTuple_SET_ITEM( const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple, 5, const_str_plain_module_name ); Py_INCREF( const_str_plain_module_name );
    PyTuple_SET_ITEM( const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple, 6, const_str_plain_class_name ); Py_INCREF( const_str_plain_class_name );
    PyTuple_SET_ITEM( const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple, 7, const_str_plain_long_description ); Py_INCREF( const_str_plain_long_description );
    PyTuple_SET_ITEM( const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple, 8, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple, 9, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple, 10, const_str_plain_klass ); Py_INCREF( const_str_plain_klass );
    const_tuple_f1813ad9d6f339414f3aec0f95791057_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f1813ad9d6f339414f3aec0f95791057_tuple, 0, const_str_plain_klass ); Py_INCREF( const_str_plain_klass );
    PyTuple_SET_ITEM( const_tuple_f1813ad9d6f339414f3aec0f95791057_tuple, 1, const_str_plain_method_name ); Py_INCREF( const_str_plain_method_name );
    PyTuple_SET_ITEM( const_tuple_f1813ad9d6f339414f3aec0f95791057_tuple, 2, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_f1813ad9d6f339414f3aec0f95791057_tuple, 3, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_tuple_f3a3cc2bb57641ea01abf2b5ee1b59ba_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f3a3cc2bb57641ea01abf2b5ee1b59ba_tuple, 0, const_str_plain_compiler ); Py_INCREF( const_str_plain_compiler );
    PyTuple_SET_ITEM( const_tuple_f3a3cc2bb57641ea01abf2b5ee1b59ba_tuple, 1, const_str_plain_library_dirs ); Py_INCREF( const_str_plain_library_dirs );
    PyTuple_SET_ITEM( const_tuple_f3a3cc2bb57641ea01abf2b5ee1b59ba_tuple, 2, const_str_plain_runtime_library_dirs ); Py_INCREF( const_str_plain_runtime_library_dirs );
    PyTuple_SET_ITEM( const_tuple_f3a3cc2bb57641ea01abf2b5ee1b59ba_tuple, 3, const_str_plain_libraries ); Py_INCREF( const_str_plain_libraries );
    const_tuple_f97c671979b9d677cda717a459069b04_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_f97c671979b9d677cda717a459069b04_tuple, 0, const_str_plain_pathccompiler ); Py_INCREF( const_str_plain_pathccompiler );
    PyTuple_SET_ITEM( const_tuple_f97c671979b9d677cda717a459069b04_tuple, 1, const_str_plain_PathScaleCCompiler ); Py_INCREF( const_str_plain_PathScaleCCompiler );
    PyTuple_SET_ITEM( const_tuple_f97c671979b9d677cda717a459069b04_tuple, 2, const_str_digest_83ce5d844b3936d6087e41a2ebc9d71f ); Py_INCREF( const_str_digest_83ce5d844b3936d6087e41a2ebc9d71f );
    const_tuple_fce77df4ef2a4acb5fb81d3b3741bc4d_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_fce77df4ef2a4acb5fb81d3b3741bc4d_tuple, 0, const_str_plain_intelccompiler ); Py_INCREF( const_str_plain_intelccompiler );
    PyTuple_SET_ITEM( const_tuple_fce77df4ef2a4acb5fb81d3b3741bc4d_tuple, 1, const_str_plain_IntelItaniumCCompiler ); Py_INCREF( const_str_plain_IntelItaniumCCompiler );
    PyTuple_SET_ITEM( const_tuple_fce77df4ef2a4acb5fb81d3b3741bc4d_tuple, 2, const_str_digest_0b631465326a1e968e8ffa294e7636e5 ); Py_INCREF( const_str_digest_0b631465326a1e968e8ffa294e7636e5 );
    const_tuple_none_none_none_int_0_none_none_none_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_int_0_none_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_int_0_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_int_0_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_int_0_none_none_none_tuple, 3, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_int_0_none_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_int_0_none_none_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_int_0_none_none_none_tuple, 6, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_macros_str_plain_include_dirs_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_macros_str_plain_include_dirs_tuple, 0, const_str_plain_macros ); Py_INCREF( const_str_plain_macros );
    PyTuple_SET_ITEM( const_tuple_str_plain_macros_str_plain_include_dirs_tuple, 1, const_str_plain_include_dirs ); Py_INCREF( const_str_plain_include_dirs );
    const_tuple_str_plain_self_str_plain_version_string_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_version_string_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_version_string_tuple, 1, const_str_plain_version_string ); Py_INCREF( const_str_plain_version_string );
    const_tuple_str_plain_f77_str_plain_f90_str_plain_fix_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f77_str_plain_f90_str_plain_fix_tuple, 0, const_str_plain_f77 ); Py_INCREF( const_str_plain_f77 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f77_str_plain_f90_str_plain_fix_tuple, 1, const_str_plain_f90 ); Py_INCREF( const_str_plain_f90 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f77_str_plain_f90_str_plain_fix_tuple, 2, const_str_plain_fix ); Py_INCREF( const_str_plain_fix );
    const_tuple_tuple_str_plain_nt_str_plain_mingw32_tuple_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_tuple_str_plain_nt_str_plain_mingw32_tuple_tuple, 0, const_tuple_str_plain_nt_str_plain_mingw32_tuple ); Py_INCREF( const_tuple_str_plain_nt_str_plain_mingw32_tuple );
    const_tuple_str_plain_self_str_plain_cmd_str_plain_ignore_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cmd_str_plain_ignore_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cmd_str_plain_ignore_tuple, 1, const_str_plain_cmd ); Py_INCREF( const_str_plain_cmd );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cmd_str_plain_ignore_tuple, 2, const_str_plain_ignore ); Py_INCREF( const_str_plain_ignore );
    const_tuple_str_plain_pat_str_plain_ignore_str_plain_start_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_pat_str_plain_ignore_str_plain_start_tuple, 0, const_str_plain_pat ); Py_INCREF( const_str_plain_pat );
    PyTuple_SET_ITEM( const_tuple_str_plain_pat_str_plain_ignore_str_plain_start_tuple, 1, const_str_plain_ignore ); Py_INCREF( const_str_plain_ignore );
    PyTuple_SET_ITEM( const_tuple_str_plain_pat_str_plain_ignore_str_plain_start_tuple, 2, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    const_tuple_str_plain_self_str_plain_cmd_str_plain_display_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cmd_str_plain_display_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cmd_str_plain_display_tuple, 1, const_str_plain_cmd ); Py_INCREF( const_str_plain_cmd );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cmd_str_plain_display_tuple, 2, const_str_plain_display ); Py_INCREF( const_str_plain_display );
    const_tuple_str_plain_self_str_plain_attrname_str_plain_attr_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_attrname_str_plain_attr_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_attrname_str_plain_attr_tuple, 1, const_str_plain_attrname ); Py_INCREF( const_str_plain_attrname );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_attrname_str_plain_attr_tuple, 2, const_str_plain_attr ); Py_INCREF( const_str_plain_attr );
    const_tuple_str_plain_self_str_plain_dist_str_plain_need_cxx_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dist_str_plain_need_cxx_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dist_str_plain_need_cxx_tuple, 1, const_str_plain_dist ); Py_INCREF( const_str_plain_dist );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dist_str_plain_need_cxx_tuple, 2, const_str_plain_need_cxx ); Py_INCREF( const_str_plain_need_cxx );
    const_tuple_str_plain_klass_str_plain_method_name_str_plain_func_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_klass_str_plain_method_name_str_plain_func_tuple, 0, const_str_plain_klass ); Py_INCREF( const_str_plain_klass );
    PyTuple_SET_ITEM( const_tuple_str_plain_klass_str_plain_method_name_str_plain_func_tuple, 1, const_str_plain_method_name ); Py_INCREF( const_str_plain_method_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_klass_str_plain_method_name_str_plain_func_tuple, 2, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    const_tuple_str_plain_cc_str_digest_6ce809eacf90ba125b40fa4bd903962e_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cc_str_digest_6ce809eacf90ba125b40fa4bd903962e_tuple, 0, const_str_plain_cc ); Py_INCREF( const_str_plain_cc );
    PyTuple_SET_ITEM( const_tuple_str_plain_cc_str_digest_6ce809eacf90ba125b40fa4bd903962e_tuple, 1, const_str_digest_6ce809eacf90ba125b40fa4bd903962e ); Py_INCREF( const_str_digest_6ce809eacf90ba125b40fa4bd903962e );
    const_tuple_str_plain_gcc_str_digest_644b1f5211d64ec52727780e74026f6e_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_gcc_str_digest_644b1f5211d64ec52727780e74026f6e_tuple, 0, const_str_plain_gcc ); Py_INCREF( const_str_plain_gcc );
    PyTuple_SET_ITEM( const_tuple_str_plain_gcc_str_digest_644b1f5211d64ec52727780e74026f6e_tuple, 1, const_str_digest_644b1f5211d64ec52727780e74026f6e ); Py_INCREF( const_str_digest_644b1f5211d64ec52727780e74026f6e );
}

// The module code objects.
static PyCodeObject *codeobj_803884da353d3a8237369a2aeca238b3;
static PyCodeObject *codeobj_88936d7aec6c4c4f6c972a309dc22f38;
static PyCodeObject *codeobj_da9dd9af9d7e510d9d61ca34a01be86a;
static PyCodeObject *codeobj_d0a4123eda9fd583b95e7ad0e85c8742;
static PyCodeObject *codeobj_514d043daf55540a18f10145dd81e6de;
static PyCodeObject *codeobj_f716128919f97d72c3b91bc79f236ba9;
static PyCodeObject *codeobj_030e2343f9025a87dd98f6a98b0e92b5;
static PyCodeObject *codeobj_2fbc71d8992aa72a150459cff95a7d75;
static PyCodeObject *codeobj_2372f508401bb5d1a958b10f67665182;
static PyCodeObject *codeobj_2542444c1b3431fdc2f75855007c5cfc;
static PyCodeObject *codeobj_5e6f46a5effb548a23787ad4130e670f;
static PyCodeObject *codeobj_227946991f297c5a0d1a7ef425800235;
static PyCodeObject *codeobj_75e9a6cbbc58fcee04413ca2b2a52380;
static PyCodeObject *codeobj_0f14559454f6a1d334c494138288da26;
static PyCodeObject *codeobj_3d8768643207dbc72731351c52f42419;
static PyCodeObject *codeobj_8e362ef445285f15a2c5bbccefa34b3c;
static PyCodeObject *codeobj_b815d8b2765c7ab1af40f8cbb402ddfe;
static PyCodeObject *codeobj_d9e844729681363ae72d8c727e305c78;
static PyCodeObject *codeobj_7cb9b1ea1dfea8c217578e01a9aa5afd;
static PyCodeObject *codeobj_9ce2944c3cd92c8e807f3865ad3307b8;
static PyCodeObject *codeobj_4def51fffc2cffd32b04ac8ccdc7a7b7;
static PyCodeObject *codeobj_263c03fb4a958299a8c1c1ed0a8c92ea;
static PyCodeObject *codeobj_88b4b289e42b9f4e92346a5f6ec24b37;
static PyCodeObject *codeobj_39e1c9c4897cb4c0e13552a26bd34bd8;
static PyCodeObject *codeobj_cdd28046c10c7aa3455cf106550f1383;
static PyCodeObject *codeobj_dfb72c4a6dca889bf07283e4348e79bb;
static PyCodeObject *codeobj_0442856215f460f5dbc2b170a27a108a;
static PyCodeObject *codeobj_489f0d8077d74b491ca834312c02f194;
static PyCodeObject *codeobj_0e49d641982e133d1e92f2bbe98b5dda;
static PyCodeObject *codeobj_3156ec7686ade5e3f7aae4526c9f998f;
static PyCodeObject *codeobj_558ec9bb5461898409be34f1486826ae;
static PyCodeObject *codeobj_b788e7b64ce04888e9f716facaa94ab4;
static PyCodeObject *codeobj_cc99fa88ff6ba82f56ba74d3357e87e3;
static PyCodeObject *codeobj_8c89fb74a7d74daeadf3b22efca6e85b;
static PyCodeObject *codeobj_f6d6af4a4a6fe4eacd7ee45d67d568a7;
static PyCodeObject *codeobj_32aaaf5ff4d21637823d4dfa3554331b;

static void _initModuleCodeObjects(void)
{
    codeobj_803884da353d3a8237369a2aeca238b3 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_angle_lambda, 28, const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_88936d7aec6c4c4f6c972a309dc22f38 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_compile, 123, const_tuple_06a860a789f105b8b1713ba26e8c9255_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_da9dd9af9d7e510d9d61ca34a01be86a = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_compile, 123, const_tuple_7c277a7d04eb1ad7d299f9b7ceb6cdc4_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d0a4123eda9fd583b95e7ad0e85c8742 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_customize, 312, const_tuple_str_plain_self_str_plain_dist_str_plain_need_cxx_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_514d043daf55540a18f10145dd81e6de = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_customize, 312, const_tuple_cd50ba7c7cc1b85dba59c5dbb1b3f98e_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f716128919f97d72c3b91bc79f236ba9 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_customize_cmd, 212, const_tuple_str_plain_self_str_plain_cmd_str_plain_ignore_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_030e2343f9025a87dd98f6a98b0e92b5 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_customize_cmd, 212, const_tuple_39130cd9de230c6101d251edda7bd1e2_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2fbc71d8992aa72a150459cff95a7d75 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_cxx_compiler, 472, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2372f508401bb5d1a958b10f67665182 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_cxx_compiler, 472, const_tuple_str_plain_self_str_plain_cxx_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2542444c1b3431fdc2f75855007c5cfc = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_get_version, 417, const_tuple_str_plain_self_str_plain_force_str_plain_ok_status_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5e6f46a5effb548a23787ad4130e670f = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_get_version, 417, const_tuple_3a6285201c0e01a884762b88e2ee78a5_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_227946991f297c5a0d1a7ef425800235 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_object_filenames, 76, const_tuple_2a35063b865b1125ac03b149e89b5bd7_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_75e9a6cbbc58fcee04413ca2b2a52380 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_object_filenames, 76, const_tuple_c72665e3e630a8c6f9a5f4836aec521e_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0f14559454f6a1d334c494138288da26 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_show_customization, 275, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3d8768643207dbc72731351c52f42419 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_show_customization, 275, const_tuple_str_plain_self_str_plain_attrname_str_plain_attr_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8e362ef445285f15a2c5bbccefa34b3c = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_spawn, 32, const_tuple_str_plain_self_str_plain_cmd_str_plain_display_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b815d8b2765c7ab1af40f8cbb402ddfe = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_CCompiler_spawn, 32, const_tuple_eb8f16c36c8b60fd5d95b0620e3bcaa5_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d9e844729681363ae72d8c727e305c78 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain__compiler_to_string, 255, const_tuple_str_plain_compiler_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7cb9b1ea1dfea8c217578e01a9aa5afd = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain__compiler_to_string, 255, const_tuple_0ad137b8cda362046401e5ae22e44422_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9ce2944c3cd92c8e807f3865ad3307b8 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_allow, 233, const_tuple_str_plain_attr_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4def51fffc2cffd32b04ac8ccdc7a7b7 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_ccompiler, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_263c03fb4a958299a8c1c1ed0a8c92ea = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_gen_lib_options, 569, const_tuple_f3a3cc2bb57641ea01abf2b5ee1b59ba_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_88b4b289e42b9f4e92346a5f6ec24b37 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_gen_lib_options, 569, const_tuple_b618115106008a738aee226beaf7f074_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_39e1c9c4897cb4c0e13552a26bd34bd8 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_gen_preprocess_options, 592, const_tuple_str_plain_macros_str_plain_include_dirs_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cdd28046c10c7aa3455cf106550f1383 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_matcher, 396, const_tuple_str_plain_self_str_plain_version_string_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dfb72c4a6dca889bf07283e4348e79bb = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_matcher, 396, const_tuple_6fe443234cf2c456d2bccce7463d1e98_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0442856215f460f5dbc2b170a27a108a = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_matcher, 453, const_tuple_str_plain_version_string_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_489f0d8077d74b491ca834312c02f194 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_matcher, 453, const_tuple_262a675ebf90ead5864f41217f9b5710_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0e49d641982e133d1e92f2bbe98b5dda = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_new_compiler, 525, const_tuple_943b1b693fa019ddab6bc94fe1d12f1c_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3156ec7686ade5e3f7aae4526c9f998f = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_new_compiler, 525, const_tuple_ecca909fe557b3509e785096b08a2b9e_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_558ec9bb5461898409be34f1486826ae = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_replace_method, 23, const_tuple_str_plain_klass_str_plain_method_name_str_plain_func_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b788e7b64ce04888e9f716facaa94ab4 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_replace_method, 23, const_tuple_f1813ad9d6f339414f3aec0f95791057_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cc99fa88ff6ba82f56ba74d3357e87e3 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_simple_version_match, 370, const_tuple_str_plain_pat_str_plain_ignore_str_plain_start_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8c89fb74a7d74daeadf3b22efca6e85b = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_simple_version_match, 370, const_tuple_6588a1b4d86e93aedda8aa7be52b487e_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f6d6af4a4a6fe4eacd7ee45d67d568a7 = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_split_quoted, 608, const_tuple_str_plain_s_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_32aaaf5ff4d21637823d4dfa3554331b = MAKE_CODEOBJ( const_str_digest_839f92c87cbec01c94540bfb3313f8be, const_str_plain_split_quoted, 608, const_tuple_807249008b8e18d1f6bab125cf7c3d85_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl_function_6_complex_call_helper_pos_star_list_star_dict_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_star_arg_list, PyObject *_python_par_star_arg_dict );


static PyObject *MAKE_FUNCTION_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_11_CCompiler_cxx_compiler_of_module_numpy$distutils$ccompiler(  );


static PyObject *MAKE_FUNCTION_function_12_new_compiler_of_module_numpy$distutils$ccompiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_13_gen_lib_options_of_module_numpy$distutils$ccompiler(  );


static PyObject *MAKE_FUNCTION_function_14_gen_preprocess_options_of_module_numpy$distutils$ccompiler(  );


static PyObject *MAKE_FUNCTION_function_15_split_quoted_of_module_numpy$distutils$ccompiler(  );


static PyObject *MAKE_FUNCTION_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( PyObjectSharedLocalVariable &closure_cmd, PyObjectSharedLocalVariable &closure_ignore );


// This structure is for attachment as self of function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler.
// It is allocated at the time the function object is created.
struct _context_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler_t
{
    // The function can access a read-only closure of the creator.
    PyObjectSharedLocalVariable closure_cmd;
    PyObjectSharedLocalVariable closure_ignore;
};

static void _context_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler_destructor( void *context_voidptr )
{
    _context_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler_t *_python_context = (_context_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( PyObjectSharedLocalVariable &closure_pat );


// This structure is for attachment as self of function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler.
// It is allocated at the time the function object is created.
struct _context_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler_t
{
    // The function can access a read-only closure of the creator.
    PyObjectSharedLocalVariable closure_pat;
};

static void _context_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler_destructor( void *context_voidptr )
{
    _context_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler_t *_python_context = (_context_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( PyObjectSharedLocalVariable &closure_ignore, PyObjectSharedLocalVariable &closure_pat, PyObjectSharedLocalVariable &closure_start );


// This structure is for attachment as self of function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler.
// It is allocated at the time the function object is created.
struct _context_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler_t
{
    // The function can access a read-only closure of the creator.
    PyObjectSharedLocalVariable closure_ignore;
    PyObjectSharedLocalVariable closure_pat;
    PyObjectSharedLocalVariable closure_start;
};

static void _context_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler_destructor( void *context_voidptr )
{
    _context_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler_t *_python_context = (_context_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1_replace_method_of_module_numpy$distutils$ccompiler(  );


static PyObject *MAKE_FUNCTION_function_2_CCompiler_spawn_of_module_numpy$distutils$ccompiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_CCompiler_object_filenames_of_module_numpy$distutils$ccompiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_CCompiler_compile_of_module_numpy$distutils$ccompiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_6__compiler_to_string_of_module_numpy$distutils$ccompiler(  );


static PyObject *MAKE_FUNCTION_function_7_CCompiler_show_customization_of_module_numpy$distutils$ccompiler(  );


static PyObject *MAKE_FUNCTION_function_8_CCompiler_customize_of_module_numpy$distutils$ccompiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler( PyObjectSharedLocalVariable &closure_func );


// This structure is for attachment as self of lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler.
// It is allocated at the time the function object is created.
struct _context_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler_t
{
    // The function can access a read-only closure of the creator.
    PyObjectSharedLocalVariable closure_func;
};

static void _context_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler_destructor( void *context_voidptr )
{
    _context_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler_t *_python_context = (_context_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler_t *)context_voidptr;



    delete _python_context;
}


// The module function definitions.
static PyObject *impl_function_1_replace_method_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_klass, PyObject *_python_par_method_name, PyObject *_python_par_func )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_klass; par_klass.object = _python_par_klass;
    PyObjectLocalVariable par_method_name; par_method_name.object = _python_par_method_name;
    PyObjectSharedLocalVariable par_func; par_func.storage->object = _python_par_func;
    PyObjectLocalVariable var_m;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_setattr_attr_1;
    PyObject *tmp_setattr_target_1;
    PyObject *tmp_setattr_value_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_558ec9bb5461898409be34f1486826ae, module_numpy$distutils$ccompiler );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_3;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 24;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_types );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25249 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MethodType );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_func.storage->object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = Py_None;
    tmp_call_arg_element_3 = par_klass.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80579 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 25;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    assert( var_m.object == NULL );
    var_m.object = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_2 = MAKE_FUNCTION_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler( par_func );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    assert( var_m.object == NULL );
    var_m.object = tmp_assign_source_2;

    branch_end_1:;
    tmp_setattr_target_1 = par_klass.object;

    if ( tmp_setattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80579 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_setattr_attr_1 = par_method_name.object;

    if ( tmp_setattr_attr_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80630 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_setattr_value_1 = var_m.object;

    tmp_unused = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
    if ( tmp_unused == NULL )
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


    tmp_frame_locals = PyDict_New();
    if ((var_m.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_m,
            var_m.object
        );

    }
    if ((par_klass.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_klass,
            par_klass.object
        );

    }
    if ((par_method_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_method_name,
            par_method_name.object
        );

    }
    if ((par_func.storage != NULL && par_func.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            par_func.storage->object
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
static PyObject *fparse_function_1_replace_method_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_klass = NULL;
    PyObject *_python_par_method_name = NULL;
    PyObject *_python_par_func = NULL;
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
                PyErr_Format( PyExc_TypeError, "replace_method() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_klass == key )
            {
                assert( _python_par_klass == NULL );
                _python_par_klass = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_method_name == key )
            {
                assert( _python_par_method_name == NULL );
                _python_par_method_name = value;

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

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_klass, key ) == 1 )
            {
                assert( _python_par_klass == NULL );
                _python_par_klass = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_method_name, key ) == 1 )
            {
                assert( _python_par_method_name == NULL );
                _python_par_method_name = value;

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


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "replace_method() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_klass != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_klass = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_klass == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_klass = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_method_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_method_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_method_name == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_method_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_func == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_klass == NULL || _python_par_method_name == NULL || _python_par_func == NULL ))
    {
        PyObject *values[] = { _python_par_klass, _python_par_method_name, _python_par_func };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_replace_method_of_module_numpy$distutils$ccompiler( self, _python_par_klass, _python_par_method_name, _python_par_func );

error_exit:;

    Py_XDECREF( _python_par_klass );
    Py_XDECREF( _python_par_method_name );
    Py_XDECREF( _python_par_func );

    return NULL;
}

static PyObject *dparse_function_1_replace_method_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1_replace_method_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_replace_method_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kw )
{
    // The context of the function.
    struct _context_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler_t *_python_context = (struct _context_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_kw; par_kw.object = _python_par_kw;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_803884da353d3a8237369a2aeca238b3, module_numpy$distutils$ccompiler );
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
    tmp_dircall_arg1_1 = _python_context->closure_func.storage->object;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_self.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_args.object;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg4_1 = par_kw.object;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6911 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_return_value = impl_function_6_complex_call_helper_pos_star_list_star_dict_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), tmp_dircall_arg2_1, INCREASE_REFCOUNT( tmp_dircall_arg3_1 ), INCREASE_REFCOUNT( tmp_dircall_arg4_1 ) );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 28;
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
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            par_args.object
        );

    }
    if ((par_kw.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_kw,
            par_kw.object
        );

    }
    if ((_python_context->closure_func.storage != NULL && _python_context->closure_func.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            _python_context->closure_func.storage->object
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
static PyObject *fparse_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kw = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_kw = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kw = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kw, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_kw = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kw = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kw, entry->me_key, value );

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
            _python_par_kw = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, const_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kw, const_str_plain_self );

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
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( const_tuple_empty );
    }


    return impl_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler( self, _python_par_self, _python_par_args, _python_par_kw );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kw );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_CCompiler_spawn_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_cmd, PyObject *_python_par_display )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_cmd; par_cmd.object = _python_par_cmd;
    PyObjectLocalVariable par_display; par_display.object = _python_par_display;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_o;
    PyObjectLocalVariable var_msg;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8e362ef445285f15a2c5bbccefa34b3c, module_numpy$distutils$ccompiler );
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
    tmp_compare_left_1 = par_display.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24776 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
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
    tmp_assign_source_1 = par_cmd.object;

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    if (par_display.object == NULL)
    {
        par_display.object = INCREASE_REFCOUNT( tmp_assign_source_1 );
    }
    else
    {
        PyObject *old = par_display.object;
        par_display.object = INCREASE_REFCOUNT( tmp_assign_source_1 );
        Py_DECREF( old );
    }
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_is_sequence );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_sequence );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80736 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_display.object;

    frame_function->f_lineno = 56;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
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
    tmp_source_name_1 = const_str_space;
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_list_arg_1 = par_display.object;

    tmp_call_arg_element_2 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 57;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    assert( par_display.object != NULL );
    {
        PyObject *old = par_display.object;
        par_display.object = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_info );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_display.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24776 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 58;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_exec_command );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exec_command );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80776 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 59;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_4 = par_cmd.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 59;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 59;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto try_finally_handler_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
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


        frame_function->f_lineno = 59;
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


        frame_function->f_lineno = 59;
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

    assert( var_s.object == NULL );
    var_s.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2.object;

    assert( var_o.object == NULL );
    var_o.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

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
    tmp_cond_value_2 = var_s.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
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
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_is_sequence );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_sequence );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80736 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = par_cmd.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 61;
    tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_3 = const_str_space;
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_list_arg_2 = par_cmd.object;

    if ( tmp_list_arg_2 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = PySequence_List( tmp_list_arg_2 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 62;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    if (par_cmd.object == NULL)
    {
        par_cmd.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = par_cmd.object;
        par_cmd.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    branch_no_4:;
    // Tried block of try/except
    tmp_called_7 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_7 = var_o.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12331 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 64;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 64;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
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
    tmp_compare_right_2 = PyExc_UnicodeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
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
    goto frame_exception_exit_1;
    branch_no_5:;
    try_except_end_1:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4450 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_search );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = const_str_digest_69ccb7ef78a14aa201ceef70bfaa08ec;
    tmp_call_arg_element_9 = var_o.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12331 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 68;
    tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 68;
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
    tmp_assign_source_9 = const_str_digest_b54874aa45c812755e46502f59e75fb5;
    assert( var_msg.object == NULL );
    var_msg.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    goto branch_end_6;
    branch_no_6:;
    tmp_assign_source_10 = const_str_empty;
    assert( var_msg.object == NULL );
    var_msg.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

    branch_end_6:;
    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_DistutilsExecError );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DistutilsExecError );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80817 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = const_str_digest_2689ec4348c04e5f79c11e173bc032af;
    tmp_binop_right_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_cmd.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_s.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_msg.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 2, tmp_tuple_element_1 );
    tmp_call_arg_element_10 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 72;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 72;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;

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
    if ((par_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmd,
            par_cmd.object
        );

    }
    if ((par_display.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_display,
            par_display.object
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
static PyObject *fparse_function_2_CCompiler_spawn_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_cmd = NULL;
    PyObject *_python_par_display = NULL;
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
                PyErr_Format( PyExc_TypeError, "CCompiler_spawn() keywords must be strings" );
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
            if ( found == false && const_str_plain_cmd == key )
            {
                assert( _python_par_cmd == NULL );
                _python_par_cmd = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_display == key )
            {
                assert( _python_par_display == NULL );
                _python_par_display = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cmd, key ) == 1 )
            {
                assert( _python_par_cmd == NULL );
                _python_par_cmd = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_display, key ) == 1 )
            {
                assert( _python_par_display == NULL );
                _python_par_display = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "CCompiler_spawn() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_cmd != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_cmd = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_cmd == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_cmd = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_display != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_display = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_display == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_display = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_cmd == NULL || _python_par_display == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_cmd, _python_par_display };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_CCompiler_spawn_of_module_numpy$distutils$ccompiler( self, _python_par_self, _python_par_cmd, _python_par_display );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_cmd );
    Py_XDECREF( _python_par_display );

    return NULL;
}

static PyObject *dparse_function_2_CCompiler_spawn_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_2_CCompiler_spawn_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_CCompiler_spawn_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_CCompiler_object_filenames_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_source_filenames, PyObject *_python_par_strip_dir, PyObject *_python_par_output_dir )
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
    PyObjectLocalVariable var_i;
    PyObjectLocalVariable var_d;
    PyObjectLocalVariable var_obj_name;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
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
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_upper_1;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_227946991f297c5a0d1a7ef425800235, module_numpy$distutils$ccompiler );
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

        frame_function->f_lineno = 99;
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

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
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
        frame_function->f_lineno = 102;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto try_finally_handler_2;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto try_finally_handler_2;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_splitext );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto try_finally_handler_2;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_os );

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

        frame_function->f_lineno = 103;
        goto try_finally_handler_2;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 103;
        goto try_finally_handler_2;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_normpath );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 103;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_2 = var_src_name.object;

    frame_function->f_lineno = 103;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 103;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 103;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto try_finally_handler_2;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
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


        frame_function->f_lineno = 103;
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


        frame_function->f_lineno = 103;
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
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto try_finally_handler_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto try_finally_handler_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_splitdrive );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_3 = var_base.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 104;
    tmp_subscr_target_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_1 = const_int_pos_1;
    tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto try_finally_handler_1;
    }
    if (var_base.object == NULL)
    {
        var_base.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = var_base.object;
        var_base.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_slice_source_1 = var_base.object;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 105;
        goto try_finally_handler_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto try_finally_handler_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_isabs );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_4 = var_base.object;

    frame_function->f_lineno = 105;
    tmp_slice_lower_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_slice_lower_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto try_finally_handler_1;
    }
    tmp_assign_source_12 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, Py_None );
    Py_DECREF( tmp_slice_lower_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto try_finally_handler_1;
    }
    assert( var_base.object != NULL );
    {
        PyObject *old = var_base.object;
        var_base.object = tmp_assign_source_12;
        Py_DECREF( old );
    }

    tmp_source_name_9 = var_base.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_startswith );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_5 = const_str_digest_58b9e70b65a77700ba66e9c64d6b9f89;
    frame_function->f_lineno = 106;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 106;
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
    tmp_source_name_10 = var_base.object;

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_rfind );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_6 = const_str_digest_58b9e70b65a77700ba66e9c64d6b9f89;
    frame_function->f_lineno = 109;
    tmp_binop_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto try_finally_handler_1;
    }
    tmp_binop_right_1 = const_int_pos_2;
    tmp_assign_source_13 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto try_finally_handler_1;
    }
    if (var_i.object == NULL)
    {
        var_i.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_slice_source_2 = var_base.object;

    tmp_slice_upper_1 = var_i.object;

    tmp_assign_source_14 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto try_finally_handler_1;
    }
    if (var_d.object == NULL)
    {
        var_d.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_path );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_basename );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_path );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_8 = var_d.object;

    frame_function->f_lineno = 111;
    tmp_call_arg_element_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 111;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }
    assert( var_d.object != NULL );
    {
        PyObject *old = var_d.object;
        var_d.object = tmp_assign_source_15;
        Py_DECREF( old );
    }

    tmp_binop_left_2 = var_d.object;

    tmp_slice_source_3 = var_base.object;

    tmp_slice_lower_2 = var_i.object;

    tmp_binop_right_2 = LOOKUP_SLICE( tmp_slice_source_3, tmp_slice_lower_2, Py_None );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto try_finally_handler_1;
    }
    tmp_assign_source_16 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto try_finally_handler_1;
    }
    assert( var_base.object != NULL );
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

        frame_function->f_lineno = 113;
        goto try_finally_handler_1;
    }

    tmp_source_name_15 = par_self.object;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
        goto try_finally_handler_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_src_extensions );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 113;
        goto try_finally_handler_1;
    }
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 113;
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
    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_UnknownFileError );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnknownFileError );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80982 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto try_finally_handler_1;
    }

    tmp_binop_left_3 = const_str_digest_cc3f9be4b24741259966d1e00234095c;
    tmp_binop_right_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_ext.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_src_name.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81027 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_9 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 114;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 114;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_3:;
    tmp_cond_value_2 = par_strip_dir.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81081 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto try_finally_handler_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
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
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto try_finally_handler_1;
    }

    tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_path );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto try_finally_handler_1;
    }
    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_basename );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_10 = var_base.object;

    frame_function->f_lineno = 116;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto try_finally_handler_1;
    }
    assert( var_base.object != NULL );
    {
        PyObject *old = var_base.object;
        var_base.object = tmp_assign_source_17;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto try_finally_handler_1;
    }

    tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_path );
    if ( tmp_source_name_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto try_finally_handler_1;
    }
    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_join );
    Py_DECREF( tmp_source_name_18 );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_11 = par_output_dir.object;

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80864 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto try_finally_handler_1;
    }

    tmp_binop_left_4 = var_base.object;

    if ( tmp_binop_left_4 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto try_finally_handler_1;
    }

    tmp_source_name_20 = par_self.object;

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto try_finally_handler_1;
    }

    tmp_binop_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_obj_extension );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 117;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_12 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 117;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 117;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_11, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto try_finally_handler_1;
    }
    if (var_obj_name.object == NULL)
    {
        var_obj_name.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = var_obj_name.object;
        var_obj_name.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    tmp_source_name_21 = var_obj_names.object;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81136 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto try_finally_handler_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_append );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_13 = var_obj_name.object;

    frame_function->f_lineno = 118;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
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
    tmp_return_value = var_obj_names.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81136 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
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
    if ((var_i.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_i,
            var_i.object
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
    if ((var_obj_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_obj_name,
            var_obj_name.object
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
static PyObject *fparse_function_3_CCompiler_object_filenames_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "CCompiler_object_filenames() keywords must be strings" );
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
                   "CCompiler_object_filenames() got an unexpected keyword argument '%s'",
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


    return impl_function_3_CCompiler_object_filenames_of_module_numpy$distutils$ccompiler( self, _python_par_self, _python_par_source_filenames, _python_par_strip_dir, _python_par_output_dir );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_source_filenames );
    Py_XDECREF( _python_par_strip_dir );
    Py_XDECREF( _python_par_output_dir );

    return NULL;
}

static PyObject *dparse_function_3_CCompiler_object_filenames_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_3_CCompiler_object_filenames_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_CCompiler_object_filenames_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_CCompiler_compile_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_sources, PyObject *_python_par_output_dir, PyObject *_python_par_macros, PyObject *_python_par_include_dirs, PyObject *_python_par_debug, PyObject *_python_par_extra_preargs, PyObject *_python_par_extra_postargs, PyObject *_python_par_depends )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_sources; par_sources.object = _python_par_sources;
    PyObjectLocalVariable par_output_dir; par_output_dir.object = _python_par_output_dir;
    PyObjectLocalVariable par_macros; par_macros.object = _python_par_macros;
    PyObjectLocalVariable par_include_dirs; par_include_dirs.object = _python_par_include_dirs;
    PyObjectLocalVariable par_debug; par_debug.object = _python_par_debug;
    PyObjectLocalVariable par_extra_preargs; par_extra_preargs.object = _python_par_extra_preargs;
    PyObjectLocalVariable par_extra_postargs; par_extra_postargs.object = _python_par_extra_postargs;
    PyObjectLocalVariable par_depends; par_depends.object = _python_par_depends;
    PyObjectLocalVariable var_FCompiler;
    PyObjectLocalVariable var_display;
    PyObjectLocalVariable var_fc;
    PyObjectLocalVariable var_fcomp;
    PyObjectLocalVariable var_ccomp;
    PyObjectLocalVariable var_objects;
    PyObjectLocalVariable var_pp_opts;
    PyObjectLocalVariable var_build;
    PyObjectLocalVariable var_cc_args;
    PyObjectLocalVariable var_objects_to_build;
    PyObjectLocalVariable var_obj;
    PyObjectLocalVariable var_src;
    PyObjectLocalVariable var_ext;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_1__element_3;
    PyObjectTempVariable tmp_tuple_unpack_1__element_4;
    PyObjectTempVariable tmp_tuple_unpack_1__element_5;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
    PyObjectTempVariable tmp_tuple_unpack_3__element_2;
    PyObjectTempVariable tmp_tuple_unpack_4__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_4__element_1;
    PyObjectTempVariable tmp_tuple_unpack_4__element_2;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    int tmp_cmp_Lt_1;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_is_1;
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
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_attempt_3;
    PyObject *tmp_iterator_attempt_4;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
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
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    PyObject *tmp_unpack_8;
    PyObject *tmp_unpack_9;
    PyObject *tmp_unpack_10;
    PyObject *tmp_unpack_11;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_88936d7aec6c4c4f6c972a309dc22f38, module_numpy$distutils$ccompiler );
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
    tmp_cond_value_1 = par_sources.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81191 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
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
    tmp_return_value = PyList_New( 0 );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_3;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_FCompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_FCompiler,
            var_FCompiler.object
        );

    }
    if ((var_display.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_display,
            var_display.object
        );

    }
    if ((var_fc.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fc,
            var_fc.object
        );

    }
    if ((var_fcomp.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fcomp,
            var_fcomp.object
        );

    }
    if ((var_ccomp.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ccomp,
            var_ccomp.object
        );

    }
    if ((var_objects.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_objects,
            var_objects.object
        );

    }
    if ((var_pp_opts.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_pp_opts,
            var_pp_opts.object
        );

    }
    if ((var_build.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_build,
            var_build.object
        );

    }
    if ((var_cc_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_cc_args,
            var_cc_args.object
        );

    }
    if ((var_objects_to_build.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_objects_to_build,
            var_objects_to_build.object
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
    if ((var_src.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_src,
            var_src.object
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_sources.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_sources,
            par_sources.object
        );

    }
    if ((par_output_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_output_dir,
            par_output_dir.object
        );

    }
    if ((par_macros.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_macros,
            par_macros.object
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
    if ((par_debug.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_debug,
            par_debug.object
        );

    }
    if ((par_extra_preargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_extra_preargs,
            par_extra_preargs.object
        );

    }
    if ((par_extra_postargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_extra_postargs,
            par_extra_postargs.object
        );

    }
    if ((par_depends.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_depends,
            par_depends.object
        );

    }
    frame_function->f_lineno = 168;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_fcompiler, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_FCompiler_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_FCompiler );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    assert( var_FCompiler.object == NULL );
    var_FCompiler.object = tmp_assign_source_1;

    goto branch_end_2;
    branch_no_2:;
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_FCompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_FCompiler,
            var_FCompiler.object
        );

    }
    if ((var_display.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_display,
            var_display.object
        );

    }
    if ((var_fc.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_fc,
            var_fc.object
        );

    }
    if ((var_fcomp.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_fcomp,
            var_fcomp.object
        );

    }
    if ((var_ccomp.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ccomp,
            var_ccomp.object
        );

    }
    if ((var_objects.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_objects,
            var_objects.object
        );

    }
    if ((var_pp_opts.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_pp_opts,
            var_pp_opts.object
        );

    }
    if ((var_build.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_build,
            var_build.object
        );

    }
    if ((var_cc_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_cc_args,
            var_cc_args.object
        );

    }
    if ((var_objects_to_build.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_objects_to_build,
            var_objects_to_build.object
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
    if ((var_src.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_src,
            var_src.object
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_sources.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_sources,
            par_sources.object
        );

    }
    if ((par_output_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_output_dir,
            par_output_dir.object
        );

    }
    if ((par_macros.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_macros,
            par_macros.object
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
    if ((par_debug.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_debug,
            par_debug.object
        );

    }
    if ((par_extra_preargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_extra_preargs,
            par_extra_preargs.object
        );

    }
    if ((par_extra_postargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_extra_postargs,
            par_extra_postargs.object
        );

    }
    if ((par_depends.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_depends,
            par_depends.object
        );

    }
    frame_function->f_lineno = 170;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_c0ab1120b239d942b77d52b1ebe617bb, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_FCompiler_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_FCompiler );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    assert( var_FCompiler.object == NULL );
    var_FCompiler.object = tmp_assign_source_2;

    branch_end_2:;
    tmp_isinstance_inst_1 = par_self.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = var_FCompiler.object;

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
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
    tmp_assign_source_3 = PyList_New( 0 );
    assert( var_display.object == NULL );
    var_display.object = tmp_assign_source_3;

    tmp_iter_arg_1 = const_tuple_str_plain_f77_str_plain_f90_str_plain_fix_tuple;
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
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
        frame_function->f_lineno = 173;
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

    if (var_fc.object == NULL)
    {
        var_fc.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = var_fc.object;
        var_fc.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    tmp_getattr_target_1 = par_self.object;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto try_finally_handler_1;
    }

    tmp_binop_left_1 = const_str_plain_compiler_;
    tmp_binop_right_1 = var_fc.object;

    tmp_getattr_attr_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_getattr_attr_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_1;
    }
    tmp_assign_source_7 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    Py_DECREF( tmp_getattr_attr_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_1;
    }
    if (var_fcomp.object == NULL)
    {
        var_fcomp.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = var_fcomp.object;
        var_fcomp.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_compare_left_2 = var_fcomp.object;

    tmp_compare_right_2 = Py_None;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_1)
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
    tmp_source_name_2 = var_display.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24776 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto try_finally_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 177;
        goto try_finally_handler_1;
    }
    tmp_binop_left_2 = const_str_digest_e749133856208e9f02a20fee3761e9e8;
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_fc.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = const_str_space;
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 177;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = var_fcomp.object;

    frame_function->f_lineno = 177;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 177;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 177;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 177;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 177;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
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
    tmp_source_name_4 = const_str_newline;
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = var_display.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24776 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 178;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }
    if (var_display.object == NULL)
    {
        var_display.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = var_display.object;
        var_display.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_compiler_so );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    assert( var_ccomp.object == NULL );
    var_ccomp.object = tmp_assign_source_9;

    tmp_binop_left_3 = const_str_digest_74b88a7354b529fa7275e6a033e2860d;
    tmp_binop_right_3 = PyTuple_New( 1 );
    tmp_source_name_6 = const_str_space;
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = var_ccomp.object;

    frame_function->f_lineno = 181;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_2 );
    tmp_assign_source_10 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }
    assert( var_display.object == NULL );
    var_display.object = tmp_assign_source_10;

    branch_end_3:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_info );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = var_display.object;

    frame_function->f_lineno = 182;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_2;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__setup_compile );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 184;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_6 = par_output_dir.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80864 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_7 = par_macros.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81244 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_8 = par_include_dirs.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_9 = par_sources.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81191 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_10 = par_depends.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81354 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_11 = par_extra_postargs.object;

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81407 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 185;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS6( tmp_called_6, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9, tmp_call_arg_element_10, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 185;
        goto try_finally_handler_2;
    }
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_11;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_12 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 183;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_12;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_13 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
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


        frame_function->f_lineno = 183;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_13;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_14 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 2 );
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


        frame_function->f_lineno = 183;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3.object == NULL );
    tmp_tuple_unpack_1__element_3.object = tmp_assign_source_14;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_15 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 3 );
    if ( tmp_assign_source_15 == NULL )
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


        frame_function->f_lineno = 183;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_4.object == NULL );
    tmp_tuple_unpack_1__element_4.object = tmp_assign_source_15;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_16 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 4 );
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


        frame_function->f_lineno = 183;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_5.object == NULL );
    tmp_tuple_unpack_1__element_5.object = tmp_assign_source_16;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_2;
    }
    tmp_assign_source_17 = tmp_tuple_unpack_1__element_1.object;

    if (par_macros.object == NULL)
    {
        par_macros.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
    }
    else
    {
        PyObject *old = par_macros.object;
        par_macros.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
        Py_DECREF( old );
    }
    tmp_assign_source_18 = tmp_tuple_unpack_1__element_2.object;

    assert( var_objects.object == NULL );
    var_objects.object = INCREASE_REFCOUNT( tmp_assign_source_18 );

    tmp_assign_source_19 = tmp_tuple_unpack_1__element_3.object;

    if (par_extra_postargs.object == NULL)
    {
        par_extra_postargs.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
    }
    else
    {
        PyObject *old = par_extra_postargs.object;
        par_extra_postargs.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
        Py_DECREF( old );
    }
    tmp_assign_source_20 = tmp_tuple_unpack_1__element_4.object;

    assert( var_pp_opts.object == NULL );
    var_pp_opts.object = INCREASE_REFCOUNT( tmp_assign_source_20 );

    tmp_assign_source_21 = tmp_tuple_unpack_1__element_5.object;

    assert( var_build.object == NULL );
    var_build.object = INCREASE_REFCOUNT( tmp_assign_source_21 );

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

    Py_XDECREF( tmp_tuple_unpack_1__element_5.object );
    tmp_tuple_unpack_1__element_5.object = NULL;

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
    tmp_source_name_9 = par_self.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__get_cc_args );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = var_pp_opts.object;

    if ( tmp_call_arg_element_12 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81467 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = par_debug.object;

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81520 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = par_extra_preargs.object;

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81571 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 186;
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3( tmp_called_7, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }
    assert( var_cc_args.object == NULL );
    var_cc_args.object = tmp_assign_source_22;

    tmp_binop_left_4 = const_str_digest_aad631fec92179afa4664bb117c27de7;
    tmp_source_name_10 = const_str_space;
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_join );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_15 = var_cc_args.object;

    frame_function->f_lineno = 187;
    tmp_binop_right_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }
    if (var_display.object == NULL)
    {
        var_display.object = tmp_assign_source_23;
    }
    else
    {
        PyObject *old = var_display.object;
        var_display.object = tmp_assign_source_23;
        Py_DECREF( old );
    }
    tmp_cond_value_2 = par_extra_postargs.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81407 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
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
    tmp_assign_source_24 = var_display.object;

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_24 );

    // Tried code
    tmp_binop_left_5 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_left_6 = const_str_digest_b4ffdddcf7a1599de6b44486c9c2fba3;
    tmp_source_name_11 = const_str_space;
    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_join );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_16 = par_extra_postargs.object;

    if ( tmp_call_arg_element_16 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81407 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto try_finally_handler_3;
    }

    frame_function->f_lineno = 189;
    tmp_binop_right_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto try_finally_handler_3;
    }
    tmp_binop_right_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto try_finally_handler_3;
    }
    tmp_assign_source_25 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto try_finally_handler_3;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_25;

    tmp_compare_left_3 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_3 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_26 = tmp_inplace_assign_1__inplace_end.object;

    assert( var_display.object != NULL );
    {
        PyObject *old = var_display.object;
        var_display.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
        Py_DECREF( old );
    }

    branch_no_6:;
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
    branch_no_5:;
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_info );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = var_display.object;

    if ( tmp_call_arg_element_17 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24776 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 190;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_isinstance_inst_2 = par_self.object;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = var_FCompiler.object;

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81630 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
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
    tmp_source_name_13 = var_build.object;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81685 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_keys );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 195;
    tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_11 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }
    assert( var_objects_to_build.object == NULL );
    var_objects_to_build.object = tmp_assign_source_27;

    tmp_iter_arg_3 = var_objects.object;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81736 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_28;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_29 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_29 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 196;
            goto try_finally_handler_4;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_29;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_29;
        Py_DECREF( old );
    }
    tmp_assign_source_30 = tmp_for_loop_2__iter_value.object;

    if (var_obj.object == NULL)
    {
        var_obj.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
    }
    else
    {
        PyObject *old = var_obj.object;
        var_obj.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
        Py_DECREF( old );
    }
    tmp_compare_left_4 = var_obj.object;

    tmp_compare_right_4 = var_objects_to_build.object;

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81789 ], 62, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto try_finally_handler_4;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto try_finally_handler_4;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    // Tried code
    tmp_subscr_target_2 = var_build.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81685 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 198;
        goto try_finally_handler_5;
    }

    tmp_subscr_subscript_2 = var_obj.object;

    tmp_iter_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto try_finally_handler_5;
    }
    tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_2__source_iter.object == NULL)
    {
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_31;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter.object;
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_31;
        Py_DECREF( old );
    }
    tmp_unpack_6 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_32 = UNPACK_PARAMETER_NEXT( tmp_unpack_6, 0 );
    if ( tmp_assign_source_32 == NULL )
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


        frame_function->f_lineno = 198;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_2__element_1.object == NULL)
    {
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_32;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_1.object;
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_32;
        Py_DECREF( old );
    }
    tmp_unpack_7 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_33 = UNPACK_PARAMETER_NEXT( tmp_unpack_7, 1 );
    if ( tmp_assign_source_33 == NULL )
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


        frame_function->f_lineno = 198;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_2__element_2.object == NULL)
    {
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_33;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_2.object;
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_33;
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
    tmp_assign_source_34 = tmp_tuple_unpack_2__element_1.object;

    if (var_src.object == NULL)
    {
        var_src.object = INCREASE_REFCOUNT( tmp_assign_source_34 );
    }
    else
    {
        PyObject *old = var_src.object;
        var_src.object = INCREASE_REFCOUNT( tmp_assign_source_34 );
        Py_DECREF( old );
    }
    tmp_assign_source_35 = tmp_tuple_unpack_2__element_2.object;

    if (var_ext.object == NULL)
    {
        var_ext.object = INCREASE_REFCOUNT( tmp_assign_source_35 );
    }
    else
    {
        PyObject *old = var_ext.object;
        var_ext.object = INCREASE_REFCOUNT( tmp_assign_source_35 );
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
    tmp_source_name_14 = par_self.object;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto try_finally_handler_4;
    }

    tmp_compare_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_compiler_type );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto try_finally_handler_4;
    }
    tmp_compare_right_5 = const_str_plain_absoft;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        frame_function->f_lineno = 199;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_compare_left_5 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_cyg2win32 );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cyg2win32 );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81851 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 200;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_18 = var_obj.object;

    if ( tmp_call_arg_element_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10401 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 200;
        goto try_finally_handler_4;
    }

    frame_function->f_lineno = 200;
    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_18 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 200;
        goto try_finally_handler_4;
    }
    if (var_obj.object == NULL)
    {
        var_obj.object = tmp_assign_source_36;
    }
    else
    {
        PyObject *old = var_obj.object;
        var_obj.object = tmp_assign_source_36;
        Py_DECREF( old );
    }
    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_cyg2win32 );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cyg2win32 );
    }

    if ( tmp_called_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81851 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_19 = var_src.object;

    if ( tmp_call_arg_element_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47743 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto try_finally_handler_4;
    }

    frame_function->f_lineno = 201;
    tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_19 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 201;
        goto try_finally_handler_4;
    }
    if (var_src.object == NULL)
    {
        var_src.object = tmp_assign_source_37;
    }
    else
    {
        PyObject *old = var_src.object;
        var_src.object = tmp_assign_source_37;
        Py_DECREF( old );
    }
    branch_no_9:;
    tmp_source_name_15 = par_self.object;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto try_finally_handler_4;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__compile );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_20 = var_obj.object;

    if ( tmp_call_arg_element_20 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10401 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_21 = var_src.object;

    if ( tmp_call_arg_element_21 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47743 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_22 = var_ext.object;

    if ( tmp_call_arg_element_22 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_23 = var_cc_args.object;

    if ( tmp_call_arg_element_23 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81889 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_24 = par_extra_postargs.object;

    if ( tmp_call_arg_element_24 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81407 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_25 = var_pp_opts.object;

    if ( tmp_call_arg_element_25 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81467 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto try_finally_handler_4;
    }

    frame_function->f_lineno = 202;
    tmp_unused = CALL_FUNCTION_WITH_ARGS6( tmp_called_14, tmp_call_arg_element_20, tmp_call_arg_element_21, tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24, tmp_call_arg_element_25 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
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
    goto branch_end_7;
    branch_no_7:;
    tmp_source_name_16 = var_build.object;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81685 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 204;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_items );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 204;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 204;
    tmp_iter_arg_5 = CALL_FUNCTION_NO_ARGS( tmp_called_15 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 204;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_38 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 204;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator.object == NULL );
    tmp_for_loop_3__for_iterator.object = tmp_assign_source_38;

    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator.object;

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
        frame_function->f_lineno = 204;
            goto try_finally_handler_6;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_39;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_39;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_6 = tmp_for_loop_3__iter_value.object;

    tmp_assign_source_40 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 204;
        goto try_finally_handler_7;
    }
    if (tmp_tuple_unpack_3__source_iter.object == NULL)
    {
        tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_40;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_3__source_iter.object;
        tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_40;
        Py_DECREF( old );
    }
    tmp_unpack_8 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_41 = UNPACK_PARAMETER_NEXT( tmp_unpack_8, 0 );
    if ( tmp_assign_source_41 == NULL )
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


        frame_function->f_lineno = 204;
        goto try_finally_handler_7;
    }
    if (tmp_tuple_unpack_3__element_1.object == NULL)
    {
        tmp_tuple_unpack_3__element_1.object = tmp_assign_source_41;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_3__element_1.object;
        tmp_tuple_unpack_3__element_1.object = tmp_assign_source_41;
        Py_DECREF( old );
    }
    tmp_unpack_9 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_42 = UNPACK_PARAMETER_NEXT( tmp_unpack_9, 1 );
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


        frame_function->f_lineno = 204;
        goto try_finally_handler_7;
    }
    if (tmp_tuple_unpack_3__element_2.object == NULL)
    {
        tmp_tuple_unpack_3__element_2.object = tmp_assign_source_42;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_3__element_2.object;
        tmp_tuple_unpack_3__element_2.object = tmp_assign_source_42;
        Py_DECREF( old );
    }
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

            goto try_finally_handler_7;
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

        goto try_finally_handler_7;
    }
    tmp_assign_source_43 = tmp_tuple_unpack_3__element_1.object;

    if (var_obj.object == NULL)
    {
        var_obj.object = INCREASE_REFCOUNT( tmp_assign_source_43 );
    }
    else
    {
        PyObject *old = var_obj.object;
        var_obj.object = INCREASE_REFCOUNT( tmp_assign_source_43 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_7 = tmp_tuple_unpack_3__element_2.object;

    tmp_assign_source_44 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 204;
        goto try_finally_handler_8;
    }
    if (tmp_tuple_unpack_4__source_iter.object == NULL)
    {
        tmp_tuple_unpack_4__source_iter.object = tmp_assign_source_44;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_4__source_iter.object;
        tmp_tuple_unpack_4__source_iter.object = tmp_assign_source_44;
        Py_DECREF( old );
    }
    tmp_unpack_10 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_45 = UNPACK_PARAMETER_NEXT( tmp_unpack_10, 0 );
    if ( tmp_assign_source_45 == NULL )
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


        frame_function->f_lineno = 204;
        goto try_finally_handler_8;
    }
    if (tmp_tuple_unpack_4__element_1.object == NULL)
    {
        tmp_tuple_unpack_4__element_1.object = tmp_assign_source_45;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_4__element_1.object;
        tmp_tuple_unpack_4__element_1.object = tmp_assign_source_45;
        Py_DECREF( old );
    }
    tmp_unpack_11 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_46 = UNPACK_PARAMETER_NEXT( tmp_unpack_11, 1 );
    if ( tmp_assign_source_46 == NULL )
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


        frame_function->f_lineno = 204;
        goto try_finally_handler_8;
    }
    if (tmp_tuple_unpack_4__element_2.object == NULL)
    {
        tmp_tuple_unpack_4__element_2.object = tmp_assign_source_46;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_4__element_2.object;
        tmp_tuple_unpack_4__element_2.object = tmp_assign_source_46;
        Py_DECREF( old );
    }
    tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_4 ); assert( PyIter_Check( tmp_iterator_name_4 ) );

    tmp_iterator_attempt_4 = (*Py_TYPE( tmp_iterator_name_4 )->tp_iternext)( tmp_iterator_name_4 );

    if (likely( tmp_iterator_attempt_4 == NULL ))
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
        Py_DECREF( tmp_iterator_attempt_4 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_8;
    }
    tmp_assign_source_47 = tmp_tuple_unpack_4__element_1.object;

    if (var_src.object == NULL)
    {
        var_src.object = INCREASE_REFCOUNT( tmp_assign_source_47 );
    }
    else
    {
        PyObject *old = var_src.object;
        var_src.object = INCREASE_REFCOUNT( tmp_assign_source_47 );
        Py_DECREF( old );
    }
    tmp_assign_source_48 = tmp_tuple_unpack_4__element_2.object;

    if (var_ext.object == NULL)
    {
        var_ext.object = INCREASE_REFCOUNT( tmp_assign_source_48 );
    }
    else
    {
        PyObject *old = var_ext.object;
        var_ext.object = INCREASE_REFCOUNT( tmp_assign_source_48 );
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

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_4__source_iter.object );
    tmp_tuple_unpack_4__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_1.object );
    tmp_tuple_unpack_4__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2.object );
    tmp_tuple_unpack_4__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_7;
    }

    goto finally_end_6;
    finally_end_6:;
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

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_3__source_iter.object );
    tmp_tuple_unpack_3__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1.object );
    tmp_tuple_unpack_3__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2.object );
    tmp_tuple_unpack_3__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_6;
    }

    goto finally_end_7;
    finally_end_7:;
    tmp_source_name_17 = par_self.object;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 205;
        goto try_finally_handler_6;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__compile );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 205;
        goto try_finally_handler_6;
    }
    tmp_call_arg_element_26 = var_obj.object;

    if ( tmp_call_arg_element_26 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10401 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 205;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_27 = var_src.object;

    if ( tmp_call_arg_element_27 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47743 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 205;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_28 = var_ext.object;

    if ( tmp_call_arg_element_28 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 9409 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 205;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_29 = var_cc_args.object;

    if ( tmp_call_arg_element_29 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81889 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 205;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_30 = par_extra_postargs.object;

    if ( tmp_call_arg_element_30 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81407 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 205;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_31 = var_pp_opts.object;

    if ( tmp_call_arg_element_31 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81467 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 205;
        goto try_finally_handler_6;
    }

    frame_function->f_lineno = 205;
    tmp_unused = CALL_FUNCTION_WITH_ARGS6( tmp_called_16, tmp_call_arg_element_26, tmp_call_arg_element_27, tmp_call_arg_element_28, tmp_call_arg_element_29, tmp_call_arg_element_30, tmp_call_arg_element_31 );
    Py_DECREF( tmp_called_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 205;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 204;
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
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto frame_exception_exit_1;
    }

    goto finally_end_8;
    finally_end_8:;
    branch_end_7:;
    tmp_return_value = var_objects.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81736 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 208;
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
    if ((var_FCompiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_FCompiler,
            var_FCompiler.object
        );

    }
    if ((var_display.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_display,
            var_display.object
        );

    }
    if ((var_fc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fc,
            var_fc.object
        );

    }
    if ((var_fcomp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fcomp,
            var_fcomp.object
        );

    }
    if ((var_ccomp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ccomp,
            var_ccomp.object
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
    if ((var_pp_opts.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pp_opts,
            var_pp_opts.object
        );

    }
    if ((var_build.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build,
            var_build.object
        );

    }
    if ((var_cc_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cc_args,
            var_cc_args.object
        );

    }
    if ((var_objects_to_build.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_objects_to_build,
            var_objects_to_build.object
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
    if ((var_src.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_src,
            var_src.object
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
    if ((par_sources.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sources,
            par_sources.object
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
    if ((par_macros.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_macros,
            par_macros.object
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
    if ((par_depends.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_depends,
            par_depends.object
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
static PyObject *fparse_function_4_CCompiler_compile_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_sources = NULL;
    PyObject *_python_par_output_dir = NULL;
    PyObject *_python_par_macros = NULL;
    PyObject *_python_par_include_dirs = NULL;
    PyObject *_python_par_debug = NULL;
    PyObject *_python_par_extra_preargs = NULL;
    PyObject *_python_par_extra_postargs = NULL;
    PyObject *_python_par_depends = NULL;
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
                PyErr_Format( PyExc_TypeError, "CCompiler_compile() keywords must be strings" );
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
            if ( found == false && const_str_plain_output_dir == key )
            {
                assert( _python_par_output_dir == NULL );
                _python_par_output_dir = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_macros == key )
            {
                assert( _python_par_macros == NULL );
                _python_par_macros = value;

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
            if ( found == false && const_str_plain_depends == key )
            {
                assert( _python_par_depends == NULL );
                _python_par_depends = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_output_dir, key ) == 1 )
            {
                assert( _python_par_output_dir == NULL );
                _python_par_output_dir = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_macros, key ) == 1 )
            {
                assert( _python_par_macros == NULL );
                _python_par_macros = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_depends, key ) == 1 )
            {
                assert( _python_par_depends == NULL );
                _python_par_depends = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "CCompiler_compile() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_sources != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_sources = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_sources == NULL )
    {
        if ( 1 + self->m_defaults_given >= 9  )
        {
            _python_par_sources = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 9 ) );
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
         if (unlikely( _python_par_output_dir != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_output_dir = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_output_dir == NULL )
    {
        if ( 2 + self->m_defaults_given >= 9  )
        {
            _python_par_output_dir = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 9 ) );
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
         if (unlikely( _python_par_macros != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_macros = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_macros == NULL )
    {
        if ( 3 + self->m_defaults_given >= 9  )
        {
            _python_par_macros = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 9 ) );
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
         if (unlikely( _python_par_include_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_include_dirs = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_include_dirs == NULL )
    {
        if ( 4 + self->m_defaults_given >= 9  )
        {
            _python_par_include_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 9 ) );
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
         if (unlikely( _python_par_debug != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_debug = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_debug == NULL )
    {
        if ( 5 + self->m_defaults_given >= 9  )
        {
            _python_par_debug = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 9 ) );
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
         if (unlikely( _python_par_extra_preargs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_extra_preargs = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_extra_preargs == NULL )
    {
        if ( 6 + self->m_defaults_given >= 9  )
        {
            _python_par_extra_preargs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 9 ) );
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
         if (unlikely( _python_par_extra_postargs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_extra_postargs = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_extra_postargs == NULL )
    {
        if ( 7 + self->m_defaults_given >= 9  )
        {
            _python_par_extra_postargs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 9 ) );
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
         if (unlikely( _python_par_depends != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_depends = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_depends == NULL )
    {
        if ( 8 + self->m_defaults_given >= 9  )
        {
            _python_par_depends = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 9 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_sources == NULL || _python_par_output_dir == NULL || _python_par_macros == NULL || _python_par_include_dirs == NULL || _python_par_debug == NULL || _python_par_extra_preargs == NULL || _python_par_extra_postargs == NULL || _python_par_depends == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_sources, _python_par_output_dir, _python_par_macros, _python_par_include_dirs, _python_par_debug, _python_par_extra_preargs, _python_par_extra_postargs, _python_par_depends };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_CCompiler_compile_of_module_numpy$distutils$ccompiler( self, _python_par_self, _python_par_sources, _python_par_output_dir, _python_par_macros, _python_par_include_dirs, _python_par_debug, _python_par_extra_preargs, _python_par_extra_postargs, _python_par_depends );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_sources );
    Py_XDECREF( _python_par_output_dir );
    Py_XDECREF( _python_par_macros );
    Py_XDECREF( _python_par_include_dirs );
    Py_XDECREF( _python_par_debug );
    Py_XDECREF( _python_par_extra_preargs );
    Py_XDECREF( _python_par_extra_postargs );
    Py_XDECREF( _python_par_depends );

    return NULL;
}

static PyObject *dparse_function_4_CCompiler_compile_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 9 )
    {
        return impl_function_4_CCompiler_compile_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_CCompiler_compile_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_cmd, PyObject *_python_par_ignore )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectSharedLocalVariable par_cmd; par_cmd.storage->object = _python_par_cmd;
    PyObjectSharedLocalVariable par_ignore; par_ignore.storage->object = _python_par_ignore;
    PyObjectLocalVariable var_allow;
    PyObjectLocalVariable var_name;
    PyObjectLocalVariable var_value;
    PyObjectLocalVariable var_macro;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
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
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f716128919f97d72c3b91bc79f236ba9, module_numpy$distutils$ccompiler );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_info );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = const_str_digest_756fb54f5f36f49e888fe0abaadcbb62;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_source_name_5 = par_cmd.storage->object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 231;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = MAKE_FUNCTION_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( par_cmd, par_ignore );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    assert( var_allow.object == NULL );
    var_allow.object = tmp_assign_source_1;

    tmp_called_2 = var_allow.object;

    tmp_call_arg_element_2 = const_str_plain_include_dirs;
    frame_function->f_lineno = 236;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 236;
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
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_set_include_dirs );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_cmd.storage->object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_include_dirs );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 237;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_called_4 = var_allow.object;

    tmp_call_arg_element_4 = const_str_plain_define;
    frame_function->f_lineno = 238;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 238;
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
    tmp_source_name_8 = par_cmd.storage->object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_define );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
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
        frame_function->f_lineno = 239;
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


        frame_function->f_lineno = 239;
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


        frame_function->f_lineno = 239;
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


        frame_function->f_lineno = 239;
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

    if (var_value.object == NULL)
    {
        var_value.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_value.object;
        var_value.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
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
    tmp_source_name_9 = par_self.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 240;
        goto try_finally_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_define_macro );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_5 = var_name.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 240;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_6 = var_value.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5634 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 240;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 240;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
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
    branch_no_2:;
    tmp_called_6 = var_allow.object;

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81942 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = const_str_plain_undef;
    frame_function->f_lineno = 241;
    tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_7 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 241;
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
    tmp_source_name_10 = par_cmd.storage->object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_undef );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
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
        frame_function->f_lineno = 242;
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

    if (var_macro.object == NULL)
    {
        var_macro.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = var_macro.object;
        var_macro.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    tmp_source_name_11 = par_self.object;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto try_finally_handler_3;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_undefine_macro );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_8 = var_macro.object;

    frame_function->f_lineno = 243;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
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
    branch_no_3:;
    tmp_called_8 = var_allow.object;

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81942 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = const_str_plain_libraries;
    frame_function->f_lineno = 244;
    tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_9 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 244;
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
    tmp_source_name_12 = par_self.object;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_set_libraries );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = par_self.object;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_libraries );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_cmd.storage->object;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_libraries );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 245;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    tmp_called_10 = var_allow.object;

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81942 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = const_str_plain_library_dirs;
    frame_function->f_lineno = 246;
    tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_11 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
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
    tmp_source_name_15 = par_self.object;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_set_library_dirs );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = par_self.object;

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_library_dirs );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = par_cmd.storage->object;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_library_dirs );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 247;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    tmp_called_12 = var_allow.object;

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81942 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = const_str_plain_rpath;
    frame_function->f_lineno = 248;
    tmp_cond_value_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_13 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
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
    tmp_source_name_18 = par_self.object;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_set_runtime_library_dirs );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = par_cmd.storage->object;

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_rpath );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );

        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 249;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_arg_element_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_called_14 = var_allow.object;

    if ( tmp_called_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81942 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_15 = const_str_plain_link_objects;
    frame_function->f_lineno = 250;
    tmp_cond_value_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_15 );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if (tmp_cond_truth_7 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_20 = par_self.object;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_set_link_objects );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_source_name_21 = par_cmd.storage->object;

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_16 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_link_objects );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_15 );

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 251;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_15 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;

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
    if ((var_allow.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_allow,
            var_allow.object
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
    if ((var_value.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_value,
            var_value.object
        );

    }
    if ((var_macro.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_macro,
            var_macro.object
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
    if ((par_cmd.storage != NULL && par_cmd.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmd,
            par_cmd.storage->object
        );

    }
    if ((par_ignore.storage != NULL && par_ignore.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ignore,
            par_ignore.storage->object
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
static PyObject *fparse_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_cmd = NULL;
    PyObject *_python_par_ignore = NULL;
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
                PyErr_Format( PyExc_TypeError, "CCompiler_customize_cmd() keywords must be strings" );
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
            if ( found == false && const_str_plain_cmd == key )
            {
                assert( _python_par_cmd == NULL );
                _python_par_cmd = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ignore == key )
            {
                assert( _python_par_ignore == NULL );
                _python_par_ignore = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cmd, key ) == 1 )
            {
                assert( _python_par_cmd == NULL );
                _python_par_cmd = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ignore, key ) == 1 )
            {
                assert( _python_par_ignore == NULL );
                _python_par_ignore = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "CCompiler_customize_cmd() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_cmd != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_cmd = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_cmd == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_cmd = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_ignore != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_ignore = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_ignore == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_ignore = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_cmd == NULL || _python_par_ignore == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_cmd, _python_par_ignore };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( self, _python_par_self, _python_par_cmd, _python_par_ignore );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_cmd );
    Py_XDECREF( _python_par_ignore );

    return NULL;
}

static PyObject *dparse_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_attr )
{
    // The context of the function.
    struct _context_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler_t *_python_context = (struct _context_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalVariable par_attr; par_attr.object = _python_par_attr;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    int tmp_tried_lineno_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9ce2944c3cd92c8e807f3865ad3307b8, module_numpy$distutils$ccompiler );
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
    tmp_return_value = NULL;
    // Tried code
    tmp_getattr_target_1 = _python_context->closure_cmd.storage->object;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80687 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto try_finally_handler_2;
    }

    tmp_getattr_attr_1 = par_attr.object;

    if ( tmp_getattr_attr_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25199 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto try_finally_handler_2;
    }

    tmp_getattr_default_1 = Py_None;
    tmp_compexpr_left_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto try_finally_handler_2;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_assign_source_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_cond_value_1 = tmp_and_1__value_1.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
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
    tmp_return_value = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = par_attr.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25199 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto try_finally_handler_3;
    }

    tmp_compexpr_right_2 = _python_context->closure_ignore.storage->object;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81993 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto try_finally_handler_3;
    }

    tmp_return_value = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
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
    tmp_return_value = tmp_and_1__value_1.object;

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
    Py_INCREF( tmp_return_value );
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
    if ((par_attr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_attr,
            par_attr.object
        );

    }
    if ((_python_context->closure_cmd.storage != NULL && _python_context->closure_cmd.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmd,
            _python_context->closure_cmd.storage->object
        );

    }
    if ((_python_context->closure_ignore.storage != NULL && _python_context->closure_ignore.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ignore,
            _python_context->closure_ignore.storage->object
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
static PyObject *fparse_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_attr = NULL;
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
                PyErr_Format( PyExc_TypeError, "allow() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_attr == key )
            {
                assert( _python_par_attr == NULL );
                _python_par_attr = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_attr, key ) == 1 )
            {
                assert( _python_par_attr == NULL );
                _python_par_attr = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "allow() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_attr != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_attr = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_attr == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_attr = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_attr == NULL ))
    {
        PyObject *values[] = { _python_par_attr };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( self, _python_par_attr );

error_exit:;

    Py_XDECREF( _python_par_attr );

    return NULL;
}

static PyObject *dparse_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6__compiler_to_string_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_compiler )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_compiler; par_compiler.object = _python_par_compiler;
    PyObjectLocalVariable var_props;
    PyObjectLocalVariable var_mx;
    PyObjectLocalVariable var_keys;
    PyObjectLocalVariable var_key;
    PyObjectLocalVariable var_v;
    PyObjectLocalVariable var_lines;
    PyObjectLocalVariable var_format;
    PyObjectLocalVariable var_prop;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_props.object == NULL );
    var_props.object = tmp_assign_source_1;

    tmp_assign_source_2 = const_int_0;
    assert( var_mx.object == NULL );
    var_mx.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d9e844729681363ae72d8c727e305c78, module_numpy$distutils$ccompiler );
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
    tmp_source_name_2 = par_compiler.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82045 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_executables );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 258;
    tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    assert( var_keys.object == NULL );
    var_keys.object = tmp_assign_source_3;

    tmp_iter_arg_1 = const_tuple_a08553a40a5b469c5d1e8e2e2f266ad4_tuple;
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
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
        frame_function->f_lineno = 259;
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

    if (var_key.object == NULL)
    {
        var_key.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = var_key.object;
        var_key.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    tmp_compare_left_1 = var_key.object;

    tmp_compare_right_1 = var_keys.object;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20174 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto try_finally_handler_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_3 = var_keys.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20174 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto try_finally_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = var_key.object;

    frame_function->f_lineno = 263;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
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
    tmp_iter_arg_2 = var_keys.object;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20174 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
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
        frame_function->f_lineno = 264;
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

    if (var_key.object == NULL)
    {
        var_key.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_key.object;
        var_key.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_hasattr_source_1 = par_compiler.object;

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82045 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto try_finally_handler_2;
    }

    tmp_hasattr_attr_1 = var_key.object;

    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto try_finally_handler_2;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_getattr_target_1 = par_compiler.object;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82045 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 266;
        goto try_finally_handler_2;
    }

    tmp_getattr_attr_1 = var_key.object;

    tmp_assign_source_10 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto try_finally_handler_2;
    }
    if (var_v.object == NULL)
    {
        var_v.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_called_3 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_2 = var_mx.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67163 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto try_finally_handler_2;
    }

    tmp_len_arg_1 = var_key.object;

    tmp_call_arg_element_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 267;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_2;
    }
    if (var_mx.object == NULL)
    {
        var_mx.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = var_mx.object;
        var_mx.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_source_name_4 = var_props.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82099 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto try_finally_handler_2;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_4 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_key.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 0, tmp_tuple_element_1 );
    tmp_unary_arg_1 = var_v.object;

    tmp_tuple_element_1 = UNARY_OPERATION( PyObject_Repr, tmp_unary_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 268;
        goto try_finally_handler_2;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 268;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
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
    tmp_assign_source_12 = PyList_New( 0 );
    assert( var_lines.object == NULL );
    var_lines.object = tmp_assign_source_12;

    tmp_binop_left_2 = const_str_digest_75a8101b22051510b18a1d15c97e0ae5;
    tmp_binop_left_3 = var_mx.object;

    if ( tmp_binop_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67163 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_3 = const_int_pos_1;
    tmp_unary_arg_2 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_unary_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_2 = UNARY_OPERATION( PyObject_Repr, tmp_unary_arg_2 );
    Py_DECREF( tmp_unary_arg_2 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = const_str_digest_f5481b113e8cb5dd2d8d5d30ab3e0ae8;
    tmp_assign_source_13 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    assert( var_format.object == NULL );
    var_format.object = tmp_assign_source_13;

    tmp_iter_arg_3 = var_props.object;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82099 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator.object == NULL );
    tmp_for_loop_3__for_iterator.object = tmp_assign_source_14;

    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_15 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 271;
            goto try_finally_handler_3;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_assign_source_16 = tmp_for_loop_3__iter_value.object;

    if (var_prop.object == NULL)
    {
        var_prop.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
    }
    else
    {
        PyObject *old = var_prop.object;
        var_prop.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
        Py_DECREF( old );
    }
    tmp_source_name_5 = var_lines.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 16411 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 272;
        goto try_finally_handler_3;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 272;
        goto try_finally_handler_3;
    }
    tmp_binop_left_4 = var_format.object;

    if ( tmp_binop_left_4 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 272;
        goto try_finally_handler_3;
    }

    tmp_binop_right_4 = var_prop.object;

    tmp_call_arg_element_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 272;
        goto try_finally_handler_3;
    }
    frame_function->f_lineno = 272;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 272;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto try_finally_handler_3;
    }
    goto loop_start_3;
    loop_end_3:;
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
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

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
    tmp_source_name_6 = const_str_newline;
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = var_lines.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 16411 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 273;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
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
    if ((var_props.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_props,
            var_props.object
        );

    }
    if ((var_mx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mx,
            var_mx.object
        );

    }
    if ((var_keys.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_keys,
            var_keys.object
        );

    }
    if ((var_key.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_key,
            var_key.object
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
    if ((var_lines.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lines,
            var_lines.object
        );

    }
    if ((var_format.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_format,
            var_format.object
        );

    }
    if ((var_prop.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_prop,
            var_prop.object
        );

    }
    if ((par_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_compiler,
            par_compiler.object
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
static PyObject *fparse_function_6__compiler_to_string_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_compiler = NULL;
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
                PyErr_Format( PyExc_TypeError, "_compiler_to_string() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_compiler == key )
            {
                assert( _python_par_compiler == NULL );
                _python_par_compiler = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_compiler, key ) == 1 )
            {
                assert( _python_par_compiler == NULL );
                _python_par_compiler = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_compiler_to_string() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_compiler != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_compiler = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_compiler == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_compiler = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_compiler == NULL ))
    {
        PyObject *values[] = { _python_par_compiler };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6__compiler_to_string_of_module_numpy$distutils$ccompiler( self, _python_par_compiler );

error_exit:;

    Py_XDECREF( _python_par_compiler );

    return NULL;
}

static PyObject *dparse_function_6__compiler_to_string_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_6__compiler_to_string_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6__compiler_to_string_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_CCompiler_show_customization_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_attrname;
    PyObjectLocalVariable var_attr;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
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
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0f14559454f6a1d334c494138288da26, module_numpy$distutils$ccompiler );
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
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto try_except_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_version );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 301;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
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
    try_except_end_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__global_log );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_threshold );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 304;
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
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_8139e2e77c3f463770c65fc89cdc2f52;
    frame_function->f_lineno = 305;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_3 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 306;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__compiler_to_string );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compiler_to_string );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82150 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_self.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 307;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 307;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_digest_8139e2e77c3f463770c65fc89cdc2f52;
    frame_function->f_lineno = 308;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

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
    if ((var_attrname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_attrname,
            var_attrname.object
        );

    }
    if ((var_attr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_attr,
            var_attr.object
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
static PyObject *fparse_function_7_CCompiler_show_customization_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "CCompiler_show_customization() keywords must be strings" );
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
                   "CCompiler_show_customization() got an unexpected keyword argument '%s'",
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


    return impl_function_7_CCompiler_show_customization_of_module_numpy$distutils$ccompiler( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_7_CCompiler_show_customization_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_7_CCompiler_show_customization_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_CCompiler_show_customization_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_CCompiler_customize_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dist, PyObject *_python_par_need_cxx )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_dist; par_dist.object = _python_par_dist;
    PyObjectLocalVariable par_need_cxx; par_need_cxx.object = _python_par_need_cxx;
    PyObjectLocalVariable var_a;
    PyObjectLocalVariable var_b;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_list_element_1;
    int tmp_res;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d0a4123eda9fd583b95e7ad0e85c8742, module_numpy$distutils$ccompiler );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_info );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = const_str_digest_b28a3f4d5438b3141e85648c06a2c61a;
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 343;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_customize_compiler );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_customize_compiler );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82198 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_self.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 344;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_1 = par_need_cxx.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82245 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 345;
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
    // Tried block of try/except
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 350;
        goto try_except_handler_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_compiler_so );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 350;
        goto try_except_handler_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_remove );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 350;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_3 = const_str_digest_156e7189431f3e8f47855f1996978eb4;
    frame_function->f_lineno = 350;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 350;
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
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_AttributeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
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
    goto frame_exception_exit_1;
    branch_no_2:;
    try_except_end_1:;
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_hasattr_value_1 = par_self.object;

    if ( tmp_hasattr_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 354;
        goto try_finally_handler_2;
    }

    tmp_hasattr_attr_1 = const_str_plain_compiler;
    tmp_assign_source_1 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_cond_value_3 = tmp_and_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
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
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_1 = const_str_plain_cc;
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 354;
        goto try_finally_handler_3;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_compiler );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
        goto try_finally_handler_3;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compexpr_right_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
        goto try_finally_handler_3;
    }
    tmp_cond_value_2 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_1 );

        frame_function->f_lineno = 354;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_compexpr_right_1 );
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
    tmp_cond_value_2 = tmp_and_1__value_1.object;

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
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
        goto try_finally_handler_1;
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
    tmp_source_name_7 = par_self.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto try_finally_handler_1;
    }

    tmp_cond_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_compiler_cxx );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 355;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_source_name_9 = par_self.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 356;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_compiler );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_2 = const_int_0;
    tmp_source_name_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto try_finally_handler_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_startswith );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_4 = const_str_plain_gcc;
    frame_function->f_lineno = 356;
    tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 356;
        goto try_finally_handler_1;
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
    // Tried code
    tmp_iter_arg_1 = const_tuple_str_plain_gcc_str_digest_644b1f5211d64ec52727780e74026f6e_tuple;
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_2;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_3 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_3 == NULL )
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


        frame_function->f_lineno = 357;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_3;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_4 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
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


        frame_function->f_lineno = 357;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_4;

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
    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1.object;

    assert( var_a.object == NULL );
    var_a.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2.object;

    assert( var_b.object == NULL );
    var_b.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

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
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

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
    goto branch_end_5;
    branch_no_5:;
    // Tried code
    tmp_iter_arg_2 = const_tuple_str_plain_cc_str_digest_6ce809eacf90ba125b40fa4bd903962e_tuple;
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 359;
        goto try_finally_handler_5;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_7;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_8 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 359;
        goto try_finally_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_8;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_9 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_9 == NULL )
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


        frame_function->f_lineno = 359;
        goto try_finally_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_9;

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
    tmp_assign_source_10 = tmp_tuple_unpack_2__element_1.object;

    assert( var_a.object == NULL );
    var_a.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

    tmp_assign_source_11 = tmp_tuple_unpack_2__element_2.object;

    assert( var_b.object == NULL );
    var_b.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

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
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_1;
    }

    goto finally_end_4;
    finally_end_4:;
    branch_end_5:;
    tmp_binop_left_2 = PyList_New( 1 );
    tmp_source_name_11 = par_self.object;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_compiler );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 360;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_3 = const_int_0;
    tmp_source_name_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 360;
        goto try_finally_handler_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_replace );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 360;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_5 = var_a.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_6 = var_b.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 360;
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 360;
        goto try_finally_handler_1;
    }
    PyList_SET_ITEM( tmp_binop_left_2, 0, tmp_list_element_1 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_source_name_12 = par_self.object;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 361;
        goto try_finally_handler_1;
    }

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_compiler );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 361;
        goto try_finally_handler_1;
    }
    tmp_binop_right_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 361;
        goto try_finally_handler_1;
    }
    tmp_assattr_name_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 360;
        goto try_finally_handler_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto try_finally_handler_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_compiler_cxx, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 360;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_hasattr_source_1 = par_self.object;

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 363;
        goto try_finally_handler_1;
    }

    tmp_hasattr_attr_2 = const_str_plain_compiler;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 363;
        goto try_finally_handler_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_warn );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }
    tmp_binop_left_3 = const_str_digest_14605c1b786f9388ed9c45ec7a9b204d;
    tmp_binop_right_3 = PyTuple_New( 1 );
    tmp_source_name_14 = par_self.object;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_compiler );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_2 );
    tmp_call_arg_element_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 364;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_warn );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }
    tmp_binop_left_4 = const_str_digest_d1401730c17fac674c5c2d7ff8a351f4;
    tmp_source_name_17 = par_self.object;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }

    tmp_source_name_16 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_17 );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }
    tmp_binop_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_8 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 365;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_3:;
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
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

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
    branch_no_1:;

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
    if ((var_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a,
            var_a.object
        );

    }
    if ((var_b.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b,
            var_b.object
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
    if ((par_dist.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dist,
            par_dist.object
        );

    }
    if ((par_need_cxx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_need_cxx,
            par_need_cxx.object
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
static PyObject *fparse_function_8_CCompiler_customize_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_dist = NULL;
    PyObject *_python_par_need_cxx = NULL;
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
                PyErr_Format( PyExc_TypeError, "CCompiler_customize() keywords must be strings" );
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
            if ( found == false && const_str_plain_dist == key )
            {
                assert( _python_par_dist == NULL );
                _python_par_dist = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_need_cxx == key )
            {
                assert( _python_par_need_cxx == NULL );
                _python_par_need_cxx = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dist, key ) == 1 )
            {
                assert( _python_par_dist == NULL );
                _python_par_dist = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_need_cxx, key ) == 1 )
            {
                assert( _python_par_need_cxx == NULL );
                _python_par_need_cxx = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "CCompiler_customize() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_dist != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_dist = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_dist == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_dist = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_need_cxx != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_need_cxx = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_need_cxx == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_need_cxx = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_dist == NULL || _python_par_need_cxx == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_dist, _python_par_need_cxx };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8_CCompiler_customize_of_module_numpy$distutils$ccompiler( self, _python_par_self, _python_par_dist, _python_par_need_cxx );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dist );
    Py_XDECREF( _python_par_need_cxx );

    return NULL;
}

static PyObject *dparse_function_8_CCompiler_customize_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_8_CCompiler_customize_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_CCompiler_customize_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_pat, PyObject *_python_par_ignore, PyObject *_python_par_start )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable par_pat; par_pat.storage->object = _python_par_pat;
    PyObjectSharedLocalVariable par_ignore; par_ignore.storage->object = _python_par_ignore;
    PyObjectSharedLocalVariable par_start; par_start.storage->object = _python_par_start;
    PyObjectLocalVariable var_matcher;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cc99fa88ff6ba82f56ba74d3357e87e3, module_numpy$distutils$ccompiler );
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
    tmp_assign_source_1 = MAKE_FUNCTION_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( par_ignore, par_pat, par_start );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }
    assert( var_matcher.object == NULL );
    var_matcher.object = tmp_assign_source_1;


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
    if ((var_matcher.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_matcher,
            var_matcher.object
        );

    }
    if ((par_pat.storage != NULL && par_pat.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pat,
            par_pat.storage->object
        );

    }
    if ((par_ignore.storage != NULL && par_ignore.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ignore,
            par_ignore.storage->object
        );

    }
    if ((par_start.storage != NULL && par_start.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_start,
            par_start.storage->object
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
    tmp_return_value = var_matcher.object;

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
static PyObject *fparse_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_pat = NULL;
    PyObject *_python_par_ignore = NULL;
    PyObject *_python_par_start = NULL;
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
                PyErr_Format( PyExc_TypeError, "simple_version_match() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_pat == key )
            {
                assert( _python_par_pat == NULL );
                _python_par_pat = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ignore == key )
            {
                assert( _python_par_ignore == NULL );
                _python_par_ignore = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_start == key )
            {
                assert( _python_par_start == NULL );
                _python_par_start = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_pat, key ) == 1 )
            {
                assert( _python_par_pat == NULL );
                _python_par_pat = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ignore, key ) == 1 )
            {
                assert( _python_par_ignore == NULL );
                _python_par_ignore = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_start, key ) == 1 )
            {
                assert( _python_par_start == NULL );
                _python_par_start = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "simple_version_match() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_pat != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_pat = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_pat == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_pat = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_ignore != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_ignore = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_ignore == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_ignore = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_start != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_start = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_start == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_start = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_pat == NULL || _python_par_ignore == NULL || _python_par_start == NULL ))
    {
        PyObject *values[] = { _python_par_pat, _python_par_ignore, _python_par_start };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( self, _python_par_pat, _python_par_ignore, _python_par_start );

error_exit:;

    Py_XDECREF( _python_par_pat );
    Py_XDECREF( _python_par_ignore );
    Py_XDECREF( _python_par_start );

    return NULL;
}

static PyObject *dparse_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_version_string )
{
    // The context of the function.
    struct _context_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler_t *_python_context = (struct _context_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_version_string; par_version_string.object = _python_par_version_string;
    PyObjectLocalVariable var_pos;
    PyObjectLocalVariable var_m;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    bool tmp_continue_1;
    PyObject *tmp_frame_locals;
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
    PyObject *tmp_source_name_8;
    int tmp_tried_lineno_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cdd28046c10c7aa3455cf106550f1383, module_numpy$distutils$ccompiler );
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
    tmp_source_name_1 = par_version_string.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82299 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_replace );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_newline;
    tmp_call_arg_element_2 = const_str_space;
    frame_function->f_lineno = 399;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }
    if (par_version_string.object == NULL)
    {
        par_version_string.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_version_string.object;
        par_version_string.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_assign_source_2 = const_int_0;
    assert( var_pos.object == NULL );
    var_pos.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_cond_value_1 = _python_context->closure_start.storage->object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 401;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4450 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_match );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = _python_context->closure_start.storage->object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_version_string.object;

    frame_function->f_lineno = 402;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }
    assert( var_m.object == NULL );
    var_m.object = tmp_assign_source_3;

    tmp_cond_value_2 = var_m.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 403;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_3 = var_m.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_end );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 405;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }
    assert( var_pos.object != NULL );
    {
        PyObject *old = var_pos.object;
        var_pos.object = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_1:;
    loop_start_1:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4450 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_search );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = _python_context->closure_pat.storage->object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82359 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_1 = par_version_string.object;

    tmp_slice_lower_1 = var_pos.object;

    if ( tmp_slice_lower_1 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3710 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, Py_None );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 407;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    if (var_m.object == NULL)
    {
        var_m.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = var_m.object;
        var_m.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_cond_value_3 = var_m.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_continue_1 = false;
    // Tried code
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_assign_source_6 = _python_context->closure_ignore.storage->object;

    if ( tmp_assign_source_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81993 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 410;
        goto try_finally_handler_2;
    }

    if (tmp_and_1__value_1.object == NULL)
    {
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = tmp_and_1__value_1.object;
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    tmp_cond_value_5 = tmp_and_1__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
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
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4450 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 410;
        goto try_finally_handler_3;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_match );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_7 = _python_context->closure_ignore.storage->object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81993 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 410;
        goto try_finally_handler_3;
    }

    tmp_source_name_6 = var_m.object;

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_group );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 410;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_9 = const_int_0;
    frame_function->f_lineno = 410;
    tmp_call_arg_element_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 410;
        goto try_finally_handler_3;
    }
    frame_function->f_lineno = 410;
    tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
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
    tmp_cond_value_4 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_4 );
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
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 410;
        goto try_finally_handler_1;
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
    tmp_source_name_7 = var_m.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 411;
        goto try_finally_handler_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_end );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 411;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 411;
    tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 411;
        goto try_finally_handler_1;
    }
    if (var_pos.object == NULL)
    {
        var_pos.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = var_pos.object;
        var_pos.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_continue_1 = true;
    goto try_finally_handler_start_1;
    branch_no_4:;
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

    // Continue if entered via continue.
    if ( tmp_continue_1 )
    {

    goto loop_start_1;
    }
    goto finally_end_3;
    finally_end_3:;
    goto loop_end_1;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 406;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_source_name_8 = var_m.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 414;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_group );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 414;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = const_int_0;
    frame_function->f_lineno = 414;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 414;
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
    if ((var_pos.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pos,
            var_pos.object
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_version_string.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_version_string,
            par_version_string.object
        );

    }
    if ((_python_context->closure_start.storage != NULL && _python_context->closure_start.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_start,
            _python_context->closure_start.storage->object
        );

    }
    if ((_python_context->closure_pat.storage != NULL && _python_context->closure_pat.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pat,
            _python_context->closure_pat.storage->object
        );

    }
    if ((_python_context->closure_ignore.storage != NULL && _python_context->closure_ignore.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ignore,
            _python_context->closure_ignore.storage->object
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
static PyObject *fparse_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_version_string = NULL;
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
                PyErr_Format( PyExc_TypeError, "matcher() keywords must be strings" );
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
            if ( found == false && const_str_plain_version_string == key )
            {
                assert( _python_par_version_string == NULL );
                _python_par_version_string = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_version_string, key ) == 1 )
            {
                assert( _python_par_version_string == NULL );
                _python_par_version_string = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "matcher() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_version_string != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_version_string = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_version_string == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_version_string = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_version_string == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_version_string };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( self, _python_par_self, _python_par_version_string );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_version_string );

    return NULL;
}

static PyObject *dparse_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_force, PyObject *_python_par_ok_status )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_force; par_force.object = _python_par_force;
    PyObjectLocalVariable par_ok_status; par_ok_status.object = _python_par_ok_status;
    PyObjectLocalVariable var_version_cmd;
    PyObjectLocalVariable var_matcher;
    PyObjectSharedLocalVariable var_pat;
    PyObjectLocalVariable var_status;
    PyObjectLocalVariable var_output;
    PyObjectLocalVariable var_version;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
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
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    PyObject *tmp_unary_arg_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2542444c1b3431fdc2f75855007c5cfc, module_numpy$distutils$ccompiler );
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
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_unary_arg_1 = par_force.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82408 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 437;
        goto try_finally_handler_2;
    }

    tmp_assign_source_1 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
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
    tmp_hasattr_value_1 = par_self.object;

    if ( tmp_hasattr_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 437;
        goto try_finally_handler_3;
    }

    tmp_hasattr_attr_1 = const_str_plain_version;
    tmp_cond_value_1 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
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


        frame_function->f_lineno = 437;
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
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 438;
        goto try_finally_handler_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 438;
        goto try_finally_handler_1;
    }
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 439;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_find_executables );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 439;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried block of try/except
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 441;
        goto try_except_handler_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_version_cmd );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
        goto try_except_handler_1;
    }
    assert( var_version_cmd.object == NULL );
    var_version_cmd.object = tmp_assign_source_2;

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
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 442;
        goto frame_exception_exit_1;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_2:;
    try_except_end_1:;
    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_unary_arg_2 = var_version_cmd.object;

    if ( tmp_unary_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82459 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 444;
        goto try_finally_handler_5;
    }

    tmp_assign_source_3 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 444;
        goto try_finally_handler_5;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    tmp_cond_value_4 = tmp_or_1__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 444;
        goto try_finally_handler_5;
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
    tmp_cond_value_3 = tmp_or_1__value_1.object;

    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_1 = var_version_cmd.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82459 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 444;
        goto try_finally_handler_6;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_unary_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_unary_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 444;
        goto try_finally_handler_6;
    }
    tmp_cond_value_3 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_3 );
    Py_DECREF( tmp_unary_arg_3 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 444;
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
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 444;
        goto try_finally_handler_4;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_2;
    branch_no_3:;
    try_finally_handler_start_2:;
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
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_6;
    finally_end_6:;
    // Tried block of try/except
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 447;
        goto try_except_handler_2;
    }

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_version_match );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 447;
        goto try_except_handler_2;
    }
    assert( var_matcher.object == NULL );
    var_matcher.object = tmp_assign_source_4;

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
    tmp_compare_right_2 = PyExc_AttributeError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 448;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    // Tried block of try/except
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 450;
        goto try_except_handler_3;
    }

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_version_pattern );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 450;
        goto try_except_handler_3;
    }
    if (var_pat.storage->object == NULL)
    {
        var_pat.storage->object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = var_pat.storage->object;
        var_pat.storage->object = tmp_assign_source_5;
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
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_AttributeError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_5;
    branch_no_5:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_5:;
    try_except_end_3:;
    tmp_assign_source_6 = MAKE_FUNCTION_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( var_pat );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 453;
        goto frame_exception_exit_1;
    }
    if (var_matcher.object == NULL)
    {
        var_matcher.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = var_matcher.object;
        var_matcher.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_4:;
    try_except_end_2:;
    // Tried code
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_exec_command );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exec_command );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80776 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 460;
        goto try_finally_handler_7;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_version_cmd.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82459 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 460;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_b1a2663050a223bbe4faca09adcc1ea8 );
    frame_function->f_lineno = 460;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 460;
        goto try_finally_handler_7;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 460;
        goto try_finally_handler_7;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_7;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_8 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 460;
        goto try_finally_handler_7;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_8;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_9 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_9 == NULL )
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


        frame_function->f_lineno = 460;
        goto try_finally_handler_7;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_9;

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
    tmp_assign_source_10 = tmp_tuple_unpack_1__element_1.object;

    assert( var_status.object == NULL );
    var_status.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_2.object;

    assert( var_output.object == NULL );
    var_output.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

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

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
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
    tmp_assign_source_12 = Py_None;
    assert( var_version.object == NULL );
    var_version.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

    tmp_compare_left_4 = var_status.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82516 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 463;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = par_ok_status.object;

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82568 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 463;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 463;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_3 = var_matcher.object;

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82623 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 464;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = var_output.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82676 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 464;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 464;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 464;
        goto frame_exception_exit_1;
    }
    assert( var_version.object != NULL );
    {
        PyObject *old = var_version.object;
        var_version.object = tmp_assign_source_13;
        Py_DECREF( old );
    }

    tmp_cond_value_5 = var_version.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 465;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_LooseVersion );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LooseVersion );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82728 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 466;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = var_version.object;

    frame_function->f_lineno = 466;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 466;
        goto frame_exception_exit_1;
    }
    assert( var_version.object != NULL );
    {
        PyObject *old = var_version.object;
        var_version.object = tmp_assign_source_14;
        Py_DECREF( old );
    }

    branch_no_7:;
    branch_no_6:;
    tmp_assattr_name_1 = var_version.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14721 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 467;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 467;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_version, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 467;
        goto frame_exception_exit_1;
    }
    tmp_return_value = var_version.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14721 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 468;
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
    if ((var_version_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_version_cmd,
            var_version_cmd.object
        );

    }
    if ((var_matcher.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_matcher,
            var_matcher.object
        );

    }
    if ((var_pat.storage != NULL && var_pat.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pat,
            var_pat.storage->object
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
    if ((var_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_output,
            var_output.object
        );

    }
    if ((var_version.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_version,
            var_version.object
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
    if ((par_force.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_force,
            par_force.object
        );

    }
    if ((par_ok_status.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ok_status,
            par_ok_status.object
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
static PyObject *fparse_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_force = NULL;
    PyObject *_python_par_ok_status = NULL;
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
                PyErr_Format( PyExc_TypeError, "CCompiler_get_version() keywords must be strings" );
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
            if ( found == false && const_str_plain_force == key )
            {
                assert( _python_par_force == NULL );
                _python_par_force = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ok_status == key )
            {
                assert( _python_par_ok_status == NULL );
                _python_par_ok_status = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_force, key ) == 1 )
            {
                assert( _python_par_force == NULL );
                _python_par_force = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ok_status, key ) == 1 )
            {
                assert( _python_par_ok_status == NULL );
                _python_par_ok_status = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "CCompiler_get_version() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_force != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_force = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_force == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_force = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_ok_status != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_ok_status = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_ok_status == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_ok_status = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_force == NULL || _python_par_ok_status == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_force, _python_par_ok_status };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( self, _python_par_self, _python_par_force, _python_par_ok_status );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_force );
    Py_XDECREF( _python_par_ok_status );

    return NULL;
}

static PyObject *dparse_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_version_string )
{
    // The context of the function.
    struct _context_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler_t *_python_context = (struct _context_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalVariable par_version_string; par_version_string.object = _python_par_version_string;
    PyObjectLocalVariable var_m;
    PyObjectLocalVariable var_version;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0442856215f460f5dbc2b170a27a108a, module_numpy$distutils$ccompiler );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4450 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 454;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_match );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 454;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = _python_context->closure_pat.storage->object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82359 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 454;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_version_string.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82299 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 454;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 454;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 454;
        goto frame_exception_exit_1;
    }
    assert( var_m.object == NULL );
    var_m.object = tmp_assign_source_1;

    tmp_cond_value_1 = var_m.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 455;
        goto frame_exception_exit_1;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = var_m.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_group );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 457;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_plain_version;
    frame_function->f_lineno = 457;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 457;
        goto frame_exception_exit_1;
    }
    assert( var_version.object == NULL );
    var_version.object = tmp_assign_source_2;


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
    if ((var_m.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_m,
            var_m.object
        );

    }
    if ((var_version.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_version,
            var_version.object
        );

    }
    if ((_python_context->closure_pat.storage != NULL && _python_context->closure_pat.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pat,
            _python_context->closure_pat.storage->object
        );

    }
    if ((par_version_string.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_version_string,
            par_version_string.object
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
    tmp_return_value = var_version.object;

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
static PyObject *fparse_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_version_string = NULL;
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
                PyErr_Format( PyExc_TypeError, "matcher() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_version_string == key )
            {
                assert( _python_par_version_string == NULL );
                _python_par_version_string = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_version_string, key ) == 1 )
            {
                assert( _python_par_version_string == NULL );
                _python_par_version_string = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "matcher() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_version_string != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_version_string = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_version_string == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_version_string = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_version_string == NULL ))
    {
        PyObject *values[] = { _python_par_version_string };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( self, _python_par_version_string );

error_exit:;

    Py_XDECREF( _python_par_version_string );

    return NULL;
}

static PyObject *dparse_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_CCompiler_cxx_compiler_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_cxx;
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
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_subscr_target_5;
    int tmp_tried_lineno_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2fbc71d8992aa72a150459cff95a7d75, module_numpy$distutils$ccompiler );
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

        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compiler_type );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_msvc;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 486;
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
    tmp_return_value = par_self.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_copy );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82769 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 487;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_self.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 487;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 487;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 487;
        goto frame_exception_exit_1;
    }
    assert( var_cxx.object == NULL );
    var_cxx.object = tmp_assign_source_1;

    tmp_binop_left_1 = PyList_New( 1 );
    tmp_source_name_2 = var_cxx.object;

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_compiler_cxx );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_list_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_binop_left_1, 0, tmp_list_element_1 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_source_name_3 = var_cxx.object;

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_compiler_so );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_cxx.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_compiler_so, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 489;
        goto try_finally_handler_2;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_platform );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 489;
        goto try_finally_handler_2;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_startswith );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 489;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_2 = const_str_plain_aix;
    frame_function->f_lineno = 489;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 489;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_2;

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 489;
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
    tmp_compexpr_left_1 = const_str_plain_ld_so_aix;
    tmp_source_name_6 = var_cxx.object;

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_linker_so );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 489;
        goto try_finally_handler_3;
    }
    tmp_subscr_subscript_2 = const_int_0;
    tmp_compexpr_right_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 489;
        goto try_finally_handler_3;
    }
    tmp_cond_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_1 );

        frame_function->f_lineno = 489;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_compexpr_right_1 );
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


        frame_function->f_lineno = 489;
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
    tmp_binop_left_2 = PyList_New( 2 );
    tmp_source_name_7 = var_cxx.object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82802 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 491;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_linker_so );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 491;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_3 = const_int_0;
    tmp_list_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 491;
        goto try_finally_handler_1;
    }
    PyList_SET_ITEM( tmp_binop_left_2, 0, tmp_list_element_2 );
    tmp_source_name_8 = var_cxx.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82802 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 491;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_compiler_cxx );
    if ( tmp_subscr_target_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 491;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_4 = const_int_0;
    tmp_list_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_target_4 );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 491;
        goto try_finally_handler_1;
    }
    PyList_SET_ITEM( tmp_binop_left_2, 1, tmp_list_element_2 );
    tmp_sliceslicedel_index_lower_2 = 2;
    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
    tmp_source_name_9 = var_cxx.object;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82802 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 492;
        goto try_finally_handler_1;
    }

    tmp_slice_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_linker_so );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 492;
        goto try_finally_handler_1;
    }
    tmp_binop_right_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 492;
        goto try_finally_handler_1;
    }
    tmp_assattr_name_2 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 491;
        goto try_finally_handler_1;
    }
    tmp_assattr_target_2 = var_cxx.object;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82802 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 491;
        goto try_finally_handler_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_linker_so, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_function->f_lineno = 491;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    goto branch_end_2;
    branch_no_2:;
    tmp_binop_left_3 = PyList_New( 1 );
    tmp_source_name_10 = var_cxx.object;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82802 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 494;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_compiler_cxx );
    if ( tmp_subscr_target_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 494;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_5 = const_int_0;
    tmp_list_element_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_target_5 );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 494;
        goto try_finally_handler_1;
    }
    PyList_SET_ITEM( tmp_binop_left_3, 0, tmp_list_element_3 );
    tmp_sliceslicedel_index_lower_3 = 1;
    tmp_slice_index_upper_3 = PY_SSIZE_T_MAX;
    tmp_source_name_11 = var_cxx.object;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82802 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 494;
        goto try_finally_handler_1;
    }

    tmp_slice_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_linker_so );
    if ( tmp_slice_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 494;
        goto try_finally_handler_1;
    }
    tmp_binop_right_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    Py_DECREF( tmp_slice_source_3 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 494;
        goto try_finally_handler_1;
    }
    tmp_assattr_name_3 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 494;
        goto try_finally_handler_1;
    }
    tmp_assattr_target_3 = var_cxx.object;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82802 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 494;
        goto try_finally_handler_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_linker_so, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        frame_function->f_lineno = 494;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    branch_end_2:;
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
    tmp_return_value = var_cxx.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82802 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 495;
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
    if ((var_cxx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cxx,
            var_cxx.object
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
static PyObject *fparse_function_11_CCompiler_cxx_compiler_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "CCompiler_cxx_compiler() keywords must be strings" );
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
                   "CCompiler_cxx_compiler() got an unexpected keyword argument '%s'",
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


    return impl_function_11_CCompiler_cxx_compiler_of_module_numpy$distutils$ccompiler( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_11_CCompiler_cxx_compiler_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_11_CCompiler_cxx_compiler_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_CCompiler_cxx_compiler_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_new_compiler_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_plat, PyObject *_python_par_compiler, PyObject *_python_par_verbose, PyObject *_python_par_dry_run, PyObject *_python_par_force )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_plat; par_plat.object = _python_par_plat;
    PyObjectLocalVariable par_compiler; par_compiler.object = _python_par_compiler;
    PyObjectLocalVariable par_verbose; par_verbose.object = _python_par_verbose;
    PyObjectLocalVariable par_dry_run; par_dry_run.object = _python_par_dry_run;
    PyObjectLocalVariable par_force; par_force.object = _python_par_force;
    PyObjectLocalVariable var_module_name;
    PyObjectLocalVariable var_class_name;
    PyObjectLocalVariable var_long_description;
    PyObjectLocalVariable var_msg;
    PyObjectLocalVariable var_module;
    PyObjectLocalVariable var_klass;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_1__element_3;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
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
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    int tmp_exc_match_exception_match_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_fromlist_1;
    PyObject *tmp_import_fromlist_2;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_level_1;
    PyObject *tmp_import_level_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_modulename_1;
    PyObject *tmp_import_modulename_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_str_arg_2;
    PyObject *tmp_str_arg_3;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_vars_arg_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0e49d641982e133d1e92f2bbe98b5dda, module_numpy$distutils$ccompiler );
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
    tmp_compare_left_1 = par_plat.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82851 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 531;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 532;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 532;
        goto frame_exception_exit_1;
    }
    if (par_plat.object == NULL)
    {
        par_plat.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_plat.object;
        par_plat.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    branch_no_1:;
    // Tried block of try/except
    tmp_compare_left_2 = par_compiler.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82045 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 534;
        goto try_except_handler_1;
    }

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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_get_default_compiler );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_default_compiler );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82901 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 535;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_1 = par_plat.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82851 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 535;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 535;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 535;
        goto try_except_handler_1;
    }
    if (par_compiler.object == NULL)
    {
        par_compiler.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_compiler.object;
        par_compiler.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    branch_no_2:;
    // Tried code
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_compiler_class );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compiler_class );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82950 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 536;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = par_compiler.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82045 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 536;
        goto try_finally_handler_1;
    }

    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 536;
        goto try_finally_handler_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 536;
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


        frame_function->f_lineno = 536;
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


        frame_function->f_lineno = 536;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_5;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_6 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 2 );
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


        frame_function->f_lineno = 536;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_3.object == NULL );
    tmp_tuple_unpack_1__element_3.object = tmp_assign_source_6;

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
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1.object;

    assert( var_module_name.object == NULL );
    var_module_name.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2.object;

    assert( var_class_name.object == NULL );
    var_class_name.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_3.object;

    assert( var_long_description.object == NULL );
    var_long_description.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

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

        goto try_except_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
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
    tmp_compare_right_3 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 537;
        goto frame_exception_exit_1;
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
    tmp_binop_left_1 = const_str_digest_2246366696bebfe141467cd3274505c0;
    tmp_binop_right_1 = par_plat.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82851 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 538;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_10 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 538;
        goto frame_exception_exit_1;
    }
    assert( var_msg.object == NULL );
    var_msg.object = tmp_assign_source_10;

    tmp_compare_left_4 = par_compiler.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82045 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 539;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if (tmp_isnot_1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_binop_left_2 = var_msg.object;

    tmp_binop_left_3 = const_str_digest_13ef067840e129dcf81714996c5d26ef;
    tmp_binop_right_3 = par_compiler.object;

    if ( tmp_binop_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82045 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 540;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 540;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 540;
        goto frame_exception_exit_1;
    }
    assert( var_msg.object != NULL );
    {
        PyObject *old = var_msg.object;
        var_msg.object = tmp_assign_source_11;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_DistutilsPlatformError );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DistutilsPlatformError );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82993 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 541;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = var_msg.object;

    frame_function->f_lineno = 541;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 541;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 541;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_3:;
    try_except_end_1:;
    tmp_binop_left_4 = const_str_digest_f4aba597ac19660d644818535d81c0f9;
    tmp_binop_right_4 = var_module_name.object;

    if ( tmp_binop_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83044 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }
    if (var_module_name.object == NULL)
    {
        var_module_name.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = var_module_name.object;
        var_module_name.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    // Tried block of try/except
    tmp_import_modulename_1 = var_module_name.object;

    tmp_import_fromlist_1 = const_tuple_empty;
    tmp_import_level_1 = const_int_0;
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_module_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_module_name,
            var_module_name.object
        );

    }
    if ((var_class_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_class_name,
            var_class_name.object
        );

    }
    if ((var_long_description.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_long_description,
            var_long_description.object
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
    if ((var_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_module,
            var_module.object
        );

    }
    if ((var_klass.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_klass,
            var_klass.object
        );

    }
    if ((par_plat.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_plat,
            par_plat.object
        );

    }
    if ((par_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_compiler,
            par_compiler.object
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
    frame_function->f_lineno = 544;
    tmp_unused = IMPORT_MODULE( tmp_import_modulename_1, tmp_import_globals_1, tmp_import_locals_1, tmp_import_fromlist_1, tmp_import_level_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 544;
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
    tmp_compare_left_5 = PyThreadState_GET()->exc_type;
    tmp_compare_right_5 = PyExc_ImportError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 545;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_2 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_get_exception );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_exception );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83101 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 546;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 546;
    tmp_str_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 546;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 546;
        goto frame_exception_exit_1;
    }
    if (var_msg.object == NULL)
    {
        var_msg.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = var_msg.object;
        var_msg.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 547;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_info );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 547;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_digest_e4d68f89a0c82383cc50819b85e38905;
    tmp_str_arg_2 = var_msg.object;

    tmp_call_arg_element_4 = PyObject_Str( tmp_str_arg_2 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 548;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 548;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 548;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_sliceslicedel_index_lower_1 = 6;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_module_name.object;

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83044 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 549;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 549;
        goto frame_exception_exit_1;
    }
    if (var_module_name.object == NULL)
    {
        var_module_name.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = var_module_name.object;
        var_module_name.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    // Tried block of try/except
    tmp_import_modulename_2 = var_module_name.object;

    tmp_import_fromlist_2 = const_tuple_empty;
    tmp_import_level_2 = const_int_0;
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_module_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_module_name,
            var_module_name.object
        );

    }
    if ((var_class_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_class_name,
            var_class_name.object
        );

    }
    if ((var_long_description.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_long_description,
            var_long_description.object
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
    if ((var_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_module,
            var_module.object
        );

    }
    if ((var_klass.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_klass,
            var_klass.object
        );

    }
    if ((par_plat.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_plat,
            par_plat.object
        );

    }
    if ((par_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_compiler,
            par_compiler.object
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
    if ((par_dry_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_dry_run,
            par_dry_run.object
        );

    }
    if ((par_force.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_force,
            par_force.object
        );

    }
    frame_function->f_lineno = 551;
    tmp_unused = IMPORT_MODULE( tmp_import_modulename_2, tmp_import_globals_2, tmp_import_locals_2, tmp_import_fromlist_2, tmp_import_level_2 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 551;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
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
    tmp_compare_left_6 = PyThreadState_GET()->exc_type;
    tmp_compare_right_6 = PyExc_ImportError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 552;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_3 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_get_exception );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_exception );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83101 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 553;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 553;
    tmp_str_arg_3 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    if ( tmp_str_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 553;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = PyObject_Str( tmp_str_arg_3 );
    Py_DECREF( tmp_str_arg_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 553;
        goto frame_exception_exit_1;
    }
    if (var_msg.object == NULL)
    {
        var_msg.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_msg.object;
        var_msg.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_DistutilsModuleError );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DistutilsModuleError );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83143 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 554;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_5 = const_str_digest_0acb7bcc91b00ce38fe1acaa53a9497a;
    tmp_binop_right_5 = var_module_name.object;

    if ( tmp_binop_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83044 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 555;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 554;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 554;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 554;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 554;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_6;
    branch_no_6:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_6:;
    try_except_end_3:;
    goto branch_end_5;
    branch_no_5:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_5:;
    try_except_end_2:;
    // Tried block of try/except
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 557;
        goto try_except_handler_4;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_modules );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 557;
        goto try_except_handler_4;
    }
    tmp_subscr_subscript_2 = var_module_name.object;

    if ( tmp_subscr_subscript_2 == NULL )
    {
        Py_DECREF( tmp_subscr_target_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83044 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 557;
        goto try_except_handler_4;
    }

    tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 557;
        goto try_except_handler_4;
    }
    assert( var_module.object == NULL );
    var_module.object = tmp_assign_source_16;

    tmp_vars_arg_1 = var_module.object;

    tmp_subscr_target_3 = LOOKUP_VARS( tmp_vars_arg_1 );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 558;
        goto try_except_handler_4;
    }
    tmp_subscr_subscript_3 = var_class_name.object;

    if ( tmp_subscr_subscript_3 == NULL )
    {
        Py_DECREF( tmp_subscr_target_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30972 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 558;
        goto try_except_handler_4;
    }

    tmp_assign_source_17 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 558;
        goto try_except_handler_4;
    }
    assert( var_klass.object == NULL );
    var_klass.object = tmp_assign_source_17;

    goto try_except_end_4;
    try_except_handler_4:;
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
    tmp_compare_right_7 = PyExc_KeyError;
    tmp_exc_match_exception_match_4 = EXCEPTION_MATCH_BOOL( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_exc_match_exception_match_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 559;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_4 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_DistutilsModuleError );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DistutilsModuleError );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83143 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 560;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_6 = const_str_digest_c59e88920cb108f5cb78387c0dc8bc05;
    tmp_binop_right_6 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_class_name.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 30972 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 561;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_6, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_module_name.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83044 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 561;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_6, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_6 = BINARY_OPERATION_REMAINDER( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 560;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 560;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 560;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 560;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_7;
    branch_no_7:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_7:;
    try_except_end_4:;
    tmp_called_8 = var_klass.object;

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80579 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 562;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = Py_None;
    tmp_call_arg_element_8 = par_dry_run.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83192 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 562;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = par_force.object;

    if ( tmp_call_arg_element_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82408 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 562;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 562;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_8, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 562;
        goto frame_exception_exit_1;
    }
    if (par_compiler.object == NULL)
    {
        par_compiler.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = par_compiler.object;
        par_compiler.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 563;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_debug );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 563;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_7 = const_str_digest_d54430dcda2423281c62396ed3f6ff62;
    tmp_binop_right_7 = var_klass.object;

    if ( tmp_binop_right_7 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80579 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 563;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = BINARY_OPERATION_REMAINDER( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 563;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 563;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 563;
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
    if ((var_module_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_module_name,
            var_module_name.object
        );

    }
    if ((var_class_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_class_name,
            var_class_name.object
        );

    }
    if ((var_long_description.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_long_description,
            var_long_description.object
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
    if ((var_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_module,
            var_module.object
        );

    }
    if ((var_klass.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_klass,
            var_klass.object
        );

    }
    if ((par_plat.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_plat,
            par_plat.object
        );

    }
    if ((par_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_compiler,
            par_compiler.object
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
    tmp_return_value = par_compiler.object;

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
static PyObject *fparse_function_12_new_compiler_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_plat = NULL;
    PyObject *_python_par_compiler = NULL;
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
                PyErr_Format( PyExc_TypeError, "new_compiler() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_plat == key )
            {
                assert( _python_par_plat == NULL );
                _python_par_plat = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_compiler == key )
            {
                assert( _python_par_compiler == NULL );
                _python_par_compiler = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_plat, key ) == 1 )
            {
                assert( _python_par_plat == NULL );
                _python_par_plat = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_compiler, key ) == 1 )
            {
                assert( _python_par_compiler == NULL );
                _python_par_compiler = value;

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
                   "new_compiler() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_plat != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_plat = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_plat == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_plat = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
         if (unlikely( _python_par_compiler != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_compiler = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_compiler == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_compiler = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_verbose = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
         if (unlikely( _python_par_dry_run != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_dry_run = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_dry_run == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_dry_run = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
         if (unlikely( _python_par_force != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_force = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_force == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_force = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_plat == NULL || _python_par_compiler == NULL || _python_par_verbose == NULL || _python_par_dry_run == NULL || _python_par_force == NULL ))
    {
        PyObject *values[] = { _python_par_plat, _python_par_compiler, _python_par_verbose, _python_par_dry_run, _python_par_force };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_12_new_compiler_of_module_numpy$distutils$ccompiler( self, _python_par_plat, _python_par_compiler, _python_par_verbose, _python_par_dry_run, _python_par_force );

error_exit:;

    Py_XDECREF( _python_par_plat );
    Py_XDECREF( _python_par_compiler );
    Py_XDECREF( _python_par_verbose );
    Py_XDECREF( _python_par_dry_run );
    Py_XDECREF( _python_par_force );

    return NULL;
}

static PyObject *dparse_function_12_new_compiler_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_12_new_compiler_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_new_compiler_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_gen_lib_options_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_compiler, PyObject *_python_par_library_dirs, PyObject *_python_par_runtime_library_dirs, PyObject *_python_par_libraries )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_compiler; par_compiler.object = _python_par_compiler;
    PyObjectLocalVariable par_library_dirs; par_library_dirs.object = _python_par_library_dirs;
    PyObjectLocalVariable par_runtime_library_dirs; par_runtime_library_dirs.object = _python_par_runtime_library_dirs;
    PyObjectLocalVariable par_libraries; par_libraries.object = _python_par_libraries;
    PyObjectLocalVariable var_r;
    PyObjectLocalVariable var_lib_opts;
    PyObjectLocalVariable var_i;
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
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_263c03fb4a958299a8c1c1ed0a8c92ea, module_numpy$distutils$ccompiler );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_quote_args );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_quote_args );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83245 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 570;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_library_dirs.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83284 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 570;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 570;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 570;
        goto frame_exception_exit_1;
    }
    if (par_library_dirs.object == NULL)
    {
        par_library_dirs.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_library_dirs.object;
        par_library_dirs.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_quote_args );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_quote_args );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83245 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 571;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_runtime_library_dirs.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83342 ], 66, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 571;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 571;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 571;
        goto frame_exception_exit_1;
    }
    if (par_runtime_library_dirs.object == NULL)
    {
        par_runtime_library_dirs.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_runtime_library_dirs.object;
        par_runtime_library_dirs.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__distutils_gen_lib_options );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__distutils_gen_lib_options );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83408 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 572;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_compiler.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82045 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 572;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_library_dirs.object;

    tmp_call_arg_element_5 = par_runtime_library_dirs.object;

    tmp_call_arg_element_6 = par_libraries.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83463 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 573;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 573;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS4( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 573;
        goto frame_exception_exit_1;
    }
    assert( var_r.object == NULL );
    var_r.object = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( var_lib_opts.object == NULL );
    var_lib_opts.object = tmp_assign_source_4;

    tmp_iter_arg_1 = var_r.object;

    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 575;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_5;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_6 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 575;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_assign_source_7 = tmp_for_loop_1__iter_value.object;

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_is_sequence );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_sequence );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80736 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 576;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_7 = var_i.object;

    frame_function->f_lineno = 576;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_7 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 576;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 576;
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
    tmp_source_name_1 = var_lib_opts.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83518 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 577;
        goto try_finally_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 577;
        goto try_finally_handler_1;
    }
    tmp_list_arg_1 = var_i.object;

    tmp_call_arg_element_8 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 577;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 577;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 577;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = var_lib_opts.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83518 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 579;
        goto try_finally_handler_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 579;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_9 = var_i.object;

    frame_function->f_lineno = 579;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 579;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 575;
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
    tmp_return_value = var_lib_opts.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83518 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 580;
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
    if ((var_r.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_r,
            var_r.object
        );

    }
    if ((var_lib_opts.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lib_opts,
            var_lib_opts.object
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
    if ((par_compiler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_compiler,
            par_compiler.object
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
    if ((par_libraries.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_libraries,
            par_libraries.object
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
static PyObject *fparse_function_13_gen_lib_options_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_compiler = NULL;
    PyObject *_python_par_library_dirs = NULL;
    PyObject *_python_par_runtime_library_dirs = NULL;
    PyObject *_python_par_libraries = NULL;
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
                PyErr_Format( PyExc_TypeError, "gen_lib_options() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_compiler == key )
            {
                assert( _python_par_compiler == NULL );
                _python_par_compiler = value;

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
            if ( found == false && const_str_plain_libraries == key )
            {
                assert( _python_par_libraries == NULL );
                _python_par_libraries = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_compiler, key ) == 1 )
            {
                assert( _python_par_compiler == NULL );
                _python_par_compiler = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_libraries, key ) == 1 )
            {
                assert( _python_par_libraries == NULL );
                _python_par_libraries = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "gen_lib_options() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_compiler != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_compiler = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_compiler == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_compiler = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
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
         if (unlikely( _python_par_library_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_library_dirs = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_library_dirs == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_library_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_runtime_library_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_runtime_library_dirs = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_runtime_library_dirs == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_runtime_library_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_libraries != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_libraries = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_libraries == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_libraries = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_compiler == NULL || _python_par_library_dirs == NULL || _python_par_runtime_library_dirs == NULL || _python_par_libraries == NULL ))
    {
        PyObject *values[] = { _python_par_compiler, _python_par_library_dirs, _python_par_runtime_library_dirs, _python_par_libraries };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_13_gen_lib_options_of_module_numpy$distutils$ccompiler( self, _python_par_compiler, _python_par_library_dirs, _python_par_runtime_library_dirs, _python_par_libraries );

error_exit:;

    Py_XDECREF( _python_par_compiler );
    Py_XDECREF( _python_par_library_dirs );
    Py_XDECREF( _python_par_runtime_library_dirs );
    Py_XDECREF( _python_par_libraries );

    return NULL;
}

static PyObject *dparse_function_13_gen_lib_options_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_13_gen_lib_options_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_gen_lib_options_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_gen_preprocess_options_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_macros, PyObject *_python_par_include_dirs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_macros; par_macros.object = _python_par_macros;
    PyObjectLocalVariable par_include_dirs; par_include_dirs.object = _python_par_include_dirs;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_39e1c9c4897cb4c0e13552a26bd34bd8, module_numpy$distutils$ccompiler );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_quote_args );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_quote_args );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83245 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 593;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_include_dirs.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81296 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 593;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 593;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 593;
        goto frame_exception_exit_1;
    }
    if (par_include_dirs.object == NULL)
    {
        par_include_dirs.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_include_dirs.object;
        par_include_dirs.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__distutils_gen_preprocess_options );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__distutils_gen_preprocess_options );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83572 ], 62, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 594;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_macros.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81244 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 594;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_include_dirs.object;

    frame_function->f_lineno = 594;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 594;
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
    if ((par_macros.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_macros,
            par_macros.object
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
static PyObject *fparse_function_14_gen_preprocess_options_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_macros = NULL;
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
                PyErr_Format( PyExc_TypeError, "gen_preprocess_options() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_macros == key )
            {
                assert( _python_par_macros == NULL );
                _python_par_macros = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_macros, key ) == 1 )
            {
                assert( _python_par_macros == NULL );
                _python_par_macros = value;

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
                   "gen_preprocess_options() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_macros != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_macros = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_macros == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_macros = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_include_dirs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_include_dirs = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_include_dirs == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_include_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_macros == NULL || _python_par_include_dirs == NULL ))
    {
        PyObject *values[] = { _python_par_macros, _python_par_include_dirs };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_14_gen_preprocess_options_of_module_numpy$distutils$ccompiler( self, _python_par_macros, _python_par_include_dirs );

error_exit:;

    Py_XDECREF( _python_par_macros );
    Py_XDECREF( _python_par_include_dirs );

    return NULL;
}

static PyObject *dparse_function_14_gen_preprocess_options_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_14_gen_preprocess_options_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_gen_preprocess_options_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_split_quoted_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_s; par_s.object = _python_par_s;
    PyObjectLocalVariable var_words;
    PyObjectLocalVariable var_pos;
    PyObjectLocalVariable var_m;
    PyObjectLocalVariable var_end;
    PyObjectLocalVariable var_beg;
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
    PyObject *tmp_assign_source_19;
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
    PyObject *tmp_called_11;
    PyObject *tmp_called_12;
    PyObject *tmp_called_13;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_GtE_1;
    int tmp_cmp_In_1;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_lower_3;
    PyObject *tmp_slice_lower_4;
    PyObject *tmp_slice_lower_5;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    PyObject *tmp_slice_source_5;
    PyObject *tmp_slice_source_6;
    PyObject *tmp_slice_source_7;
    PyObject *tmp_slice_source_8;
    PyObject *tmp_slice_source_9;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_slice_upper_2;
    PyObject *tmp_slice_upper_3;
    PyObject *tmp_slice_upper_4;
    PyObject *tmp_slice_upper_5;
    PyObject *tmp_slice_upper_6;
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
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_subscript_6;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_subscr_target_5;
    PyObject *tmp_subscr_target_6;
    int tmp_tried_lineno_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f6d6af4a4a6fe4eacd7ee45d67d568a7, module_numpy$distutils$ccompiler );
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
    tmp_source_name_1 = par_s.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 609;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_strip );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 609;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 609;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 609;
        goto frame_exception_exit_1;
    }
    if (par_s.object == NULL)
    {
        par_s.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_s.object;
        par_s.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_words.object == NULL );
    var_words.object = tmp_assign_source_2;

    tmp_assign_source_3 = const_int_0;
    assert( var_pos.object == NULL );
    var_pos.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    loop_start_1:;
    tmp_cond_value_1 = par_s.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 613;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 613;
        goto frame_exception_exit_1;
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
    goto loop_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__wordchars_re );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wordchars_re );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83634 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 614;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_match );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 614;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_s.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 614;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = var_pos.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3710 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 614;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 614;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 614;
        goto frame_exception_exit_1;
    }
    if (var_m.object == NULL)
    {
        var_m.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = var_m.object;
        var_m.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_source_name_3 = var_m.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_end );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 615;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 615;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 615;
        goto frame_exception_exit_1;
    }
    if (var_end.object == NULL)
    {
        var_end.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = var_end.object;
        var_end.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_compare_left_1 = var_end.object;

    tmp_len_arg_1 = par_s.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 616;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 616;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 616;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = var_words.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 617;
        goto frame_exception_exit_1;
    }
    tmp_slice_source_1 = par_s.object;

    if ( tmp_slice_source_1 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 617;
        goto frame_exception_exit_1;
    }

    tmp_slice_upper_1 = var_end.object;

    tmp_call_arg_element_3 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 617;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 617;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 617;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto loop_end_1;
    branch_no_2:;
    tmp_subscr_target_1 = par_s.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 620;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = var_end.object;

    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 620;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_string );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41210 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 620;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_whitespace );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 620;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 620;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
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
    tmp_source_name_6 = var_words.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 621;
        goto frame_exception_exit_1;
    }
    tmp_slice_source_2 = par_s.object;

    if ( tmp_slice_source_2 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 621;
        goto frame_exception_exit_1;
    }

    tmp_slice_upper_2 = var_end.object;

    tmp_call_arg_element_4 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_2 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 621;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 621;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 621;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_slice_source_3 = par_s.object;

    if ( tmp_slice_source_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 622;
        goto frame_exception_exit_1;
    }

    tmp_slice_lower_1 = var_end.object;

    tmp_source_name_7 = LOOKUP_SLICE( tmp_slice_source_3, tmp_slice_lower_1, Py_None );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 622;
        goto frame_exception_exit_1;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_lstrip );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 622;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 622;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 622;
        goto frame_exception_exit_1;
    }
    if (par_s.object == NULL)
    {
        par_s.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = par_s.object;
        par_s.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_assign_source_7 = const_int_0;
    if (var_pos.object == NULL)
    {
        var_pos.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = var_pos.object;
        var_pos.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_subscr_target_2 = par_s.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 625;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = var_end.object;

    tmp_compare_left_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 625;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_str_chr_92;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 625;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_slice_source_4 = par_s.object;

    if ( tmp_slice_source_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 627;
        goto frame_exception_exit_1;
    }

    tmp_slice_upper_3 = var_end.object;

    tmp_binop_left_1 = LOOKUP_SLICE( tmp_slice_source_4, Py_None, tmp_slice_upper_3 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 627;
        goto frame_exception_exit_1;
    }
    tmp_slice_source_5 = par_s.object;

    if ( tmp_slice_source_5 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 627;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_2 = var_end.object;

    tmp_binop_right_2 = const_int_pos_1;
    tmp_slice_lower_2 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_slice_lower_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 627;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = LOOKUP_SLICE( tmp_slice_source_5, tmp_slice_lower_2, Py_None );
    Py_DECREF( tmp_slice_lower_2 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 627;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 627;
        goto frame_exception_exit_1;
    }
    if (par_s.object == NULL)
    {
        par_s.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = par_s.object;
        par_s.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    tmp_binop_left_3 = var_end.object;

    tmp_binop_right_3 = const_int_pos_1;
    tmp_assign_source_9 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 628;
        goto frame_exception_exit_1;
    }
    if (var_pos.object == NULL)
    {
        var_pos.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = var_pos.object;
        var_pos.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_subscr_target_3 = par_s.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 631;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_3 = var_end.object;

    tmp_compare_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 631;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_str_chr_39;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 631;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__squote_re );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__squote_re );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83676 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 632;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_match );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 632;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = par_s.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 632;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = var_end.object;

    frame_function->f_lineno = 632;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 632;
        goto frame_exception_exit_1;
    }
    assert( var_m.object != NULL );
    {
        PyObject *old = var_m.object;
        var_m.object = tmp_assign_source_10;
        Py_DECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_subscr_target_4 = par_s.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 633;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_4 = var_end.object;

    tmp_compare_left_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 633;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = const_str_chr_34;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        frame_function->f_lineno = 633;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if (tmp_cmp_Eq_4 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__dquote_re );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dquote_re );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83715 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 634;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_match );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 634;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = par_s.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 634;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = var_end.object;

    frame_function->f_lineno = 634;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 634;
        goto frame_exception_exit_1;
    }
    assert( var_m.object != NULL );
    {
        PyObject *old = var_m.object;
        var_m.object = tmp_assign_source_11;
        Py_DECREF( old );
    }

    goto branch_end_6;
    branch_no_6:;
    tmp_binop_left_4 = const_str_digest_8f977d91eeabf4f5bd7c70d08389b6b8;
    tmp_subscr_target_5 = par_s.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 636;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_5 = var_end.object;

    tmp_binop_right_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 636;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 636;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 636;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 636;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 636;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_6:;
    branch_end_5:;
    tmp_compare_left_6 = var_m.object;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 638;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = Py_None;
    tmp_is_1 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    if (tmp_is_1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_binop_left_5 = const_str_digest_8f81fe0bc2abc4ff562db30841aa4cbf;
    tmp_subscr_target_6 = par_s.object;

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 639;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_6 = var_end.object;

    tmp_binop_right_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 639;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 639;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 639;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    Py_DECREF( tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 639;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 639;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_7:;
    // Tried code
    tmp_source_name_10 = var_m.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 641;
        goto try_finally_handler_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_span );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 641;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 641;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_9 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 641;
        goto try_finally_handler_1;
    }
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 641;
        goto try_finally_handler_1;
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


        frame_function->f_lineno = 641;
        goto try_finally_handler_1;
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


        frame_function->f_lineno = 641;
        goto try_finally_handler_1;
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
    tmp_assign_source_15 = tmp_tuple_unpack_1__element_1.object;

    if (var_beg.object == NULL)
    {
        var_beg.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
    }
    else
    {
        PyObject *old = var_beg.object;
        var_beg.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
        Py_DECREF( old );
    }
    tmp_assign_source_16 = tmp_tuple_unpack_1__element_2.object;

    assert( var_end.object != NULL );
    {
        PyObject *old = var_end.object;
        var_end.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
        Py_DECREF( old );
    }

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
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__has_white_re );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__has_white_re );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83754 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 642;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_search );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 642;
        goto frame_exception_exit_1;
    }
    tmp_slice_source_6 = par_s.object;

    if ( tmp_slice_source_6 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 642;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_6 = var_beg.object;

    if ( tmp_binop_left_6 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83796 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 642;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_6 = const_int_pos_1;
    tmp_slice_lower_3 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_slice_lower_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 642;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_7 = var_end.object;

    if ( tmp_binop_left_7 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_slice_lower_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60336 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 642;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_7 = const_int_pos_1;
    tmp_slice_upper_4 = BINARY_OPERATION_SUB( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_slice_upper_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_slice_lower_3 );

        frame_function->f_lineno = 642;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = LOOKUP_SLICE( tmp_slice_source_6, tmp_slice_lower_3, tmp_slice_upper_4 );
    Py_DECREF( tmp_slice_lower_3 );
    Py_DECREF( tmp_slice_upper_4 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 642;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 642;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 642;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 642;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_slice_source_7 = par_s.object;

    if ( tmp_slice_source_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }

    tmp_slice_upper_5 = var_beg.object;

    if ( tmp_slice_upper_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83796 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_9 = LOOKUP_SLICE( tmp_slice_source_7, Py_None, tmp_slice_upper_5 );
    if ( tmp_binop_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }
    tmp_slice_source_8 = par_s.object;

    if ( tmp_slice_source_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_10 = var_beg.object;

    if ( tmp_binop_left_10 == NULL )
    {
        Py_DECREF( tmp_binop_left_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83796 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_10 = const_int_pos_1;
    tmp_slice_lower_4 = BINARY_OPERATION_ADD( tmp_binop_left_10, tmp_binop_right_10 );
    if ( tmp_slice_lower_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_9 );

        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_11 = var_end.object;

    if ( tmp_binop_left_11 == NULL )
    {
        Py_DECREF( tmp_binop_left_9 );
        Py_DECREF( tmp_slice_lower_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60336 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_11 = const_int_pos_1;
    tmp_slice_upper_6 = BINARY_OPERATION_SUB( tmp_binop_left_11, tmp_binop_right_11 );
    if ( tmp_slice_upper_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_9 );
        Py_DECREF( tmp_slice_lower_4 );

        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_9 = LOOKUP_SLICE( tmp_slice_source_8, tmp_slice_lower_4, tmp_slice_upper_6 );
    Py_DECREF( tmp_slice_lower_4 );
    Py_DECREF( tmp_slice_upper_6 );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_9 );

        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_8 = BINARY_OPERATION_ADD( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_left_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }
    tmp_slice_source_9 = par_s.object;

    if ( tmp_slice_source_9 == NULL )
    {
        Py_DECREF( tmp_binop_left_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }

    tmp_slice_lower_5 = var_end.object;

    if ( tmp_slice_lower_5 == NULL )
    {
        Py_DECREF( tmp_binop_left_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60336 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_8 = LOOKUP_SLICE( tmp_slice_source_9, tmp_slice_lower_5, Py_None );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_8 );

        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 643;
        goto frame_exception_exit_1;
    }
    if (par_s.object == NULL)
    {
        par_s.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = par_s.object;
        par_s.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    tmp_source_name_12 = var_m.object;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 644;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_end );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 644;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 644;
    tmp_binop_left_12 = CALL_FUNCTION_NO_ARGS( tmp_called_11 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_binop_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 644;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_12 = const_int_pos_2;
    tmp_assign_source_18 = BINARY_OPERATION_SUB( tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_left_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 644;
        goto frame_exception_exit_1;
    }
    if (var_pos.object == NULL)
    {
        var_pos.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = var_pos.object;
        var_pos.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_13 = var_m.object;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 648;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_end );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 648;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 648;
    tmp_assign_source_19 = CALL_FUNCTION_NO_ARGS( tmp_called_12 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 648;
        goto frame_exception_exit_1;
    }
    if (var_pos.object == NULL)
    {
        var_pos.object = tmp_assign_source_19;
    }
    else
    {
        PyObject *old = var_pos.object;
        var_pos.object = tmp_assign_source_19;
        Py_DECREF( old );
    }
    branch_end_8:;
    branch_end_4:;
    branch_end_3:;
    tmp_compare_left_7 = var_pos.object;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3710 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 650;
        goto frame_exception_exit_1;
    }

    tmp_len_arg_2 = par_s.object;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 650;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 650;
        goto frame_exception_exit_1;
    }
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_7 );

        frame_function->f_lineno = 650;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_7 );
    if (tmp_cmp_GtE_1 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_14 = var_words.object;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83845 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 651;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 651;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = par_s.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 651;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 651;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 651;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto loop_end_1;
    branch_no_9:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 613;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = var_words.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83845 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 654;
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
    if ((var_words.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_words,
            var_words.object
        );

    }
    if ((var_pos.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pos,
            var_pos.object
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
    if ((var_end.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_end,
            var_end.object
        );

    }
    if ((var_beg.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_beg,
            var_beg.object
        );

    }
    if ((par_s.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_s,
            par_s.object
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
static PyObject *fparse_function_15_split_quoted_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_s = NULL;
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
                PyErr_Format( PyExc_TypeError, "split_quoted() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_s == key )
            {
                assert( _python_par_s == NULL );
                _python_par_s = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_s, key ) == 1 )
            {
                assert( _python_par_s == NULL );
                _python_par_s = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "split_quoted() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_s != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_s == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_s = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_s == NULL ))
    {
        PyObject *values[] = { _python_par_s };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_15_split_quoted_of_module_numpy$distutils$ccompiler( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_15_split_quoted_of_module_numpy$distutils$ccompiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_15_split_quoted_of_module_numpy$distutils$ccompiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_split_quoted_of_module_numpy$distutils$ccompiler( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler,
        dparse_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler,
        const_str_plain_CCompiler_get_version,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5e6f46a5effb548a23787ad4130e670f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        const_str_digest_315862fea59f59e3bff82dcca158cd76
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_CCompiler_cxx_compiler_of_module_numpy$distutils$ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_CCompiler_cxx_compiler_of_module_numpy$distutils$ccompiler,
        dparse_function_11_CCompiler_cxx_compiler_of_module_numpy$distutils$ccompiler,
        const_str_plain_CCompiler_cxx_compiler,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2372f508401bb5d1a958b10f67665182,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        const_str_digest_defca75cd144439f66f2e870b8f36c71
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_new_compiler_of_module_numpy$distutils$ccompiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_new_compiler_of_module_numpy$distutils$ccompiler,
        dparse_function_12_new_compiler_of_module_numpy$distutils$ccompiler,
        const_str_plain_new_compiler,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3156ec7686ade5e3f7aae4526c9f998f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_gen_lib_options_of_module_numpy$distutils$ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_gen_lib_options_of_module_numpy$distutils$ccompiler,
        dparse_function_13_gen_lib_options_of_module_numpy$distutils$ccompiler,
        const_str_plain_gen_lib_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_88b4b289e42b9f4e92346a5f6ec24b37,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_gen_preprocess_options_of_module_numpy$distutils$ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_gen_preprocess_options_of_module_numpy$distutils$ccompiler,
        dparse_function_14_gen_preprocess_options_of_module_numpy$distutils$ccompiler,
        const_str_plain_gen_preprocess_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_39e1c9c4897cb4c0e13552a26bd34bd8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_split_quoted_of_module_numpy$distutils$ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_split_quoted_of_module_numpy$distutils$ccompiler,
        dparse_function_15_split_quoted_of_module_numpy$distutils$ccompiler,
        const_str_plain_split_quoted,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_32aaaf5ff4d21637823d4dfa3554331b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( PyObjectSharedLocalVariable &closure_cmd, PyObjectSharedLocalVariable &closure_ignore )
{
    struct _context_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler_t *_python_context = new _context_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler_t;

    // Copy the parameter default values and closure values over.
    _python_context->closure_cmd.shareWith( closure_cmd );
    _python_context->closure_ignore.shareWith( closure_ignore );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler,
        dparse_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler,
        const_str_plain_allow,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9ce2944c3cd92c8e807f3865ad3307b8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        Py_None,
        _python_context,
        _context_function_1_allow_of_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( PyObjectSharedLocalVariable &closure_pat )
{
    struct _context_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler_t *_python_context = new _context_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler_t;

    // Copy the parameter default values and closure values over.
    _python_context->closure_pat.shareWith( closure_pat );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler,
        dparse_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler,
        const_str_plain_matcher,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_489f0d8077d74b491ca834312c02f194,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        Py_None,
        _python_context,
        _context_function_1_matcher_of_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( PyObjectSharedLocalVariable &closure_ignore, PyObjectSharedLocalVariable &closure_pat, PyObjectSharedLocalVariable &closure_start )
{
    struct _context_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler_t *_python_context = new _context_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler_t;

    // Copy the parameter default values and closure values over.
    _python_context->closure_ignore.shareWith( closure_ignore );
    _python_context->closure_pat.shareWith( closure_pat );
    _python_context->closure_start.shareWith( closure_start );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler,
        dparse_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler,
        const_str_plain_matcher,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dfb72c4a6dca889bf07283e4348e79bb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        Py_None,
        _python_context,
        _context_function_1_matcher_of_function_9_simple_version_match_of_module_numpy$distutils$ccompiler_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_replace_method_of_module_numpy$distutils$ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_replace_method_of_module_numpy$distutils$ccompiler,
        dparse_function_1_replace_method_of_module_numpy$distutils$ccompiler,
        const_str_plain_replace_method,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b788e7b64ce04888e9f716facaa94ab4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_CCompiler_spawn_of_module_numpy$distutils$ccompiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_CCompiler_spawn_of_module_numpy$distutils$ccompiler,
        dparse_function_2_CCompiler_spawn_of_module_numpy$distutils$ccompiler,
        const_str_plain_CCompiler_spawn,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b815d8b2765c7ab1af40f8cbb402ddfe,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        const_str_digest_7539176c408c007a66f14ca5543e73fa
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_CCompiler_object_filenames_of_module_numpy$distutils$ccompiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_CCompiler_object_filenames_of_module_numpy$distutils$ccompiler,
        dparse_function_3_CCompiler_object_filenames_of_module_numpy$distutils$ccompiler,
        const_str_plain_CCompiler_object_filenames,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_75e9a6cbbc58fcee04413ca2b2a52380,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        const_str_digest_8b930df90c5713cf49efd329e536402d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_CCompiler_compile_of_module_numpy$distutils$ccompiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_CCompiler_compile_of_module_numpy$distutils$ccompiler,
        dparse_function_4_CCompiler_compile_of_module_numpy$distutils$ccompiler,
        const_str_plain_CCompiler_compile,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_da9dd9af9d7e510d9d61ca34a01be86a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        const_str_digest_7c78e3b01b8ff34c1824145215a87def
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler,
        dparse_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler,
        const_str_plain_CCompiler_customize_cmd,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_030e2343f9025a87dd98f6a98b0e92b5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        const_str_digest_ad751c14da9642307e19249fd77f8a27
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__compiler_to_string_of_module_numpy$distutils$ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6__compiler_to_string_of_module_numpy$distutils$ccompiler,
        dparse_function_6__compiler_to_string_of_module_numpy$distutils$ccompiler,
        const_str_plain__compiler_to_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7cb9b1ea1dfea8c217578e01a9aa5afd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_CCompiler_show_customization_of_module_numpy$distutils$ccompiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_CCompiler_show_customization_of_module_numpy$distutils$ccompiler,
        dparse_function_7_CCompiler_show_customization_of_module_numpy$distutils$ccompiler,
        const_str_plain_CCompiler_show_customization,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3d8768643207dbc72731351c52f42419,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        const_str_digest_4186c7e9a403777c921f316f2f292ac1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_CCompiler_customize_of_module_numpy$distutils$ccompiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_CCompiler_customize_of_module_numpy$distutils$ccompiler,
        dparse_function_8_CCompiler_customize_of_module_numpy$distutils$ccompiler,
        const_str_plain_CCompiler_customize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_514d043daf55540a18f10145dd81e6de,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        const_str_digest_9659554a9a9888f14d147bafbd4fdf1d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_simple_version_match_of_module_numpy$distutils$ccompiler,
        dparse_function_9_simple_version_match_of_module_numpy$distutils$ccompiler,
        const_str_plain_simple_version_match,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8c89fb74a7d74daeadf3b22efca6e85b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        const_str_digest_33fa6cd73b05352a59f346f557f0d2f7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler( PyObjectSharedLocalVariable &closure_func )
{
    struct _context_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler_t *_python_context = new _context_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler_t;

    // Copy the parameter default values and closure values over.
    _python_context->closure_func.shareWith( closure_func );

    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler,
        dparse_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_803884da353d3a8237369a2aeca238b3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$ccompiler,
        Py_None,
        _python_context,
        _context_lambda_1_lambda_of_function_1_replace_method_of_module_numpy$distutils$ccompiler_destructor
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils$ccompiler =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils.ccompiler",   /* m_name */
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

MOD_INIT_DECL( numpy$distutils$ccompiler )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils$ccompiler );
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

    // puts( "in initnumpy$distutils$ccompiler" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils$ccompiler = Py_InitModule4(
        "numpy.distutils.ccompiler",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils$ccompiler = PyModule_Create( &mdef_numpy$distutils$ccompiler );
#endif

    moduledict_numpy$distutils$ccompiler = (PyDictObject *)((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;

    assertObject( module_numpy$distutils$ccompiler );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_1f406ccb0ae00805d4f3c6661348da02, module_numpy$distutils$ccompiler );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils$ccompiler );

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
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
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
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
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
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_setattr_attr_1;
    PyObject *tmp_setattr_target_1;
    PyObject *tmp_setattr_value_1;
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
    PyObject *tmp_star_imported_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_839f92c87cbec01c94540bfb3313f8be;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_4def51fffc2cffd32b04ac8ccdc7a7b7, module_numpy$distutils$ccompiler );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 5;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_6, tmp_import_globals_6, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 6;
    tmp_assign_source_9 = IMPORT_MODULE( const_str_plain_types, tmp_import_globals_7, tmp_import_globals_7, Py_None, const_int_0 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_copy, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_copy_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_copy );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_copy, tmp_assign_source_10 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 9;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_digest_8acec9b707fb08fa95386d8360c9e9fc, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_chr_42_tuple, const_int_0 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$distutils$ccompiler, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_distutils, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_ccompiler_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ccompiler );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_ccompiler, tmp_assign_source_11 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc, tmp_import_globals_11, tmp_import_globals_11, const_tuple_bb03945c83f1bb8146c768bd1bdc6d0e_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_DistutilsExecError );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_DistutilsExecError, tmp_assign_source_12 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc, tmp_import_globals_12, tmp_import_globals_12, const_tuple_bb03945c83f1bb8146c768bd1bdc6d0e_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_DistutilsModuleError );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_DistutilsModuleError, tmp_assign_source_13 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_e90219f2b064f7a121a4bb3f04f5c2bc, tmp_import_globals_13, tmp_import_globals_13, const_tuple_bb03945c83f1bb8146c768bd1bdc6d0e_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_DistutilsPlatformError );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_DistutilsPlatformError, tmp_assign_source_14 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_1fd876f4d3c80a59f5d80495fbe7531f, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_plain_customize_compiler_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_customize_compiler );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_customize_compiler, tmp_assign_source_15 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_c093ffbc531047f3f58d3349fa58e0f7, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_LooseVersion_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_LooseVersion );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_LooseVersion, tmp_assign_source_16 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_c0fff8163aabf90b654f2f3ba03fe760, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_log_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_log );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_17 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_9ee0065fb030b4d6c1f397a7967d740e, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_plain_exec_command_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_exec_command );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_exec_command, tmp_assign_source_18 );
    tmp_import_globals_18 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_18, tmp_import_globals_18, const_tuple_421b8db525d151d70257415453c21a10_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_cyg2win32 );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_cyg2win32, tmp_assign_source_19 );
    tmp_import_globals_19 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_19, tmp_import_globals_19, const_tuple_421b8db525d151d70257415453c21a10_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_is_sequence );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_is_sequence, tmp_assign_source_20 );
    tmp_import_globals_20 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_20, tmp_import_globals_20, const_tuple_421b8db525d151d70257415453c21a10_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_mingw32 );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_mingw32, tmp_assign_source_21 );
    tmp_import_globals_21 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_digest_e81b400af7a6cd8b44ca874ee7cf2aa1, tmp_import_globals_21, tmp_import_globals_21, const_tuple_421b8db525d151d70257415453c21a10_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_quote_args );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_quote_args, tmp_assign_source_22 );
    tmp_import_globals_22 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_digest_90027b1d66347d1decac561bb6f2be2c, tmp_import_globals_22, tmp_import_globals_22, const_tuple_str_plain_get_exception_tuple, const_int_0 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_get_exception );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_get_exception, tmp_assign_source_23 );
    tmp_assign_source_24 = MAKE_FUNCTION_function_1_replace_method_of_module_numpy$distutils$ccompiler(  );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_replace_method, tmp_assign_source_24 );
    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_25 = MAKE_FUNCTION_function_2_CCompiler_spawn_of_module_numpy$distutils$ccompiler( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_25 );

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_spawn, tmp_assign_source_25 );
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_replace_method );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_replace_method );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79895 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79931 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = const_str_plain_spawn;
    tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_spawn );

    if (unlikely( tmp_call_arg_element_3 == NULL ))
    {
        tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler_spawn );
    }

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79962 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 74;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_defaults_2 = const_tuple_int_0_str_empty_tuple;
    tmp_assign_source_26 = MAKE_FUNCTION_function_3_CCompiler_object_filenames_of_module_numpy$distutils$ccompiler( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_26 );

        frame_module->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_object_filenames, tmp_assign_source_26 );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_replace_method );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_replace_method );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79895 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler );

    if (unlikely( tmp_call_arg_element_4 == NULL ))
    {
        tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler );
    }

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79931 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = const_str_plain_object_filenames;
    tmp_call_arg_element_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_object_filenames );

    if (unlikely( tmp_call_arg_element_6 == NULL ))
    {
        tmp_call_arg_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler_object_filenames );
    }

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79999 ], 48, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 121;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_defaults_3 = const_tuple_none_none_none_int_0_none_none_none_tuple;
    tmp_assign_source_27 = MAKE_FUNCTION_function_4_CCompiler_compile_of_module_numpy$distutils$ccompiler( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_27 );

        frame_module->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_compile, tmp_assign_source_27 );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_replace_method );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_replace_method );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79895 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler );

    if (unlikely( tmp_call_arg_element_7 == NULL ))
    {
        tmp_call_arg_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler );
    }

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79931 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = const_str_plain_compile;
    tmp_call_arg_element_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_compile );

    if (unlikely( tmp_call_arg_element_9 == NULL ))
    {
        tmp_call_arg_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler_compile );
    }

    if ( tmp_call_arg_element_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80047 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 210;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_defaults_4 = const_tuple_tuple_empty_tuple;
    tmp_assign_source_28 = MAKE_FUNCTION_function_5_CCompiler_customize_cmd_of_module_numpy$distutils$ccompiler( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_28 );

        frame_module->f_lineno = 212;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_customize_cmd, tmp_assign_source_28 );
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_replace_method );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_replace_method );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79895 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler );

    if (unlikely( tmp_call_arg_element_10 == NULL ))
    {
        tmp_call_arg_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler );
    }

    if ( tmp_call_arg_element_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79931 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = const_str_plain_customize_cmd;
    tmp_call_arg_element_12 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_customize_cmd );

    if (unlikely( tmp_call_arg_element_12 == NULL ))
    {
        tmp_call_arg_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler_customize_cmd );
    }

    if ( tmp_call_arg_element_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80086 ], 45, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 253;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_29 = MAKE_FUNCTION_function_6__compiler_to_string_of_module_numpy$distutils$ccompiler(  );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_29 );

        frame_module->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__compiler_to_string, tmp_assign_source_29 );
    tmp_assign_source_30 = MAKE_FUNCTION_function_7_CCompiler_show_customization_of_module_numpy$distutils$ccompiler(  );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_30 );

        frame_module->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_show_customization, tmp_assign_source_30 );
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_replace_method );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_replace_method );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79895 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 310;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler );

    if (unlikely( tmp_call_arg_element_13 == NULL ))
    {
        tmp_call_arg_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler );
    }

    if ( tmp_call_arg_element_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79931 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 310;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = const_str_plain_show_customization;
    tmp_call_arg_element_15 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_show_customization );

    if (unlikely( tmp_call_arg_element_15 == NULL ))
    {
        tmp_call_arg_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler_show_customization );
    }

    if ( tmp_call_arg_element_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80131 ], 50, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 310;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 310;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_defaults_5 = const_tuple_int_0_tuple;
    tmp_assign_source_31 = MAKE_FUNCTION_function_8_CCompiler_customize_of_module_numpy$distutils$ccompiler( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_31 );

        frame_module->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_customize, tmp_assign_source_31 );
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_replace_method );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_replace_method );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79895 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 368;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_16 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler );

    if (unlikely( tmp_call_arg_element_16 == NULL ))
    {
        tmp_call_arg_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler );
    }

    if ( tmp_call_arg_element_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79931 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 368;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_17 = const_str_plain_customize;
    tmp_call_arg_element_18 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_customize );

    if (unlikely( tmp_call_arg_element_18 == NULL ))
    {
        tmp_call_arg_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler_customize );
    }

    if ( tmp_call_arg_element_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80181 ], 41, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 368;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 368;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_6, tmp_call_arg_element_16, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 368;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_defaults_6 = const_tuple_699ad37c0c246d112a75919bc3f7a1fb_tuple;
    tmp_assign_source_32 = MAKE_FUNCTION_function_9_simple_version_match_of_module_numpy$distutils$ccompiler( INCREASE_REFCOUNT( tmp_defaults_6 ) );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        frame_module->f_lineno = 370;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_simple_version_match, tmp_assign_source_32 );
    tmp_defaults_7 = PyTuple_New( 2 );
    tmp_tuple_element_1 = Py_False;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_7, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = LIST_COPY( const_list_int_0_list );
    PyTuple_SET_ITEM( tmp_defaults_7, 1, tmp_tuple_element_1 );
    tmp_assign_source_33 = MAKE_FUNCTION_function_10_CCompiler_get_version_of_module_numpy$distutils$ccompiler( tmp_defaults_7 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_33 );

        frame_module->f_lineno = 417;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_get_version, tmp_assign_source_33 );
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_replace_method );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_replace_method );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79895 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 470;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_19 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler );

    if (unlikely( tmp_call_arg_element_19 == NULL ))
    {
        tmp_call_arg_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler );
    }

    if ( tmp_call_arg_element_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79931 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 470;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_20 = const_str_plain_get_version;
    tmp_call_arg_element_21 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_get_version );

    if (unlikely( tmp_call_arg_element_21 == NULL ))
    {
        tmp_call_arg_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler_get_version );
    }

    if ( tmp_call_arg_element_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80222 ], 43, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 470;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 470;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_7, tmp_call_arg_element_19, tmp_call_arg_element_20, tmp_call_arg_element_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 470;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_34 = MAKE_FUNCTION_function_11_CCompiler_cxx_compiler_of_module_numpy$distutils$ccompiler(  );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_34 );

        frame_module->f_lineno = 472;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_cxx_compiler, tmp_assign_source_34 );
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_replace_method );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_replace_method );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79895 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 497;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_22 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler );

    if (unlikely( tmp_call_arg_element_22 == NULL ))
    {
        tmp_call_arg_element_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler );
    }

    if ( tmp_call_arg_element_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79931 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 497;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_23 = const_str_plain_cxx_compiler;
    tmp_call_arg_element_24 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_CCompiler_cxx_compiler );

    if (unlikely( tmp_call_arg_element_24 == NULL ))
    {
        tmp_call_arg_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CCompiler_cxx_compiler );
    }

    if ( tmp_call_arg_element_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80265 ], 44, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 497;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 497;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_8, tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 497;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_1 = const_tuple_ad14f9d5da6054a779b47b667867241f_tuple;
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_compiler_class );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compiler_class );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80309 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 499;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_intel;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 500;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = const_tuple_fce77df4ef2a4acb5fb81d3b3741bc4d_tuple;
    tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_compiler_class );

    if (unlikely( tmp_ass_subscribed_2 == NULL ))
    {
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compiler_class );
    }

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80309 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 501;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_intele;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 502;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_3 = const_tuple_62592a2964d8aafd0d4e2191579c78f2_tuple;
    tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_compiler_class );

    if (unlikely( tmp_ass_subscribed_3 == NULL ))
    {
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compiler_class );
    }

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80309 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 503;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_3 = const_str_plain_intelem;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 504;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_4 = const_tuple_f97c671979b9d677cda717a459069b04_tuple;
    tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_compiler_class );

    if (unlikely( tmp_ass_subscribed_4 == NULL ))
    {
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compiler_class );
    }

    if ( tmp_ass_subscribed_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80309 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 505;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_4 = const_str_plain_pathcc;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 506;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_ccompiler );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ccompiler );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80345 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 507;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_35 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__default_compilers );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 507;
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = tmp_assign_source_35;

    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_1 = const_tuple_784d89085a69e83fc1cf1c198c8c0d56_tuple;
    tmp_assign_source_36 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 507;
        goto try_finally_handler_1;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_36;

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

    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_ccompiler );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ccompiler );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80345 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 507;
        goto try_finally_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__default_compilers, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 507;
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

    tmp_tried_lineno_1 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_1__inplace_end.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_end.object );
        tmp_inplace_assign_1__inplace_end.object = NULL;
    }

    assert( tmp_result != false );
    frame_module->f_lineno = tmp_tried_lineno_1;
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

    tmp_tried_lineno_2 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 512;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_platform );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 512;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_plain_win32;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_module->f_lineno = 512;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_ass_subvalue_5 = const_tuple_33cbe077bb71a25db237f0b0347a72c2_tuple;
    tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_compiler_class );

    if (unlikely( tmp_ass_subscribed_5 == NULL ))
    {
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compiler_class );
    }

    if ( tmp_ass_subscribed_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80309 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 513;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_5 = const_str_plain_mingw32;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 514;
        goto frame_exception_exit_1;
    }
    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_mingw32 );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mingw32 );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80376 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 516;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 516;
    tmp_cond_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_9 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 516;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_module->f_lineno = 516;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3854 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 519;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_info );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 519;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_25 = const_str_digest_e7c1c39a27def49fc1a65a20f55d85be;
    frame_module->f_lineno = 519;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_25 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 519;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_2 = const_tuple_tuple_str_plain_nt_str_plain_mingw32_tuple_tuple;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_ccompiler );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ccompiler );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80345 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 521;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__default_compilers );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 520;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_ccompiler );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ccompiler );
    }

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80345 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 520;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__default_compilers, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_module->f_lineno = 520;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    branch_no_3:;
    branch_no_2:;
    tmp_assign_source_37 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_new_compiler );

    if (unlikely( tmp_assign_source_37 == NULL ))
    {
        tmp_assign_source_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_new_compiler );
    }

    if ( tmp_assign_source_37 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80405 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 524;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__distutils_new_compiler, tmp_assign_source_37 );
    tmp_defaults_8 = const_tuple_none_none_int_0_int_0_int_0_tuple;
    tmp_assign_source_38 = MAKE_FUNCTION_function_12_new_compiler_of_module_numpy$distutils$ccompiler( INCREASE_REFCOUNT( tmp_defaults_8 ) );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_38 );

        frame_module->f_lineno = 525;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_new_compiler, tmp_assign_source_38 );
    tmp_assattr_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_new_compiler );

    if (unlikely( tmp_assattr_name_3 == NULL ))
    {
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_new_compiler );
    }

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80405 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 566;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_ccompiler );

    if (unlikely( tmp_assattr_target_3 == NULL ))
    {
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ccompiler );
    }

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80345 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 566;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_new_compiler, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 566;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_39 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_gen_lib_options );

    if (unlikely( tmp_assign_source_39 == NULL ))
    {
        tmp_assign_source_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gen_lib_options );
    }

    if ( tmp_assign_source_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80439 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 568;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__distutils_gen_lib_options, tmp_assign_source_39 );
    tmp_assign_source_40 = MAKE_FUNCTION_function_13_gen_lib_options_of_module_numpy$distutils$ccompiler(  );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_40 );

        frame_module->f_lineno = 569;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_gen_lib_options, tmp_assign_source_40 );
    tmp_assattr_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_gen_lib_options );

    if (unlikely( tmp_assattr_name_4 == NULL ))
    {
        tmp_assattr_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gen_lib_options );
    }

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80439 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 581;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_ccompiler );

    if (unlikely( tmp_assattr_target_4 == NULL ))
    {
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ccompiler );
    }

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80345 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 581;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_gen_lib_options, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 581;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = const_tuple_91ad9508e574e38e67011733ae2d8033_tuple;
    tmp_assign_source_41 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 586;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_41;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_42 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_42 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_module->f_lineno = 586;
            goto try_finally_handler_3;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_42;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_42;
        Py_DECREF( old );
    }
    tmp_assign_source_43 = tmp_for_loop_1__iter_value.object;

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__cc, tmp_assign_source_43 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 587;
        goto try_finally_handler_3;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_modules );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 587;
        goto try_finally_handler_3;
    }
    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 587;
        goto try_finally_handler_3;
    }
    tmp_binop_left_4 = const_str_digest_0a124e61b2c618847fb417c2313d1389;
    tmp_binop_right_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__cc );

    if (unlikely( tmp_binop_right_4 == NULL ))
    {
        tmp_binop_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cc );
    }

    if ( tmp_binop_right_4 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80476 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 587;
        goto try_finally_handler_3;
    }

    tmp_binop_left_3 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_module->f_lineno = 587;
        goto try_finally_handler_3;
    }
    tmp_binop_right_3 = const_str_plain_compiler;
    tmp_call_arg_element_26 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_call_arg_element_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_module->f_lineno = 587;
        goto try_finally_handler_3;
    }
    frame_module->f_lineno = 587;
    tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_26 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_26 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 587;
        goto try_finally_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__m, tmp_assign_source_44 );
    tmp_compare_left_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__m );

    if (unlikely( tmp_compare_left_3 == NULL ))
    {
        tmp_compare_left_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__m );
    }

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73385 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 588;
        goto try_finally_handler_3;
    }

    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_2)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_setattr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__m );

    if (unlikely( tmp_setattr_target_1 == NULL ))
    {
        tmp_setattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__m );
    }

    if ( tmp_setattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73385 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 589;
        goto try_finally_handler_3;
    }

    tmp_setattr_attr_1 = const_str_plain_gen_lib_options;
    tmp_setattr_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_gen_lib_options );

    if (unlikely( tmp_setattr_value_1 == NULL ))
    {
        tmp_setattr_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gen_lib_options );
    }

    if ( tmp_setattr_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80439 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 589;
        goto try_finally_handler_3;
    }

    tmp_unused = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 589;
        goto try_finally_handler_3;
    }
    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 586;
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
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_module->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_3;
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
    tmp_assign_source_45 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_gen_preprocess_options );

    if (unlikely( tmp_assign_source_45 == NULL ))
    {
        tmp_assign_source_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gen_preprocess_options );
    }

    if ( tmp_assign_source_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80501 ], 44, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 591;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__distutils_gen_preprocess_options, tmp_assign_source_45 );
    tmp_assign_source_46 = MAKE_FUNCTION_function_14_gen_preprocess_options_of_module_numpy$distutils$ccompiler(  );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_46 );

        frame_module->f_lineno = 592;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_gen_preprocess_options, tmp_assign_source_46 );
    tmp_assattr_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_gen_preprocess_options );

    if (unlikely( tmp_assattr_name_5 == NULL ))
    {
        tmp_assattr_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gen_preprocess_options );
    }

    if ( tmp_assattr_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80501 ], 44, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 595;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_ccompiler );

    if (unlikely( tmp_assattr_target_5 == NULL ))
    {
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ccompiler );
    }

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80345 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 595;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_gen_preprocess_options, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 595;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_23 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 602;
    tmp_assign_source_47 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_23, tmp_import_globals_23, Py_None, const_int_0 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 602;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_47 );
    tmp_import_globals_24 = ((PyModuleObject *)module_numpy$distutils$ccompiler)->md_dict;
    frame_module->f_lineno = 603;
    tmp_assign_source_48 = IMPORT_MODULE( const_str_plain_string, tmp_import_globals_24, tmp_import_globals_24, Py_None, const_int_0 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 603;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_string, tmp_assign_source_48 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4457 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 604;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_compile );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 604;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_5 = const_str_digest_c7634b0d3b2e6f96b8daeb5b3fe65b43;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_string );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 18285 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 604;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_whitespace );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_module->f_lineno = 604;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_27 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_call_arg_element_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_module->f_lineno = 604;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 604;
    tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_27 );
    Py_DECREF( tmp_called_12 );
    Py_DECREF( tmp_call_arg_element_27 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 604;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__wordchars_re, tmp_assign_source_49 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4457 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 605;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_compile );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 605;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_28 = const_str_digest_d09f5b2ad48fa26b7d952d02eab5ccde;
    frame_module->f_lineno = 605;
    tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_28 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 605;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__squote_re, tmp_assign_source_50 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4457 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 606;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_compile );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 606;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_29 = const_str_digest_b1277d10781b42009d0a7a27674285f5;
    frame_module->f_lineno = 606;
    tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_29 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 606;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__dquote_re, tmp_assign_source_51 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4457 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 607;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_compile );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 607;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_30 = const_str_digest_dcdac4fb47dcedffe1b3fe5feb42051b;
    frame_module->f_lineno = 607;
    tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_30 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 607;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain__has_white_re, tmp_assign_source_52 );
    tmp_assign_source_53 = MAKE_FUNCTION_function_15_split_quoted_of_module_numpy$distutils$ccompiler(  );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_53 );

        frame_module->f_lineno = 608;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_split_quoted, tmp_assign_source_53 );
    tmp_assattr_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_split_quoted );

    if (unlikely( tmp_assattr_name_6 == NULL ))
    {
        tmp_assattr_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_split_quoted );
    }

    if ( tmp_assattr_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80545 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 655;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$ccompiler, (Nuitka_StringObject *)const_str_plain_ccompiler );

    if (unlikely( tmp_assattr_target_6 == NULL ))
    {
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ccompiler );
    }

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80345 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 655;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_split_quoted, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 655;
        goto frame_exception_exit_1;
    }

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

    return MOD_RETURN_VALUE( module_numpy$distutils$ccompiler );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
