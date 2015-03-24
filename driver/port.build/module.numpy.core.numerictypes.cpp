// Generated code for Python source for module 'numpy.core.numerictypes'
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

// The _module_numpy$core$numerictypes is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$core$numerictypes;
PyDictObject *moduledict_numpy$core$numerictypes;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_12;
extern PyObject *const_int_pos_16;
extern PyObject *const_int_pos_32;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_chr_63;
extern PyObject *const_int_pos_256;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_O;
extern PyObject *const_str_plain_P;
extern PyObject *const_str_plain_S;
extern PyObject *const_str_plain_U;
extern PyObject *const_str_plain_V;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_g;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_Mm;
extern PyObject *const_str_plain__m;
extern PyObject *const_str_plain_ch;
extern PyObject *const_str_plain_sz;
extern PyObject *const_str_plain_ui;
extern PyObject *const_str_plain_All;
static PyObject *const_str_plain_FDG;
static PyObject *const_str_plain_INT;
static PyObject *const_str_plain__gi;
extern PyObject *const_str_plain_bit;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_len;
static PyObject *const_str_plain_mro;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_rep;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_tup;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_BYTE;
extern PyObject *const_str_plain_LONG;
static PyObject *const_str_plain__lst;
extern PyObject *const_str_plain_arg1;
extern PyObject *const_str_plain_arg2;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_bits;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_cast;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_dict;
static PyObject *const_str_plain_efdg;
extern PyObject *const_str_plain_indx;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_int_;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_kind;
extern PyObject *const_str_plain_long;
static PyObject *const_str_plain_maxa;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_str_;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_uint;
static PyObject *const_str_plain_uval;
extern PyObject *const_str_plain_void;
extern PyObject *const_str_plain_Float;
static PyObject *const_str_plain_SHORT;
extern PyObject *const_str_plain_alias;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_bool_;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_ctype;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain_items;
static PyObject *const_str_plain_maxsc;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_types;
static PyObject *const_str_plain_ulong;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_plain_BHILQP;
static PyObject *const_str_plain__toadd;
static PyObject *const_str_plain__types;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_astype;
static PyObject *const_str_plain_bhilqp;
extern PyObject *const_str_plain_bytes_;
extern PyObject *const_str_plain_extend;
static PyObject *const_str_plain_fbytes;
extern PyObject *const_str_plain_float_;
static PyObject *const_str_plain_ibytes;
extern PyObject *const_str_plain_insert;
static PyObject *const_str_plain_myname;
extern PyObject *const_str_plain_nbytes;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain_others;
extern PyObject *const_str_plain_remove;
static PyObject *const_str_plain_sctype;
extern PyObject *const_str_plain_string;
static PyObject *const_str_plain_typeNA;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_Complex;
static PyObject *const_str_plain_IntType;
extern PyObject *const_str_plain_Integer;
static PyObject *const_str_plain_Intname;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain__ctypes;
static PyObject *const_str_plain_bitname;
extern PyObject *const_str_plain_complex;
extern PyObject *const_str_plain_default;
static PyObject *const_str_plain_efdgFDG;
extern PyObject *const_str_plain_generic;
static PyObject *const_str_plain_index_a;
static PyObject *const_str_plain_intname;
static PyObject *const_str_plain_lowered;
static PyObject *const_str_plain_na_name;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain_newname;
extern PyObject *const_str_plain_object_;
static PyObject *const_str_plain_sctypes;
extern PyObject *const_str_plain_string_;
static PyObject *const_str_plain_thisind;
static PyObject *const_str_plain_typeobj;
extern PyObject *const_str_plain_unicode;
static PyObject *const_str_plain_uppered;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_AllFloat;
static PyObject *const_str_plain_Datetime;
static PyObject *const_str_plain_LONGLONG;
static PyObject *const_str_plain_LongType;
static PyObject *const_str_plain_TypeType;
static PyObject *const_str_plain_UIntname;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain__maxvals;
extern PyObject *const_str_plain__minvals;
extern PyObject *const_str_plain__typestr;
static PyObject *const_str_plain_allTypes;
extern PyObject *const_str_plain_builtins;
static PyObject *const_str_plain_charname;
extern PyObject *const_str_plain_complex_;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_flexible;
static PyObject *const_str_plain_index_sc;
static PyObject *const_str_plain_issctype;
extern PyObject *const_str_plain_itemsize;
extern PyObject *const_str_plain_newdtype;
static PyObject *const_str_plain_sctypeNA;
extern PyObject *const_str_plain_typeDict;
static PyObject *const_str_plain_typeinfo;
extern PyObject *const_str_plain_typename;
static PyObject *const_str_plain_uintname;
extern PyObject *const_str_plain_unicode_;
static PyObject *const_str_plain_utypeobj;
extern PyObject *const_str_plain_Character;
static PyObject *const_str_plain_FloatType;
static PyObject *const_str_plain__evalname;
static PyObject *const_str_plain__typedict;
static PyObject *const_str_plain_dtypelist;
extern PyObject *const_str_plain_is_busday;
static PyObject *const_str_plain_numcoerce;
extern PyObject *const_str_plain_timedelta;
static PyObject *const_str_plain_to_remove;
extern PyObject *const_str_plain_translate;
extern PyObject *const_str_plain_typecodes;
static PyObject *const_str_plain_ucharname;
extern PyObject *const_str_plain_0123456789;
static PyObject *const_str_plain_AllInteger;
static PyObject *const_str_plain_BufferType;
extern PyObject *const_str_plain_ScalarType;
static PyObject *const_str_plain_StringType;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain__add_types;
static PyObject *const_str_plain__alignment;
static PyObject *const_str_plain__all_chars;
static PyObject *const_str_plain__kind_list;
extern PyObject *const_str_plain_datetime64;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_str_plain_longdouble;
static PyObject *const_str_plain_memoryview;
extern PyObject *const_str_plain_obj2sctype;
extern PyObject *const_str_plain_sctypeDict;
static PyObject *const_str_plain_type_pairs;
extern PyObject *const_str_plain_BooleanType;
extern PyObject *const_str_plain_ComplexType;
static PyObject *const_str_plain_LOWER_TABLE;
static PyObject *const_str_plain_UPPER_TABLE;
static PyObject *const_str_plain_UnicodeType;
extern PyObject *const_str_plain___builtin__;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_plain_array_types;
static PyObject *const_str_plain_buffer_type;
extern PyObject *const_str_plain_clongdouble;
extern PyObject *const_str_plain_issubclass_;
extern PyObject *const_str_plain_issubsctype;
extern PyObject *const_str_plain_sctype2char;
extern PyObject *const_str_plain_timedelta64;
extern PyObject *const_tuple_int_pos_1_tuple;
static PyObject *const_str_plain___test_types;
static PyObject *const_str_plain__add_aliases;
static PyObject *const_str_plain__ascii_lower;
static PyObject *const_str_plain__ascii_upper;
static PyObject *const_str_plain__python_type;
static PyObject *const_str_plain_bBhHiIlLqQpP;
extern PyObject *const_str_plain_busday_count;
extern PyObject *const_str_plain_numerictypes;
static PyObject *const_str_plain_scalar_types;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain__python_types;
extern PyObject *const_str_plain_busday_offset;
extern PyObject *const_str_plain_datetime_data;
static PyObject *const_str_plain_english_lower;
static PyObject *const_str_plain_english_upper;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_tuple_str_plain_t_tuple;
extern PyObject *const_str_plain_busdaycalendar;
static PyObject *const_str_plain_maximum_sctype;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_UnsignedInteger;
static PyObject *const_str_plain__add_array_type;
static PyObject *const_str_plain__can_coerce_all;
static PyObject *const_str_plain__set_up_aliases;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_genericTypeRank;
extern PyObject *const_tuple_str_plain_obj_tuple;
extern PyObject *const_tuple_str_plain_rep_tuple;
static PyObject *const_str_plain___len_test_types;
static PyObject *const_str_plain__set_array_types;
extern PyObject *const_str_plain_find_common_type;
extern PyObject *const_tuple_str_plain_name_tuple;
static PyObject *const_str_plain__sctype2char_dict;
static PyObject *const_str_plain__construct_lookups;
extern PyObject *const_str_plain_datetime_as_string;
static PyObject *const_str_plain_english_capitalize;
static PyObject *const_tuple_str_plain_sctype_tuple;
static PyObject *const_str_plain__find_common_coerce;
static PyObject *const_str_plain__add_integer_aliases;
static PyObject *const_list_str_plain_p_str_plain_P_list;
extern PyObject *const_tuple_str_plain_a_str_plain_b_tuple;
static PyObject *const_tuple_str_plain_x_str_plain_k_tuple;
static PyObject *const_dict_92d2a12e215f974010433b406d92630f;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
static PyObject *const_str_plain__construct_char_code_lookup;
static PyObject *const_tuple_str_plain_rep_str_plain_res_tuple;
static PyObject *const_tuple_str_plain_name_str_plain_tup_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_obj_tuple;
static PyObject *const_tuple_str_plain_arg1_str_plain_arg2_tuple;
static PyObject *const_tuple_str_plain_s_str_plain_lowered_tuple;
static PyObject *const_tuple_str_plain_s_str_plain_uppered_tuple;
static PyObject *const_list_14eb2d757a7ca4e46dfa4e9b667ebbf2_list;
static PyObject *const_list_1ae925d4d23322299d78c901d41a19ec_list;
static PyObject *const_list_32ebf6c577230c9baef87db66dd9a3a4_list;
static PyObject *const_list_39ff5b299dcf631c2e51b2016e85e124_list;
static PyObject *const_list_4c43d4b8aa44e8b1517eff946ecbbca8_list;
static PyObject *const_list_6743371597891d0d66aa89a8ea751836_list;
static PyObject *const_list_87201804489d5a09f94fc4d531bf84b1_list;
static PyObject *const_list_8a7a3e2a3795a23e46bc850266a16061_list;
static PyObject *const_list_9faf787b90f2fd97315a66fe6473a3e4_list;
static PyObject *const_list_b6ca87f51faaa7e884f0dabf71c4217d_list;
static PyObject *const_tuple_str_plain_bytes_str_plain_long_tuple;
static PyObject *const_str_digest_06c5b8e330c3a885aaa011d1f606d7db;
static PyObject *const_str_digest_0740bf6c2518ee0a13e77e03b6795e35;
static PyObject *const_str_digest_0caf233dc22aa52058e6ce96ead78271;
static PyObject *const_str_digest_17e5a08d7b521f7e5ee3ce9ab7e96956;
static PyObject *const_str_digest_25b19d10bc0b54ad50c32127a2ed7db9;
static PyObject *const_str_digest_2797e1c57fa369afa7bfa05a66d7ca0d;
static PyObject *const_str_digest_2f969ea2d3eac56135d737e6f020baca;
static PyObject *const_str_digest_3205920e5bb13b28d07a8c7f168ad36d;
static PyObject *const_str_digest_32c1ddc050fc841d862d0b6f6cfba033;
static PyObject *const_str_digest_468287566f5599e32b05b5ba78c2f034;
static PyObject *const_str_digest_540e56eca8e954f039339efc14006234;
static PyObject *const_str_digest_56bae01cc28fd71c3874bda0c16af567;
static PyObject *const_str_digest_5c5d994355f6b8e0d54c72f83f0c508e;
static PyObject *const_str_digest_656dc74647f52a99947517b7b477213f;
static PyObject *const_str_digest_69f14cc1f009b5db6d61dda3eb6c425d;
extern PyObject *const_str_digest_754278f1f770a5f41d9cde40f144d1da;
static PyObject *const_str_digest_75fbfdbca1f8c682993ab9394c3dde60;
static PyObject *const_str_digest_832d17b06aa5774afe460a707e3f869a;
extern PyObject *const_str_digest_8a3551674d9174096d8a003980610b3f;
extern PyObject *const_str_digest_94c347c24ae368650c11346640f548a5;
extern PyObject *const_str_digest_9718270fe5d2c916ce2b6f64e75a37af;
static PyObject *const_str_digest_986c3720004310559cdc4dadb9aef8f9;
static PyObject *const_str_digest_a009b41ff96bcd0d8efaebcf70da9960;
static PyObject *const_str_digest_a17cb5a35ea7240c370ddad7dfa2fc39;
static PyObject *const_str_digest_a723534c21f155f5e531478256110390;
static PyObject *const_str_digest_ca4604702bde302777398b1137e075b7;
static PyObject *const_str_digest_ef1b5c3e054387032a092b644497bb82;
static PyObject *const_str_digest_f2c445fe234fb58e8d7393293c956c0e;
static PyObject *const_str_digest_f50faed6669c79dc05c07be079783052;
static PyObject *const_tuple_str_plain_rep_str_plain_default_tuple;
static PyObject *const_tuple_str_plain_str__str_plain_string_tuple;
static PyObject *const_tuple_2bdd0f7e7b68dcc7f297007b9a8ebce8_tuple;
static PyObject *const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple;
static PyObject *const_tuple_58e8945272c16d3b7cb30359532ea9a7_tuple;
static PyObject *const_tuple_60a650889cf458ee75ef4bbd3b20ad85_tuple;
static PyObject *const_tuple_62626145671345e7f322ad729a236196_tuple;
static PyObject *const_tuple_6c3eebc08139832b038400b24cac48b9_tuple;
static PyObject *const_tuple_6d365a98d1d398178edd94c06d91960e_tuple;
extern PyObject *const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple;
static PyObject *const_tuple_e2c8a88570e0107939814cfa77926bbe_tuple;
static PyObject *const_tuple_f2231347facf8374e65340fdd2698307_tuple;
extern PyObject *const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple;
static PyObject *const_tuple_str_plain_str__str_plain_unicode_tuple;
static PyObject *const_tuple_str_plain_bytes__str_plain_string_tuple;
static PyObject *const_tuple_str_plain_typename_str_plain_bits_tuple;
static PyObject *const_tuple_str_plain_string__str_plain_string_tuple;
static PyObject *const_tuple_str_plain_dtypelist_str_plain_start_tuple;
static PyObject *const_tuple_str_plain_a_str_plain_b_str_plain_thisind_tuple;
static PyObject *const_tuple_str_plain_name_str_plain_val_str_plain_obj_tuple;
static PyObject *const_tuple_str_plain_a_str_plain_name_str_plain_typeobj_tuple;
static PyObject *const_tuple_str_plain_array_types_str_plain_scalar_types_tuple;
static PyObject *const_tuple_str_plain_rep_str_plain_default_str_plain_res_tuple;
static PyObject *const_tuple_str_plain_typename_str_plain_bits_str_plain_t_tuple;
static PyObject *const_tuple_str_plain_arg1_str_plain_arg2_str_plain_mro_str_plain_val_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_Mm = UNSTREAM_STRING( &constant_bin[ 856802 ], 2, 1 );
    const_str_plain_FDG = UNSTREAM_STRING( &constant_bin[ 856804 ], 3, 1 );
    const_str_plain_INT = UNSTREAM_STRING( &constant_bin[ 21736 ], 3, 1 );
    const_str_plain__gi = UNSTREAM_STRING( &constant_bin[ 2425 ], 3, 1 );
    const_str_plain_mro = UNSTREAM_STRING( &constant_bin[ 229334 ], 3, 1 );
    const_str_plain__lst = UNSTREAM_STRING( &constant_bin[ 49620 ], 4, 1 );
    const_str_plain_efdg = UNSTREAM_STRING( &constant_bin[ 856807 ], 4, 1 );
    const_str_plain_maxa = UNSTREAM_STRING( &constant_bin[ 76631 ], 4, 1 );
    const_str_plain_uval = UNSTREAM_STRING( &constant_bin[ 856811 ], 4, 1 );
    const_str_plain_SHORT = UNSTREAM_STRING( &constant_bin[ 856815 ], 5, 1 );
    const_str_plain_maxsc = UNSTREAM_STRING( &constant_bin[ 76580 ], 5, 1 );
    const_str_plain_ulong = UNSTREAM_STRING( &constant_bin[ 301373 ], 5, 1 );
    const_str_plain_BHILQP = UNSTREAM_STRING( &constant_bin[ 856820 ], 6, 1 );
    const_str_plain__toadd = UNSTREAM_STRING( &constant_bin[ 74222 ], 6, 1 );
    const_str_plain__types = UNSTREAM_STRING( &constant_bin[ 73519 ], 6, 1 );
    const_str_plain_bhilqp = UNSTREAM_STRING( &constant_bin[ 856826 ], 6, 1 );
    const_str_plain_fbytes = UNSTREAM_STRING( &constant_bin[ 75282 ], 6, 1 );
    const_str_plain_ibytes = UNSTREAM_STRING( &constant_bin[ 856832 ], 6, 1 );
    const_str_plain_myname = UNSTREAM_STRING( &constant_bin[ 74863 ], 6, 1 );
    const_str_plain_others = UNSTREAM_STRING( &constant_bin[ 466868 ], 6, 1 );
    const_str_plain_sctype = UNSTREAM_STRING( &constant_bin[ 74071 ], 6, 1 );
    const_str_plain_typeNA = UNSTREAM_STRING( &constant_bin[ 74278 ], 6, 1 );
    const_str_plain_IntType = UNSTREAM_STRING( &constant_bin[ 856838 ], 7, 1 );
    const_str_plain_Intname = UNSTREAM_STRING( &constant_bin[ 856845 ], 7, 1 );
    const_str_plain_bitname = UNSTREAM_STRING( &constant_bin[ 74775 ], 7, 1 );
    const_str_plain_efdgFDG = UNSTREAM_STRING( &constant_bin[ 856852 ], 7, 1 );
    const_str_plain_index_a = UNSTREAM_STRING( &constant_bin[ 76479 ], 7, 1 );
    const_str_plain_intname = UNSTREAM_STRING( &constant_bin[ 856859 ], 7, 1 );
    const_str_plain_lowered = UNSTREAM_STRING( &constant_bin[ 856866 ], 7, 1 );
    const_str_plain_na_name = UNSTREAM_STRING( &constant_bin[ 75052 ], 7, 1 );
    const_str_plain_sctypes = UNSTREAM_STRING( &constant_bin[ 75199 ], 7, 1 );
    const_str_plain_thisind = UNSTREAM_STRING( &constant_bin[ 76064 ], 7, 1 );
    const_str_plain_typeobj = UNSTREAM_STRING( &constant_bin[ 74915 ], 7, 1 );
    const_str_plain_uppered = UNSTREAM_STRING( &constant_bin[ 856873 ], 7, 1 );
    const_str_plain_Datetime = UNSTREAM_STRING( &constant_bin[ 57561 ], 8, 1 );
    const_str_plain_LONGLONG = UNSTREAM_STRING( &constant_bin[ 856880 ], 8, 1 );
    const_str_plain_LongType = UNSTREAM_STRING( &constant_bin[ 856888 ], 8, 1 );
    const_str_plain_TypeType = UNSTREAM_STRING( &constant_bin[ 856896 ], 8, 1 );
    const_str_plain_UIntname = UNSTREAM_STRING( &constant_bin[ 856904 ], 8, 1 );
    const_str_plain_allTypes = UNSTREAM_STRING( &constant_bin[ 73623 ], 8, 1 );
    const_str_plain_charname = UNSTREAM_STRING( &constant_bin[ 856912 ], 8, 1 );
    const_str_plain_index_sc = UNSTREAM_STRING( &constant_bin[ 76425 ], 8, 1 );
    const_str_plain_issctype = UNSTREAM_STRING( &constant_bin[ 856920 ], 8, 1 );
    const_str_plain_sctypeNA = UNSTREAM_STRING( &constant_bin[ 74276 ], 8, 1 );
    const_str_plain_typeinfo = UNSTREAM_STRING( &constant_bin[ 74532 ], 8, 1 );
    const_str_plain_uintname = UNSTREAM_STRING( &constant_bin[ 856928 ], 8, 1 );
    const_str_plain_utypeobj = UNSTREAM_STRING( &constant_bin[ 856936 ], 8, 1 );
    const_str_plain_FloatType = UNSTREAM_STRING( &constant_bin[ 856944 ], 9, 1 );
    const_str_plain__evalname = UNSTREAM_STRING( &constant_bin[ 74569 ], 9, 1 );
    const_str_plain__typedict = UNSTREAM_STRING( &constant_bin[ 73999 ], 9, 1 );
    const_str_plain_dtypelist = UNSTREAM_STRING( &constant_bin[ 76117 ], 9, 1 );
    const_str_plain_numcoerce = UNSTREAM_STRING( &constant_bin[ 856953 ], 9, 1 );
    const_str_plain_to_remove = UNSTREAM_STRING( &constant_bin[ 856962 ], 9, 1 );
    const_str_plain_ucharname = UNSTREAM_STRING( &constant_bin[ 856971 ], 9, 1 );
    const_str_plain_AllInteger = UNSTREAM_STRING( &constant_bin[ 856980 ], 10, 1 );
    const_str_plain_BufferType = UNSTREAM_STRING( &constant_bin[ 856990 ], 10, 1 );
    const_str_plain_StringType = UNSTREAM_STRING( &constant_bin[ 8446 ], 10, 1 );
    const_str_plain__add_types = UNSTREAM_STRING( &constant_bin[ 73515 ], 10, 1 );
    const_str_plain__alignment = UNSTREAM_STRING( &constant_bin[ 55233 ], 10, 1 );
    const_str_plain__all_chars = UNSTREAM_STRING( &constant_bin[ 73415 ], 10, 1 );
    const_str_plain__kind_list = UNSTREAM_STRING( &constant_bin[ 76383 ], 10, 1 );
    const_str_plain_memoryview = UNSTREAM_STRING( &constant_bin[ 857000 ], 10, 1 );
    const_str_plain_type_pairs = UNSTREAM_STRING( &constant_bin[ 857010 ], 10, 1 );
    const_str_plain_LOWER_TABLE = UNSTREAM_STRING( &constant_bin[ 74378 ], 11, 1 );
    const_str_plain_UPPER_TABLE = UNSTREAM_STRING( &constant_bin[ 74418 ], 11, 1 );
    const_str_plain_UnicodeType = UNSTREAM_STRING( &constant_bin[ 857020 ], 11, 1 );
    const_str_plain_array_types = UNSTREAM_STRING( &constant_bin[ 73824 ], 11, 1 );
    const_str_plain_buffer_type = UNSTREAM_STRING( &constant_bin[ 73966 ], 11, 1 );
    const_str_plain___test_types = UNSTREAM_STRING( &constant_bin[ 74337 ], 12, 1 );
    const_str_plain__add_aliases = UNSTREAM_STRING( &constant_bin[ 73547 ], 12, 1 );
    const_str_plain__ascii_lower = UNSTREAM_STRING( &constant_bin[ 73447 ], 12, 1 );
    const_str_plain__ascii_upper = UNSTREAM_STRING( &constant_bin[ 73481 ], 12, 1 );
    const_str_plain__python_type = UNSTREAM_STRING( &constant_bin[ 75469 ], 12, 1 );
    const_str_plain_bBhHiIlLqQpP = UNSTREAM_STRING( &constant_bin[ 857031 ], 12, 1 );
    const_str_plain_scalar_types = UNSTREAM_STRING( &constant_bin[ 76328 ], 12, 1 );
    const_str_plain__python_types = UNSTREAM_STRING( &constant_bin[ 75469 ], 13, 1 );
    const_str_plain_english_lower = UNSTREAM_STRING( &constant_bin[ 74657 ], 13, 1 );
    const_str_plain_english_upper = UNSTREAM_STRING( &constant_bin[ 74458 ], 13, 1 );
    const_str_plain_maximum_sctype = UNSTREAM_STRING( &constant_bin[ 857043 ], 14, 1 );
    const_str_plain__add_array_type = UNSTREAM_STRING( &constant_bin[ 75235 ], 15, 1 );
    const_str_plain__can_coerce_all = UNSTREAM_STRING( &constant_bin[ 76017 ], 15, 1 );
    const_str_plain__set_up_aliases = UNSTREAM_STRING( &constant_bin[ 73653 ], 15, 1 );
    const_str_plain___len_test_types = UNSTREAM_STRING( &constant_bin[ 76169 ], 16, 1 );
    const_str_plain__set_array_types = UNSTREAM_STRING( &constant_bin[ 73819 ], 16, 1 );
    const_str_plain__sctype2char_dict = UNSTREAM_STRING( &constant_bin[ 74070 ], 17, 1 );
    const_str_plain__construct_lookups = UNSTREAM_STRING( &constant_bin[ 74030 ], 18, 1 );
    const_str_plain_english_capitalize = UNSTREAM_STRING( &constant_bin[ 74965 ], 18, 1 );
    const_tuple_str_plain_sctype_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sctype_tuple, 0, const_str_plain_sctype ); Py_INCREF( const_str_plain_sctype );
    const_str_plain__find_common_coerce = UNSTREAM_STRING( &constant_bin[ 76529 ], 19, 1 );
    const_str_plain__add_integer_aliases = UNSTREAM_STRING( &constant_bin[ 73581 ], 20, 1 );
    const_list_str_plain_p_str_plain_P_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_p_str_plain_P_list, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyList_SET_ITEM( const_list_str_plain_p_str_plain_P_list, 1, const_str_plain_P ); Py_INCREF( const_str_plain_P );
    const_tuple_str_plain_x_str_plain_k_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_k_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_k_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_dict_92d2a12e215f974010433b406d92630f = _PyDict_NewPresized( 9 );
    const_str_digest_2797e1c57fa369afa7bfa05a66d7ca0d = UNSTREAM_STRING( &constant_bin[ 857057 ], 26, 0 );
    PyDict_SetItem( const_dict_92d2a12e215f974010433b406d92630f, const_str_plain_All, const_str_digest_2797e1c57fa369afa7bfa05a66d7ca0d );
    PyDict_SetItem( const_dict_92d2a12e215f974010433b406d92630f, const_str_plain_AllInteger, const_str_plain_bBhHiIlLqQpP );
    PyDict_SetItem( const_dict_92d2a12e215f974010433b406d92630f, const_str_plain_AllFloat, const_str_plain_efdgFDG );
    PyDict_SetItem( const_dict_92d2a12e215f974010433b406d92630f, const_str_plain_UnsignedInteger, const_str_plain_BHILQP );
    PyDict_SetItem( const_dict_92d2a12e215f974010433b406d92630f, const_str_plain_Float, const_str_plain_efdg );
    PyDict_SetItem( const_dict_92d2a12e215f974010433b406d92630f, const_str_plain_Character, const_str_plain_c );
    PyDict_SetItem( const_dict_92d2a12e215f974010433b406d92630f, const_str_plain_Datetime, const_str_plain_Mm );
    PyDict_SetItem( const_dict_92d2a12e215f974010433b406d92630f, const_str_plain_Complex, const_str_plain_FDG );
    PyDict_SetItem( const_dict_92d2a12e215f974010433b406d92630f, const_str_plain_Integer, const_str_plain_bhilqp );
    const_str_plain__construct_char_code_lookup = UNSTREAM_STRING( &constant_bin[ 73690 ], 27, 1 );
    const_tuple_str_plain_rep_str_plain_res_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rep_str_plain_res_tuple, 0, const_str_plain_rep ); Py_INCREF( const_str_plain_rep );
    PyTuple_SET_ITEM( const_tuple_str_plain_rep_str_plain_res_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_tuple_str_plain_name_str_plain_tup_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_tup_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_tup_tuple, 1, const_str_plain_tup ); Py_INCREF( const_str_plain_tup );
    const_tuple_str_plain_arg1_str_plain_arg2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arg1_str_plain_arg2_tuple, 0, const_str_plain_arg1 ); Py_INCREF( const_str_plain_arg1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arg1_str_plain_arg2_tuple, 1, const_str_plain_arg2 ); Py_INCREF( const_str_plain_arg2 );
    const_tuple_str_plain_s_str_plain_lowered_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_lowered_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_lowered_tuple, 1, const_str_plain_lowered ); Py_INCREF( const_str_plain_lowered );
    const_tuple_str_plain_s_str_plain_uppered_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_uppered_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_uppered_tuple, 1, const_str_plain_uppered ); Py_INCREF( const_str_plain_uppered );
    const_list_14eb2d757a7ca4e46dfa4e9b667ebbf2_list = PyList_New( 3 );
    const_tuple_str_plain_str__str_plain_string_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_str__str_plain_string_tuple, 0, const_str_plain_str_ ); Py_INCREF( const_str_plain_str_ );
    PyTuple_SET_ITEM( const_tuple_str_plain_str__str_plain_string_tuple, 1, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    PyList_SET_ITEM( const_list_14eb2d757a7ca4e46dfa4e9b667ebbf2_list, 0, const_tuple_str_plain_str__str_plain_string_tuple ); Py_INCREF( const_tuple_str_plain_str__str_plain_string_tuple );
    const_tuple_str_plain_string__str_plain_string_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_string__str_plain_string_tuple, 0, const_str_plain_string_ ); Py_INCREF( const_str_plain_string_ );
    PyTuple_SET_ITEM( const_tuple_str_plain_string__str_plain_string_tuple, 1, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    PyList_SET_ITEM( const_list_14eb2d757a7ca4e46dfa4e9b667ebbf2_list, 1, const_tuple_str_plain_string__str_plain_string_tuple ); Py_INCREF( const_tuple_str_plain_string__str_plain_string_tuple );
    const_tuple_str_plain_bytes__str_plain_string_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_bytes__str_plain_string_tuple, 0, const_str_plain_bytes_ ); Py_INCREF( const_str_plain_bytes_ );
    PyTuple_SET_ITEM( const_tuple_str_plain_bytes__str_plain_string_tuple, 1, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    PyList_SET_ITEM( const_list_14eb2d757a7ca4e46dfa4e9b667ebbf2_list, 2, const_tuple_str_plain_bytes__str_plain_string_tuple ); Py_INCREF( const_tuple_str_plain_bytes__str_plain_string_tuple );
    const_list_1ae925d4d23322299d78c901d41a19ec_list = PyList_New( 11 );
    PyList_SET_ITEM( const_list_1ae925d4d23322299d78c901d41a19ec_list, 0, const_str_plain_ulong ); Py_INCREF( const_str_plain_ulong );
    PyList_SET_ITEM( const_list_1ae925d4d23322299d78c901d41a19ec_list, 1, const_str_plain_object ); Py_INCREF( const_str_plain_object );
    PyList_SET_ITEM( const_list_1ae925d4d23322299d78c901d41a19ec_list, 2, const_str_plain_unicode ); Py_INCREF( const_str_plain_unicode );
    PyList_SET_ITEM( const_list_1ae925d4d23322299d78c901d41a19ec_list, 3, const_str_plain_int ); Py_INCREF( const_str_plain_int );
    PyList_SET_ITEM( const_list_1ae925d4d23322299d78c901d41a19ec_list, 4, const_str_plain_long ); Py_INCREF( const_str_plain_long );
    PyList_SET_ITEM( const_list_1ae925d4d23322299d78c901d41a19ec_list, 5, const_str_plain_float ); Py_INCREF( const_str_plain_float );
    PyList_SET_ITEM( const_list_1ae925d4d23322299d78c901d41a19ec_list, 6, const_str_plain_complex ); Py_INCREF( const_str_plain_complex );
    PyList_SET_ITEM( const_list_1ae925d4d23322299d78c901d41a19ec_list, 7, const_str_plain_bool ); Py_INCREF( const_str_plain_bool );
    PyList_SET_ITEM( const_list_1ae925d4d23322299d78c901d41a19ec_list, 8, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    PyList_SET_ITEM( const_list_1ae925d4d23322299d78c901d41a19ec_list, 9, const_str_plain_datetime ); Py_INCREF( const_str_plain_datetime );
    PyList_SET_ITEM( const_list_1ae925d4d23322299d78c901d41a19ec_list, 10, const_str_plain_timedelta ); Py_INCREF( const_str_plain_timedelta );
    const_list_32ebf6c577230c9baef87db66dd9a3a4_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 857083 ], 319 );
    const_list_39ff5b299dcf631c2e51b2016e85e124_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_39ff5b299dcf631c2e51b2016e85e124_list, 0, const_str_plain_LONG ); Py_INCREF( const_str_plain_LONG );
    PyList_SET_ITEM( const_list_39ff5b299dcf631c2e51b2016e85e124_list, 1, const_str_plain_LONGLONG ); Py_INCREF( const_str_plain_LONGLONG );
    PyList_SET_ITEM( const_list_39ff5b299dcf631c2e51b2016e85e124_list, 2, const_str_plain_INT ); Py_INCREF( const_str_plain_INT );
    PyList_SET_ITEM( const_list_39ff5b299dcf631c2e51b2016e85e124_list, 3, const_str_plain_SHORT ); Py_INCREF( const_str_plain_SHORT );
    PyList_SET_ITEM( const_list_39ff5b299dcf631c2e51b2016e85e124_list, 4, const_str_plain_BYTE ); Py_INCREF( const_str_plain_BYTE );
    const_list_4c43d4b8aa44e8b1517eff946ecbbca8_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 857402 ], 326 );
    const_list_6743371597891d0d66aa89a8ea751836_list = PyList_New( 11 );
    PyList_SET_ITEM( const_list_6743371597891d0d66aa89a8ea751836_list, 0, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyList_SET_ITEM( const_list_6743371597891d0d66aa89a8ea751836_list, 1, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyList_SET_ITEM( const_list_6743371597891d0d66aa89a8ea751836_list, 2, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyList_SET_ITEM( const_list_6743371597891d0d66aa89a8ea751836_list, 3, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyList_SET_ITEM( const_list_6743371597891d0d66aa89a8ea751836_list, 4, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyList_SET_ITEM( const_list_6743371597891d0d66aa89a8ea751836_list, 5, const_str_plain_S ); Py_INCREF( const_str_plain_S );
    PyList_SET_ITEM( const_list_6743371597891d0d66aa89a8ea751836_list, 6, const_str_plain_U ); Py_INCREF( const_str_plain_U );
    PyList_SET_ITEM( const_list_6743371597891d0d66aa89a8ea751836_list, 7, const_str_plain_V ); Py_INCREF( const_str_plain_V );
    PyList_SET_ITEM( const_list_6743371597891d0d66aa89a8ea751836_list, 8, const_str_plain_O ); Py_INCREF( const_str_plain_O );
    PyList_SET_ITEM( const_list_6743371597891d0d66aa89a8ea751836_list, 9, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyList_SET_ITEM( const_list_6743371597891d0d66aa89a8ea751836_list, 10, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_list_87201804489d5a09f94fc4d531bf84b1_list = PyList_New( 8 );
    PyList_SET_ITEM( const_list_87201804489d5a09f94fc4d531bf84b1_list, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyList_SET_ITEM( const_list_87201804489d5a09f94fc4d531bf84b1_list, 1, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    PyList_SET_ITEM( const_list_87201804489d5a09f94fc4d531bf84b1_list, 2, const_int_pos_8 ); Py_INCREF( const_int_pos_8 );
    PyList_SET_ITEM( const_list_87201804489d5a09f94fc4d531bf84b1_list, 3, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    PyList_SET_ITEM( const_list_87201804489d5a09f94fc4d531bf84b1_list, 4, const_int_pos_12 ); Py_INCREF( const_int_pos_12 );
    PyList_SET_ITEM( const_list_87201804489d5a09f94fc4d531bf84b1_list, 5, const_int_pos_16 ); Py_INCREF( const_int_pos_16 );
    PyList_SET_ITEM( const_list_87201804489d5a09f94fc4d531bf84b1_list, 6, const_int_pos_32 ); Py_INCREF( const_int_pos_32 );
    PyList_SET_ITEM( const_list_87201804489d5a09f94fc4d531bf84b1_list, 7, const_int_pos_64 ); Py_INCREF( const_int_pos_64 );
    const_list_8a7a3e2a3795a23e46bc850266a16061_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 857728 ], 508 );
    const_list_9faf787b90f2fd97315a66fe6473a3e4_list = PyList_New( 7 );
    PyList_SET_ITEM( const_list_9faf787b90f2fd97315a66fe6473a3e4_list, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyList_SET_ITEM( const_list_9faf787b90f2fd97315a66fe6473a3e4_list, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyList_SET_ITEM( const_list_9faf787b90f2fd97315a66fe6473a3e4_list, 2, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    PyList_SET_ITEM( const_list_9faf787b90f2fd97315a66fe6473a3e4_list, 3, const_int_pos_8 ); Py_INCREF( const_int_pos_8 );
    PyList_SET_ITEM( const_list_9faf787b90f2fd97315a66fe6473a3e4_list, 4, const_int_pos_16 ); Py_INCREF( const_int_pos_16 );
    PyList_SET_ITEM( const_list_9faf787b90f2fd97315a66fe6473a3e4_list, 5, const_int_pos_32 ); Py_INCREF( const_int_pos_32 );
    PyList_SET_ITEM( const_list_9faf787b90f2fd97315a66fe6473a3e4_list, 6, const_int_pos_64 ); Py_INCREF( const_int_pos_64 );
    const_list_b6ca87f51faaa7e884f0dabf71c4217d_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_b6ca87f51faaa7e884f0dabf71c4217d_list, 0, const_tuple_str_plain_bytes__str_plain_string_tuple ); Py_INCREF( const_tuple_str_plain_bytes__str_plain_string_tuple );
    const_tuple_str_plain_str__str_plain_unicode_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_str__str_plain_unicode_tuple, 0, const_str_plain_str_ ); Py_INCREF( const_str_plain_str_ );
    PyTuple_SET_ITEM( const_tuple_str_plain_str__str_plain_unicode_tuple, 1, const_str_plain_unicode ); Py_INCREF( const_str_plain_unicode );
    PyList_SET_ITEM( const_list_b6ca87f51faaa7e884f0dabf71c4217d_list, 1, const_tuple_str_plain_str__str_plain_unicode_tuple ); Py_INCREF( const_tuple_str_plain_str__str_plain_unicode_tuple );
    PyList_SET_ITEM( const_list_b6ca87f51faaa7e884f0dabf71c4217d_list, 2, const_tuple_str_plain_string__str_plain_string_tuple ); Py_INCREF( const_tuple_str_plain_string__str_plain_string_tuple );
    const_tuple_str_plain_bytes_str_plain_long_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_bytes_str_plain_long_tuple, 0, const_str_plain_bytes ); Py_INCREF( const_str_plain_bytes );
    PyTuple_SET_ITEM( const_tuple_str_plain_bytes_str_plain_long_tuple, 1, const_str_plain_long ); Py_INCREF( const_str_plain_long );
    const_str_digest_06c5b8e330c3a885aaa011d1f606d7db = UNSTREAM_STRING( &constant_bin[ 858236 ], 3, 0 );
    const_str_digest_0740bf6c2518ee0a13e77e03b6795e35 = UNSTREAM_STRING( &constant_bin[ 858239 ], 632, 0 );
    const_str_digest_0caf233dc22aa52058e6ce96ead78271 = UNSTREAM_STRING( &constant_bin[ 858871 ], 59, 0 );
    const_str_digest_17e5a08d7b521f7e5ee3ce9ab7e96956 = UNSTREAM_STRING( &constant_bin[ 858930 ], 55, 0 );
    const_str_digest_25b19d10bc0b54ad50c32127a2ed7db9 = UNSTREAM_STRING( &constant_bin[ 858985 ], 3, 0 );
    const_str_digest_2f969ea2d3eac56135d737e6f020baca = UNSTREAM_STRING( &constant_bin[ 858988 ], 479, 0 );
    const_str_digest_3205920e5bb13b28d07a8c7f168ad36d = UNSTREAM_STRING( &constant_bin[ 859467 ], 195, 0 );
    const_str_digest_32c1ddc050fc841d862d0b6f6cfba033 = UNSTREAM_STRING( &constant_bin[ 859662 ], 853, 0 );
    const_str_digest_468287566f5599e32b05b5ba78c2f034 = UNSTREAM_STRING( &constant_bin[ 334880 ], 3, 0 );
    const_str_digest_540e56eca8e954f039339efc14006234 = UNSTREAM_STRING( &constant_bin[ 860515 ], 751, 0 );
    const_str_digest_56bae01cc28fd71c3874bda0c16af567 = UNSTREAM_STRING( &constant_bin[ 861266 ], 17, 0 );
    const_str_digest_5c5d994355f6b8e0d54c72f83f0c508e = UNSTREAM_STRING( &constant_bin[ 861283 ], 5, 0 );
    const_str_digest_656dc74647f52a99947517b7b477213f = UNSTREAM_STRING( &constant_bin[ 861288 ], 1546, 0 );
    const_str_digest_69f14cc1f009b5db6d61dda3eb6c425d = UNSTREAM_STRING( &constant_bin[ 862834 ], 925, 0 );
    const_str_digest_75fbfdbca1f8c682993ab9394c3dde60 = UNSTREAM_STRING( &constant_bin[ 863759 ], 5, 0 );
    const_str_digest_832d17b06aa5774afe460a707e3f869a = UNSTREAM_STRING( &constant_bin[ 863764 ], 6, 0 );
    const_str_digest_986c3720004310559cdc4dadb9aef8f9 = UNSTREAM_STRING( &constant_bin[ 863770 ], 556, 0 );
    const_str_digest_a009b41ff96bcd0d8efaebcf70da9960 = UNSTREAM_STRING( &constant_bin[ 864326 ], 816, 0 );
    const_str_digest_a17cb5a35ea7240c370ddad7dfa2fc39 = UNSTREAM_STRING( &constant_bin[ 865142 ], 911, 0 );
    const_str_digest_a723534c21f155f5e531478256110390 = UNSTREAM_STRING( &constant_bin[ 866053 ], 751, 0 );
    const_str_digest_ca4604702bde302777398b1137e075b7 = UNSTREAM_STRING( &constant_bin[ 866804 ], 479, 0 );
    const_str_digest_ef1b5c3e054387032a092b644497bb82 = UNSTREAM_STRING( &constant_bin[ 867283 ], 2176, 0 );
    const_str_digest_f2c445fe234fb58e8d7393293c956c0e = UNSTREAM_STRING( &constant_bin[ 869459 ], 6, 0 );
    const_str_digest_f50faed6669c79dc05c07be079783052 = UNSTREAM_STRING( &constant_bin[ 869465 ], 47, 0 );
    const_tuple_str_plain_rep_str_plain_default_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rep_str_plain_default_tuple, 0, const_str_plain_rep ); Py_INCREF( const_str_plain_rep );
    PyTuple_SET_ITEM( const_tuple_str_plain_rep_str_plain_default_tuple, 1, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    const_tuple_2bdd0f7e7b68dcc7f297007b9a8ebce8_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_2bdd0f7e7b68dcc7f297007b9a8ebce8_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_2bdd0f7e7b68dcc7f297007b9a8ebce8_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_2bdd0f7e7b68dcc7f297007b9a8ebce8_tuple, 2, const_str_plain_ch ); Py_INCREF( const_str_plain_ch );
    PyTuple_SET_ITEM( const_tuple_2bdd0f7e7b68dcc7f297007b9a8ebce8_tuple, 3, const_str_plain_bits ); Py_INCREF( const_str_plain_bits );
    PyTuple_SET_ITEM( const_tuple_2bdd0f7e7b68dcc7f297007b9a8ebce8_tuple, 4, const_str_plain_base ); Py_INCREF( const_str_plain_base );
    const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, 0, const_str_plain_typeinfo ); Py_INCREF( const_str_plain_typeinfo );
    PyTuple_SET_ITEM( const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, 1, const_str_plain_ndarray ); Py_INCREF( const_str_plain_ndarray );
    PyTuple_SET_ITEM( const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, 2, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, 3, const_str_plain_empty ); Py_INCREF( const_str_plain_empty );
    PyTuple_SET_ITEM( const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, 4, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, 5, const_str_plain_datetime_data ); Py_INCREF( const_str_plain_datetime_data );
    PyTuple_SET_ITEM( const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, 6, const_str_plain_datetime_as_string ); Py_INCREF( const_str_plain_datetime_as_string );
    PyTuple_SET_ITEM( const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, 7, const_str_plain_busday_offset ); Py_INCREF( const_str_plain_busday_offset );
    PyTuple_SET_ITEM( const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, 8, const_str_plain_busday_count ); Py_INCREF( const_str_plain_busday_count );
    PyTuple_SET_ITEM( const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, 9, const_str_plain_is_busday ); Py_INCREF( const_str_plain_is_busday );
    PyTuple_SET_ITEM( const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, 10, const_str_plain_busdaycalendar ); Py_INCREF( const_str_plain_busdaycalendar );
    const_tuple_58e8945272c16d3b7cb30359532ea9a7_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_58e8945272c16d3b7cb30359532ea9a7_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_58e8945272c16d3b7cb30359532ea9a7_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_58e8945272c16d3b7cb30359532ea9a7_tuple, 2, const_str_plain_typeobj ); Py_INCREF( const_str_plain_typeobj );
    PyTuple_SET_ITEM( const_tuple_58e8945272c16d3b7cb30359532ea9a7_tuple, 3, const_str_plain_base ); Py_INCREF( const_str_plain_base );
    PyTuple_SET_ITEM( const_tuple_58e8945272c16d3b7cb30359532ea9a7_tuple, 4, const_str_plain_bit ); Py_INCREF( const_str_plain_bit );
    PyTuple_SET_ITEM( const_tuple_58e8945272c16d3b7cb30359532ea9a7_tuple, 5, const_str_plain_char ); Py_INCREF( const_str_plain_char );
    PyTuple_SET_ITEM( const_tuple_58e8945272c16d3b7cb30359532ea9a7_tuple, 6, const_str_plain_myname ); Py_INCREF( const_str_plain_myname );
    PyTuple_SET_ITEM( const_tuple_58e8945272c16d3b7cb30359532ea9a7_tuple, 7, const_str_plain_na_name ); Py_INCREF( const_str_plain_na_name );
    const_tuple_60a650889cf458ee75ef4bbd3b20ad85_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_60a650889cf458ee75ef4bbd3b20ad85_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_60a650889cf458ee75ef4bbd3b20ad85_tuple, 1, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_60a650889cf458ee75ef4bbd3b20ad85_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_60a650889cf458ee75ef4bbd3b20ad85_tuple, 3, const_str_plain_base ); Py_INCREF( const_str_plain_base );
    PyTuple_SET_ITEM( const_tuple_60a650889cf458ee75ef4bbd3b20ad85_tuple, 4, const_str_plain_bits ); Py_INCREF( const_str_plain_bits );
    const_tuple_62626145671345e7f322ad729a236196_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_62626145671345e7f322ad729a236196_tuple, 0, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_62626145671345e7f322ad729a236196_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_62626145671345e7f322ad729a236196_tuple, 2, const_str_plain_base ); Py_INCREF( const_str_plain_base );
    PyTuple_SET_ITEM( const_tuple_62626145671345e7f322ad729a236196_tuple, 3, const_str_plain_char ); Py_INCREF( const_str_plain_char );
    PyTuple_SET_ITEM( const_tuple_62626145671345e7f322ad729a236196_tuple, 4, const_str_plain_newname ); Py_INCREF( const_str_plain_newname );
    PyTuple_SET_ITEM( const_tuple_62626145671345e7f322ad729a236196_tuple, 5, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyTuple_SET_ITEM( const_tuple_62626145671345e7f322ad729a236196_tuple, 6, const_str_plain_bits ); Py_INCREF( const_str_plain_bits );
    PyTuple_SET_ITEM( const_tuple_62626145671345e7f322ad729a236196_tuple, 7, const_str_plain_bytes ); Py_INCREF( const_str_plain_bytes );
    const_tuple_6c3eebc08139832b038400b24cac48b9_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_6c3eebc08139832b038400b24cac48b9_tuple, 0, const_str_plain_dtypelist ); Py_INCREF( const_str_plain_dtypelist );
    PyTuple_SET_ITEM( const_tuple_6c3eebc08139832b038400b24cac48b9_tuple, 1, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_6c3eebc08139832b038400b24cac48b9_tuple, 2, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_6c3eebc08139832b038400b24cac48b9_tuple, 3, const_str_plain_thisind ); Py_INCREF( const_str_plain_thisind );
    PyTuple_SET_ITEM( const_tuple_6c3eebc08139832b038400b24cac48b9_tuple, 4, const_str_plain_newdtype ); Py_INCREF( const_str_plain_newdtype );
    PyTuple_SET_ITEM( const_tuple_6c3eebc08139832b038400b24cac48b9_tuple, 5, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_6c3eebc08139832b038400b24cac48b9_tuple, 6, const_str_plain_numcoerce ); Py_INCREF( const_str_plain_numcoerce );
    const_tuple_6d365a98d1d398178edd94c06d91960e_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_6d365a98d1d398178edd94c06d91960e_tuple, 0, const_str_plain_array_types ); Py_INCREF( const_str_plain_array_types );
    PyTuple_SET_ITEM( const_tuple_6d365a98d1d398178edd94c06d91960e_tuple, 1, const_str_plain_scalar_types ); Py_INCREF( const_str_plain_scalar_types );
    PyTuple_SET_ITEM( const_tuple_6d365a98d1d398178edd94c06d91960e_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_6d365a98d1d398178edd94c06d91960e_tuple, 3, const_str_plain_maxa ); Py_INCREF( const_str_plain_maxa );
    PyTuple_SET_ITEM( const_tuple_6d365a98d1d398178edd94c06d91960e_tuple, 4, const_str_plain_maxsc ); Py_INCREF( const_str_plain_maxsc );
    PyTuple_SET_ITEM( const_tuple_6d365a98d1d398178edd94c06d91960e_tuple, 5, const_str_plain_index_a ); Py_INCREF( const_str_plain_index_a );
    PyTuple_SET_ITEM( const_tuple_6d365a98d1d398178edd94c06d91960e_tuple, 6, const_str_plain_index_sc ); Py_INCREF( const_str_plain_index_sc );
    const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 0, const_str_plain__ctypes ); Py_INCREF( const_str_plain__ctypes );
    PyTuple_SET_ITEM( const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 1, const_str_plain_ctype ); Py_INCREF( const_str_plain_ctype );
    PyTuple_SET_ITEM( const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 2, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 3, const_str_plain_bits ); Py_INCREF( const_str_plain_bits );
    PyTuple_SET_ITEM( const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 4, const_str_plain_charname ); Py_INCREF( const_str_plain_charname );
    PyTuple_SET_ITEM( const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 5, const_str_plain_ucharname ); Py_INCREF( const_str_plain_ucharname );
    PyTuple_SET_ITEM( const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 6, const_str_plain_intname ); Py_INCREF( const_str_plain_intname );
    PyTuple_SET_ITEM( const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 7, const_str_plain_UIntname ); Py_INCREF( const_str_plain_UIntname );
    PyTuple_SET_ITEM( const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 8, const_str_plain_Intname ); Py_INCREF( const_str_plain_Intname );
    PyTuple_SET_ITEM( const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 9, const_str_plain_uval ); Py_INCREF( const_str_plain_uval );
    PyTuple_SET_ITEM( const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 10, const_str_plain_typeobj ); Py_INCREF( const_str_plain_typeobj );
    PyTuple_SET_ITEM( const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 11, const_str_plain_utypeobj ); Py_INCREF( const_str_plain_utypeobj );
    PyTuple_SET_ITEM( const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 12, const_str_plain_uintname ); Py_INCREF( const_str_plain_uintname );
    const_tuple_e2c8a88570e0107939814cfa77926bbe_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_e2c8a88570e0107939814cfa77926bbe_tuple, 0, const_str_plain_ibytes ); Py_INCREF( const_str_plain_ibytes );
    PyTuple_SET_ITEM( const_tuple_e2c8a88570e0107939814cfa77926bbe_tuple, 1, const_str_plain_fbytes ); Py_INCREF( const_str_plain_fbytes );
    PyTuple_SET_ITEM( const_tuple_e2c8a88570e0107939814cfa77926bbe_tuple, 2, const_str_plain_bytes ); Py_INCREF( const_str_plain_bytes );
    PyTuple_SET_ITEM( const_tuple_e2c8a88570e0107939814cfa77926bbe_tuple, 3, const_str_plain_bits ); Py_INCREF( const_str_plain_bits );
    PyTuple_SET_ITEM( const_tuple_e2c8a88570e0107939814cfa77926bbe_tuple, 4, const_str_plain__gi ); Py_INCREF( const_str_plain__gi );
    PyTuple_SET_ITEM( const_tuple_e2c8a88570e0107939814cfa77926bbe_tuple, 5, const_str_plain_indx ); Py_INCREF( const_str_plain_indx );
    PyTuple_SET_ITEM( const_tuple_e2c8a88570e0107939814cfa77926bbe_tuple, 6, const_str_plain_sz ); Py_INCREF( const_str_plain_sz );
    PyTuple_SET_ITEM( const_tuple_e2c8a88570e0107939814cfa77926bbe_tuple, 7, const_str_plain__lst ); Py_INCREF( const_str_plain__lst );
    const_tuple_f2231347facf8374e65340fdd2698307_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f2231347facf8374e65340fdd2698307_tuple, 0, const_str_plain_type_pairs ); Py_INCREF( const_str_plain_type_pairs );
    PyTuple_SET_ITEM( const_tuple_f2231347facf8374e65340fdd2698307_tuple, 1, const_str_plain_alias ); Py_INCREF( const_str_plain_alias );
    PyTuple_SET_ITEM( const_tuple_f2231347facf8374e65340fdd2698307_tuple, 2, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_f2231347facf8374e65340fdd2698307_tuple, 3, const_str_plain_to_remove ); Py_INCREF( const_str_plain_to_remove );
    const_tuple_str_plain_typename_str_plain_bits_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_typename_str_plain_bits_tuple, 0, const_str_plain_typename ); Py_INCREF( const_str_plain_typename );
    PyTuple_SET_ITEM( const_tuple_str_plain_typename_str_plain_bits_tuple, 1, const_str_plain_bits ); Py_INCREF( const_str_plain_bits );
    const_tuple_str_plain_dtypelist_str_plain_start_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dtypelist_str_plain_start_tuple, 0, const_str_plain_dtypelist ); Py_INCREF( const_str_plain_dtypelist );
    PyTuple_SET_ITEM( const_tuple_str_plain_dtypelist_str_plain_start_tuple, 1, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    const_tuple_str_plain_a_str_plain_b_str_plain_thisind_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_b_str_plain_thisind_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_b_str_plain_thisind_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_b_str_plain_thisind_tuple, 2, const_str_plain_thisind ); Py_INCREF( const_str_plain_thisind );
    const_tuple_str_plain_name_str_plain_val_str_plain_obj_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_val_str_plain_obj_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_val_str_plain_obj_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_val_str_plain_obj_tuple, 2, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    const_tuple_str_plain_a_str_plain_name_str_plain_typeobj_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_name_str_plain_typeobj_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_name_str_plain_typeobj_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_name_str_plain_typeobj_tuple, 2, const_str_plain_typeobj ); Py_INCREF( const_str_plain_typeobj );
    const_tuple_str_plain_array_types_str_plain_scalar_types_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_types_str_plain_scalar_types_tuple, 0, const_str_plain_array_types ); Py_INCREF( const_str_plain_array_types );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_types_str_plain_scalar_types_tuple, 1, const_str_plain_scalar_types ); Py_INCREF( const_str_plain_scalar_types );
    const_tuple_str_plain_rep_str_plain_default_str_plain_res_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rep_str_plain_default_str_plain_res_tuple, 0, const_str_plain_rep ); Py_INCREF( const_str_plain_rep );
    PyTuple_SET_ITEM( const_tuple_str_plain_rep_str_plain_default_str_plain_res_tuple, 1, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    PyTuple_SET_ITEM( const_tuple_str_plain_rep_str_plain_default_str_plain_res_tuple, 2, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_tuple_str_plain_typename_str_plain_bits_str_plain_t_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_typename_str_plain_bits_str_plain_t_tuple, 0, const_str_plain_typename ); Py_INCREF( const_str_plain_typename );
    PyTuple_SET_ITEM( const_tuple_str_plain_typename_str_plain_bits_str_plain_t_tuple, 1, const_str_plain_bits ); Py_INCREF( const_str_plain_bits );
    PyTuple_SET_ITEM( const_tuple_str_plain_typename_str_plain_bits_str_plain_t_tuple, 2, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_tuple_str_plain_arg1_str_plain_arg2_str_plain_mro_str_plain_val_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arg1_str_plain_arg2_str_plain_mro_str_plain_val_tuple, 0, const_str_plain_arg1 ); Py_INCREF( const_str_plain_arg1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arg1_str_plain_arg2_str_plain_mro_str_plain_val_tuple, 1, const_str_plain_arg2 ); Py_INCREF( const_str_plain_arg2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arg1_str_plain_arg2_str_plain_mro_str_plain_val_tuple, 2, const_str_plain_mro ); Py_INCREF( const_str_plain_mro );
    PyTuple_SET_ITEM( const_tuple_str_plain_arg1_str_plain_arg2_str_plain_mro_str_plain_val_tuple, 3, const_str_plain_val ); Py_INCREF( const_str_plain_val );
}

// The module code objects.
static PyCodeObject *codeobj_7d2e4f4e8732235894351d5504ab29fc;
static PyCodeObject *codeobj_01416264b179f02ea8602c95ba96b8d8;
static PyCodeObject *codeobj_fc94fd04c1d6475721943e028041fb23;
static PyCodeObject *codeobj_fa3362892ff804e5fe010fea358fbbcc;
static PyCodeObject *codeobj_a4ed8432b197d679ee9e9dab2b7c88b8;
static PyCodeObject *codeobj_5a66c866c8839c03b5ad6a244a48fbfb;
static PyCodeObject *codeobj_33a22a798d47e62f8f76da3b1a6ae383;
static PyCodeObject *codeobj_f998fc39875361694d55eef4e2874db2;
static PyCodeObject *codeobj_927b6c1c76bc2a06476f03e31241bd85;
static PyCodeObject *codeobj_5caa49c0158ad694f514f007a9e693ed;
static PyCodeObject *codeobj_ca3a6520a56e692a97c9afc0ba364aaf;
static PyCodeObject *codeobj_fd187a75522a697e41084a2082b82a07;
static PyCodeObject *codeobj_4c0a114299b95c6fb7b03238f75d8216;
static PyCodeObject *codeobj_55955bead56a9fe189510d54387f7e7f;
static PyCodeObject *codeobj_72f72acc429c2539d99efb819446f23b;
static PyCodeObject *codeobj_c0d7b8fe2564e6fbbf9da3883bade8ab;
static PyCodeObject *codeobj_eed0095f07181057d00ec7eb3aa4c3b5;
static PyCodeObject *codeobj_40a8f86f98c1df68fa6f43882c7222e6;
static PyCodeObject *codeobj_d650ee6d7973b5c417c901b8bd7a7120;
static PyCodeObject *codeobj_fad02ae71c490a022e71e7507c36f560;
static PyCodeObject *codeobj_cfaa7b3a03d2c5f846810f3b2f3fee7e;
static PyCodeObject *codeobj_c9719e7e3ba54bb22e808752850497f2;
static PyCodeObject *codeobj_5ffa6f70cf10a82ecf342c0107f53a3e;
static PyCodeObject *codeobj_3d7d8eed0e0ada13f91c6c365a5e6098;
static PyCodeObject *codeobj_afbaffa9d0bf2c1282efacbcb075ab7d;
static PyCodeObject *codeobj_1c47108a0dccba3195927b010a8af303;
static PyCodeObject *codeobj_2a167290add9d9006c8ba192ee0cc798;
static PyCodeObject *codeobj_1385b73ef75bdbdd9436ba87c8e438a4;
static PyCodeObject *codeobj_679e8233c3ce5e02544dcce97205841d;
static PyCodeObject *codeobj_85793a556c273edfdf7ec9718eec95fa;
static PyCodeObject *codeobj_6642492e0b6f94e4b1a2bacd28209fd6;
static PyCodeObject *codeobj_ac308c4b0eae0531af9f191d1ff01306;
static PyCodeObject *codeobj_dbdea59ac67bd4638b9ece7865bbf845;
static PyCodeObject *codeobj_e948e8d778d00c567ca61668592f50af;
static PyCodeObject *codeobj_a2b6c13969ad0a3e15b9a129cbdeaaa0;
static PyCodeObject *codeobj_3da08bca388f925b89b541ee74e28fa0;
static PyCodeObject *codeobj_78cf651ab61ae86d0a179c062f2ac651;
static PyCodeObject *codeobj_743f6892d8e2f44b479131f448864921;
static PyCodeObject *codeobj_7a93b300eb16d37bbde4676f895f9d7c;
static PyCodeObject *codeobj_aca9442c8224c94377287357d57f8f9e;
static PyCodeObject *codeobj_c1f449d14dfa047ae1eb56c8306bdf48;
static PyCodeObject *codeobj_cd872483d354a9eb370083b194bcf24d;
static PyCodeObject *codeobj_7b21f914cd6afa3d694c08d1457b038f;
static PyCodeObject *codeobj_80b07f36798dfe04a96a0e3d0a4ca164;
static PyCodeObject *codeobj_309e1df717701ebe0c893b9a42a6fb9b;
static PyCodeObject *codeobj_7b5bd9fdfb5792b343303fa694e6d644;
static PyCodeObject *codeobj_6d1c57c0d5339e80776a131a8f9400fc;
static PyCodeObject *codeobj_dcfa2721a1bde724a3efe10927faebc7;

static void _initModuleCodeObjects(void)
{
    codeobj_7d2e4f4e8732235894351d5504ab29fc = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_angle_lambda, 866, const_tuple_str_plain_x_str_plain_k_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_01416264b179f02ea8602c95ba96b8d8 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain___getitem__, 780, const_tuple_str_plain_self_str_plain_obj_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fc94fd04c1d6475721943e028041fb23 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__add_aliases, 304, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fa3362892ff804e5fe010fea358fbbcc = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__add_aliases, 304, const_tuple_58e8945272c16d3b7cb30359532ea9a7_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a4ed8432b197d679ee9e9dab2b7c88b8 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__add_array_type, 450, const_tuple_str_plain_typename_str_plain_bits_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5a66c866c8839c03b5ad6a244a48fbfb = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__add_array_type, 450, const_tuple_str_plain_typename_str_plain_bits_str_plain_t_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_33a22a798d47e62f8f76da3b1a6ae383 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__add_integer_aliases, 345, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f998fc39875361694d55eef4e2874db2 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__add_integer_aliases, 345, const_tuple_bbabd69c86430f4d16a08c3ae7bbfbeb_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_927b6c1c76bc2a06476f03e31241bd85 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__add_types, 288, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5caa49c0158ad694f514f007a9e693ed = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__add_types, 288, const_tuple_str_plain_a_str_plain_name_str_plain_typeobj_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ca3a6520a56e692a97c9afc0ba364aaf = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__can_coerce_all, 948, const_tuple_str_plain_dtypelist_str_plain_start_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fd187a75522a697e41084a2082b82a07 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__can_coerce_all, 948, const_tuple_6c3eebc08139832b038400b24cac48b9_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4c0a114299b95c6fb7b03238f75d8216 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__construct_char_code_lookup, 435, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_55955bead56a9fe189510d54387f7e7f = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__construct_char_code_lookup, 435, const_tuple_str_plain_name_str_plain_tup_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_72f72acc429c2539d99efb819446f23b = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__construct_lookups, 787, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c0d7b8fe2564e6fbbf9da3883bade8ab = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__construct_lookups, 787, const_tuple_str_plain_name_str_plain_val_str_plain_obj_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_eed0095f07181057d00ec7eb3aa4c3b5 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__evalname, 219, const_tuple_str_plain_name_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_40a8f86f98c1df68fa6f43882c7222e6 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__evalname, 219, const_tuple_2bdd0f7e7b68dcc7f297007b9a8ebce8_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d650ee6d7973b5c417c901b8bd7a7120 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__find_common_coerce, 938, const_tuple_str_plain_a_str_plain_b_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fad02ae71c490a022e71e7507c36f560 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__find_common_coerce, 938, const_tuple_str_plain_a_str_plain_b_str_plain_thisind_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cfaa7b3a03d2c5f846810f3b2f3fee7e = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__python_type, 554, const_tuple_str_plain_t_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c9719e7e3ba54bb22e808752850497f2 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__python_type, 560, const_tuple_str_plain_t_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5ffa6f70cf10a82ecf342c0107f53a3e = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__set_array_types, 458, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3d7d8eed0e0ada13f91c6c365a5e6098 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__set_array_types, 458, const_tuple_e2c8a88570e0107939814cfa77926bbe_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_afbaffa9d0bf2c1282efacbcb075ab7d = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__set_up_aliases, 386, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1c47108a0dccba3195927b010a8af303 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__set_up_aliases, 386, const_tuple_f2231347facf8374e65340fdd2698307_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2a167290add9d9006c8ba192ee0cc798 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain__typedict, 772, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1385b73ef75bdbdd9436ba87c8e438a4 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_bitname, 232, const_tuple_str_plain_obj_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_679e8233c3ce5e02544dcce97205841d = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_bitname, 232, const_tuple_62626145671345e7f322ad729a236196_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_85793a556c273edfdf7ec9718eec95fa = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_english_capitalize, 184, const_tuple_str_plain_s_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6642492e0b6f94e4b1a2bacd28209fd6 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_english_lower, 130, const_tuple_str_plain_s_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ac308c4b0eae0531af9f191d1ff01306 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_english_lower, 130, const_tuple_str_plain_s_str_plain_lowered_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dbdea59ac67bd4638b9ece7865bbf845 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_english_upper, 157, const_tuple_str_plain_s_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e948e8d778d00c567ca61668592f50af = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_english_upper, 157, const_tuple_str_plain_s_str_plain_uppered_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a2b6c13969ad0a3e15b9a129cbdeaaa0 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_find_common_type, 963, const_tuple_str_plain_array_types_str_plain_scalar_types_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3da08bca388f925b89b541ee74e28fa0 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_find_common_type, 963, const_tuple_6d365a98d1d398178edd94c06d91960e_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_78cf651ab61ae86d0a179c062f2ac651 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_issctype, 566, const_tuple_str_plain_rep_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_743f6892d8e2f44b479131f448864921 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_issctype, 566, const_tuple_str_plain_rep_str_plain_res_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7a93b300eb16d37bbde4676f895f9d7c = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_issubclass_, 667, const_tuple_str_plain_arg1_str_plain_arg2_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aca9442c8224c94377287357d57f8f9e = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_issubdtype, 735, const_tuple_str_plain_arg1_str_plain_arg2_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c1f449d14dfa047ae1eb56c8306bdf48 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_issubdtype, 735, const_tuple_str_plain_arg1_str_plain_arg2_str_plain_mro_str_plain_val_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cd872483d354a9eb370083b194bcf24d = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_issubsctype, 705, const_tuple_str_plain_arg1_str_plain_arg2_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7b21f914cd6afa3d694c08d1457b038f = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_maximum_sctype, 489, const_tuple_str_plain_t_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_80b07f36798dfe04a96a0e3d0a4ca164 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_maximum_sctype, 489, const_tuple_60a650889cf458ee75ef4bbd3b20ad85_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_309e1df717701ebe0c893b9a42a6fb9b = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_numerictypes, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7b5bd9fdfb5792b343303fa694e6d644 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_obj2sctype, 610, const_tuple_str_plain_rep_str_plain_default_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6d1c57c0d5339e80776a131a8f9400fc = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_obj2sctype, 610, const_tuple_str_plain_rep_str_plain_default_str_plain_res_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dcfa2721a1bde724a3efe10927faebc7 = MAKE_CODEOBJ( const_str_digest_0caf233dc22aa52058e6ce96ead78271, const_str_plain_sctype2char, 803, const_tuple_str_plain_sctype_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_21__typedict_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_10__construct_char_code_lookup_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_11__add_array_type_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_12__set_array_types_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_13_maximum_sctype_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_14__python_type_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_15__python_type_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_16_issctype_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_17_obj2sctype_of_module_numpy$core$numerictypes( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_18_issubclass__of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_19_issubsctype_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_1___getitem___of_class_21__typedict_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_1_english_lower_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_20_issubdtype_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_22__construct_lookups_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_23_sctype2char_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_25__find_common_coerce_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_26__can_coerce_all_of_module_numpy$core$numerictypes( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_27_find_common_type_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_2_english_upper_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_3_english_capitalize_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_4__evalname_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_5_bitname_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_6__add_types_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_7__add_aliases_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_8__add_integer_aliases_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_function_9__set_up_aliases_of_module_numpy$core$numerictypes(  );


static PyObject *MAKE_FUNCTION_lambda_24_lambda_of_module_numpy$core$numerictypes( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_english_lower_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_s; par_s.object = _python_par_s;
    PyObjectLocalVariable var_lowered;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6642492e0b6f94e4b1a2bacd28209fd6, module_numpy$core$numerictypes );
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

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_translate );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_LOWER_TABLE );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LOWER_TABLE );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74365 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 154;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    assert( var_lowered.object == NULL );
    var_lowered.object = tmp_assign_source_1;


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
    if ((var_lowered.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lowered,
            var_lowered.object
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
    tmp_return_value = var_lowered.object;

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
static PyObject *fparse_function_1_english_lower_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "english_lower() keywords must be strings" );
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
                   "english_lower() got an unexpected keyword argument '%s'",
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


    return impl_function_1_english_lower_of_module_numpy$core$numerictypes( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_1_english_lower_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_english_lower_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_english_lower_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_english_upper_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_s; par_s.object = _python_par_s;
    PyObjectLocalVariable var_uppered;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dbdea59ac67bd4638b9ece7865bbf845, module_numpy$core$numerictypes );
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

        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_translate );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_UPPER_TABLE );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UPPER_TABLE );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74405 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 181;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }
    assert( var_uppered.object == NULL );
    var_uppered.object = tmp_assign_source_1;


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
    if ((var_uppered.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_uppered,
            var_uppered.object
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
    tmp_return_value = var_uppered.object;

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
static PyObject *fparse_function_2_english_upper_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "english_upper() keywords must be strings" );
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
                   "english_upper() got an unexpected keyword argument '%s'",
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


    return impl_function_2_english_upper_of_module_numpy$core$numerictypes( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_2_english_upper_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_english_upper_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_english_upper_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_english_capitalize_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_s; par_s.object = _python_par_s;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_85793a556c273edfdf7ec9718eec95fa, module_numpy$core$numerictypes );
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
    tmp_cond_value_1 = par_s.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 209;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 209;
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_english_upper );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_english_upper );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74445 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = par_s.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_call_arg_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 210;
    tmp_binop_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = par_s.object;

    if ( tmp_slice_source_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = par_s.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 212;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
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
static PyObject *fparse_function_3_english_capitalize_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "english_capitalize() keywords must be strings" );
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
                   "english_capitalize() got an unexpected keyword argument '%s'",
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


    return impl_function_3_english_capitalize_of_module_numpy$core$numerictypes( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_3_english_capitalize_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_english_capitalize_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_english_capitalize_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__evalname_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_name; par_name.object = _python_par_name;
    PyObjectLocalVariable var_k;
    PyObjectLocalVariable var_ch;
    PyObjectLocalVariable var_bits;
    PyObjectLocalVariable var_base;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
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
    PyObject *tmp_called_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_int_0;
    assert( var_k.object == NULL );
    var_k.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_eed0095f07181057d00ec7eb3aa4c3b5, module_numpy$core$numerictypes );
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
    tmp_iter_arg_1 = par_name.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 221;
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
        frame_function->f_lineno = 221;
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

    if (var_ch.object == NULL)
    {
        var_ch.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_ch.object;
        var_ch.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_compare_left_1 = var_ch.object;

    tmp_compare_right_1 = const_str_plain_0123456789;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_assign_source_5 = var_k.object;

    if ( tmp_assign_source_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 224;
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

    tmp_binop_right_1 = const_int_pos_1;
    tmp_assign_source_6 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
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
    tmp_compare_left_2 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_2 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if (tmp_isnot_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_7 = tmp_inplace_assign_1__inplace_end.object;

    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    branch_no_2:;
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


        frame_function->f_lineno = 221;
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
    // Tried block of try/except
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_int );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74487 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto try_except_handler_1;
    }

    tmp_slice_source_1 = par_name.object;

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto try_except_handler_1;
    }

    tmp_slice_lower_1 = var_k.object;

    if ( tmp_slice_lower_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_1 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, Py_None );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 226;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto try_except_handler_1;
    }
    assert( var_bits.object == NULL );
    var_bits.object = tmp_assign_source_8;

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
    tmp_compare_right_3 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
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
    tmp_assign_source_9 = const_int_0;
    if (var_bits.object == NULL)
    {
        var_bits.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_bits.object;
        var_bits.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_3:;
    try_except_end_1:;
    tmp_slice_source_2 = par_name.object;

    if ( tmp_slice_source_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    tmp_slice_upper_1 = var_k.object;

    if ( tmp_slice_upper_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_10 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }
    assert( var_base.object == NULL );
    var_base.object = tmp_assign_source_10;

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_base.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_bits.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 882 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
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
    if ((var_k.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            var_k.object
        );

    }
    if ((var_ch.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ch,
            var_ch.object
        );

    }
    if ((var_bits.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bits,
            var_bits.object
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
    if ((par_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            par_name.object
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
static PyObject *fparse_function_4__evalname_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "_evalname() keywords must be strings" );
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

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_name, key ) == 1 )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_evalname() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_name == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_name == NULL ))
    {
        PyObject *values[] = { _python_par_name };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4__evalname_of_module_numpy$core$numerictypes( self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_4__evalname_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4__evalname_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__evalname_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_bitname_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_obj )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_obj; par_obj.object = _python_par_obj;
    PyObjectLocalVariable var_name;
    PyObjectLocalVariable var_base;
    PyObjectLocalVariable var_char;
    PyObjectLocalVariable var_newname;
    PyObjectLocalVariable var_info;
    PyObjectLocalVariable var_bits;
    PyObjectLocalVariable var_bytes;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    int tmp_cmp_Eq_6;
    int tmp_cmp_Eq_7;
    int tmp_cmp_Eq_8;
    int tmp_cmp_Eq_9;
    int tmp_cmp_Eq_10;
    int tmp_cmp_Eq_11;
    int tmp_cmp_GtE_1;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
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
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1385b73ef75bdbdd9436ba87c8e438a4, module_numpy$core$numerictypes );
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
    tmp_source_name_1 = par_obj.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10401 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }
    assert( var_name.object == NULL );
    var_name.object = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_empty;
    assert( var_base.object == NULL );
    var_base.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_assign_source_3 = const_str_empty;
    assert( var_char.object == NULL );
    var_char.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    // Tried block of try/except
    tmp_subscr_target_1 = var_name.object;

    tmp_subscr_subscript_1 = const_int_neg_1;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
        goto try_except_handler_1;
    }
    tmp_compare_right_1 = const_str_plain__;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 238;
        goto try_except_handler_1;
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
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_name.object;

    tmp_assign_source_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto try_except_handler_1;
    }
    assert( var_newname.object == NULL );
    var_newname.object = tmp_assign_source_4;

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_5 = var_name.object;

    assert( var_newname.object == NULL );
    var_newname.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    branch_end_1:;
    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 242;
        goto try_except_handler_1;
    }

    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_english_upper );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_english_upper );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74445 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 242;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_1 = var_newname.object;

    frame_function->f_lineno = 242;
    tmp_subscr_subscript_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_subscr_subscript_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto try_except_handler_1;
    }
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_subscript_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto try_except_handler_1;
    }
    assert( var_info.object == NULL );
    var_info.object = tmp_assign_source_6;

    tmp_subscr_target_3 = var_info.object;

    tmp_subscr_subscript_3 = const_int_neg_1;
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto try_except_handler_1;
    }
    tmp_compare_right_2 = par_obj.object;

    if ( tmp_compare_right_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10401 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto try_except_handler_1;
    }

    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 243;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 243;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_1;
    branch_no_2:;
    tmp_subscr_target_4 = var_info.object;

    tmp_subscr_subscript_4 = const_int_pos_2;
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto try_except_handler_1;
    }
    assert( var_bits.object == NULL );
    var_bits.object = tmp_assign_source_7;

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


        frame_function->f_lineno = 246;
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
    // Tried code
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__evalname );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__evalname );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74556 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_2 = var_name.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 247;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto try_finally_handler_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_8;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_9 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 247;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_9;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_10 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
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


        frame_function->f_lineno = 247;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_10;

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
    tmp_assign_source_11 = tmp_tuple_unpack_1__element_1.object;

    if (var_base.object == NULL)
    {
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = var_base.object;
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    tmp_assign_source_12 = tmp_tuple_unpack_1__element_2.object;

    if (var_bits.object == NULL)
    {
        var_bits.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_bits.object;
        var_bits.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
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
    tmp_subscr_target_5 = var_base.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_5 = const_int_0;
    tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }
    if (var_char.object == NULL)
    {
        var_char.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = var_char.object;
        var_char.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_3:;
    try_except_end_1:;
    tmp_compare_left_4 = var_name.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_str_plain_bool_;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_14 = const_str_plain_b;
    if (var_char.object == NULL)
    {
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = var_char.object;
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    tmp_assign_source_15 = const_str_plain_bool;
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
    goto branch_end_4;
    branch_no_4:;
    tmp_compare_left_5 = var_name.object;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = const_str_plain_void;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_4 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_16 = const_str_plain_V;
    if (var_char.object == NULL)
    {
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
    }
    else
    {
        PyObject *old = var_char.object;
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
        Py_DECREF( old );
    }
    tmp_assign_source_17 = const_str_plain_void;
    if (var_base.object == NULL)
    {
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
    }
    else
    {
        PyObject *old = var_base.object;
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
        Py_DECREF( old );
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_compare_left_6 = var_name.object;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = const_str_plain_object_;
    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_5 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_18 = const_str_plain_O;
    if (var_char.object == NULL)
    {
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
    }
    else
    {
        PyObject *old = var_char.object;
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }
    tmp_assign_source_19 = const_str_plain_object;
    if (var_base.object == NULL)
    {
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
    }
    else
    {
        PyObject *old = var_base.object;
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
        Py_DECREF( old );
    }
    tmp_assign_source_20 = const_int_0;
    if (var_bits.object == NULL)
    {
        var_bits.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
    }
    else
    {
        PyObject *old = var_bits.object;
        var_bits.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
        Py_DECREF( old );
    }
    goto branch_end_6;
    branch_no_6:;
    tmp_compare_left_7 = var_name.object;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = const_str_plain_datetime64;
    tmp_cmp_Eq_6 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_6 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_21 = const_str_plain_M;
    if (var_char.object == NULL)
    {
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
    }
    else
    {
        PyObject *old = var_char.object;
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
        Py_DECREF( old );
    }
    goto branch_end_7;
    branch_no_7:;
    tmp_compare_left_8 = var_name.object;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_8 = const_str_plain_timedelta64;
    tmp_cmp_Eq_7 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_7 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_22 = const_str_plain_m;
    if (var_char.object == NULL)
    {
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
    }
    else
    {
        PyObject *old = var_char.object;
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
        Py_DECREF( old );
    }
    branch_no_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
    if ( tmp_subscr_target_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_6 = const_int_0;
    tmp_compare_left_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_target_6 );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_9 = const_int_pos_3;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_9 );
    if (tmp_cmp_GtE_1 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_compare_left_10 = var_name.object;

    if ( tmp_compare_left_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 266;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_10 = const_str_plain_bytes_;
    tmp_cmp_Eq_8 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_8 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_23 = const_str_plain_S;
    if (var_char.object == NULL)
    {
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
    }
    else
    {
        PyObject *old = var_char.object;
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
        Py_DECREF( old );
    }
    tmp_assign_source_24 = const_str_plain_bytes;
    if (var_base.object == NULL)
    {
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_24 );
    }
    else
    {
        PyObject *old = var_base.object;
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_24 );
        Py_DECREF( old );
    }
    goto branch_end_10;
    branch_no_10:;
    tmp_compare_left_11 = var_name.object;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_11 = const_str_plain_str_;
    tmp_cmp_Eq_9 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Eq_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_9 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_25 = const_str_plain_U;
    if (var_char.object == NULL)
    {
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
    }
    else
    {
        PyObject *old = var_char.object;
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
        Py_DECREF( old );
    }
    tmp_assign_source_26 = const_str_plain_str;
    if (var_base.object == NULL)
    {
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
    }
    else
    {
        PyObject *old = var_base.object;
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
        Py_DECREF( old );
    }
    branch_no_11:;
    branch_end_10:;
    goto branch_end_9;
    branch_no_9:;
    tmp_compare_left_12 = var_name.object;

    if ( tmp_compare_left_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_12 = const_str_plain_string_;
    tmp_cmp_Eq_10 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_Eq_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_10 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_27 = const_str_plain_S;
    if (var_char.object == NULL)
    {
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_27 );
    }
    else
    {
        PyObject *old = var_char.object;
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_27 );
        Py_DECREF( old );
    }
    tmp_assign_source_28 = const_str_plain_string;
    if (var_base.object == NULL)
    {
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_28 );
    }
    else
    {
        PyObject *old = var_base.object;
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_28 );
        Py_DECREF( old );
    }
    goto branch_end_12;
    branch_no_12:;
    tmp_compare_left_13 = var_name.object;

    if ( tmp_compare_left_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_13 = const_str_plain_unicode_;
    tmp_cmp_Eq_11 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_Eq_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_11 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_assign_source_29 = const_str_plain_U;
    if (var_char.object == NULL)
    {
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
    }
    else
    {
        PyObject *old = var_char.object;
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
        Py_DECREF( old );
    }
    tmp_assign_source_30 = const_str_plain_unicode;
    if (var_base.object == NULL)
    {
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
    }
    else
    {
        PyObject *old = var_base.object;
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
        Py_DECREF( old );
    }
    branch_no_13:;
    branch_end_12:;
    branch_end_9:;
    tmp_binop_left_1 = var_bits.object;

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 882 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 280;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = const_int_pos_8;
    tmp_assign_source_31 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 280;
        goto frame_exception_exit_1;
    }
    assert( var_bytes.object == NULL );
    var_bytes.object = tmp_assign_source_31;

    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_char.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74594 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 282;
        goto try_finally_handler_3;
    }

    tmp_compexpr_right_1 = const_str_empty;
    tmp_assign_source_32 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 282;
        goto try_finally_handler_3;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_32;

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 282;
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
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = var_bytes.object;

    tmp_compexpr_right_2 = const_int_0;
    tmp_cond_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 282;
        goto try_finally_handler_4;
    }
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
    try_finally_handler_3:;
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

        goto try_finally_handler_2;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 282;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_binop_left_2 = const_str_digest_754278f1f770a5f41d9cde40f144d1da;
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_char.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74594 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_bytes.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67909 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_1 );
    tmp_assign_source_33 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto try_finally_handler_2;
    }
    if (var_char.object == NULL)
    {
        var_char.object = tmp_assign_source_33;
    }
    else
    {
        PyObject *old = var_char.object;
        var_char.object = tmp_assign_source_33;
        Py_DECREF( old );
    }
    branch_no_14:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
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
    tmp_return_value = PyTuple_New( 3 );
    tmp_tuple_element_2 = var_base.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_bits.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 882 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_char.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74594 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
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
    if ((var_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            var_name.object
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
    if ((var_char.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_char,
            var_char.object
        );

    }
    if ((var_newname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_newname,
            var_newname.object
        );

    }
    if ((var_info.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info,
            var_info.object
        );

    }
    if ((var_bits.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bits,
            var_bits.object
        );

    }
    if ((var_bytes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bytes,
            var_bytes.object
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
static PyObject *fparse_function_5_bitname_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "bitname() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_obj == key )
            {
                assert( _python_par_obj == NULL );
                _python_par_obj = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
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
                   "bitname() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_obj != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_obj = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_obj == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_obj = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_obj == NULL ))
    {
        PyObject *values[] = { _python_par_obj };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_bitname_of_module_numpy$core$numerictypes( self, _python_par_obj );

error_exit:;

    Py_XDECREF( _python_par_obj );

    return NULL;
}

static PyObject *dparse_function_5_bitname_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_5_bitname_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_bitname_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6__add_types_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_a;
    PyObjectLocalVariable var_name;
    PyObjectLocalVariable var_typeobj;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_subscript_6;
    PyObject *tmp_subscr_subscript_7;
    PyObject *tmp_subscr_subscript_8;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_subscr_target_5;
    PyObject *tmp_subscr_target_6;
    PyObject *tmp_subscr_target_7;
    PyObject *tmp_subscr_target_8;
    int tmp_tried_lineno_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_927b6c1c76bc2a06476f03e31241bd85, module_numpy$core$numerictypes );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 289;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
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
        frame_function->f_lineno = 289;
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

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_english_lower );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_english_lower );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74644 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 290;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_1 = var_a.object;

    frame_function->f_lineno = 290;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 290;
        goto try_finally_handler_1;
    }
    if (var_name.object == NULL)
    {
        var_name.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = var_name.object;
        var_name.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = var_a.object;

    tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto try_finally_handler_1;
    }
    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_inst_1 );

        frame_function->f_lineno = 291;
        goto try_finally_handler_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto try_finally_handler_1;
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
    tmp_subscr_target_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_subscr_target_3 == NULL ))
    {
        tmp_subscr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_3 = var_a.object;

    tmp_subscr_target_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_2 = const_int_neg_1;
    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto try_finally_handler_1;
    }
    if (var_typeobj.object == NULL)
    {
        var_typeobj.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = var_typeobj.object;
        var_typeobj.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_ass_subvalue_1 = var_typeobj.object;

    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74686 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_1 = var_name.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_2 = var_typeobj.object;

    tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_2 == NULL ))
    {
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_2 = var_name.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 296;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_3 = var_typeobj.object;

    tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_3 == NULL ))
    {
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 297;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_subscr_target_5 == NULL ))
    {
        tmp_subscr_target_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 297;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_5 = var_a.object;

    tmp_subscr_target_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_subscr_target_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_4 = const_int_0;
    tmp_ass_subscript_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_target_4 );
    if ( tmp_ass_subscript_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto try_finally_handler_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscript_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_4 = var_typeobj.object;

    tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_4 == NULL ))
    {
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 298;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_subscr_target_7 == NULL ))
    {
        tmp_subscr_target_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_subscr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 298;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_7 = var_a.object;

    tmp_subscr_target_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_subscr_target_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_6 = const_int_pos_1;
    tmp_ass_subscript_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_target_6 );
    if ( tmp_ass_subscript_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto try_finally_handler_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subscript_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto try_finally_handler_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_subscr_target_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_subscr_target_8 == NULL ))
    {
        tmp_subscr_target_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_8 = var_a.object;

    tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_ass_subvalue_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_ass_subscribed_5 == NULL ))
    {
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_ass_subscribed_5 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74686 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_5 = var_name.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    Py_DECREF( tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto try_finally_handler_1;
    }
    branch_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
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
    if ((var_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a,
            var_a.object
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
    if ((var_typeobj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_typeobj,
            var_typeobj.object
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
static PyObject *fparse_function_6__add_types_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_6__add_types_of_module_numpy$core$numerictypes( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_6__add_types_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_6__add_types_of_module_numpy$core$numerictypes( self );
    }
    else
    {
        PyObject *result = fparse_function_6__add_types_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7__add_aliases_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_a;
    PyObjectLocalVariable var_name;
    PyObjectLocalVariable var_typeobj;
    PyObjectLocalVariable var_base;
    PyObjectLocalVariable var_bit;
    PyObjectLocalVariable var_char;
    PyObjectLocalVariable var_myname;
    PyObjectLocalVariable var_na_name;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_1__element_3;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
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
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
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
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
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
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
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
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fc94fd04c1d6475721943e028041fb23, module_numpy$core$numerictypes );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 305;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
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
        frame_function->f_lineno = 305;
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

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_english_lower );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_english_lower );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74644 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_1 = var_a.object;

    frame_function->f_lineno = 306;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto try_finally_handler_1;
    }
    if (var_name.object == NULL)
    {
        var_name.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = var_name.object;
        var_name.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 307;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = var_a.object;

    tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto try_finally_handler_1;
    }
    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_inst_1 );

        frame_function->f_lineno = 307;
        goto try_finally_handler_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto try_finally_handler_1;
    }
    if (tmp_res == 1)
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
    tmp_subscr_target_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_subscr_target_3 == NULL ))
    {
        tmp_subscr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 309;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_3 = var_a.object;

    tmp_subscr_target_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_2 = const_int_neg_1;
    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto try_finally_handler_1;
    }
    if (var_typeobj.object == NULL)
    {
        var_typeobj.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = var_typeobj.object;
        var_typeobj.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    // Tried code
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_bitname );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bitname );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74762 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_2 = var_typeobj.object;

    frame_function->f_lineno = 311;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto try_finally_handler_2;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
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


        frame_function->f_lineno = 311;
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


        frame_function->f_lineno = 311;
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
    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_9 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 2 );
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


        frame_function->f_lineno = 311;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__element_3.object == NULL)
    {
        tmp_tuple_unpack_1__element_3.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_3.object;
        tmp_tuple_unpack_1__element_3.object = tmp_assign_source_9;
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
    tmp_assign_source_10 = tmp_tuple_unpack_1__element_1.object;

    if (var_base.object == NULL)
    {
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_base.object;
        var_base.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    tmp_assign_source_11 = tmp_tuple_unpack_1__element_2.object;

    if (var_bit.object == NULL)
    {
        var_bit.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = var_bit.object;
        var_bit.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    tmp_assign_source_12 = tmp_tuple_unpack_1__element_3.object;

    if (var_char.object == NULL)
    {
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_char.object;
        var_char.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
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
    tmp_continue_1 = false;
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_sliceslicedel_index_lower_1 = -3;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_base.object;

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto try_finally_handler_4;
    }

    tmp_compexpr_left_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_4;
    }
    tmp_compexpr_right_1 = const_str_plain_int;
    tmp_assign_source_13 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_4;
    }
    if (tmp_or_1__value_1.object == NULL)
    {
        tmp_or_1__value_1.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = tmp_or_1__value_1.object;
        tmp_or_1__value_1.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_4;
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
    tmp_subscr_target_4 = var_char.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74594 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto try_finally_handler_5;
    }

    tmp_subscr_subscript_4 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_5;
    }
    tmp_compexpr_right_2 = const_str_plain_ui;
    tmp_cond_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 312;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_compexpr_left_2 );
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
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_3;
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
    tmp_continue_1 = true;
    goto try_finally_handler_start_1;
    branch_no_2:;
    try_finally_handler_start_1:;
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
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

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

    // Continue if entered via continue.
    if ( tmp_continue_1 )
    {

    goto loop_start_1;
    }
    goto finally_end_4;
    finally_end_4:;
    tmp_compare_left_1 = var_base.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto try_finally_handler_1;
    }

    tmp_compare_right_1 = const_str_empty;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 313;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_binop_left_1 = const_str_digest_754278f1f770a5f41d9cde40f144d1da;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_base.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_bit.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74798 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_14 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }
    if (var_myname.object == NULL)
    {
        var_myname.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = var_myname.object;
        var_myname.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    // Tried code
    tmp_assign_source_15 = NULL;
    // Tried code
    tmp_compexpr_left_3 = var_name.object;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 315;
        goto try_finally_handler_9;
    }

    tmp_compexpr_right_3 = const_str_plain_longdouble;
    tmp_assign_source_16 = RICH_COMPARE_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto try_finally_handler_9;
    }
    if (tmp_and_1__value_1.object == NULL)
    {
        tmp_and_1__value_1.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = tmp_and_1__value_1.object;
        tmp_and_1__value_1.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    tmp_cond_value_4 = tmp_and_1__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
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
    tmp_assign_source_15 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_4 = var_name.object;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 315;
        goto try_finally_handler_10;
    }

    tmp_compexpr_right_4 = const_str_plain_clongdouble;
    tmp_assign_source_15 = RICH_COMPARE_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto try_finally_handler_10;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
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

        goto try_finally_handler_9;
    }

    goto finally_end_5;
    finally_end_5:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_15 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_assign_source_15 );
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
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

        goto try_finally_handler_8;
    }

    goto finally_end_6;
    finally_end_6:;
    if (tmp_or_2__value_1.object == NULL)
    {
        tmp_or_2__value_1.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = tmp_or_2__value_1.object;
        tmp_or_2__value_1.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
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

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

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


        frame_function->f_lineno = 315;
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
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_5 = var_myname.object;

    if ( tmp_compexpr_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74847 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto try_finally_handler_11;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74686 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto try_finally_handler_11;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_keys );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto try_finally_handler_11;
    }
    frame_function->f_lineno = 316;
    tmp_compexpr_right_5 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_compexpr_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto try_finally_handler_11;
    }
    tmp_cond_value_3 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_5 );

        frame_function->f_lineno = 316;
        goto try_finally_handler_11;
    }
    Py_DECREF( tmp_compexpr_right_5 );
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

        goto try_finally_handler_7;
    }

    goto finally_end_8;
    finally_end_8:;
    condexpr_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
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

        goto try_finally_handler_6;
    }

    goto finally_end_9;
    finally_end_9:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto try_finally_handler_6;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_ass_subvalue_1 = var_typeobj.object;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74899 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_6;
    }

    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74686 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_6;
    }

    tmp_ass_subscript_1 = var_myname.object;

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74847 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_6;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto try_finally_handler_6;
    }
    tmp_ass_subvalue_2 = var_typeobj.object;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74899 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 318;
        goto try_finally_handler_6;
    }

    tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_2 == NULL ))
    {
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 318;
        goto try_finally_handler_6;
    }

    tmp_ass_subscript_2 = var_myname.object;

    if ( tmp_ass_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74847 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 318;
        goto try_finally_handler_6;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 318;
        goto try_finally_handler_6;
    }
    tmp_compare_left_2 = var_base.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 319;
        goto try_finally_handler_6;
    }

    tmp_compare_right_2 = const_str_plain_complex;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 319;
        goto try_finally_handler_6;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_binop_left_2 = const_str_digest_754278f1f770a5f41d9cde40f144d1da;
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_english_capitalize );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_english_capitalize );
    }

    if ( tmp_called_5 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74952 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 320;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_3 = var_base.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 320;
        goto try_finally_handler_6;
    }

    frame_function->f_lineno = 320;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 320;
        goto try_finally_handler_6;
    }
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_2 );
    tmp_binop_left_3 = var_bit.object;

    if ( tmp_binop_left_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74798 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 320;
        goto try_finally_handler_6;
    }

    tmp_binop_right_3 = const_int_pos_2;
    tmp_tuple_element_2 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 320;
        goto try_finally_handler_6;
    }
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_2 );
    tmp_assign_source_17 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 320;
        goto try_finally_handler_6;
    }
    if (var_na_name.object == NULL)
    {
        var_na_name.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = var_na_name.object;
        var_na_name.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_compare_left_3 = var_base.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto try_finally_handler_6;
    }

    tmp_compare_right_3 = const_str_plain_bool;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto try_finally_handler_6;
    }
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_english_capitalize );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_english_capitalize );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74952 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 322;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_4 = var_base.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 322;
        goto try_finally_handler_6;
    }

    frame_function->f_lineno = 322;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 322;
        goto try_finally_handler_6;
    }
    if (var_na_name.object == NULL)
    {
        var_na_name.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = var_na_name.object;
        var_na_name.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    tmp_ass_subvalue_3 = var_typeobj.object;

    if ( tmp_ass_subvalue_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74899 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 323;
        goto try_finally_handler_6;
    }

    tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_3 == NULL ))
    {
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 323;
        goto try_finally_handler_6;
    }

    tmp_ass_subscript_3 = var_na_name.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 323;
        goto try_finally_handler_6;
    }
    goto branch_end_6;
    branch_no_6:;
    tmp_binop_left_4 = const_str_digest_754278f1f770a5f41d9cde40f144d1da;
    tmp_binop_right_4 = PyTuple_New( 2 );
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_english_capitalize );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_english_capitalize );
    }

    if ( tmp_called_7 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74952 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 325;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_5 = var_base.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 325;
        goto try_finally_handler_6;
    }

    frame_function->f_lineno = 325;
    tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_5 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_4 );

        frame_function->f_lineno = 325;
        goto try_finally_handler_6;
    }
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_bit.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74798 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 325;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 1, tmp_tuple_element_3 );
    tmp_assign_source_19 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 325;
        goto try_finally_handler_6;
    }
    if (var_na_name.object == NULL)
    {
        var_na_name.object = tmp_assign_source_19;
    }
    else
    {
        PyObject *old = var_na_name.object;
        var_na_name.object = tmp_assign_source_19;
        Py_DECREF( old );
    }
    tmp_ass_subvalue_4 = var_typeobj.object;

    if ( tmp_ass_subvalue_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74899 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 326;
        goto try_finally_handler_6;
    }

    tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_4 == NULL ))
    {
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 326;
        goto try_finally_handler_6;
    }

    tmp_ass_subscript_4 = var_na_name.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 326;
        goto try_finally_handler_6;
    }
    branch_end_6:;
    branch_end_5:;
    tmp_ass_subvalue_5 = var_typeobj.object;

    if ( tmp_ass_subvalue_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74899 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 327;
        goto try_finally_handler_6;
    }

    tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA );

    if (unlikely( tmp_ass_subscribed_5 == NULL ))
    {
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeNA );
    }

    if ( tmp_ass_subscribed_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74999 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 327;
        goto try_finally_handler_6;
    }

    tmp_ass_subscript_5 = var_na_name.object;

    if ( tmp_ass_subscript_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75036 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 327;
        goto try_finally_handler_6;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 327;
        goto try_finally_handler_6;
    }
    tmp_ass_subvalue_6 = var_typeobj.object;

    if ( tmp_ass_subvalue_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74899 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 328;
        goto try_finally_handler_6;
    }

    tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_6 == NULL ))
    {
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 328;
        goto try_finally_handler_6;
    }

    tmp_ass_subscript_6 = var_na_name.object;

    if ( tmp_ass_subscript_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75036 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 328;
        goto try_finally_handler_6;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 328;
        goto try_finally_handler_6;
    }
    tmp_ass_subvalue_7 = var_na_name.object;

    if ( tmp_ass_subvalue_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75036 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 329;
        goto try_finally_handler_6;
    }

    tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA );

    if (unlikely( tmp_ass_subscribed_7 == NULL ))
    {
        tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeNA );
    }

    if ( tmp_ass_subscribed_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74999 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 329;
        goto try_finally_handler_6;
    }

    tmp_ass_subscript_7 = var_typeobj.object;

    if ( tmp_ass_subscript_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74899 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 329;
        goto try_finally_handler_6;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 329;
        goto try_finally_handler_6;
    }
    tmp_ass_subvalue_8 = var_na_name.object;

    if ( tmp_ass_subvalue_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75036 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto try_finally_handler_6;
    }

    tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA );

    if (unlikely( tmp_ass_subscribed_8 == NULL ))
    {
        tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeNA );
    }

    if ( tmp_ass_subscribed_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74999 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto try_finally_handler_6;
    }

    tmp_subscr_target_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_subscr_target_6 == NULL ))
    {
        tmp_subscr_target_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto try_finally_handler_6;
    }

    tmp_subscr_subscript_6 = var_a.object;

    if ( tmp_subscr_subscript_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto try_finally_handler_6;
    }

    tmp_subscr_target_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_subscr_target_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto try_finally_handler_6;
    }
    tmp_subscr_subscript_5 = const_int_0;
    tmp_ass_subscript_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_target_5 );
    if ( tmp_ass_subscript_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto try_finally_handler_6;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8 );
    Py_DECREF( tmp_ass_subscript_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto try_finally_handler_6;
    }
    branch_no_4:;
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

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto try_finally_handler_1;
    }

    goto finally_end_10;
    finally_end_10:;
    branch_no_3:;
    tmp_compare_left_4 = var_char.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74594 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 331;
        goto try_finally_handler_1;
    }

    tmp_compare_right_4 = const_str_empty;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 331;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_ass_subvalue_9 = var_typeobj.object;

    if ( tmp_ass_subvalue_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74899 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 332;
        goto try_finally_handler_1;
    }

    tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_9 == NULL ))
    {
        tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 332;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_9 = var_char.object;

    if ( tmp_ass_subscript_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74594 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 332;
        goto try_finally_handler_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 332;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_10 = var_na_name.object;

    if ( tmp_ass_subvalue_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75036 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 333;
        goto try_finally_handler_1;
    }

    tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA );

    if (unlikely( tmp_ass_subscribed_10 == NULL ))
    {
        tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeNA );
    }

    if ( tmp_ass_subscribed_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74999 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 333;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_10 = var_char.object;

    if ( tmp_ass_subscript_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74594 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 333;
        goto try_finally_handler_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 333;
        goto try_finally_handler_1;
    }
    branch_no_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
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
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
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
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto frame_exception_exit_1;
    }

    goto finally_end_11;
    finally_end_11:;

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
    if ((var_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a,
            var_a.object
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
    if ((var_typeobj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_typeobj,
            var_typeobj.object
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
    if ((var_bit.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bit,
            var_bit.object
        );

    }
    if ((var_char.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_char,
            var_char.object
        );

    }
    if ((var_myname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_myname,
            var_myname.object
        );

    }
    if ((var_na_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_na_name,
            var_na_name.object
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
static PyObject *fparse_function_7__add_aliases_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_7__add_aliases_of_module_numpy$core$numerictypes( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_7__add_aliases_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_7__add_aliases_of_module_numpy$core$numerictypes( self );
    }
    else
    {
        PyObject *result = fparse_function_7__add_aliases_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8__add_integer_aliases_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var__ctypes;
    PyObjectLocalVariable var_ctype;
    PyObjectLocalVariable var_val;
    PyObjectLocalVariable var_bits;
    PyObjectLocalVariable var_charname;
    PyObjectLocalVariable var_ucharname;
    PyObjectLocalVariable var_intname;
    PyObjectLocalVariable var_UIntname;
    PyObjectLocalVariable var_Intname;
    PyObjectLocalVariable var_uval;
    PyObjectLocalVariable var_typeobj;
    PyObjectLocalVariable var_utypeobj;
    PyObjectLocalVariable var_uintname;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
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
    PyObject *tmp_called_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_subscript_6;
    PyObject *tmp_subscr_subscript_7;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_subscr_target_5;
    PyObject *tmp_subscr_target_6;
    PyObject *tmp_subscr_target_7;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = LIST_COPY( const_list_39ff5b299dcf631c2e51b2016e85e124_list );
    assert( var__ctypes.object == NULL );
    var__ctypes.object = tmp_assign_source_1;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_33a22a798d47e62f8f76da3b1a6ae383, module_numpy$core$numerictypes );
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
    tmp_iter_arg_1 = var__ctypes.object;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
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
        frame_function->f_lineno = 347;
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

    if (var_ctype.object == NULL)
    {
        var_ctype.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_ctype.object;
        var_ctype.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 348;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = var_ctype.object;

    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 348;
        goto try_finally_handler_1;
    }
    if (var_val.object == NULL)
    {
        var_val.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = var_val.object;
        var_val.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_subscr_target_2 = var_val.object;

    tmp_subscr_subscript_2 = const_int_pos_2;
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto try_finally_handler_1;
    }
    if (var_bits.object == NULL)
    {
        var_bits.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = var_bits.object;
        var_bits.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_binop_left_1 = const_str_digest_06c5b8e330c3a885aaa011d1f606d7db;
    tmp_binop_right_1 = PyTuple_New( 1 );
    tmp_binop_left_2 = var_bits.object;

    tmp_binop_right_2 = const_int_pos_8;
    tmp_tuple_element_1 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 350;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 350;
        goto try_finally_handler_1;
    }
    if (var_charname.object == NULL)
    {
        var_charname.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = var_charname.object;
        var_charname.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_binop_left_3 = const_str_digest_25b19d10bc0b54ad50c32127a2ed7db9;
    tmp_binop_right_3 = PyTuple_New( 1 );
    tmp_binop_left_4 = var_bits.object;

    tmp_binop_right_4 = const_int_pos_8;
    tmp_tuple_element_2 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 351;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_2 );
    tmp_assign_source_8 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 351;
        goto try_finally_handler_1;
    }
    if (var_ucharname.object == NULL)
    {
        var_ucharname.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = var_ucharname.object;
        var_ucharname.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    tmp_binop_left_5 = const_str_digest_75fbfdbca1f8c682993ab9394c3dde60;
    tmp_binop_right_5 = var_bits.object;

    tmp_assign_source_9 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 352;
        goto try_finally_handler_1;
    }
    if (var_intname.object == NULL)
    {
        var_intname.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = var_intname.object;
        var_intname.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    tmp_binop_left_6 = const_str_digest_832d17b06aa5774afe460a707e3f869a;
    tmp_binop_right_6 = var_bits.object;

    tmp_assign_source_10 = BINARY_OPERATION_REMAINDER( tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 353;
        goto try_finally_handler_1;
    }
    if (var_UIntname.object == NULL)
    {
        var_UIntname.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = var_UIntname.object;
        var_UIntname.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_binop_left_7 = const_str_digest_5c5d994355f6b8e0d54c72f83f0c508e;
    tmp_binop_right_7 = var_bits.object;

    tmp_assign_source_11 = BINARY_OPERATION_REMAINDER( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
        goto try_finally_handler_1;
    }
    if (var_Intname.object == NULL)
    {
        var_Intname.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = var_Intname.object;
        var_Intname.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_subscr_target_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_subscr_target_3 == NULL ))
    {
        tmp_subscr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto try_finally_handler_1;
    }

    tmp_binop_left_8 = const_str_plain_U;
    tmp_binop_right_8 = var_ctype.object;

    tmp_subscr_subscript_3 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    if ( tmp_subscr_subscript_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto try_finally_handler_1;
    }
    tmp_assign_source_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_subscript_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto try_finally_handler_1;
    }
    if (var_uval.object == NULL)
    {
        var_uval.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = var_uval.object;
        var_uval.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    tmp_subscr_target_4 = var_val.object;

    tmp_subscr_subscript_4 = const_int_neg_1;
    tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto try_finally_handler_1;
    }
    if (var_typeobj.object == NULL)
    {
        var_typeobj.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = var_typeobj.object;
        var_typeobj.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_subscr_target_5 = var_uval.object;

    tmp_subscr_subscript_5 = const_int_neg_1;
    tmp_assign_source_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
        goto try_finally_handler_1;
    }
    if (var_utypeobj.object == NULL)
    {
        var_utypeobj.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = var_utypeobj.object;
        var_utypeobj.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    tmp_compare_left_1 = var_intname.object;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74686 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 358;
        goto try_finally_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 358;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 358;
    tmp_compare_right_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 358;
        goto try_finally_handler_1;
    }
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 358;
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
    tmp_binop_left_9 = const_str_digest_f2c445fe234fb58e8d7393293c956c0e;
    tmp_binop_right_9 = var_bits.object;

    tmp_assign_source_15 = BINARY_OPERATION_REMAINDER( tmp_binop_left_9, tmp_binop_right_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 359;
        goto try_finally_handler_1;
    }
    if (var_uintname.object == NULL)
    {
        var_uintname.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_uintname.object;
        var_uintname.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_ass_subvalue_1 = var_typeobj.object;

    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74686 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_1 = var_intname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 360;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_2 = var_utypeobj.object;

    tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_ass_subscribed_2 == NULL ))
    {
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74686 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 361;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_2 = var_uintname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 361;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_3 = var_typeobj.object;

    tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_3 == NULL ))
    {
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_3 = var_intname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_4 = var_utypeobj.object;

    tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_4 == NULL ))
    {
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 363;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_4 = var_uintname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 363;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_5 = var_typeobj.object;

    tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_5 == NULL ))
    {
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_5 = var_Intname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_6 = var_utypeobj.object;

    tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_6 == NULL ))
    {
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_6 = var_UIntname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 365;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_7 = var_typeobj.object;

    tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_7 == NULL ))
    {
        tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 366;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_7 = var_charname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 366;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_8 = var_utypeobj.object;

    tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_8 == NULL ))
    {
        tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 367;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_8 = var_ucharname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 367;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_9 = var_typeobj.object;

    tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA );

    if (unlikely( tmp_ass_subscribed_9 == NULL ))
    {
        tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeNA );
    }

    if ( tmp_ass_subscribed_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74999 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 368;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_9 = var_Intname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_10 = var_utypeobj.object;

    tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA );

    if (unlikely( tmp_ass_subscribed_10 == NULL ))
    {
        tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeNA );
    }

    if ( tmp_ass_subscribed_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74999 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_10 = var_UIntname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_11 = var_typeobj.object;

    tmp_ass_subscribed_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA );

    if (unlikely( tmp_ass_subscribed_11 == NULL ))
    {
        tmp_ass_subscribed_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeNA );
    }

    if ( tmp_ass_subscribed_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74999 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 370;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_11 = var_charname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_12 = var_utypeobj.object;

    tmp_ass_subscribed_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA );

    if (unlikely( tmp_ass_subscribed_12 == NULL ))
    {
        tmp_ass_subscribed_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeNA );
    }

    if ( tmp_ass_subscribed_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74999 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 371;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_12 = var_ucharname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto try_finally_handler_1;
    }
    branch_no_1:;
    tmp_ass_subvalue_13 = var_Intname.object;

    tmp_ass_subscribed_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA );

    if (unlikely( tmp_ass_subscribed_13 == NULL ))
    {
        tmp_ass_subscribed_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeNA );
    }

    if ( tmp_ass_subscribed_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74999 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_13 = var_typeobj.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_14 = var_UIntname.object;

    tmp_ass_subscribed_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA );

    if (unlikely( tmp_ass_subscribed_14 == NULL ))
    {
        tmp_ass_subscribed_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeNA );
    }

    if ( tmp_ass_subscribed_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74999 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_14 = var_utypeobj.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_15 = var_Intname.object;

    tmp_ass_subscribed_15 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA );

    if (unlikely( tmp_ass_subscribed_15 == NULL ))
    {
        tmp_ass_subscribed_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeNA );
    }

    if ( tmp_ass_subscribed_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74999 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 374;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_6 = var_val.object;

    tmp_subscr_subscript_6 = const_int_0;
    tmp_ass_subscript_15 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_ass_subscript_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15 );
    Py_DECREF( tmp_ass_subscript_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_16 = var_UIntname.object;

    tmp_ass_subscribed_16 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA );

    if (unlikely( tmp_ass_subscribed_16 == NULL ))
    {
        tmp_ass_subscribed_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeNA );
    }

    if ( tmp_ass_subscribed_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74999 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 375;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_7 = var_uval.object;

    tmp_subscr_subscript_7 = const_int_0;
    tmp_ass_subscript_16 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_ass_subscript_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 375;
        goto try_finally_handler_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16 );
    Py_DECREF( tmp_ass_subscript_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 375;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
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
    if ((var__ctypes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__ctypes,
            var__ctypes.object
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
    if ((var_val.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_val,
            var_val.object
        );

    }
    if ((var_bits.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bits,
            var_bits.object
        );

    }
    if ((var_charname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_charname,
            var_charname.object
        );

    }
    if ((var_ucharname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ucharname,
            var_ucharname.object
        );

    }
    if ((var_intname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_intname,
            var_intname.object
        );

    }
    if ((var_UIntname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_UIntname,
            var_UIntname.object
        );

    }
    if ((var_Intname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Intname,
            var_Intname.object
        );

    }
    if ((var_uval.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_uval,
            var_uval.object
        );

    }
    if ((var_typeobj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_typeobj,
            var_typeobj.object
        );

    }
    if ((var_utypeobj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_utypeobj,
            var_utypeobj.object
        );

    }
    if ((var_uintname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_uintname,
            var_uintname.object
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
static PyObject *fparse_function_8__add_integer_aliases_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_8__add_integer_aliases_of_module_numpy$core$numerictypes( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_8__add_integer_aliases_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_8__add_integer_aliases_of_module_numpy$core$numerictypes( self );
    }
    else
    {
        PyObject *result = fparse_function_8__add_integer_aliases_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9__set_up_aliases_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_type_pairs;
    PyObjectLocalVariable var_alias;
    PyObjectLocalVariable var_t;
    PyObjectLocalVariable var_to_remove;
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
    int tmp_cmp_GtE_1;
    int tmp_cmp_GtE_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_subscript_2;
    PyObject *tmp_delsubscr_target_1;
    PyObject *tmp_delsubscr_target_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
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
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = LIST_COPY( const_list_8a7a3e2a3795a23e46bc850266a16061_list );
    assert( var_type_pairs.object == NULL );
    var_type_pairs.object = tmp_assign_source_1;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_afbaffa9d0bf2c1282efacbcb075ab7d, module_numpy$core$numerictypes );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_3;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 405;
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
    tmp_source_name_2 = var_type_pairs.object;

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_extend );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 406;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = LIST_COPY( const_list_b6ca87f51faaa7e884f0dabf71c4217d_list );
    frame_function->f_lineno = 408;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_3 = var_type_pairs.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extend );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = LIST_COPY( const_list_14eb2d757a7ca4e46dfa4e9b667ebbf2_list );
    frame_function->f_lineno = 412;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 412;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;
    tmp_iter_arg_1 = var_type_pairs.object;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 413;
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
        frame_function->f_lineno = 413;
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


        frame_function->f_lineno = 413;
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


        frame_function->f_lineno = 413;
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


        frame_function->f_lineno = 413;
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

    if (var_alias.object == NULL)
    {
        var_alias.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = var_alias.object;
        var_alias.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2.object;

    if (var_t.object == NULL)
    {
        var_t.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_t.object;
        var_t.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
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
    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74686 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 414;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_2 = var_t.object;

    if ( tmp_subscr_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 414;
        goto try_finally_handler_1;
    }

    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 414;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74686 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 414;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_1 = var_alias.object;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75089 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 414;
        goto try_finally_handler_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 414;
        goto try_finally_handler_1;
    }
    tmp_subscr_target_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_subscr_target_3 == NULL ))
    {
        tmp_subscr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_3 = var_t.object;

    if ( tmp_subscr_subscript_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto try_finally_handler_1;
    }

    tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_2 == NULL ))
    {
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_2 = var_alias.object;

    if ( tmp_ass_subscript_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75089 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto try_finally_handler_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 413;
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
    tmp_assign_source_9 = LIST_COPY( const_list_1ae925d4d23322299d78c901d41a19ec_list );
    assert( var_to_remove.object == NULL );
    var_to_remove.object = tmp_assign_source_9;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_version_info );
    if ( tmp_subscr_target_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_4 = const_int_0;
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_target_4 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_3;
    tmp_cmp_GtE_2 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_GtE_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_5 = var_to_remove.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_plain_bytes;
    frame_function->f_lineno = 421;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = var_to_remove.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_plain_str;
    frame_function->f_lineno = 422;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = var_to_remove.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_remove );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_plain_unicode;
    frame_function->f_lineno = 423;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = var_to_remove.object;

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_remove );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = const_str_plain_long;
    frame_function->f_lineno = 424;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_iter_arg_3 = var_to_remove.object;

    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
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
        frame_function->f_lineno = 425;
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

    if (var_t.object == NULL)
    {
        var_t.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_t.object;
        var_t.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    // Tried block of try/except
    tmp_delsubscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_delsubscr_target_1 == NULL ))
    {
        tmp_delsubscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_delsubscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74686 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 427;
        goto try_except_handler_1;
    }

    tmp_delsubscr_subscript_1 = var_t.object;

    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 427;
        goto try_except_handler_1;
    }
    tmp_delsubscr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_delsubscr_target_2 == NULL ))
    {
        tmp_delsubscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_delsubscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74723 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 428;
        goto try_except_handler_1;
    }

    tmp_delsubscr_subscript_2 = var_t.object;

    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_2, tmp_delsubscr_subscript_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 428;
        goto try_except_handler_1;
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
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 429;
        goto try_finally_handler_3;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_3;
    branch_no_3:;
    try_except_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
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
    if ((var_type_pairs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_type_pairs,
            var_type_pairs.object
        );

    }
    if ((var_alias.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_alias,
            var_alias.object
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
    if ((var_to_remove.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_to_remove,
            var_to_remove.object
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
static PyObject *fparse_function_9__set_up_aliases_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_9__set_up_aliases_of_module_numpy$core$numerictypes( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_9__set_up_aliases_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_9__set_up_aliases_of_module_numpy$core$numerictypes( self );
    }
    else
    {
        PyObject *result = fparse_function_9__set_up_aliases_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10__construct_char_code_lookup_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_name;
    PyObjectLocalVariable var_tup;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    int tmp_tried_lineno_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4c0a114299b95c6fb7b03238f75d8216, module_numpy$core$numerictypes );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 436;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 436;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 436;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 436;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
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

    if (var_name.object == NULL)
    {
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = var_name.object;
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 437;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = var_name.object;

    tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
        goto try_finally_handler_1;
    }
    if (var_tup.object == NULL)
    {
        var_tup.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = var_tup.object;
        var_tup.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_isinstance_inst_1 = var_tup.object;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 438;
        goto try_finally_handler_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 438;
        goto try_finally_handler_1;
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
    tmp_subscr_target_2 = var_tup.object;

    tmp_subscr_subscript_2 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
        goto try_finally_handler_1;
    }
    tmp_compare_right_1 = LIST_COPY( const_list_str_plain_p_str_plain_P_list );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 439;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_subscr_target_3 = var_tup.object;

    tmp_subscr_subscript_3 = const_int_0;
    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 440;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__sctype2char_dict );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sctype2char_dict );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75140 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 440;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_4 = var_tup.object;

    tmp_subscr_subscript_4 = const_int_neg_1;
    tmp_ass_subscript_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_ass_subscript_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        frame_function->f_lineno = 440;
        goto try_finally_handler_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 440;
        goto try_finally_handler_1;
    }
    branch_no_2:;
    branch_no_1:;
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
    if ((var_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            var_name.object
        );

    }
    if ((var_tup.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tup,
            var_tup.object
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
static PyObject *fparse_function_10__construct_char_code_lookup_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_10__construct_char_code_lookup_of_module_numpy$core$numerictypes( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_10__construct_char_code_lookup_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_10__construct_char_code_lookup_of_module_numpy$core$numerictypes( self );
    }
    else
    {
        PyObject *result = fparse_function_10__construct_char_code_lookup_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11__add_array_type_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_typename, PyObject *_python_par_bits )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_typename; par_typename.object = _python_par_typename;
    PyObjectLocalVariable par_bits; par_bits.object = _python_par_bits;
    PyObjectLocalVariable var_t;
    PyObjectTempVariable tmp_try_except_1__unhandled_indicator;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator.object == NULL );
    tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a4ed8432b197d679ee9e9dab2b7c88b8, module_numpy$core$numerictypes );
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
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74686 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 452;
        goto try_except_handler_1;
    }

    tmp_binop_left_1 = const_str_digest_754278f1f770a5f41d9cde40f144d1da;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_typename.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71054 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 452;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_bits.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 882 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 452;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_subscr_subscript_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_subscr_subscript_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 452;
        goto try_except_handler_1;
    }
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_subscript_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 452;
        goto try_except_handler_1;
    }
    assert( var_t.object == NULL );
    var_t.object = tmp_assign_source_2;

    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_assign_source_3 = Py_False;
    if (tmp_try_except_1__unhandled_indicator.object == NULL)
    {
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator.object;
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
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
    tmp_compare_right_1 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 453;
        goto try_finally_handler_1;
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
    goto try_finally_handler_1;
    branch_no_1:;
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
    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypes );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypes );
    }

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75186 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 456;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_2 = par_typename.object;

    if ( tmp_subscr_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71054 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 456;
        goto try_finally_handler_1;
    }

    tmp_source_name_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 456;
        goto try_finally_handler_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 456;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = var_t.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 456;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 456;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 456;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
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
    if ((var_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t,
            var_t.object
        );

    }
    if ((par_typename.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_typename,
            par_typename.object
        );

    }
    if ((par_bits.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bits,
            par_bits.object
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
static PyObject *fparse_function_11__add_array_type_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_typename = NULL;
    PyObject *_python_par_bits = NULL;
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
                PyErr_Format( PyExc_TypeError, "_add_array_type() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_typename == key )
            {
                assert( _python_par_typename == NULL );
                _python_par_typename = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_bits == key )
            {
                assert( _python_par_bits == NULL );
                _python_par_bits = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_typename, key ) == 1 )
            {
                assert( _python_par_typename == NULL );
                _python_par_typename = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_bits, key ) == 1 )
            {
                assert( _python_par_bits == NULL );
                _python_par_bits = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_add_array_type() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_typename != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_typename = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_typename == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_typename = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_bits != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_bits = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_bits == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_bits = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_typename == NULL || _python_par_bits == NULL ))
    {
        PyObject *values[] = { _python_par_typename, _python_par_bits };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_11__add_array_type_of_module_numpy$core$numerictypes( self, _python_par_typename, _python_par_bits );

error_exit:;

    Py_XDECREF( _python_par_typename );
    Py_XDECREF( _python_par_bits );

    return NULL;
}

static PyObject *dparse_function_11__add_array_type_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_11__add_array_type_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11__add_array_type_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12__set_array_types_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_ibytes;
    PyObjectLocalVariable var_fbytes;
    PyObjectLocalVariable var_bytes;
    PyObjectLocalVariable var_bits;
    PyObjectLocalVariable var__gi;
    PyObjectLocalVariable var_indx;
    PyObjectLocalVariable var_sz;
    PyObjectLocalVariable var__lst;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
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
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
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
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = LIST_COPY( const_list_9faf787b90f2fd97315a66fe6473a3e4_list );
    assert( var_ibytes.object == NULL );
    var_ibytes.object = tmp_assign_source_1;

    tmp_assign_source_2 = LIST_COPY( const_list_87201804489d5a09f94fc4d531bf84b1_list );
    assert( var_fbytes.object == NULL );
    var_fbytes.object = tmp_assign_source_2;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5ffa6f70cf10a82ecf342c0107f53a3e, module_numpy$core$numerictypes );
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
    tmp_iter_arg_1 = var_ibytes.object;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 461;
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
        frame_function->f_lineno = 461;
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

    if (var_bytes.object == NULL)
    {
        var_bytes.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_bytes.object;
        var_bytes.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_binop_left_1 = const_int_pos_8;
    tmp_binop_right_1 = var_bytes.object;

    tmp_assign_source_6 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 462;
        goto try_finally_handler_1;
    }
    if (var_bits.object == NULL)
    {
        var_bits.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = var_bits.object;
        var_bits.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__add_array_type );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__add_array_type );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75222 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 463;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_1 = const_str_plain_int;
    tmp_call_arg_element_2 = var_bits.object;

    frame_function->f_lineno = 463;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 463;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__add_array_type );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__add_array_type );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75222 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 464;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_3 = const_str_plain_uint;
    tmp_call_arg_element_4 = var_bits.object;

    frame_function->f_lineno = 464;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 464;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 461;
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
    tmp_iter_arg_2 = var_fbytes.object;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75266 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 465;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 465;
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
        frame_function->f_lineno = 465;
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

    if (var_bytes.object == NULL)
    {
        var_bytes.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_bytes.object;
        var_bytes.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_binop_left_2 = const_int_pos_8;
    tmp_binop_right_2 = var_bytes.object;

    tmp_assign_source_10 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 466;
        goto try_finally_handler_2;
    }
    if (var_bits.object == NULL)
    {
        var_bits.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = var_bits.object;
        var_bits.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__add_array_type );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__add_array_type );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75222 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 467;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_5 = const_str_plain_float;
    tmp_call_arg_element_6 = var_bits.object;

    frame_function->f_lineno = 467;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 467;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__add_array_type );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__add_array_type );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75222 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 468;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_7 = const_str_plain_complex;
    tmp_binop_left_3 = const_int_pos_2;
    tmp_binop_right_3 = var_bits.object;

    tmp_call_arg_element_8 = BINARY_OPERATION_MUL( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 468;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 465;
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
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_dtype );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71742 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 469;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = const_str_plain_p;
    frame_function->f_lineno = 469;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_9 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 469;
        goto frame_exception_exit_1;
    }
    assert( var__gi.object == NULL );
    var__gi.object = tmp_assign_source_11;

    tmp_source_name_1 = var__gi.object;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 470;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypes );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypes );
    }

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75186 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 470;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_str_plain_int;
    tmp_compare_right_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 470;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 470;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
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
    tmp_assign_source_12 = const_int_0;
    assert( var_indx.object == NULL );
    var_indx.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

    tmp_source_name_2 = var__gi.object;

    tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_itemsize );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 472;
        goto frame_exception_exit_1;
    }
    assert( var_sz.object == NULL );
    var_sz.object = tmp_assign_source_13;

    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypes );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypes );
    }

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75186 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 473;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = const_str_plain_int;
    tmp_assign_source_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 473;
        goto frame_exception_exit_1;
    }
    assert( var__lst.object == NULL );
    var__lst.object = tmp_assign_source_14;

    loop_start_3:;
    tmp_break_1 = false;
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_indx.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75318 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 474;
        goto try_finally_handler_4;
    }

    tmp_len_arg_1 = var__lst.object;

    tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto try_finally_handler_4;
    }
    tmp_assign_source_15 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto try_finally_handler_4;
    }
    if (tmp_and_1__value_1.object == NULL)
    {
        tmp_and_1__value_1.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = tmp_and_1__value_1.object;
        tmp_and_1__value_1.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto try_finally_handler_4;
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
    tmp_compexpr_left_2 = var_sz.object;

    tmp_subscr_target_3 = var__lst.object;

    tmp_subscr_subscript_3 = var_indx.object;

    if ( tmp_subscr_subscript_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75318 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 474;
        goto try_finally_handler_5;
    }

    tmp_called_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_10 = const_int_0;
    frame_function->f_lineno = 474;
    tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto try_finally_handler_5;
    }
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_itemsize );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto try_finally_handler_5;
    }
    tmp_cond_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto try_finally_handler_5;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_4;
    }

    goto finally_end_3;
    finally_end_3:;
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
    try_finally_handler_4:;
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

        goto try_finally_handler_3;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 474;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_break_1 = true;
    goto try_finally_handler_start_1;
    branch_no_2:;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
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

    // Break if entered via break.
    if ( tmp_break_1 )
    {

    goto loop_end_3;
    }
    goto finally_end_5;
    finally_end_5:;
    tmp_assign_source_16 = var_indx.object;

    if ( tmp_assign_source_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75318 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }

    if (tmp_inplace_assign_1__inplace_start.object == NULL)
    {
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_start.object;
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_4 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_4 = const_int_pos_1;
    tmp_assign_source_17 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto try_finally_handler_6;
    }
    if (tmp_inplace_assign_1__inplace_end.object == NULL)
    {
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_end.object;
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_17;
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
    tmp_assign_source_18 = tmp_inplace_assign_1__inplace_end.object;

    if (var_indx.object == NULL)
    {
        var_indx.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
    }
    else
    {
        PyObject *old = var_indx.object;
        var_indx.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }
    branch_no_3:;
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
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_end.object );
    tmp_inplace_assign_1__inplace_end.object = NULL;

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
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_subscr_target_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypes );

    if (unlikely( tmp_subscr_target_4 == NULL ))
    {
        tmp_subscr_target_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypes );
    }

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75186 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 476;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_4 = const_str_plain_int;
    tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 476;
        goto frame_exception_exit_1;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_insert );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 476;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = var_indx.object;

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75318 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 476;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = var__gi.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75368 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 476;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_type );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 476;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 476;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 476;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_subscr_target_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypes );

    if (unlikely( tmp_subscr_target_5 == NULL ))
    {
        tmp_subscr_target_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypes );
    }

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75186 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 477;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_5 = const_str_plain_uint;
    tmp_source_name_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 477;
        goto frame_exception_exit_1;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_insert );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 477;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = var_indx.object;

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75318 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 477;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_dtype );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
    }

    if ( tmp_called_9 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71742 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 477;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_15 = const_str_plain_P;
    frame_function->f_lineno = 477;
    tmp_source_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_15 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 477;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_14 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_type );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 477;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 477;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 477;
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
    if ((var_ibytes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ibytes,
            var_ibytes.object
        );

    }
    if ((var_fbytes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fbytes,
            var_fbytes.object
        );

    }
    if ((var_bytes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bytes,
            var_bytes.object
        );

    }
    if ((var_bits.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bits,
            var_bits.object
        );

    }
    if ((var__gi.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__gi,
            var__gi.object
        );

    }
    if ((var_indx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_indx,
            var_indx.object
        );

    }
    if ((var_sz.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sz,
            var_sz.object
        );

    }
    if ((var__lst.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__lst,
            var__lst.object
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
static PyObject *fparse_function_12__set_array_types_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_12__set_array_types_of_module_numpy$core$numerictypes( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_12__set_array_types_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_12__set_array_types_of_module_numpy$core$numerictypes( self );
    }
    else
    {
        PyObject *result = fparse_function_12__set_array_types_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_maximum_sctype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_t )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_t; par_t.object = _python_par_t;
    PyObjectLocalVariable var_g;
    PyObjectLocalVariable var_name;
    PyObjectLocalVariable var_base;
    PyObjectLocalVariable var_bits;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    int tmp_tried_lineno_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7b21f914cd6afa3d694c08d1457b038f, module_numpy$core$numerictypes );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_obj2sctype );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_obj2sctype );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75417 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_t.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 527;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }
    assert( var_g.object == NULL );
    var_g.object = tmp_assign_source_1;

    tmp_compare_left_1 = var_g.object;

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
    tmp_return_value = par_t.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 529;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_assign_source_2 = var_g.object;

    if (par_t.object == NULL)
    {
        par_t.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
    }
    else
    {
        PyObject *old = par_t.object;
        par_t.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
        Py_DECREF( old );
    }
    tmp_source_name_1 = par_t.object;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 531;
        goto frame_exception_exit_1;
    }
    assert( var_name.object == NULL );
    var_name.object = tmp_assign_source_3;

    // Tried code
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__evalname );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__evalname );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74556 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 532;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_2 = var_name.object;

    frame_function->f_lineno = 532;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 532;
        goto try_finally_handler_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 532;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_4;

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


        frame_function->f_lineno = 532;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_5;

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


        frame_function->f_lineno = 532;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_6;

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
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1.object;

    assert( var_base.object == NULL );
    var_base.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2.object;

    assert( var_bits.object == NULL );
    var_bits.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

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
    tmp_compare_left_2 = var_bits.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 882 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 533;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 533;
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
    tmp_return_value = par_t.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 534;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypes );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypes );
    }

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75186 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = var_base.object;

    if ( tmp_subscr_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_neg_1;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
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
    if ((var_g.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_g,
            var_g.object
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
    if ((var_base.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_base,
            var_base.object
        );

    }
    if ((var_bits.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bits,
            var_bits.object
        );

    }
    if ((par_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t,
            par_t.object
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
static PyObject *fparse_function_13_maximum_sctype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_t = NULL;
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
                PyErr_Format( PyExc_TypeError, "maximum_sctype() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_t == key )
            {
                assert( _python_par_t == NULL );
                _python_par_t = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_t, key ) == 1 )
            {
                assert( _python_par_t == NULL );
                _python_par_t = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "maximum_sctype() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_t != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_t = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_t == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_t = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_t == NULL ))
    {
        PyObject *values[] = { _python_par_t };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_13_maximum_sctype_of_module_numpy$core$numerictypes( self, _python_par_t );

error_exit:;

    Py_XDECREF( _python_par_t );

    return NULL;
}

static PyObject *dparse_function_13_maximum_sctype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_13_maximum_sctype_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_maximum_sctype_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14__python_type_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_t )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_t; par_t.object = _python_par_t;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_type_arg_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cfaa7b3a03d2c5f846810f3b2f3fee7e, module_numpy$core$numerictypes );
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
    tmp_isinstance_inst_1 = par_t.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 556;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_type );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 556;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 556;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_type_arg_1 = par_t.object;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 557;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 557;
        goto frame_exception_exit_1;
    }
    if (par_t.object == NULL)
    {
        par_t.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_t.object;
        par_t.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    branch_no_1:;
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74686 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 558;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__python_types );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__python_types );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75456 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 558;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 558;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_t.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 558;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = const_str_plain_object_;
    frame_function->f_lineno = 558;
    tmp_subscr_subscript_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_subscr_subscript_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 558;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_subscript_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 558;
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
    if ((par_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t,
            par_t.object
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
static PyObject *fparse_function_14__python_type_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_t = NULL;
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
                PyErr_Format( PyExc_TypeError, "_python_type() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_t == key )
            {
                assert( _python_par_t == NULL );
                _python_par_t = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_t, key ) == 1 )
            {
                assert( _python_par_t == NULL );
                _python_par_t = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_python_type() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_t != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_t = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_t == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_t = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_t == NULL ))
    {
        PyObject *values[] = { _python_par_t };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_14__python_type_of_module_numpy$core$numerictypes( self, _python_par_t );

error_exit:;

    Py_XDECREF( _python_par_t );

    return NULL;
}

static PyObject *dparse_function_14__python_type_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_14__python_type_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14__python_type_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15__python_type_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_t )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_t; par_t.object = _python_par_t;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_type_arg_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c9719e7e3ba54bb22e808752850497f2, module_numpy$core$numerictypes );
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
    tmp_isinstance_inst_1 = par_t.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 562;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__types );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__types );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75498 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 562;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_TypeType );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 562;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 562;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_type_arg_1 = par_t.object;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 563;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 563;
        goto frame_exception_exit_1;
    }
    if (par_t.object == NULL)
    {
        par_t.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_t.object;
        par_t.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    branch_no_1:;
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74686 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 564;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__python_types );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__python_types );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75456 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 564;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 564;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_t.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 564;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = const_str_plain_object_;
    frame_function->f_lineno = 564;
    tmp_subscr_subscript_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_subscr_subscript_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 564;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_subscript_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 564;
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
    if ((par_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t,
            par_t.object
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
static PyObject *fparse_function_15__python_type_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_t = NULL;
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
                PyErr_Format( PyExc_TypeError, "_python_type() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_t == key )
            {
                assert( _python_par_t == NULL );
                _python_par_t = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_t, key ) == 1 )
            {
                assert( _python_par_t == NULL );
                _python_par_t = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_python_type() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_t != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_t = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_t == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_t = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_t == NULL ))
    {
        PyObject *values[] = { _python_par_t };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_15__python_type_of_module_numpy$core$numerictypes( self, _python_par_t );

error_exit:;

    Py_XDECREF( _python_par_t );

    return NULL;
}

static PyObject *dparse_function_15__python_type_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_15__python_type_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15__python_type_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_issctype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_rep )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_rep; par_rep.object = _python_par_rep;
    PyObjectLocalVariable var_res;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_78cf651ab61ae86d0a179c062f2ac651, module_numpy$core$numerictypes );
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
    tmp_isinstance_inst_1 = par_rep.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75533 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 600;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_type );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_cls_1 );

        frame_function->f_lineno = 600;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_dtype );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71742 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 600;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 600;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried block of try/except
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_obj2sctype );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_obj2sctype );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75417 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 603;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_1 = par_rep.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75533 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 603;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 603;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 603;
        goto try_except_handler_1;
    }
    assert( var_res.object == NULL );
    var_res.object = tmp_assign_source_1;

    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_assign_source_2 = var_res.object;

    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 604;
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
    tmp_compexpr_left_1 = var_res.object;

    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_object_ );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_object_ );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60157 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 604;
        goto try_finally_handler_3;
    }

    tmp_cond_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 604;
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

        frame_function->f_lineno = 604;
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
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    branch_no_2:;
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

        goto try_except_handler_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    try_except_end_1:;

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
    if ((var_res.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_res,
            var_res.object
        );

    }
    if ((par_rep.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rep,
            par_rep.object
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
static PyObject *fparse_function_16_issctype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_rep = NULL;
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
                PyErr_Format( PyExc_TypeError, "issctype() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_rep == key )
            {
                assert( _python_par_rep == NULL );
                _python_par_rep = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rep, key ) == 1 )
            {
                assert( _python_par_rep == NULL );
                _python_par_rep = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "issctype() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_rep != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_rep = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_rep == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_rep = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_rep == NULL ))
    {
        PyObject *values[] = { _python_par_rep };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_16_issctype_of_module_numpy$core$numerictypes( self, _python_par_rep );

error_exit:;

    Py_XDECREF( _python_par_rep );

    return NULL;
}

static PyObject *dparse_function_16_issctype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_16_issctype_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_issctype_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_obj2sctype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_rep, PyObject *_python_par_default )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_rep; par_rep.object = _python_par_rep;
    PyObjectLocalVariable par_default; par_default.object = _python_par_default;
    PyObjectLocalVariable var_res;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7b5bd9fdfb5792b343303fa694e6d644, module_numpy$core$numerictypes );
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
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 650;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_1 = par_rep.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75533 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 650;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_generic );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_generic );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71546 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 650;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 650;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 650;
        goto try_except_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 650;
        goto try_except_handler_1;
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
    tmp_return_value = par_rep.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75533 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 651;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
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
    tmp_compare_right_1 = PyExc_TypeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 652;
        goto frame_exception_exit_1;
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
    goto frame_exception_exit_1;
    branch_no_2:;
    try_except_end_1:;
    tmp_isinstance_inst_1 = par_rep.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75533 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 654;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_dtype );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71742 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 654;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 654;
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
    tmp_source_name_1 = par_rep.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75533 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 655;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 655;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_isinstance_inst_2 = par_rep.object;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75533 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 656;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_BUILTIN( const_str_plain_type );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 656;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 656;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__python_type );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__python_type );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75582 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 657;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_rep.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75533 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 657;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 657;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 657;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_isinstance_inst_3 = par_rep.object;

    if ( tmp_isinstance_inst_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75533 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 658;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_ndarray );

    if (unlikely( tmp_isinstance_cls_3 == NULL ))
    {
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ndarray );
    }

    if ( tmp_isinstance_cls_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60792 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 658;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 658;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_3 = par_rep.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75533 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 659;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 659;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_type );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 659;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_5:;
    // Tried block of try/except
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_dtype );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71742 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 661;
        goto try_except_handler_2;
    }

    tmp_call_arg_element_4 = par_rep.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75533 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 661;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 661;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 661;
        goto try_except_handler_2;
    }
    assert( var_res.object == NULL );
    var_res.object = tmp_assign_source_1;

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
    tmp_return_value = par_default.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20083 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 663;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    try_except_end_2:;
    tmp_source_name_4 = var_res.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 64406 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 664;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_type );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 664;
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
    if ((var_res.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_res,
            var_res.object
        );

    }
    if ((par_rep.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rep,
            par_rep.object
        );

    }
    if ((par_default.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_default,
            par_default.object
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
static PyObject *fparse_function_17_obj2sctype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_rep = NULL;
    PyObject *_python_par_default = NULL;
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
                PyErr_Format( PyExc_TypeError, "obj2sctype() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_rep == key )
            {
                assert( _python_par_rep == NULL );
                _python_par_rep = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_default == key )
            {
                assert( _python_par_default == NULL );
                _python_par_default = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rep, key ) == 1 )
            {
                assert( _python_par_rep == NULL );
                _python_par_rep = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_default, key ) == 1 )
            {
                assert( _python_par_default == NULL );
                _python_par_default = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "obj2sctype() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_rep != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_rep = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_rep == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_rep = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_default != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_default = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_default == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_default = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_rep == NULL || _python_par_default == NULL ))
    {
        PyObject *values[] = { _python_par_rep, _python_par_default };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_17_obj2sctype_of_module_numpy$core$numerictypes( self, _python_par_rep, _python_par_default );

error_exit:;

    Py_XDECREF( _python_par_rep );
    Py_XDECREF( _python_par_default );

    return NULL;
}

static PyObject *dparse_function_17_obj2sctype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_17_obj2sctype_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17_obj2sctype_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18_issubclass__of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_arg1, PyObject *_python_par_arg2 )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_arg1; par_arg1.object = _python_par_arg1;
    PyObjectLocalVariable par_arg2; par_arg2.object = _python_par_arg2;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7a93b300eb16d37bbde4676f895f9d7c, module_numpy$core$numerictypes );
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
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 701;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_1 = par_arg1.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75623 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 701;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_2 = par_arg2.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75673 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 701;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 701;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 701;
        goto try_except_handler_1;
    }
    goto frame_return_exit_1;
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
    tmp_compare_right_1 = PyExc_TypeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 702;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    try_except_end_1:;

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
    if ((par_arg1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arg1,
            par_arg1.object
        );

    }
    if ((par_arg2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arg2,
            par_arg2.object
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
static PyObject *fparse_function_18_issubclass__of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_arg1 = NULL;
    PyObject *_python_par_arg2 = NULL;
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
                PyErr_Format( PyExc_TypeError, "issubclass_() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_arg1 == key )
            {
                assert( _python_par_arg1 == NULL );
                _python_par_arg1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_arg2 == key )
            {
                assert( _python_par_arg2 == NULL );
                _python_par_arg2 = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arg1, key ) == 1 )
            {
                assert( _python_par_arg1 == NULL );
                _python_par_arg1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arg2, key ) == 1 )
            {
                assert( _python_par_arg2 == NULL );
                _python_par_arg2 = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "issubclass_() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_arg1 != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_arg1 = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_arg1 == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_arg1 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_arg2 != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_arg2 = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_arg2 == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_arg2 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_arg1 == NULL || _python_par_arg2 == NULL ))
    {
        PyObject *values[] = { _python_par_arg1, _python_par_arg2 };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_18_issubclass__of_module_numpy$core$numerictypes( self, _python_par_arg1, _python_par_arg2 );

error_exit:;

    Py_XDECREF( _python_par_arg1 );
    Py_XDECREF( _python_par_arg2 );

    return NULL;
}

static PyObject *dparse_function_18_issubclass__of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_18_issubclass__of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_18_issubclass__of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_19_issubsctype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_arg1, PyObject *_python_par_arg2 )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_arg1; par_arg1.object = _python_par_arg1;
    PyObjectLocalVariable par_arg2; par_arg2.object = _python_par_arg2;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cd872483d354a9eb370083b194bcf24d, module_numpy$core$numerictypes );
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
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 733;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_obj2sctype );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_obj2sctype );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75417 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 733;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_arg1.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75623 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 733;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 733;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 733;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_obj2sctype );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_obj2sctype );
    }

    if ( tmp_called_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75417 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 733;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_arg2.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75673 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 733;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 733;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 733;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 733;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 733;
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
    if ((par_arg1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arg1,
            par_arg1.object
        );

    }
    if ((par_arg2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arg2,
            par_arg2.object
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
static PyObject *fparse_function_19_issubsctype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_arg1 = NULL;
    PyObject *_python_par_arg2 = NULL;
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
                PyErr_Format( PyExc_TypeError, "issubsctype() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_arg1 == key )
            {
                assert( _python_par_arg1 == NULL );
                _python_par_arg1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_arg2 == key )
            {
                assert( _python_par_arg2 == NULL );
                _python_par_arg2 = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arg1, key ) == 1 )
            {
                assert( _python_par_arg1 == NULL );
                _python_par_arg1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arg2, key ) == 1 )
            {
                assert( _python_par_arg2 == NULL );
                _python_par_arg2 = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "issubsctype() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_arg1 != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_arg1 = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_arg1 == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_arg1 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_arg2 != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_arg2 = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_arg2 == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_arg2 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_arg1 == NULL || _python_par_arg2 == NULL ))
    {
        PyObject *values[] = { _python_par_arg1, _python_par_arg2 };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_19_issubsctype_of_module_numpy$core$numerictypes( self, _python_par_arg1, _python_par_arg2 );

error_exit:;

    Py_XDECREF( _python_par_arg1 );
    Py_XDECREF( _python_par_arg2 );

    return NULL;
}

static PyObject *dparse_function_19_issubsctype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_19_issubsctype_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_19_issubsctype_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_20_issubdtype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_arg1, PyObject *_python_par_arg2 )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_arg1; par_arg1.object = _python_par_arg1;
    PyObjectLocalVariable par_arg2; par_arg2.object = _python_par_arg2;
    PyObjectLocalVariable var_mro;
    PyObjectLocalVariable var_val;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
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
    PyObject *tmp_called_7;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_aca9442c8224c94377287357d57f8f9e, module_numpy$core$numerictypes );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_issubclass_ );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issubclass_ );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75723 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 761;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_arg2.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75673 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 761;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_generic );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_generic );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71546 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 761;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 761;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 761;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 761;
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
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 762;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_dtype );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71742 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 762;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_arg1.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75623 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 762;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 762;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 762;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 762;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = par_arg2.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75673 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 762;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 762;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 762;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_dtype );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71742 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 763;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = par_arg2.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75673 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 763;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 763;
    tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_6 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 763;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_type );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 763;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_mro );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 763;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 763;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 763;
        goto frame_exception_exit_1;
    }
    assert( var_mro.object == NULL );
    var_mro.object = tmp_assign_source_1;

    tmp_len_arg_1 = var_mro.object;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 764;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 764;
        goto frame_exception_exit_1;
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
    tmp_subscr_target_1 = var_mro.object;

    tmp_subscr_subscript_1 = const_int_pos_1;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 765;
        goto frame_exception_exit_1;
    }
    assert( var_val.object == NULL );
    var_val.object = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_subscr_target_2 = var_mro.object;

    tmp_subscr_subscript_2 = const_int_0;
    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 767;
        goto frame_exception_exit_1;
    }
    assert( var_val.object == NULL );
    var_val.object = tmp_assign_source_3;

    branch_end_2:;
    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 768;
        goto frame_exception_exit_1;
    }
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_dtype );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71742 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 768;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = par_arg1.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75623 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 768;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 768;
    tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_8 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 768;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_type );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 768;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = var_val.object;

    frame_function->f_lineno = 768;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_7, tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 768;
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
    if ((var_mro.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mro,
            var_mro.object
        );

    }
    if ((var_val.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_val,
            var_val.object
        );

    }
    if ((par_arg1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arg1,
            par_arg1.object
        );

    }
    if ((par_arg2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arg2,
            par_arg2.object
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
static PyObject *fparse_function_20_issubdtype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_arg1 = NULL;
    PyObject *_python_par_arg2 = NULL;
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
                PyErr_Format( PyExc_TypeError, "issubdtype() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_arg1 == key )
            {
                assert( _python_par_arg1 == NULL );
                _python_par_arg1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_arg2 == key )
            {
                assert( _python_par_arg2 == NULL );
                _python_par_arg2 = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arg1, key ) == 1 )
            {
                assert( _python_par_arg1 == NULL );
                _python_par_arg1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arg2, key ) == 1 )
            {
                assert( _python_par_arg2 == NULL );
                _python_par_arg2 = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "issubdtype() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_arg1 != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_arg1 = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_arg1 == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_arg1 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_arg2 != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_arg2 = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_arg2 == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_arg2 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_arg1 == NULL || _python_par_arg2 == NULL ))
    {
        PyObject *values[] = { _python_par_arg1, _python_par_arg2 };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_20_issubdtype_of_module_numpy$core$numerictypes( self, _python_par_arg1, _python_par_arg2 );

error_exit:;

    Py_XDECREF( _python_par_arg1 );
    Py_XDECREF( _python_par_arg2 );

    return NULL;
}

static PyObject *dparse_function_20_issubdtype_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_20_issubdtype_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_20_issubdtype_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_21__typedict_of_module_numpy$core$numerictypes(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var___getitem__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_8a3551674d9174096d8a003980610b3f;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_3205920e5bb13b28d07a8c7f168ad36d;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2a167290add9d9006c8ba192ee0cc798, module_numpy$core$numerictypes );
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
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___getitem___of_class_21__typedict_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 780;
        goto frame_exception_exit_1;
    }
    assert( var___getitem__.object == NULL );
    var___getitem__.object = tmp_assign_source_3;


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
    if ((var___getitem__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___getitem__,
            var___getitem__.object
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
    if ((var___getitem__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___getitem__,
            var___getitem__.object
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


static PyObject *impl_function_1___getitem___of_class_21__typedict_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_obj )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_obj; par_obj.object = _python_par_obj;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_01416264b179f02ea8602c95ba96b8d8, module_numpy$core$numerictypes );
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
    tmp_source_name_1 = LOOKUP_BUILTIN( const_str_plain_dict );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 781;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___getitem__ );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 781;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_self.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 781;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_obj2sctype );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_obj2sctype );
    }

    if ( tmp_called_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75417 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 781;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_obj.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10401 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 781;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 781;
    tmp_call_arg_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 781;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 781;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 781;
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
static PyObject *fparse_function_1___getitem___of_class_21__typedict_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__getitem__() keywords must be strings" );
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
                   "__getitem__() got an unexpected keyword argument '%s'",
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


    return impl_function_1___getitem___of_class_21__typedict_of_module_numpy$core$numerictypes( self, _python_par_self, _python_par_obj );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_obj );

    return NULL;
}

static PyObject *dparse_function_1___getitem___of_class_21__typedict_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___getitem___of_class_21__typedict_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___getitem___of_class_21__typedict_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_22__construct_lookups_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_name;
    PyObjectLocalVariable var_val;
    PyObjectLocalVariable var_obj;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_called_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
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
    int tmp_tried_lineno_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_72f72acc429c2539d99efb819446f23b, module_numpy$core$numerictypes );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeinfo );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74519 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 788;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_items );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 788;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 788;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 788;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 788;
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
        frame_function->f_lineno = 788;
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
    // Tried code
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value.object;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 788;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
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


        frame_function->f_lineno = 788;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
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


        frame_function->f_lineno = 788;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_5;
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
    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1.object;

    if (var_name.object == NULL)
    {
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = var_name.object;
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2.object;

    if (var_val.object == NULL)
    {
        var_val.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = var_val.object;
        var_val.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
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
    tmp_isinstance_inst_1 = var_val.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 789;
        goto try_finally_handler_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 789;
        goto try_finally_handler_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 789;
        goto try_finally_handler_1;
    }
    if (tmp_res == 1)
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
    tmp_subscr_target_1 = var_val.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 791;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = const_int_neg_1;
    tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 791;
        goto try_finally_handler_1;
    }
    if (var_obj.object == NULL)
    {
        var_obj.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = var_obj.object;
        var_obj.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    tmp_subscr_target_2 = var_val.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 792;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_2 = const_int_pos_2;
    tmp_binop_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 792;
        goto try_finally_handler_1;
    }
    tmp_binop_right_1 = const_int_pos_8;
    tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 792;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_nbytes );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nbytes );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75763 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 792;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_1 = var_obj.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 792;
        goto try_finally_handler_1;
    }
    tmp_subscr_target_3 = var_val.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 793;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_3 = const_int_pos_3;
    tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 793;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__alignment );

    if (unlikely( tmp_ass_subscribed_2 == NULL ))
    {
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__alignment );
    }

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75798 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 793;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_2 = var_obj.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 793;
        goto try_finally_handler_1;
    }
    tmp_len_arg_1 = var_val.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 794;
        goto try_finally_handler_1;
    }

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 794;
        goto try_finally_handler_1;
    }
    tmp_compare_right_1 = const_int_pos_5;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 794;
        goto try_finally_handler_1;
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
    tmp_subscr_target_4 = var_val.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 795;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_4 = const_int_pos_4;
    tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 795;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__maxvals );

    if (unlikely( tmp_ass_subscribed_3 == NULL ))
    {
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__maxvals );
    }

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75837 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 795;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_3 = var_obj.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 795;
        goto try_finally_handler_1;
    }
    tmp_subscr_target_5 = var_val.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 796;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_5 = const_int_pos_5;
    tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 796;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__minvals );

    if (unlikely( tmp_ass_subscribed_4 == NULL ))
    {
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minvals );
    }

    if ( tmp_ass_subscribed_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75874 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 796;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_4 = var_obj.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 796;
        goto try_finally_handler_1;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_ass_subvalue_5 = Py_None;
    tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__maxvals );

    if (unlikely( tmp_ass_subscribed_5 == NULL ))
    {
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__maxvals );
    }

    if ( tmp_ass_subscribed_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75837 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 798;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_5 = var_obj.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 798;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_6 = Py_None;
    tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__minvals );

    if (unlikely( tmp_ass_subscribed_6 == NULL ))
    {
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__minvals );
    }

    if ( tmp_ass_subscribed_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75874 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 799;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_6 = var_obj.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 799;
        goto try_finally_handler_1;
    }
    branch_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 788;
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
    if ((var_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            var_name.object
        );

    }
    if ((var_val.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_val,
            var_val.object
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
static PyObject *fparse_function_22__construct_lookups_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_22__construct_lookups_of_module_numpy$core$numerictypes( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_22__construct_lookups_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_22__construct_lookups_of_module_numpy$core$numerictypes( self );
    }
    else
    {
        PyObject *result = fparse_function_22__construct_lookups_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_23_sctype2char_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_sctype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_sctype; par_sctype.object = _python_par_sctype;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dcfa2721a1bde724a3efe10927faebc7, module_numpy$core$numerictypes );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_obj2sctype );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_obj2sctype );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75417 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 845;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_sctype.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75911 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 845;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 845;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 845;
        goto frame_exception_exit_1;
    }
    if (par_sctype.object == NULL)
    {
        par_sctype.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_sctype.object;
        par_sctype.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_compare_left_1 = par_sctype.object;

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
    tmp_make_exception_arg_1 = const_str_digest_56bae01cc28fd71c3874bda0c16af567;
    frame_function->f_lineno = 847;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 847;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 847;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__sctype2char_dict );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sctype2char_dict );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75140 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 848;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = par_sctype.object;

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 848;
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
    if ((par_sctype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sctype,
            par_sctype.object
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
static PyObject *fparse_function_23_sctype2char_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_sctype = NULL;
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
                PyErr_Format( PyExc_TypeError, "sctype2char() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_sctype == key )
            {
                assert( _python_par_sctype == NULL );
                _python_par_sctype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_sctype, key ) == 1 )
            {
                assert( _python_par_sctype == NULL );
                _python_par_sctype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "sctype2char() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_sctype != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_sctype = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_sctype == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_sctype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_sctype == NULL ))
    {
        PyObject *values[] = { _python_par_sctype };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_23_sctype2char_of_module_numpy$core$numerictypes( self, _python_par_sctype );

error_exit:;

    Py_XDECREF( _python_par_sctype );

    return NULL;
}

static PyObject *dparse_function_23_sctype2char_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_23_sctype2char_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_23_sctype2char_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_24_lambda_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_x, PyObject *_python_par_k )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObjectLocalVariable par_k; par_k.object = _python_par_k;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7d2e4f4e8732235894351d5504ab29fc, module_numpy$core$numerictypes );
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13582 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 866;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_x.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 866;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
    frame_function->f_lineno = 866;
    tmp_source_name_1 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 866;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_astype );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 866;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_k.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 866;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 866;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 866;
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
    if ((par_k.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            par_k.object
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
static PyObject *fparse_lambda_24_lambda_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    PyObject *_python_par_k = NULL;
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
            if ( found == false && const_str_plain_k == key )
            {
                assert( _python_par_k == NULL );
                _python_par_k = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_k, key ) == 1 )
            {
                assert( _python_par_k == NULL );
                _python_par_k = value;

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
         if (unlikely( _python_par_k != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_k = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_k == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_k = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_x == NULL || _python_par_k == NULL ))
    {
        PyObject *values[] = { _python_par_x, _python_par_k };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_lambda_24_lambda_of_module_numpy$core$numerictypes( self, _python_par_x, _python_par_k );

error_exit:;

    Py_XDECREF( _python_par_x );
    Py_XDECREF( _python_par_k );

    return NULL;
}

static PyObject *dparse_lambda_24_lambda_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_lambda_24_lambda_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_24_lambda_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_25__find_common_coerce_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_b )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable var_thisind;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d650ee6d7973b5c417c901b8bd7a7120, module_numpy$core$numerictypes );
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
    tmp_compare_left_1 = par_a.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 939;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = par_b.object;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 939;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 939;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = par_a.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 940;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried block of try/except
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain___test_types );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___test_types );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75963 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 942;
        goto try_except_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_index );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 942;
        goto try_except_handler_1;
    }
    tmp_source_name_2 = par_a.object;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 942;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_char );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 942;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 942;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 942;
        goto try_except_handler_1;
    }
    assert( var_thisind.object == NULL );
    var_thisind.object = tmp_assign_source_1;

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
    tmp_compare_right_2 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 943;
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__can_coerce_all );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__can_coerce_all );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76004 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 945;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyList_New( 2 );
    tmp_list_element_1 = par_a.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 945;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_b.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 945;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 1, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_thisind.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76048 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 945;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_start;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 945;
    tmp_return_value = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 945;
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
    if ((var_thisind.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_thisind,
            var_thisind.object
        );

    }
    if ((par_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a,
            par_a.object
        );

    }
    if ((par_b.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b,
            par_b.object
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
static PyObject *fparse_function_25__find_common_coerce_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_b = NULL;
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
                PyErr_Format( PyExc_TypeError, "_find_common_coerce() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_a == key )
            {
                assert( _python_par_a == NULL );
                _python_par_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_b == key )
            {
                assert( _python_par_b == NULL );
                _python_par_b = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_a, key ) == 1 )
            {
                assert( _python_par_a == NULL );
                _python_par_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_b, key ) == 1 )
            {
                assert( _python_par_b == NULL );
                _python_par_b = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_find_common_coerce() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_b = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_b == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_a == NULL || _python_par_b == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_b };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_25__find_common_coerce_of_module_numpy$core$numerictypes( self, _python_par_a, _python_par_b );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );

    return NULL;
}

static PyObject *dparse_function_25__find_common_coerce_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_25__find_common_coerce_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_25__find_common_coerce_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_26__can_coerce_all_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_dtypelist, PyObject *_python_par_start )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_dtypelist; par_dtypelist.object = _python_par_dtypelist;
    PyObjectLocalVariable par_start; par_start.object = _python_par_start;
    PyObjectLocalVariable var_N;
    PyObjectLocalVariable var_thisind;
    PyObjectLocalVariable var_newdtype;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_numcoerce;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_GtE_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ca3a6520a56e692a97c9afc0ba364aaf, module_numpy$core$numerictypes );
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
    tmp_len_arg_1 = par_dtypelist.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76101 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 949;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 949;
        goto frame_exception_exit_1;
    }
    assert( var_N.object == NULL );
    var_N.object = tmp_assign_source_1;

    tmp_compare_left_1 = var_N.object;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 950;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = var_N.object;

    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 952;
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
    tmp_subscr_target_1 = par_dtypelist.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76101 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 953;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 953;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_assign_source_2 = par_start.object;

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 954;
        goto frame_exception_exit_1;
    }

    assert( var_thisind.object == NULL );
    var_thisind.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    loop_start_1:;
    tmp_compare_left_3 = var_thisind.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76048 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 955;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain___len_test_types );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___len_test_types );
    }

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76156 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 955;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 955;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_dtype );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71742 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 956;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain___test_types );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___test_types );
    }

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 75963 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 956;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = var_thisind.object;

    if ( tmp_subscr_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76048 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 956;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 956;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 956;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 956;
        goto frame_exception_exit_1;
    }
    if (var_newdtype.object == NULL)
    {
        var_newdtype.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = var_newdtype.object;
        var_newdtype.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_len );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 957;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = NULL;
    // Tried code
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = NULL;
    // Tried code
    tmp_iter_arg_1 = par_dtypelist.object;

    if ( tmp_iter_arg_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76101 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 957;
        goto try_finally_handler_2;
    }

    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 957;
        goto try_finally_handler_2;
    }
    if (tmp_listcontr_1__listcontr_iter.object == NULL)
    {
        tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__listcontr_iter.object;
        tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_assign_source_6 = PyList_New( 0 );
    if (tmp_listcontr_1__listcontr_result.object == NULL)
    {
        tmp_listcontr_1__listcontr_result.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__listcontr_result.object;
        tmp_listcontr_1__listcontr_result.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    loop_start_2:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_7 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {
            Py_DECREF( tmp_call_pos_1 );
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 957;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_assign_source_8 = tmp_listcontr_1__iter_value_0.object;

    if (var_x.object == NULL)
    {
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_compare_left_4 = var_newdtype.object;

    if ( tmp_compare_left_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76201 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 957;
        goto try_finally_handler_2;
    }

    tmp_compare_right_4 = var_x.object;

    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 957;
        goto try_finally_handler_2;
    }
    if (tmp_cmp_GtE_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = var_x.object;

    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 957;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 957;
        goto try_finally_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_tuple_element_1 = tmp_listcontr_1__listcontr_result.object;

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

        goto try_finally_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    Py_INCREF( tmp_tuple_element_1 );
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

        goto frame_exception_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;
    frame_function->f_lineno = 957;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS( tmp_called_2, tmp_call_pos_1 );
    Py_DECREF( tmp_call_pos_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 957;
        goto frame_exception_exit_1;
    }
    if (var_numcoerce.object == NULL)
    {
        var_numcoerce.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = var_numcoerce.object;
        var_numcoerce.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_compare_left_5 = var_numcoerce.object;

    tmp_compare_right_5 = var_N.object;

    if ( tmp_compare_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 958;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 958;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_return_value = var_newdtype.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76201 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 959;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_5:;
    tmp_assign_source_9 = var_thisind.object;

    if ( tmp_assign_source_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76048 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 960;
        goto frame_exception_exit_1;
    }

    if (tmp_inplace_assign_1__inplace_start.object == NULL)
    {
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_start.object;
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_1 = const_int_pos_1;
    tmp_assign_source_10 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 960;
        goto try_finally_handler_3;
    }
    if (tmp_inplace_assign_1__inplace_end.object == NULL)
    {
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_end.object;
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_compare_left_6 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_6 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if (tmp_isnot_1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_11 = tmp_inplace_assign_1__inplace_end.object;

    if (var_thisind.object == NULL)
    {
        var_thisind.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = var_thisind.object;
        var_thisind.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
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
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 955;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

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
    if ((var_N.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_N,
            var_N.object
        );

    }
    if ((var_thisind.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_thisind,
            var_thisind.object
        );

    }
    if ((var_newdtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_newdtype,
            var_newdtype.object
        );

    }
    if ((var_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            var_x.object
        );

    }
    if ((var_numcoerce.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_numcoerce,
            var_numcoerce.object
        );

    }
    if ((par_dtypelist.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dtypelist,
            par_dtypelist.object
        );

    }
    if ((par_start.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_start,
            par_start.object
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
static PyObject *fparse_function_26__can_coerce_all_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_dtypelist = NULL;
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
                PyErr_Format( PyExc_TypeError, "_can_coerce_all() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_dtypelist == key )
            {
                assert( _python_par_dtypelist == NULL );
                _python_par_dtypelist = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dtypelist, key ) == 1 )
            {
                assert( _python_par_dtypelist == NULL );
                _python_par_dtypelist = value;

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
                   "_can_coerce_all() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_dtypelist != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_dtypelist = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_dtypelist == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_dtypelist = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_start != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_start = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_start == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_start = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_dtypelist == NULL || _python_par_start == NULL ))
    {
        PyObject *values[] = { _python_par_dtypelist, _python_par_start };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_26__can_coerce_all_of_module_numpy$core$numerictypes( self, _python_par_dtypelist, _python_par_start );

error_exit:;

    Py_XDECREF( _python_par_dtypelist );
    Py_XDECREF( _python_par_start );

    return NULL;
}

static PyObject *dparse_function_26__can_coerce_all_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_26__can_coerce_all_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_26__can_coerce_all_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_27_find_common_type_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject *_python_par_array_types, PyObject *_python_par_scalar_types )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_array_types; par_array_types.object = _python_par_array_types;
    PyObjectLocalVariable par_scalar_types; par_scalar_types.object = _python_par_scalar_types;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_maxa;
    PyObjectLocalVariable var_maxsc;
    PyObjectLocalVariable var_index_a;
    PyObjectLocalVariable var_index_sc;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_listcontr_2__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_2__listcontr_result;
    PyObjectTempVariable tmp_listcontr_2__iter_value_0;
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
    PyObject *tmp_append_to_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
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
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a2b6c13969ad0a3e15b9a129cbdeaaa0, module_numpy$core$numerictypes );
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
    tmp_iter_arg_1 = par_array_types.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76255 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1014;
        goto try_finally_handler_2;
    }

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1014;
        goto try_finally_handler_2;
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
        frame_function->f_lineno = 1014;
            goto try_finally_handler_2;
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

    if (var_x.object == NULL)
    {
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_dtype );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71742 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1014;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_1 = var_x.object;

    frame_function->f_lineno = 1014;
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1014;
        goto try_finally_handler_2;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1014;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1014;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_assign_source_1 = tmp_listcontr_1__listcontr_result.object;

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

        goto try_finally_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    if (par_array_types.object == NULL)
    {
        par_array_types.object = INCREASE_REFCOUNT( tmp_assign_source_1 );
    }
    else
    {
        PyObject *old = par_array_types.object;
        par_array_types.object = INCREASE_REFCOUNT( tmp_assign_source_1 );
        Py_DECREF( old );
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

        goto frame_exception_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;
    // Tried code
    tmp_assign_source_6 = NULL;
    // Tried code
    tmp_iter_arg_2 = par_scalar_types.object;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76312 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1015;
        goto try_finally_handler_4;
    }

    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1015;
        goto try_finally_handler_4;
    }
    assert( tmp_listcontr_2__listcontr_iter.object == NULL );
    tmp_listcontr_2__listcontr_iter.object = tmp_assign_source_7;

    tmp_assign_source_8 = PyList_New( 0 );
    assert( tmp_listcontr_2__listcontr_result.object == NULL );
    tmp_listcontr_2__listcontr_result.object = tmp_assign_source_8;

    loop_start_2:;
    tmp_next_source_2 = tmp_listcontr_2__listcontr_iter.object;

    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_9 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 1015;
            goto try_finally_handler_4;
        }
    }

    if (tmp_listcontr_2__iter_value_0.object == NULL)
    {
        tmp_listcontr_2__iter_value_0.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = tmp_listcontr_2__iter_value_0.object;
        tmp_listcontr_2__iter_value_0.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    tmp_assign_source_10 = tmp_listcontr_2__iter_value_0.object;

    if (var_x.object == NULL)
    {
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    tmp_append_to_2 = tmp_listcontr_2__listcontr_result.object;

    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_dtype );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71742 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1015;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_2 = var_x.object;

    frame_function->f_lineno = 1015;
    tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1015;
        goto try_finally_handler_4;
    }
    tmp_res = PyList_Append( tmp_append_to_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1015;
        goto try_finally_handler_4;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1015;
        goto try_finally_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_assign_source_6 = tmp_listcontr_2__listcontr_result.object;

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

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_2__iter_value_0.object );
    tmp_listcontr_2__iter_value_0.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
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
    if (par_scalar_types.object == NULL)
    {
        par_scalar_types.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = par_scalar_types.object;
        par_scalar_types.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
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
    Py_XDECREF( tmp_listcontr_2__listcontr_result.object );
    tmp_listcontr_2__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_2__listcontr_iter.object );
    tmp_listcontr_2__listcontr_iter.object = NULL;

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
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__can_coerce_all );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__can_coerce_all );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76004 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1017;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_array_types.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76255 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1017;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1017;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1017;
        goto frame_exception_exit_1;
    }
    assert( var_maxa.object == NULL );
    var_maxa.object = tmp_assign_source_11;

    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__can_coerce_all );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__can_coerce_all );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76004 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1018;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_scalar_types.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76312 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1018;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1018;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1018;
        goto frame_exception_exit_1;
    }
    assert( var_maxsc.object == NULL );
    var_maxsc.object = tmp_assign_source_12;

    tmp_compare_left_1 = var_maxa.object;

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
    tmp_return_value = var_maxsc.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = var_maxsc.object;

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
    tmp_return_value = var_maxa.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    // Tried block of try/except
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__kind_list );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__kind_list );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76370 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1027;
        goto try_except_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_index );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1027;
        goto try_except_handler_1;
    }
    tmp_source_name_2 = var_maxa.object;

    tmp_call_arg_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_kind );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 1027;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 1027;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1027;
        goto try_except_handler_1;
    }
    assert( var_index_a.object == NULL );
    var_index_a.object = tmp_assign_source_13;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__kind_list );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__kind_list );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76370 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1028;
        goto try_except_handler_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_index );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1028;
        goto try_except_handler_1;
    }
    tmp_source_name_4 = var_maxsc.object;

    tmp_call_arg_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_kind );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 1028;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 1028;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1028;
        goto try_except_handler_1;
    }
    assert( var_index_sc.object == NULL );
    var_index_sc.object = tmp_assign_source_14;

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
    tmp_compare_right_3 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1029;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_3:;
    try_except_end_1:;
    tmp_compare_left_4 = var_index_sc.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76409 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1032;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = var_index_a.object;

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76463 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1032;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1032;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__find_common_coerce );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__find_common_coerce );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76516 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1033;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = var_maxsc.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76564 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1033;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = var_maxa.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76615 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1033;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1033;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 1033;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_return_value = var_maxa.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76615 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 1035;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_4:;

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
    if ((var_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            var_x.object
        );

    }
    if ((var_maxa.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_maxa,
            var_maxa.object
        );

    }
    if ((var_maxsc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_maxsc,
            var_maxsc.object
        );

    }
    if ((var_index_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_index_a,
            var_index_a.object
        );

    }
    if ((var_index_sc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_index_sc,
            var_index_sc.object
        );

    }
    if ((par_array_types.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_array_types,
            par_array_types.object
        );

    }
    if ((par_scalar_types.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_scalar_types,
            par_scalar_types.object
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
static PyObject *fparse_function_27_find_common_type_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_array_types = NULL;
    PyObject *_python_par_scalar_types = NULL;
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
                PyErr_Format( PyExc_TypeError, "find_common_type() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_array_types == key )
            {
                assert( _python_par_array_types == NULL );
                _python_par_array_types = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_scalar_types == key )
            {
                assert( _python_par_scalar_types == NULL );
                _python_par_scalar_types = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_array_types, key ) == 1 )
            {
                assert( _python_par_array_types == NULL );
                _python_par_array_types = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_scalar_types, key ) == 1 )
            {
                assert( _python_par_scalar_types == NULL );
                _python_par_scalar_types = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "find_common_type() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_array_types != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_array_types = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_array_types == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_array_types = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_scalar_types != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_scalar_types = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_scalar_types == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_scalar_types = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_array_types == NULL || _python_par_scalar_types == NULL ))
    {
        PyObject *values[] = { _python_par_array_types, _python_par_scalar_types };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_27_find_common_type_of_module_numpy$core$numerictypes( self, _python_par_array_types, _python_par_scalar_types );

error_exit:;

    Py_XDECREF( _python_par_array_types );
    Py_XDECREF( _python_par_scalar_types );

    return NULL;
}

static PyObject *dparse_function_27_find_common_type_of_module_numpy$core$numerictypes( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_27_find_common_type_of_module_numpy$core$numerictypes( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_27_find_common_type_of_module_numpy$core$numerictypes( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10__construct_char_code_lookup_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10__construct_char_code_lookup_of_module_numpy$core$numerictypes,
        dparse_function_10__construct_char_code_lookup_of_module_numpy$core$numerictypes,
        const_str_plain__construct_char_code_lookup,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_55955bead56a9fe189510d54387f7e7f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11__add_array_type_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11__add_array_type_of_module_numpy$core$numerictypes,
        dparse_function_11__add_array_type_of_module_numpy$core$numerictypes,
        const_str_plain__add_array_type,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5a66c866c8839c03b5ad6a244a48fbfb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12__set_array_types_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12__set_array_types_of_module_numpy$core$numerictypes,
        dparse_function_12__set_array_types_of_module_numpy$core$numerictypes,
        const_str_plain__set_array_types,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3d7d8eed0e0ada13f91c6c365a5e6098,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_maximum_sctype_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_maximum_sctype_of_module_numpy$core$numerictypes,
        dparse_function_13_maximum_sctype_of_module_numpy$core$numerictypes,
        const_str_plain_maximum_sctype,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_80b07f36798dfe04a96a0e3d0a4ca164,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_32c1ddc050fc841d862d0b6f6cfba033
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14__python_type_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14__python_type_of_module_numpy$core$numerictypes,
        dparse_function_14__python_type_of_module_numpy$core$numerictypes,
        const_str_plain__python_type,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cfaa7b3a03d2c5f846810f3b2f3fee7e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_17e5a08d7b521f7e5ee3ce9ab7e96956
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15__python_type_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15__python_type_of_module_numpy$core$numerictypes,
        dparse_function_15__python_type_of_module_numpy$core$numerictypes,
        const_str_plain__python_type,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c9719e7e3ba54bb22e808752850497f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_17e5a08d7b521f7e5ee3ce9ab7e96956
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_issctype_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_issctype_of_module_numpy$core$numerictypes,
        dparse_function_16_issctype_of_module_numpy$core$numerictypes,
        const_str_plain_issctype,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_743f6892d8e2f44b479131f448864921,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_0740bf6c2518ee0a13e77e03b6795e35
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_obj2sctype_of_module_numpy$core$numerictypes( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_obj2sctype_of_module_numpy$core$numerictypes,
        dparse_function_17_obj2sctype_of_module_numpy$core$numerictypes,
        const_str_plain_obj2sctype,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6d1c57c0d5339e80776a131a8f9400fc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_69f14cc1f009b5db6d61dda3eb6c425d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18_issubclass__of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18_issubclass__of_module_numpy$core$numerictypes,
        dparse_function_18_issubclass__of_module_numpy$core$numerictypes,
        const_str_plain_issubclass_,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7a93b300eb16d37bbde4676f895f9d7c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_a009b41ff96bcd0d8efaebcf70da9960
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_19_issubsctype_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_19_issubsctype_of_module_numpy$core$numerictypes,
        dparse_function_19_issubsctype_of_module_numpy$core$numerictypes,
        const_str_plain_issubsctype,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cd872483d354a9eb370083b194bcf24d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_2f969ea2d3eac56135d737e6f020baca
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___getitem___of_class_21__typedict_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___getitem___of_class_21__typedict_of_module_numpy$core$numerictypes,
        dparse_function_1___getitem___of_class_21__typedict_of_module_numpy$core$numerictypes,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_01416264b179f02ea8602c95ba96b8d8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_english_lower_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_english_lower_of_module_numpy$core$numerictypes,
        dparse_function_1_english_lower_of_module_numpy$core$numerictypes,
        const_str_plain_english_lower,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ac308c4b0eae0531af9f191d1ff01306,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_540e56eca8e954f039339efc14006234
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_20_issubdtype_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_20_issubdtype_of_module_numpy$core$numerictypes,
        dparse_function_20_issubdtype_of_module_numpy$core$numerictypes,
        const_str_plain_issubdtype,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c1f449d14dfa047ae1eb56c8306bdf48,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_ca4604702bde302777398b1137e075b7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_22__construct_lookups_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_22__construct_lookups_of_module_numpy$core$numerictypes,
        dparse_function_22__construct_lookups_of_module_numpy$core$numerictypes,
        const_str_plain__construct_lookups,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c0d7b8fe2564e6fbbf9da3883bade8ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_23_sctype2char_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_23_sctype2char_of_module_numpy$core$numerictypes,
        dparse_function_23_sctype2char_of_module_numpy$core$numerictypes,
        const_str_plain_sctype2char,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dcfa2721a1bde724a3efe10927faebc7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_a17cb5a35ea7240c370ddad7dfa2fc39
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_25__find_common_coerce_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_25__find_common_coerce_of_module_numpy$core$numerictypes,
        dparse_function_25__find_common_coerce_of_module_numpy$core$numerictypes,
        const_str_plain__find_common_coerce,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fad02ae71c490a022e71e7507c36f560,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_26__can_coerce_all_of_module_numpy$core$numerictypes( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_26__can_coerce_all_of_module_numpy$core$numerictypes,
        dparse_function_26__can_coerce_all_of_module_numpy$core$numerictypes,
        const_str_plain__can_coerce_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fd187a75522a697e41084a2082b82a07,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_27_find_common_type_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_27_find_common_type_of_module_numpy$core$numerictypes,
        dparse_function_27_find_common_type_of_module_numpy$core$numerictypes,
        const_str_plain_find_common_type,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3da08bca388f925b89b541ee74e28fa0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_656dc74647f52a99947517b7b477213f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_english_upper_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_english_upper_of_module_numpy$core$numerictypes,
        dparse_function_2_english_upper_of_module_numpy$core$numerictypes,
        const_str_plain_english_upper,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e948e8d778d00c567ca61668592f50af,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_a723534c21f155f5e531478256110390
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_english_capitalize_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_english_capitalize_of_module_numpy$core$numerictypes,
        dparse_function_3_english_capitalize_of_module_numpy$core$numerictypes,
        const_str_plain_english_capitalize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_85793a556c273edfdf7ec9718eec95fa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_986c3720004310559cdc4dadb9aef8f9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__evalname_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__evalname_of_module_numpy$core$numerictypes,
        dparse_function_4__evalname_of_module_numpy$core$numerictypes,
        const_str_plain__evalname,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_40a8f86f98c1df68fa6f43882c7222e6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_bitname_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_bitname_of_module_numpy$core$numerictypes,
        dparse_function_5_bitname_of_module_numpy$core$numerictypes,
        const_str_plain_bitname,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_679e8233c3ce5e02544dcce97205841d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        const_str_digest_f50faed6669c79dc05c07be079783052
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__add_types_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6__add_types_of_module_numpy$core$numerictypes,
        dparse_function_6__add_types_of_module_numpy$core$numerictypes,
        const_str_plain__add_types,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5caa49c0158ad694f514f007a9e693ed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__add_aliases_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7__add_aliases_of_module_numpy$core$numerictypes,
        dparse_function_7__add_aliases_of_module_numpy$core$numerictypes,
        const_str_plain__add_aliases,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fa3362892ff804e5fe010fea358fbbcc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8__add_integer_aliases_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8__add_integer_aliases_of_module_numpy$core$numerictypes,
        dparse_function_8__add_integer_aliases_of_module_numpy$core$numerictypes,
        const_str_plain__add_integer_aliases,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f998fc39875361694d55eef4e2874db2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9__set_up_aliases_of_module_numpy$core$numerictypes(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9__set_up_aliases_of_module_numpy$core$numerictypes,
        dparse_function_9__set_up_aliases_of_module_numpy$core$numerictypes,
        const_str_plain__set_up_aliases,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1c47108a0dccba3195927b010a8af303,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_24_lambda_of_module_numpy$core$numerictypes( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_24_lambda_of_module_numpy$core$numerictypes,
        dparse_lambda_24_lambda_of_module_numpy$core$numerictypes,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7d2e4f4e8732235894351d5504ab29fc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$numerictypes,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$numerictypes =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core.numerictypes",   /* m_name */
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

MOD_INIT_DECL( numpy$core$numerictypes )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$numerictypes );
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

    // puts( "in initnumpy$core$numerictypes" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$numerictypes = Py_InitModule4(
        "numpy.core.numerictypes",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$core$numerictypes = PyModule_Create( &mdef_numpy$core$numerictypes );
#endif

    moduledict_numpy$core$numerictypes = (PyDictObject *)((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;

    assertObject( module_numpy$core$numerictypes );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_8a3551674d9174096d8a003980610b3f, module_numpy$core$numerictypes );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$core$numerictypes );

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
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_class_creation_1__bases;
    PyObjectTempVariable tmp_class_creation_1__class_dict;
    PyObjectTempVariable tmp_class_creation_1__metaclass;
    PyObjectTempVariable tmp_class_creation_1__class;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_for_loop_4__for_iterator;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_for_loop_5__for_iterator;
    PyObjectTempVariable tmp_for_loop_5__iter_value;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscribed_6;
    PyObject *tmp_ass_subscribed_7;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subscript_6;
    PyObject *tmp_ass_subscript_7;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
    PyObject *tmp_ass_subvalue_6;
    PyObject *tmp_ass_subvalue_7;
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
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
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
    PyObject *tmp_chr_arg_1;
    PyObject *tmp_class_bases_1;
    int tmp_cmp_GtE_1;
    int tmp_cmp_GtE_2;
    int tmp_cmp_GtE_3;
    int tmp_cmp_In_1;
    int tmp_cmp_NotIn_1;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_key_1;
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
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
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
    PyObject *tmp_import_globals_26;
    PyObject *tmp_import_globals_27;
    PyObject *tmp_import_globals_28;
    PyObject *tmp_import_globals_29;
    PyObject *tmp_import_globals_30;
    PyObject *tmp_import_globals_31;
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
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_import_name_from_25;
    PyObject *tmp_import_name_from_26;
    PyObject *tmp_import_name_from_27;
    PyObject *tmp_import_name_from_28;
    PyObject *tmp_import_name_from_29;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_list_element_4;
    PyObject *tmp_list_element_5;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    bool tmp_result;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    Py_ssize_t tmp_slice_index_upper_4;
    Py_ssize_t tmp_slice_index_upper_5;
    Py_ssize_t tmp_slice_index_upper_6;
    Py_ssize_t tmp_slice_index_upper_7;
    Py_ssize_t tmp_slice_index_upper_8;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    PyObject *tmp_slice_source_5;
    PyObject *tmp_slice_source_6;
    PyObject *tmp_slice_source_7;
    PyObject *tmp_slice_source_8;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_4;
    Py_ssize_t tmp_sliceslicedel_index_lower_5;
    Py_ssize_t tmp_sliceslicedel_index_lower_6;
    Py_ssize_t tmp_sliceslicedel_index_lower_7;
    Py_ssize_t tmp_sliceslicedel_index_lower_8;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    int tmp_tried_lineno_8;
    int tmp_tried_lineno_9;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    tmp_assign_source_1 = const_str_digest_ef1b5c3e054387032a092b644497bb82;
    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_0caf233dc22aa52058e6ce96ead78271;
    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_309e1df717701ebe0c893b9a42a6fb9b, module_numpy$core$numerictypes );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 83;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 83;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 83;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_4c43d4b8aa44e8b1517eff946ecbbca8_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 93;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_94c347c24ae368650c11346640f548a5, tmp_import_globals_4, tmp_import_globals_4, const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_typeinfo );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeinfo, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 93;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_94c347c24ae368650c11346640f548a5, tmp_import_globals_5, tmp_import_globals_5, const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ndarray );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_ndarray, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 93;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_94c347c24ae368650c11346640f548a5, tmp_import_globals_6, tmp_import_globals_6, const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_array );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 93;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_94c347c24ae368650c11346640f548a5, tmp_import_globals_7, tmp_import_globals_7, const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_empty );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_empty, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 93;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_94c347c24ae368650c11346640f548a5, tmp_import_globals_8, tmp_import_globals_8, const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_dtype );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_dtype, tmp_assign_source_11 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 93;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_94c347c24ae368650c11346640f548a5, tmp_import_globals_9, tmp_import_globals_9, const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_datetime_data );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_datetime_data, tmp_assign_source_12 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 93;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_94c347c24ae368650c11346640f548a5, tmp_import_globals_10, tmp_import_globals_10, const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_datetime_as_string );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_datetime_as_string, tmp_assign_source_13 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 93;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_94c347c24ae368650c11346640f548a5, tmp_import_globals_11, tmp_import_globals_11, const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_busday_offset );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_busday_offset, tmp_assign_source_14 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 93;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_94c347c24ae368650c11346640f548a5, tmp_import_globals_12, tmp_import_globals_12, const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_busday_count );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_busday_count, tmp_assign_source_15 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 93;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_94c347c24ae368650c11346640f548a5, tmp_import_globals_13, tmp_import_globals_13, const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_is_busday );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_is_busday, tmp_assign_source_16 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 93;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_94c347c24ae368650c11346640f548a5, tmp_import_globals_14, tmp_import_globals_14, const_tuple_4dabcf134fa87d0ccc7502c630b4e80a_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_busdaycalendar );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_busdaycalendar, tmp_assign_source_17 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 98;
    tmp_assign_source_18 = IMPORT_MODULE( const_str_plain_types, tmp_import_globals_15, tmp_import_globals_15, Py_None, const_int_0 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__types, tmp_assign_source_18 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 99;
    tmp_assign_source_19 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_16, tmp_import_globals_16, Py_None, const_int_0 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_19 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 100;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_digest_9718270fe5d2c916ce2b6f64e75a37af, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_plain_bytes_str_plain_long_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_bytes );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_20 );
    tmp_import_globals_18 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 100;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_digest_9718270fe5d2c916ce2b6f64e75a37af, tmp_import_globals_18, tmp_import_globals_18, const_tuple_str_plain_bytes_str_plain_long_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_long );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_long, tmp_assign_source_21 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_3;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_module->f_lineno = 104;
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
    tmp_import_globals_19 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 105;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_19, tmp_import_globals_19, const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple, const_int_0 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_bool );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_bool, tmp_assign_source_22 );
    tmp_import_globals_20 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 105;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_20, tmp_import_globals_20, const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple, const_int_0 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_int );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_int, tmp_assign_source_23 );
    tmp_import_globals_21 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 105;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_21, tmp_import_globals_21, const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple, const_int_0 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_float );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_float, tmp_assign_source_24 );
    tmp_import_globals_22 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 105;
    tmp_import_name_from_20 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_22, tmp_import_globals_22, const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple, const_int_0 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_complex );
    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_complex, tmp_assign_source_25 );
    tmp_import_globals_23 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 105;
    tmp_import_name_from_21 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_23, tmp_import_globals_23, const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple, const_int_0 );
    if ( tmp_import_name_from_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_object );
    Py_DECREF( tmp_import_name_from_21 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_object, tmp_assign_source_26 );
    tmp_import_globals_24 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 105;
    tmp_import_name_from_22 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_24, tmp_import_globals_24, const_tuple_fe1aafdb4c9b486ab1f2b20b502e60c6_tuple, const_int_0 );
    if ( tmp_import_name_from_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_str );
    Py_DECREF( tmp_import_name_from_22 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_27 );
    tmp_assign_source_28 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_assign_source_28 == NULL ))
    {
        tmp_assign_source_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_assign_source_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48504 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_unicode, tmp_assign_source_28 );
    goto branch_end_1;
    branch_no_1:;
    tmp_import_globals_25 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 108;
    tmp_import_name_from_23 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_25, tmp_import_globals_25, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_bool );
    Py_DECREF( tmp_import_name_from_23 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_bool, tmp_assign_source_29 );
    tmp_import_globals_26 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 108;
    tmp_import_name_from_24 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_26, tmp_import_globals_26, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_int );
    Py_DECREF( tmp_import_name_from_24 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_int, tmp_assign_source_30 );
    tmp_import_globals_27 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 108;
    tmp_import_name_from_25 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_27, tmp_import_globals_27, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_float );
    Py_DECREF( tmp_import_name_from_25 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_float, tmp_assign_source_31 );
    tmp_import_globals_28 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 108;
    tmp_import_name_from_26 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_28, tmp_import_globals_28, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_complex );
    Py_DECREF( tmp_import_name_from_26 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_complex, tmp_assign_source_32 );
    tmp_import_globals_29 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 108;
    tmp_import_name_from_27 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_29, tmp_import_globals_29, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_object );
    Py_DECREF( tmp_import_name_from_27 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_object, tmp_assign_source_33 );
    tmp_import_globals_30 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 108;
    tmp_import_name_from_28 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_30, tmp_import_globals_30, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_unicode );
    Py_DECREF( tmp_import_name_from_28 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_unicode, tmp_assign_source_34 );
    tmp_import_globals_31 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    frame_module->f_lineno = 108;
    tmp_import_name_from_29 = IMPORT_MODULE( const_str_plain___builtin__, tmp_import_globals_31, tmp_import_globals_31, const_tuple_8caa108769477bbff5f1dc82d46f2ddb_tuple, const_int_0 );
    if ( tmp_import_name_from_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_str );
    Py_DECREF( tmp_import_name_from_29 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_35 );
    branch_end_1:;
    // Tried code
    tmp_assign_source_36 = NULL;
    // Tried code
    tmp_range_arg_1 = const_int_pos_256;
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 116;
        goto try_finally_handler_2;
    }
    tmp_assign_source_37 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 116;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_37;

    tmp_assign_source_38 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_38;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_39 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_39 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_module->f_lineno = 116;
            goto try_finally_handler_2;
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

    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__m, tmp_assign_source_40 );
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_chr_arg_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__m );

    if (unlikely( tmp_chr_arg_1 == NULL ))
    {
        tmp_chr_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__m );
    }

    if ( tmp_chr_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73385 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 116;
        goto try_finally_handler_2;
    }

    tmp_append_value_1 = BUILTIN_CHR( tmp_chr_arg_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 116;
        goto try_finally_handler_2;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 116;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 116;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_assign_source_36 = tmp_listcontr_1__listcontr_result.object;

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
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

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
    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__all_chars, tmp_assign_source_36 );
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
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

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
    tmp_sliceslicedel_index_lower_1 = 65;
    tmp_slice_index_upper_1 = 91;
    tmp_slice_source_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__all_chars );

    if (unlikely( tmp_slice_source_1 == NULL ))
    {
        tmp_slice_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__all_chars );
    }

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73409 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_41 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__ascii_upper, tmp_assign_source_41 );
    tmp_sliceslicedel_index_lower_2 = 97;
    tmp_slice_index_upper_2 = 123;
    tmp_slice_source_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__all_chars );

    if (unlikely( tmp_slice_source_2 == NULL ))
    {
        tmp_slice_source_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__all_chars );
    }

    if ( tmp_slice_source_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73409 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_42 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__ascii_lower, tmp_assign_source_42 );
    tmp_source_name_2 = const_str_empty;
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_3 = 0;
    tmp_slice_index_upper_3 = 65;
    tmp_slice_source_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__all_chars );

    if (unlikely( tmp_slice_source_3 == NULL ))
    {
        tmp_slice_source_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__all_chars );
    }

    if ( tmp_slice_source_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73409 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__ascii_lower );

    if (unlikely( tmp_binop_right_2 == NULL ))
    {
        tmp_binop_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ascii_lower );
    }

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73441 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_4 = 91;
    tmp_slice_index_upper_4 = PY_SSIZE_T_MAX;
    tmp_slice_source_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__all_chars );

    if (unlikely( tmp_slice_source_4 == NULL ))
    {
        tmp_slice_source_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__all_chars );
    }

    if ( tmp_slice_source_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73409 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_left_1 );

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 119;
    tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_LOWER_TABLE, tmp_assign_source_43 );
    tmp_source_name_3 = const_str_empty;
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_5 = 0;
    tmp_slice_index_upper_5 = 97;
    tmp_slice_source_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__all_chars );

    if (unlikely( tmp_slice_source_5 == NULL ))
    {
        tmp_slice_source_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__all_chars );
    }

    if ( tmp_slice_source_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73409 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_5, tmp_sliceslicedel_index_lower_5, tmp_slice_index_upper_5 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__ascii_upper );

    if (unlikely( tmp_binop_right_4 == NULL ))
    {
        tmp_binop_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ascii_upper );
    }

    if ( tmp_binop_right_4 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73475 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_3 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_6 = 123;
    tmp_slice_index_upper_6 = PY_SSIZE_T_MAX;
    tmp_slice_source_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__all_chars );

    if (unlikely( tmp_slice_source_6 == NULL ))
    {
        tmp_slice_source_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__all_chars );
    }

    if ( tmp_slice_source_6 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73409 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_6, tmp_sliceslicedel_index_lower_6, tmp_slice_index_upper_6 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_binop_left_3 );

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 120;
    tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_UPPER_TABLE, tmp_assign_source_44 );
    tmp_assign_source_45 = MAKE_FUNCTION_function_1_english_lower_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_45 );

        frame_module->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_english_lower, tmp_assign_source_45 );
    tmp_assign_source_46 = MAKE_FUNCTION_function_2_english_upper_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_46 );

        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_english_upper, tmp_assign_source_46 );
    tmp_assign_source_47 = MAKE_FUNCTION_function_3_english_capitalize_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_47 );

        frame_module->f_lineno = 184;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_english_capitalize, tmp_assign_source_47 );
    tmp_assign_source_48 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict, tmp_assign_source_48 );
    tmp_assign_source_49 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA, tmp_assign_source_49 );
    tmp_assign_source_50 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes, tmp_assign_source_50 );
    tmp_assign_source_51 = MAKE_FUNCTION_function_4__evalname_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        frame_module->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__evalname, tmp_assign_source_51 );
    tmp_assign_source_52 = MAKE_FUNCTION_function_5_bitname_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_52 );

        frame_module->f_lineno = 232;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_bitname, tmp_assign_source_52 );
    tmp_assign_source_53 = MAKE_FUNCTION_function_6__add_types_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_53 );

        frame_module->f_lineno = 288;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__add_types, tmp_assign_source_53 );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__add_types );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__add_types );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73509 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 302;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_54 = MAKE_FUNCTION_function_7__add_aliases_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_54 );

        frame_module->f_lineno = 304;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__add_aliases, tmp_assign_source_54 );
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__add_aliases );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__add_aliases );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73541 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 334;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 334;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 334;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_55 = MAKE_FUNCTION_function_8__add_integer_aliases_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_55 );

        frame_module->f_lineno = 345;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__add_integer_aliases, tmp_assign_source_55 );
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__add_integer_aliases );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__add_integer_aliases );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73575 ], 42, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 376;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 376;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 376;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73617 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 379;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = const_str_plain_void;
    tmp_assign_source_56 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 379;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_void, tmp_assign_source_56 );
    tmp_subscr_target_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_subscr_target_3 == NULL ))
    {
        tmp_subscr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73617 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 380;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_3 = const_str_plain_generic;
    tmp_assign_source_57 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 380;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_generic, tmp_assign_source_57 );
    tmp_assign_source_58 = MAKE_FUNCTION_function_9__set_up_aliases_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_58 );

        frame_module->f_lineno = 386;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__set_up_aliases, tmp_assign_source_58 );
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__set_up_aliases );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__set_up_aliases );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73647 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 431;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 431;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 431;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_59 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__sctype2char_dict, tmp_assign_source_59 );
    tmp_assign_source_60 = MAKE_FUNCTION_function_10__construct_char_code_lookup_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_60 );

        frame_module->f_lineno = 435;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__construct_char_code_lookup, tmp_assign_source_60 );
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__construct_char_code_lookup );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__construct_char_code_lookup );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73684 ], 49, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 441;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 441;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 441;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_61 = _PyDict_NewPresized( 5 );
    tmp_dict_value_1 = PyList_New( 0 );
    tmp_dict_key_1 = const_str_plain_int;
    PyDict_SetItem( tmp_assign_source_61, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_value_2 = PyList_New( 0 );
    tmp_dict_key_2 = const_str_plain_uint;
    PyDict_SetItem( tmp_assign_source_61, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = PyList_New( 0 );
    tmp_dict_key_3 = const_str_plain_float;
    PyDict_SetItem( tmp_assign_source_61, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_dict_value_4 = PyList_New( 0 );
    tmp_dict_key_4 = const_str_plain_complex;
    PyDict_SetItem( tmp_assign_source_61, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    tmp_dict_value_5 = PyList_New( 5 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_bool );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bool );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        Py_DECREF( tmp_dict_value_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73733 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 448;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_dict_value_5, 0, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_object );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_object );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        Py_DECREF( tmp_dict_value_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73759 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 448;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_dict_value_5, 1, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        Py_DECREF( tmp_dict_value_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48504 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 448;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_dict_value_5, 2, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        Py_DECREF( tmp_dict_value_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52078 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 448;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_dict_value_5, 3, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_void );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_void );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        Py_DECREF( tmp_dict_value_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73787 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 448;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_dict_value_5, 4, tmp_list_element_1 );
    tmp_dict_key_5 = const_str_plain_others;
    PyDict_SetItem( tmp_assign_source_61, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypes, tmp_assign_source_61 );
    tmp_assign_source_62 = MAKE_FUNCTION_function_11__add_array_type_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_62 );

        frame_module->f_lineno = 450;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__add_array_type, tmp_assign_source_62 );
    tmp_assign_source_63 = MAKE_FUNCTION_function_12__set_array_types_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_63 );

        frame_module->f_lineno = 458;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__set_array_types, tmp_assign_source_63 );
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__set_array_types );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__set_array_types );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73813 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 478;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 478;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 478;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_64 = LIST_COPY( const_list_32ebf6c577230c9baef87db66dd9a3a4_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_genericTypeRank, tmp_assign_source_64 );
    tmp_assign_source_65 = MAKE_FUNCTION_function_13_maximum_sctype_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_65 );

        frame_module->f_lineno = 489;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_maximum_sctype, tmp_assign_source_65 );
    // Tried block of try/except
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__types );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__types );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73851 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 539;
        goto try_except_handler_1;
    }

    tmp_assign_source_66 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_BufferType );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 539;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_buffer_type, tmp_assign_source_66 );
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
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 540;
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
    tmp_assign_source_67 = LOOKUP_BUILTIN( const_str_plain_memoryview );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 542;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_buffer_type, tmp_assign_source_67 );
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_2:;
    try_except_end_1:;
    tmp_assign_source_68 = _PyDict_NewPresized( 7 );
    tmp_dict_value_6 = const_str_plain_int_;
    tmp_dict_key_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_int );

    if (unlikely( tmp_dict_key_6 == NULL ))
    {
        tmp_dict_key_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
    }

    if ( tmp_dict_key_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_68 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73879 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 544;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_68, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = const_str_plain_float_;
    tmp_dict_key_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_float );

    if (unlikely( tmp_dict_key_7 == NULL ))
    {
        tmp_dict_key_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_float );
    }

    if ( tmp_dict_key_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_68 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73904 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 545;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_68, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = const_str_plain_complex_;
    tmp_dict_key_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_complex );

    if (unlikely( tmp_dict_key_8 == NULL ))
    {
        tmp_dict_key_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_complex );
    }

    if ( tmp_dict_key_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_68 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73931 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 546;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_68, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_value_9 = const_str_plain_bool_;
    tmp_dict_key_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_bool );

    if (unlikely( tmp_dict_key_9 == NULL ))
    {
        tmp_dict_key_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bool );
    }

    if ( tmp_dict_key_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_68 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73733 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 547;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_68, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_value_10 = const_str_plain_bytes_;
    tmp_dict_key_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_bytes );

    if (unlikely( tmp_dict_key_10 == NULL ))
    {
        tmp_dict_key_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
    }

    if ( tmp_dict_key_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_68 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 51993 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 548;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_68, tmp_dict_key_10, tmp_dict_value_10 );
    tmp_dict_value_11 = const_str_plain_unicode_;
    tmp_dict_key_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_dict_key_11 == NULL ))
    {
        tmp_dict_key_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_dict_key_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_68 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52078 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 549;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_68, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dict_value_12 = const_str_plain_void;
    tmp_dict_key_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_buffer_type );

    if (unlikely( tmp_dict_key_12 == NULL ))
    {
        tmp_dict_key_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_buffer_type );
    }

    if ( tmp_dict_key_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_68 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73960 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 550;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_assign_source_68, tmp_dict_key_12, tmp_dict_value_12 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__python_types, tmp_assign_source_68 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 553;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_version_info );
    if ( tmp_subscr_target_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 553;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_4 = const_int_0;
    tmp_compare_left_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_target_4 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 553;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_pos_3;
    tmp_cmp_GtE_2 = RICH_COMPARE_BOOL_GE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_GtE_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_module->f_lineno = 553;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_GtE_2 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_69 = MAKE_FUNCTION_function_14__python_type_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_69 );

        frame_module->f_lineno = 554;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__python_type, tmp_assign_source_69 );
    goto branch_end_3;
    branch_no_3:;
    tmp_assign_source_70 = MAKE_FUNCTION_function_15__python_type_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_70 );

        frame_module->f_lineno = 560;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__python_type, tmp_assign_source_70 );
    branch_end_3:;
    tmp_assign_source_71 = MAKE_FUNCTION_function_16_issctype_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_71 );

        frame_module->f_lineno = 566;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_issctype, tmp_assign_source_71 );
    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_72 = MAKE_FUNCTION_function_17_obj2sctype_of_module_numpy$core$numerictypes( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_72 );

        frame_module->f_lineno = 610;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_obj2sctype, tmp_assign_source_72 );
    tmp_assign_source_73 = MAKE_FUNCTION_function_18_issubclass__of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_73 );

        frame_module->f_lineno = 667;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_issubclass_, tmp_assign_source_73 );
    tmp_assign_source_74 = MAKE_FUNCTION_function_19_issubsctype_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_74 );

        frame_module->f_lineno = 705;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_issubsctype, tmp_assign_source_74 );
    tmp_assign_source_75 = MAKE_FUNCTION_function_20_issubdtype_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_75 );

        frame_module->f_lineno = 735;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_issubdtype, tmp_assign_source_75 );
    // Tried code
    tmp_assign_source_76 = PyTuple_New( 1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_dict );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_76 );

        frame_module->f_lineno = 772;
        goto try_finally_handler_3;
    }
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_76, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_76;

    tmp_assign_source_77 = impl_class_21__typedict_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 772;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_77;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 772;
        goto try_finally_handler_3;
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
    tmp_assign_source_78 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 772;
        goto try_finally_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_78 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_78;

    tmp_called_9 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_3 = const_str_plain__typedict;
    tmp_call_arg_element_4 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_5 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 772;
    tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS3( tmp_called_9, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 772;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_79;

    tmp_assign_source_80 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__typedict, tmp_assign_source_80 );
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
    Py_XDECREF( tmp_class_creation_1__class.object );
    tmp_class_creation_1__class.object = NULL;

    Py_XDECREF( tmp_class_creation_1__bases.object );
    tmp_class_creation_1__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict.object );
    tmp_class_creation_1__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass.object );
    tmp_class_creation_1__metaclass.object = NULL;

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
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__typedict );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typedict );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73993 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 783;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 783;
    tmp_assign_source_81 = CALL_FUNCTION_NO_ARGS( tmp_called_10 );
    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 783;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_nbytes, tmp_assign_source_81 );
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__typedict );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typedict );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73993 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 784;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 784;
    tmp_assign_source_82 = CALL_FUNCTION_NO_ARGS( tmp_called_11 );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 784;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__alignment, tmp_assign_source_82 );
    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__typedict );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typedict );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73993 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 785;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 785;
    tmp_assign_source_83 = CALL_FUNCTION_NO_ARGS( tmp_called_12 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 785;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__maxvals, tmp_assign_source_83 );
    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__typedict );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typedict );
    }

    if ( tmp_called_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73993 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 786;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 786;
    tmp_assign_source_84 = CALL_FUNCTION_NO_ARGS( tmp_called_13 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 786;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__minvals, tmp_assign_source_84 );
    tmp_assign_source_85 = MAKE_FUNCTION_function_22__construct_lookups_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_85 );

        frame_module->f_lineno = 787;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__construct_lookups, tmp_assign_source_85 );
    tmp_called_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__construct_lookups );

    if (unlikely( tmp_called_14 == NULL ))
    {
        tmp_called_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__construct_lookups );
    }

    if ( tmp_called_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74024 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 801;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 801;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 801;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_86 = MAKE_FUNCTION_function_23_sctype2char_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_86 );

        frame_module->f_lineno = 803;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctype2char, tmp_assign_source_86 );
    tmp_called_15 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__typedict );

    if (unlikely( tmp_called_15 == NULL ))
    {
        tmp_called_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typedict );
    }

    if ( tmp_called_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73993 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 854;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 854;
    tmp_assign_source_87 = CALL_FUNCTION_NO_ARGS( tmp_called_15 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 854;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_cast, tmp_assign_source_87 );
    // Tried block of try/except
    tmp_assign_source_88 = PyList_New( 8 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__types );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__types );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73851 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 856;
        goto try_except_handler_2;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_IntType );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_88 );

        frame_module->f_lineno = 856;
        goto try_except_handler_2;
    }
    PyList_SET_ITEM( tmp_assign_source_88, 0, tmp_list_element_2 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__types );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__types );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73851 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 856;
        goto try_except_handler_2;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_FloatType );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_88 );

        frame_module->f_lineno = 856;
        goto try_except_handler_2;
    }
    PyList_SET_ITEM( tmp_assign_source_88, 1, tmp_list_element_2 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__types );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__types );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73851 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 856;
        goto try_except_handler_2;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ComplexType );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_88 );

        frame_module->f_lineno = 856;
        goto try_except_handler_2;
    }
    PyList_SET_ITEM( tmp_assign_source_88, 2, tmp_list_element_2 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__types );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__types );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73851 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 857;
        goto try_except_handler_2;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_LongType );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_88 );

        frame_module->f_lineno = 857;
        goto try_except_handler_2;
    }
    PyList_SET_ITEM( tmp_assign_source_88, 3, tmp_list_element_2 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__types );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__types );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73851 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 857;
        goto try_except_handler_2;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_BooleanType );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_88 );

        frame_module->f_lineno = 857;
        goto try_except_handler_2;
    }
    PyList_SET_ITEM( tmp_assign_source_88, 4, tmp_list_element_2 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__types );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__types );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73851 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 858;
        goto try_except_handler_2;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_StringType );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_88 );

        frame_module->f_lineno = 858;
        goto try_except_handler_2;
    }
    PyList_SET_ITEM( tmp_assign_source_88, 5, tmp_list_element_2 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__types );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__types );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73851 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 858;
        goto try_except_handler_2;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_UnicodeType );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_88 );

        frame_module->f_lineno = 858;
        goto try_except_handler_2;
    }
    PyList_SET_ITEM( tmp_assign_source_88, 6, tmp_list_element_2 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__types );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__types );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73851 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 858;
        goto try_except_handler_2;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_BufferType );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_88 );

        frame_module->f_lineno = 858;
        goto try_except_handler_2;
    }
    PyList_SET_ITEM( tmp_assign_source_88, 7, tmp_list_element_2 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_ScalarType, tmp_assign_source_88 );
    goto try_except_end_2;
    try_except_handler_2:;
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
    tmp_compare_left_5 = PyThreadState_GET()->exc_type;
    tmp_compare_right_5 = PyExc_AttributeError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 859;
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
    tmp_assign_source_89 = PyList_New( 8 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_int );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_89 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73879 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 861;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assign_source_89, 0, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_float );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_float );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_89 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73904 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 861;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assign_source_89, 1, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_complex );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_complex );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_89 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73931 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 861;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assign_source_89, 2, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_int );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_89 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73879 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 861;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assign_source_89, 3, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_bool );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bool );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_89 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73733 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 861;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assign_source_89, 4, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_bytes );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_89 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 51993 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 861;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assign_source_89, 5, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_89 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48504 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 861;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assign_source_89, 6, tmp_list_element_3 );
    tmp_list_element_3 = LOOKUP_BUILTIN( const_str_plain_memoryview );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_89 );

        frame_module->f_lineno = 861;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assign_source_89, 7, tmp_list_element_3 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_ScalarType, tmp_assign_source_89 );
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_4:;
    try_except_end_2:;
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_ScalarType );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ScalarType );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71589 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 863;
        goto frame_exception_exit_1;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_extend );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 863;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__sctype2char_dict );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sctype2char_dict );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74064 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 863;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_keys );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );

        frame_module->f_lineno = 863;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 863;
    tmp_call_arg_element_6 = CALL_FUNCTION_NO_ARGS( tmp_called_17 );
    Py_DECREF( tmp_called_17 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );

        frame_module->f_lineno = 863;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 863;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_16 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 863;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_tuple_arg_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_ScalarType );

    if (unlikely( tmp_tuple_arg_1 == NULL ))
    {
        tmp_tuple_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ScalarType );
    }

    if ( tmp_tuple_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71589 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 864;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_90 = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 864;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_ScalarType, tmp_assign_source_90 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__sctype2char_dict );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sctype2char_dict );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74064 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 865;
        goto frame_exception_exit_1;
    }

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_keys );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 865;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 865;
    tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS( tmp_called_18 );
    Py_DECREF( tmp_called_18 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 865;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_91 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 865;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_91;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_92 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_92 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_module->f_lineno = 865;
            goto try_finally_handler_4;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_92;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_92;
        Py_DECREF( old );
    }
    tmp_assign_source_93 = tmp_for_loop_1__iter_value.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key, tmp_assign_source_93 );
    tmp_defaults_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_defaults_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 68875 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 866;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
    tmp_ass_subvalue_1 = MAKE_FUNCTION_lambda_24_lambda_of_module_numpy$core$numerictypes( tmp_defaults_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        frame_module->f_lineno = 866;
        goto try_finally_handler_4;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_cast );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cast );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74103 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 866;
        goto try_finally_handler_4;
    }

    tmp_ass_subscript_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key );

    if (unlikely( tmp_ass_subscript_1 == NULL ))
    {
        tmp_ass_subscript_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key );
    }

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 68875 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 866;
        goto try_finally_handler_4;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 866;
        goto try_finally_handler_4;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 865;
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
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_module->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_4;
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
    tmp_called_19 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__typedict );

    if (unlikely( tmp_called_19 == NULL ))
    {
        tmp_called_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typedict );
    }

    if ( tmp_called_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73993 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 869;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 869;
    tmp_assign_source_94 = CALL_FUNCTION_NO_ARGS( tmp_called_19 );
    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 869;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__typestr, tmp_assign_source_94 );
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__sctype2char_dict );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sctype2char_dict );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74064 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 870;
        goto frame_exception_exit_1;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_keys );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 870;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 870;
    tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS( tmp_called_20 );
    Py_DECREF( tmp_called_20 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 870;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_95 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_95 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 870;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_95;

    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_96 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_96 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_module->f_lineno = 870;
            goto try_finally_handler_5;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_96;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_96;
        Py_DECREF( old );
    }
    tmp_assign_source_97 = tmp_for_loop_2__iter_value.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key, tmp_assign_source_97 );
    tmp_called_21 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 871;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key );

    if (unlikely( tmp_call_arg_element_7 == NULL ))
    {
        tmp_call_arg_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key );
    }

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 68875 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 871;
        goto try_finally_handler_5;
    }

    tmp_subscr_target_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_subscr_target_5 == NULL ))
    {
        tmp_subscr_target_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73617 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 871;
        goto try_finally_handler_5;
    }

    tmp_subscr_subscript_5 = const_str_plain_flexible;
    tmp_call_arg_element_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 871;
        goto try_finally_handler_5;
    }
    frame_module->f_lineno = 871;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_21, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 871;
        goto try_finally_handler_5;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_module->f_lineno = 871;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_subscr_target_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__sctype2char_dict );

    if (unlikely( tmp_subscr_target_6 == NULL ))
    {
        tmp_subscr_target_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sctype2char_dict );
    }

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74064 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 872;
        goto try_finally_handler_5;
    }

    tmp_subscr_subscript_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key );

    if (unlikely( tmp_subscr_subscript_6 == NULL ))
    {
        tmp_subscr_subscript_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key );
    }

    if ( tmp_subscr_subscript_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 68875 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 872;
        goto try_finally_handler_5;
    }

    tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 872;
        goto try_finally_handler_5;
    }
    tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__typestr );

    if (unlikely( tmp_ass_subscribed_2 == NULL ))
    {
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typestr );
    }

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74129 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 872;
        goto try_finally_handler_5;
    }

    tmp_ass_subscript_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key );

    if (unlikely( tmp_ass_subscript_2 == NULL ))
    {
        tmp_ass_subscript_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key );
    }

    if ( tmp_ass_subscript_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 68875 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 872;
        goto try_finally_handler_5;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 872;
        goto try_finally_handler_5;
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_sliceslicedel_index_lower_7 = 1;
    tmp_slice_index_upper_7 = PY_SSIZE_T_MAX;
    tmp_called_22 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_empty );

    if (unlikely( tmp_called_22 == NULL ))
    {
        tmp_called_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_empty );
    }

    if ( tmp_called_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 69184 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 874;
        goto try_finally_handler_5;
    }

    tmp_call_arg_element_9 = const_tuple_int_pos_1_tuple;
    tmp_call_arg_element_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key );

    if (unlikely( tmp_call_arg_element_10 == NULL ))
    {
        tmp_call_arg_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key );
    }

    if ( tmp_call_arg_element_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 68875 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 874;
        goto try_finally_handler_5;
    }

    frame_module->f_lineno = 874;
    tmp_source_name_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_22, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 874;
        goto try_finally_handler_5;
    }
    tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_dtype );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_source_name_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 874;
        goto try_finally_handler_5;
    }
    tmp_slice_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_str );
    Py_DECREF( tmp_source_name_18 );
    if ( tmp_slice_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 874;
        goto try_finally_handler_5;
    }
    tmp_ass_subvalue_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_7, tmp_sliceslicedel_index_lower_7, tmp_slice_index_upper_7 );
    Py_DECREF( tmp_slice_source_7 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 874;
        goto try_finally_handler_5;
    }
    tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__typestr );

    if (unlikely( tmp_ass_subscribed_3 == NULL ))
    {
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typestr );
    }

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74129 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 874;
        goto try_finally_handler_5;
    }

    tmp_ass_subscript_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key );

    if (unlikely( tmp_ass_subscript_3 == NULL ))
    {
        tmp_ass_subscript_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key );
    }

    if ( tmp_ass_subscript_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 68875 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 874;
        goto try_finally_handler_5;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 874;
        goto try_finally_handler_5;
    }
    branch_end_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 870;
        goto try_finally_handler_5;
    }
    goto loop_start_3;
    loop_end_3:;
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

    tmp_tried_lineno_5 = frame_module->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_5;
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
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__typestr );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typestr );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74129 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 877;
        goto frame_exception_exit_1;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_items );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 877;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 877;
    tmp_iter_arg_4 = CALL_FUNCTION_NO_ARGS( tmp_called_23 );
    Py_DECREF( tmp_called_23 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 877;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_98 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 877;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator.object == NULL );
    tmp_for_loop_3__for_iterator.object = tmp_assign_source_98;

    // Tried code
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_99 = ITERATOR_NEXT( tmp_next_source_4 );
    if (tmp_assign_source_99 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_4;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_module->f_lineno = 877;
            goto try_finally_handler_6;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_99;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_99;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_5 = tmp_for_loop_3__iter_value.object;

    tmp_assign_source_100 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 877;
        goto try_finally_handler_7;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_100;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_100;
        Py_DECREF( old );
    }
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_101 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_101 == NULL )
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


        frame_module->f_lineno = 877;
        goto try_finally_handler_7;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_101;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_101;
        Py_DECREF( old );
    }
    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_102 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_102 == NULL )
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


        frame_module->f_lineno = 877;
        goto try_finally_handler_7;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_102;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_102;
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
    tmp_assign_source_103 = tmp_tuple_unpack_1__element_1.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key, tmp_assign_source_103 );
    tmp_assign_source_104 = tmp_tuple_unpack_1__element_2.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_val, tmp_assign_source_104 );
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

    tmp_tried_lineno_6 = frame_module->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_6;
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
    tmp_compare_left_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_val );

    if (unlikely( tmp_compare_left_6 == NULL ))
    {
        tmp_compare_left_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_val );
    }

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74159 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 878;
        goto try_finally_handler_6;
    }

    tmp_compare_right_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_compare_right_6 == NULL ))
    {
        tmp_compare_right_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74184 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 878;
        goto try_finally_handler_6;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 878;
        goto try_finally_handler_6;
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
    tmp_ass_subvalue_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key );

    if (unlikely( tmp_ass_subvalue_4 == NULL ))
    {
        tmp_ass_subvalue_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key );
    }

    if ( tmp_ass_subvalue_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 68875 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 879;
        goto try_finally_handler_6;
    }

    tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_4 == NULL ))
    {
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74184 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 879;
        goto try_finally_handler_6;
    }

    tmp_ass_subscript_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_val );

    if (unlikely( tmp_ass_subscript_4 == NULL ))
    {
        tmp_ass_subscript_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_val );
    }

    if ( tmp_ass_subscript_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74159 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 879;
        goto try_finally_handler_6;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 879;
        goto try_finally_handler_6;
    }
    branch_no_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 877;
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
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_module->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_7;
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
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 883;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_7 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_version_info );
    if ( tmp_subscr_target_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 883;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_7 = const_int_0;
    tmp_compare_left_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    Py_DECREF( tmp_subscr_target_7 );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 883;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = const_int_pos_3;
    tmp_cmp_GtE_3 = RICH_COMPARE_BOOL_GE( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_GtE_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        frame_module->f_lineno = 883;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_7 );
    if (tmp_cmp_GtE_3 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_105 = PyList_New( 9 );
    tmp_list_element_4 = const_str_plain_int;
    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assign_source_105, 0, tmp_list_element_4 );
    tmp_list_element_4 = const_str_plain_float;
    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assign_source_105, 1, tmp_list_element_4 );
    tmp_list_element_4 = const_str_plain_complex;
    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assign_source_105, 2, tmp_list_element_4 );
    tmp_list_element_4 = const_str_plain_bool;
    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assign_source_105, 3, tmp_list_element_4 );
    tmp_list_element_4 = const_str_plain_object;
    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assign_source_105, 4, tmp_list_element_4 );
    tmp_list_element_4 = const_str_plain_str;
    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assign_source_105, 5, tmp_list_element_4 );
    tmp_list_element_4 = const_str_plain_bytes;
    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assign_source_105, 6, tmp_list_element_4 );
    tmp_list_element_4 = const_str_plain_object;
    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assign_source_105, 7, tmp_list_element_4 );
    tmp_list_element_4 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_plain_a;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_4, 0, tmp_tuple_element_3 );
    tmp_subscr_target_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_subscr_target_8 == NULL ))
    {
        tmp_subscr_target_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_subscr_target_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_105 );
        Py_DECREF( tmp_list_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73617 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 885;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_8 = const_str_plain_bytes_;
    tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_105 );
        Py_DECREF( tmp_list_element_4 );

        frame_module->f_lineno = 885;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_4, 1, tmp_tuple_element_3 );
    PyList_SET_ITEM( tmp_assign_source_105, 8, tmp_list_element_4 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__toadd, tmp_assign_source_105 );
    goto branch_end_7;
    branch_no_7:;
    tmp_assign_source_106 = PyList_New( 10 );
    tmp_list_element_5 = const_str_plain_int;
    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assign_source_106, 0, tmp_list_element_5 );
    tmp_list_element_5 = const_str_plain_float;
    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assign_source_106, 1, tmp_list_element_5 );
    tmp_list_element_5 = const_str_plain_complex;
    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assign_source_106, 2, tmp_list_element_5 );
    tmp_list_element_5 = const_str_plain_bool;
    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assign_source_106, 3, tmp_list_element_5 );
    tmp_list_element_5 = const_str_plain_object;
    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assign_source_106, 4, tmp_list_element_5 );
    tmp_list_element_5 = const_str_plain_string;
    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assign_source_106, 5, tmp_list_element_5 );
    tmp_list_element_5 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_str;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_5, 0, tmp_tuple_element_4 );
    tmp_subscr_target_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_subscr_target_9 == NULL ))
    {
        tmp_subscr_target_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_subscr_target_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_106 );
        Py_DECREF( tmp_list_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73617 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 888;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_9 = const_str_plain_string_;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_106 );
        Py_DECREF( tmp_list_element_5 );

        frame_module->f_lineno = 888;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_5, 1, tmp_tuple_element_4 );
    PyList_SET_ITEM( tmp_assign_source_106, 6, tmp_list_element_5 );
    tmp_list_element_5 = const_str_plain_unicode;
    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assign_source_106, 7, tmp_list_element_5 );
    tmp_list_element_5 = const_str_plain_object;
    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assign_source_106, 8, tmp_list_element_5 );
    tmp_list_element_5 = PyTuple_New( 2 );
    tmp_tuple_element_5 = const_str_plain_a;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_list_element_5, 0, tmp_tuple_element_5 );
    tmp_subscr_target_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_subscr_target_10 == NULL ))
    {
        tmp_subscr_target_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_subscr_target_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_106 );
        Py_DECREF( tmp_list_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73617 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 889;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_10 = const_str_plain_string_;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_106 );
        Py_DECREF( tmp_list_element_5 );

        frame_module->f_lineno = 889;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_5, 1, tmp_tuple_element_5 );
    PyList_SET_ITEM( tmp_assign_source_106, 9, tmp_list_element_5 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__toadd, tmp_assign_source_106 );
    branch_end_7:;
    tmp_iter_arg_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__toadd );

    if (unlikely( tmp_iter_arg_6 == NULL ))
    {
        tmp_iter_arg_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__toadd );
    }

    if ( tmp_iter_arg_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74216 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 891;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_107 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_107 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 891;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator.object == NULL );
    tmp_for_loop_4__for_iterator.object = tmp_assign_source_107;

    // Tried code
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_4__for_iterator.object;

    tmp_assign_source_108 = ITERATOR_NEXT( tmp_next_source_5 );
    if (tmp_assign_source_108 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_5;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_module->f_lineno = 891;
            goto try_finally_handler_8;
        }
    }

    if (tmp_for_loop_4__iter_value.object == NULL)
    {
        tmp_for_loop_4__iter_value.object = tmp_assign_source_108;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__iter_value.object;
        tmp_for_loop_4__iter_value.object = tmp_assign_source_108;
        Py_DECREF( old );
    }
    tmp_assign_source_109 = tmp_for_loop_4__iter_value.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_name, tmp_assign_source_109 );
    tmp_isinstance_inst_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_name );

    if (unlikely( tmp_isinstance_inst_1 == NULL ))
    {
        tmp_isinstance_inst_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
    }

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74244 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 892;
        goto try_finally_handler_8;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 892;
        goto try_finally_handler_8;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 892;
        goto try_finally_handler_8;
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
    tmp_subscr_target_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_name );

    if (unlikely( tmp_subscr_target_11 == NULL ))
    {
        tmp_subscr_target_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
    }

    if ( tmp_subscr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74244 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 893;
        goto try_finally_handler_8;
    }

    tmp_subscr_subscript_11 = const_int_pos_1;
    tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_ass_subvalue_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 893;
        goto try_finally_handler_8;
    }
    tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_5 == NULL ))
    {
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_5 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74184 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 893;
        goto try_finally_handler_8;
    }

    tmp_subscr_target_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_name );

    if (unlikely( tmp_subscr_target_12 == NULL ))
    {
        tmp_subscr_target_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
    }

    if ( tmp_subscr_target_12 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74244 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 893;
        goto try_finally_handler_8;
    }

    tmp_subscr_subscript_12 = const_int_0;
    tmp_ass_subscript_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    if ( tmp_ass_subscript_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_5 );

        frame_module->f_lineno = 893;
        goto try_finally_handler_8;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    Py_DECREF( tmp_ass_subscript_5 );
    Py_DECREF( tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 893;
        goto try_finally_handler_8;
    }
    goto branch_end_8;
    branch_no_8:;
    tmp_subscr_target_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_subscr_target_13 == NULL ))
    {
        tmp_subscr_target_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_subscr_target_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73617 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 895;
        goto try_finally_handler_8;
    }

    tmp_binop_left_5 = const_str_digest_468287566f5599e32b05b5ba78c2f034;
    tmp_binop_right_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_name );

    if (unlikely( tmp_binop_right_5 == NULL ))
    {
        tmp_binop_right_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
    }

    if ( tmp_binop_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74244 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 895;
        goto try_finally_handler_8;
    }

    tmp_subscr_subscript_13 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_subscr_subscript_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 895;
        goto try_finally_handler_8;
    }
    tmp_ass_subvalue_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    Py_DECREF( tmp_subscr_subscript_13 );
    if ( tmp_ass_subvalue_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 895;
        goto try_finally_handler_8;
    }
    tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_ass_subscribed_6 == NULL ))
    {
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_ass_subscribed_6 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74184 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 895;
        goto try_finally_handler_8;
    }

    tmp_ass_subscript_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_name );

    if (unlikely( tmp_ass_subscript_6 == NULL ))
    {
        tmp_ass_subscript_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
    }

    if ( tmp_ass_subscript_6 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74244 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 895;
        goto try_finally_handler_8;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    Py_DECREF( tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 895;
        goto try_finally_handler_8;
    }
    branch_end_8:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 891;
        goto try_finally_handler_8;
    }
    goto loop_start_5;
    loop_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_8 = frame_module->f_lineno;
    Py_XDECREF( tmp_for_loop_4__iter_value.object );
    tmp_for_loop_4__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator.object );
    tmp_for_loop_4__for_iterator.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_8;
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
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core$numerictypes, const_str_plain__toadd );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74216 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 897;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core$numerictypes, const_str_plain_name );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74244 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 897;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_iter_arg_7 == NULL ))
    {
        tmp_iter_arg_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_iter_arg_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73617 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 900;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_110 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_110 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 900;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_5__for_iterator.object == NULL );
    tmp_for_loop_5__for_iterator.object = tmp_assign_source_110;

    // Tried code
    loop_start_6:;
    tmp_next_source_6 = tmp_for_loop_5__for_iterator.object;

    tmp_assign_source_111 = ITERATOR_NEXT( tmp_next_source_6 );
    if (tmp_assign_source_111 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_6;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_module->f_lineno = 900;
            goto try_finally_handler_9;
        }
    }

    if (tmp_for_loop_5__iter_value.object == NULL)
    {
        tmp_for_loop_5__iter_value.object = tmp_assign_source_111;
    }
    else
    {
        PyObject *old = tmp_for_loop_5__iter_value.object;
        tmp_for_loop_5__iter_value.object = tmp_assign_source_111;
        Py_DECREF( old );
    }
    tmp_assign_source_112 = tmp_for_loop_5__iter_value.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key, tmp_assign_source_112 );
    tmp_subscr_target_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_allTypes );

    if (unlikely( tmp_subscr_target_14 == NULL ))
    {
        tmp_subscr_target_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allTypes );
    }

    if ( tmp_subscr_target_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 73617 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 901;
        goto try_finally_handler_9;
    }

    tmp_subscr_subscript_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key );

    if (unlikely( tmp_subscr_subscript_14 == NULL ))
    {
        tmp_subscr_subscript_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key );
    }

    if ( tmp_subscr_subscript_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 68875 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 901;
        goto try_finally_handler_9;
    }

    tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_14, tmp_subscr_subscript_14 );
    if ( tmp_ass_subvalue_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 901;
        goto try_finally_handler_9;
    }
    tmp_ass_subscribed_7 = ((PyModuleObject *)module_numpy$core$numerictypes)->md_dict;
    tmp_ass_subscript_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key );

    if (unlikely( tmp_ass_subscript_7 == NULL ))
    {
        tmp_ass_subscript_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key );
    }

    if ( tmp_ass_subscript_7 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 68875 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 901;
        goto try_finally_handler_9;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
    Py_DECREF( tmp_ass_subvalue_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 901;
        goto try_finally_handler_9;
    }
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 902;
        goto try_finally_handler_9;
    }

    tmp_called_24 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_append );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 902;
        goto try_finally_handler_9;
    }
    tmp_call_arg_element_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_key );

    if (unlikely( tmp_call_arg_element_11 == NULL ))
    {
        tmp_call_arg_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key );
    }

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 68875 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 902;
        goto try_finally_handler_9;
    }

    frame_module->f_lineno = 902;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_24, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 902;
        goto try_finally_handler_9;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 900;
        goto try_finally_handler_9;
    }
    goto loop_start_6;
    loop_end_6:;
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

    tmp_tried_lineno_9 = frame_module->f_lineno;
    Py_XDECREF( tmp_for_loop_5__iter_value.object );
    tmp_for_loop_5__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_5__for_iterator.object );
    tmp_for_loop_5__for_iterator.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_9;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto frame_exception_exit_1;
    }

    goto finally_end_9;
    finally_end_9:;
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core$numerictypes, const_str_plain_key );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 68875 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 904;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_113 = PyDict_Copy( const_dict_92d2a12e215f974010433b406d92630f );
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typecodes, tmp_assign_source_113 );
    tmp_assign_source_114 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeDict );

    if (unlikely( tmp_assign_source_114 == NULL ))
    {
        tmp_assign_source_114 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeDict );
    }

    if ( tmp_assign_source_114 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74184 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 917;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeDict, tmp_assign_source_114 );
    tmp_assign_source_115 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_sctypeNA );

    if (unlikely( tmp_assign_source_115 == NULL ))
    {
        tmp_assign_source_115 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sctypeNA );
    }

    if ( tmp_assign_source_115 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74270 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 918;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typeNA, tmp_assign_source_115 );
    tmp_assign_source_116 = LIST_COPY( const_list_6743371597891d0d66aa89a8ea751836_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__kind_list, tmp_assign_source_116 );
    tmp_binop_left_8 = const_str_chr_63;
    tmp_sliceslicedel_index_lower_8 = 0;
    tmp_slice_index_upper_8 = -2;
    tmp_subscr_target_15 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typecodes );

    if (unlikely( tmp_subscr_target_15 == NULL ))
    {
        tmp_subscr_target_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typecodes );
    }

    if ( tmp_subscr_target_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74300 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 933;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_15 = const_str_plain_AllInteger;
    tmp_slice_source_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_15, tmp_subscr_subscript_15 );
    if ( tmp_slice_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 933;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_8 = LOOKUP_INDEX_SLICE( tmp_slice_source_8, tmp_sliceslicedel_index_lower_8, tmp_slice_index_upper_8 );
    Py_DECREF( tmp_slice_source_8 );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 933;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_7 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_binop_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 933;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_16 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_typecodes );

    if (unlikely( tmp_subscr_target_16 == NULL ))
    {
        tmp_subscr_target_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typecodes );
    }

    if ( tmp_subscr_target_16 == NULL )
    {
        Py_DECREF( tmp_binop_left_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74300 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 933;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_16 = const_str_plain_AllFloat;
    tmp_binop_right_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_16, tmp_subscr_subscript_16 );
    if ( tmp_binop_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_7 );

        frame_module->f_lineno = 933;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_6 = BINARY_OPERATION_ADD( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_left_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 933;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_6 = const_str_plain_O;
    tmp_assign_source_117 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    if ( tmp_assign_source_117 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 933;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain___test_types, tmp_assign_source_117 );
    tmp_len_arg_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain___test_types );

    if (unlikely( tmp_len_arg_1 == NULL ))
    {
        tmp_len_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___test_types );
    }

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 74331 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 934;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_118 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_118 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 934;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain___len_test_types, tmp_assign_source_118 );
    tmp_assign_source_119 = MAKE_FUNCTION_function_25__find_common_coerce_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_119 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_119 );

        frame_module->f_lineno = 938;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__find_common_coerce, tmp_assign_source_119 );
    tmp_defaults_3 = const_tuple_int_0_tuple;
    tmp_assign_source_120 = MAKE_FUNCTION_function_26__can_coerce_all_of_module_numpy$core$numerictypes( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_120 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_120 );

        frame_module->f_lineno = 948;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain__can_coerce_all, tmp_assign_source_120 );
    tmp_assign_source_121 = MAKE_FUNCTION_function_27_find_common_type_of_module_numpy$core$numerictypes(  );
    if ( tmp_assign_source_121 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_121 );

        frame_module->f_lineno = 963;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$numerictypes, (Nuitka_StringObject *)const_str_plain_find_common_type, tmp_assign_source_121 );

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

    return MOD_RETURN_VALUE( module_numpy$core$numerictypes );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
