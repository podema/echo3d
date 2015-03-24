// Generated code for Python source for module 'numpy.f2py.cfuncs'
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

// The _module_numpy$f2py$cfuncs is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$f2py$cfuncs;
PyDictObject *moduledict_numpy$f2py$cfuncs;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_list_empty;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_nn;
extern PyObject *const_str_plain_map;
static PyObject *const_str_plain_nnn;
extern PyObject *const_str_plain_out;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_tmp;
extern PyObject *const_str_plain_SWAP;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain_flag;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_need;
extern PyObject *const_str_plain_needs;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_plain_F_FUNC;
extern PyObject *const_str_plain_MINMAX;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_cfuncs;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_plain_string;
static PyObject *const_str_plain_ARRSIZE;
extern PyObject *const_str_plain_MEMCOPY;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_errmess;
extern PyObject *const_str_plain_forcomb;
static PyObject *const_str_plain_saveout;
extern PyObject *const_str_plain_version;
static PyObject *const_str_plain_FAILNULL;
static PyObject *const_str_plain_OLDPYNUM;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_includes;
extern PyObject *const_str_plain_outneeds;
extern PyObject *const_str_plain_typedefs;
extern PyObject *const_str_plain_F_MODFUNC;
extern PyObject *const_str_plain_callbacks;
extern PyObject *const_str_plain_capi_maps;
extern PyObject *const_str_plain_cppmacros;
static PyObject *const_str_plain_f2py_size;
extern PyObject *const_str_plain_get_needs;
extern PyObject *const_str_plain_includes0;
extern PyObject *const_str_plain_long_long;
extern PyObject *const_str_plain_CFUNCSMESS;
extern PyObject *const_str_plain_CHECKARRAY;
static PyObject *const_str_plain_STRINGCOPY;
extern PyObject *const_str_plain_STRINGFREE;
static PyObject *const_str_plain_SWAPUNSAFE;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_c2capi_map;
extern PyObject *const_str_plain_CHECKSCALAR;
extern PyObject *const_str_plain_CHECKSTRING;
static PyObject *const_str_plain_STRINGCOPYN;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_buildcfuncs;
extern PyObject *const_str_plain_commonhooks;
extern PyObject *const_str_plain_f90modhooks;
extern PyObject *const_str_plain_long_double;
static PyObject *const_str_plain_signed_char;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_CHECKGENERIC;
static PyObject *const_str_plain_STRINGMALLOC;
extern PyObject *const_str_plain_append_needs;
static PyObject *const_str_plain_calcarrindex;
extern PyObject *const_str_plain_f2py_version;
extern PyObject *const_str_plain_userincludes;
extern PyObject *const_str_plain_F_WRAPPEDFUNC;
static PyObject *const_str_plain_PRINTPYOBJERR;
static PyObject *const_str_plain_complex_float;
extern PyObject *const_str_plain_unsigned_char;
static PyObject *const_str_plain_unsigned_long;
static PyObject *const_str_plain_calcarrindextr;
static PyObject *const_str_plain_complex_double;
static PyObject *const_str_plain_int_from_pyobj;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_unsigned_short;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_char_from_pyobj;
extern PyObject *const_str_plain_initcommonhooks;
static PyObject *const_str_plain_long_from_pyobj;
static PyObject *const_str_plain_pyobj_from_int1;
static PyObject *const_list_str_plain_string_list;
static PyObject *const_str_plain_float_from_pyobj;
static PyObject *const_str_plain_pyobj_from_char1;
static PyObject *const_str_plain_pyobj_from_long1;
static PyObject *const_str_plain_short_from_pyobj;
extern PyObject *const_str_plain_GETSTRFROMPYTUPLE;
extern PyObject *const_str_plain_create_cb_arglist;
static PyObject *const_str_plain_double_from_pyobj;
static PyObject *const_str_plain_pyobj_from_float1;
static PyObject *const_str_plain_pyobj_from_short1;
static PyObject *const_str_plain_string_from_pyobj;
static PyObject *const_str_plain_TRYPYARRAYTEMPLATE;
static PyObject *const_str_plain_insinged_long_long;
static PyObject *const_str_plain_pyobj_from_double1;
static PyObject *const_str_plain_pyobj_from_string1;
static PyObject *const_str_plain_try_pyarr_from_int;
extern PyObject *const_str_plain_typedefs_generated;
static PyObject *const_list_str_plain_f2py_size_list;
static PyObject *const_list_str_plain_long_long_list;
extern PyObject *const_str_plain_complex_long_double;
static PyObject *const_str_plain_try_pyarr_from_char;
static PyObject *const_str_plain_try_pyarr_from_long;
extern PyObject *const_str_plain_GETSCALARFROMPYTUPLE;
static PyObject *const_str_plain_long_long_from_pyobj;
static PyObject *const_str_plain_try_pyarr_from_float;
static PyObject *const_str_plain_try_pyarr_from_short;
static PyObject *const_list_str_plain_long_double_list;
static PyObject *const_list_str_plain_signed_char_list;
static PyObject *const_str_plain_initf90modhooksstatic;
static PyObject *const_str_plain_pyobj_from_long_long1;
static PyObject *const_str_plain_try_pyarr_from_double;
static PyObject *const_str_plain_try_pyarr_from_string;
static PyObject *const_str_plain_initf90modhooksdynamic;
static PyObject *const_str_plain_long_double_from_pyobj;
static PyObject *const_str_plain_pyobj_from_string1size;
static PyObject *const_str_plain_signed_char_from_pyobj;
static PyObject *const_tuple_str_plain_c2capi_map_tuple;
static PyObject *const_list_str_plain_PRINTPYOBJERR_list;
static PyObject *const_list_str_plain_complex_float_list;
static PyObject *const_str_plain_pyobj_from_long_double1;
extern PyObject *const_tuple_str_plain___version___tuple;
static PyObject *const_list_str_plain_complex_double_list;
static PyObject *const_list_str_plain_int_from_pyobj_list;
static PyObject *const_str_plain_complex_float_from_pyobj;
static PyObject *const_str_plain_try_pyarr_from_long_long;
static PyObject *const_str_plain_TRYCOMPLEXPYARRAYTEMPLATE;
static PyObject *const_str_plain_complex_double_from_pyobj;
static PyObject *const_str_plain_pyobj_from_complex_float1;
extern PyObject *const_tuple_str_plain_x_str_plain_y_tuple;
static PyObject *const_str_plain_pyobj_from_complex_double1;
static PyObject *const_str_plain_try_pyarr_from_signed_char;
static PyObject *const_dict_53d1c8857e48a95a7774520cf53a93c4;
static PyObject *const_dict_57ba82f0b6ddacf861f6606a449c7913;
static PyObject *const_dict_788e82655419d5f1a9ac9e67520346b0;
static PyObject *const_dict_844a19a84e79d1182d43c32d69901a3c;
static PyObject *const_dict_a1e6d4a6d196b71de70ef245a55c711a;
static PyObject *const_dict_ad0cc476bc3e3e1ab256e4edf7e6d930;
static PyObject *const_dict_c8a8e96575af0b76af8479ec1389c9e3;
static PyObject *const_dict_cc6f9c9534893ecefac794ef61729c8b;
static PyObject *const_dict_dedaec7b17af2aa6922b9e268eb8e62b;
static PyObject *const_dict_e3b7e8e148208997eeb8e041e1f9934d;
static PyObject *const_dict_ef8761b9cba820f57cd5a2786a9f7930;
static PyObject *const_list_str_plain_double_from_pyobj_list;
static PyObject *const_str_plain_try_pyarr_from_complex_float;
static PyObject *const_str_plain_try_pyarr_from_unsigned_char;
static PyObject *const_list_str_plain_complex_long_double_list;
static PyObject *const_str_plain_try_pyarr_from_complex_double;
static PyObject *const_str_plain_complex_long_double_from_pyobj;
static PyObject *const_str_plain_pyobj_from_complex_long_double1;
static PyObject *const_tuple_str_plain_need_str_plain_flag_tuple;
static PyObject *const_list_0a4c09bf7ee8113173dbb8914c21d9bf_list;
static PyObject *const_list_54890ded9c275bbdc4b740fb0c5a02c8_list;
static PyObject *const_list_55167523f6d3e56dad43daa87c13f5b4_list;
static PyObject *const_list_56aca13099c085ba8f85f1374ee25ce7_list;
static PyObject *const_list_664391f1bb0e8dbdf55326ab3be48ab9_list;
static PyObject *const_list_78fac9844f706e31eebc87a96b711791_list;
static PyObject *const_list_aa65bd07eac04087b2c26adc1bc7819c_list;
static PyObject *const_list_e182b2a897bd6090b70e2001220ac7c4_list;
extern PyObject *const_str_digest_00712398ca7c9a987043e29bb7424f6c;
static PyObject *const_str_digest_01fb484d7be945b15a4a4723d827c333;
static PyObject *const_str_digest_02e4637ff093e54b7313e28f9e0bae78;
static PyObject *const_str_digest_047b582fe49061e77b60d07ec23fc723;
static PyObject *const_str_digest_05c18e6db4f33637f2f8e357d7f29e61;
static PyObject *const_str_digest_0697b205fd19a3ba344d22b1d1209f14;
static PyObject *const_str_digest_09357d7da47cc657aa3e097cbfcf69c1;
static PyObject *const_str_digest_097d0d5326ef098f1f6c2fd9bd711de5;
static PyObject *const_str_digest_0a3cd72f21792255256e8cc572d73a1e;
static PyObject *const_str_digest_0e7569460ed669b2903ce0b0da99d670;
static PyObject *const_str_digest_0fb16b5b25ebfcc4c96296b6924f74c1;
static PyObject *const_str_digest_105105b69a73a06bfaf38138dd39b197;
static PyObject *const_str_digest_1583a6d78160909d2c18d45bf29ffa5f;
static PyObject *const_str_digest_173093001f5d2a6f237caf3a485a6858;
static PyObject *const_str_digest_18eda5ea4c07a294c3dfc640239b92b8;
static PyObject *const_str_digest_20788aa4abe77df756a0b9c2bf914644;
static PyObject *const_str_digest_21cfe7952be0c0e4a3fe5ff6af3f97e0;
static PyObject *const_str_digest_26da45d08bf95d68b3ccb6b08c28930c;
static PyObject *const_str_digest_26dc67f2c4fb0017b41e27e97aa3c235;
extern PyObject *const_str_digest_2782d06f338ee345290cef192d05e062;
static PyObject *const_str_digest_33209d1e5c473de96f14331b495d35bd;
static PyObject *const_str_digest_371f1704af358a0d9b8b8bba00413072;
static PyObject *const_str_digest_3740e02b798978c5b9f7afde4debf573;
static PyObject *const_str_digest_389a86e4dd8f25a614d61c156060fb3d;
static PyObject *const_str_digest_3a23a27d0e08b643649553907708c011;
static PyObject *const_str_digest_3dd3068f463e4a73a6f25e60fc2b142d;
static PyObject *const_str_digest_3e8a5dd8d20d7153bc232af6c9324c58;
static PyObject *const_str_digest_408031f166d376d1494138d81b948520;
static PyObject *const_str_digest_42802a34520023df26a453e8f167f3fc;
static PyObject *const_str_digest_437415b6722a87a93187a0d293046f21;
static PyObject *const_str_digest_43d9cc2265fd996729bf1e6d91e79315;
static PyObject *const_str_digest_44016f51283a958497b9fe35a8ca01b1;
static PyObject *const_str_digest_497a0b39e47e0ff41272fd17cdca9806;
static PyObject *const_str_digest_4a7dc7d1a9bea468e0e49561a7b0b5fe;
static PyObject *const_str_digest_4a982b2ba0ebcbde1146b96b6ca60a9c;
static PyObject *const_str_digest_51c5006076994acf62a7003bd16396d9;
static PyObject *const_str_digest_5316b30a30d3d98a2c8f76f7384edfff;
static PyObject *const_str_digest_533fc6dc69244a4be2acda88157e5dab;
static PyObject *const_str_digest_59e1425961acc3db662b5276975ba5c3;
static PyObject *const_str_digest_5b9840bfac2805c944b31db7014f418a;
static PyObject *const_str_digest_5cc47f09a6119059a4deb1b21f5ead45;
static PyObject *const_str_digest_5d11cf2593e7151b8b357f4f3e67c2a7;
static PyObject *const_str_digest_5e386bc666bd91c6bf9fc510e8e839bb;
static PyObject *const_str_digest_5fb4c06ca1caf68a0eed6655ccd5ceb2;
static PyObject *const_str_digest_610e229f0b92cd0cdbca1ded1ffd7e3e;
static PyObject *const_str_digest_63b725b1590378a5145bd999c67c8319;
static PyObject *const_str_digest_63d4ee2039ee50869d8ca78baafa71a0;
static PyObject *const_str_digest_6ce6a5a60e659edf81e1f085f58f3663;
static PyObject *const_str_digest_6db35613500c1a870117eb76e033ee86;
static PyObject *const_str_digest_6f8c6ff96569a96f90c0868ccec5e004;
static PyObject *const_str_digest_73e1e214d989fa7c6be358b1d7373093;
static PyObject *const_str_digest_7405eae7c50c570661f79246f76abb4a;
static PyObject *const_str_digest_78b6090cc491d48eb9e6e9ed6da5d7c7;
static PyObject *const_str_digest_791b1e651ce88fb45aabd06f6facbbf8;
static PyObject *const_str_digest_79304a53d92b30c74f5d06905f59ad45;
static PyObject *const_str_digest_79e58cdd6dcc0c4c234fe426749ea8d1;
static PyObject *const_str_digest_7d2bab39577ddf526d1b6996c67632bb;
static PyObject *const_str_digest_7d440d2636f994574162135084027a0d;
static PyObject *const_str_digest_822ef11ec1e826341ff158bd63191686;
static PyObject *const_str_digest_841f8144160e16b7c03da563289c2bd2;
static PyObject *const_str_digest_85a3eb17c9e17ed7e31cbefb122f9f34;
static PyObject *const_str_digest_866dc0a2de1ae9670ebb64de6d48a4fc;
extern PyObject *const_str_digest_890854844f87190b1c6e74a24b3f6e6e;
static PyObject *const_str_digest_8c7cecd620dcdc6d1eeb04a22b1591e7;
extern PyObject *const_str_digest_8f1af3fa58871032e57b3bdcaf89b551;
extern PyObject *const_str_digest_901a22001a0c7f25add446a5f68900d0;
static PyObject *const_str_digest_90e5a4bf1414cb157f8e196235139fad;
static PyObject *const_str_digest_910789c03671f971f7793e4d386e63ff;
static PyObject *const_str_digest_962cf63a739d975c45c04813de22ab97;
static PyObject *const_str_digest_974ecd9fd49d6e81ef4b0bf0455f10e2;
static PyObject *const_str_digest_999ab6410e5a94eb500c138eaa52e416;
static PyObject *const_str_digest_9c2dfc7feb00efe56dcb6f59d36af122;
static PyObject *const_str_digest_9cc60f70f7890b3ee11152a8d168e91a;
static PyObject *const_str_digest_9ce2e4a686916bec0097fa5b8d4f314b;
static PyObject *const_str_digest_9d1c66eea591d9926996bdd4cfe52c06;
static PyObject *const_str_digest_9eaf72a6358f3976ba36284be8dc1083;
static PyObject *const_str_digest_a98a2a02ed2c372a11a799cca65f34b1;
static PyObject *const_str_digest_abd52d758e14f00949f899a22094fbdd;
static PyObject *const_str_digest_ad5bf3ddcd64b245586cbb783ae0b5f9;
static PyObject *const_str_digest_adcd7034250adb10f428e296b32ea74d;
static PyObject *const_str_digest_afad6edbaecb2a3ef6eddf883a23eece;
static PyObject *const_str_digest_b22d6b4bca9ee819d9d549fda1b30ea0;
static PyObject *const_str_digest_b352efd96c887b65d4365dc8e866a3ca;
static PyObject *const_str_digest_b60fe1a5484cbe81401785b1ecb3e13b;
static PyObject *const_str_digest_b84b54236f330e123c83bba162e8bedd;
static PyObject *const_str_digest_b9ffbec4f0c711b079ed72967cc946a7;
static PyObject *const_str_digest_bf45789f1ab41c4a6890de1e3c1beef5;
static PyObject *const_str_digest_c19bdd2a30e7b66fd0173af911d79923;
static PyObject *const_str_digest_c22461622fee22c75dbb860cd5ace6d2;
static PyObject *const_str_digest_c2d6421daf01ea6ae50d672016abe9f2;
static PyObject *const_str_digest_c342bcf69b35d1479323b86b8eefb1a4;
static PyObject *const_str_digest_c6054829fd80e050f8e217e2891c6a1a;
static PyObject *const_str_digest_c726556b2592895f5e93aedb7815794b;
static PyObject *const_str_digest_c8434c627f5decd5199bc415a9866adb;
static PyObject *const_str_digest_ca5812a794c90143c26d1885325762a4;
static PyObject *const_str_digest_cf8a57713bc16778077ba316e18a487e;
static PyObject *const_str_digest_d5886e2ecd61457f24163eaa5d3b9a82;
static PyObject *const_str_digest_d8734fdf95614f71b17eec9b69cfeda1;
static PyObject *const_str_digest_dad78054c8b0af812591e9348ae8be45;
static PyObject *const_str_digest_dae496aa2ee10a0a11d812895fb39bab;
static PyObject *const_str_digest_e120aec164448ec01b2c256e82cdd1c9;
static PyObject *const_str_digest_e127f76d163f41db0658a2cf185dc143;
static PyObject *const_str_digest_e80583584f6f731716aadcb43efaf5b2;
static PyObject *const_str_digest_e9c79288e2bfdc2ac86fa402fb80fedd;
static PyObject *const_str_digest_ee1d82d6478b02d751dde9b11b43791d;
static PyObject *const_str_digest_f003b28ea57a5eba82b149c7847b1c4f;
static PyObject *const_str_digest_f09797a78f374acb32df435a705e717e;
static PyObject *const_str_digest_f0a2fcd603834fad2b84e734164ea722;
static PyObject *const_str_digest_f57b9e3f10fb25f49a591c29127b6135;
static PyObject *const_str_digest_f589bf744fd35201955f6365656908e4;
static PyObject *const_str_digest_f69957725a097974a85c057a0ef00c8c;
static PyObject *const_str_digest_fb63144b48d581c350f194b5453ab98c;
static PyObject *const_str_digest_fde589cd4015f9322a88ed1d8c64ea8c;
static PyObject *const_str_digest_ff15dfdf55916a14a1e4828561bb5386;
static PyObject *const_str_digest_ff6713004d85b1c2c1b200852aaf0b48;
static PyObject *const_tuple_373e7ade86bd34e2346976ef07fdaa8d_tuple;
static PyObject *const_tuple_a8a6153d688672bd680ded7f1e3fd029_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_list_str_digest_7d2bab39577ddf526d1b6996c67632bb_list;
static PyObject *const_list_str_digest_841f8144160e16b7c03da563289c2bd2_list;
static PyObject *const_list_str_plain_STRINGCOPYN_str_plain_PRINTPYOBJERR_list;
static PyObject *const_list_str_plain_int_from_pyobj_str_plain_signed_char_list;
static PyObject *const_tuple_str_plain_c2capi_map_str_plain_k_str_plain_m_tuple;
static PyObject *const_list_str_plain_double_from_pyobj_str_plain_long_double_list;
static PyObject *const_list_str_plain_TRYPYARRAYTEMPLATE_str_plain_signed_char_list;
static PyObject *const_list_str_plain_TRYPYARRAYTEMPLATE_str_plain_unsigned_char_list;
static PyObject *const_list_str_plain_pyobj_from_int1_str_plain_TRYPYARRAYTEMPLATE_list;
static PyObject *const_list_str_plain_pyobj_from_char1_str_plain_TRYPYARRAYTEMPLATE_list;
static PyObject *const_list_str_plain_pyobj_from_long1_str_plain_TRYPYARRAYTEMPLATE_list;
static PyObject *const_list_str_plain_pyobj_from_float1_str_plain_TRYPYARRAYTEMPLATE_list;
static PyObject *const_list_str_plain_pyobj_from_short1_str_plain_TRYPYARRAYTEMPLATE_list;
static PyObject *const_list_str_plain_pyobj_from_double1_str_plain_TRYPYARRAYTEMPLATE_list;
static PyObject *const_list_str_plain_complex_float_str_plain_complex_double_from_pyobj_list;

static void _initModuleConstants(void)
{
    const_str_plain_nnn = UNSTREAM_STRING( &constant_bin[ 1006843 ], 3, 1 );
    const_str_plain_ARRSIZE = UNSTREAM_STRING( &constant_bin[ 1006846 ], 7, 1 );
    const_str_plain_saveout = UNSTREAM_STRING( &constant_bin[ 130786 ], 7, 1 );
    const_str_plain_FAILNULL = UNSTREAM_STRING( &constant_bin[ 1006853 ], 8, 1 );
    const_str_plain_OLDPYNUM = UNSTREAM_STRING( &constant_bin[ 1006861 ], 8, 1 );
    const_str_plain_f2py_size = UNSTREAM_STRING( &constant_bin[ 1006869 ], 9, 1 );
    const_str_plain_STRINGCOPY = UNSTREAM_STRING( &constant_bin[ 1006878 ], 10, 1 );
    const_str_plain_SWAPUNSAFE = UNSTREAM_STRING( &constant_bin[ 1006888 ], 10, 1 );
    const_str_plain_STRINGCOPYN = UNSTREAM_STRING( &constant_bin[ 1006898 ], 11, 1 );
    const_str_plain_signed_char = UNSTREAM_STRING( &constant_bin[ 151060 ], 11, 1 );
    const_str_plain_STRINGMALLOC = UNSTREAM_STRING( &constant_bin[ 1006909 ], 12, 1 );
    const_str_plain_calcarrindex = UNSTREAM_STRING( &constant_bin[ 1006921 ], 12, 1 );
    const_str_plain_PRINTPYOBJERR = UNSTREAM_STRING( &constant_bin[ 1006933 ], 13, 1 );
    const_str_plain_complex_float = UNSTREAM_STRING( &constant_bin[ 935182 ], 13, 1 );
    const_str_plain_unsigned_long = UNSTREAM_STRING( &constant_bin[ 151165 ], 13, 1 );
    const_str_plain_calcarrindextr = UNSTREAM_STRING( &constant_bin[ 1006946 ], 14, 1 );
    const_str_plain_complex_double = UNSTREAM_STRING( &constant_bin[ 935196 ], 14, 1 );
    const_str_plain_int_from_pyobj = UNSTREAM_STRING( &constant_bin[ 1006960 ], 14, 1 );
    const_str_plain_char_from_pyobj = UNSTREAM_STRING( &constant_bin[ 1006974 ], 15, 1 );
    const_str_plain_long_from_pyobj = UNSTREAM_STRING( &constant_bin[ 1006989 ], 15, 1 );
    const_str_plain_pyobj_from_int1 = UNSTREAM_STRING( &constant_bin[ 1007004 ], 15, 1 );
    const_list_str_plain_string_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_string_list, 0, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    const_str_plain_float_from_pyobj = UNSTREAM_STRING( &constant_bin[ 1007019 ], 16, 1 );
    const_str_plain_pyobj_from_char1 = UNSTREAM_STRING( &constant_bin[ 1007035 ], 16, 1 );
    const_str_plain_pyobj_from_long1 = UNSTREAM_STRING( &constant_bin[ 1007051 ], 16, 1 );
    const_str_plain_short_from_pyobj = UNSTREAM_STRING( &constant_bin[ 1007067 ], 16, 1 );
    const_str_plain_double_from_pyobj = UNSTREAM_STRING( &constant_bin[ 1007083 ], 17, 1 );
    const_str_plain_pyobj_from_float1 = UNSTREAM_STRING( &constant_bin[ 1007100 ], 17, 1 );
    const_str_plain_pyobj_from_short1 = UNSTREAM_STRING( &constant_bin[ 1007117 ], 17, 1 );
    const_str_plain_string_from_pyobj = UNSTREAM_STRING( &constant_bin[ 1007134 ], 17, 1 );
    const_str_plain_TRYPYARRAYTEMPLATE = UNSTREAM_STRING( &constant_bin[ 1007151 ], 18, 1 );
    const_str_plain_insinged_long_long = UNSTREAM_STRING( &constant_bin[ 1007169 ], 18, 1 );
    const_str_plain_pyobj_from_double1 = UNSTREAM_STRING( &constant_bin[ 1007187 ], 18, 1 );
    const_str_plain_pyobj_from_string1 = UNSTREAM_STRING( &constant_bin[ 1007205 ], 18, 1 );
    const_str_plain_try_pyarr_from_int = UNSTREAM_STRING( &constant_bin[ 1007223 ], 18, 1 );
    const_list_str_plain_f2py_size_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_f2py_size_list, 0, const_str_plain_f2py_size ); Py_INCREF( const_str_plain_f2py_size );
    const_list_str_plain_long_long_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_long_long_list, 0, const_str_plain_long_long ); Py_INCREF( const_str_plain_long_long );
    const_str_plain_try_pyarr_from_char = UNSTREAM_STRING( &constant_bin[ 1007241 ], 19, 1 );
    const_str_plain_try_pyarr_from_long = UNSTREAM_STRING( &constant_bin[ 1007260 ], 19, 1 );
    const_str_plain_long_long_from_pyobj = UNSTREAM_STRING( &constant_bin[ 1007279 ], 20, 1 );
    const_str_plain_try_pyarr_from_float = UNSTREAM_STRING( &constant_bin[ 1007299 ], 20, 1 );
    const_str_plain_try_pyarr_from_short = UNSTREAM_STRING( &constant_bin[ 1007319 ], 20, 1 );
    const_list_str_plain_long_double_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_long_double_list, 0, const_str_plain_long_double ); Py_INCREF( const_str_plain_long_double );
    const_list_str_plain_signed_char_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_signed_char_list, 0, const_str_plain_signed_char ); Py_INCREF( const_str_plain_signed_char );
    const_str_plain_initf90modhooksstatic = UNSTREAM_STRING( &constant_bin[ 1007339 ], 21, 1 );
    const_str_plain_pyobj_from_long_long1 = UNSTREAM_STRING( &constant_bin[ 1007360 ], 21, 1 );
    const_str_plain_try_pyarr_from_double = UNSTREAM_STRING( &constant_bin[ 1007381 ], 21, 1 );
    const_str_plain_try_pyarr_from_string = UNSTREAM_STRING( &constant_bin[ 1007402 ], 21, 1 );
    const_str_plain_initf90modhooksdynamic = UNSTREAM_STRING( &constant_bin[ 1007423 ], 22, 1 );
    const_str_plain_long_double_from_pyobj = UNSTREAM_STRING( &constant_bin[ 1007445 ], 22, 1 );
    const_str_plain_pyobj_from_string1size = UNSTREAM_STRING( &constant_bin[ 1007467 ], 22, 1 );
    const_str_plain_signed_char_from_pyobj = UNSTREAM_STRING( &constant_bin[ 1007489 ], 22, 1 );
    const_tuple_str_plain_c2capi_map_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_c2capi_map_tuple, 0, const_str_plain_c2capi_map ); Py_INCREF( const_str_plain_c2capi_map );
    const_list_str_plain_PRINTPYOBJERR_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_PRINTPYOBJERR_list, 0, const_str_plain_PRINTPYOBJERR ); Py_INCREF( const_str_plain_PRINTPYOBJERR );
    const_list_str_plain_complex_float_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_complex_float_list, 0, const_str_plain_complex_float ); Py_INCREF( const_str_plain_complex_float );
    const_str_plain_pyobj_from_long_double1 = UNSTREAM_STRING( &constant_bin[ 1007511 ], 23, 1 );
    const_list_str_plain_complex_double_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_complex_double_list, 0, const_str_plain_complex_double ); Py_INCREF( const_str_plain_complex_double );
    const_list_str_plain_int_from_pyobj_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_int_from_pyobj_list, 0, const_str_plain_int_from_pyobj ); Py_INCREF( const_str_plain_int_from_pyobj );
    const_str_plain_complex_float_from_pyobj = UNSTREAM_STRING( &constant_bin[ 1007534 ], 24, 1 );
    const_str_plain_try_pyarr_from_long_long = UNSTREAM_STRING( &constant_bin[ 1007558 ], 24, 1 );
    const_str_plain_TRYCOMPLEXPYARRAYTEMPLATE = UNSTREAM_STRING( &constant_bin[ 1007582 ], 25, 1 );
    const_str_plain_complex_double_from_pyobj = UNSTREAM_STRING( &constant_bin[ 1007607 ], 25, 1 );
    const_str_plain_pyobj_from_complex_float1 = UNSTREAM_STRING( &constant_bin[ 1007632 ], 25, 1 );
    const_str_plain_pyobj_from_complex_double1 = UNSTREAM_STRING( &constant_bin[ 1007657 ], 26, 1 );
    const_str_plain_try_pyarr_from_signed_char = UNSTREAM_STRING( &constant_bin[ 1007683 ], 26, 1 );
    const_dict_53d1c8857e48a95a7774520cf53a93c4 = _PyDict_NewPresized( 3 );
    const_str_digest_afad6edbaecb2a3ef6eddf883a23eece = UNSTREAM_STRING( &constant_bin[ 1007709 ], 25, 0 );
    PyDict_SetItem( const_dict_53d1c8857e48a95a7774520cf53a93c4, const_str_plain_initf90modhooksstatic, const_str_digest_afad6edbaecb2a3ef6eddf883a23eece );
    const_str_digest_e127f76d163f41db0658a2cf185dc143 = UNSTREAM_STRING( &constant_bin[ 1007734 ], 26, 0 );
    PyDict_SetItem( const_dict_53d1c8857e48a95a7774520cf53a93c4, const_str_plain_initf90modhooksdynamic, const_str_digest_e127f76d163f41db0658a2cf185dc143 );
    const_str_digest_866dc0a2de1ae9670ebb64de6d48a4fc = UNSTREAM_STRING( &constant_bin[ 1007760 ], 20, 0 );
    PyDict_SetItem( const_dict_53d1c8857e48a95a7774520cf53a93c4, const_str_plain_f90modhooks, const_str_digest_866dc0a2de1ae9670ebb64de6d48a4fc );
    const_dict_57ba82f0b6ddacf861f6606a449c7913 = _PyDict_NewPresized( 1 );
    const_str_digest_09357d7da47cc657aa3e097cbfcf69c1 = UNSTREAM_STRING( &constant_bin[ 1007780 ], 18, 0 );
    PyDict_SetItem( const_dict_57ba82f0b6ddacf861f6606a449c7913, const_str_plain_cppmacros, const_str_digest_09357d7da47cc657aa3e097cbfcf69c1 );
    const_dict_788e82655419d5f1a9ac9e67520346b0 = _PyDict_NewPresized( 2 );
    const_str_digest_974ecd9fd49d6e81ef4b0bf0455f10e2 = UNSTREAM_STRING( &constant_bin[ 1007798 ], 24, 0 );
    PyDict_SetItem( const_dict_788e82655419d5f1a9ac9e67520346b0, const_str_plain_initcommonhooks, const_str_digest_974ecd9fd49d6e81ef4b0bf0455f10e2 );
    const_str_digest_0fb16b5b25ebfcc4c96296b6924f74c1 = UNSTREAM_STRING( &constant_bin[ 1007822 ], 20, 0 );
    PyDict_SetItem( const_dict_788e82655419d5f1a9ac9e67520346b0, const_str_plain_commonhooks, const_str_digest_0fb16b5b25ebfcc4c96296b6924f74c1 );
    const_dict_844a19a84e79d1182d43c32d69901a3c = _PyDict_NewPresized( 10 );
    PyDict_SetItem( const_dict_844a19a84e79d1182d43c32d69901a3c, const_str_plain_cfuncs, const_list_empty );
    PyDict_SetItem( const_dict_844a19a84e79d1182d43c32d69901a3c, const_str_plain_typedefs_generated, const_list_empty );
    PyDict_SetItem( const_dict_844a19a84e79d1182d43c32d69901a3c, const_str_plain_includes0, const_list_empty );
    PyDict_SetItem( const_dict_844a19a84e79d1182d43c32d69901a3c, const_str_plain_cppmacros, const_list_empty );
    PyDict_SetItem( const_dict_844a19a84e79d1182d43c32d69901a3c, const_str_plain_userincludes, const_list_empty );
    PyDict_SetItem( const_dict_844a19a84e79d1182d43c32d69901a3c, const_str_plain_includes, const_list_empty );
    PyDict_SetItem( const_dict_844a19a84e79d1182d43c32d69901a3c, const_str_plain_callbacks, const_list_empty );
    PyDict_SetItem( const_dict_844a19a84e79d1182d43c32d69901a3c, const_str_plain_typedefs, const_list_empty );
    PyDict_SetItem( const_dict_844a19a84e79d1182d43c32d69901a3c, const_str_plain_commonhooks, const_list_empty );
    PyDict_SetItem( const_dict_844a19a84e79d1182d43c32d69901a3c, const_str_plain_f90modhooks, const_list_empty );
    const_dict_a1e6d4a6d196b71de70ef245a55c711a = _PyDict_NewPresized( 1 );
    const_str_digest_26dc67f2c4fb0017b41e27e97aa3c235 = UNSTREAM_STRING( &constant_bin[ 1007842 ], 17, 0 );
    PyDict_SetItem( const_dict_a1e6d4a6d196b71de70ef245a55c711a, const_str_plain_typedefs, const_str_digest_26dc67f2c4fb0017b41e27e97aa3c235 );
    const_dict_ad0cc476bc3e3e1ab256e4edf7e6d930 = _PyDict_NewPresized( 1 );
    const_str_digest_21cfe7952be0c0e4a3fe5ff6af3f97e0 = UNSTREAM_STRING( &constant_bin[ 1007859 ], 21, 0 );
    PyDict_SetItem( const_dict_ad0cc476bc3e3e1ab256e4edf7e6d930, const_str_plain_userincludes, const_str_digest_21cfe7952be0c0e4a3fe5ff6af3f97e0 );
    const_dict_c8a8e96575af0b76af8479ec1389c9e3 = _PyDict_NewPresized( 1 );
    const_str_digest_18eda5ea4c07a294c3dfc640239b92b8 = UNSTREAM_STRING( &constant_bin[ 1007880 ], 15, 0 );
    PyDict_SetItem( const_dict_c8a8e96575af0b76af8479ec1389c9e3, const_str_plain_cfuncs, const_str_digest_18eda5ea4c07a294c3dfc640239b92b8 );
    const_dict_cc6f9c9534893ecefac794ef61729c8b = _PyDict_NewPresized( 1 );
    const_str_digest_4a7dc7d1a9bea468e0e49561a7b0b5fe = UNSTREAM_STRING( &constant_bin[ 1007895 ], 18, 0 );
    PyDict_SetItem( const_dict_cc6f9c9534893ecefac794ef61729c8b, const_str_plain_callbacks, const_str_digest_4a7dc7d1a9bea468e0e49561a7b0b5fe );
    const_dict_dedaec7b17af2aa6922b9e268eb8e62b = _PyDict_NewPresized( 1 );
    const_str_digest_ff15dfdf55916a14a1e4828561bb5386 = UNSTREAM_STRING( &constant_bin[ 1007913 ], 18, 0 );
    PyDict_SetItem( const_dict_dedaec7b17af2aa6922b9e268eb8e62b, const_str_plain_includes0, const_str_digest_ff15dfdf55916a14a1e4828561bb5386 );
    const_dict_e3b7e8e148208997eeb8e041e1f9934d = _PyDict_NewPresized( 1 );
    const_str_digest_e120aec164448ec01b2c256e82cdd1c9 = UNSTREAM_STRING( &constant_bin[ 1007931 ], 27, 0 );
    PyDict_SetItem( const_dict_e3b7e8e148208997eeb8e041e1f9934d, const_str_plain_typedefs_generated, const_str_digest_e120aec164448ec01b2c256e82cdd1c9 );
    const_dict_ef8761b9cba820f57cd5a2786a9f7930 = _PyDict_NewPresized( 1 );
    const_str_digest_c6054829fd80e050f8e217e2891c6a1a = UNSTREAM_STRING( &constant_bin[ 1007958 ], 17, 0 );
    PyDict_SetItem( const_dict_ef8761b9cba820f57cd5a2786a9f7930, const_str_plain_includes, const_str_digest_c6054829fd80e050f8e217e2891c6a1a );
    const_list_str_plain_double_from_pyobj_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_double_from_pyobj_list, 0, const_str_plain_double_from_pyobj ); Py_INCREF( const_str_plain_double_from_pyobj );
    const_str_plain_try_pyarr_from_complex_float = UNSTREAM_STRING( &constant_bin[ 1007975 ], 28, 1 );
    const_str_plain_try_pyarr_from_unsigned_char = UNSTREAM_STRING( &constant_bin[ 1008003 ], 28, 1 );
    const_list_str_plain_complex_long_double_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_complex_long_double_list, 0, const_str_plain_complex_long_double ); Py_INCREF( const_str_plain_complex_long_double );
    const_str_plain_try_pyarr_from_complex_double = UNSTREAM_STRING( &constant_bin[ 1008031 ], 29, 1 );
    const_str_plain_complex_long_double_from_pyobj = UNSTREAM_STRING( &constant_bin[ 1008060 ], 30, 1 );
    const_str_plain_pyobj_from_complex_long_double1 = UNSTREAM_STRING( &constant_bin[ 1008090 ], 31, 1 );
    const_tuple_str_plain_need_str_plain_flag_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_need_str_plain_flag_tuple, 0, const_str_plain_need ); Py_INCREF( const_str_plain_need );
    PyTuple_SET_ITEM( const_tuple_str_plain_need_str_plain_flag_tuple, 1, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    const_list_0a4c09bf7ee8113173dbb8914c21d9bf_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_0a4c09bf7ee8113173dbb8914c21d9bf_list, 0, const_str_digest_2782d06f338ee345290cef192d05e062 ); Py_INCREF( const_str_digest_2782d06f338ee345290cef192d05e062 );
    PyList_SET_ITEM( const_list_0a4c09bf7ee8113173dbb8914c21d9bf_list, 1, const_str_plain_FAILNULL ); Py_INCREF( const_str_plain_FAILNULL );
    const_list_54890ded9c275bbdc4b740fb0c5a02c8_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_54890ded9c275bbdc4b740fb0c5a02c8_list, 0, const_str_plain_pyobj_from_complex_float1 ); Py_INCREF( const_str_plain_pyobj_from_complex_float1 );
    PyList_SET_ITEM( const_list_54890ded9c275bbdc4b740fb0c5a02c8_list, 1, const_str_plain_TRYCOMPLEXPYARRAYTEMPLATE ); Py_INCREF( const_str_plain_TRYCOMPLEXPYARRAYTEMPLATE );
    PyList_SET_ITEM( const_list_54890ded9c275bbdc4b740fb0c5a02c8_list, 2, const_str_plain_complex_float ); Py_INCREF( const_str_plain_complex_float );
    const_list_55167523f6d3e56dad43daa87c13f5b4_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_55167523f6d3e56dad43daa87c13f5b4_list, 0, const_str_plain_pyobj_from_long_long1 ); Py_INCREF( const_str_plain_pyobj_from_long_long1 );
    PyList_SET_ITEM( const_list_55167523f6d3e56dad43daa87c13f5b4_list, 1, const_str_plain_TRYPYARRAYTEMPLATE ); Py_INCREF( const_str_plain_TRYPYARRAYTEMPLATE );
    PyList_SET_ITEM( const_list_55167523f6d3e56dad43daa87c13f5b4_list, 2, const_str_plain_long_long ); Py_INCREF( const_str_plain_long_long );
    const_list_56aca13099c085ba8f85f1374ee25ce7_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_56aca13099c085ba8f85f1374ee25ce7_list, 0, const_str_plain_complex_long_double ); Py_INCREF( const_str_plain_complex_long_double );
    PyList_SET_ITEM( const_list_56aca13099c085ba8f85f1374ee25ce7_list, 1, const_str_plain_long_double ); Py_INCREF( const_str_plain_long_double );
    PyList_SET_ITEM( const_list_56aca13099c085ba8f85f1374ee25ce7_list, 2, const_str_plain_complex_double_from_pyobj ); Py_INCREF( const_str_plain_complex_double_from_pyobj );
    const_list_664391f1bb0e8dbdf55326ab3be48ab9_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_664391f1bb0e8dbdf55326ab3be48ab9_list, 0, const_str_plain_STRINGCOPYN ); Py_INCREF( const_str_plain_STRINGCOPYN );
    PyList_SET_ITEM( const_list_664391f1bb0e8dbdf55326ab3be48ab9_list, 1, const_str_plain_PRINTPYOBJERR ); Py_INCREF( const_str_plain_PRINTPYOBJERR );
    PyList_SET_ITEM( const_list_664391f1bb0e8dbdf55326ab3be48ab9_list, 2, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    const_list_78fac9844f706e31eebc87a96b711791_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_78fac9844f706e31eebc87a96b711791_list, 0, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    PyList_SET_ITEM( const_list_78fac9844f706e31eebc87a96b711791_list, 1, const_str_plain_STRINGMALLOC ); Py_INCREF( const_str_plain_STRINGMALLOC );
    PyList_SET_ITEM( const_list_78fac9844f706e31eebc87a96b711791_list, 2, const_str_plain_STRINGCOPYN ); Py_INCREF( const_str_plain_STRINGCOPYN );
    const_list_aa65bd07eac04087b2c26adc1bc7819c_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_aa65bd07eac04087b2c26adc1bc7819c_list, 0, const_str_plain_CFUNCSMESS ); Py_INCREF( const_str_plain_CFUNCSMESS );
    PyList_SET_ITEM( const_list_aa65bd07eac04087b2c26adc1bc7819c_list, 1, const_str_plain_PRINTPYOBJERR ); Py_INCREF( const_str_plain_PRINTPYOBJERR );
    PyList_SET_ITEM( const_list_aa65bd07eac04087b2c26adc1bc7819c_list, 2, const_str_plain_MINMAX ); Py_INCREF( const_str_plain_MINMAX );
    const_list_e182b2a897bd6090b70e2001220ac7c4_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_e182b2a897bd6090b70e2001220ac7c4_list, 0, const_str_plain_pyobj_from_complex_double1 ); Py_INCREF( const_str_plain_pyobj_from_complex_double1 );
    PyList_SET_ITEM( const_list_e182b2a897bd6090b70e2001220ac7c4_list, 1, const_str_plain_TRYCOMPLEXPYARRAYTEMPLATE ); Py_INCREF( const_str_plain_TRYCOMPLEXPYARRAYTEMPLATE );
    PyList_SET_ITEM( const_list_e182b2a897bd6090b70e2001220ac7c4_list, 2, const_str_plain_complex_double ); Py_INCREF( const_str_plain_complex_double );
    const_str_digest_01fb484d7be945b15a4a4723d827c333 = UNSTREAM_STRING( &constant_bin[ 1008121 ], 36, 0 );
    const_str_digest_02e4637ff093e54b7313e28f9e0bae78 = UNSTREAM_STRING( &constant_bin[ 1008157 ], 102, 0 );
    const_str_digest_047b582fe49061e77b60d07ec23fc723 = UNSTREAM_STRING( &constant_bin[ 1008259 ], 86, 0 );
    const_str_digest_05c18e6db4f33637f2f8e357d7f29e61 = UNSTREAM_STRING( &constant_bin[ 1008345 ], 143, 0 );
    const_str_digest_0697b205fd19a3ba344d22b1d1209f14 = UNSTREAM_STRING( &constant_bin[ 1008488 ], 82, 0 );
    const_str_digest_097d0d5326ef098f1f6c2fd9bd711de5 = UNSTREAM_STRING( &constant_bin[ 1008570 ], 1108, 0 );
    const_str_digest_0a3cd72f21792255256e8cc572d73a1e = UNSTREAM_STRING( &constant_bin[ 1009678 ], 254, 0 );
    const_str_digest_0e7569460ed669b2903ce0b0da99d670 = UNSTREAM_STRING( &constant_bin[ 1009932 ], 816, 0 );
    const_str_digest_105105b69a73a06bfaf38138dd39b197 = UNSTREAM_STRING( &constant_bin[ 1010748 ], 38, 0 );
    const_str_digest_1583a6d78160909d2c18d45bf29ffa5f = UNSTREAM_STRING( &constant_bin[ 1010786 ], 62, 0 );
    const_str_digest_173093001f5d2a6f237caf3a485a6858 = UNSTREAM_STRING( &constant_bin[ 1010848 ], 186, 0 );
    const_str_digest_20788aa4abe77df756a0b9c2bf914644 = UNSTREAM_STRING( &constant_bin[ 1011034 ], 412, 0 );
    const_str_digest_26da45d08bf95d68b3ccb6b08c28930c = UNSTREAM_STRING( &constant_bin[ 1011446 ], 75, 0 );
    const_str_digest_33209d1e5c473de96f14331b495d35bd = UNSTREAM_STRING( &constant_bin[ 1011521 ], 32, 0 );
    const_str_digest_371f1704af358a0d9b8b8bba00413072 = UNSTREAM_STRING( &constant_bin[ 1011553 ], 161, 0 );
    const_str_digest_3740e02b798978c5b9f7afde4debf573 = UNSTREAM_STRING( &constant_bin[ 1011714 ], 2267, 0 );
    const_str_digest_389a86e4dd8f25a614d61c156060fb3d = UNSTREAM_STRING( &constant_bin[ 1013981 ], 42, 0 );
    const_str_digest_3a23a27d0e08b643649553907708c011 = UNSTREAM_STRING( &constant_bin[ 1014023 ], 47, 0 );
    const_str_digest_3dd3068f463e4a73a6f25e60fc2b142d = UNSTREAM_STRING( &constant_bin[ 1014070 ], 19, 0 );
    const_str_digest_3e8a5dd8d20d7153bc232af6c9324c58 = UNSTREAM_STRING( &constant_bin[ 1014089 ], 70, 0 );
    const_str_digest_408031f166d376d1494138d81b948520 = UNSTREAM_STRING( &constant_bin[ 1014159 ], 19, 0 );
    const_str_digest_42802a34520023df26a453e8f167f3fc = UNSTREAM_STRING( &constant_bin[ 1014178 ], 116, 0 );
    const_str_digest_437415b6722a87a93187a0d293046f21 = UNSTREAM_STRING( &constant_bin[ 1014294 ], 212, 0 );
    const_str_digest_43d9cc2265fd996729bf1e6d91e79315 = UNSTREAM_STRING( &constant_bin[ 1014506 ], 1875, 0 );
    const_str_digest_44016f51283a958497b9fe35a8ca01b1 = UNSTREAM_STRING( &constant_bin[ 1016381 ], 118, 0 );
    const_str_digest_497a0b39e47e0ff41272fd17cdca9806 = UNSTREAM_STRING( &constant_bin[ 1016499 ], 779, 0 );
    const_str_digest_4a982b2ba0ebcbde1146b96b6ca60a9c = UNSTREAM_STRING( &constant_bin[ 1017278 ], 36, 0 );
    const_str_digest_51c5006076994acf62a7003bd16396d9 = UNSTREAM_STRING( &constant_bin[ 1017314 ], 714, 0 );
    const_str_digest_5316b30a30d3d98a2c8f76f7384edfff = UNSTREAM_STRING( &constant_bin[ 1018028 ], 364, 0 );
    const_str_digest_533fc6dc69244a4be2acda88157e5dab = UNSTREAM_STRING( &constant_bin[ 1018392 ], 104, 0 );
    const_str_digest_59e1425961acc3db662b5276975ba5c3 = UNSTREAM_STRING( &constant_bin[ 1018496 ], 46, 0 );
    const_str_digest_5b9840bfac2805c944b31db7014f418a = UNSTREAM_STRING( &constant_bin[ 1018542 ], 165, 0 );
    const_str_digest_5cc47f09a6119059a4deb1b21f5ead45 = UNSTREAM_STRING( &constant_bin[ 1018707 ], 92, 0 );
    const_str_digest_5d11cf2593e7151b8b357f4f3e67c2a7 = UNSTREAM_STRING( &constant_bin[ 1018799 ], 52, 0 );
    const_str_digest_5e386bc666bd91c6bf9fc510e8e839bb = UNSTREAM_STRING( &constant_bin[ 1018851 ], 19, 0 );
    const_str_digest_5fb4c06ca1caf68a0eed6655ccd5ceb2 = UNSTREAM_STRING( &constant_bin[ 1018870 ], 81, 0 );
    const_str_digest_610e229f0b92cd0cdbca1ded1ffd7e3e = UNSTREAM_STRING( &constant_bin[ 1018951 ], 30, 0 );
    const_str_digest_63b725b1590378a5145bd999c67c8319 = UNSTREAM_STRING( &constant_bin[ 1018981 ], 22, 0 );
    const_str_digest_63d4ee2039ee50869d8ca78baafa71a0 = UNSTREAM_STRING( &constant_bin[ 1019003 ], 204, 0 );
    const_str_digest_6ce6a5a60e659edf81e1f085f58f3663 = UNSTREAM_STRING( &constant_bin[ 1019207 ], 89, 0 );
    const_str_digest_6db35613500c1a870117eb76e033ee86 = UNSTREAM_STRING( &constant_bin[ 1019296 ], 110, 0 );
    const_str_digest_6f8c6ff96569a96f90c0868ccec5e004 = UNSTREAM_STRING( &constant_bin[ 1019406 ], 61, 0 );
    const_str_digest_73e1e214d989fa7c6be358b1d7373093 = UNSTREAM_STRING( &constant_bin[ 1019467 ], 48, 0 );
    const_str_digest_7405eae7c50c570661f79246f76abb4a = UNSTREAM_STRING( &constant_bin[ 1019515 ], 242, 0 );
    const_str_digest_78b6090cc491d48eb9e6e9ed6da5d7c7 = UNSTREAM_STRING( &constant_bin[ 1019757 ], 1563, 0 );
    const_str_digest_791b1e651ce88fb45aabd06f6facbbf8 = UNSTREAM_STRING( &constant_bin[ 1021320 ], 73, 0 );
    const_str_digest_79304a53d92b30c74f5d06905f59ad45 = UNSTREAM_STRING( &constant_bin[ 1021393 ], 70, 0 );
    const_str_digest_79e58cdd6dcc0c4c234fe426749ea8d1 = UNSTREAM_STRING( &constant_bin[ 1021463 ], 187, 0 );
    const_str_digest_7d2bab39577ddf526d1b6996c67632bb = UNSTREAM_STRING( &constant_bin[ 1014169 ], 8, 0 );
    const_str_digest_7d440d2636f994574162135084027a0d = UNSTREAM_STRING( &constant_bin[ 1021650 ], 150, 0 );
    const_str_digest_822ef11ec1e826341ff158bd63191686 = UNSTREAM_STRING( &constant_bin[ 1021800 ], 62, 0 );
    const_str_digest_841f8144160e16b7c03da563289c2bd2 = UNSTREAM_STRING( &constant_bin[ 1014080 ], 8, 0 );
    const_str_digest_85a3eb17c9e17ed7e31cbefb122f9f34 = UNSTREAM_STRING( &constant_bin[ 1021862 ], 67, 0 );
    const_str_digest_8c7cecd620dcdc6d1eeb04a22b1591e7 = UNSTREAM_STRING( &constant_bin[ 1021929 ], 103, 0 );
    const_str_digest_90e5a4bf1414cb157f8e196235139fad = UNSTREAM_STRING( &constant_bin[ 1022032 ], 176, 0 );
    const_str_digest_910789c03671f971f7793e4d386e63ff = UNSTREAM_STRING( &constant_bin[ 1022208 ], 62, 0 );
    const_str_digest_962cf63a739d975c45c04813de22ab97 = UNSTREAM_STRING( &constant_bin[ 1022270 ], 44, 0 );
    const_str_digest_999ab6410e5a94eb500c138eaa52e416 = UNSTREAM_STRING( &constant_bin[ 1022314 ], 58, 0 );
    const_str_digest_9c2dfc7feb00efe56dcb6f59d36af122 = UNSTREAM_STRING( &constant_bin[ 1022372 ], 50, 0 );
    const_str_digest_9cc60f70f7890b3ee11152a8d168e91a = UNSTREAM_STRING( &constant_bin[ 1022422 ], 92, 0 );
    const_str_digest_9ce2e4a686916bec0097fa5b8d4f314b = UNSTREAM_STRING( &constant_bin[ 1022514 ], 158, 0 );
    const_str_digest_9d1c66eea591d9926996bdd4cfe52c06 = UNSTREAM_STRING( &constant_bin[ 1022672 ], 19, 0 );
    const_str_digest_9eaf72a6358f3976ba36284be8dc1083 = UNSTREAM_STRING( &constant_bin[ 1022691 ], 160, 0 );
    const_str_digest_a98a2a02ed2c372a11a799cca65f34b1 = UNSTREAM_STRING( &constant_bin[ 1022851 ], 89, 0 );
    const_str_digest_abd52d758e14f00949f899a22094fbdd = UNSTREAM_STRING( &constant_bin[ 1022940 ], 3444, 0 );
    const_str_digest_ad5bf3ddcd64b245586cbb783ae0b5f9 = UNSTREAM_STRING( &constant_bin[ 1026384 ], 16, 0 );
    const_str_digest_adcd7034250adb10f428e296b32ea74d = UNSTREAM_STRING( &constant_bin[ 1026400 ], 48, 0 );
    const_str_digest_b22d6b4bca9ee819d9d549fda1b30ea0 = UNSTREAM_STRING( &constant_bin[ 1026448 ], 247, 0 );
    const_str_digest_b352efd96c887b65d4365dc8e866a3ca = UNSTREAM_STRING( &constant_bin[ 1026695 ], 222, 0 );
    const_str_digest_b60fe1a5484cbe81401785b1ecb3e13b = UNSTREAM_STRING( &constant_bin[ 1026917 ], 2063, 0 );
    const_str_digest_b84b54236f330e123c83bba162e8bedd = UNSTREAM_STRING( &constant_bin[ 1028980 ], 842, 0 );
    const_str_digest_b9ffbec4f0c711b079ed72967cc946a7 = UNSTREAM_STRING( &constant_bin[ 1029822 ], 587, 0 );
    const_str_digest_bf45789f1ab41c4a6890de1e3c1beef5 = UNSTREAM_STRING( &constant_bin[ 1030409 ], 130, 0 );
    const_str_digest_c19bdd2a30e7b66fd0173af911d79923 = UNSTREAM_STRING( &constant_bin[ 1030539 ], 344, 0 );
    const_str_digest_c22461622fee22c75dbb860cd5ace6d2 = UNSTREAM_STRING( &constant_bin[ 1030883 ], 712, 0 );
    const_str_digest_c2d6421daf01ea6ae50d672016abe9f2 = UNSTREAM_STRING( &constant_bin[ 1031595 ], 26, 0 );
    const_str_digest_c342bcf69b35d1479323b86b8eefb1a4 = UNSTREAM_STRING( &constant_bin[ 1031621 ], 17, 0 );
    const_str_digest_c726556b2592895f5e93aedb7815794b = UNSTREAM_STRING( &constant_bin[ 1031638 ], 806, 0 );
    const_str_digest_c8434c627f5decd5199bc415a9866adb = UNSTREAM_STRING( &constant_bin[ 1032444 ], 509, 0 );
    const_str_digest_ca5812a794c90143c26d1885325762a4 = UNSTREAM_STRING( &constant_bin[ 1032953 ], 456, 0 );
    const_str_digest_cf8a57713bc16778077ba316e18a487e = UNSTREAM_STRING( &constant_bin[ 1033409 ], 54, 0 );
    const_str_digest_d5886e2ecd61457f24163eaa5d3b9a82 = UNSTREAM_STRING( &constant_bin[ 1033463 ], 425, 0 );
    const_str_digest_d8734fdf95614f71b17eec9b69cfeda1 = UNSTREAM_STRING( &constant_bin[ 1033888 ], 17, 0 );
    const_str_digest_dad78054c8b0af812591e9348ae8be45 = UNSTREAM_STRING( &constant_bin[ 1033905 ], 58, 0 );
    const_str_digest_dae496aa2ee10a0a11d812895fb39bab = UNSTREAM_STRING( &constant_bin[ 1033963 ], 53, 0 );
    const_str_digest_e80583584f6f731716aadcb43efaf5b2 = UNSTREAM_STRING( &constant_bin[ 1034016 ], 232, 0 );
    const_str_digest_e9c79288e2bfdc2ac86fa402fb80fedd = UNSTREAM_STRING( &constant_bin[ 1034248 ], 115, 0 );
    const_str_digest_ee1d82d6478b02d751dde9b11b43791d = UNSTREAM_STRING( &constant_bin[ 1034363 ], 276, 0 );
    const_str_digest_f003b28ea57a5eba82b149c7847b1c4f = UNSTREAM_STRING( &constant_bin[ 1034639 ], 217, 0 );
    const_str_digest_f09797a78f374acb32df435a705e717e = UNSTREAM_STRING( &constant_bin[ 1034856 ], 69, 0 );
    const_str_digest_f0a2fcd603834fad2b84e734164ea722 = UNSTREAM_STRING( &constant_bin[ 1034925 ], 851, 0 );
    const_str_digest_f57b9e3f10fb25f49a591c29127b6135 = UNSTREAM_STRING( &constant_bin[ 1035776 ], 623, 0 );
    const_str_digest_f589bf744fd35201955f6365656908e4 = UNSTREAM_STRING( &constant_bin[ 1036399 ], 95, 0 );
    const_str_digest_f69957725a097974a85c057a0ef00c8c = UNSTREAM_STRING( &constant_bin[ 1036494 ], 53, 0 );
    const_str_digest_fb63144b48d581c350f194b5453ab98c = UNSTREAM_STRING( &constant_bin[ 1036547 ], 104, 0 );
    const_str_digest_fde589cd4015f9322a88ed1d8c64ea8c = UNSTREAM_STRING( &constant_bin[ 1036651 ], 168, 0 );
    const_str_digest_ff6713004d85b1c2c1b200852aaf0b48 = UNSTREAM_STRING( &constant_bin[ 1036819 ], 603, 0 );
    const_tuple_373e7ade86bd34e2346976ef07fdaa8d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_373e7ade86bd34e2346976ef07fdaa8d_tuple, 0, const_str_plain_need ); Py_INCREF( const_str_plain_need );
    PyTuple_SET_ITEM( const_tuple_373e7ade86bd34e2346976ef07fdaa8d_tuple, 1, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    PyTuple_SET_ITEM( const_tuple_373e7ade86bd34e2346976ef07fdaa8d_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_373e7ade86bd34e2346976ef07fdaa8d_tuple, 3, const_str_plain_tmp ); Py_INCREF( const_str_plain_tmp );
    PyTuple_SET_ITEM( const_tuple_373e7ade86bd34e2346976ef07fdaa8d_tuple, 4, const_str_plain_nn ); Py_INCREF( const_str_plain_nn );
    PyTuple_SET_ITEM( const_tuple_373e7ade86bd34e2346976ef07fdaa8d_tuple, 5, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_373e7ade86bd34e2346976ef07fdaa8d_tuple, 6, const_str_plain_nnn ); Py_INCREF( const_str_plain_nnn );
    const_tuple_a8a6153d688672bd680ded7f1e3fd029_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a8a6153d688672bd680ded7f1e3fd029_tuple, 0, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_a8a6153d688672bd680ded7f1e3fd029_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_a8a6153d688672bd680ded7f1e3fd029_tuple, 2, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_a8a6153d688672bd680ded7f1e3fd029_tuple, 3, const_str_plain_saveout ); Py_INCREF( const_str_plain_saveout );
    PyTuple_SET_ITEM( const_tuple_a8a6153d688672bd680ded7f1e3fd029_tuple, 4, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    PyTuple_SET_ITEM( const_tuple_a8a6153d688672bd680ded7f1e3fd029_tuple, 5, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_list_str_digest_7d2bab39577ddf526d1b6996c67632bb_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_7d2bab39577ddf526d1b6996c67632bb_list, 0, const_str_digest_7d2bab39577ddf526d1b6996c67632bb ); Py_INCREF( const_str_digest_7d2bab39577ddf526d1b6996c67632bb );
    const_list_str_digest_841f8144160e16b7c03da563289c2bd2_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_841f8144160e16b7c03da563289c2bd2_list, 0, const_str_digest_841f8144160e16b7c03da563289c2bd2 ); Py_INCREF( const_str_digest_841f8144160e16b7c03da563289c2bd2 );
    const_list_str_plain_STRINGCOPYN_str_plain_PRINTPYOBJERR_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_STRINGCOPYN_str_plain_PRINTPYOBJERR_list, 0, const_str_plain_STRINGCOPYN ); Py_INCREF( const_str_plain_STRINGCOPYN );
    PyList_SET_ITEM( const_list_str_plain_STRINGCOPYN_str_plain_PRINTPYOBJERR_list, 1, const_str_plain_PRINTPYOBJERR ); Py_INCREF( const_str_plain_PRINTPYOBJERR );
    const_list_str_plain_int_from_pyobj_str_plain_signed_char_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_int_from_pyobj_str_plain_signed_char_list, 0, const_str_plain_int_from_pyobj ); Py_INCREF( const_str_plain_int_from_pyobj );
    PyList_SET_ITEM( const_list_str_plain_int_from_pyobj_str_plain_signed_char_list, 1, const_str_plain_signed_char ); Py_INCREF( const_str_plain_signed_char );
    const_tuple_str_plain_c2capi_map_str_plain_k_str_plain_m_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_c2capi_map_str_plain_k_str_plain_m_tuple, 0, const_str_plain_c2capi_map ); Py_INCREF( const_str_plain_c2capi_map );
    PyTuple_SET_ITEM( const_tuple_str_plain_c2capi_map_str_plain_k_str_plain_m_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_str_plain_c2capi_map_str_plain_k_str_plain_m_tuple, 2, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_list_str_plain_double_from_pyobj_str_plain_long_double_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_double_from_pyobj_str_plain_long_double_list, 0, const_str_plain_double_from_pyobj ); Py_INCREF( const_str_plain_double_from_pyobj );
    PyList_SET_ITEM( const_list_str_plain_double_from_pyobj_str_plain_long_double_list, 1, const_str_plain_long_double ); Py_INCREF( const_str_plain_long_double );
    const_list_str_plain_TRYPYARRAYTEMPLATE_str_plain_signed_char_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_TRYPYARRAYTEMPLATE_str_plain_signed_char_list, 0, const_str_plain_TRYPYARRAYTEMPLATE ); Py_INCREF( const_str_plain_TRYPYARRAYTEMPLATE );
    PyList_SET_ITEM( const_list_str_plain_TRYPYARRAYTEMPLATE_str_plain_signed_char_list, 1, const_str_plain_signed_char ); Py_INCREF( const_str_plain_signed_char );
    const_list_str_plain_TRYPYARRAYTEMPLATE_str_plain_unsigned_char_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_TRYPYARRAYTEMPLATE_str_plain_unsigned_char_list, 0, const_str_plain_TRYPYARRAYTEMPLATE ); Py_INCREF( const_str_plain_TRYPYARRAYTEMPLATE );
    PyList_SET_ITEM( const_list_str_plain_TRYPYARRAYTEMPLATE_str_plain_unsigned_char_list, 1, const_str_plain_unsigned_char ); Py_INCREF( const_str_plain_unsigned_char );
    const_list_str_plain_pyobj_from_int1_str_plain_TRYPYARRAYTEMPLATE_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_pyobj_from_int1_str_plain_TRYPYARRAYTEMPLATE_list, 0, const_str_plain_pyobj_from_int1 ); Py_INCREF( const_str_plain_pyobj_from_int1 );
    PyList_SET_ITEM( const_list_str_plain_pyobj_from_int1_str_plain_TRYPYARRAYTEMPLATE_list, 1, const_str_plain_TRYPYARRAYTEMPLATE ); Py_INCREF( const_str_plain_TRYPYARRAYTEMPLATE );
    const_list_str_plain_pyobj_from_char1_str_plain_TRYPYARRAYTEMPLATE_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_pyobj_from_char1_str_plain_TRYPYARRAYTEMPLATE_list, 0, const_str_plain_pyobj_from_char1 ); Py_INCREF( const_str_plain_pyobj_from_char1 );
    PyList_SET_ITEM( const_list_str_plain_pyobj_from_char1_str_plain_TRYPYARRAYTEMPLATE_list, 1, const_str_plain_TRYPYARRAYTEMPLATE ); Py_INCREF( const_str_plain_TRYPYARRAYTEMPLATE );
    const_list_str_plain_pyobj_from_long1_str_plain_TRYPYARRAYTEMPLATE_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_pyobj_from_long1_str_plain_TRYPYARRAYTEMPLATE_list, 0, const_str_plain_pyobj_from_long1 ); Py_INCREF( const_str_plain_pyobj_from_long1 );
    PyList_SET_ITEM( const_list_str_plain_pyobj_from_long1_str_plain_TRYPYARRAYTEMPLATE_list, 1, const_str_plain_TRYPYARRAYTEMPLATE ); Py_INCREF( const_str_plain_TRYPYARRAYTEMPLATE );
    const_list_str_plain_pyobj_from_float1_str_plain_TRYPYARRAYTEMPLATE_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_pyobj_from_float1_str_plain_TRYPYARRAYTEMPLATE_list, 0, const_str_plain_pyobj_from_float1 ); Py_INCREF( const_str_plain_pyobj_from_float1 );
    PyList_SET_ITEM( const_list_str_plain_pyobj_from_float1_str_plain_TRYPYARRAYTEMPLATE_list, 1, const_str_plain_TRYPYARRAYTEMPLATE ); Py_INCREF( const_str_plain_TRYPYARRAYTEMPLATE );
    const_list_str_plain_pyobj_from_short1_str_plain_TRYPYARRAYTEMPLATE_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_pyobj_from_short1_str_plain_TRYPYARRAYTEMPLATE_list, 0, const_str_plain_pyobj_from_short1 ); Py_INCREF( const_str_plain_pyobj_from_short1 );
    PyList_SET_ITEM( const_list_str_plain_pyobj_from_short1_str_plain_TRYPYARRAYTEMPLATE_list, 1, const_str_plain_TRYPYARRAYTEMPLATE ); Py_INCREF( const_str_plain_TRYPYARRAYTEMPLATE );
    const_list_str_plain_pyobj_from_double1_str_plain_TRYPYARRAYTEMPLATE_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_pyobj_from_double1_str_plain_TRYPYARRAYTEMPLATE_list, 0, const_str_plain_pyobj_from_double1 ); Py_INCREF( const_str_plain_pyobj_from_double1 );
    PyList_SET_ITEM( const_list_str_plain_pyobj_from_double1_str_plain_TRYPYARRAYTEMPLATE_list, 1, const_str_plain_TRYPYARRAYTEMPLATE ); Py_INCREF( const_str_plain_TRYPYARRAYTEMPLATE );
    const_list_str_plain_complex_float_str_plain_complex_double_from_pyobj_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_complex_float_str_plain_complex_double_from_pyobj_list, 0, const_str_plain_complex_float ); Py_INCREF( const_str_plain_complex_float );
    PyList_SET_ITEM( const_list_str_plain_complex_float_str_plain_complex_double_from_pyobj_list, 1, const_str_plain_complex_double_from_pyobj ); Py_INCREF( const_str_plain_complex_double_from_pyobj );
}

// The module code objects.
static PyCodeObject *codeobj_9d2008a94bca12b7285762a8a2da7fa6;
static PyCodeObject *codeobj_3e4032acf55dbc07b27fb5c1d4a6c7a7;
static PyCodeObject *codeobj_5be5c41e08a17704520e8069772645a3;
static PyCodeObject *codeobj_ae122c064f92e8dc79ab76ece072207a;
static PyCodeObject *codeobj_897a080c3cab86eecebbca4eb40dd91a;
static PyCodeObject *codeobj_738bc1a3c9bf9c9383171b7c6dc9a5ce;
static PyCodeObject *codeobj_a8304e8b50d717d3d9d6ff8a4185656e;
static PyCodeObject *codeobj_b36582d4f7fa4fb1cbf8d4ab6638eabe;

static void _initModuleCodeObjects(void)
{
    codeobj_9d2008a94bca12b7285762a8a2da7fa6 = MAKE_CODEOBJ( const_str_digest_dae496aa2ee10a0a11d812895fb39bab, const_str_angle_lambda, 1214, const_tuple_str_plain_x_str_plain_y_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3e4032acf55dbc07b27fb5c1d4a6c7a7 = MAKE_CODEOBJ( const_str_digest_dae496aa2ee10a0a11d812895fb39bab, const_str_plain_append_needs, 1130, const_tuple_str_plain_need_str_plain_flag_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5be5c41e08a17704520e8069772645a3 = MAKE_CODEOBJ( const_str_digest_dae496aa2ee10a0a11d812895fb39bab, const_str_plain_append_needs, 1130, const_tuple_373e7ade86bd34e2346976ef07fdaa8d_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ae122c064f92e8dc79ab76ece072207a = MAKE_CODEOBJ( const_str_digest_dae496aa2ee10a0a11d812895fb39bab, const_str_plain_buildcfuncs, 1118, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_897a080c3cab86eecebbca4eb40dd91a = MAKE_CODEOBJ( const_str_digest_dae496aa2ee10a0a11d812895fb39bab, const_str_plain_buildcfuncs, 1118, const_tuple_str_plain_c2capi_map_str_plain_k_str_plain_m_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_738bc1a3c9bf9c9383171b7c6dc9a5ce = MAKE_CODEOBJ( const_str_digest_dae496aa2ee10a0a11d812895fb39bab, const_str_plain_cfuncs, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a8304e8b50d717d3d9d6ff8a4185656e = MAKE_CODEOBJ( const_str_digest_dae496aa2ee10a0a11d812895fb39bab, const_str_plain_get_needs, 1193, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b36582d4f7fa4fb1cbf8d4ab6638eabe = MAKE_CODEOBJ( const_str_digest_dae496aa2ee10a0a11d812895fb39bab, const_str_plain_get_needs, 1193, const_tuple_a8a6153d688672bd680ded7f1e3fd029_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_buildcfuncs_of_module_numpy$f2py$cfuncs(  );


static PyObject *MAKE_FUNCTION_function_2_append_needs_of_module_numpy$f2py$cfuncs( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_get_needs_of_module_numpy$f2py$cfuncs(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_3_get_needs_of_module_numpy$f2py$cfuncs(  );


// The module function definitions.
static PyObject *impl_function_1_buildcfuncs_of_module_numpy$f2py$cfuncs( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_c2capi_map;
    PyObjectLocalVariable var_k;
    PyObjectLocalVariable var_m;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ae122c064f92e8dc79ab76ece072207a, module_numpy$f2py$cfuncs );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$f2py$cfuncs)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_c2capi_map.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_c2capi_map,
            var_c2capi_map.object
        );

    }
    if ((var_k.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_k,
            var_k.object
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
    frame_function->f_lineno = 1119;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_capi_maps, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_c2capi_map_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1119;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_c2capi_map );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1119;
        goto frame_exception_exit_1;
    }
    assert( var_c2capi_map.object == NULL );
    var_c2capi_map.object = tmp_assign_source_1;

    tmp_source_name_1 = var_c2capi_map.object;

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1120;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1120;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1120;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1120;
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
        frame_function->f_lineno = 1120;
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

    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_binop_left_1 = const_str_digest_ad5bf3ddcd64b245586cbb783ae0b5f9;
    tmp_binop_right_1 = var_k.object;

    tmp_assign_source_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1121;
        goto try_finally_handler_1;
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
    tmp_binop_left_2 = const_str_digest_1583a6d78160909d2c18d45bf29ffa5f;
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_m.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_1 );
    tmp_subscr_target_1 = var_c2capi_map.object;

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130189 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1122;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = var_k.object;

    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 1122;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_1 );
    tmp_ass_subvalue_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1122;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130245 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1122;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_1 = var_m.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1122;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1120;
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
    tmp_assign_source_6 = const_str_plain_string;
    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    tmp_binop_left_3 = const_str_digest_ad5bf3ddcd64b245586cbb783ae0b5f9;
    tmp_binop_right_3 = var_k.object;

    tmp_assign_source_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1124;
        goto frame_exception_exit_1;
    }
    if (var_m.object == NULL)
    {
        var_m.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = var_m.object;
        var_m.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_binop_left_4 = const_str_digest_791b1e651ce88fb45aabd06f6facbbf8;
    tmp_binop_right_4 = var_m.object;

    tmp_ass_subvalue_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1125;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_2 == NULL ))
    {
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130245 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1125;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = var_m.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1125;
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
    if ((var_c2capi_map.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c2capi_map,
            var_c2capi_map.object
        );

    }
    if ((var_k.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            var_k.object
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
static PyObject *fparse_function_1_buildcfuncs_of_module_numpy$f2py$cfuncs( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1_buildcfuncs_of_module_numpy$f2py$cfuncs( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1_buildcfuncs_of_module_numpy$f2py$cfuncs( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_1_buildcfuncs_of_module_numpy$f2py$cfuncs( self );
    }
    else
    {
        PyObject *result = fparse_function_1_buildcfuncs_of_module_numpy$f2py$cfuncs( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_append_needs_of_module_numpy$f2py$cfuncs( Nuitka_FunctionObject *self, PyObject *_python_par_need, PyObject *_python_par_flag )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_need; par_need.object = _python_par_need;
    PyObjectLocalVariable par_flag; par_flag.object = _python_par_flag;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_tmp;
    PyObjectLocalVariable var_nn;
    PyObjectLocalVariable var_t;
    PyObjectLocalVariable var_nnn;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_for_loop_4__for_iterator;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_for_loop_5__for_iterator;
    PyObjectTempVariable tmp_for_loop_5__iter_value;
    PyObjectTempVariable tmp_for_loop_6__for_iterator;
    PyObjectTempVariable tmp_for_loop_6__iter_value;
    PyObjectTempVariable tmp_for_loop_7__for_iterator;
    PyObjectTempVariable tmp_for_loop_7__iter_value;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscribed_6;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subscript_6;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
    PyObject *tmp_ass_subvalue_6;
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
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    int tmp_cmp_In_10;
    int tmp_cmp_In_11;
    int tmp_cmp_In_12;
    int tmp_cmp_In_13;
    int tmp_cmp_In_14;
    int tmp_cmp_NotIn_1;
    int tmp_cmp_NotIn_2;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
    PyObject *tmp_next_source_7;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_subscript_6;
    PyObject *tmp_subscr_subscript_7;
    PyObject *tmp_subscr_subscript_8;
    PyObject *tmp_subscr_subscript_9;
    PyObject *tmp_subscr_subscript_10;
    PyObject *tmp_subscr_subscript_11;
    PyObject *tmp_subscr_subscript_12;
    PyObject *tmp_subscr_subscript_13;
    PyObject *tmp_subscr_subscript_14;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_subscr_target_5;
    PyObject *tmp_subscr_target_6;
    PyObject *tmp_subscr_target_7;
    PyObject *tmp_subscr_target_8;
    PyObject *tmp_subscr_target_9;
    PyObject *tmp_subscr_target_10;
    PyObject *tmp_subscr_target_11;
    PyObject *tmp_subscr_target_12;
    PyObject *tmp_subscr_target_13;
    PyObject *tmp_subscr_target_14;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3e4032acf55dbc07b27fb5c1d4a6c7a7, module_numpy$f2py$cfuncs );
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
    tmp_isinstance_inst_1 = par_need.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1132;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_list );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1132;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1132;
        goto frame_exception_exit_1;
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
    tmp_iter_arg_1 = par_need.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1133;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1133;
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
        frame_function->f_lineno = 1133;
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

    if (var_n.object == NULL)
    {
        var_n.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = var_n.object;
        var_n.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_append_needs );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_append_needs );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130333 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1134;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_1 = var_n.object;

    tmp_call_arg_element_2 = par_flag.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12690 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1134;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 1134;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1134;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1133;
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
    tmp_isinstance_inst_2 = par_need.object;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1135;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_BUILTIN( const_str_plain_str );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1135;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1135;
        goto frame_exception_exit_1;
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
    tmp_cond_value_1 = par_need.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1136;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1136;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
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
    tmp_compare_left_1 = par_need.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1137;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_includes0 );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_includes0 );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130374 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1137;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1137;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_4 = const_str_plain_includes0;
    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    goto branch_end_4;
    branch_no_4:;
    tmp_compare_left_2 = par_need.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1139;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_includes );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_includes );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130412 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1139;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1139;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_2 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_5 = const_str_plain_includes;
    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    goto branch_end_5;
    branch_no_5:;
    tmp_compare_left_3 = par_need.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1141;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typedefs );
    }

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130449 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1141;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1141;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_3 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_6 = const_str_plain_typedefs;
    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    goto branch_end_6;
    branch_no_6:;
    tmp_compare_left_4 = par_need.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1143;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs_generated );

    if (unlikely( tmp_compare_right_4 == NULL ))
    {
        tmp_compare_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typedefs_generated );
    }

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130486 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1143;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1143;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_4 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_7 = const_str_plain_typedefs_generated;
    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

    goto branch_end_7;
    branch_no_7:;
    tmp_compare_left_5 = par_need.object;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1145;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_compare_right_5 == NULL ))
    {
        tmp_compare_right_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_compare_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130245 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1145;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    if ( tmp_cmp_In_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1145;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_5 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_8 = const_str_plain_cppmacros;
    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

    goto branch_end_8;
    branch_no_8:;
    tmp_compare_left_6 = par_need.object;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1147;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_compare_right_6 == NULL ))
    {
        tmp_compare_right_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127059 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1147;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_In_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1147;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_6 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assign_source_9 = const_str_plain_cfuncs;
    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    goto branch_end_9;
    branch_no_9:;
    tmp_compare_left_7 = par_need.object;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1149;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_callbacks );

    if (unlikely( tmp_compare_right_7 == NULL ))
    {
        tmp_compare_right_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_callbacks );
    }

    if ( tmp_compare_right_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130533 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1149;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1149;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_7 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_10 = const_str_plain_callbacks;
    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

    goto branch_end_10;
    branch_no_10:;
    tmp_compare_left_8 = par_need.object;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1151;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_8 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_f90modhooks );

    if (unlikely( tmp_compare_right_8 == NULL ))
    {
        tmp_compare_right_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_f90modhooks );
    }

    if ( tmp_compare_right_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130571 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1151;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    if ( tmp_cmp_In_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1151;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_8 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_11 = const_str_plain_f90modhooks;
    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

    goto branch_end_11;
    branch_no_11:;
    tmp_compare_left_9 = par_need.object;

    if ( tmp_compare_left_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1153;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_9 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_commonhooks );

    if (unlikely( tmp_compare_right_9 == NULL ))
    {
        tmp_compare_right_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_commonhooks );
    }

    if ( tmp_compare_right_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130611 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1153;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    if ( tmp_cmp_In_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1153;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_9 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_12 = const_str_plain_commonhooks;
    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

    goto branch_end_12;
    branch_no_12:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_errmess );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errmess );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125842 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1156;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = const_str_digest_610e229f0b92cd0cdbca1ded1ffd7e3e;
    tmp_unary_arg_1 = par_need.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1156;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = UNARY_OPERATION( PyObject_Repr, tmp_unary_arg_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1156;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1156;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1156;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1156;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_12:;
    branch_end_11:;
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;
    tmp_compare_left_10 = par_need.object;

    if ( tmp_compare_left_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1158;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1158;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = var_n.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1158;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_compare_right_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1158;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    if ( tmp_cmp_In_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_10 );

        frame_function->f_lineno = 1158;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_10 );
    if (tmp_cmp_In_10 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_13:;
    tmp_cond_value_2 = par_flag.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12690 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1159;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1159;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_assign_source_13 = PyDict_New();
    assert( var_tmp.object == NULL );
    var_tmp.object = tmp_assign_source_13;

    tmp_compare_left_11 = par_need.object;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1161;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_11 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_compare_right_11 == NULL ))
    {
        tmp_compare_right_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_compare_right_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130688 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1161;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_11 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    if ( tmp_cmp_In_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1161;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_11 == 1)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130688 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1162;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = par_need.object;

    if ( tmp_subscr_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1162;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1162;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1162;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_14;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

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
        frame_function->f_lineno = 1162;
            goto try_finally_handler_2;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_assign_source_16 = tmp_for_loop_2__iter_value.object;

    if (var_nn.object == NULL)
    {
        var_nn.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
    }
    else
    {
        PyObject *old = var_nn.object;
        var_nn.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
        Py_DECREF( old );
    }
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_append_needs );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_append_needs );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130333 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1163;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_4 = var_nn.object;

    tmp_call_arg_element_5 = const_int_0;
    frame_function->f_lineno = 1163;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1163;
        goto try_finally_handler_2;
    }
    if (var_t.object == NULL)
    {
        var_t.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = var_t.object;
        var_t.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    tmp_isinstance_inst_3 = var_t.object;

    tmp_isinstance_cls_3 = LOOKUP_BUILTIN( const_str_plain_dict );
    if ( tmp_isinstance_cls_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1164;
        goto try_finally_handler_2;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1164;
        goto try_finally_handler_2;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_source_name_1 = var_t.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1165;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 1165;
    tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1165;
        goto try_finally_handler_2;
    }
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1165;
        goto try_finally_handler_2;
    }
    if (tmp_for_loop_3__for_iterator.object == NULL)
    {
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__for_iterator.object;
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_19 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_19 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 1165;
            goto try_finally_handler_3;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_19;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_19;
        Py_DECREF( old );
    }
    tmp_assign_source_20 = tmp_for_loop_3__iter_value.object;

    if (var_nnn.object == NULL)
    {
        var_nnn.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
    }
    else
    {
        PyObject *old = var_nnn.object;
        var_nnn.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
        Py_DECREF( old );
    }
    tmp_compare_left_12 = var_nnn.object;

    tmp_compare_right_12 = var_tmp.object;

    if ( tmp_compare_right_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1166;
        goto try_finally_handler_3;
    }

    tmp_cmp_In_12 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    if ( tmp_cmp_In_12 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1166;
        goto try_finally_handler_3;
    }
    if (tmp_cmp_In_12 == 1)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_subscr_target_3 = var_tmp.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1167;
        goto try_finally_handler_3;
    }

    tmp_subscr_subscript_3 = var_nnn.object;

    tmp_binop_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1167;
        goto try_finally_handler_3;
    }
    tmp_subscr_target_4 = var_t.object;

    if ( tmp_subscr_target_4 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1167;
        goto try_finally_handler_3;
    }

    tmp_subscr_subscript_4 = var_nnn.object;

    tmp_binop_right_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 1167;
        goto try_finally_handler_3;
    }
    tmp_ass_subvalue_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1167;
        goto try_finally_handler_3;
    }
    tmp_ass_subscribed_1 = var_tmp.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1167;
        goto try_finally_handler_3;
    }

    tmp_ass_subscript_1 = var_nnn.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1167;
        goto try_finally_handler_3;
    }
    goto branch_end_17;
    branch_no_17:;
    tmp_subscr_target_5 = var_t.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1169;
        goto try_finally_handler_3;
    }

    tmp_subscr_subscript_5 = var_nnn.object;

    tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1169;
        goto try_finally_handler_3;
    }
    tmp_ass_subscribed_2 = var_tmp.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1169;
        goto try_finally_handler_3;
    }

    tmp_ass_subscript_2 = var_nnn.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1169;
        goto try_finally_handler_3;
    }
    branch_end_17:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1165;
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

        goto try_finally_handler_2;
    }

    goto finally_end_2;
    finally_end_2:;
    branch_no_16:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1162;
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
    branch_no_15:;
    tmp_source_name_2 = var_tmp.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1170;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_keys );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1170;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1170;
    tmp_iter_arg_4 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1170;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1170;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator.object == NULL );
    tmp_for_loop_4__for_iterator.object = tmp_assign_source_21;

    // Tried code
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator.object;

    tmp_assign_source_22 = ITERATOR_NEXT( tmp_next_source_4 );
    if (tmp_assign_source_22 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_4;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 1170;
            goto try_finally_handler_4;
        }
    }

    if (tmp_for_loop_4__iter_value.object == NULL)
    {
        tmp_for_loop_4__iter_value.object = tmp_assign_source_22;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__iter_value.object;
        tmp_for_loop_4__iter_value.object = tmp_assign_source_22;
        Py_DECREF( old );
    }
    tmp_assign_source_23 = tmp_for_loop_4__iter_value.object;

    if (var_nn.object == NULL)
    {
        var_nn.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
    }
    else
    {
        PyObject *old = var_nn.object;
        var_nn.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
        Py_DECREF( old );
    }
    tmp_subscr_target_6 = var_tmp.object;

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1171;
        goto try_finally_handler_4;
    }

    tmp_subscr_subscript_6 = var_nn.object;

    tmp_iter_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1171;
        goto try_finally_handler_4;
    }
    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1171;
        goto try_finally_handler_4;
    }
    if (tmp_for_loop_5__for_iterator.object == NULL)
    {
        tmp_for_loop_5__for_iterator.object = tmp_assign_source_24;
    }
    else
    {
        PyObject *old = tmp_for_loop_5__for_iterator.object;
        tmp_for_loop_5__for_iterator.object = tmp_assign_source_24;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator.object;

    tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_5 );
    if (tmp_assign_source_25 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_5;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 1171;
            goto try_finally_handler_5;
        }
    }

    if (tmp_for_loop_5__iter_value.object == NULL)
    {
        tmp_for_loop_5__iter_value.object = tmp_assign_source_25;
    }
    else
    {
        PyObject *old = tmp_for_loop_5__iter_value.object;
        tmp_for_loop_5__iter_value.object = tmp_assign_source_25;
        Py_DECREF( old );
    }
    tmp_assign_source_26 = tmp_for_loop_5__iter_value.object;

    if (var_nnn.object == NULL)
    {
        var_nnn.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
    }
    else
    {
        PyObject *old = var_nnn.object;
        var_nnn.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
        Py_DECREF( old );
    }
    tmp_compare_left_13 = var_nnn.object;

    tmp_subscr_target_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_7 == NULL ))
    {
        tmp_subscr_target_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1172;
        goto try_finally_handler_5;
    }

    tmp_subscr_subscript_7 = var_nn.object;

    if ( tmp_subscr_subscript_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130722 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1172;
        goto try_finally_handler_5;
    }

    tmp_compare_right_13 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_compare_right_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1172;
        goto try_finally_handler_5;
    }
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_13 );

        frame_function->f_lineno = 1172;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_compare_right_13 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_binop_left_3 = PyList_New( 1 );
    tmp_list_element_1 = var_nnn.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_binop_left_3, 0, tmp_list_element_1 );
    tmp_subscr_target_8 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_8 == NULL ))
    {
        tmp_subscr_target_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1173;
        goto try_finally_handler_5;
    }

    tmp_subscr_subscript_8 = var_nn.object;

    if ( tmp_subscr_subscript_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130722 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1173;
        goto try_finally_handler_5;
    }

    tmp_binop_right_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 1173;
        goto try_finally_handler_5;
    }
    tmp_ass_subvalue_3 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1173;
        goto try_finally_handler_5;
    }
    tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_ass_subscribed_3 == NULL ))
    {
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1173;
        goto try_finally_handler_5;
    }

    tmp_ass_subscript_3 = var_nn.object;

    if ( tmp_ass_subscript_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130722 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1173;
        goto try_finally_handler_5;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1173;
        goto try_finally_handler_5;
    }
    branch_no_18:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1171;
        goto try_finally_handler_5;
    }
    goto loop_start_5;
    loop_end_5:;
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
    Py_XDECREF( tmp_for_loop_5__iter_value.object );
    tmp_for_loop_5__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_5__for_iterator.object );
    tmp_for_loop_5__for_iterator.object = NULL;

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
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1170;
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
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_4__iter_value.object );
    tmp_for_loop_4__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator.object );
    tmp_for_loop_4__for_iterator.object = NULL;

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
    tmp_subscr_target_9 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_9 == NULL ))
    {
        tmp_subscr_target_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1174;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_9 = var_n.object;

    if ( tmp_subscr_subscript_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1174;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1174;
        goto frame_exception_exit_1;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1174;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = par_need.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1174;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1174;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1174;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_14;
    branch_no_14:;
    tmp_assign_source_27 = PyDict_New();
    assert( var_tmp.object == NULL );
    var_tmp.object = tmp_assign_source_27;

    tmp_compare_left_14 = par_need.object;

    if ( tmp_compare_left_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1177;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_14 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_compare_right_14 == NULL ))
    {
        tmp_compare_right_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_compare_right_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130688 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1177;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_13 = PySequence_Contains( tmp_compare_right_14, tmp_compare_left_14 );
    if ( tmp_cmp_In_13 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1177;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_13 == 1)
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_subscr_target_10 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_subscr_target_10 == NULL ))
    {
        tmp_subscr_target_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_subscr_target_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130688 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1178;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_10 = par_need.object;

    if ( tmp_subscr_subscript_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1178;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1178;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1178;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_6__for_iterator.object == NULL );
    tmp_for_loop_6__for_iterator.object = tmp_assign_source_28;

    // Tried code
    loop_start_6:;
    tmp_next_source_6 = tmp_for_loop_6__for_iterator.object;

    tmp_assign_source_29 = ITERATOR_NEXT( tmp_next_source_6 );
    if (tmp_assign_source_29 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_6;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 1178;
            goto try_finally_handler_6;
        }
    }

    if (tmp_for_loop_6__iter_value.object == NULL)
    {
        tmp_for_loop_6__iter_value.object = tmp_assign_source_29;
    }
    else
    {
        PyObject *old = tmp_for_loop_6__iter_value.object;
        tmp_for_loop_6__iter_value.object = tmp_assign_source_29;
        Py_DECREF( old );
    }
    tmp_assign_source_30 = tmp_for_loop_6__iter_value.object;

    if (var_nn.object == NULL)
    {
        var_nn.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
    }
    else
    {
        PyObject *old = var_nn.object;
        var_nn.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
        Py_DECREF( old );
    }
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_append_needs );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_append_needs );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130333 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1179;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_7 = var_nn.object;

    tmp_call_arg_element_8 = par_flag.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12690 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1179;
        goto try_finally_handler_6;
    }

    frame_function->f_lineno = 1179;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1179;
        goto try_finally_handler_6;
    }
    if (var_t.object == NULL)
    {
        var_t.object = tmp_assign_source_31;
    }
    else
    {
        PyObject *old = var_t.object;
        var_t.object = tmp_assign_source_31;
        Py_DECREF( old );
    }
    tmp_isinstance_inst_4 = var_t.object;

    tmp_isinstance_cls_4 = LOOKUP_BUILTIN( const_str_plain_dict );
    if ( tmp_isinstance_cls_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1180;
        goto try_finally_handler_6;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1180;
        goto try_finally_handler_6;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_source_name_4 = var_t.object;

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_keys );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1181;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 1181;
    tmp_iter_arg_7 = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_iter_arg_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1181;
        goto try_finally_handler_6;
    }
    tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_7 );
    Py_DECREF( tmp_iter_arg_7 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1181;
        goto try_finally_handler_6;
    }
    if (tmp_for_loop_7__for_iterator.object == NULL)
    {
        tmp_for_loop_7__for_iterator.object = tmp_assign_source_32;
    }
    else
    {
        PyObject *old = tmp_for_loop_7__for_iterator.object;
        tmp_for_loop_7__for_iterator.object = tmp_assign_source_32;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_7:;
    tmp_next_source_7 = tmp_for_loop_7__for_iterator.object;

    tmp_assign_source_33 = ITERATOR_NEXT( tmp_next_source_7 );
    if (tmp_assign_source_33 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_7;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 1181;
            goto try_finally_handler_7;
        }
    }

    if (tmp_for_loop_7__iter_value.object == NULL)
    {
        tmp_for_loop_7__iter_value.object = tmp_assign_source_33;
    }
    else
    {
        PyObject *old = tmp_for_loop_7__iter_value.object;
        tmp_for_loop_7__iter_value.object = tmp_assign_source_33;
        Py_DECREF( old );
    }
    tmp_assign_source_34 = tmp_for_loop_7__iter_value.object;

    if (var_nnn.object == NULL)
    {
        var_nnn.object = INCREASE_REFCOUNT( tmp_assign_source_34 );
    }
    else
    {
        PyObject *old = var_nnn.object;
        var_nnn.object = INCREASE_REFCOUNT( tmp_assign_source_34 );
        Py_DECREF( old );
    }
    tmp_compare_left_15 = var_nnn.object;

    tmp_compare_right_15 = var_tmp.object;

    if ( tmp_compare_right_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1182;
        goto try_finally_handler_7;
    }

    tmp_cmp_In_14 = PySequence_Contains( tmp_compare_right_15, tmp_compare_left_15 );
    if ( tmp_cmp_In_14 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1182;
        goto try_finally_handler_7;
    }
    if (tmp_cmp_In_14 == 1)
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_subscr_target_11 = var_t.object;

    if ( tmp_subscr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1183;
        goto try_finally_handler_7;
    }

    tmp_subscr_subscript_11 = var_nnn.object;

    tmp_binop_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1183;
        goto try_finally_handler_7;
    }
    tmp_subscr_target_12 = var_tmp.object;

    if ( tmp_subscr_target_12 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1183;
        goto try_finally_handler_7;
    }

    tmp_subscr_subscript_12 = var_nnn.object;

    tmp_binop_right_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 1183;
        goto try_finally_handler_7;
    }
    tmp_ass_subvalue_4 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1183;
        goto try_finally_handler_7;
    }
    tmp_ass_subscribed_4 = var_tmp.object;

    if ( tmp_ass_subscribed_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1183;
        goto try_finally_handler_7;
    }

    tmp_ass_subscript_4 = var_nnn.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1183;
        goto try_finally_handler_7;
    }
    goto branch_end_21;
    branch_no_21:;
    tmp_subscr_target_13 = var_t.object;

    if ( tmp_subscr_target_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1185;
        goto try_finally_handler_7;
    }

    tmp_subscr_subscript_13 = var_nnn.object;

    tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    if ( tmp_ass_subvalue_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1185;
        goto try_finally_handler_7;
    }
    tmp_ass_subscribed_5 = var_tmp.object;

    if ( tmp_ass_subscribed_5 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1185;
        goto try_finally_handler_7;
    }

    tmp_ass_subscript_5 = var_nnn.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    Py_DECREF( tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1185;
        goto try_finally_handler_7;
    }
    branch_end_21:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1181;
        goto try_finally_handler_7;
    }
    goto loop_start_7;
    loop_end_7:;
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
    Py_XDECREF( tmp_for_loop_7__iter_value.object );
    tmp_for_loop_7__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_7__for_iterator.object );
    tmp_for_loop_7__for_iterator.object = NULL;

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
    branch_no_20:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1178;
        goto try_finally_handler_6;
    }
    goto loop_start_6;
    loop_end_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_6__iter_value.object );
    tmp_for_loop_6__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_6__for_iterator.object );
    tmp_for_loop_6__for_iterator.object = NULL;

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
    branch_no_19:;
    tmp_compare_left_16 = var_n.object;

    if ( tmp_compare_left_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1186;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_16 = var_tmp.object;

    if ( tmp_compare_right_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1186;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_16, tmp_compare_left_16 );
    if ( tmp_cmp_NotIn_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1186;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotIn_2 == 0)
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_ass_subvalue_6 = PyList_New( 0 );
    tmp_ass_subscribed_6 = var_tmp.object;

    if ( tmp_ass_subscribed_6 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1187;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_6 = var_n.object;

    if ( tmp_ass_subscript_6 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1187;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    Py_DECREF( tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1187;
        goto frame_exception_exit_1;
    }
    branch_no_22:;
    tmp_subscr_target_14 = var_tmp.object;

    if ( tmp_subscr_target_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1188;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_14 = var_n.object;

    if ( tmp_subscr_subscript_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1188;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_14, tmp_subscr_subscript_14 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1188;
        goto frame_exception_exit_1;
    }
    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1188;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = par_need.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1188;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1188;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1188;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_tmp.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1189;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_14:;
    goto branch_end_2;
    branch_no_2:;
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_errmess );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errmess );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125842 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1191;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_5 = const_str_digest_9c2dfc7feb00efe56dcb6f59d36af122;
    tmp_unary_arg_2 = par_need.object;

    if ( tmp_unary_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130283 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1191;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_5 = UNARY_OPERATION( PyObject_Repr, tmp_unary_arg_2 );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1191;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1191;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1191;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1191;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_2:;
    branch_end_1:;

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
    if ((var_n.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n,
            var_n.object
        );

    }
    if ((var_tmp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tmp,
            var_tmp.object
        );

    }
    if ((var_nn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nn,
            var_nn.object
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
    if ((var_nnn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nnn,
            var_nnn.object
        );

    }
    if ((par_need.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_need,
            par_need.object
        );

    }
    if ((par_flag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_flag,
            par_flag.object
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
static PyObject *fparse_function_2_append_needs_of_module_numpy$f2py$cfuncs( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_need = NULL;
    PyObject *_python_par_flag = NULL;
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
                PyErr_Format( PyExc_TypeError, "append_needs() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_need == key )
            {
                assert( _python_par_need == NULL );
                _python_par_need = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_flag == key )
            {
                assert( _python_par_flag == NULL );
                _python_par_flag = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_need, key ) == 1 )
            {
                assert( _python_par_need == NULL );
                _python_par_need = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_flag, key ) == 1 )
            {
                assert( _python_par_flag == NULL );
                _python_par_flag = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "append_needs() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_need != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_need = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_need == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_need = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_flag != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_flag = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_flag == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_flag = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_need == NULL || _python_par_flag == NULL ))
    {
        PyObject *values[] = { _python_par_need, _python_par_flag };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_append_needs_of_module_numpy$f2py$cfuncs( self, _python_par_need, _python_par_flag );

error_exit:;

    Py_XDECREF( _python_par_need );
    Py_XDECREF( _python_par_flag );

    return NULL;
}

static PyObject *dparse_function_2_append_needs_of_module_numpy$f2py$cfuncs( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2_append_needs_of_module_numpy$f2py$cfuncs( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_append_needs_of_module_numpy$f2py$cfuncs( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_get_needs_of_module_numpy$f2py$cfuncs( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_res;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_out;
    PyObjectLocalVariable var_saveout;
    PyObjectLocalVariable var_flag;
    PyObjectLocalVariable var_k;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_and_1__value_2;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    bool tmp_break_1;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
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
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_subscript_2;
    PyObject *tmp_delsubscr_target_1;
    PyObject *tmp_delsubscr_target_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_subscript_6;
    PyObject *tmp_subscr_subscript_7;
    PyObject *tmp_subscr_subscript_8;
    PyObject *tmp_subscr_subscript_9;
    PyObject *tmp_subscr_subscript_10;
    PyObject *tmp_subscr_subscript_11;
    PyObject *tmp_subscr_subscript_12;
    PyObject *tmp_subscr_subscript_13;
    PyObject *tmp_subscr_subscript_14;
    PyObject *tmp_subscr_subscript_15;
    PyObject *tmp_subscr_subscript_16;
    PyObject *tmp_subscr_subscript_17;
    PyObject *tmp_subscr_subscript_18;
    PyObject *tmp_subscr_subscript_19;
    PyObject *tmp_subscr_subscript_20;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_subscr_target_5;
    PyObject *tmp_subscr_target_6;
    PyObject *tmp_subscr_target_7;
    PyObject *tmp_subscr_target_8;
    PyObject *tmp_subscr_target_9;
    PyObject *tmp_subscr_target_10;
    PyObject *tmp_subscr_target_11;
    PyObject *tmp_subscr_target_12;
    PyObject *tmp_subscr_target_13;
    PyObject *tmp_subscr_target_14;
    PyObject *tmp_subscr_target_15;
    PyObject *tmp_subscr_target_16;
    PyObject *tmp_subscr_target_17;
    PyObject *tmp_subscr_target_18;
    PyObject *tmp_subscr_target_19;
    PyObject *tmp_subscr_target_20;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_res.object == NULL );
    var_res.object = tmp_assign_source_1;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a8304e8b50d717d3d9d6ff8a4185656e, module_numpy$f2py$cfuncs );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1196;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1196;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1196;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1196;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1196;
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
        frame_function->f_lineno = 1196;
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

    if (var_n.object == NULL)
    {
        var_n.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_n.object;
        var_n.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_assign_source_5 = PyList_New( 0 );
    if (var_out.object == NULL)
    {
        var_out.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = var_out.object;
        var_out.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_copy );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82769 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1198;
        goto try_finally_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_copy );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1198;
        goto try_finally_handler_1;
    }
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1198;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = var_n.object;

    tmp_call_arg_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 1198;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 1198;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1198;
        goto try_finally_handler_1;
    }
    if (var_saveout.object == NULL)
    {
        var_saveout.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = var_saveout.object;
        var_saveout.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    loop_start_2:;
    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1199;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_2 = var_n.object;

    tmp_len_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1199;
        goto try_finally_handler_1;
    }
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1199;
        goto try_finally_handler_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 1199;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_2;
    branch_no_1:;
    tmp_subscr_target_4 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_4 == NULL ))
    {
        tmp_subscr_target_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1200;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_4 = var_n.object;

    tmp_subscr_target_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1200;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_3 = const_int_0;
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1200;
        goto try_finally_handler_1;
    }
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_compare_right_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130688 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1200;
        goto try_finally_handler_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 1200;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = var_out.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7983 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1201;
        goto try_finally_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1201;
        goto try_finally_handler_1;
    }
    tmp_subscr_target_6 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_6 == NULL ))
    {
        tmp_subscr_target_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_6 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1201;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_6 = var_n.object;

    tmp_subscr_target_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_subscr_target_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 1201;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_5 = const_int_0;
    tmp_call_arg_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_target_5 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 1201;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 1201;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1201;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_subscr_target_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_7 == NULL ))
    {
        tmp_subscr_target_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1202;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_7 = var_n.object;

    tmp_delsubscr_target_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_delsubscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1202;
        goto try_finally_handler_1;
    }
    tmp_delsubscr_subscript_1 = const_int_0;
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    Py_DECREF( tmp_delsubscr_target_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1202;
        goto try_finally_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_7 = const_int_0;
    if (var_flag.object == NULL)
    {
        var_flag.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = var_flag.object;
        var_flag.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_subscr_target_8 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_8 == NULL ))
    {
        tmp_subscr_target_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1205;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_8 = var_n.object;

    tmp_slice_source_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1205;
        goto try_finally_handler_1;
    }
    tmp_iter_arg_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1205;
        goto try_finally_handler_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1205;
        goto try_finally_handler_1;
    }
    if (tmp_for_loop_2__for_iterator.object == NULL)
    {
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__for_iterator.object;
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_3:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_9 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 1205;
            goto try_finally_handler_2;
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

    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    tmp_compare_left_3 = var_k.object;

    tmp_subscr_target_9 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_subscr_target_9 == NULL ))
    {
        tmp_subscr_target_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_subscr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130688 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1206;
        goto try_finally_handler_2;
    }

    tmp_subscr_target_11 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_11 == NULL ))
    {
        tmp_subscr_target_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1206;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_11 = var_n.object;

    if ( tmp_subscr_subscript_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1206;
        goto try_finally_handler_2;
    }

    tmp_subscr_target_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_subscr_target_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1206;
        goto try_finally_handler_2;
    }
    tmp_subscr_subscript_10 = const_int_0;
    tmp_subscr_subscript_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    Py_DECREF( tmp_subscr_target_10 );
    if ( tmp_subscr_subscript_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1206;
        goto try_finally_handler_2;
    }
    tmp_compare_right_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    Py_DECREF( tmp_subscr_subscript_9 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1206;
        goto try_finally_handler_2;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_3 );

        frame_function->f_lineno = 1206;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_compare_right_3 );
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_11 = const_int_pos_1;
    if (var_flag.object == NULL)
    {
        var_flag.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = var_flag.object;
        var_flag.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    goto loop_end_3;
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1205;
        goto try_finally_handler_2;
    }
    goto loop_start_3;
    loop_end_3:;
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
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

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
    tmp_cond_value_1 = var_flag.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12690 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1209;
        goto try_finally_handler_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1209;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_sliceslicedel_index_lower_2 = 1;
    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
    tmp_subscr_target_12 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_12 == NULL ))
    {
        tmp_subscr_target_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1210;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_12 = var_n.object;

    if ( tmp_subscr_subscript_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1210;
        goto try_finally_handler_1;
    }

    tmp_slice_source_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1210;
        goto try_finally_handler_1;
    }
    tmp_binop_left_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1210;
        goto try_finally_handler_1;
    }
    tmp_binop_right_1 = PyList_New( 1 );
    tmp_subscr_target_14 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_14 == NULL ))
    {
        tmp_subscr_target_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_14 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1210;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_14 = var_n.object;

    if ( tmp_subscr_subscript_14 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1210;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_13 = LOOKUP_SUBSCRIPT( tmp_subscr_target_14, tmp_subscr_subscript_14 );
    if ( tmp_subscr_target_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 1210;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_13 = const_int_0;
    tmp_list_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    Py_DECREF( tmp_subscr_target_13 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 1210;
        goto try_finally_handler_1;
    }
    PyList_SET_ITEM( tmp_binop_right_1, 0, tmp_list_element_1 );
    tmp_ass_subvalue_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1210;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1210;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_1 = var_n.object;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1210;
        goto try_finally_handler_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1210;
        goto try_finally_handler_1;
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_4 = var_out.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7983 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1212;
        goto try_finally_handler_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1212;
        goto try_finally_handler_1;
    }
    tmp_subscr_target_16 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_16 == NULL ))
    {
        tmp_subscr_target_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_16 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1212;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_16 = var_n.object;

    if ( tmp_subscr_subscript_16 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1212;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_15 = LOOKUP_SUBSCRIPT( tmp_subscr_target_16, tmp_subscr_subscript_16 );
    if ( tmp_subscr_target_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 1212;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_15 = const_int_0;
    tmp_call_arg_element_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_15, tmp_subscr_subscript_15 );
    Py_DECREF( tmp_subscr_target_15 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 1212;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 1212;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1212;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_subscr_target_17 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_17 == NULL ))
    {
        tmp_subscr_target_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1213;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_17 = var_n.object;

    if ( tmp_subscr_subscript_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1213;
        goto try_finally_handler_1;
    }

    tmp_delsubscr_target_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_17, tmp_subscr_subscript_17 );
    if ( tmp_delsubscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1213;
        goto try_finally_handler_1;
    }
    tmp_delsubscr_subscript_2 = const_int_0;
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_2, tmp_delsubscr_subscript_2 );
    Py_DECREF( tmp_delsubscr_target_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1213;
        goto try_finally_handler_1;
    }
    branch_end_4:;
    branch_end_2:;
    tmp_break_1 = false;
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_assign_source_12 = var_saveout.object;

    if ( tmp_assign_source_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130770 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1214;
        goto try_finally_handler_4;
    }

    if (tmp_and_1__value_2.object == NULL)
    {
        tmp_and_1__value_2.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = tmp_and_1__value_2.object;
        tmp_and_1__value_2.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    tmp_cond_value_3 = tmp_and_1__value_2.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1214;
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
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_2.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_2.object );
        tmp_and_1__value_2.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_compexpr_left_1 = const_int_0;
    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1214;
        goto try_finally_handler_7;
    }
    tmp_call_arg_element_4 = MAKE_FUNCTION_lambda_1_lambda_of_function_3_get_needs_of_module_numpy$f2py$cfuncs(  );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 1214;
        goto try_finally_handler_7;
    }
    tmp_call_arg_element_5 = var_saveout.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130770 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1214;
        goto try_finally_handler_7;
    }

    tmp_subscr_target_18 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_18 == NULL ))
    {
        tmp_subscr_target_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_18 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1214;
        goto try_finally_handler_7;
    }

    tmp_subscr_subscript_18 = var_n.object;

    if ( tmp_subscr_subscript_18 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1214;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_18, tmp_subscr_subscript_18 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 1214;
        goto try_finally_handler_7;
    }
    frame_function->f_lineno = 1214;
    tmp_compexpr_right_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1214;
        goto try_finally_handler_7;
    }
    tmp_assign_source_13 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_1 );

        frame_function->f_lineno = 1214;
        goto try_finally_handler_7;
    }
    Py_DECREF( tmp_compexpr_right_1 );
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


        frame_function->f_lineno = 1214;
        goto try_finally_handler_7;
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
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_19 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_19 == NULL ))
    {
        tmp_subscr_target_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1215;
        goto try_finally_handler_8;
    }

    tmp_subscr_subscript_19 = var_n.object;

    if ( tmp_subscr_subscript_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1215;
        goto try_finally_handler_8;
    }

    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_19, tmp_subscr_subscript_19 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1215;
        goto try_finally_handler_8;
    }
    tmp_compexpr_right_2 = PyList_New( 0 );
    tmp_cond_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1215;
        goto try_finally_handler_8;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
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

        goto try_finally_handler_7;
    }

    goto finally_end_2;
    finally_end_2:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_2 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_2 );
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
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

        goto try_finally_handler_6;
    }

    goto finally_end_3;
    finally_end_3:;
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

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
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
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_2 = tmp_and_1__value_2.object;

    Py_INCREF( tmp_cond_value_2 );
    condexpr_end_1:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_3;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 1214;
        goto try_finally_handler_3;
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
    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1216;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_7 = var_n.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1216;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_8 = var_saveout.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130770 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1216;
        goto try_finally_handler_3;
    }

    frame_function->f_lineno = 1216;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1216;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_errmess );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errmess );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125842 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1217;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_9 = const_str_digest_5fb4c06ca1caf68a0eed6655ccd5ceb2;
    frame_function->f_lineno = 1217;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1217;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_2 = var_out.object;

    if ( tmp_binop_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7983 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1218;
        goto try_finally_handler_3;
    }

    tmp_binop_right_2 = var_saveout.object;

    if ( tmp_binop_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130770 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1218;
        goto try_finally_handler_3;
    }

    tmp_assign_source_14 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1218;
        goto try_finally_handler_3;
    }
    if (var_out.object == NULL)
    {
        var_out.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = var_out.object;
        var_out.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    tmp_break_1 = true;
    goto try_finally_handler_start_1;
    branch_no_5:;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_2.object );
    tmp_and_1__value_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_1;
    }

    // Break if entered via break.
    if ( tmp_break_1 )
    {

    goto loop_end_2;
    }
    goto finally_end_7;
    finally_end_7:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_copy );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82769 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1220;
        goto try_finally_handler_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_copy );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1220;
        goto try_finally_handler_1;
    }
    tmp_subscr_target_20 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds );

    if (unlikely( tmp_subscr_target_20 == NULL ))
    {
        tmp_subscr_target_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outneeds );
    }

    if ( tmp_subscr_target_20 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130651 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1220;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_20 = var_n.object;

    if ( tmp_subscr_subscript_20 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1220;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_20, tmp_subscr_subscript_20 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 1220;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 1220;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1220;
        goto try_finally_handler_1;
    }
    if (var_saveout.object == NULL)
    {
        var_saveout.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_saveout.object;
        var_saveout.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1199;
        goto try_finally_handler_1;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_compare_left_4 = var_out.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7983 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1221;
        goto try_finally_handler_1;
    }

    tmp_compare_right_4 = PyList_New( 0 );
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_4 );

        frame_function->f_lineno = 1221;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_right_4 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_16 = PyList_New( 1 );
    tmp_list_element_2 = var_n.object;

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1222;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assign_source_16, 0, tmp_list_element_2 );
    if (var_out.object == NULL)
    {
        var_out.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = var_out.object;
        var_out.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    branch_no_6:;
    tmp_ass_subvalue_2 = var_out.object;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7983 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1223;
        goto try_finally_handler_1;
    }

    tmp_ass_subscribed_2 = var_res.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 64406 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1223;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_2 = var_n.object;

    if ( tmp_ass_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1223;
        goto try_finally_handler_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1223;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1196;
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
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
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
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto frame_exception_exit_1;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_return_value = var_res.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 64406 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1224;
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
    if ((var_res.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_res,
            var_res.object
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
    if ((var_out.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_out,
            var_out.object
        );

    }
    if ((var_saveout.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_saveout,
            var_saveout.object
        );

    }
    if ((var_flag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_flag,
            var_flag.object
        );

    }
    if ((var_k.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            var_k.object
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
static PyObject *fparse_function_3_get_needs_of_module_numpy$f2py$cfuncs( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_3_get_needs_of_module_numpy$f2py$cfuncs( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_3_get_needs_of_module_numpy$f2py$cfuncs( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_3_get_needs_of_module_numpy$f2py$cfuncs( self );
    }
    else
    {
        PyObject *result = fparse_function_3_get_needs_of_module_numpy$f2py$cfuncs( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_3_get_needs_of_module_numpy$f2py$cfuncs( Nuitka_FunctionObject *self, PyObject *_python_par_x, PyObject *_python_par_y )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObjectLocalVariable par_y; par_y.object = _python_par_y;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9d2008a94bca12b7285762a8a2da7fa6, module_numpy$f2py$cfuncs );
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
    tmp_compexpr_left_1 = par_x.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1214;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = par_y.object;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1214;
        goto frame_exception_exit_1;
    }

    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1214;
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
    if ((par_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            par_x.object
        );

    }
    if ((par_y.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_y,
            par_y.object
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
static PyObject *fparse_lambda_1_lambda_of_function_3_get_needs_of_module_numpy$f2py$cfuncs( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    PyObject *_python_par_y = NULL;
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
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_x == key )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_y == key )
            {
                assert( _python_par_y == NULL );
                _python_par_y = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_y, key ) == 1 )
            {
                assert( _python_par_y == NULL );
                _python_par_y = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "<lambda>() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_y != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_y = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_y == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_y = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_x == NULL || _python_par_y == NULL ))
    {
        PyObject *values[] = { _python_par_x, _python_par_y };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_lambda_1_lambda_of_function_3_get_needs_of_module_numpy$f2py$cfuncs( self, _python_par_x, _python_par_y );

error_exit:;

    Py_XDECREF( _python_par_x );
    Py_XDECREF( _python_par_y );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_3_get_needs_of_module_numpy$f2py$cfuncs( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_lambda_1_lambda_of_function_3_get_needs_of_module_numpy$f2py$cfuncs( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_3_get_needs_of_module_numpy$f2py$cfuncs( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_buildcfuncs_of_module_numpy$f2py$cfuncs(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_buildcfuncs_of_module_numpy$f2py$cfuncs,
        dparse_function_1_buildcfuncs_of_module_numpy$f2py$cfuncs,
        const_str_plain_buildcfuncs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_897a080c3cab86eecebbca4eb40dd91a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$cfuncs,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_append_needs_of_module_numpy$f2py$cfuncs( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_append_needs_of_module_numpy$f2py$cfuncs,
        dparse_function_2_append_needs_of_module_numpy$f2py$cfuncs,
        const_str_plain_append_needs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5be5c41e08a17704520e8069772645a3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$cfuncs,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_needs_of_module_numpy$f2py$cfuncs(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_needs_of_module_numpy$f2py$cfuncs,
        dparse_function_3_get_needs_of_module_numpy$f2py$cfuncs,
        const_str_plain_get_needs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b36582d4f7fa4fb1cbf8d4ab6638eabe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$cfuncs,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_3_get_needs_of_module_numpy$f2py$cfuncs(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_3_get_needs_of_module_numpy$f2py$cfuncs,
        dparse_lambda_1_lambda_of_function_3_get_needs_of_module_numpy$f2py$cfuncs,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9d2008a94bca12b7285762a8a2da7fa6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$cfuncs,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$f2py$cfuncs =
{
    PyModuleDef_HEAD_INIT,
    "numpy.f2py.cfuncs",   /* m_name */
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

MOD_INIT_DECL( numpy$f2py$cfuncs )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$f2py$cfuncs );
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

    // puts( "in initnumpy$f2py$cfuncs" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$f2py$cfuncs = Py_InitModule4(
        "numpy.f2py.cfuncs",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$f2py$cfuncs = PyModule_Create( &mdef_numpy$f2py$cfuncs );
#endif

    moduledict_numpy$f2py$cfuncs = (PyDictObject *)((PyModuleObject *)module_numpy$f2py$cfuncs)->md_dict;

    assertObject( module_numpy$f2py$cfuncs );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d8734fdf95614f71b17eec9b69cfeda1, module_numpy$f2py$cfuncs );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$f2py$cfuncs );

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
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscribed_6;
    PyObject *tmp_ass_subscribed_7;
    PyObject *tmp_ass_subscribed_8;
    PyObject *tmp_ass_subscribed_9;
    PyObject *tmp_ass_subscribed_10;
    PyObject *tmp_ass_subscribed_11;
    PyObject *tmp_ass_subscribed_12;
    PyObject *tmp_ass_subscribed_13;
    PyObject *tmp_ass_subscribed_14;
    PyObject *tmp_ass_subscribed_15;
    PyObject *tmp_ass_subscribed_16;
    PyObject *tmp_ass_subscribed_17;
    PyObject *tmp_ass_subscribed_18;
    PyObject *tmp_ass_subscribed_19;
    PyObject *tmp_ass_subscribed_20;
    PyObject *tmp_ass_subscribed_21;
    PyObject *tmp_ass_subscribed_22;
    PyObject *tmp_ass_subscribed_23;
    PyObject *tmp_ass_subscribed_24;
    PyObject *tmp_ass_subscribed_25;
    PyObject *tmp_ass_subscribed_26;
    PyObject *tmp_ass_subscribed_27;
    PyObject *tmp_ass_subscribed_28;
    PyObject *tmp_ass_subscribed_29;
    PyObject *tmp_ass_subscribed_30;
    PyObject *tmp_ass_subscribed_31;
    PyObject *tmp_ass_subscribed_32;
    PyObject *tmp_ass_subscribed_33;
    PyObject *tmp_ass_subscribed_34;
    PyObject *tmp_ass_subscribed_35;
    PyObject *tmp_ass_subscribed_36;
    PyObject *tmp_ass_subscribed_37;
    PyObject *tmp_ass_subscribed_38;
    PyObject *tmp_ass_subscribed_39;
    PyObject *tmp_ass_subscribed_40;
    PyObject *tmp_ass_subscribed_41;
    PyObject *tmp_ass_subscribed_42;
    PyObject *tmp_ass_subscribed_43;
    PyObject *tmp_ass_subscribed_44;
    PyObject *tmp_ass_subscribed_45;
    PyObject *tmp_ass_subscribed_46;
    PyObject *tmp_ass_subscribed_47;
    PyObject *tmp_ass_subscribed_48;
    PyObject *tmp_ass_subscribed_49;
    PyObject *tmp_ass_subscribed_50;
    PyObject *tmp_ass_subscribed_51;
    PyObject *tmp_ass_subscribed_52;
    PyObject *tmp_ass_subscribed_53;
    PyObject *tmp_ass_subscribed_54;
    PyObject *tmp_ass_subscribed_55;
    PyObject *tmp_ass_subscribed_56;
    PyObject *tmp_ass_subscribed_57;
    PyObject *tmp_ass_subscribed_58;
    PyObject *tmp_ass_subscribed_59;
    PyObject *tmp_ass_subscribed_60;
    PyObject *tmp_ass_subscribed_61;
    PyObject *tmp_ass_subscribed_62;
    PyObject *tmp_ass_subscribed_63;
    PyObject *tmp_ass_subscribed_64;
    PyObject *tmp_ass_subscribed_65;
    PyObject *tmp_ass_subscribed_66;
    PyObject *tmp_ass_subscribed_67;
    PyObject *tmp_ass_subscribed_68;
    PyObject *tmp_ass_subscribed_69;
    PyObject *tmp_ass_subscribed_70;
    PyObject *tmp_ass_subscribed_71;
    PyObject *tmp_ass_subscribed_72;
    PyObject *tmp_ass_subscribed_73;
    PyObject *tmp_ass_subscribed_74;
    PyObject *tmp_ass_subscribed_75;
    PyObject *tmp_ass_subscribed_76;
    PyObject *tmp_ass_subscribed_77;
    PyObject *tmp_ass_subscribed_78;
    PyObject *tmp_ass_subscribed_79;
    PyObject *tmp_ass_subscribed_80;
    PyObject *tmp_ass_subscribed_81;
    PyObject *tmp_ass_subscribed_82;
    PyObject *tmp_ass_subscribed_83;
    PyObject *tmp_ass_subscribed_84;
    PyObject *tmp_ass_subscribed_85;
    PyObject *tmp_ass_subscribed_86;
    PyObject *tmp_ass_subscribed_87;
    PyObject *tmp_ass_subscribed_88;
    PyObject *tmp_ass_subscribed_89;
    PyObject *tmp_ass_subscribed_90;
    PyObject *tmp_ass_subscribed_91;
    PyObject *tmp_ass_subscribed_92;
    PyObject *tmp_ass_subscribed_93;
    PyObject *tmp_ass_subscribed_94;
    PyObject *tmp_ass_subscribed_95;
    PyObject *tmp_ass_subscribed_96;
    PyObject *tmp_ass_subscribed_97;
    PyObject *tmp_ass_subscribed_98;
    PyObject *tmp_ass_subscribed_99;
    PyObject *tmp_ass_subscribed_100;
    PyObject *tmp_ass_subscribed_101;
    PyObject *tmp_ass_subscribed_102;
    PyObject *tmp_ass_subscribed_103;
    PyObject *tmp_ass_subscribed_104;
    PyObject *tmp_ass_subscribed_105;
    PyObject *tmp_ass_subscribed_106;
    PyObject *tmp_ass_subscribed_107;
    PyObject *tmp_ass_subscribed_108;
    PyObject *tmp_ass_subscribed_109;
    PyObject *tmp_ass_subscribed_110;
    PyObject *tmp_ass_subscribed_111;
    PyObject *tmp_ass_subscribed_112;
    PyObject *tmp_ass_subscribed_113;
    PyObject *tmp_ass_subscribed_114;
    PyObject *tmp_ass_subscribed_115;
    PyObject *tmp_ass_subscribed_116;
    PyObject *tmp_ass_subscribed_117;
    PyObject *tmp_ass_subscribed_118;
    PyObject *tmp_ass_subscribed_119;
    PyObject *tmp_ass_subscribed_120;
    PyObject *tmp_ass_subscribed_121;
    PyObject *tmp_ass_subscribed_122;
    PyObject *tmp_ass_subscribed_123;
    PyObject *tmp_ass_subscribed_124;
    PyObject *tmp_ass_subscribed_125;
    PyObject *tmp_ass_subscribed_126;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subscript_6;
    PyObject *tmp_ass_subscript_7;
    PyObject *tmp_ass_subscript_8;
    PyObject *tmp_ass_subscript_9;
    PyObject *tmp_ass_subscript_10;
    PyObject *tmp_ass_subscript_11;
    PyObject *tmp_ass_subscript_12;
    PyObject *tmp_ass_subscript_13;
    PyObject *tmp_ass_subscript_14;
    PyObject *tmp_ass_subscript_15;
    PyObject *tmp_ass_subscript_16;
    PyObject *tmp_ass_subscript_17;
    PyObject *tmp_ass_subscript_18;
    PyObject *tmp_ass_subscript_19;
    PyObject *tmp_ass_subscript_20;
    PyObject *tmp_ass_subscript_21;
    PyObject *tmp_ass_subscript_22;
    PyObject *tmp_ass_subscript_23;
    PyObject *tmp_ass_subscript_24;
    PyObject *tmp_ass_subscript_25;
    PyObject *tmp_ass_subscript_26;
    PyObject *tmp_ass_subscript_27;
    PyObject *tmp_ass_subscript_28;
    PyObject *tmp_ass_subscript_29;
    PyObject *tmp_ass_subscript_30;
    PyObject *tmp_ass_subscript_31;
    PyObject *tmp_ass_subscript_32;
    PyObject *tmp_ass_subscript_33;
    PyObject *tmp_ass_subscript_34;
    PyObject *tmp_ass_subscript_35;
    PyObject *tmp_ass_subscript_36;
    PyObject *tmp_ass_subscript_37;
    PyObject *tmp_ass_subscript_38;
    PyObject *tmp_ass_subscript_39;
    PyObject *tmp_ass_subscript_40;
    PyObject *tmp_ass_subscript_41;
    PyObject *tmp_ass_subscript_42;
    PyObject *tmp_ass_subscript_43;
    PyObject *tmp_ass_subscript_44;
    PyObject *tmp_ass_subscript_45;
    PyObject *tmp_ass_subscript_46;
    PyObject *tmp_ass_subscript_47;
    PyObject *tmp_ass_subscript_48;
    PyObject *tmp_ass_subscript_49;
    PyObject *tmp_ass_subscript_50;
    PyObject *tmp_ass_subscript_51;
    PyObject *tmp_ass_subscript_52;
    PyObject *tmp_ass_subscript_53;
    PyObject *tmp_ass_subscript_54;
    PyObject *tmp_ass_subscript_55;
    PyObject *tmp_ass_subscript_56;
    PyObject *tmp_ass_subscript_57;
    PyObject *tmp_ass_subscript_58;
    PyObject *tmp_ass_subscript_59;
    PyObject *tmp_ass_subscript_60;
    PyObject *tmp_ass_subscript_61;
    PyObject *tmp_ass_subscript_62;
    PyObject *tmp_ass_subscript_63;
    PyObject *tmp_ass_subscript_64;
    PyObject *tmp_ass_subscript_65;
    PyObject *tmp_ass_subscript_66;
    PyObject *tmp_ass_subscript_67;
    PyObject *tmp_ass_subscript_68;
    PyObject *tmp_ass_subscript_69;
    PyObject *tmp_ass_subscript_70;
    PyObject *tmp_ass_subscript_71;
    PyObject *tmp_ass_subscript_72;
    PyObject *tmp_ass_subscript_73;
    PyObject *tmp_ass_subscript_74;
    PyObject *tmp_ass_subscript_75;
    PyObject *tmp_ass_subscript_76;
    PyObject *tmp_ass_subscript_77;
    PyObject *tmp_ass_subscript_78;
    PyObject *tmp_ass_subscript_79;
    PyObject *tmp_ass_subscript_80;
    PyObject *tmp_ass_subscript_81;
    PyObject *tmp_ass_subscript_82;
    PyObject *tmp_ass_subscript_83;
    PyObject *tmp_ass_subscript_84;
    PyObject *tmp_ass_subscript_85;
    PyObject *tmp_ass_subscript_86;
    PyObject *tmp_ass_subscript_87;
    PyObject *tmp_ass_subscript_88;
    PyObject *tmp_ass_subscript_89;
    PyObject *tmp_ass_subscript_90;
    PyObject *tmp_ass_subscript_91;
    PyObject *tmp_ass_subscript_92;
    PyObject *tmp_ass_subscript_93;
    PyObject *tmp_ass_subscript_94;
    PyObject *tmp_ass_subscript_95;
    PyObject *tmp_ass_subscript_96;
    PyObject *tmp_ass_subscript_97;
    PyObject *tmp_ass_subscript_98;
    PyObject *tmp_ass_subscript_99;
    PyObject *tmp_ass_subscript_100;
    PyObject *tmp_ass_subscript_101;
    PyObject *tmp_ass_subscript_102;
    PyObject *tmp_ass_subscript_103;
    PyObject *tmp_ass_subscript_104;
    PyObject *tmp_ass_subscript_105;
    PyObject *tmp_ass_subscript_106;
    PyObject *tmp_ass_subscript_107;
    PyObject *tmp_ass_subscript_108;
    PyObject *tmp_ass_subscript_109;
    PyObject *tmp_ass_subscript_110;
    PyObject *tmp_ass_subscript_111;
    PyObject *tmp_ass_subscript_112;
    PyObject *tmp_ass_subscript_113;
    PyObject *tmp_ass_subscript_114;
    PyObject *tmp_ass_subscript_115;
    PyObject *tmp_ass_subscript_116;
    PyObject *tmp_ass_subscript_117;
    PyObject *tmp_ass_subscript_118;
    PyObject *tmp_ass_subscript_119;
    PyObject *tmp_ass_subscript_120;
    PyObject *tmp_ass_subscript_121;
    PyObject *tmp_ass_subscript_122;
    PyObject *tmp_ass_subscript_123;
    PyObject *tmp_ass_subscript_124;
    PyObject *tmp_ass_subscript_125;
    PyObject *tmp_ass_subscript_126;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
    PyObject *tmp_ass_subvalue_6;
    PyObject *tmp_ass_subvalue_7;
    PyObject *tmp_ass_subvalue_8;
    PyObject *tmp_ass_subvalue_9;
    PyObject *tmp_ass_subvalue_10;
    PyObject *tmp_ass_subvalue_11;
    PyObject *tmp_ass_subvalue_12;
    PyObject *tmp_ass_subvalue_13;
    PyObject *tmp_ass_subvalue_14;
    PyObject *tmp_ass_subvalue_15;
    PyObject *tmp_ass_subvalue_16;
    PyObject *tmp_ass_subvalue_17;
    PyObject *tmp_ass_subvalue_18;
    PyObject *tmp_ass_subvalue_19;
    PyObject *tmp_ass_subvalue_20;
    PyObject *tmp_ass_subvalue_21;
    PyObject *tmp_ass_subvalue_22;
    PyObject *tmp_ass_subvalue_23;
    PyObject *tmp_ass_subvalue_24;
    PyObject *tmp_ass_subvalue_25;
    PyObject *tmp_ass_subvalue_26;
    PyObject *tmp_ass_subvalue_27;
    PyObject *tmp_ass_subvalue_28;
    PyObject *tmp_ass_subvalue_29;
    PyObject *tmp_ass_subvalue_30;
    PyObject *tmp_ass_subvalue_31;
    PyObject *tmp_ass_subvalue_32;
    PyObject *tmp_ass_subvalue_33;
    PyObject *tmp_ass_subvalue_34;
    PyObject *tmp_ass_subvalue_35;
    PyObject *tmp_ass_subvalue_36;
    PyObject *tmp_ass_subvalue_37;
    PyObject *tmp_ass_subvalue_38;
    PyObject *tmp_ass_subvalue_39;
    PyObject *tmp_ass_subvalue_40;
    PyObject *tmp_ass_subvalue_41;
    PyObject *tmp_ass_subvalue_42;
    PyObject *tmp_ass_subvalue_43;
    PyObject *tmp_ass_subvalue_44;
    PyObject *tmp_ass_subvalue_45;
    PyObject *tmp_ass_subvalue_46;
    PyObject *tmp_ass_subvalue_47;
    PyObject *tmp_ass_subvalue_48;
    PyObject *tmp_ass_subvalue_49;
    PyObject *tmp_ass_subvalue_50;
    PyObject *tmp_ass_subvalue_51;
    PyObject *tmp_ass_subvalue_52;
    PyObject *tmp_ass_subvalue_53;
    PyObject *tmp_ass_subvalue_54;
    PyObject *tmp_ass_subvalue_55;
    PyObject *tmp_ass_subvalue_56;
    PyObject *tmp_ass_subvalue_57;
    PyObject *tmp_ass_subvalue_58;
    PyObject *tmp_ass_subvalue_59;
    PyObject *tmp_ass_subvalue_60;
    PyObject *tmp_ass_subvalue_61;
    PyObject *tmp_ass_subvalue_62;
    PyObject *tmp_ass_subvalue_63;
    PyObject *tmp_ass_subvalue_64;
    PyObject *tmp_ass_subvalue_65;
    PyObject *tmp_ass_subvalue_66;
    PyObject *tmp_ass_subvalue_67;
    PyObject *tmp_ass_subvalue_68;
    PyObject *tmp_ass_subvalue_69;
    PyObject *tmp_ass_subvalue_70;
    PyObject *tmp_ass_subvalue_71;
    PyObject *tmp_ass_subvalue_72;
    PyObject *tmp_ass_subvalue_73;
    PyObject *tmp_ass_subvalue_74;
    PyObject *tmp_ass_subvalue_75;
    PyObject *tmp_ass_subvalue_76;
    PyObject *tmp_ass_subvalue_77;
    PyObject *tmp_ass_subvalue_78;
    PyObject *tmp_ass_subvalue_79;
    PyObject *tmp_ass_subvalue_80;
    PyObject *tmp_ass_subvalue_81;
    PyObject *tmp_ass_subvalue_82;
    PyObject *tmp_ass_subvalue_83;
    PyObject *tmp_ass_subvalue_84;
    PyObject *tmp_ass_subvalue_85;
    PyObject *tmp_ass_subvalue_86;
    PyObject *tmp_ass_subvalue_87;
    PyObject *tmp_ass_subvalue_88;
    PyObject *tmp_ass_subvalue_89;
    PyObject *tmp_ass_subvalue_90;
    PyObject *tmp_ass_subvalue_91;
    PyObject *tmp_ass_subvalue_92;
    PyObject *tmp_ass_subvalue_93;
    PyObject *tmp_ass_subvalue_94;
    PyObject *tmp_ass_subvalue_95;
    PyObject *tmp_ass_subvalue_96;
    PyObject *tmp_ass_subvalue_97;
    PyObject *tmp_ass_subvalue_98;
    PyObject *tmp_ass_subvalue_99;
    PyObject *tmp_ass_subvalue_100;
    PyObject *tmp_ass_subvalue_101;
    PyObject *tmp_ass_subvalue_102;
    PyObject *tmp_ass_subvalue_103;
    PyObject *tmp_ass_subvalue_104;
    PyObject *tmp_ass_subvalue_105;
    PyObject *tmp_ass_subvalue_106;
    PyObject *tmp_ass_subvalue_107;
    PyObject *tmp_ass_subvalue_108;
    PyObject *tmp_ass_subvalue_109;
    PyObject *tmp_ass_subvalue_110;
    PyObject *tmp_ass_subvalue_111;
    PyObject *tmp_ass_subvalue_112;
    PyObject *tmp_ass_subvalue_113;
    PyObject *tmp_ass_subvalue_114;
    PyObject *tmp_ass_subvalue_115;
    PyObject *tmp_ass_subvalue_116;
    PyObject *tmp_ass_subvalue_117;
    PyObject *tmp_ass_subvalue_118;
    PyObject *tmp_ass_subvalue_119;
    PyObject *tmp_ass_subvalue_120;
    PyObject *tmp_ass_subvalue_121;
    PyObject *tmp_ass_subvalue_122;
    PyObject *tmp_ass_subvalue_123;
    PyObject *tmp_ass_subvalue_124;
    PyObject *tmp_ass_subvalue_125;
    PyObject *tmp_ass_subvalue_126;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;

    // Module code.
    tmp_assign_source_1 = const_str_digest_20788aa4abe77df756a0b9c2bf914644;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_dae496aa2ee10a0a11d812895fb39bab;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_738bc1a3c9bf9c9383171b7c6dc9a5ce, module_numpy$f2py$cfuncs );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$f2py$cfuncs)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$f2py$cfuncs)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$f2py$cfuncs)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$f2py$cfuncs)->md_dict;
    frame_module->f_lineno = 19;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$f2py$cfuncs)->md_dict;
    frame_module->f_lineno = 20;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_copy, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_copy, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$f2py$cfuncs)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_empty, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain___version___tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain___version__ );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain___version__ );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___version__ );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 23186 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_f2py_version, tmp_assign_source_9 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_stderr );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_write );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_errmess, tmp_assign_source_10 );
    tmp_assign_source_11 = DEEP_COPY( const_dict_844a19a84e79d1182d43c32d69901a3c );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_outneeds, tmp_assign_source_11 );
    tmp_assign_source_12 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs, tmp_assign_source_12 );
    tmp_assign_source_13 = PyDict_Copy( const_dict_dedaec7b17af2aa6922b9e268eb8e62b );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_includes0, tmp_assign_source_13 );
    tmp_assign_source_14 = PyDict_Copy( const_dict_ef8761b9cba820f57cd5a2786a9f7930 );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_includes, tmp_assign_source_14 );
    tmp_assign_source_15 = PyDict_Copy( const_dict_ad0cc476bc3e3e1ab256e4edf7e6d930 );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_userincludes, tmp_assign_source_15 );
    tmp_assign_source_16 = PyDict_Copy( const_dict_a1e6d4a6d196b71de70ef245a55c711a );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs, tmp_assign_source_16 );
    tmp_assign_source_17 = PyDict_Copy( const_dict_e3b7e8e148208997eeb8e041e1f9934d );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs_generated, tmp_assign_source_17 );
    tmp_assign_source_18 = PyDict_Copy( const_dict_57ba82f0b6ddacf861f6606a449c7913 );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros, tmp_assign_source_18 );
    tmp_assign_source_19 = PyDict_Copy( const_dict_c8a8e96575af0b76af8479ec1389c9e3 );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs, tmp_assign_source_19 );
    tmp_assign_source_20 = PyDict_Copy( const_dict_cc6f9c9534893ecefac794ef61729c8b );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_callbacks, tmp_assign_source_20 );
    tmp_assign_source_21 = PyDict_Copy( const_dict_53d1c8857e48a95a7774520cf53a93c4 );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_f90modhooks, tmp_assign_source_21 );
    tmp_assign_source_22 = PyDict_Copy( const_dict_788e82655419d5f1a9ac9e67520346b0 );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_commonhooks, tmp_assign_source_22 );
    tmp_ass_subvalue_1 = const_str_digest_c342bcf69b35d1479323b86b8eefb1a4;
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_includes0 );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_includes0 );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130040 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_digest_890854844f87190b1c6e74a24b3f6e6e;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = const_str_digest_5e386bc666bd91c6bf9fc510e8e839bb;
    tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_includes0 );

    if (unlikely( tmp_ass_subscribed_2 == NULL ))
    {
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_includes0 );
    }

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130040 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_digest_2782d06f338ee345290cef192d05e062;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 53;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_3 = const_str_digest_9d1c66eea591d9926996bdd4cfe52c06;
    tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_includes0 );

    if (unlikely( tmp_ass_subscribed_3 == NULL ))
    {
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_includes0 );
    }

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130040 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_3 = const_str_digest_8f1af3fa58871032e57b3bdcaf89b551;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_4 = const_str_digest_408031f166d376d1494138d81b948520;
    tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_includes );

    if (unlikely( tmp_ass_subscribed_4 == NULL ))
    {
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_includes );
    }

    if ( tmp_ass_subscribed_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130071 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_4 = const_str_digest_7d2bab39577ddf526d1b6996c67632bb;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_5 = LIST_COPY( const_list_str_digest_7d2bab39577ddf526d1b6996c67632bb_list );
    tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_5 == NULL ))
    {
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_5 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_5 = const_str_digest_00712398ca7c9a987043e29bb7424f6c;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    Py_DECREF( tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_6 = const_str_digest_85a3eb17c9e17ed7e31cbefb122f9f34;
    tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_includes );

    if (unlikely( tmp_ass_subscribed_6 == NULL ))
    {
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_includes );
    }

    if ( tmp_ass_subscribed_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130071 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_6 = const_str_digest_00712398ca7c9a987043e29bb7424f6c;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_7 = const_str_digest_c2d6421daf01ea6ae50d672016abe9f2;
    tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_includes );

    if (unlikely( tmp_ass_subscribed_7 == NULL ))
    {
        tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_includes );
    }

    if ( tmp_ass_subscribed_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130071 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_7 = const_str_digest_00712398ca7c9a987043e29bb7424f6c;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_8 = const_str_digest_3dd3068f463e4a73a6f25e60fc2b142d;
    tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_includes );

    if (unlikely( tmp_ass_subscribed_8 == NULL ))
    {
        tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_includes );
    }

    if ( tmp_ass_subscribed_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130071 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_8 = const_str_digest_841f8144160e16b7c03da563289c2bd2;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_9 = const_str_digest_4a982b2ba0ebcbde1146b96b6ca60a9c;
    tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs );

    if (unlikely( tmp_ass_subscribed_9 == NULL ))
    {
        tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typedefs );
    }

    if ( tmp_ass_subscribed_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130128 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_9 = const_str_plain_unsigned_char;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_10 = const_str_digest_105105b69a73a06bfaf38138dd39b197;
    tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs );

    if (unlikely( tmp_ass_subscribed_10 == NULL ))
    {
        tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typedefs );
    }

    if ( tmp_ass_subscribed_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130128 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_10 = const_str_plain_unsigned_short;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_11 = const_str_digest_01fb484d7be945b15a4a4723d827c333;
    tmp_ass_subscribed_11 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs );

    if (unlikely( tmp_ass_subscribed_11 == NULL ))
    {
        tmp_ass_subscribed_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typedefs );
    }

    if ( tmp_ass_subscribed_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130128 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_11 = const_str_plain_unsigned_long;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_12 = const_str_digest_33209d1e5c473de96f14331b495d35bd;
    tmp_ass_subscribed_12 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs );

    if (unlikely( tmp_ass_subscribed_12 == NULL ))
    {
        tmp_ass_subscribed_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typedefs );
    }

    if ( tmp_ass_subscribed_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130128 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_12 = const_str_plain_signed_char;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_13 = const_str_digest_bf45789f1ab41c4a6890de1e3c1beef5;
    tmp_ass_subscribed_13 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs );

    if (unlikely( tmp_ass_subscribed_13 == NULL ))
    {
        tmp_ass_subscribed_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typedefs );
    }

    if ( tmp_ass_subscribed_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130128 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_13 = const_str_plain_long_long;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_14 = const_str_digest_02e4637ff093e54b7313e28f9e0bae78;
    tmp_ass_subscribed_14 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs );

    if (unlikely( tmp_ass_subscribed_14 == NULL ))
    {
        tmp_ass_subscribed_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typedefs );
    }

    if ( tmp_ass_subscribed_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130128 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_14 = const_str_plain_insinged_long_long;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_15 = const_str_digest_6f8c6ff96569a96f90c0868ccec5e004;
    tmp_ass_subscribed_15 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs );

    if (unlikely( tmp_ass_subscribed_15 == NULL ))
    {
        tmp_ass_subscribed_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typedefs );
    }

    if ( tmp_ass_subscribed_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130128 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_15 = const_str_plain_long_double;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_16 = const_str_digest_cf8a57713bc16778077ba316e18a487e;
    tmp_ass_subscribed_16 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs );

    if (unlikely( tmp_ass_subscribed_16 == NULL ))
    {
        tmp_ass_subscribed_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typedefs );
    }

    if ( tmp_ass_subscribed_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130128 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_16 = const_str_plain_complex_long_double;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_17 = const_str_digest_389a86e4dd8f25a614d61c156060fb3d;
    tmp_ass_subscribed_17 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs );

    if (unlikely( tmp_ass_subscribed_17 == NULL ))
    {
        tmp_ass_subscribed_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typedefs );
    }

    if ( tmp_ass_subscribed_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130128 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_17 = const_str_plain_complex_float;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_18 = const_str_digest_962cf63a739d975c45c04813de22ab97;
    tmp_ass_subscribed_18 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs );

    if (unlikely( tmp_ass_subscribed_18 == NULL ))
    {
        tmp_ass_subscribed_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typedefs );
    }

    if ( tmp_ass_subscribed_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130128 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_18 = const_str_plain_complex_double;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_19 = const_str_digest_63b725b1590378a5145bd999c67c8319;
    tmp_ass_subscribed_19 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_typedefs );

    if (unlikely( tmp_ass_subscribed_19 == NULL ))
    {
        tmp_ass_subscribed_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typedefs );
    }

    if ( tmp_ass_subscribed_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130128 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_19 = const_str_plain_string;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_20 = const_str_digest_ee1d82d6478b02d751dde9b11b43791d;
    tmp_ass_subscribed_20 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_20 == NULL ))
    {
        tmp_ass_subscribed_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_20 = const_str_plain_CFUNCSMESS;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_21 = const_str_digest_f57b9e3f10fb25f49a591c29127b6135;
    tmp_ass_subscribed_21 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_21 == NULL ))
    {
        tmp_ass_subscribed_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_21 = const_str_plain_F_FUNC;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 143;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_22 = const_str_digest_497a0b39e47e0ff41272fd17cdca9806;
    tmp_ass_subscribed_22 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_22 == NULL ))
    {
        tmp_ass_subscribed_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_22 = const_str_plain_F_WRAPPEDFUNC;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 179;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_23 = const_str_digest_0e7569460ed669b2903ce0b0da99d670;
    tmp_ass_subscribed_23 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_23 == NULL ))
    {
        tmp_ass_subscribed_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_23 = const_str_plain_F_MODFUNC;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_24 = const_str_digest_7d440d2636f994574162135084027a0d;
    tmp_ass_subscribed_24 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_24 == NULL ))
    {
        tmp_ass_subscribed_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 214;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_24 = const_str_plain_SWAPUNSAFE;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 218;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_25 = const_str_digest_dad78054c8b0af812591e9348ae8be45;
    tmp_ass_subscribed_25 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_25 == NULL ))
    {
        tmp_ass_subscribed_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 219;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_25 = const_str_plain_SWAP;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 225;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_26 = const_str_digest_371f1704af358a0d9b8b8bba00413072;
    tmp_ass_subscribed_26 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_26 == NULL ))
    {
        tmp_ass_subscribed_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 227;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_26 = const_str_plain_PRINTPYOBJERR;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 232;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_27 = const_str_digest_e80583584f6f731716aadcb43efaf5b2;
    tmp_ass_subscribed_27 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_27 == NULL ))
    {
        tmp_ass_subscribed_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_27 = const_str_plain_MINMAX;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_28 = LIST_COPY( const_list_str_plain_f2py_size_list );
    tmp_ass_subscribed_28 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_28 == NULL ))
    {
        tmp_ass_subscribed_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_28 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_28 = const_str_digest_901a22001a0c7f25add446a5f68900d0;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28 );
    Py_DECREF( tmp_ass_subvalue_28 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_29 = const_str_digest_b9ffbec4f0c711b079ed72967cc946a7;
    tmp_ass_subscribed_29 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_29 == NULL ))
    {
        tmp_ass_subscribed_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 248;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_29 = const_str_digest_901a22001a0c7f25add446a5f68900d0;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_30 = LIST_COPY( const_list_str_digest_841f8144160e16b7c03da563289c2bd2_list );
    tmp_ass_subscribed_30 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_30 == NULL ))
    {
        tmp_ass_subscribed_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_30 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_30 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_30 = const_str_plain_f2py_size;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30 );
    Py_DECREF( tmp_ass_subvalue_30 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_31 = const_str_digest_c8434c627f5decd5199bc415a9866adb;
    tmp_ass_subscribed_31 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_31 == NULL ))
    {
        tmp_ass_subscribed_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_31 = const_str_plain_f2py_size;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_32 = const_str_digest_3a23a27d0e08b643649553907708c011;
    tmp_ass_subscribed_32 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_32 == NULL ))
    {
        tmp_ass_subscribed_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 288;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_32 = const_str_plain_pyobj_from_char1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 288;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_33 = const_str_digest_73e1e214d989fa7c6be358b1d7373093;
    tmp_ass_subscribed_33 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_33 == NULL ))
    {
        tmp_ass_subscribed_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 289;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_33 = const_str_plain_pyobj_from_short1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 289;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_34 = LIST_COPY( const_list_str_plain_signed_char_list );
    tmp_ass_subscribed_34 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_34 == NULL ))
    {
        tmp_ass_subscribed_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_34 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_34 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_34 = const_str_plain_pyobj_from_int1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34 );
    Py_DECREF( tmp_ass_subvalue_34 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_35 = const_str_digest_59e1425961acc3db662b5276975ba5c3;
    tmp_ass_subscribed_35 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_35 == NULL ))
    {
        tmp_ass_subscribed_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_35 = const_str_plain_pyobj_from_int1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_36 = const_str_digest_adcd7034250adb10f428e296b32ea74d;
    tmp_ass_subscribed_36 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_36 == NULL ))
    {
        tmp_ass_subscribed_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_36 = const_str_plain_pyobj_from_long1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_37 = LIST_COPY( const_list_str_plain_long_long_list );
    tmp_ass_subscribed_37 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_37 == NULL ))
    {
        tmp_ass_subscribed_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_37 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_37 = const_str_plain_pyobj_from_long_long1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37 );
    Py_DECREF( tmp_ass_subvalue_37 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_38 = const_str_digest_b352efd96c887b65d4365dc8e866a3ca;
    tmp_ass_subscribed_38 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_38 == NULL ))
    {
        tmp_ass_subscribed_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 294;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_38 = const_str_plain_pyobj_from_long_long1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_39 = LIST_COPY( const_list_str_plain_long_double_list );
    tmp_ass_subscribed_39 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_39 == NULL ))
    {
        tmp_ass_subscribed_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_39 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_39 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_39 = const_str_plain_pyobj_from_long_double1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39 );
    Py_DECREF( tmp_ass_subvalue_39 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_40 = const_str_digest_999ab6410e5a94eb500c138eaa52e416;
    tmp_ass_subscribed_40 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_40 == NULL ))
    {
        tmp_ass_subscribed_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_40 = const_str_plain_pyobj_from_long_double1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_41 = const_str_digest_f69957725a097974a85c057a0ef00c8c;
    tmp_ass_subscribed_41 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_41 == NULL ))
    {
        tmp_ass_subscribed_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_41 = const_str_plain_pyobj_from_double1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 304;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_42 = const_str_digest_5d11cf2593e7151b8b357f4f3e67c2a7;
    tmp_ass_subscribed_42 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_42 == NULL ))
    {
        tmp_ass_subscribed_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_42 = const_str_plain_pyobj_from_float1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 305;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_43 = LIST_COPY( const_list_str_plain_complex_long_double_list );
    tmp_ass_subscribed_43 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_43 == NULL ))
    {
        tmp_ass_subscribed_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_43 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_43 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_43 = const_str_plain_pyobj_from_complex_long_double1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43 );
    Py_DECREF( tmp_ass_subvalue_43 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_44 = const_str_digest_26da45d08bf95d68b3ccb6b08c28930c;
    tmp_ass_subscribed_44 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_44 == NULL ))
    {
        tmp_ass_subscribed_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 307;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_44 = const_str_plain_pyobj_from_complex_long_double1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_45 = LIST_COPY( const_list_str_plain_complex_double_list );
    tmp_ass_subscribed_45 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_45 == NULL ))
    {
        tmp_ass_subscribed_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_45 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_45 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_45 = const_str_plain_pyobj_from_complex_double1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45 );
    Py_DECREF( tmp_ass_subvalue_45 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_46 = const_str_digest_3e8a5dd8d20d7153bc232af6c9324c58;
    tmp_ass_subscribed_46 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_46 == NULL ))
    {
        tmp_ass_subscribed_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_46 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 309;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_46 = const_str_plain_pyobj_from_complex_double1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_47 = LIST_COPY( const_list_str_plain_complex_float_list );
    tmp_ass_subscribed_47 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_47 == NULL ))
    {
        tmp_ass_subscribed_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_47 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_47 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 310;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_47 = const_str_plain_pyobj_from_complex_float1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47 );
    Py_DECREF( tmp_ass_subvalue_47 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_48 = const_str_digest_f09797a78f374acb32df435a705e717e;
    tmp_ass_subscribed_48 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_48 == NULL ))
    {
        tmp_ass_subscribed_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_48 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_48 = const_str_plain_pyobj_from_complex_float1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_49 = LIST_COPY( const_list_str_plain_string_list );
    tmp_ass_subscribed_49 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_49 == NULL ))
    {
        tmp_ass_subscribed_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_49 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_49 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 312;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_49 = const_str_plain_pyobj_from_string1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49 );
    Py_DECREF( tmp_ass_subvalue_49 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_50 = const_str_digest_910789c03671f971f7793e4d386e63ff;
    tmp_ass_subscribed_50 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_50 == NULL ))
    {
        tmp_ass_subscribed_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_50 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 313;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_50 = const_str_plain_pyobj_from_string1;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 313;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_51 = LIST_COPY( const_list_str_plain_string_list );
    tmp_ass_subscribed_51 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_51 == NULL ))
    {
        tmp_ass_subscribed_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_51 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_51 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 314;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_51 = const_str_plain_pyobj_from_string1size;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51 );
    Py_DECREF( tmp_ass_subvalue_51 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_52 = const_str_digest_0697b205fd19a3ba344d22b1d1209f14;
    tmp_ass_subscribed_52 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_52 == NULL ))
    {
        tmp_ass_subscribed_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_52 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 315;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_52 = const_str_plain_pyobj_from_string1size;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 315;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_53 = LIST_COPY( const_list_str_plain_PRINTPYOBJERR_list );
    tmp_ass_subscribed_53 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_53 == NULL ))
    {
        tmp_ass_subscribed_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_53 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_53 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 316;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_53 = const_str_plain_TRYPYARRAYTEMPLATE;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_53, tmp_ass_subscript_53, tmp_ass_subvalue_53 );
    Py_DECREF( tmp_ass_subvalue_53 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 316;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_54 = const_str_digest_b60fe1a5484cbe81401785b1ecb3e13b;
    tmp_ass_subscribed_54 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_54 == NULL ))
    {
        tmp_ass_subscribed_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_54 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 317;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_54 = const_str_plain_TRYPYARRAYTEMPLATE;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_54, tmp_ass_subscript_54, tmp_ass_subvalue_54 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_55 = LIST_COPY( const_list_str_plain_PRINTPYOBJERR_list );
    tmp_ass_subscribed_55 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_55 == NULL ))
    {
        tmp_ass_subscribed_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_55 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_55 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 353;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_55 = const_str_plain_TRYCOMPLEXPYARRAYTEMPLATE;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_55, tmp_ass_subscript_55, tmp_ass_subvalue_55 );
    Py_DECREF( tmp_ass_subvalue_55 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 353;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_56 = const_str_digest_3740e02b798978c5b9f7afde4debf573;
    tmp_ass_subscribed_56 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_56 == NULL ))
    {
        tmp_ass_subscribed_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_56 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_56 = const_str_plain_TRYCOMPLEXPYARRAYTEMPLATE;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_56, tmp_ass_subscript_56, tmp_ass_subvalue_56 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 388;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_57 = LIST_COPY( const_list_str_plain_STRINGCOPYN_str_plain_PRINTPYOBJERR_list );
    tmp_ass_subscribed_57 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_57 == NULL ))
    {
        tmp_ass_subscribed_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_57 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 422;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_57 = const_str_plain_GETSTRFROMPYTUPLE;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_57, tmp_ass_subscript_57, tmp_ass_subvalue_57 );
    Py_DECREF( tmp_ass_subvalue_57 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_58 = const_str_digest_d5886e2ecd61457f24163eaa5d3b9a82;
    tmp_ass_subscribed_58 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_58 == NULL ))
    {
        tmp_ass_subscribed_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_58 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 423;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_58 = const_str_plain_GETSTRFROMPYTUPLE;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_58, tmp_ass_subscript_58, tmp_ass_subvalue_58 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 437;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_59 = const_str_digest_437415b6722a87a93187a0d293046f21;
    tmp_ass_subscribed_59 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_59 == NULL ))
    {
        tmp_ass_subscribed_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_59 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 438;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_59 = const_str_plain_GETSCALARFROMPYTUPLE;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_59, tmp_ass_subscript_59, tmp_ass_subvalue_59 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 444;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_60 = const_str_digest_5316b30a30d3d98a2c8f76f7384edfff;
    tmp_ass_subscribed_60 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_60 == NULL ))
    {
        tmp_ass_subscribed_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_60 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 446;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_60 = const_str_plain_FAILNULL;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_60, tmp_ass_subscript_60, tmp_ass_subvalue_60 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 453;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_61 = LIST_COPY( const_list_0a4c09bf7ee8113173dbb8914c21d9bf_list );
    tmp_ass_subscribed_61 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_61 == NULL ))
    {
        tmp_ass_subscribed_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_61 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_61 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 454;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_61 = const_str_plain_MEMCOPY;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_61, tmp_ass_subscript_61, tmp_ass_subvalue_61 );
    Py_DECREF( tmp_ass_subvalue_61 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 454;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_62 = const_str_digest_fb63144b48d581c350f194b5453ab98c;
    tmp_ass_subscribed_62 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_62 == NULL ))
    {
        tmp_ass_subscribed_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_62 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 455;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_62 = const_str_plain_MEMCOPY;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_62, tmp_ass_subscript_62, tmp_ass_subvalue_62 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 458;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_63 = const_str_digest_63d4ee2039ee50869d8ca78baafa71a0;
    tmp_ass_subscribed_63 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_63 == NULL ))
    {
        tmp_ass_subscribed_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_63 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 459;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_63 = const_str_plain_STRINGMALLOC;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_63, tmp_ass_subscript_63, tmp_ass_subvalue_63 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 467;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_64 = const_str_digest_79304a53d92b30c74f5d06905f59ad45;
    tmp_ass_subscribed_64 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_64 == NULL ))
    {
        tmp_ass_subscribed_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_64 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 468;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_64 = const_str_plain_STRINGFREE;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_64, tmp_ass_subscript_64, tmp_ass_subvalue_64 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 470;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_65 = LIST_COPY( const_list_0a4c09bf7ee8113173dbb8914c21d9bf_list );
    tmp_ass_subscribed_65 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_65 == NULL ))
    {
        tmp_ass_subscribed_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_65 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_65 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 471;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_65 = const_str_plain_STRINGCOPYN;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_65, tmp_ass_subscript_65, tmp_ass_subvalue_65 );
    Py_DECREF( tmp_ass_subvalue_65 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 471;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_66 = const_str_digest_c726556b2592895f5e93aedb7815794b;
    tmp_ass_subscribed_66 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_66 == NULL ))
    {
        tmp_ass_subscribed_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_66 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 472;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_66 = const_str_plain_STRINGCOPYN;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_66, tmp_ass_subscript_66, tmp_ass_subvalue_66 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 486;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_67 = LIST_COPY( const_list_0a4c09bf7ee8113173dbb8914c21d9bf_list );
    tmp_ass_subscribed_67 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_67 == NULL ))
    {
        tmp_ass_subscribed_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_67 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_67 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 487;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_67 = const_str_plain_STRINGCOPY;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_67, tmp_ass_subscript_67, tmp_ass_subvalue_67 );
    Py_DECREF( tmp_ass_subvalue_67 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 487;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_68 = const_str_digest_8c7cecd620dcdc6d1eeb04a22b1591e7;
    tmp_ass_subscribed_68 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_68 == NULL ))
    {
        tmp_ass_subscribed_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_68 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 488;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_68 = const_str_plain_STRINGCOPY;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_68, tmp_ass_subscript_68, tmp_ass_subvalue_68 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 491;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_69 = const_str_digest_9eaf72a6358f3976ba36284be8dc1083;
    tmp_ass_subscribed_69 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_69 == NULL ))
    {
        tmp_ass_subscribed_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_69 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 492;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_69 = const_str_plain_CHECKGENERIC;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_69, tmp_ass_subscript_69, tmp_ass_subvalue_69 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 497;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_70 = const_str_digest_9ce2e4a686916bec0097fa5b8d4f314b;
    tmp_ass_subscribed_70 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_70 == NULL ))
    {
        tmp_ass_subscribed_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_70 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 498;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_70 = const_str_plain_CHECKARRAY;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_70, tmp_ass_subscript_70, tmp_ass_subvalue_70 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 503;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_71 = const_str_digest_0a3cd72f21792255256e8cc572d73a1e;
    tmp_ass_subscribed_71 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_71 == NULL ))
    {
        tmp_ass_subscribed_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_71 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 504;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_71 = const_str_plain_CHECKSTRING;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_71, tmp_ass_subscript_71, tmp_ass_subvalue_71 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 511;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_72 = const_str_digest_7405eae7c50c570661f79246f76abb4a;
    tmp_ass_subscribed_72 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_72 == NULL ))
    {
        tmp_ass_subscribed_72 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_72 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 512;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_72 = const_str_plain_CHECKSCALAR;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_72, tmp_ass_subscript_72, tmp_ass_subvalue_72 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 519;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_73 = const_str_digest_822ef11ec1e826341ff158bd63191686;
    tmp_ass_subscribed_73 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_73 == NULL ))
    {
        tmp_ass_subscribed_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_73 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 528;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_73 = const_str_plain_ARRSIZE;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_73, tmp_ass_subscript_73, tmp_ass_subvalue_73 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 528;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_74 = const_str_digest_05c18e6db4f33637f2f8e357d7f29e61;
    tmp_ass_subscribed_74 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cppmacros );

    if (unlikely( tmp_ass_subscribed_74 == NULL ))
    {
        tmp_ass_subscribed_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cppmacros );
    }

    if ( tmp_ass_subscribed_74 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130158 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 529;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_74 = const_str_plain_OLDPYNUM;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_74, tmp_ass_subscript_74, tmp_ass_subvalue_74 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 533;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_75 = const_str_digest_79e58cdd6dcc0c4c234fe426749ea8d1;
    tmp_ass_subscribed_75 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_75 == NULL ))
    {
        tmp_ass_subscribed_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_75 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 536;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_75 = const_str_plain_calcarrindex;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_75, tmp_ass_subscript_75, tmp_ass_subvalue_75 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 542;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_76 = const_str_digest_f003b28ea57a5eba82b149c7847b1c4f;
    tmp_ass_subscribed_76 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_76 == NULL ))
    {
        tmp_ass_subscribed_76 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_76 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 543;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_76 = const_str_plain_calcarrindextr;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_76, tmp_ass_subscript_76, tmp_ass_subvalue_76 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 549;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_77 = const_str_digest_097d0d5326ef098f1f6c2fd9bd711de5;
    tmp_ass_subscribed_77 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_77 == NULL ))
    {
        tmp_ass_subscribed_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_77 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 550;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_77 = const_str_plain_forcomb;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_77, tmp_ass_subscript_77, tmp_ass_subvalue_77 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 589;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_78 = LIST_COPY( const_list_664391f1bb0e8dbdf55326ab3be48ab9_list );
    tmp_ass_subscribed_78 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_78 == NULL ))
    {
        tmp_ass_subscribed_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_78 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_78 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 590;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_78 = const_str_plain_try_pyarr_from_string;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_78, tmp_ass_subscript_78, tmp_ass_subvalue_78 );
    Py_DECREF( tmp_ass_subvalue_78 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 590;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_79 = const_str_digest_c19bdd2a30e7b66fd0173af911d79923;
    tmp_ass_subscribed_79 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_79 == NULL ))
    {
        tmp_ass_subscribed_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_79 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 591;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_79 = const_str_plain_try_pyarr_from_string;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_79, tmp_ass_subscript_79, tmp_ass_subvalue_79 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 602;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_80 = LIST_COPY( const_list_78fac9844f706e31eebc87a96b711791_list );
    tmp_ass_subscribed_80 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_80 == NULL ))
    {
        tmp_ass_subscribed_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_80 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_80 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 603;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_80 = const_str_plain_string_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_80, tmp_ass_subscript_80, tmp_ass_subvalue_80 );
    Py_DECREF( tmp_ass_subvalue_80 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 603;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_81 = const_str_digest_78b6090cc491d48eb9e6e9ed6da5d7c7;
    tmp_ass_subscribed_81 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_81 == NULL ))
    {
        tmp_ass_subscribed_81 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_81 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 604;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_81 = const_str_plain_string_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_81, tmp_ass_subscript_81, tmp_ass_subvalue_81 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 671;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_82 = LIST_COPY( const_list_str_plain_int_from_pyobj_list );
    tmp_ass_subscribed_82 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_82 == NULL ))
    {
        tmp_ass_subscribed_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_82 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_82 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 672;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_82 = const_str_plain_char_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_82, tmp_ass_subscript_82, tmp_ass_subvalue_82 );
    Py_DECREF( tmp_ass_subvalue_82 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 672;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_83 = const_str_digest_5b9840bfac2805c944b31db7014f418a;
    tmp_ass_subscribed_83 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_83 == NULL ))
    {
        tmp_ass_subscribed_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_83 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 673;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_83 = const_str_plain_char_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_83, tmp_ass_subscript_83, tmp_ass_subvalue_83 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 682;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_84 = LIST_COPY( const_list_str_plain_int_from_pyobj_str_plain_signed_char_list );
    tmp_ass_subscribed_84 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_84 == NULL ))
    {
        tmp_ass_subscribed_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_84 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_84 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 683;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_84 = const_str_plain_signed_char_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_84, tmp_ass_subscript_84, tmp_ass_subvalue_84 );
    Py_DECREF( tmp_ass_subvalue_84 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 683;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_85 = const_str_digest_173093001f5d2a6f237caf3a485a6858;
    tmp_ass_subscribed_85 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_85 == NULL ))
    {
        tmp_ass_subscribed_85 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_85 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 684;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_85 = const_str_plain_signed_char_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_85, tmp_ass_subscript_85, tmp_ass_subvalue_85 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 693;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_86 = LIST_COPY( const_list_str_plain_int_from_pyobj_list );
    tmp_ass_subscribed_86 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_86 == NULL ))
    {
        tmp_ass_subscribed_86 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_86 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_86 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 694;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_86 = const_str_plain_short_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_86, tmp_ass_subscript_86, tmp_ass_subvalue_86 );
    Py_DECREF( tmp_ass_subvalue_86 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 694;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_87 = const_str_digest_fde589cd4015f9322a88ed1d8c64ea8c;
    tmp_ass_subscribed_87 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_87 == NULL ))
    {
        tmp_ass_subscribed_87 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_87 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 695;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_87 = const_str_plain_short_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_87, tmp_ass_subscript_87, tmp_ass_subvalue_87 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 704;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_88 = const_str_digest_51c5006076994acf62a7003bd16396d9;
    tmp_ass_subscribed_88 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_88 == NULL ))
    {
        tmp_ass_subscribed_88 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_88 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 705;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_88 = const_str_plain_int_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_88, tmp_ass_subscript_88, tmp_ass_subvalue_88 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 736;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_89 = const_str_digest_c22461622fee22c75dbb860cd5ace6d2;
    tmp_ass_subscribed_89 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_89 == NULL ))
    {
        tmp_ass_subscribed_89 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_89 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 737;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_89 = const_str_plain_long_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_89, tmp_ass_subscript_89, tmp_ass_subvalue_89 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 768;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_90 = LIST_COPY( const_list_str_plain_long_long_list );
    tmp_ass_subscribed_90 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_90 == NULL ))
    {
        tmp_ass_subscribed_90 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_90 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_90 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 769;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_90 = const_str_plain_long_long_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_90, tmp_ass_subscript_90, tmp_ass_subvalue_90 );
    Py_DECREF( tmp_ass_subvalue_90 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 769;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_91 = const_str_digest_f0a2fcd603834fad2b84e734164ea722;
    tmp_ass_subscribed_91 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_91 == NULL ))
    {
        tmp_ass_subscribed_91 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_91 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 770;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_91 = const_str_plain_long_long_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_91, tmp_ass_subscript_91, tmp_ass_subvalue_91 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 805;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_92 = LIST_COPY( const_list_str_plain_double_from_pyobj_str_plain_long_double_list );
    tmp_ass_subscribed_92 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_92 == NULL ))
    {
        tmp_ass_subscribed_92 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_92 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_92 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 806;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_92 = const_str_plain_long_double_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_92, tmp_ass_subscript_92, tmp_ass_subvalue_92 );
    Py_DECREF( tmp_ass_subvalue_92 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 806;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_93 = const_str_digest_ca5812a794c90143c26d1885325762a4;
    tmp_ass_subscribed_93 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_93 == NULL ))
    {
        tmp_ass_subscribed_93 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_93 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 807;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_93 = const_str_plain_long_double_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_93, tmp_ass_subscript_93, tmp_ass_subvalue_93 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 826;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_94 = const_str_digest_b84b54236f330e123c83bba162e8bedd;
    tmp_ass_subscribed_94 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_94 == NULL ))
    {
        tmp_ass_subscribed_94 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_94 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 827;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_94 = const_str_plain_double_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_94, tmp_ass_subscript_94, tmp_ass_subvalue_94 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 866;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_95 = LIST_COPY( const_list_str_plain_double_from_pyobj_list );
    tmp_ass_subscribed_95 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_95 == NULL ))
    {
        tmp_ass_subscribed_95 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_95 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_95 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 867;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_95 = const_str_plain_float_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_95, tmp_ass_subscript_95, tmp_ass_subvalue_95 );
    Py_DECREF( tmp_ass_subvalue_95 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 867;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_96 = const_str_digest_90e5a4bf1414cb157f8e196235139fad;
    tmp_ass_subscribed_96 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_96 == NULL ))
    {
        tmp_ass_subscribed_96 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_96 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 868;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_96 = const_str_plain_float_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_96, tmp_ass_subscript_96, tmp_ass_subvalue_96 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 877;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_97 = LIST_COPY( const_list_56aca13099c085ba8f85f1374ee25ce7_list );
    tmp_ass_subscribed_97 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_97 == NULL ))
    {
        tmp_ass_subscribed_97 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_97 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_97 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 878;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_97 = const_str_plain_complex_long_double_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_97, tmp_ass_subscript_97, tmp_ass_subvalue_97 );
    Py_DECREF( tmp_ass_subvalue_97 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 879;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_98 = const_str_digest_ff6713004d85b1c2c1b200852aaf0b48;
    tmp_ass_subscribed_98 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_98 == NULL ))
    {
        tmp_ass_subscribed_98 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_98 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 880;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_98 = const_str_plain_complex_long_double_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_98, tmp_ass_subscript_98, tmp_ass_subvalue_98 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 901;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_99 = LIST_COPY( const_list_str_plain_complex_double_list );
    tmp_ass_subscribed_99 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_99 == NULL ))
    {
        tmp_ass_subscribed_99 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_99 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_99 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 902;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_99 = const_str_plain_complex_double_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_99, tmp_ass_subscript_99, tmp_ass_subvalue_99 );
    Py_DECREF( tmp_ass_subvalue_99 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 902;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_100 = const_str_digest_43d9cc2265fd996729bf1e6d91e79315;
    tmp_ass_subscribed_100 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_100 == NULL ))
    {
        tmp_ass_subscribed_100 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_100 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 903;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_100 = const_str_plain_complex_double_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_100, tmp_ass_subscript_100, tmp_ass_subvalue_100 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 978;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_101 = LIST_COPY( const_list_str_plain_complex_float_str_plain_complex_double_from_pyobj_list );
    tmp_ass_subscribed_101 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_101 == NULL ))
    {
        tmp_ass_subscribed_101 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_101 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_101 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 979;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_101 = const_str_plain_complex_float_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_101, tmp_ass_subscript_101, tmp_ass_subvalue_101 );
    Py_DECREF( tmp_ass_subvalue_101 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 979;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_102 = const_str_digest_b22d6b4bca9ee819d9d549fda1b30ea0;
    tmp_ass_subscribed_102 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_102 == NULL ))
    {
        tmp_ass_subscribed_102 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_102 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 980;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_102 = const_str_plain_complex_float_from_pyobj;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_102, tmp_ass_subscript_102, tmp_ass_subvalue_102 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 990;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_103 = LIST_COPY( const_list_str_plain_pyobj_from_char1_str_plain_TRYPYARRAYTEMPLATE_list );
    tmp_ass_subscribed_103 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_103 == NULL ))
    {
        tmp_ass_subscribed_103 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_103 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_103 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 991;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_103 = const_str_plain_try_pyarr_from_char;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_103, tmp_ass_subscript_103, tmp_ass_subvalue_103 );
    Py_DECREF( tmp_ass_subvalue_103 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 991;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_104 = const_str_digest_a98a2a02ed2c372a11a799cca65f34b1;
    tmp_ass_subscribed_104 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_104 == NULL ))
    {
        tmp_ass_subscribed_104 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_104 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 992;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_104 = const_str_plain_try_pyarr_from_char;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_104, tmp_ass_subscript_104, tmp_ass_subvalue_104 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 992;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_105 = LIST_COPY( const_list_str_plain_TRYPYARRAYTEMPLATE_str_plain_unsigned_char_list );
    tmp_ass_subscribed_105 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_105 == NULL ))
    {
        tmp_ass_subscribed_105 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_105 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_105 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 993;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_105 = const_str_plain_try_pyarr_from_signed_char;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_105, tmp_ass_subscript_105, tmp_ass_subvalue_105 );
    Py_DECREF( tmp_ass_subvalue_105 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 993;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_106 = const_str_digest_42802a34520023df26a453e8f167f3fc;
    tmp_ass_subscribed_106 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_106 == NULL ))
    {
        tmp_ass_subscribed_106 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_106 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 994;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_106 = const_str_plain_try_pyarr_from_unsigned_char;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_106, tmp_ass_subscript_106, tmp_ass_subvalue_106 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 994;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_107 = LIST_COPY( const_list_str_plain_TRYPYARRAYTEMPLATE_str_plain_signed_char_list );
    tmp_ass_subscribed_107 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_107 == NULL ))
    {
        tmp_ass_subscribed_107 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_107 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_107 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 995;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_107 = const_str_plain_try_pyarr_from_signed_char;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_107, tmp_ass_subscript_107, tmp_ass_subvalue_107 );
    Py_DECREF( tmp_ass_subvalue_107 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 995;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_108 = const_str_digest_6db35613500c1a870117eb76e033ee86;
    tmp_ass_subscribed_108 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_108 == NULL ))
    {
        tmp_ass_subscribed_108 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_108 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 996;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_108 = const_str_plain_try_pyarr_from_signed_char;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_108, tmp_ass_subscript_108, tmp_ass_subvalue_108 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 996;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_109 = LIST_COPY( const_list_str_plain_pyobj_from_short1_str_plain_TRYPYARRAYTEMPLATE_list );
    tmp_ass_subscribed_109 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_109 == NULL ))
    {
        tmp_ass_subscribed_109 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_109 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_109 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 997;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_109 = const_str_plain_try_pyarr_from_short;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_109, tmp_ass_subscript_109, tmp_ass_subvalue_109 );
    Py_DECREF( tmp_ass_subvalue_109 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 997;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_110 = const_str_digest_9cc60f70f7890b3ee11152a8d168e91a;
    tmp_ass_subscribed_110 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_110 == NULL ))
    {
        tmp_ass_subscribed_110 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_110 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 998;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_110 = const_str_plain_try_pyarr_from_short;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_110, tmp_ass_subscript_110, tmp_ass_subvalue_110 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 998;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_111 = LIST_COPY( const_list_str_plain_pyobj_from_int1_str_plain_TRYPYARRAYTEMPLATE_list );
    tmp_ass_subscribed_111 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_111 == NULL ))
    {
        tmp_ass_subscribed_111 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_111 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_111 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 999;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_111 = const_str_plain_try_pyarr_from_int;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_111, tmp_ass_subscript_111, tmp_ass_subvalue_111 );
    Py_DECREF( tmp_ass_subvalue_111 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 999;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_112 = const_str_digest_047b582fe49061e77b60d07ec23fc723;
    tmp_ass_subscribed_112 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_112 == NULL ))
    {
        tmp_ass_subscribed_112 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_112 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1000;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_112 = const_str_plain_try_pyarr_from_int;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_112, tmp_ass_subscript_112, tmp_ass_subvalue_112 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1000;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_113 = LIST_COPY( const_list_str_plain_pyobj_from_long1_str_plain_TRYPYARRAYTEMPLATE_list );
    tmp_ass_subscribed_113 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_113 == NULL ))
    {
        tmp_ass_subscribed_113 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_113 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_113 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1001;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_113 = const_str_plain_try_pyarr_from_long;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_113, tmp_ass_subscript_113, tmp_ass_subvalue_113 );
    Py_DECREF( tmp_ass_subvalue_113 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1001;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_114 = const_str_digest_6ce6a5a60e659edf81e1f085f58f3663;
    tmp_ass_subscribed_114 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_114 == NULL ))
    {
        tmp_ass_subscribed_114 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_114 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1002;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_114 = const_str_plain_try_pyarr_from_long;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_114, tmp_ass_subscript_114, tmp_ass_subvalue_114 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1002;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_115 = LIST_COPY( const_list_55167523f6d3e56dad43daa87c13f5b4_list );
    tmp_ass_subscribed_115 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_115 == NULL ))
    {
        tmp_ass_subscribed_115 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_115 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_115 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1003;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_115 = const_str_plain_try_pyarr_from_long_long;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_115, tmp_ass_subscript_115, tmp_ass_subvalue_115 );
    Py_DECREF( tmp_ass_subvalue_115 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1003;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_116 = const_str_digest_533fc6dc69244a4be2acda88157e5dab;
    tmp_ass_subscribed_116 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_116 == NULL ))
    {
        tmp_ass_subscribed_116 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_116 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1004;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_116 = const_str_plain_try_pyarr_from_long_long;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_116, tmp_ass_subscript_116, tmp_ass_subvalue_116 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1004;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_117 = LIST_COPY( const_list_str_plain_pyobj_from_float1_str_plain_TRYPYARRAYTEMPLATE_list );
    tmp_ass_subscribed_117 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_117 == NULL ))
    {
        tmp_ass_subscribed_117 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_117 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_117 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1005;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_117 = const_str_plain_try_pyarr_from_float;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_117, tmp_ass_subscript_117, tmp_ass_subvalue_117 );
    Py_DECREF( tmp_ass_subvalue_117 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1005;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_118 = const_str_digest_5cc47f09a6119059a4deb1b21f5ead45;
    tmp_ass_subscribed_118 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_118 == NULL ))
    {
        tmp_ass_subscribed_118 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_118 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1006;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_118 = const_str_plain_try_pyarr_from_float;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_118, tmp_ass_subscript_118, tmp_ass_subvalue_118 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1006;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_119 = LIST_COPY( const_list_str_plain_pyobj_from_double1_str_plain_TRYPYARRAYTEMPLATE_list );
    tmp_ass_subscribed_119 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_119 == NULL ))
    {
        tmp_ass_subscribed_119 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_119 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_119 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1007;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_119 = const_str_plain_try_pyarr_from_double;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_119, tmp_ass_subscript_119, tmp_ass_subvalue_119 );
    Py_DECREF( tmp_ass_subvalue_119 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1007;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_120 = const_str_digest_f589bf744fd35201955f6365656908e4;
    tmp_ass_subscribed_120 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_120 == NULL ))
    {
        tmp_ass_subscribed_120 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_120 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1008;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_120 = const_str_plain_try_pyarr_from_double;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_120, tmp_ass_subscript_120, tmp_ass_subvalue_120 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1008;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_121 = LIST_COPY( const_list_54890ded9c275bbdc4b740fb0c5a02c8_list );
    tmp_ass_subscribed_121 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_121 == NULL ))
    {
        tmp_ass_subscribed_121 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_121 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_121 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1009;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_121 = const_str_plain_try_pyarr_from_complex_float;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_121, tmp_ass_subscript_121, tmp_ass_subvalue_121 );
    Py_DECREF( tmp_ass_subvalue_121 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1009;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_122 = const_str_digest_e9c79288e2bfdc2ac86fa402fb80fedd;
    tmp_ass_subscribed_122 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_122 == NULL ))
    {
        tmp_ass_subscribed_122 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_122 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1010;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_122 = const_str_plain_try_pyarr_from_complex_float;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_122, tmp_ass_subscript_122, tmp_ass_subvalue_122 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1010;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_123 = LIST_COPY( const_list_e182b2a897bd6090b70e2001220ac7c4_list );
    tmp_ass_subscribed_123 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_123 == NULL ))
    {
        tmp_ass_subscribed_123 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_123 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_123 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1011;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_123 = const_str_plain_try_pyarr_from_complex_double;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_123, tmp_ass_subscript_123, tmp_ass_subvalue_123 );
    Py_DECREF( tmp_ass_subvalue_123 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1011;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_124 = const_str_digest_44016f51283a958497b9fe35a8ca01b1;
    tmp_ass_subscribed_124 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_124 == NULL ))
    {
        tmp_ass_subscribed_124 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_124 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1012;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_124 = const_str_plain_try_pyarr_from_complex_double;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_124, tmp_ass_subscript_124, tmp_ass_subvalue_124 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1012;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_125 = LIST_COPY( const_list_aa65bd07eac04087b2c26adc1bc7819c_list );
    tmp_ass_subscribed_125 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_needs );

    if (unlikely( tmp_ass_subscribed_125 == NULL ))
    {
        tmp_ass_subscribed_125 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_needs );
    }

    if ( tmp_ass_subscribed_125 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_125 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130101 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1014;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_125 = const_str_plain_create_cb_arglist;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_125, tmp_ass_subscript_125, tmp_ass_subvalue_125 );
    Py_DECREF( tmp_ass_subvalue_125 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1014;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_126 = const_str_digest_abd52d758e14f00949f899a22094fbdd;
    tmp_ass_subscribed_126 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_ass_subscribed_126 == NULL ))
    {
        tmp_ass_subscribed_126 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_ass_subscribed_126 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127066 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 1015;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_126 = const_str_plain_create_cb_arglist;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_126, tmp_ass_subscript_126, tmp_ass_subvalue_126 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1116;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = MAKE_FUNCTION_function_1_buildcfuncs_of_module_numpy$f2py$cfuncs(  );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_23 );

        frame_module->f_lineno = 1118;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_buildcfuncs, tmp_assign_source_23 );
    tmp_defaults_1 = const_tuple_int_pos_1_tuple;
    tmp_assign_source_24 = MAKE_FUNCTION_function_2_append_needs_of_module_numpy$f2py$cfuncs( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        frame_module->f_lineno = 1130;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_append_needs, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_function_3_get_needs_of_module_numpy$f2py$cfuncs(  );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_25 );

        frame_module->f_lineno = 1193;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cfuncs, (Nuitka_StringObject *)const_str_plain_get_needs, tmp_assign_source_25 );

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

    return MOD_RETURN_VALUE( module_numpy$f2py$cfuncs );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
