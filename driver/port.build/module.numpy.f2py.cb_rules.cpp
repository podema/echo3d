// Generated code for Python source for module 'numpy.f2py.cb_rules'
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

// The _module_numpy$f2py$cb_rules is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$f2py$cb_rules;
PyDictObject *moduledict_numpy$f2py$cb_rules;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_t;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_ar;
extern PyObject *const_str_plain_bi;
extern PyObject *const_str_plain_rd;
extern PyObject *const_str_plain_um;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_var;
extern PyObject *const_str_plain_vrd;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_body;
extern PyObject *const_str_plain_decl;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_l_or;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_need;
extern PyObject *const_str_plain_rout;
extern PyObject *const_str_plain_show;
extern PyObject *const_str_plain_vars;
extern PyObject *const_str_plain_void;
extern PyObject *const_str_plain_block;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain_l_and;
extern PyObject *const_str_plain_l_not;
extern PyObject *const_str_plain_latex;
extern PyObject *const_str_plain_needs;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain__break;
extern PyObject *const_str_plain__check;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_cb_map;
extern PyObject *const_str_plain_cfuncs;
extern PyObject *const_str_plain_depend;
extern PyObject *const_str_plain_docstr;
static PyObject *const_str_plain_noargs;
extern PyObject *const_str_plain_pprint;
extern PyObject *const_str_plain_return;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_plain_stdout;
extern PyObject *const_str_plain_MEMCOPY;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain__depend;
extern PyObject *const_str_plain_argname;
static PyObject *const_str_plain_args_nm;
static PyObject *const_str_plain_args_td;
extern PyObject *const_str_plain_depargs;
extern PyObject *const_str_plain_docsign;
extern PyObject *const_str_plain_errmess;
extern PyObject *const_str_plain_freemem;
extern PyObject *const_str_plain_getargs;
extern PyObject *const_str_plain_hasnote;
extern PyObject *const_str_plain_isarray;
extern PyObject *const_str_plain_optargs;
extern PyObject *const_str_plain_outmess;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_savevrd;
extern PyObject *const_str_plain_setdims;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain__typedef;
extern PyObject *const_str_plain_auxfuncs;
extern PyObject *const_str_plain_cb_rules;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_isscalar;
extern PyObject *const_str_plain_isstring;
extern PyObject *const_str_plain_lcb2_map;
extern PyObject *const_str_plain_routnote;
extern PyObject *const_str_plain_typedefs;
static PyObject *const_str_plain__optional;
extern PyObject *const_str_plain_callbacks;
extern PyObject *const_str_plain_capi_maps;
extern PyObject *const_str_plain_debugcapi;
extern PyObject *const_str_plain_docreturn;
extern PyObject *const_str_plain_docstrcbs;
extern PyObject *const_str_plain_docstropt;
extern PyObject *const_str_plain_docstrout;
extern PyObject *const_str_plain_docstrreq;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_frompyobj;
extern PyObject *const_str_plain_interface;
extern PyObject *const_str_plain_iscomplex;
extern PyObject *const_str_plain_pyobjfrom;
extern PyObject *const_str_plain_CFUNCSMESS;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_applyrules;
static PyObject *const_str_plain_cbtypedefs;
extern PyObject *const_str_plain_dictappend;
extern PyObject *const_str_plain_docsignopt;
extern PyObject *const_str_plain_isfunction;
extern PyObject *const_str_plain_isintent_c;
extern PyObject *const_str_plain_isoptional;
extern PyObject *const_str_plain_isrequired;
extern PyObject *const_str_plain_maxnofargs;
extern PyObject *const_str_plain_nofoptargs;
static PyObject *const_str_plain_optargs_nm;
static PyObject *const_str_plain_optargs_td;
static PyObject *const_str_plain_strarglens;
extern PyObject *const_str_plain_stripcomma;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_cb_sign2map;
static PyObject *const_str_plain_docstrshort;
extern PyObject *const_str_plain_docstrsigns;
extern PyObject *const_str_plain_isintent_in;
extern PyObject *const_str_plain_latexdocstr;
extern PyObject *const_str_plain_throw_error;
static PyObject *const_str_plain_cb_arg_rules;
extern PyObject *const_str_plain_docsignature;
extern PyObject *const_str_plain_f2py_version;
extern PyObject *const_str_plain_isintent_out;
extern PyObject *const_str_plain_issubroutine;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_buildcallback;
static PyObject *const_str_plain_cb_rout_rules;
extern PyObject *const_str_plain_isintent_hide;
extern PyObject *const_str_plain_separatorsfor;
static PyObject *const_str_plain_strarglens_nm;
static PyObject *const_str_plain_strarglens_td;
extern PyObject *const_tuple_str_plain_m_tuple;
extern PyObject *const_str_plain_buildcallbacks;
extern PyObject *const_str_plain_iscomplexarray;
extern PyObject *const_str_plain_isintent_inout;
extern PyObject *const_str_plain_latexdocstrcbs;
extern PyObject *const_str_plain_latexdocstropt;
extern PyObject *const_str_plain_latexdocstrout;
extern PyObject *const_str_plain_latexdocstrreq;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_cb_routsign2map;
static PyObject *const_str_plain_cb_routine_rules;
extern PyObject *const_str_plain_isintent_nothide;
extern PyObject *const_str_plain_isstringfunction;
extern PyObject *const_str_plain_latexdocstrsigns;
extern PyObject *const_str_plain_GETSTRFROMPYTUPLE;
extern PyObject *const_str_plain_iscomplexfunction;
static PyObject *const_str_plain_latexdocsignature;
extern PyObject *const_str_plain_typedefs_generated;
extern PyObject *const_tuple_str_plain_cfuncs_tuple;
extern PyObject *const_str_plain_GETSCALARFROMPYTUPLE;
extern PyObject *const_tuple_str_plain_capi_maps_tuple;
extern PyObject *const_tuple_str_plain___version___tuple;
static PyObject *const_dict_36d937bcf0293dc5d41436b25be64bbe;
static PyObject *const_dict_a8e1c985afd1e244c02326c9a3bacda3;
extern PyObject *const_tuple_str_plain_rout_str_plain_um_tuple;
static PyObject *const_list_11d07f6bece7127710593fd5c5a08052_list;
static PyObject *const_list_edafe23272f067714f6416e35418f3d0_list;
static PyObject *const_str_digest_0253250729cb119cb21ab3379a9157f7;
extern PyObject *const_str_digest_034683ceccce831b3c4724622e7c61e0;
static PyObject *const_str_digest_0508b583833a67b1623afbc974b836a3;
static PyObject *const_str_digest_05fb119a3d90ecf2f7303cbd5a41f139;
static PyObject *const_str_digest_062fc30b742b9709e8235f7458148ee4;
static PyObject *const_str_digest_08a78931e7a2c378875f5b389ab3f114;
static PyObject *const_str_digest_0a886b39391446543d4ea4cea70f3432;
static PyObject *const_str_digest_0d35d4083ef87bdf872b899ba6ac04e9;
static PyObject *const_str_digest_15652ce230749b0ed0d8e32d08644a44;
static PyObject *const_str_digest_176ecb0bb4dd5fe39afa73019b674770;
static PyObject *const_str_digest_17ad783f1931e0a05dc6f1bb33728591;
static PyObject *const_str_digest_1c26d840c47e86d454a8df985648ca3e;
extern PyObject *const_str_digest_21848c21ee715afb46bb5dff54f12759;
extern PyObject *const_str_digest_2440d16610baa62c4946b481a40982f8;
extern PyObject *const_str_digest_2782d06f338ee345290cef192d05e062;
static PyObject *const_str_digest_280c818bf2a569dfef20febc1e1473df;
static PyObject *const_str_digest_2b616fd1fd0831aa40d721313c3500f1;
static PyObject *const_str_digest_2fa94da6f6dac38a31cee8b080ffe216;
extern PyObject *const_str_digest_2fea6faaece8b13aba5205180919cad4;
static PyObject *const_str_digest_309a08e781b97044dfb281118420278e;
extern PyObject *const_str_digest_317310e006d319ad28824cb9258c4565;
static PyObject *const_str_digest_32f66eb4f704f25b5aadb3be433f95df;
extern PyObject *const_str_digest_352c2c361762a5fb011e95a778b8a254;
static PyObject *const_str_digest_390f326c3653f24aed04916ca342b044;
static PyObject *const_str_digest_3c5a1d146bfac327fc3e9466d54c09cb;
static PyObject *const_str_digest_3d8a873c9035fc0f3485ed30f53b43e4;
extern PyObject *const_str_digest_40515d2f72587c8ab3dde947df85ba29;
static PyObject *const_str_digest_4750d0cf21d25e54d406a8637a42af0d;
static PyObject *const_str_digest_47ca60bdc80f4d0efb3b24c4d11a512a;
static PyObject *const_str_digest_4df60cbe9802293cdd34e373c8a1f5a8;
static PyObject *const_str_digest_4e16731b2685c4e8076cd819997e7982;
static PyObject *const_str_digest_505b97969baa28c3f607a38ee02f4f2d;
static PyObject *const_str_digest_530b3386b3542daf507588e8c7c5390b;
static PyObject *const_str_digest_5666b82682471b347afe7caafec21438;
static PyObject *const_str_digest_5a506bd01a3ab8ed5f697d03e5d21dfe;
static PyObject *const_str_digest_5b0c5caac041b736a199c5510a3abec3;
static PyObject *const_str_digest_5ce48477f4982782874e83cc46d19e47;
static PyObject *const_str_digest_67f58f95edee22bb931970e9bc865738;
extern PyObject *const_str_digest_6e0991fa019a9e09495ce3818d3272df;
static PyObject *const_str_digest_6ef56ac40b151270b7eebb1ef096bcff;
static PyObject *const_str_digest_72acb4c80bfcb9544afc0184fa55b171;
extern PyObject *const_str_digest_73a2c45e7b0015e7c3fd1d2bb61db866;
static PyObject *const_str_digest_746241307561edce144fc2d75a7832b8;
static PyObject *const_str_digest_7a9edb9370d82b35209f1fdeab244609;
static PyObject *const_str_digest_811d363ecf13a25af7385a15e54103d2;
extern PyObject *const_str_digest_81dd5881d0e387c3fbe39fef2c0ad42a;
static PyObject *const_str_digest_83b58e3d4bbe37775b1ce4afa2773473;
static PyObject *const_str_digest_850f2e0cd3bc4d953ff833d69c84d9ba;
static PyObject *const_str_digest_88534ba6b7dab6f2d74d076127d9c916;
static PyObject *const_str_digest_887675077da978be565dd02a36b99f5c;
static PyObject *const_str_digest_89f6f62127a4a1602eaa47a425544c26;
extern PyObject *const_str_digest_8a412c5a481127f099db01c171a0fb22;
extern PyObject *const_str_digest_8b28e68d7237750459f812a4e45fbbea;
static PyObject *const_str_digest_8c4e1a872e89c211b0cc63bc9e53e057;
extern PyObject *const_str_digest_8f1af3fa58871032e57b3bdcaf89b551;
static PyObject *const_str_digest_906e643ca2f6f07771e92cdac807ba52;
static PyObject *const_str_digest_914663107b35a32625edce8eb8262981;
static PyObject *const_str_digest_9261e0ced7a6c471cbf4bfc301bf458b;
static PyObject *const_str_digest_92d8fcae2ad9be01a05895d7e815d3d8;
static PyObject *const_str_digest_937868f6f61fc68aa640589ac3780318;
static PyObject *const_str_digest_944d30854f792479dcddb9de61a1979c;
static PyObject *const_str_digest_9ab9af24bc3de6192efb8583d62df701;
static PyObject *const_str_digest_9e0942c8582929b029d5631d00be919d;
extern PyObject *const_str_digest_a0e09455d4337213cd42ebadc4d27d3b;
static PyObject *const_str_digest_a41bfcc475f7eaabd7fe8789a234f2be;
static PyObject *const_str_digest_a50551cba4bbbd594c0e45999424ed92;
extern PyObject *const_str_digest_a8dd00e8789d337653fd72b5c50207f2;
static PyObject *const_str_digest_ab007b1738612d28e96d377ead964a8d;
static PyObject *const_str_digest_ab5c3dc8d53500e64b9825bf347c0f9d;
static PyObject *const_str_digest_ad092776f36ce4f7cc9e6c518c32324e;
static PyObject *const_str_digest_ae324ca3874dab33ef4c73d6801ee448;
extern PyObject *const_str_digest_aef332a279fc26992d9b07f03b37a7b7;
static PyObject *const_str_digest_af267b59b630633ce09a592329c034e8;
extern PyObject *const_str_digest_b3f6b0dfc1e5717ba7333debe235669f;
static PyObject *const_str_digest_b4b1653e4dba3bf286c257954f94dac7;
static PyObject *const_str_digest_b4bc98c665b355881e4c167c8bda0d06;
extern PyObject *const_str_digest_b6844caa183c5fab60a573048a09c0ad;
static PyObject *const_str_digest_b744d59b6918e5f99d824267ea765680;
extern PyObject *const_str_digest_b8dc8513ea6a44621ecfd35fbdc9110c;
static PyObject *const_str_digest_c2f46c40a38553e7834e77797dea7a0d;
static PyObject *const_str_digest_c4a0227b69a010e183540b48dccc7cb7;
static PyObject *const_str_digest_c51a918be8a1d8bb6711c1e83aa28a8d;
static PyObject *const_str_digest_c5a9692f8b837bdea0e70ac30c921b22;
extern PyObject *const_str_digest_c6ed2021e7dfb461dbb032362c3c5cc1;
static PyObject *const_str_digest_c9c27e46657a399664406c8c254b7abb;
static PyObject *const_str_digest_ca4aa19a291df02d99962b1c429ee15c;
static PyObject *const_str_digest_cd5a84a49021274f46006e53a3b4b5de;
static PyObject *const_str_digest_cf06c53b16f42dc67c3a5bc9db7a37e3;
static PyObject *const_str_digest_d5ca99338fdc3565df2ce5dd3d1cd6b3;
static PyObject *const_str_digest_d83a6c45fc49f86e517c0e7fcabc8698;
extern PyObject *const_str_digest_dbd40ba69da15782bc0a1e6888e6b0cb;
static PyObject *const_str_digest_dc08555b2fa40a3c42e86ef2e390269e;
static PyObject *const_str_digest_df5932485e8c0431603301c855c20f7c;
static PyObject *const_str_digest_e394761ad47752cb76a3adc133c2d55a;
static PyObject *const_str_digest_e4849dcec8d34d9739a730d219adbd4f;
static PyObject *const_str_digest_e538bc59b5fae7730995fab1c3db54ee;
extern PyObject *const_str_digest_e94bac8f3260b056e46d869b06fc3df5;
static PyObject *const_str_digest_ecdbf99e78b44dd3b78e60aa408bc809;
static PyObject *const_str_digest_f2856c5fd4f3b3cd13e5b947797c9d12;
static PyObject *const_str_digest_f3b237ec1dff09966ca77ac8516923fd;
static PyObject *const_str_digest_f7987058d6849bcafa9efcbbdabb6dbe;
extern PyObject *const_str_digest_f799e499bbf79ca500ba3d987fa42361;
extern PyObject *const_str_digest_f8286407d5c451802306b2d15cf2167e;
static PyObject *const_str_digest_f8d04fc823e2ff5c34718637cc3d2882;
extern PyObject *const_str_digest_fc763cb31e9938f37737394681228f83;
extern PyObject *const_tuple_a66751b7c76123c024f448eec46707b1_tuple;
static PyObject *const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_str_plain_m_str_plain_bi_str_plain_b_tuple;
extern PyObject *const_list_str_digest_352c2c361762a5fb011e95a778b8a254_list;
static PyObject *const_list_str_digest_92d8fcae2ad9be01a05895d7e815d3d8_list;
extern PyObject *const_list_str_digest_f8286407d5c451802306b2d15cf2167e_list;

static void _initModuleConstants(void)
{
    const_str_plain_noargs = UNSTREAM_STRING( &constant_bin[ 998380 ], 6, 1 );
    const_str_plain_args_nm = UNSTREAM_STRING( &constant_bin[ 998386 ], 7, 1 );
    const_str_plain_args_td = UNSTREAM_STRING( &constant_bin[ 998393 ], 7, 1 );
    const_str_plain__optional = UNSTREAM_STRING( &constant_bin[ 998400 ], 9, 1 );
    const_str_plain_cbtypedefs = UNSTREAM_STRING( &constant_bin[ 998409 ], 10, 1 );
    const_str_plain_optargs_nm = UNSTREAM_STRING( &constant_bin[ 998419 ], 10, 1 );
    const_str_plain_optargs_td = UNSTREAM_STRING( &constant_bin[ 998429 ], 10, 1 );
    const_str_plain_strarglens = UNSTREAM_STRING( &constant_bin[ 998439 ], 10, 1 );
    const_str_plain_docstrshort = UNSTREAM_STRING( &constant_bin[ 998449 ], 11, 1 );
    const_str_plain_cb_arg_rules = UNSTREAM_STRING( &constant_bin[ 129928 ], 12, 1 );
    const_str_plain_buildcallback = UNSTREAM_STRING( &constant_bin[ 129634 ], 13, 1 );
    const_str_plain_cb_rout_rules = UNSTREAM_STRING( &constant_bin[ 129784 ], 13, 1 );
    const_str_plain_strarglens_nm = UNSTREAM_STRING( &constant_bin[ 998460 ], 13, 1 );
    const_str_plain_strarglens_td = UNSTREAM_STRING( &constant_bin[ 998473 ], 13, 1 );
    const_str_plain_cb_routine_rules = UNSTREAM_STRING( &constant_bin[ 130008 ], 16, 1 );
    const_str_plain_latexdocsignature = UNSTREAM_STRING( &constant_bin[ 998486 ], 17, 1 );
    const_dict_36d937bcf0293dc5d41436b25be64bbe = _PyDict_NewPresized( 8 );
    const_str_digest_b4b1653e4dba3bf286c257954f94dac7 = UNSTREAM_STRING( &constant_bin[ 998503 ], 2801, 0 );
    PyDict_SetItem( const_dict_36d937bcf0293dc5d41436b25be64bbe, const_str_plain_body, const_str_digest_b4b1653e4dba3bf286c257954f94dac7 );
    const_str_digest_32f66eb4f704f25b5aadb3be433f95df = UNSTREAM_STRING( &constant_bin[ 1001304 ], 67, 0 );
    PyDict_SetItem( const_dict_36d937bcf0293dc5d41436b25be64bbe, const_str_plain_docstr, const_str_digest_32f66eb4f704f25b5aadb3be433f95df );
    const_list_11d07f6bece7127710593fd5c5a08052_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_11d07f6bece7127710593fd5c5a08052_list, 0, const_str_digest_8f1af3fa58871032e57b3bdcaf89b551 ); Py_INCREF( const_str_digest_8f1af3fa58871032e57b3bdcaf89b551 );
    PyList_SET_ITEM( const_list_11d07f6bece7127710593fd5c5a08052_list, 1, const_str_plain_CFUNCSMESS ); Py_INCREF( const_str_plain_CFUNCSMESS );
    PyDict_SetItem( const_dict_36d937bcf0293dc5d41436b25be64bbe, const_str_plain_need, const_list_11d07f6bece7127710593fd5c5a08052_list );
    const_str_digest_746241307561edce144fc2d75a7832b8 = UNSTREAM_STRING( &constant_bin[ 999096 ], 12, 0 );
    PyDict_SetItem( const_dict_36d937bcf0293dc5d41436b25be64bbe, const_str_plain_nofoptargs, const_str_digest_746241307561edce144fc2d75a7832b8 );
    const_str_digest_3d8a873c9035fc0f3485ed30f53b43e4 = UNSTREAM_STRING( &constant_bin[ 1001305 ], 49, 0 );
    PyDict_SetItem( const_dict_36d937bcf0293dc5d41436b25be64bbe, const_str_plain_docstrshort, const_str_digest_3d8a873c9035fc0f3485ed30f53b43e4 );
    const_str_digest_906e643ca2f6f07771e92cdac807ba52 = UNSTREAM_STRING( &constant_bin[ 998651 ], 80, 0 );
    PyDict_SetItem( const_dict_36d937bcf0293dc5d41436b25be64bbe, const_str_plain_cbtypedefs, const_str_digest_906e643ca2f6f07771e92cdac807ba52 );
    const_str_digest_9261e0ced7a6c471cbf4bfc301bf458b = UNSTREAM_STRING( &constant_bin[ 999082 ], 12, 0 );
    PyDict_SetItem( const_dict_36d937bcf0293dc5d41436b25be64bbe, const_str_plain_maxnofargs, const_str_digest_9261e0ced7a6c471cbf4bfc301bf458b );
    const_str_digest_8c4e1a872e89c211b0cc63bc9e53e057 = UNSTREAM_STRING( &constant_bin[ 1001371 ], 99, 0 );
    PyDict_SetItem( const_dict_36d937bcf0293dc5d41436b25be64bbe, const_str_plain_latexdocstr, const_str_digest_8c4e1a872e89c211b0cc63bc9e53e057 );
    const_dict_a8e1c985afd1e244c02326c9a3bacda3 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1001470 ], 352 );
    const_list_edafe23272f067714f6416e35418f3d0_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_edafe23272f067714f6416e35418f3d0_list, 0, const_str_digest_aef332a279fc26992d9b07f03b37a7b7 ); Py_INCREF( const_str_digest_aef332a279fc26992d9b07f03b37a7b7 );
    PyList_SET_ITEM( const_list_edafe23272f067714f6416e35418f3d0_list, 1, const_str_plain_GETSCALARFROMPYTUPLE ); Py_INCREF( const_str_plain_GETSCALARFROMPYTUPLE );
    const_str_digest_0253250729cb119cb21ab3379a9157f7 = UNSTREAM_STRING( &constant_bin[ 1001822 ], 102, 0 );
    const_str_digest_0508b583833a67b1623afbc974b836a3 = UNSTREAM_STRING( &constant_bin[ 1001924 ], 19, 0 );
    const_str_digest_05fb119a3d90ecf2f7303cbd5a41f139 = UNSTREAM_STRING( &constant_bin[ 1001943 ], 52, 0 );
    const_str_digest_062fc30b742b9709e8235f7458148ee4 = UNSTREAM_STRING( &constant_bin[ 1001995 ], 19, 0 );
    const_str_digest_08a78931e7a2c378875f5b389ab3f114 = UNSTREAM_STRING( &constant_bin[ 1002014 ], 38, 0 );
    const_str_digest_0a886b39391446543d4ea4cea70f3432 = UNSTREAM_STRING( &constant_bin[ 1002052 ], 55, 0 );
    const_str_digest_0d35d4083ef87bdf872b899ba6ac04e9 = UNSTREAM_STRING( &constant_bin[ 1002107 ], 12, 0 );
    const_str_digest_15652ce230749b0ed0d8e32d08644a44 = UNSTREAM_STRING( &constant_bin[ 1002119 ], 30, 0 );
    const_str_digest_176ecb0bb4dd5fe39afa73019b674770 = UNSTREAM_STRING( &constant_bin[ 1002149 ], 47, 0 );
    const_str_digest_17ad783f1931e0a05dc6f1bb33728591 = UNSTREAM_STRING( &constant_bin[ 1002196 ], 16, 0 );
    const_str_digest_1c26d840c47e86d454a8df985648ca3e = UNSTREAM_STRING( &constant_bin[ 1002212 ], 11, 0 );
    const_str_digest_280c818bf2a569dfef20febc1e1473df = UNSTREAM_STRING( &constant_bin[ 1002223 ], 27, 0 );
    const_str_digest_2b616fd1fd0831aa40d721313c3500f1 = UNSTREAM_STRING( &constant_bin[ 1002250 ], 22, 0 );
    const_str_digest_2fa94da6f6dac38a31cee8b080ffe216 = UNSTREAM_STRING( &constant_bin[ 1002272 ], 55, 0 );
    const_str_digest_309a08e781b97044dfb281118420278e = UNSTREAM_STRING( &constant_bin[ 1002327 ], 16, 0 );
    const_str_digest_390f326c3653f24aed04916ca342b044 = UNSTREAM_STRING( &constant_bin[ 1002343 ], 56, 0 );
    const_str_digest_3c5a1d146bfac327fc3e9466d54c09cb = UNSTREAM_STRING( &constant_bin[ 1002399 ], 74, 0 );
    const_str_digest_4750d0cf21d25e54d406a8637a42af0d = UNSTREAM_STRING( &constant_bin[ 1002473 ], 41, 0 );
    const_str_digest_47ca60bdc80f4d0efb3b24c4d11a512a = UNSTREAM_STRING( &constant_bin[ 1002514 ], 198, 0 );
    const_str_digest_4df60cbe9802293cdd34e373c8a1f5a8 = UNSTREAM_STRING( &constant_bin[ 1002712 ], 244, 0 );
    const_str_digest_4e16731b2685c4e8076cd819997e7982 = UNSTREAM_STRING( &constant_bin[ 1002956 ], 45, 0 );
    const_str_digest_505b97969baa28c3f607a38ee02f4f2d = UNSTREAM_STRING( &constant_bin[ 1002458 ], 7, 0 );
    const_str_digest_530b3386b3542daf507588e8c7c5390b = UNSTREAM_STRING( &constant_bin[ 1003001 ], 23, 0 );
    const_str_digest_5666b82682471b347afe7caafec21438 = UNSTREAM_STRING( &constant_bin[ 1003024 ], 196, 0 );
    const_str_digest_5a506bd01a3ab8ed5f697d03e5d21dfe = UNSTREAM_STRING( &constant_bin[ 1003220 ], 92, 0 );
    const_str_digest_5b0c5caac041b736a199c5510a3abec3 = UNSTREAM_STRING( &constant_bin[ 1003312 ], 77, 0 );
    const_str_digest_5ce48477f4982782874e83cc46d19e47 = UNSTREAM_STRING( &constant_bin[ 1003389 ], 40, 0 );
    const_str_digest_67f58f95edee22bb931970e9bc865738 = UNSTREAM_STRING( &constant_bin[ 1003429 ], 186, 0 );
    const_str_digest_6ef56ac40b151270b7eebb1ef096bcff = UNSTREAM_STRING( &constant_bin[ 1003615 ], 28, 0 );
    const_str_digest_72acb4c80bfcb9544afc0184fa55b171 = UNSTREAM_STRING( &constant_bin[ 1003643 ], 12, 0 );
    const_str_digest_7a9edb9370d82b35209f1fdeab244609 = UNSTREAM_STRING( &constant_bin[ 1003655 ], 223, 0 );
    const_str_digest_811d363ecf13a25af7385a15e54103d2 = UNSTREAM_STRING( &constant_bin[ 1001903 ], 19, 0 );
    const_str_digest_83b58e3d4bbe37775b1ce4afa2773473 = UNSTREAM_STRING( &constant_bin[ 1002578 ], 19, 0 );
    const_str_digest_850f2e0cd3bc4d953ff833d69c84d9ba = UNSTREAM_STRING( &constant_bin[ 1003615 ], 9, 0 );
    const_str_digest_88534ba6b7dab6f2d74d076127d9c916 = UNSTREAM_STRING( &constant_bin[ 1003878 ], 21, 0 );
    const_str_digest_887675077da978be565dd02a36b99f5c = UNSTREAM_STRING( &constant_bin[ 1003899 ], 395, 0 );
    const_str_digest_89f6f62127a4a1602eaa47a425544c26 = UNSTREAM_STRING( &constant_bin[ 1004294 ], 72, 0 );
    const_str_digest_914663107b35a32625edce8eb8262981 = UNSTREAM_STRING( &constant_bin[ 1004366 ], 13, 0 );
    const_str_digest_92d8fcae2ad9be01a05895d7e815d3d8 = UNSTREAM_STRING( &constant_bin[ 1004379 ], 40, 0 );
    const_str_digest_937868f6f61fc68aa640589ac3780318 = UNSTREAM_STRING( &constant_bin[ 1004419 ], 53, 0 );
    const_str_digest_944d30854f792479dcddb9de61a1979c = UNSTREAM_STRING( &constant_bin[ 1004472 ], 331, 0 );
    const_str_digest_9ab9af24bc3de6192efb8583d62df701 = UNSTREAM_STRING( &constant_bin[ 1004803 ], 14, 0 );
    const_str_digest_9e0942c8582929b029d5631d00be919d = UNSTREAM_STRING( &constant_bin[ 1004817 ], 13, 0 );
    const_str_digest_a41bfcc475f7eaabd7fe8789a234f2be = UNSTREAM_STRING( &constant_bin[ 1004830 ], 139, 0 );
    const_str_digest_a50551cba4bbbd594c0e45999424ed92 = UNSTREAM_STRING( &constant_bin[ 1004969 ], 215, 0 );
    const_str_digest_ab007b1738612d28e96d377ead964a8d = UNSTREAM_STRING( &constant_bin[ 1002115 ], 4, 0 );
    const_str_digest_ab5c3dc8d53500e64b9825bf347c0f9d = UNSTREAM_STRING( &constant_bin[ 1005184 ], 20, 0 );
    const_str_digest_ad092776f36ce4f7cc9e6c518c32324e = UNSTREAM_STRING( &constant_bin[ 1005204 ], 25, 0 );
    const_str_digest_ae324ca3874dab33ef4c73d6801ee448 = UNSTREAM_STRING( &constant_bin[ 1005229 ], 6, 0 );
    const_str_digest_af267b59b630633ce09a592329c034e8 = UNSTREAM_STRING( &constant_bin[ 1005235 ], 61, 0 );
    const_str_digest_b4bc98c665b355881e4c167c8bda0d06 = UNSTREAM_STRING( &constant_bin[ 1005296 ], 48, 0 );
    const_str_digest_b744d59b6918e5f99d824267ea765680 = UNSTREAM_STRING( &constant_bin[ 1005344 ], 223, 0 );
    const_str_digest_c2f46c40a38553e7834e77797dea7a0d = UNSTREAM_STRING( &constant_bin[ 1005567 ], 216, 0 );
    const_str_digest_c4a0227b69a010e183540b48dccc7cb7 = UNSTREAM_STRING( &constant_bin[ 1005783 ], 43, 0 );
    const_str_digest_c51a918be8a1d8bb6711c1e83aa28a8d = UNSTREAM_STRING( &constant_bin[ 1005826 ], 147, 0 );
    const_str_digest_c5a9692f8b837bdea0e70ac30c921b22 = UNSTREAM_STRING( &constant_bin[ 1005973 ], 41, 0 );
    const_str_digest_c9c27e46657a399664406c8c254b7abb = UNSTREAM_STRING( &constant_bin[ 1006014 ], 160, 0 );
    const_str_digest_ca4aa19a291df02d99962b1c429ee15c = UNSTREAM_STRING( &constant_bin[ 1003615 ], 20, 0 );
    const_str_digest_cd5a84a49021274f46006e53a3b4b5de = UNSTREAM_STRING( &constant_bin[ 1002429 ], 21, 0 );
    const_str_digest_cf06c53b16f42dc67c3a5bc9db7a37e3 = UNSTREAM_STRING( &constant_bin[ 1006174 ], 51, 0 );
    const_str_digest_d5ca99338fdc3565df2ce5dd3d1cd6b3 = UNSTREAM_STRING( &constant_bin[ 1006225 ], 137, 0 );
    const_str_digest_d83a6c45fc49f86e517c0e7fcabc8698 = UNSTREAM_STRING( &constant_bin[ 1006098 ], 23, 0 );
    const_str_digest_dc08555b2fa40a3c42e86ef2e390269e = UNSTREAM_STRING( &constant_bin[ 1006362 ], 90, 0 );
    const_str_digest_df5932485e8c0431603301c855c20f7c = UNSTREAM_STRING( &constant_bin[ 1006452 ], 63, 0 );
    const_str_digest_e394761ad47752cb76a3adc133c2d55a = UNSTREAM_STRING( &constant_bin[ 1006515 ], 20, 0 );
    const_str_digest_e4849dcec8d34d9739a730d219adbd4f = UNSTREAM_STRING( &constant_bin[ 1006535 ], 93, 0 );
    const_str_digest_e538bc59b5fae7730995fab1c3db54ee = UNSTREAM_STRING( &constant_bin[ 1006628 ], 60, 0 );
    const_str_digest_ecdbf99e78b44dd3b78e60aa408bc809 = UNSTREAM_STRING( &constant_bin[ 1005705 ], 21, 0 );
    const_str_digest_f2856c5fd4f3b3cd13e5b947797c9d12 = UNSTREAM_STRING( &constant_bin[ 1006688 ], 60, 0 );
    const_str_digest_f3b237ec1dff09966ca77ac8516923fd = UNSTREAM_STRING( &constant_bin[ 1006748 ], 44, 0 );
    const_str_digest_f7987058d6849bcafa9efcbbdabb6dbe = UNSTREAM_STRING( &constant_bin[ 1006792 ], 51, 0 );
    const_str_digest_f8d04fc823e2ff5c34718637cc3d2882 = UNSTREAM_STRING( &constant_bin[ 1001892 ], 11, 0 );
    const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 0, const_str_plain_rout ); Py_INCREF( const_str_plain_rout );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 1, const_str_plain_um ); Py_INCREF( const_str_plain_um );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 2, const_str_plain_capi_maps ); Py_INCREF( const_str_plain_capi_maps );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 4, const_str_plain_depargs ); Py_INCREF( const_str_plain_depargs );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 5, const_str_plain_var ); Py_INCREF( const_str_plain_var );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 6, const_str_plain_vrd ); Py_INCREF( const_str_plain_vrd );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 7, const_str_plain_rd ); Py_INCREF( const_str_plain_rd );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 8, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 9, const_str_plain_ar ); Py_INCREF( const_str_plain_ar );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 10, const_str_plain_savevrd ); Py_INCREF( const_str_plain_savevrd );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 11, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 12, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 13, const_str_plain_optargs ); Py_INCREF( const_str_plain_optargs );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 14, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 15, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_tuple_str_plain_m_str_plain_bi_str_plain_b_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_m_str_plain_bi_str_plain_b_tuple, 0, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_str_plain_m_str_plain_bi_str_plain_b_tuple, 1, const_str_plain_bi ); Py_INCREF( const_str_plain_bi );
    PyTuple_SET_ITEM( const_tuple_str_plain_m_str_plain_bi_str_plain_b_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_list_str_digest_92d8fcae2ad9be01a05895d7e815d3d8_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_92d8fcae2ad9be01a05895d7e815d3d8_list, 0, const_str_digest_92d8fcae2ad9be01a05895d7e815d3d8 ); Py_INCREF( const_str_digest_92d8fcae2ad9be01a05895d7e815d3d8 );
}

// The module code objects.
static PyCodeObject *codeobj_ed7baed51ccc452b5a0dce86d8edad5c;
static PyCodeObject *codeobj_19753f3eb0544da612c0f65bb38f2f3e;
static PyCodeObject *codeobj_5ef910a996d84a5d18efa2ec1f33f1be;
static PyCodeObject *codeobj_6eed8581d2e2c74400dcaece83a45545;
static PyCodeObject *codeobj_3a445ca7774d6dcb0a7300adc2ca1828;

static void _initModuleCodeObjects(void)
{
    codeobj_ed7baed51ccc452b5a0dce86d8edad5c = MAKE_CODEOBJ( const_str_digest_2fa94da6f6dac38a31cee8b080ffe216, const_str_plain_buildcallback, 415, const_tuple_str_plain_rout_str_plain_um_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_19753f3eb0544da612c0f65bb38f2f3e = MAKE_CODEOBJ( const_str_digest_2fa94da6f6dac38a31cee8b080ffe216, const_str_plain_buildcallback, 415, const_tuple_ae562f334f155c5d5eb50d1720d4c60e_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5ef910a996d84a5d18efa2ec1f33f1be = MAKE_CODEOBJ( const_str_digest_2fa94da6f6dac38a31cee8b080ffe216, const_str_plain_buildcallbacks, 404, const_tuple_str_plain_m_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6eed8581d2e2c74400dcaece83a45545 = MAKE_CODEOBJ( const_str_digest_2fa94da6f6dac38a31cee8b080ffe216, const_str_plain_buildcallbacks, 404, const_tuple_str_plain_m_str_plain_bi_str_plain_b_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3a445ca7774d6dcb0a7300adc2ca1828 = MAKE_CODEOBJ( const_str_digest_2fa94da6f6dac38a31cee8b080ffe216, const_str_plain_cb_rules, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_buildcallbacks_of_module_numpy$f2py$cb_rules(  );


static PyObject *MAKE_FUNCTION_function_2_buildcallback_of_module_numpy$f2py$cb_rules(  );


// The module function definitions.
static PyObject *impl_function_1_buildcallbacks_of_module_numpy$f2py$cb_rules( Nuitka_FunctionObject *self, PyObject *_python_par_m )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_m; par_m.object = _python_par_m;
    PyObjectLocalVariable var_bi;
    PyObjectLocalVariable var_b;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    bool tmp_result;
    PyObject *tmp_return_value;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5ef910a996d84a5d18efa2ec1f33f1be, module_numpy$f2py$cb_rules );
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
    tmp_ass_subvalue_1 = PyList_New( 0 );
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cb_map );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cb_map );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129586 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 406;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = par_m.object;

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 406;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_str_plain_name;
    tmp_ass_subscript_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_ass_subscript_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        frame_function->f_lineno = 406;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 406;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_2 = par_m.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = const_str_plain_body;
    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
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
        frame_function->f_lineno = 407;
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

    if (var_bi.object == NULL)
    {
        var_bi.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = var_bi.object;
        var_bi.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
    tmp_subscr_target_3 = var_bi.object;

    tmp_subscr_subscript_3 = const_str_plain_block;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto try_finally_handler_1;
    }
    tmp_compare_right_1 = const_str_plain_interface;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 408;
        goto try_finally_handler_1;
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
    tmp_subscr_target_4 = var_bi.object;

    tmp_subscr_subscript_4 = const_str_plain_body;
    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
        goto try_finally_handler_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
        goto try_finally_handler_1;
    }
    if (tmp_for_loop_2__for_iterator.object == NULL)
    {
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__for_iterator.object;
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_5 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 409;
            goto try_finally_handler_2;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_assign_source_6 = tmp_for_loop_2__iter_value.object;

    if (var_b.object == NULL)
    {
        var_b.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = var_b.object;
        var_b.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    tmp_cond_value_1 = var_b.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_buildcallback );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_buildcallback );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129621 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 411;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_1 = var_b.object;

    tmp_subscr_target_5 = par_m.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 411;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_5 = const_str_plain_name;
    tmp_call_arg_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 411;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 411;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 411;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_errmess );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errmess );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125842 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 413;
        goto try_finally_handler_2;
    }

    tmp_binop_left_1 = const_str_digest_280c818bf2a569dfef20febc1e1473df;
    tmp_subscr_target_6 = par_m.object;

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 413;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_6 = const_str_plain_name;
    tmp_binop_right_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 413;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 413;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 413;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 413;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
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
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
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
    if ((var_bi.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bi,
            var_bi.object
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
    if ((par_m.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_m,
            par_m.object
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
static PyObject *fparse_function_1_buildcallbacks_of_module_numpy$f2py$cb_rules( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_m = NULL;
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
                PyErr_Format( PyExc_TypeError, "buildcallbacks() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_m == key )
            {
                assert( _python_par_m == NULL );
                _python_par_m = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_m, key ) == 1 )
            {
                assert( _python_par_m == NULL );
                _python_par_m = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "buildcallbacks() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_m != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_m = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_m == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_m = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_m == NULL ))
    {
        PyObject *values[] = { _python_par_m };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_buildcallbacks_of_module_numpy$f2py$cb_rules( self, _python_par_m );

error_exit:;

    Py_XDECREF( _python_par_m );

    return NULL;
}

static PyObject *dparse_function_1_buildcallbacks_of_module_numpy$f2py$cb_rules( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_buildcallbacks_of_module_numpy$f2py$cb_rules( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_buildcallbacks_of_module_numpy$f2py$cb_rules( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_buildcallback_of_module_numpy$f2py$cb_rules( Nuitka_FunctionObject *self, PyObject *_python_par_rout, PyObject *_python_par_um )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_rout; par_rout.object = _python_par_rout;
    PyObjectLocalVariable par_um; par_um.object = _python_par_um;
    PyObjectLocalVariable var_capi_maps;
    PyObjectLocalVariable var_args;
    PyObjectLocalVariable var_depargs;
    PyObjectLocalVariable var_var;
    PyObjectLocalVariable var_vrd;
    PyObjectLocalVariable var_rd;
    PyObjectLocalVariable var_r;
    PyObjectLocalVariable var_ar;
    PyObjectLocalVariable var_savevrd;
    PyObjectLocalVariable var_i;
    PyObjectLocalVariable var_a;
    PyObjectLocalVariable var_optargs;
    PyObjectLocalVariable var_k;
    PyObjectLocalVariable var_t;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_and_2__value_1;
    PyObjectTempVariable tmp_and_3__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_for_loop_4__for_iterator;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_for_loop_5__for_iterator;
    PyObjectTempVariable tmp_for_loop_5__iter_value;
    PyObjectTempVariable tmp_and_4__value_1;
    PyObjectTempVariable tmp_or_3__value_1;
    PyObjectTempVariable tmp_and_5__value_1;
    PyObjectTempVariable tmp_or_4__value_1;
    PyObjectTempVariable tmp_for_loop_6__for_iterator;
    PyObjectTempVariable tmp_for_loop_6__iter_value;
    PyObjectTempVariable tmp_for_loop_7__for_iterator;
    PyObjectTempVariable tmp_for_loop_7__iter_value;
    PyObjectTempVariable tmp_and_6__value_1;
    PyObjectTempVariable tmp_or_5__value_1;
    PyObjectTempVariable tmp_and_7__value_1;
    PyObjectTempVariable tmp_for_loop_8__for_iterator;
    PyObjectTempVariable tmp_for_loop_8__iter_value;
    PyObjectTempVariable tmp_and_8__value_1;
    PyObjectTempVariable tmp_and_9__value_1;
    PyObjectTempVariable tmp_or_6__value_1;
    PyObjectTempVariable tmp_or_6__value_2;
    PyObjectTempVariable tmp_for_loop_9__for_iterator;
    PyObjectTempVariable tmp_for_loop_9__iter_value;
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
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
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
    bool tmp_break_1;
    bool tmp_break_2;
    bool tmp_break_3;
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
    PyObject *tmp_call_arg_element_56;
    PyObject *tmp_call_arg_element_57;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
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
    PyObject *tmp_compexpr_left_12;
    PyObject *tmp_compexpr_left_13;
    PyObject *tmp_compexpr_left_14;
    PyObject *tmp_compexpr_left_15;
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
    PyObject *tmp_compexpr_right_12;
    PyObject *tmp_compexpr_right_13;
    PyObject *tmp_compexpr_right_14;
    PyObject *tmp_compexpr_right_15;
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
    bool tmp_continue_1;
    bool tmp_continue_2;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
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
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iter_arg_9;
    PyObject *tmp_iter_arg_10;
    PyObject *tmp_iter_arg_11;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
    PyObject *tmp_next_source_7;
    PyObject *tmp_next_source_8;
    PyObject *tmp_next_source_9;
    int tmp_res;
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
    PyObject *tmp_subscr_subscript_21;
    PyObject *tmp_subscr_subscript_22;
    PyObject *tmp_subscr_subscript_23;
    PyObject *tmp_subscr_subscript_24;
    PyObject *tmp_subscr_subscript_25;
    PyObject *tmp_subscr_subscript_26;
    PyObject *tmp_subscr_subscript_27;
    PyObject *tmp_subscr_subscript_28;
    PyObject *tmp_subscr_subscript_29;
    PyObject *tmp_subscr_subscript_30;
    PyObject *tmp_subscr_subscript_31;
    PyObject *tmp_subscr_subscript_32;
    PyObject *tmp_subscr_subscript_33;
    PyObject *tmp_subscr_subscript_34;
    PyObject *tmp_subscr_subscript_35;
    PyObject *tmp_subscr_subscript_36;
    PyObject *tmp_subscr_subscript_37;
    PyObject *tmp_subscr_subscript_38;
    PyObject *tmp_subscr_subscript_39;
    PyObject *tmp_subscr_subscript_40;
    PyObject *tmp_subscr_subscript_41;
    PyObject *tmp_subscr_subscript_42;
    PyObject *tmp_subscr_subscript_43;
    PyObject *tmp_subscr_subscript_44;
    PyObject *tmp_subscr_subscript_45;
    PyObject *tmp_subscr_subscript_46;
    PyObject *tmp_subscr_subscript_47;
    PyObject *tmp_subscr_subscript_48;
    PyObject *tmp_subscr_subscript_49;
    PyObject *tmp_subscr_subscript_50;
    PyObject *tmp_subscr_subscript_51;
    PyObject *tmp_subscr_subscript_52;
    PyObject *tmp_subscr_subscript_53;
    PyObject *tmp_subscr_subscript_54;
    PyObject *tmp_subscr_subscript_55;
    PyObject *tmp_subscr_subscript_56;
    PyObject *tmp_subscr_subscript_57;
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
    PyObject *tmp_subscr_target_21;
    PyObject *tmp_subscr_target_22;
    PyObject *tmp_subscr_target_23;
    PyObject *tmp_subscr_target_24;
    PyObject *tmp_subscr_target_25;
    PyObject *tmp_subscr_target_26;
    PyObject *tmp_subscr_target_27;
    PyObject *tmp_subscr_target_28;
    PyObject *tmp_subscr_target_29;
    PyObject *tmp_subscr_target_30;
    PyObject *tmp_subscr_target_31;
    PyObject *tmp_subscr_target_32;
    PyObject *tmp_subscr_target_33;
    PyObject *tmp_subscr_target_34;
    PyObject *tmp_subscr_target_35;
    PyObject *tmp_subscr_target_36;
    PyObject *tmp_subscr_target_37;
    PyObject *tmp_subscr_target_38;
    PyObject *tmp_subscr_target_39;
    PyObject *tmp_subscr_target_40;
    PyObject *tmp_subscr_target_41;
    PyObject *tmp_subscr_target_42;
    PyObject *tmp_subscr_target_43;
    PyObject *tmp_subscr_target_44;
    PyObject *tmp_subscr_target_45;
    PyObject *tmp_subscr_target_46;
    PyObject *tmp_subscr_target_47;
    PyObject *tmp_subscr_target_48;
    PyObject *tmp_subscr_target_49;
    PyObject *tmp_subscr_target_50;
    PyObject *tmp_subscr_target_51;
    PyObject *tmp_subscr_target_52;
    PyObject *tmp_subscr_target_53;
    PyObject *tmp_subscr_target_54;
    PyObject *tmp_subscr_target_55;
    PyObject *tmp_subscr_target_56;
    PyObject *tmp_subscr_target_57;
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
    int tmp_tried_lineno_23;
    int tmp_tried_lineno_24;
    int tmp_tried_lineno_25;
    int tmp_tried_lineno_26;
    int tmp_tried_lineno_27;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ed7baed51ccc452b5a0dce86d8edad5c, module_numpy$f2py$cb_rules );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$f2py$cb_rules)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_capi_maps.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_capi_maps,
            var_capi_maps.object
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
    if ((var_depargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_depargs,
            var_depargs.object
        );

    }
    if ((var_var.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_var,
            var_var.object
        );

    }
    if ((var_vrd.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_vrd,
            var_vrd.object
        );

    }
    if ((var_rd.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_rd,
            var_rd.object
        );

    }
    if ((var_r.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_r,
            var_r.object
        );

    }
    if ((var_ar.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ar,
            var_ar.object
        );

    }
    if ((var_savevrd.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_savevrd,
            var_savevrd.object
        );

    }
    if ((var_i.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_i,
            var_i.object
        );

    }
    if ((var_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_a,
            var_a.object
        );

    }
    if ((var_optargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_optargs,
            var_optargs.object
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
    if ((var_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_t,
            var_t.object
        );

    }
    if ((par_rout.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_rout,
            par_rout.object
        );

    }
    if ((par_um.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_um,
            par_um.object
        );

    }
    frame_function->f_lineno = 417;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_empty, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_capi_maps_tuple, const_int_pos_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_capi_maps );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }
    assert( var_capi_maps.object == NULL );
    var_capi_maps.object = tmp_assign_source_1;

    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_outmess );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outmess );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125154 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = const_str_digest_176ecb0bb4dd5fe39afa73019b674770;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_subscr_target_1 = par_rout.object;

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_str_plain_name;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_um.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129354 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 419;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_getargs );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getargs );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 51280 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 420;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_2 = par_rout.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 420;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 420;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 420;
        goto try_finally_handler_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 420;
        goto try_finally_handler_1;
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


        frame_function->f_lineno = 420;
        goto try_finally_handler_1;
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


        frame_function->f_lineno = 420;
        goto try_finally_handler_1;
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
    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1.object;

    assert( var_args.object == NULL );
    var_args.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2.object;

    assert( var_depargs.object == NULL );
    var_depargs.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

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
    tmp_assattr_name_1 = var_depargs.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129663 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = var_capi_maps.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129716 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_depargs, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_2 = par_rout.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = const_str_plain_vars;
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    assert( var_var.object == NULL );
    var_var.object = tmp_assign_source_7;

    tmp_source_name_1 = var_capi_maps.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129716 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cb_routsign2map );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_rout.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_um.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129354 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 423;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }
    assert( var_vrd.object == NULL );
    var_vrd.object = tmp_assign_source_8;

    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_dictappend );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dictappend );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126933 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = PyDict_New();
    tmp_call_arg_element_6 = var_vrd.object;

    frame_function->f_lineno = 424;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }
    assert( var_rd.object == NULL );
    var_rd.object = tmp_assign_source_9;

    tmp_subscr_target_3 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cb_map );

    if (unlikely( tmp_subscr_target_3 == NULL ))
    {
        tmp_subscr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cb_map );
    }

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129586 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 425;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_3 = par_um.object;

    if ( tmp_subscr_subscript_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129354 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 425;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = PyList_New( 2 );
    tmp_subscr_target_4 = par_rout.object;

    if ( tmp_subscr_target_4 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 425;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_4 = const_str_plain_name;
    tmp_list_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 425;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_call_arg_element_7, 0, tmp_list_element_1 );
    tmp_subscr_target_5 = var_rd.object;

    tmp_subscr_subscript_5 = const_str_plain_name;
    tmp_list_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 425;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_call_arg_element_7, 1, tmp_list_element_1 );
    frame_function->f_lineno = 425;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cb_rout_rules );

    if (unlikely( tmp_iter_arg_2 == NULL ))
    {
        tmp_iter_arg_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cb_rout_rules );
    }

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129771 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_10;

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
        frame_function->f_lineno = 426;
            goto try_finally_handler_2;
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
    tmp_assign_source_12 = tmp_for_loop_1__iter_value.object;

    if (var_r.object == NULL)
    {
        var_r.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_r.object;
        var_r.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    // Tried code
    tmp_assign_source_13 = NULL;
    // Tried code
    tmp_compexpr_left_1 = const_str_plain__check;
    tmp_compexpr_right_1 = var_r.object;

    tmp_assign_source_14 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 427;
        goto try_finally_handler_6;
    }
    if (tmp_and_1__value_1.object == NULL)
    {
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = tmp_and_1__value_1.object;
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 427;
        goto try_finally_handler_6;
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
    tmp_assign_source_13 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_6 = var_r.object;

    tmp_subscr_subscript_6 = const_str_plain__check;
    tmp_called_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 427;
        goto try_finally_handler_7;
    }
    tmp_call_arg_element_8 = par_rout.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 427;
        goto try_finally_handler_7;
    }

    frame_function->f_lineno = 427;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 427;
        goto try_finally_handler_7;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
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

        goto try_finally_handler_6;
    }

    goto finally_end_2;
    finally_end_2:;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_13 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_assign_source_13 );
    condexpr_end_1:;
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

        goto try_finally_handler_4;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_cond_value_3 = tmp_or_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 427;
        goto try_finally_handler_4;
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
    tmp_cond_value_1 = tmp_or_1__value_1.object;

    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = const_str_plain__check;
    tmp_compexpr_right_2 = var_r.object;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 427;
        goto try_finally_handler_8;
    }

    tmp_cond_value_1 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 427;
        goto try_finally_handler_8;
    }
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

        goto try_finally_handler_4;
    }

    goto finally_end_5;
    finally_end_5:;
    condexpr_end_2:;
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
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 427;
        goto try_finally_handler_3;
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
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_applyrules );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_applyrules );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127020 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 428;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_9 = var_r.object;

    if ( tmp_call_arg_element_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 428;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_10 = var_vrd.object;

    if ( tmp_call_arg_element_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129813 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 428;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_11 = par_rout.object;

    if ( tmp_call_arg_element_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 428;
        goto try_finally_handler_3;
    }

    frame_function->f_lineno = 428;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS3( tmp_called_7, tmp_call_arg_element_9, tmp_call_arg_element_10, tmp_call_arg_element_11 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 428;
        goto try_finally_handler_3;
    }
    if (var_ar.object == NULL)
    {
        var_ar.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_ar.object;
        var_ar.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_dictappend );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dictappend );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126933 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 429;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_12 = var_rd.object;

    if ( tmp_call_arg_element_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 429;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_13 = var_ar.object;

    frame_function->f_lineno = 429;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_12, tmp_call_arg_element_13 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 429;
        goto try_finally_handler_3;
    }
    if (var_rd.object == NULL)
    {
        var_rd.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = var_rd.object;
        var_rd.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    branch_no_1:;
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
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_2;
    }

    goto finally_end_7;
    finally_end_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 426;
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
    tmp_assign_source_17 = PyDict_New();
    assert( var_savevrd.object == NULL );
    var_savevrd.object = tmp_assign_source_17;

    tmp_called_9 = LOOKUP_BUILTIN( const_str_plain_enumerate );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 431;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_14 = var_args.object;

    if ( tmp_call_arg_element_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 431;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 431;
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_14 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 431;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 431;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_18;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

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
        frame_function->f_lineno = 431;
            goto try_finally_handler_9;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_19;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_19;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_4 = tmp_for_loop_2__iter_value.object;

    tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 431;
        goto try_finally_handler_10;
    }
    if (tmp_tuple_unpack_2__source_iter.object == NULL)
    {
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_20;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter.object;
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_20;
        Py_DECREF( old );
    }
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_21 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 431;
        goto try_finally_handler_10;
    }
    if (tmp_tuple_unpack_2__element_1.object == NULL)
    {
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_21;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_1.object;
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_21;
        Py_DECREF( old );
    }
    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_22 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
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


        frame_function->f_lineno = 431;
        goto try_finally_handler_10;
    }
    if (tmp_tuple_unpack_2__element_2.object == NULL)
    {
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_22;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_2.object;
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_22;
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

            goto try_finally_handler_10;
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

        goto try_finally_handler_10;
    }
    tmp_assign_source_23 = tmp_tuple_unpack_2__element_1.object;

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
        Py_DECREF( old );
    }
    tmp_assign_source_24 = tmp_tuple_unpack_2__element_2.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_24 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_24 );
        Py_DECREF( old );
    }
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

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2.object );
    tmp_tuple_unpack_2__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
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
    tmp_source_name_3 = var_capi_maps.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129716 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 432;
        goto try_finally_handler_9;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cb_sign2map );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 432;
        goto try_finally_handler_9;
    }
    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_a.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 432;
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_subscr_target_7 = var_var.object;

    if ( tmp_subscr_target_7 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88437 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 432;
        goto try_finally_handler_9;
    }

    tmp_subscr_subscript_7 = var_a.object;

    if ( tmp_subscr_subscript_7 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 432;
        goto try_finally_handler_9;
    }

    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 432;
        goto try_finally_handler_9;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_2 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_i.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 432;
        goto try_finally_handler_9;
    }

    tmp_dict_key_1 = const_str_plain_index;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 432;
    tmp_assign_source_25 = CALL_FUNCTION( tmp_called_10, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 432;
        goto try_finally_handler_9;
    }
    if (var_vrd.object == NULL)
    {
        var_vrd.object = tmp_assign_source_25;
    }
    else
    {
        PyObject *old = var_vrd.object;
        var_vrd.object = tmp_assign_source_25;
        Py_DECREF( old );
    }
    tmp_ass_subvalue_1 = var_vrd.object;

    tmp_ass_subscribed_1 = var_savevrd.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129862 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 433;
        goto try_finally_handler_9;
    }

    tmp_ass_subscript_1 = var_a.object;

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 433;
        goto try_finally_handler_9;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 433;
        goto try_finally_handler_9;
    }
    tmp_iter_arg_5 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cb_arg_rules );

    if (unlikely( tmp_iter_arg_5 == NULL ))
    {
        tmp_iter_arg_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cb_arg_rules );
    }

    if ( tmp_iter_arg_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129915 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 434;
        goto try_finally_handler_9;
    }

    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 434;
        goto try_finally_handler_9;
    }
    if (tmp_for_loop_3__for_iterator.object == NULL)
    {
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_26;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__for_iterator.object;
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_26;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_27 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_27 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 434;
            goto try_finally_handler_11;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_27;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_27;
        Py_DECREF( old );
    }
    tmp_assign_source_28 = tmp_for_loop_3__iter_value.object;

    if (var_r.object == NULL)
    {
        var_r.object = INCREASE_REFCOUNT( tmp_assign_source_28 );
    }
    else
    {
        PyObject *old = var_r.object;
        var_r.object = INCREASE_REFCOUNT( tmp_assign_source_28 );
        Py_DECREF( old );
    }
    tmp_compare_left_1 = const_str_plain__depend;
    tmp_compare_right_1 = var_r.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 435;
        goto try_finally_handler_11;
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
    goto loop_start_3;
    branch_no_2:;
    tmp_continue_1 = false;
    // Tried code
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_compexpr_left_3 = const_str_plain__optional;
    tmp_compexpr_right_3 = var_r.object;

    tmp_assign_source_29 = SEQUENCE_CONTAINS( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
        goto try_finally_handler_13;
    }
    if (tmp_and_2__value_1.object == NULL)
    {
        tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
    }
    else
    {
        PyObject *old = tmp_and_2__value_1.object;
        tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
        Py_DECREF( old );
    }
    tmp_cond_value_5 = tmp_and_2__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
        goto try_finally_handler_13;
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
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isoptional );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isoptional );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125235 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 437;
        goto try_finally_handler_14;
    }

    tmp_subscr_target_8 = var_var.object;

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88437 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 437;
        goto try_finally_handler_14;
    }

    tmp_subscr_subscript_8 = var_a.object;

    if ( tmp_subscr_subscript_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 437;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_15 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
        goto try_finally_handler_14;
    }
    frame_function->f_lineno = 437;
    tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_15 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
        goto try_finally_handler_14;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_14:;
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

        goto try_finally_handler_13;
    }

    goto finally_end_10;
    finally_end_10:;
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_cond_value_4 = tmp_and_2__value_1.object;

    Py_INCREF( tmp_cond_value_4 );
    condexpr_end_3:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto try_finally_handler_12;
    }

    goto finally_end_11;
    finally_end_11:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 437;
        goto try_finally_handler_12;
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
    tmp_continue_1 = true;
    goto try_finally_handler_start_1;
    branch_no_3:;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto try_finally_handler_11;
    }

    // Continue if entered via continue.
    if ( tmp_continue_1 )
    {

    goto loop_start_3;
    }
    goto finally_end_12;
    finally_end_12:;
    tmp_break_1 = false;
    // Tried code
    tmp_cond_value_6 = NULL;
    // Tried code
    // Tried code
    tmp_assign_source_30 = NULL;
    // Tried code
    tmp_compexpr_left_4 = const_str_plain__check;
    tmp_compexpr_right_4 = var_r.object;

    if ( tmp_compexpr_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 439;
        goto try_finally_handler_18;
    }

    tmp_assign_source_31 = SEQUENCE_CONTAINS( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
        goto try_finally_handler_18;
    }
    if (tmp_and_3__value_1.object == NULL)
    {
        tmp_and_3__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_31 );
    }
    else
    {
        PyObject *old = tmp_and_3__value_1.object;
        tmp_and_3__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_31 );
        Py_DECREF( old );
    }
    tmp_cond_value_7 = tmp_and_3__value_1.object;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
        goto try_finally_handler_18;
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
    tmp_assign_source_30 = NULL;
    // Tried code
    tmp_result = tmp_and_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_3__value_1.object );
        tmp_and_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_9 = var_r.object;

    if ( tmp_subscr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 439;
        goto try_finally_handler_19;
    }

    tmp_subscr_subscript_9 = const_str_plain__check;
    tmp_called_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
        goto try_finally_handler_19;
    }
    tmp_subscr_target_10 = var_var.object;

    if ( tmp_subscr_target_10 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88437 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 439;
        goto try_finally_handler_19;
    }

    tmp_subscr_subscript_10 = var_a.object;

    if ( tmp_subscr_subscript_10 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 439;
        goto try_finally_handler_19;
    }

    tmp_call_arg_element_16 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_function->f_lineno = 439;
        goto try_finally_handler_19;
    }
    frame_function->f_lineno = 439;
    tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_12 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
        goto try_finally_handler_19;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_19:;
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

        goto try_finally_handler_18;
    }

    goto finally_end_13;
    finally_end_13:;
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_30 = tmp_and_3__value_1.object;

    Py_INCREF( tmp_assign_source_30 );
    condexpr_end_4:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_14 != NULL )
    {
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;

        goto try_finally_handler_17;
    }

    goto finally_end_14;
    finally_end_14:;
    if (tmp_or_2__value_1.object == NULL)
    {
        tmp_or_2__value_1.object = tmp_assign_source_30;
    }
    else
    {
        PyObject *old = tmp_or_2__value_1.object;
        tmp_or_2__value_1.object = tmp_assign_source_30;
        Py_DECREF( old );
    }
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

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_3__value_1.object );
    tmp_and_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_15 != NULL )
    {
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;

        goto try_finally_handler_16;
    }

    goto finally_end_15;
    finally_end_15:;
    tmp_cond_value_8 = tmp_or_2__value_1.object;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
        goto try_finally_handler_16;
    }
    if (tmp_cond_truth_8 == 1)
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_cond_value_6 = tmp_or_2__value_1.object;

    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_cond_value_6 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_5 = const_str_plain__check;
    tmp_compexpr_right_5 = var_r.object;

    if ( tmp_compexpr_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 439;
        goto try_finally_handler_20;
    }

    tmp_cond_value_6 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_16 != NULL )
    {
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;

        goto try_finally_handler_16;
    }

    goto finally_end_16;
    finally_end_16:;
    condexpr_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_16:;
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

        goto try_finally_handler_15;
    }

    goto finally_end_17;
    finally_end_17:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
        goto try_finally_handler_15;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_applyrules );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_applyrules );
    }

    if ( tmp_called_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127020 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 440;
        goto try_finally_handler_15;
    }

    tmp_call_arg_element_17 = var_r.object;

    if ( tmp_call_arg_element_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 440;
        goto try_finally_handler_15;
    }

    tmp_call_arg_element_18 = var_vrd.object;

    if ( tmp_call_arg_element_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129813 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 440;
        goto try_finally_handler_15;
    }

    tmp_subscr_target_11 = var_var.object;

    if ( tmp_subscr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88437 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 440;
        goto try_finally_handler_15;
    }

    tmp_subscr_subscript_11 = var_a.object;

    if ( tmp_subscr_subscript_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 440;
        goto try_finally_handler_15;
    }

    tmp_call_arg_element_19 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_call_arg_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 440;
        goto try_finally_handler_15;
    }
    frame_function->f_lineno = 440;
    tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3( tmp_called_13, tmp_call_arg_element_17, tmp_call_arg_element_18, tmp_call_arg_element_19 );
    Py_DECREF( tmp_call_arg_element_19 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 440;
        goto try_finally_handler_15;
    }
    if (var_ar.object == NULL)
    {
        var_ar.object = tmp_assign_source_32;
    }
    else
    {
        PyObject *old = var_ar.object;
        var_ar.object = tmp_assign_source_32;
        Py_DECREF( old );
    }
    tmp_called_14 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_dictappend );

    if (unlikely( tmp_called_14 == NULL ))
    {
        tmp_called_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dictappend );
    }

    if ( tmp_called_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126933 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 441;
        goto try_finally_handler_15;
    }

    tmp_call_arg_element_20 = var_rd.object;

    if ( tmp_call_arg_element_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 441;
        goto try_finally_handler_15;
    }

    tmp_call_arg_element_21 = var_ar.object;

    frame_function->f_lineno = 441;
    tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS2( tmp_called_14, tmp_call_arg_element_20, tmp_call_arg_element_21 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
        goto try_finally_handler_15;
    }
    if (var_rd.object == NULL)
    {
        var_rd.object = tmp_assign_source_33;
    }
    else
    {
        PyObject *old = var_rd.object;
        var_rd.object = tmp_assign_source_33;
        Py_DECREF( old );
    }
    tmp_compare_left_2 = const_str_plain__break;
    tmp_compare_right_2 = var_r.object;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 442;
        goto try_finally_handler_15;
    }

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 442;
        goto try_finally_handler_15;
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
    tmp_break_1 = true;
    goto try_finally_handler_start_2;
    branch_no_5:;
    branch_no_4:;
    try_finally_handler_start_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_15:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_18 != NULL )
    {
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;

        goto try_finally_handler_11;
    }

    // Break if entered via break.
    if ( tmp_break_1 )
    {

    goto loop_end_3;
    }
    goto finally_end_18;
    finally_end_18:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 434;
        goto try_finally_handler_11;
    }
    goto loop_start_3;
    loop_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_19 != NULL )
    {
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;

        goto try_finally_handler_9;
    }

    goto finally_end_19;
    finally_end_19:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 431;
        goto try_finally_handler_9;
    }
    goto loop_start_2;
    loop_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_10 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

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

    goto finally_end_20;
    finally_end_20:;
    tmp_iter_arg_6 = var_args.object;

    if ( tmp_iter_arg_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 444;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_34 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 444;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator.object == NULL );
    tmp_for_loop_4__for_iterator.object = tmp_assign_source_34;

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
        frame_function->f_lineno = 444;
            goto try_finally_handler_21;
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

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
        Py_DECREF( old );
    }
    tmp_subscr_target_12 = var_savevrd.object;

    if ( tmp_subscr_target_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129862 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 445;
        goto try_finally_handler_21;
    }

    tmp_subscr_subscript_12 = var_a.object;

    tmp_assign_source_37 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 445;
        goto try_finally_handler_21;
    }
    if (var_vrd.object == NULL)
    {
        var_vrd.object = tmp_assign_source_37;
    }
    else
    {
        PyObject *old = var_vrd.object;
        var_vrd.object = tmp_assign_source_37;
        Py_DECREF( old );
    }
    tmp_iter_arg_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cb_arg_rules );

    if (unlikely( tmp_iter_arg_7 == NULL ))
    {
        tmp_iter_arg_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cb_arg_rules );
    }

    if ( tmp_iter_arg_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129915 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 446;
        goto try_finally_handler_21;
    }

    tmp_assign_source_38 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 446;
        goto try_finally_handler_21;
    }
    if (tmp_for_loop_5__for_iterator.object == NULL)
    {
        tmp_for_loop_5__for_iterator.object = tmp_assign_source_38;
    }
    else
    {
        PyObject *old = tmp_for_loop_5__for_iterator.object;
        tmp_for_loop_5__for_iterator.object = tmp_assign_source_38;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator.object;

    tmp_assign_source_39 = ITERATOR_NEXT( tmp_next_source_5 );
    if (tmp_assign_source_39 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_5;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 446;
            goto try_finally_handler_22;
        }
    }

    if (tmp_for_loop_5__iter_value.object == NULL)
    {
        tmp_for_loop_5__iter_value.object = tmp_assign_source_39;
    }
    else
    {
        PyObject *old = tmp_for_loop_5__iter_value.object;
        tmp_for_loop_5__iter_value.object = tmp_assign_source_39;
        Py_DECREF( old );
    }
    tmp_assign_source_40 = tmp_for_loop_5__iter_value.object;

    if (var_r.object == NULL)
    {
        var_r.object = INCREASE_REFCOUNT( tmp_assign_source_40 );
    }
    else
    {
        PyObject *old = var_r.object;
        var_r.object = INCREASE_REFCOUNT( tmp_assign_source_40 );
        Py_DECREF( old );
    }
    tmp_compare_left_3 = const_str_plain__depend;
    tmp_compare_right_3 = var_r.object;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 447;
        goto try_finally_handler_22;
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
    goto loop_start_5;
    branch_no_6:;
    tmp_continue_2 = false;
    // Tried code
    tmp_cond_value_9 = NULL;
    // Tried code
    tmp_compexpr_left_6 = const_str_plain__optional;
    tmp_compexpr_right_6 = var_r.object;

    tmp_assign_source_41 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto try_finally_handler_24;
    }
    if (tmp_or_3__value_1.object == NULL)
    {
        tmp_or_3__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_41 );
    }
    else
    {
        PyObject *old = tmp_or_3__value_1.object;
        tmp_or_3__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_41 );
        Py_DECREF( old );
    }
    tmp_cond_value_10 = tmp_or_3__value_1.object;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto try_finally_handler_24;
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
    tmp_cond_value_9 = tmp_or_3__value_1.object;

    Py_INCREF( tmp_cond_value_9 );
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_cond_value_9 = NULL;
    // Tried code
    tmp_cond_value_9 = NULL;
    // Tried code
    tmp_result = tmp_or_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_3__value_1.object );
        tmp_or_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_9 = NULL;
    // Tried code
    tmp_compexpr_left_7 = const_str_plain__optional;
    tmp_compexpr_right_7 = var_r.object;

    tmp_assign_source_42 = SEQUENCE_CONTAINS( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto try_finally_handler_27;
    }
    if (tmp_and_4__value_1.object == NULL)
    {
        tmp_and_4__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_42 );
    }
    else
    {
        PyObject *old = tmp_and_4__value_1.object;
        tmp_and_4__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_42 );
        Py_DECREF( old );
    }
    tmp_cond_value_11 = tmp_and_4__value_1.object;

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto try_finally_handler_27;
    }
    if (tmp_cond_truth_11 == 1)
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_cond_value_9 = NULL;
    // Tried code
    tmp_result = tmp_and_4__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_4__value_1.object );
        tmp_and_4__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_15 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isrequired );

    if (unlikely( tmp_called_15 == NULL ))
    {
        tmp_called_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isrequired );
    }

    if ( tmp_called_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128665 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 449;
        goto try_finally_handler_28;
    }

    tmp_subscr_target_13 = var_var.object;

    if ( tmp_subscr_target_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88437 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 449;
        goto try_finally_handler_28;
    }

    tmp_subscr_subscript_13 = var_a.object;

    if ( tmp_subscr_subscript_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 449;
        goto try_finally_handler_28;
    }

    tmp_call_arg_element_22 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    if ( tmp_call_arg_element_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto try_finally_handler_28;
    }
    frame_function->f_lineno = 449;
    tmp_cond_value_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_22 );
    Py_DECREF( tmp_call_arg_element_22 );
    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto try_finally_handler_28;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_28:;
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

        goto try_finally_handler_27;
    }

    goto finally_end_21;
    finally_end_21:;
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_9 = tmp_and_4__value_1.object;

    Py_INCREF( tmp_cond_value_9 );
    condexpr_end_7:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_27:;
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

        goto try_finally_handler_26;
    }

    goto finally_end_22;
    finally_end_22:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_26:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_23 != NULL )
    {
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;

        goto try_finally_handler_25;
    }

    goto finally_end_23;
    finally_end_23:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_25:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_11 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_4__value_1.object );
    tmp_and_4__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_11;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_24 != NULL )
    {
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;

        goto try_finally_handler_24;
    }

    goto finally_end_24;
    finally_end_24:;
    condexpr_end_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_24:;
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

        goto try_finally_handler_23;
    }

    goto finally_end_25;
    finally_end_25:;
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        frame_function->f_lineno = 449;
        goto try_finally_handler_23;
    }
    Py_DECREF( tmp_cond_value_9 );
    if (tmp_cond_truth_9 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_continue_2 = true;
    goto try_finally_handler_start_3;
    branch_no_7:;
    try_finally_handler_start_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_23:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_12 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_3__value_1.object );
    tmp_or_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_12;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_26 != NULL )
    {
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;

        goto try_finally_handler_22;
    }

    // Continue if entered via continue.
    if ( tmp_continue_2 )
    {

    goto loop_start_5;
    }
    goto finally_end_26;
    finally_end_26:;
    tmp_break_2 = false;
    // Tried code
    tmp_cond_value_12 = NULL;
    // Tried code
    // Tried code
    tmp_assign_source_43 = NULL;
    // Tried code
    tmp_compexpr_left_8 = const_str_plain__check;
    tmp_compexpr_right_8 = var_r.object;

    if ( tmp_compexpr_right_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 451;
        goto try_finally_handler_32;
    }

    tmp_assign_source_44 = SEQUENCE_CONTAINS( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
        goto try_finally_handler_32;
    }
    if (tmp_and_5__value_1.object == NULL)
    {
        tmp_and_5__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_44 );
    }
    else
    {
        PyObject *old = tmp_and_5__value_1.object;
        tmp_and_5__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_44 );
        Py_DECREF( old );
    }
    tmp_cond_value_13 = tmp_and_5__value_1.object;

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
        goto try_finally_handler_32;
    }
    if (tmp_cond_truth_13 == 1)
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_assign_source_43 = NULL;
    // Tried code
    tmp_result = tmp_and_5__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_5__value_1.object );
        tmp_and_5__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_14 = var_r.object;

    if ( tmp_subscr_target_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 451;
        goto try_finally_handler_33;
    }

    tmp_subscr_subscript_14 = const_str_plain__check;
    tmp_called_16 = LOOKUP_SUBSCRIPT( tmp_subscr_target_14, tmp_subscr_subscript_14 );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
        goto try_finally_handler_33;
    }
    tmp_subscr_target_15 = var_var.object;

    if ( tmp_subscr_target_15 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88437 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 451;
        goto try_finally_handler_33;
    }

    tmp_subscr_subscript_15 = var_a.object;

    if ( tmp_subscr_subscript_15 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 451;
        goto try_finally_handler_33;
    }

    tmp_call_arg_element_23 = LOOKUP_SUBSCRIPT( tmp_subscr_target_15, tmp_subscr_subscript_15 );
    if ( tmp_call_arg_element_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );

        frame_function->f_lineno = 451;
        goto try_finally_handler_33;
    }
    frame_function->f_lineno = 451;
    tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_23 );
    Py_DECREF( tmp_called_16 );
    Py_DECREF( tmp_call_arg_element_23 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
        goto try_finally_handler_33;
    }
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

    goto finally_end_27;
    finally_end_27:;
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_assign_source_43 = tmp_and_5__value_1.object;

    Py_INCREF( tmp_assign_source_43 );
    condexpr_end_8:;
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

    goto finally_end_28;
    finally_end_28:;
    if (tmp_or_4__value_1.object == NULL)
    {
        tmp_or_4__value_1.object = tmp_assign_source_43;
    }
    else
    {
        PyObject *old = tmp_or_4__value_1.object;
        tmp_or_4__value_1.object = tmp_assign_source_43;
        Py_DECREF( old );
    }
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
    Py_XDECREF( tmp_and_5__value_1.object );
    tmp_and_5__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_13;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_29 != NULL )
    {
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;

        goto try_finally_handler_30;
    }

    goto finally_end_29;
    finally_end_29:;
    tmp_cond_value_14 = tmp_or_4__value_1.object;

    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
        goto try_finally_handler_30;
    }
    if (tmp_cond_truth_14 == 1)
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_cond_value_12 = tmp_or_4__value_1.object;

    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_cond_value_12 = NULL;
    // Tried code
    tmp_result = tmp_or_4__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_4__value_1.object );
        tmp_or_4__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_9 = const_str_plain__check;
    tmp_compexpr_right_9 = var_r.object;

    if ( tmp_compexpr_right_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 451;
        goto try_finally_handler_34;
    }

    tmp_cond_value_12 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
    if ( tmp_cond_value_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
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

        goto try_finally_handler_30;
    }

    goto finally_end_30;
    finally_end_30:;
    condexpr_end_9:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_30:;
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

        goto try_finally_handler_29;
    }

    goto finally_end_31;
    finally_end_31:;
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
        goto try_finally_handler_29;
    }
    if (tmp_cond_truth_12 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_17 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_applyrules );

    if (unlikely( tmp_called_17 == NULL ))
    {
        tmp_called_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_applyrules );
    }

    if ( tmp_called_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127020 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 452;
        goto try_finally_handler_29;
    }

    tmp_call_arg_element_24 = var_r.object;

    if ( tmp_call_arg_element_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 452;
        goto try_finally_handler_29;
    }

    tmp_call_arg_element_25 = var_vrd.object;

    if ( tmp_call_arg_element_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129813 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 452;
        goto try_finally_handler_29;
    }

    tmp_subscr_target_16 = var_var.object;

    if ( tmp_subscr_target_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88437 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 452;
        goto try_finally_handler_29;
    }

    tmp_subscr_subscript_16 = var_a.object;

    if ( tmp_subscr_subscript_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 452;
        goto try_finally_handler_29;
    }

    tmp_call_arg_element_26 = LOOKUP_SUBSCRIPT( tmp_subscr_target_16, tmp_subscr_subscript_16 );
    if ( tmp_call_arg_element_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 452;
        goto try_finally_handler_29;
    }
    frame_function->f_lineno = 452;
    tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS3( tmp_called_17, tmp_call_arg_element_24, tmp_call_arg_element_25, tmp_call_arg_element_26 );
    Py_DECREF( tmp_call_arg_element_26 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 452;
        goto try_finally_handler_29;
    }
    if (var_ar.object == NULL)
    {
        var_ar.object = tmp_assign_source_45;
    }
    else
    {
        PyObject *old = var_ar.object;
        var_ar.object = tmp_assign_source_45;
        Py_DECREF( old );
    }
    tmp_called_18 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_dictappend );

    if (unlikely( tmp_called_18 == NULL ))
    {
        tmp_called_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dictappend );
    }

    if ( tmp_called_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126933 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 453;
        goto try_finally_handler_29;
    }

    tmp_call_arg_element_27 = var_rd.object;

    if ( tmp_call_arg_element_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 453;
        goto try_finally_handler_29;
    }

    tmp_call_arg_element_28 = var_ar.object;

    frame_function->f_lineno = 453;
    tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS2( tmp_called_18, tmp_call_arg_element_27, tmp_call_arg_element_28 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 453;
        goto try_finally_handler_29;
    }
    if (var_rd.object == NULL)
    {
        var_rd.object = tmp_assign_source_46;
    }
    else
    {
        PyObject *old = var_rd.object;
        var_rd.object = tmp_assign_source_46;
        Py_DECREF( old );
    }
    tmp_compare_left_4 = const_str_plain__break;
    tmp_compare_right_4 = var_r.object;

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 454;
        goto try_finally_handler_29;
    }

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 454;
        goto try_finally_handler_29;
    }
    if (tmp_cmp_In_4 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_break_2 = true;
    goto try_finally_handler_start_4;
    branch_no_9:;
    branch_no_8:;
    try_finally_handler_start_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_29:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_14 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_4__value_1.object );
    tmp_or_4__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_14;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_32 != NULL )
    {
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;

        goto try_finally_handler_22;
    }

    // Break if entered via break.
    if ( tmp_break_2 )
    {

    goto loop_end_5;
    }
    goto finally_end_32;
    finally_end_32:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 446;
        goto try_finally_handler_22;
    }
    goto loop_start_5;
    loop_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_22:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_15 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_5__iter_value.object );
    tmp_for_loop_5__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_5__for_iterator.object );
    tmp_for_loop_5__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_15;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_33 != NULL )
    {
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;

        goto try_finally_handler_21;
    }

    goto finally_end_33;
    finally_end_33:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 444;
        goto try_finally_handler_21;
    }
    goto loop_start_4;
    loop_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_21:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_16 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_4__iter_value.object );
    tmp_for_loop_4__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator.object );
    tmp_for_loop_4__for_iterator.object = NULL;

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

    goto finally_end_34;
    finally_end_34:;
    tmp_iter_arg_8 = var_depargs.object;

    if ( tmp_iter_arg_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129663 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 456;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_47 = MAKE_ITERATOR( tmp_iter_arg_8 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 456;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_6__for_iterator.object == NULL );
    tmp_for_loop_6__for_iterator.object = tmp_assign_source_47;

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
        frame_function->f_lineno = 456;
            goto try_finally_handler_35;
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

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_49 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_49 );
        Py_DECREF( old );
    }
    tmp_subscr_target_17 = var_savevrd.object;

    if ( tmp_subscr_target_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129862 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 457;
        goto try_finally_handler_35;
    }

    tmp_subscr_subscript_17 = var_a.object;

    tmp_assign_source_50 = LOOKUP_SUBSCRIPT( tmp_subscr_target_17, tmp_subscr_subscript_17 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 457;
        goto try_finally_handler_35;
    }
    if (var_vrd.object == NULL)
    {
        var_vrd.object = tmp_assign_source_50;
    }
    else
    {
        PyObject *old = var_vrd.object;
        var_vrd.object = tmp_assign_source_50;
        Py_DECREF( old );
    }
    tmp_iter_arg_9 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cb_arg_rules );

    if (unlikely( tmp_iter_arg_9 == NULL ))
    {
        tmp_iter_arg_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cb_arg_rules );
    }

    if ( tmp_iter_arg_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129915 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 458;
        goto try_finally_handler_35;
    }

    tmp_assign_source_51 = MAKE_ITERATOR( tmp_iter_arg_9 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 458;
        goto try_finally_handler_35;
    }
    if (tmp_for_loop_7__for_iterator.object == NULL)
    {
        tmp_for_loop_7__for_iterator.object = tmp_assign_source_51;
    }
    else
    {
        PyObject *old = tmp_for_loop_7__for_iterator.object;
        tmp_for_loop_7__for_iterator.object = tmp_assign_source_51;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_7:;
    tmp_next_source_7 = tmp_for_loop_7__for_iterator.object;

    tmp_assign_source_52 = ITERATOR_NEXT( tmp_next_source_7 );
    if (tmp_assign_source_52 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_7;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 458;
            goto try_finally_handler_36;
        }
    }

    if (tmp_for_loop_7__iter_value.object == NULL)
    {
        tmp_for_loop_7__iter_value.object = tmp_assign_source_52;
    }
    else
    {
        PyObject *old = tmp_for_loop_7__iter_value.object;
        tmp_for_loop_7__iter_value.object = tmp_assign_source_52;
        Py_DECREF( old );
    }
    tmp_assign_source_53 = tmp_for_loop_7__iter_value.object;

    if (var_r.object == NULL)
    {
        var_r.object = INCREASE_REFCOUNT( tmp_assign_source_53 );
    }
    else
    {
        PyObject *old = var_r.object;
        var_r.object = INCREASE_REFCOUNT( tmp_assign_source_53 );
        Py_DECREF( old );
    }
    tmp_compare_left_5 = const_str_plain__depend;
    tmp_compare_right_5 = var_r.object;

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 459;
        goto try_finally_handler_36;
    }
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    goto loop_start_7;
    branch_no_10:;
    tmp_compare_left_6 = const_str_plain__optional;
    tmp_compare_right_6 = var_r.object;

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_In_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 461;
        goto try_finally_handler_36;
    }
    if (tmp_cmp_In_5 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    goto loop_start_7;
    branch_no_11:;
    tmp_break_3 = false;
    // Tried code
    tmp_cond_value_15 = NULL;
    // Tried code
    // Tried code
    tmp_assign_source_54 = NULL;
    // Tried code
    tmp_compexpr_left_10 = const_str_plain__check;
    tmp_compexpr_right_10 = var_r.object;

    tmp_assign_source_55 = SEQUENCE_CONTAINS( tmp_compexpr_left_10, tmp_compexpr_right_10 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 463;
        goto try_finally_handler_40;
    }
    if (tmp_and_6__value_1.object == NULL)
    {
        tmp_and_6__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_55 );
    }
    else
    {
        PyObject *old = tmp_and_6__value_1.object;
        tmp_and_6__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_55 );
        Py_DECREF( old );
    }
    tmp_cond_value_16 = tmp_and_6__value_1.object;

    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 463;
        goto try_finally_handler_40;
    }
    if (tmp_cond_truth_16 == 1)
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_assign_source_54 = NULL;
    // Tried code
    tmp_result = tmp_and_6__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_6__value_1.object );
        tmp_and_6__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_18 = var_r.object;

    tmp_subscr_subscript_18 = const_str_plain__check;
    tmp_called_19 = LOOKUP_SUBSCRIPT( tmp_subscr_target_18, tmp_subscr_subscript_18 );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 463;
        goto try_finally_handler_41;
    }
    tmp_subscr_target_19 = var_var.object;

    if ( tmp_subscr_target_19 == NULL )
    {
        Py_DECREF( tmp_called_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88437 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 463;
        goto try_finally_handler_41;
    }

    tmp_subscr_subscript_19 = var_a.object;

    if ( tmp_subscr_subscript_19 == NULL )
    {
        Py_DECREF( tmp_called_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 463;
        goto try_finally_handler_41;
    }

    tmp_call_arg_element_29 = LOOKUP_SUBSCRIPT( tmp_subscr_target_19, tmp_subscr_subscript_19 );
    if ( tmp_call_arg_element_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_19 );

        frame_function->f_lineno = 463;
        goto try_finally_handler_41;
    }
    frame_function->f_lineno = 463;
    tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_29 );
    Py_DECREF( tmp_called_19 );
    Py_DECREF( tmp_call_arg_element_29 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 463;
        goto try_finally_handler_41;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_41:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_35 != NULL )
    {
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;

        goto try_finally_handler_40;
    }

    goto finally_end_35;
    finally_end_35:;
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_assign_source_54 = tmp_and_6__value_1.object;

    Py_INCREF( tmp_assign_source_54 );
    condexpr_end_10:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_36 != NULL )
    {
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;

        goto try_finally_handler_39;
    }

    goto finally_end_36;
    finally_end_36:;
    if (tmp_or_5__value_1.object == NULL)
    {
        tmp_or_5__value_1.object = tmp_assign_source_54;
    }
    else
    {
        PyObject *old = tmp_or_5__value_1.object;
        tmp_or_5__value_1.object = tmp_assign_source_54;
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_39:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_17 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_6__value_1.object );
    tmp_and_6__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_17;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_37 != NULL )
    {
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;

        goto try_finally_handler_38;
    }

    goto finally_end_37;
    finally_end_37:;
    tmp_cond_value_17 = tmp_or_5__value_1.object;

    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 463;
        goto try_finally_handler_38;
    }
    if (tmp_cond_truth_17 == 1)
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_cond_value_15 = tmp_or_5__value_1.object;

    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_cond_value_15 = NULL;
    // Tried code
    tmp_result = tmp_or_5__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_5__value_1.object );
        tmp_or_5__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_11 = const_str_plain__check;
    tmp_compexpr_right_11 = var_r.object;

    if ( tmp_compexpr_right_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 463;
        goto try_finally_handler_42;
    }

    tmp_cond_value_15 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
    if ( tmp_cond_value_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 463;
        goto try_finally_handler_42;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_42:;
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

        goto try_finally_handler_38;
    }

    goto finally_end_38;
    finally_end_38:;
    condexpr_end_11:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_38:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_39 != NULL )
    {
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;

        goto try_finally_handler_37;
    }

    goto finally_end_39;
    finally_end_39:;
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 463;
        goto try_finally_handler_37;
    }
    if (tmp_cond_truth_15 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_20 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_applyrules );

    if (unlikely( tmp_called_20 == NULL ))
    {
        tmp_called_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_applyrules );
    }

    if ( tmp_called_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127020 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 464;
        goto try_finally_handler_37;
    }

    tmp_call_arg_element_30 = var_r.object;

    if ( tmp_call_arg_element_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 464;
        goto try_finally_handler_37;
    }

    tmp_call_arg_element_31 = var_vrd.object;

    if ( tmp_call_arg_element_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129813 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 464;
        goto try_finally_handler_37;
    }

    tmp_subscr_target_20 = var_var.object;

    if ( tmp_subscr_target_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88437 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 464;
        goto try_finally_handler_37;
    }

    tmp_subscr_subscript_20 = var_a.object;

    if ( tmp_subscr_subscript_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 464;
        goto try_finally_handler_37;
    }

    tmp_call_arg_element_32 = LOOKUP_SUBSCRIPT( tmp_subscr_target_20, tmp_subscr_subscript_20 );
    if ( tmp_call_arg_element_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 464;
        goto try_finally_handler_37;
    }
    frame_function->f_lineno = 464;
    tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS3( tmp_called_20, tmp_call_arg_element_30, tmp_call_arg_element_31, tmp_call_arg_element_32 );
    Py_DECREF( tmp_call_arg_element_32 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 464;
        goto try_finally_handler_37;
    }
    if (var_ar.object == NULL)
    {
        var_ar.object = tmp_assign_source_56;
    }
    else
    {
        PyObject *old = var_ar.object;
        var_ar.object = tmp_assign_source_56;
        Py_DECREF( old );
    }
    tmp_called_21 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_dictappend );

    if (unlikely( tmp_called_21 == NULL ))
    {
        tmp_called_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dictappend );
    }

    if ( tmp_called_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126933 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 465;
        goto try_finally_handler_37;
    }

    tmp_call_arg_element_33 = var_rd.object;

    if ( tmp_call_arg_element_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 465;
        goto try_finally_handler_37;
    }

    tmp_call_arg_element_34 = var_ar.object;

    frame_function->f_lineno = 465;
    tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS2( tmp_called_21, tmp_call_arg_element_33, tmp_call_arg_element_34 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 465;
        goto try_finally_handler_37;
    }
    if (var_rd.object == NULL)
    {
        var_rd.object = tmp_assign_source_57;
    }
    else
    {
        PyObject *old = var_rd.object;
        var_rd.object = tmp_assign_source_57;
        Py_DECREF( old );
    }
    tmp_compare_left_7 = const_str_plain__break;
    tmp_compare_right_7 = var_r.object;

    if ( tmp_compare_right_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 466;
        goto try_finally_handler_37;
    }

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 466;
        goto try_finally_handler_37;
    }
    if (tmp_cmp_In_6 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_break_3 = true;
    goto try_finally_handler_start_5;
    branch_no_13:;
    branch_no_12:;
    try_finally_handler_start_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_37:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_18 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_5__value_1.object );
    tmp_or_5__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_18;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_40 != NULL )
    {
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;

        goto try_finally_handler_36;
    }

    // Break if entered via break.
    if ( tmp_break_3 )
    {

    goto loop_end_7;
    }
    goto finally_end_40;
    finally_end_40:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 458;
        goto try_finally_handler_36;
    }
    goto loop_start_7;
    loop_end_7:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_36:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_19 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_7__iter_value.object );
    tmp_for_loop_7__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_7__for_iterator.object );
    tmp_for_loop_7__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_19;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_41 != NULL )
    {
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;

        goto try_finally_handler_35;
    }

    goto finally_end_41;
    finally_end_41:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 456;
        goto try_finally_handler_35;
    }
    goto loop_start_6;
    loop_end_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_35:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_20 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_6__iter_value.object );
    tmp_for_loop_6__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_6__for_iterator.object );
    tmp_for_loop_6__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_20;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_42 != NULL )
    {
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;

        goto frame_exception_exit_1;
    }

    goto finally_end_42;
    finally_end_42:;
    // Tried code
    tmp_cond_value_18 = NULL;
    // Tried code
    tmp_compexpr_left_12 = const_str_plain_args;
    tmp_compexpr_right_12 = var_rd.object;

    if ( tmp_compexpr_right_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 468;
        goto try_finally_handler_44;
    }

    tmp_assign_source_58 = SEQUENCE_CONTAINS( tmp_compexpr_left_12, tmp_compexpr_right_12 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
        goto try_finally_handler_44;
    }
    assert( tmp_and_7__value_1.object == NULL );
    tmp_and_7__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_58 );

    tmp_cond_value_19 = tmp_and_7__value_1.object;

    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
        goto try_finally_handler_44;
    }
    if (tmp_cond_truth_19 == 1)
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_cond_value_18 = NULL;
    // Tried code
    tmp_result = tmp_and_7__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_7__value_1.object );
        tmp_and_7__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_13 = const_str_plain_optargs;
    tmp_compexpr_right_13 = var_rd.object;

    if ( tmp_compexpr_right_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 468;
        goto try_finally_handler_45;
    }

    tmp_cond_value_18 = SEQUENCE_CONTAINS( tmp_compexpr_left_13, tmp_compexpr_right_13 );
    if ( tmp_cond_value_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
        goto try_finally_handler_45;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_45:;
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

        goto try_finally_handler_44;
    }

    goto finally_end_43;
    finally_end_43:;
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_cond_value_18 = tmp_and_7__value_1.object;

    condexpr_end_12:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_44:;
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

        goto try_finally_handler_43;
    }

    goto finally_end_44;
    finally_end_44:;
    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
        goto try_finally_handler_43;
    }
    if (tmp_cond_truth_18 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_subscr_target_21 = var_rd.object;

    if ( tmp_subscr_target_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 469;
        goto try_finally_handler_43;
    }

    tmp_subscr_subscript_21 = const_str_plain_optargs;
    tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_21, tmp_subscr_subscript_21 );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 469;
        goto try_finally_handler_43;
    }
    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_list );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_inst_1 );

        frame_function->f_lineno = 469;
        goto try_finally_handler_43;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 469;
        goto try_finally_handler_43;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_subscr_target_22 = var_rd.object;

    if ( tmp_subscr_target_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 470;
        goto try_finally_handler_43;
    }

    tmp_subscr_subscript_22 = const_str_plain_optargs;
    tmp_binop_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_22, tmp_subscr_subscript_22 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 470;
        goto try_finally_handler_43;
    }
    tmp_binop_right_2 = LIST_COPY( const_list_str_digest_92d8fcae2ad9be01a05895d7e815d3d8_list );
    tmp_ass_subvalue_2 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 470;
        goto try_finally_handler_43;
    }
    tmp_ass_subscribed_2 = var_rd.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 470;
        goto try_finally_handler_43;
    }

    tmp_ass_subscript_2 = const_str_plain_optargs;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 470;
        goto try_finally_handler_43;
    }
    tmp_subscr_target_23 = var_rd.object;

    if ( tmp_subscr_target_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 475;
        goto try_finally_handler_43;
    }

    tmp_subscr_subscript_23 = const_str_plain_optargs_nm;
    tmp_binop_left_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_23, tmp_subscr_subscript_23 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto try_finally_handler_43;
    }
    tmp_binop_right_3 = LIST_COPY( const_list_str_digest_92d8fcae2ad9be01a05895d7e815d3d8_list );
    tmp_ass_subvalue_3 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto try_finally_handler_43;
    }
    tmp_ass_subscribed_3 = var_rd.object;

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 475;
        goto try_finally_handler_43;
    }

    tmp_ass_subscript_3 = const_str_plain_optargs_nm;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto try_finally_handler_43;
    }
    tmp_subscr_target_24 = var_rd.object;

    if ( tmp_subscr_target_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 480;
        goto try_finally_handler_43;
    }

    tmp_subscr_subscript_24 = const_str_plain_optargs_td;
    tmp_binop_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_24, tmp_subscr_subscript_24 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 480;
        goto try_finally_handler_43;
    }
    tmp_binop_right_4 = LIST_COPY( const_list_str_digest_92d8fcae2ad9be01a05895d7e815d3d8_list );
    tmp_ass_subvalue_4 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 480;
        goto try_finally_handler_43;
    }
    tmp_ass_subscribed_4 = var_rd.object;

    if ( tmp_ass_subscribed_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 480;
        goto try_finally_handler_43;
    }

    tmp_ass_subscript_4 = const_str_plain_optargs_td;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 480;
        goto try_finally_handler_43;
    }
    branch_no_15:;
    branch_no_14:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_43:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_21 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_7__value_1.object );
    tmp_and_7__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_21;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_45 != NULL )
    {
        exception_type = exception_keeper_type_45;
        exception_value = exception_keeper_value_45;
        exception_tb = exception_keeper_tb_45;

        goto frame_exception_exit_1;
    }

    goto finally_end_45;
    finally_end_45:;
    tmp_subscr_target_25 = var_rd.object;

    if ( tmp_subscr_target_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 485;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_25 = const_str_plain_docreturn;
    tmp_isinstance_inst_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_25, tmp_subscr_subscript_25 );
    if ( tmp_isinstance_inst_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 485;
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_2 = LOOKUP_BUILTIN( const_str_plain_list );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_inst_2 );

        frame_function->f_lineno = 485;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_inst_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 485;
        goto frame_exception_exit_1;
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
    tmp_called_22 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_stripcomma );

    if (unlikely( tmp_called_22 == NULL ))
    {
        tmp_called_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stripcomma );
    }

    if ( tmp_called_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129956 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }

    tmp_called_23 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_replace );

    if (unlikely( tmp_called_23 == NULL ))
    {
        tmp_called_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_replace );
    }

    if ( tmp_called_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 62213 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_36 = const_str_digest_2440d16610baa62c4946b481a40982f8;
    tmp_call_arg_element_37 = _PyDict_NewPresized( 1 );
    tmp_subscr_target_26 = var_rd.object;

    if ( tmp_subscr_target_26 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_26 = const_str_plain_docreturn;
    tmp_dict_value_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_26, tmp_subscr_subscript_26 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_37 );

        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_docreturn;
    PyDict_SetItem( tmp_call_arg_element_37, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 486;
    tmp_call_arg_element_35 = CALL_FUNCTION_WITH_ARGS2( tmp_called_23, tmp_call_arg_element_36, tmp_call_arg_element_37 );
    Py_DECREF( tmp_call_arg_element_37 );
    if ( tmp_call_arg_element_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 486;
    tmp_ass_subvalue_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_35 );
    Py_DECREF( tmp_call_arg_element_35 );
    if ( tmp_ass_subvalue_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_5 = var_rd.object;

    if ( tmp_ass_subscribed_5 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_5 = const_str_plain_docreturn;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    Py_DECREF( tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }
    branch_no_16:;
    tmp_called_24 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_stripcomma );

    if (unlikely( tmp_called_24 == NULL ))
    {
        tmp_called_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stripcomma );
    }

    if ( tmp_called_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129956 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 487;
        goto frame_exception_exit_1;
    }

    tmp_called_25 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_replace );

    if (unlikely( tmp_called_25 == NULL ))
    {
        tmp_called_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_replace );
    }

    if ( tmp_called_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 62213 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 487;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_39 = const_str_digest_72acb4c80bfcb9544afc0184fa55b171;
    tmp_call_arg_element_40 = _PyDict_NewPresized( 1 );
    tmp_subscr_target_27 = var_rd.object;

    if ( tmp_subscr_target_27 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_40 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_27 = const_str_plain_docsignopt;
    tmp_dict_value_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_27, tmp_subscr_subscript_27 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_40 );

        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_docsignopt;
    PyDict_SetItem( tmp_call_arg_element_40, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    frame_function->f_lineno = 488;
    tmp_call_arg_element_38 = CALL_FUNCTION_WITH_ARGS2( tmp_called_25, tmp_call_arg_element_39, tmp_call_arg_element_40 );
    Py_DECREF( tmp_call_arg_element_40 );
    if ( tmp_call_arg_element_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 487;
    tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS1( tmp_called_24, tmp_call_arg_element_38 );
    Py_DECREF( tmp_call_arg_element_38 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 487;
        goto frame_exception_exit_1;
    }
    assert( var_optargs.object == NULL );
    var_optargs.object = tmp_assign_source_59;

    tmp_compare_left_8 = var_optargs.object;

    tmp_compare_right_8 = const_str_empty;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 490;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_called_26 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_stripcomma );

    if (unlikely( tmp_called_26 == NULL ))
    {
        tmp_called_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stripcomma );
    }

    if ( tmp_called_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129956 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 491;
        goto frame_exception_exit_1;
    }

    tmp_called_27 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_replace );

    if (unlikely( tmp_called_27 == NULL ))
    {
        tmp_called_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_replace );
    }

    if ( tmp_called_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 62213 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 491;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_42 = const_str_digest_b8dc8513ea6a44621ecfd35fbdc9110c;
    tmp_call_arg_element_43 = _PyDict_NewPresized( 1 );
    tmp_subscr_target_28 = var_rd.object;

    if ( tmp_subscr_target_28 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_43 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 491;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_28 = const_str_plain_docsign;
    tmp_dict_value_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_28, tmp_subscr_subscript_28 );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_43 );

        frame_function->f_lineno = 491;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_docsign;
    PyDict_SetItem( tmp_call_arg_element_43, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    frame_function->f_lineno = 491;
    tmp_call_arg_element_41 = CALL_FUNCTION_WITH_ARGS2( tmp_called_27, tmp_call_arg_element_42, tmp_call_arg_element_43 );
    Py_DECREF( tmp_call_arg_element_43 );
    if ( tmp_call_arg_element_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 491;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 491;
    tmp_ass_subvalue_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_26, tmp_call_arg_element_41 );
    Py_DECREF( tmp_call_arg_element_41 );
    if ( tmp_ass_subvalue_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 491;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_6 = var_rd.object;

    if ( tmp_ass_subscribed_6 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 491;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_6 = const_str_plain_docsignature;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    Py_DECREF( tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 491;
        goto frame_exception_exit_1;
    }
    goto branch_end_17;
    branch_no_17:;
    tmp_called_28 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_replace );

    if (unlikely( tmp_called_28 == NULL ))
    {
        tmp_called_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_replace );
    }

    if ( tmp_called_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 62213 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 493;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_44 = const_str_digest_c6ed2021e7dfb461dbb032362c3c5cc1;
    tmp_call_arg_element_45 = _PyDict_NewPresized( 2 );
    tmp_subscr_target_29 = var_rd.object;

    if ( tmp_subscr_target_29 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_45 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 494;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_29 = const_str_plain_docsign;
    tmp_dict_value_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_29, tmp_subscr_subscript_29 );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_45 );

        frame_function->f_lineno = 494;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_docsign;
    PyDict_SetItem( tmp_call_arg_element_45, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    tmp_dict_value_6 = var_optargs.object;

    tmp_dict_key_6 = const_str_plain_docsignopt;
    PyDict_SetItem( tmp_call_arg_element_45, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 495;
    tmp_ass_subvalue_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_28, tmp_call_arg_element_44, tmp_call_arg_element_45 );
    Py_DECREF( tmp_call_arg_element_45 );
    if ( tmp_ass_subvalue_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 495;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_7 = var_rd.object;

    if ( tmp_ass_subscribed_7 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 493;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_7 = const_str_plain_docsignature;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
    Py_DECREF( tmp_ass_subvalue_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 493;
        goto frame_exception_exit_1;
    }
    branch_end_17:;
    tmp_subscr_target_30 = var_rd.object;

    if ( tmp_subscr_target_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 497;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_30 = const_str_plain_docsignature;
    tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_30, tmp_subscr_subscript_30 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 497;
        goto frame_exception_exit_1;
    }
    tmp_called_29 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_replace );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 497;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_46 = const_str_plain__;
    tmp_call_arg_element_47 = const_str_digest_a0e09455d4337213cd42ebadc4d27d3b;
    frame_function->f_lineno = 497;
    tmp_ass_subvalue_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_29, tmp_call_arg_element_46, tmp_call_arg_element_47 );
    Py_DECREF( tmp_called_29 );
    if ( tmp_ass_subvalue_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 497;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_8 = var_rd.object;

    if ( tmp_ass_subscribed_8 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 497;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_8 = const_str_plain_latexdocsignature;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8 );
    Py_DECREF( tmp_ass_subvalue_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 497;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_31 = var_rd.object;

    if ( tmp_subscr_target_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 498;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_31 = const_str_plain_latexdocsignature;
    tmp_source_name_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_31, tmp_subscr_subscript_31 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 498;
        goto frame_exception_exit_1;
    }
    tmp_called_30 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_replace );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 498;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_48 = const_str_chr_44;
    tmp_call_arg_element_49 = const_str_digest_fc763cb31e9938f37737394681228f83;
    frame_function->f_lineno = 498;
    tmp_ass_subvalue_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_30, tmp_call_arg_element_48, tmp_call_arg_element_49 );
    Py_DECREF( tmp_called_30 );
    if ( tmp_ass_subvalue_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 498;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_9 = var_rd.object;

    if ( tmp_ass_subscribed_9 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 498;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_9 = const_str_plain_latexdocsignature;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9 );
    Py_DECREF( tmp_ass_subvalue_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 498;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_10 = PyList_New( 0 );
    tmp_ass_subscribed_10 = var_rd.object;

    if ( tmp_ass_subscribed_10 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 499;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_10 = const_str_plain_docstrsigns;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10 );
    Py_DECREF( tmp_ass_subvalue_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 499;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_11 = PyList_New( 0 );
    tmp_ass_subscribed_11 = var_rd.object;

    if ( tmp_ass_subscribed_11 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 500;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_11 = const_str_plain_latexdocstrsigns;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11 );
    Py_DECREF( tmp_ass_subvalue_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 500;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_10 = const_tuple_a66751b7c76123c024f448eec46707b1_tuple;
    tmp_assign_source_60 = MAKE_ITERATOR( tmp_iter_arg_10 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 501;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_8__for_iterator.object == NULL );
    tmp_for_loop_8__for_iterator.object = tmp_assign_source_60;

    // Tried code
    loop_start_8:;
    tmp_next_source_8 = tmp_for_loop_8__for_iterator.object;

    tmp_assign_source_61 = ITERATOR_NEXT( tmp_next_source_8 );
    if (tmp_assign_source_61 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_8;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 501;
            goto try_finally_handler_46;
        }
    }

    if (tmp_for_loop_8__iter_value.object == NULL)
    {
        tmp_for_loop_8__iter_value.object = tmp_assign_source_61;
    }
    else
    {
        PyObject *old = tmp_for_loop_8__iter_value.object;
        tmp_for_loop_8__iter_value.object = tmp_assign_source_61;
        Py_DECREF( old );
    }
    tmp_assign_source_62 = tmp_for_loop_8__iter_value.object;

    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_62 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_62 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_cond_value_20 = NULL;
    // Tried code
    tmp_compexpr_left_14 = var_k.object;

    tmp_compexpr_right_14 = var_rd.object;

    if ( tmp_compexpr_right_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 502;
        goto try_finally_handler_48;
    }

    tmp_assign_source_63 = SEQUENCE_CONTAINS( tmp_compexpr_left_14, tmp_compexpr_right_14 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 502;
        goto try_finally_handler_48;
    }
    if (tmp_and_8__value_1.object == NULL)
    {
        tmp_and_8__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_63 );
    }
    else
    {
        PyObject *old = tmp_and_8__value_1.object;
        tmp_and_8__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_63 );
        Py_DECREF( old );
    }
    tmp_cond_value_21 = tmp_and_8__value_1.object;

    tmp_cond_truth_21 = CHECK_IF_TRUE( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 502;
        goto try_finally_handler_48;
    }
    if (tmp_cond_truth_21 == 1)
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_cond_value_20 = NULL;
    // Tried code
    tmp_result = tmp_and_8__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_8__value_1.object );
        tmp_and_8__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_32 = var_rd.object;

    if ( tmp_subscr_target_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 502;
        goto try_finally_handler_49;
    }

    tmp_subscr_subscript_32 = var_k.object;

    tmp_isinstance_inst_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_32, tmp_subscr_subscript_32 );
    if ( tmp_isinstance_inst_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 502;
        goto try_finally_handler_49;
    }
    tmp_isinstance_cls_3 = LOOKUP_BUILTIN( const_str_plain_list );
    if ( tmp_isinstance_cls_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_inst_3 );

        frame_function->f_lineno = 502;
        goto try_finally_handler_49;
    }
    tmp_cond_value_20 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    Py_DECREF( tmp_isinstance_inst_3 );
    if ( tmp_cond_value_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 502;
        goto try_finally_handler_49;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_49:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_46 != NULL )
    {
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;

        goto try_finally_handler_48;
    }

    goto finally_end_46;
    finally_end_46:;
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_cond_value_20 = tmp_and_8__value_1.object;

    condexpr_end_13:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_48:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_47 != NULL )
    {
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;

        goto try_finally_handler_47;
    }

    goto finally_end_47;
    finally_end_47:;
    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 502;
        goto try_finally_handler_47;
    }
    if (tmp_cond_truth_20 == 1)
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_subscr_target_33 = var_rd.object;

    if ( tmp_subscr_target_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 503;
        goto try_finally_handler_47;
    }

    tmp_subscr_subscript_33 = const_str_plain_docstrsigns;
    tmp_binop_left_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_33, tmp_subscr_subscript_33 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 503;
        goto try_finally_handler_47;
    }
    tmp_subscr_target_34 = var_rd.object;

    if ( tmp_subscr_target_34 == NULL )
    {
        Py_DECREF( tmp_binop_left_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 503;
        goto try_finally_handler_47;
    }

    tmp_subscr_subscript_34 = var_k.object;

    if ( tmp_subscr_subscript_34 == NULL )
    {
        Py_DECREF( tmp_binop_left_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 503;
        goto try_finally_handler_47;
    }

    tmp_binop_right_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_34, tmp_subscr_subscript_34 );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_5 );

        frame_function->f_lineno = 503;
        goto try_finally_handler_47;
    }
    tmp_ass_subvalue_12 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_ass_subvalue_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 503;
        goto try_finally_handler_47;
    }
    tmp_ass_subscribed_12 = var_rd.object;

    if ( tmp_ass_subscribed_12 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 503;
        goto try_finally_handler_47;
    }

    tmp_ass_subscript_12 = const_str_plain_docstrsigns;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12 );
    Py_DECREF( tmp_ass_subvalue_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 503;
        goto try_finally_handler_47;
    }
    branch_no_18:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_47:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_22 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_8__value_1.object );
    tmp_and_8__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_22;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_48 != NULL )
    {
        exception_type = exception_keeper_type_48;
        exception_value = exception_keeper_value_48;
        exception_tb = exception_keeper_tb_48;

        goto try_finally_handler_46;
    }

    goto finally_end_48;
    finally_end_48:;
    tmp_binop_left_6 = const_str_plain_latex;
    tmp_binop_right_6 = var_k.object;

    if ( tmp_binop_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 504;
        goto try_finally_handler_46;
    }

    tmp_assign_source_64 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 504;
        goto try_finally_handler_46;
    }
    if (var_k.object == NULL)
    {
        var_k.object = tmp_assign_source_64;
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = tmp_assign_source_64;
        Py_DECREF( old );
    }
    // Tried code
    tmp_cond_value_22 = NULL;
    // Tried code
    tmp_compexpr_left_15 = var_k.object;

    tmp_compexpr_right_15 = var_rd.object;

    if ( tmp_compexpr_right_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 505;
        goto try_finally_handler_51;
    }

    tmp_assign_source_65 = SEQUENCE_CONTAINS( tmp_compexpr_left_15, tmp_compexpr_right_15 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 505;
        goto try_finally_handler_51;
    }
    if (tmp_and_9__value_1.object == NULL)
    {
        tmp_and_9__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_65 );
    }
    else
    {
        PyObject *old = tmp_and_9__value_1.object;
        tmp_and_9__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_65 );
        Py_DECREF( old );
    }
    tmp_cond_value_23 = tmp_and_9__value_1.object;

    tmp_cond_truth_23 = CHECK_IF_TRUE( tmp_cond_value_23 );
    if ( tmp_cond_truth_23 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 505;
        goto try_finally_handler_51;
    }
    if (tmp_cond_truth_23 == 1)
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_cond_value_22 = NULL;
    // Tried code
    tmp_result = tmp_and_9__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_9__value_1.object );
        tmp_and_9__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_35 = var_rd.object;

    if ( tmp_subscr_target_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 505;
        goto try_finally_handler_52;
    }

    tmp_subscr_subscript_35 = var_k.object;

    tmp_isinstance_inst_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_35, tmp_subscr_subscript_35 );
    if ( tmp_isinstance_inst_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 505;
        goto try_finally_handler_52;
    }
    tmp_isinstance_cls_4 = LOOKUP_BUILTIN( const_str_plain_list );
    if ( tmp_isinstance_cls_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_inst_4 );

        frame_function->f_lineno = 505;
        goto try_finally_handler_52;
    }
    tmp_cond_value_22 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    Py_DECREF( tmp_isinstance_inst_4 );
    if ( tmp_cond_value_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 505;
        goto try_finally_handler_52;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_52:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_49 != NULL )
    {
        exception_type = exception_keeper_type_49;
        exception_value = exception_keeper_value_49;
        exception_tb = exception_keeper_tb_49;

        goto try_finally_handler_51;
    }

    goto finally_end_49;
    finally_end_49:;
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_cond_value_22 = tmp_and_9__value_1.object;

    condexpr_end_14:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_51:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_50 != NULL )
    {
        exception_type = exception_keeper_type_50;
        exception_value = exception_keeper_value_50;
        exception_tb = exception_keeper_tb_50;

        goto try_finally_handler_50;
    }

    goto finally_end_50;
    finally_end_50:;
    tmp_cond_truth_22 = CHECK_IF_TRUE( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 505;
        goto try_finally_handler_50;
    }
    if (tmp_cond_truth_22 == 1)
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_subscr_target_36 = var_rd.object;

    if ( tmp_subscr_target_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 506;
        goto try_finally_handler_50;
    }

    tmp_subscr_subscript_36 = const_str_plain_latexdocstrsigns;
    tmp_binop_left_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_36, tmp_subscr_subscript_36 );
    if ( tmp_binop_left_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 506;
        goto try_finally_handler_50;
    }
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 1;
    tmp_subscr_target_37 = var_rd.object;

    if ( tmp_subscr_target_37 == NULL )
    {
        Py_DECREF( tmp_binop_left_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 506;
        goto try_finally_handler_50;
    }

    tmp_subscr_subscript_37 = var_k.object;

    if ( tmp_subscr_subscript_37 == NULL )
    {
        Py_DECREF( tmp_binop_left_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 506;
        goto try_finally_handler_50;
    }

    tmp_slice_source_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_37, tmp_subscr_subscript_37 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_10 );

        frame_function->f_lineno = 506;
        goto try_finally_handler_50;
    }
    tmp_binop_right_10 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_binop_right_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_10 );

        frame_function->f_lineno = 506;
        goto try_finally_handler_50;
    }
    tmp_binop_left_9 = BINARY_OPERATION_ADD( tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_left_10 );
    Py_DECREF( tmp_binop_right_10 );
    if ( tmp_binop_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 506;
        goto try_finally_handler_50;
    }
    tmp_binop_right_9 = LIST_COPY( const_list_str_digest_352c2c361762a5fb011e95a778b8a254_list );
    tmp_binop_left_8 = BINARY_OPERATION_ADD( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_left_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 506;
        goto try_finally_handler_50;
    }
    tmp_sliceslicedel_index_lower_2 = 1;
    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
    tmp_subscr_target_38 = var_rd.object;

    if ( tmp_subscr_target_38 == NULL )
    {
        Py_DECREF( tmp_binop_left_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 507;
        goto try_finally_handler_50;
    }

    tmp_subscr_subscript_38 = var_k.object;

    if ( tmp_subscr_subscript_38 == NULL )
    {
        Py_DECREF( tmp_binop_left_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 507;
        goto try_finally_handler_50;
    }

    tmp_slice_source_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_38, tmp_subscr_subscript_38 );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_8 );

        frame_function->f_lineno = 507;
        goto try_finally_handler_50;
    }
    tmp_binop_right_8 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_8 );

        frame_function->f_lineno = 507;
        goto try_finally_handler_50;
    }
    tmp_binop_left_7 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_binop_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 507;
        goto try_finally_handler_50;
    }
    tmp_binop_right_7 = LIST_COPY( const_list_str_digest_f8286407d5c451802306b2d15cf2167e_list );
    tmp_ass_subvalue_13 = BINARY_OPERATION_ADD( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_left_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_ass_subvalue_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 507;
        goto try_finally_handler_50;
    }
    tmp_ass_subscribed_13 = var_rd.object;

    if ( tmp_ass_subscribed_13 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 506;
        goto try_finally_handler_50;
    }

    tmp_ass_subscript_13 = const_str_plain_latexdocstrsigns;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13 );
    Py_DECREF( tmp_ass_subvalue_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 507;
        goto try_finally_handler_50;
    }
    branch_no_19:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_50:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_23 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_9__value_1.object );
    tmp_and_9__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_23;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_51 != NULL )
    {
        exception_type = exception_keeper_type_51;
        exception_value = exception_keeper_value_51;
        exception_tb = exception_keeper_tb_51;

        goto try_finally_handler_46;
    }

    goto finally_end_51;
    finally_end_51:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 501;
        goto try_finally_handler_46;
    }
    goto loop_start_8;
    loop_end_8:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_46:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_24 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_8__iter_value.object );
    tmp_for_loop_8__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_8__for_iterator.object );
    tmp_for_loop_8__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_24;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_52 != NULL )
    {
        exception_type = exception_keeper_type_52;
        exception_value = exception_keeper_value_52;
        exception_tb = exception_keeper_tb_52;

        goto frame_exception_exit_1;
    }

    goto finally_end_52;
    finally_end_52:;
    tmp_compare_left_9 = const_str_plain_args;
    tmp_compare_right_9 = var_rd.object;

    if ( tmp_compare_right_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 509;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    if ( tmp_cmp_NotIn_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 509;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotIn_2 == 0)
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_ass_subvalue_14 = const_str_empty;
    tmp_ass_subscribed_14 = var_rd.object;

    if ( tmp_ass_subscribed_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 510;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_14 = const_str_plain_args;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 510;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_15 = const_str_empty;
    tmp_ass_subscribed_15 = var_rd.object;

    if ( tmp_ass_subscribed_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 511;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_15 = const_str_plain_args_td;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 511;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_16 = const_str_empty;
    tmp_ass_subscribed_16 = var_rd.object;

    if ( tmp_ass_subscribed_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 512;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_16 = const_str_plain_args_nm;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 512;
        goto frame_exception_exit_1;
    }
    branch_no_20:;
    tmp_cond_value_24 = NULL;
    // Tried code
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_source_name_6 = var_rd.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 513;
        goto try_finally_handler_54;
    }

    tmp_called_31 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_get );
    if ( tmp_called_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 513;
        goto try_finally_handler_54;
    }
    tmp_call_arg_element_50 = const_str_plain_args;
    frame_function->f_lineno = 513;
    tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS1( tmp_called_31, tmp_call_arg_element_50 );
    Py_DECREF( tmp_called_31 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 513;
        goto try_finally_handler_54;
    }
    assert( tmp_or_6__value_2.object == NULL );
    tmp_or_6__value_2.object = tmp_assign_source_66;

    tmp_cond_value_25 = tmp_or_6__value_2.object;

    tmp_cond_truth_25 = CHECK_IF_TRUE( tmp_cond_value_25 );
    if ( tmp_cond_truth_25 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 513;
        goto try_finally_handler_54;
    }
    if (tmp_cond_truth_25 == 1)
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_unary_arg_1 = tmp_or_6__value_2.object;

    Py_INCREF( tmp_unary_arg_1 );
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_result = tmp_or_6__value_2.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_6__value_2.object );
        tmp_or_6__value_2.object = NULL;
    }

    assert( tmp_result != false );
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_source_name_7 = var_rd.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 513;
        goto try_finally_handler_57;
    }

    tmp_called_32 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_get );
    if ( tmp_called_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 513;
        goto try_finally_handler_57;
    }
    tmp_call_arg_element_51 = const_str_plain_optargs;
    frame_function->f_lineno = 513;
    tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS1( tmp_called_32, tmp_call_arg_element_51 );
    Py_DECREF( tmp_called_32 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 513;
        goto try_finally_handler_57;
    }
    assert( tmp_or_6__value_1.object == NULL );
    tmp_or_6__value_1.object = tmp_assign_source_67;

    tmp_cond_value_26 = tmp_or_6__value_1.object;

    tmp_cond_truth_26 = CHECK_IF_TRUE( tmp_cond_value_26 );
    if ( tmp_cond_truth_26 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 513;
        goto try_finally_handler_57;
    }
    if (tmp_cond_truth_26 == 1)
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_unary_arg_1 = tmp_or_6__value_1.object;

    Py_INCREF( tmp_unary_arg_1 );
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_result = tmp_or_6__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_6__value_1.object );
        tmp_or_6__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_8 = var_rd.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 513;
        goto try_finally_handler_58;
    }

    tmp_called_33 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_get );
    if ( tmp_called_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 513;
        goto try_finally_handler_58;
    }
    tmp_call_arg_element_52 = const_str_plain_strarglens;
    frame_function->f_lineno = 513;
    tmp_unary_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_33, tmp_call_arg_element_52 );
    Py_DECREF( tmp_called_33 );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 513;
        goto try_finally_handler_58;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_58:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_53 != NULL )
    {
        exception_type = exception_keeper_type_53;
        exception_value = exception_keeper_value_53;
        exception_tb = exception_keeper_tb_53;

        goto try_finally_handler_57;
    }

    goto finally_end_53;
    finally_end_53:;
    condexpr_end_16:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_57:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_54 != NULL )
    {
        exception_type = exception_keeper_type_54;
        exception_value = exception_keeper_value_54;
        exception_tb = exception_keeper_tb_54;

        goto try_finally_handler_56;
    }

    goto finally_end_54;
    finally_end_54:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_56:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_55 != NULL )
    {
        exception_type = exception_keeper_type_55;
        exception_value = exception_keeper_value_55;
        exception_tb = exception_keeper_tb_55;

        goto try_finally_handler_55;
    }

    goto finally_end_55;
    finally_end_55:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_55:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_25 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_6__value_1.object );
    tmp_or_6__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_25;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_56 != NULL )
    {
        exception_type = exception_keeper_type_56;
        exception_value = exception_keeper_value_56;
        exception_tb = exception_keeper_tb_56;

        goto try_finally_handler_54;
    }

    goto finally_end_56;
    finally_end_56:;
    condexpr_end_15:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_54:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_57 != NULL )
    {
        exception_type = exception_keeper_type_57;
        exception_value = exception_keeper_value_57;
        exception_tb = exception_keeper_tb_57;

        goto try_finally_handler_53;
    }

    goto finally_end_57;
    finally_end_57:;
    tmp_cond_value_24 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    Py_DECREF( tmp_unary_arg_1 );
    if ( tmp_cond_value_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 513;
        goto try_finally_handler_53;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_53:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_26 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_6__value_2.object );
    tmp_or_6__value_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_26;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_58 != NULL )
    {
        exception_type = exception_keeper_type_58;
        exception_value = exception_keeper_value_58;
        exception_tb = exception_keeper_tb_58;

        goto frame_exception_exit_1;
    }

    goto finally_end_58;
    finally_end_58:;
    tmp_cond_truth_24 = CHECK_IF_TRUE( tmp_cond_value_24 );
    if ( tmp_cond_truth_24 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 513;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_24 == 1)
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_ass_subvalue_17 = const_str_plain_void;
    tmp_ass_subscribed_17 = var_rd.object;

    if ( tmp_ass_subscribed_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 514;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_17 = const_str_plain_noargs;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 514;
        goto frame_exception_exit_1;
    }
    branch_no_21:;
    tmp_called_34 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_applyrules );

    if (unlikely( tmp_called_34 == NULL ))
    {
        tmp_called_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_applyrules );
    }

    if ( tmp_called_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127020 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 516;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_53 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cb_routine_rules );

    if (unlikely( tmp_call_arg_element_53 == NULL ))
    {
        tmp_call_arg_element_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cb_routine_rules );
    }

    if ( tmp_call_arg_element_53 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129995 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 516;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_54 = var_rd.object;

    if ( tmp_call_arg_element_54 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 516;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 516;
    tmp_assign_source_68 = CALL_FUNCTION_WITH_ARGS2( tmp_called_34, tmp_call_arg_element_53, tmp_call_arg_element_54 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 516;
        goto frame_exception_exit_1;
    }
    if (var_ar.object == NULL)
    {
        var_ar.object = tmp_assign_source_68;
    }
    else
    {
        PyObject *old = var_ar.object;
        var_ar.object = tmp_assign_source_68;
        Py_DECREF( old );
    }
    tmp_subscr_target_39 = var_ar.object;

    tmp_subscr_subscript_39 = const_str_plain_body;
    tmp_ass_subvalue_18 = LOOKUP_SUBSCRIPT( tmp_subscr_target_39, tmp_subscr_subscript_39 );
    if ( tmp_ass_subvalue_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 517;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127059 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 517;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_18 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_callbacks );
    if ( tmp_ass_subscribed_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_18 );

        frame_function->f_lineno = 517;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_40 = var_rd.object;

    if ( tmp_subscr_target_40 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_18 );
        Py_DECREF( tmp_ass_subscribed_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 517;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_40 = const_str_plain_name;
    tmp_ass_subscript_18 = LOOKUP_SUBSCRIPT( tmp_subscr_target_40, tmp_subscr_subscript_40 );
    if ( tmp_ass_subscript_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_18 );
        Py_DECREF( tmp_ass_subscribed_18 );

        frame_function->f_lineno = 517;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18 );
    Py_DECREF( tmp_ass_subscribed_18 );
    Py_DECREF( tmp_ass_subscript_18 );
    Py_DECREF( tmp_ass_subvalue_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 517;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_41 = var_ar.object;

    tmp_subscr_subscript_41 = const_str_plain_need;
    tmp_isinstance_inst_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_41, tmp_subscr_subscript_41 );
    if ( tmp_isinstance_inst_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 518;
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_5 = LOOKUP_BUILTIN( const_str_plain_str );
    if ( tmp_isinstance_cls_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_inst_5 );

        frame_function->f_lineno = 518;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
    Py_DECREF( tmp_isinstance_inst_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 518;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_ass_subvalue_19 = PyList_New( 1 );
    tmp_subscr_target_42 = var_ar.object;

    tmp_subscr_subscript_42 = const_str_plain_need;
    tmp_list_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_42, tmp_subscr_subscript_42 );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_19 );

        frame_function->f_lineno = 519;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_ass_subvalue_19, 0, tmp_list_element_2 );
    tmp_ass_subscribed_19 = var_ar.object;

    tmp_ass_subscript_19 = const_str_plain_need;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19 );
    Py_DECREF( tmp_ass_subvalue_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 519;
        goto frame_exception_exit_1;
    }
    branch_no_22:;
    tmp_compare_left_10 = const_str_plain_need;
    tmp_compare_right_10 = var_rd.object;

    if ( tmp_compare_right_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 521;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    if ( tmp_cmp_In_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 521;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_7 == 1)
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127059 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 522;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_typedefs );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 522;
        goto frame_exception_exit_1;
    }
    tmp_called_35 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_keys );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 522;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 522;
    tmp_iter_arg_11 = CALL_FUNCTION_NO_ARGS( tmp_called_35 );
    Py_DECREF( tmp_called_35 );
    if ( tmp_iter_arg_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 522;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_69 = MAKE_ITERATOR( tmp_iter_arg_11 );
    Py_DECREF( tmp_iter_arg_11 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 522;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_9__for_iterator.object == NULL );
    tmp_for_loop_9__for_iterator.object = tmp_assign_source_69;

    // Tried code
    loop_start_9:;
    tmp_next_source_9 = tmp_for_loop_9__for_iterator.object;

    tmp_assign_source_70 = ITERATOR_NEXT( tmp_next_source_9 );
    if (tmp_assign_source_70 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_9;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 522;
            goto try_finally_handler_59;
        }
    }

    if (tmp_for_loop_9__iter_value.object == NULL)
    {
        tmp_for_loop_9__iter_value.object = tmp_assign_source_70;
    }
    else
    {
        PyObject *old = tmp_for_loop_9__iter_value.object;
        tmp_for_loop_9__iter_value.object = tmp_assign_source_70;
        Py_DECREF( old );
    }
    tmp_assign_source_71 = tmp_for_loop_9__iter_value.object;

    if (var_t.object == NULL)
    {
        var_t.object = INCREASE_REFCOUNT( tmp_assign_source_71 );
    }
    else
    {
        PyObject *old = var_t.object;
        var_t.object = INCREASE_REFCOUNT( tmp_assign_source_71 );
        Py_DECREF( old );
    }
    tmp_compare_left_11 = var_t.object;

    tmp_subscr_target_43 = var_rd.object;

    if ( tmp_subscr_target_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 523;
        goto try_finally_handler_59;
    }

    tmp_subscr_subscript_43 = const_str_plain_need;
    tmp_compare_right_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_43, tmp_subscr_subscript_43 );
    if ( tmp_compare_right_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 523;
        goto try_finally_handler_59;
    }
    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    if ( tmp_cmp_In_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_11 );

        frame_function->f_lineno = 523;
        goto try_finally_handler_59;
    }
    Py_DECREF( tmp_compare_right_11 );
    if (tmp_cmp_In_8 == 1)
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    tmp_subscr_target_44 = var_ar.object;

    if ( tmp_subscr_target_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 524;
        goto try_finally_handler_59;
    }

    tmp_subscr_subscript_44 = const_str_plain_need;
    tmp_source_name_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_44, tmp_subscr_subscript_44 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 524;
        goto try_finally_handler_59;
    }
    tmp_called_36 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_append );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 524;
        goto try_finally_handler_59;
    }
    tmp_call_arg_element_55 = var_t.object;

    frame_function->f_lineno = 524;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_36, tmp_call_arg_element_55 );
    Py_DECREF( tmp_called_36 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 524;
        goto try_finally_handler_59;
    }
    Py_DECREF( tmp_unused );
    branch_no_24:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 522;
        goto try_finally_handler_59;
    }
    goto loop_start_9;
    loop_end_9:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_59:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_27 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_9__iter_value.object );
    tmp_for_loop_9__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_9__for_iterator.object );
    tmp_for_loop_9__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_27;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_59 != NULL )
    {
        exception_type = exception_keeper_type_59;
        exception_value = exception_keeper_value_59;
        exception_tb = exception_keeper_tb_59;

        goto frame_exception_exit_1;
    }

    goto finally_end_59;
    finally_end_59:;
    branch_no_23:;
    tmp_subscr_target_45 = var_ar.object;

    if ( tmp_subscr_target_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_45 = const_str_plain_cbtypedefs;
    tmp_ass_subvalue_20 = LOOKUP_SUBSCRIPT( tmp_subscr_target_45, tmp_subscr_subscript_45 );
    if ( tmp_ass_subvalue_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127059 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_20 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_typedefs_generated );
    if ( tmp_ass_subscribed_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_20 );

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_46 = var_rd.object;

    if ( tmp_subscr_target_46 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_20 );
        Py_DECREF( tmp_ass_subscribed_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_46 = const_str_plain_name;
    tmp_binop_left_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_46, tmp_subscr_subscript_46 );
    if ( tmp_binop_left_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_20 );
        Py_DECREF( tmp_ass_subscribed_20 );

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_11 = const_str_plain__typedef;
    tmp_ass_subscript_20 = BINARY_OPERATION_ADD( tmp_binop_left_11, tmp_binop_right_11 );
    Py_DECREF( tmp_binop_left_11 );
    if ( tmp_ass_subscript_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_20 );
        Py_DECREF( tmp_ass_subscribed_20 );

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20 );
    Py_DECREF( tmp_ass_subscribed_20 );
    Py_DECREF( tmp_ass_subscript_20 );
    Py_DECREF( tmp_ass_subvalue_20 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_47 = var_ar.object;

    if ( tmp_subscr_target_47 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_47 = const_str_plain_need;
    tmp_source_name_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_47, tmp_subscr_subscript_47 );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }
    tmp_called_37 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_called_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_48 = var_rd.object;

    if ( tmp_subscr_target_48 == NULL )
    {
        Py_DECREF( tmp_called_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_48 = const_str_plain_name;
    tmp_binop_left_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_48, tmp_subscr_subscript_48 );
    if ( tmp_binop_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_37 );

        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_12 = const_str_plain__typedef;
    tmp_call_arg_element_56 = BINARY_OPERATION_ADD( tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_left_12 );
    if ( tmp_call_arg_element_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_37 );

        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 527;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_37, tmp_call_arg_element_56 );
    Py_DECREF( tmp_called_37 );
    Py_DECREF( tmp_call_arg_element_56 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_subscr_target_49 = var_ar.object;

    if ( tmp_subscr_target_49 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 528;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_49 = const_str_plain_need;
    tmp_ass_subvalue_21 = LOOKUP_SUBSCRIPT( tmp_subscr_target_49, tmp_subscr_subscript_49 );
    if ( tmp_ass_subvalue_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 528;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cfuncs );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cfuncs );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127059 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 528;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_21 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_needs );
    if ( tmp_ass_subscribed_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_21 );

        frame_function->f_lineno = 528;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_50 = var_rd.object;

    if ( tmp_subscr_target_50 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_21 );
        Py_DECREF( tmp_ass_subscribed_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 528;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_50 = const_str_plain_name;
    tmp_ass_subscript_21 = LOOKUP_SUBSCRIPT( tmp_subscr_target_50, tmp_subscr_subscript_50 );
    if ( tmp_ass_subscript_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_21 );
        Py_DECREF( tmp_ass_subscribed_21 );

        frame_function->f_lineno = 528;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21 );
    Py_DECREF( tmp_ass_subscribed_21 );
    Py_DECREF( tmp_ass_subscript_21 );
    Py_DECREF( tmp_ass_subvalue_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 528;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_22 = _PyDict_NewPresized( 5 );
    tmp_subscr_target_51 = var_ar.object;

    if ( tmp_subscr_target_51 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 530;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_51 = const_str_plain_maxnofargs;
    tmp_dict_value_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_51, tmp_subscr_subscript_51 );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_22 );

        frame_function->f_lineno = 530;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = const_str_plain_maxnofargs;
    PyDict_SetItem( tmp_ass_subvalue_22, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    tmp_subscr_target_52 = var_ar.object;

    if ( tmp_subscr_target_52 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 531;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_52 = const_str_plain_nofoptargs;
    tmp_dict_value_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_52, tmp_subscr_subscript_52 );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_22 );

        frame_function->f_lineno = 531;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = const_str_plain_nofoptargs;
    PyDict_SetItem( tmp_ass_subvalue_22, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    tmp_subscr_target_53 = var_ar.object;

    if ( tmp_subscr_target_53 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 532;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_53 = const_str_plain_docstr;
    tmp_dict_value_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_53, tmp_subscr_subscript_53 );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_22 );

        frame_function->f_lineno = 532;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_9 = const_str_plain_docstr;
    PyDict_SetItem( tmp_ass_subvalue_22, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    tmp_subscr_target_54 = var_ar.object;

    if ( tmp_subscr_target_54 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 533;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_54 = const_str_plain_latexdocstr;
    tmp_dict_value_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_54, tmp_subscr_subscript_54 );
    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_22 );

        frame_function->f_lineno = 533;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_10 = const_str_plain_latexdocstr;
    PyDict_SetItem( tmp_ass_subvalue_22, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    tmp_subscr_target_55 = var_rd.object;

    if ( tmp_subscr_target_55 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 534;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_55 = const_str_plain_argname;
    tmp_dict_value_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_55, tmp_subscr_subscript_55 );
    if ( tmp_dict_value_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_22 );

        frame_function->f_lineno = 534;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_11 = const_str_plain_argname;
    PyDict_SetItem( tmp_ass_subvalue_22, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_value_11 );
    tmp_source_name_16 = var_capi_maps.object;

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129716 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 530;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_22 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_lcb2_map );
    if ( tmp_ass_subscribed_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_22 );

        frame_function->f_lineno = 530;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_56 = var_rd.object;

    if ( tmp_subscr_target_56 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_22 );
        Py_DECREF( tmp_ass_subscribed_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126972 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 530;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_56 = const_str_plain_name;
    tmp_ass_subscript_22 = LOOKUP_SUBSCRIPT( tmp_subscr_target_56, tmp_subscr_subscript_56 );
    if ( tmp_ass_subscript_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_22 );
        Py_DECREF( tmp_ass_subscribed_22 );

        frame_function->f_lineno = 530;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22 );
    Py_DECREF( tmp_ass_subscribed_22 );
    Py_DECREF( tmp_ass_subscript_22 );
    Py_DECREF( tmp_ass_subvalue_22 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 534;
        goto frame_exception_exit_1;
    }
    tmp_called_38 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_outmess );

    if (unlikely( tmp_called_38 == NULL ))
    {
        tmp_called_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outmess );
    }

    if ( tmp_called_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125154 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_13 = const_str_digest_ae324ca3874dab33ef4c73d6801ee448;
    tmp_subscr_target_57 = var_ar.object;

    if ( tmp_subscr_target_57 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_57 = const_str_plain_docstrshort;
    tmp_binop_right_13 = LOOKUP_SUBSCRIPT( tmp_subscr_target_57, tmp_subscr_subscript_57 );
    if ( tmp_binop_right_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_57 = BINARY_OPERATION_REMAINDER( tmp_binop_left_13, tmp_binop_right_13 );
    Py_DECREF( tmp_binop_right_13 );
    if ( tmp_call_arg_element_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 536;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_38, tmp_call_arg_element_57 );
    Py_DECREF( tmp_call_arg_element_57 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 536;
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
    if ((var_capi_maps.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_capi_maps,
            var_capi_maps.object
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
    if ((var_depargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_depargs,
            var_depargs.object
        );

    }
    if ((var_var.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_var,
            var_var.object
        );

    }
    if ((var_vrd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vrd,
            var_vrd.object
        );

    }
    if ((var_rd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rd,
            var_rd.object
        );

    }
    if ((var_r.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_r,
            var_r.object
        );

    }
    if ((var_ar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ar,
            var_ar.object
        );

    }
    if ((var_savevrd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_savevrd,
            var_savevrd.object
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
    if ((var_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a,
            var_a.object
        );

    }
    if ((var_optargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_optargs,
            var_optargs.object
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
    if ((var_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t,
            var_t.object
        );

    }
    if ((par_rout.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rout,
            par_rout.object
        );

    }
    if ((par_um.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_um,
            par_um.object
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
static PyObject *fparse_function_2_buildcallback_of_module_numpy$f2py$cb_rules( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_rout = NULL;
    PyObject *_python_par_um = NULL;
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
                PyErr_Format( PyExc_TypeError, "buildcallback() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_rout == key )
            {
                assert( _python_par_rout == NULL );
                _python_par_rout = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_um == key )
            {
                assert( _python_par_um == NULL );
                _python_par_um = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rout, key ) == 1 )
            {
                assert( _python_par_rout == NULL );
                _python_par_rout = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_um, key ) == 1 )
            {
                assert( _python_par_um == NULL );
                _python_par_um = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "buildcallback() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_rout != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_rout = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_rout == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_rout = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_um != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_um = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_um == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_um = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_rout == NULL || _python_par_um == NULL ))
    {
        PyObject *values[] = { _python_par_rout, _python_par_um };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_buildcallback_of_module_numpy$f2py$cb_rules( self, _python_par_rout, _python_par_um );

error_exit:;

    Py_XDECREF( _python_par_rout );
    Py_XDECREF( _python_par_um );

    return NULL;
}

static PyObject *dparse_function_2_buildcallback_of_module_numpy$f2py$cb_rules( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2_buildcallback_of_module_numpy$f2py$cb_rules( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_buildcallback_of_module_numpy$f2py$cb_rules( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_buildcallbacks_of_module_numpy$f2py$cb_rules(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_buildcallbacks_of_module_numpy$f2py$cb_rules,
        dparse_function_1_buildcallbacks_of_module_numpy$f2py$cb_rules,
        const_str_plain_buildcallbacks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6eed8581d2e2c74400dcaece83a45545,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$cb_rules,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_buildcallback_of_module_numpy$f2py$cb_rules(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_buildcallback_of_module_numpy$f2py$cb_rules,
        dparse_function_2_buildcallback_of_module_numpy$f2py$cb_rules,
        const_str_plain_buildcallback,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_19753f3eb0544da612c0f65bb38f2f3e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$cb_rules,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$f2py$cb_rules =
{
    PyModuleDef_HEAD_INIT,
    "numpy.f2py.cb_rules",   /* m_name */
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

MOD_INIT_DECL( numpy$f2py$cb_rules )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$f2py$cb_rules );
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

    // puts( "in initnumpy$f2py$cb_rules" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$f2py$cb_rules = Py_InitModule4(
        "numpy.f2py.cb_rules",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$f2py$cb_rules = PyModule_Create( &mdef_numpy$f2py$cb_rules );
#endif

    moduledict_numpy$f2py$cb_rules = (PyDictObject *)((PyModuleObject *)module_numpy$f2py$cb_rules)->md_dict;

    assertObject( module_numpy$f2py$cb_rules );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_0508b583833a67b1623afbc974b836a3, module_numpy$f2py$cb_rules );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$f2py$cb_rules );

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
    PyObject *tmp_call_arg_element_56;
    PyObject *tmp_call_arg_element_57;
    PyObject *tmp_call_arg_element_58;
    PyObject *tmp_call_arg_element_59;
    PyObject *tmp_call_arg_element_60;
    PyObject *tmp_call_arg_element_61;
    PyObject *tmp_call_arg_element_62;
    PyObject *tmp_call_arg_element_63;
    PyObject *tmp_call_arg_element_64;
    PyObject *tmp_call_arg_element_65;
    PyObject *tmp_call_arg_element_66;
    PyObject *tmp_call_arg_element_67;
    PyObject *tmp_call_arg_element_68;
    PyObject *tmp_call_arg_element_69;
    PyObject *tmp_call_arg_element_70;
    PyObject *tmp_call_arg_element_71;
    PyObject *tmp_call_arg_element_72;
    PyObject *tmp_call_arg_element_73;
    PyObject *tmp_call_arg_element_74;
    PyObject *tmp_call_arg_element_75;
    PyObject *tmp_call_arg_element_76;
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
    PyObject *tmp_dict_key_32;
    PyObject *tmp_dict_key_33;
    PyObject *tmp_dict_key_34;
    PyObject *tmp_dict_key_35;
    PyObject *tmp_dict_key_36;
    PyObject *tmp_dict_key_37;
    PyObject *tmp_dict_key_38;
    PyObject *tmp_dict_key_39;
    PyObject *tmp_dict_key_40;
    PyObject *tmp_dict_key_41;
    PyObject *tmp_dict_key_42;
    PyObject *tmp_dict_key_43;
    PyObject *tmp_dict_key_44;
    PyObject *tmp_dict_key_45;
    PyObject *tmp_dict_key_46;
    PyObject *tmp_dict_key_47;
    PyObject *tmp_dict_key_48;
    PyObject *tmp_dict_key_49;
    PyObject *tmp_dict_key_50;
    PyObject *tmp_dict_key_51;
    PyObject *tmp_dict_key_52;
    PyObject *tmp_dict_key_53;
    PyObject *tmp_dict_key_54;
    PyObject *tmp_dict_key_55;
    PyObject *tmp_dict_key_56;
    PyObject *tmp_dict_key_57;
    PyObject *tmp_dict_key_58;
    PyObject *tmp_dict_key_59;
    PyObject *tmp_dict_key_60;
    PyObject *tmp_dict_key_61;
    PyObject *tmp_dict_key_62;
    PyObject *tmp_dict_key_63;
    PyObject *tmp_dict_key_64;
    PyObject *tmp_dict_key_65;
    PyObject *tmp_dict_key_66;
    PyObject *tmp_dict_key_67;
    PyObject *tmp_dict_key_68;
    PyObject *tmp_dict_key_69;
    PyObject *tmp_dict_key_70;
    PyObject *tmp_dict_key_71;
    PyObject *tmp_dict_key_72;
    PyObject *tmp_dict_key_73;
    PyObject *tmp_dict_key_74;
    PyObject *tmp_dict_key_75;
    PyObject *tmp_dict_key_76;
    PyObject *tmp_dict_key_77;
    PyObject *tmp_dict_key_78;
    PyObject *tmp_dict_key_79;
    PyObject *tmp_dict_key_80;
    PyObject *tmp_dict_key_81;
    PyObject *tmp_dict_key_82;
    PyObject *tmp_dict_key_83;
    PyObject *tmp_dict_key_84;
    PyObject *tmp_dict_key_85;
    PyObject *tmp_dict_key_86;
    PyObject *tmp_dict_key_87;
    PyObject *tmp_dict_key_88;
    PyObject *tmp_dict_key_89;
    PyObject *tmp_dict_key_90;
    PyObject *tmp_dict_key_91;
    PyObject *tmp_dict_key_92;
    PyObject *tmp_dict_key_93;
    PyObject *tmp_dict_key_94;
    PyObject *tmp_dict_key_95;
    PyObject *tmp_dict_key_96;
    PyObject *tmp_dict_key_97;
    PyObject *tmp_dict_key_98;
    PyObject *tmp_dict_key_99;
    PyObject *tmp_dict_key_100;
    PyObject *tmp_dict_key_101;
    PyObject *tmp_dict_key_102;
    PyObject *tmp_dict_key_103;
    PyObject *tmp_dict_key_104;
    PyObject *tmp_dict_key_105;
    PyObject *tmp_dict_key_106;
    PyObject *tmp_dict_key_107;
    PyObject *tmp_dict_key_108;
    PyObject *tmp_dict_key_109;
    PyObject *tmp_dict_key_110;
    PyObject *tmp_dict_key_111;
    PyObject *tmp_dict_key_112;
    PyObject *tmp_dict_key_113;
    PyObject *tmp_dict_key_114;
    PyObject *tmp_dict_key_115;
    PyObject *tmp_dict_key_116;
    PyObject *tmp_dict_key_117;
    PyObject *tmp_dict_key_118;
    PyObject *tmp_dict_key_119;
    PyObject *tmp_dict_key_120;
    PyObject *tmp_dict_key_121;
    PyObject *tmp_dict_key_122;
    PyObject *tmp_dict_key_123;
    PyObject *tmp_dict_key_124;
    PyObject *tmp_dict_key_125;
    PyObject *tmp_dict_key_126;
    PyObject *tmp_dict_key_127;
    PyObject *tmp_dict_key_128;
    PyObject *tmp_dict_key_129;
    PyObject *tmp_dict_key_130;
    PyObject *tmp_dict_key_131;
    PyObject *tmp_dict_key_132;
    PyObject *tmp_dict_key_133;
    PyObject *tmp_dict_key_134;
    PyObject *tmp_dict_key_135;
    PyObject *tmp_dict_key_136;
    PyObject *tmp_dict_key_137;
    PyObject *tmp_dict_key_138;
    PyObject *tmp_dict_key_139;
    PyObject *tmp_dict_key_140;
    PyObject *tmp_dict_key_141;
    PyObject *tmp_dict_key_142;
    PyObject *tmp_dict_key_143;
    PyObject *tmp_dict_key_144;
    PyObject *tmp_dict_key_145;
    PyObject *tmp_dict_key_146;
    PyObject *tmp_dict_key_147;
    PyObject *tmp_dict_key_148;
    PyObject *tmp_dict_key_149;
    PyObject *tmp_dict_key_150;
    PyObject *tmp_dict_key_151;
    PyObject *tmp_dict_key_152;
    PyObject *tmp_dict_key_153;
    PyObject *tmp_dict_key_154;
    PyObject *tmp_dict_key_155;
    PyObject *tmp_dict_key_156;
    PyObject *tmp_dict_key_157;
    PyObject *tmp_dict_key_158;
    PyObject *tmp_dict_key_159;
    PyObject *tmp_dict_key_160;
    PyObject *tmp_dict_key_161;
    PyObject *tmp_dict_key_162;
    PyObject *tmp_dict_key_163;
    PyObject *tmp_dict_key_164;
    PyObject *tmp_dict_key_165;
    PyObject *tmp_dict_key_166;
    PyObject *tmp_dict_key_167;
    PyObject *tmp_dict_key_168;
    PyObject *tmp_dict_key_169;
    PyObject *tmp_dict_key_170;
    PyObject *tmp_dict_key_171;
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
    PyObject *tmp_dict_value_32;
    PyObject *tmp_dict_value_33;
    PyObject *tmp_dict_value_34;
    PyObject *tmp_dict_value_35;
    PyObject *tmp_dict_value_36;
    PyObject *tmp_dict_value_37;
    PyObject *tmp_dict_value_38;
    PyObject *tmp_dict_value_39;
    PyObject *tmp_dict_value_40;
    PyObject *tmp_dict_value_41;
    PyObject *tmp_dict_value_42;
    PyObject *tmp_dict_value_43;
    PyObject *tmp_dict_value_44;
    PyObject *tmp_dict_value_45;
    PyObject *tmp_dict_value_46;
    PyObject *tmp_dict_value_47;
    PyObject *tmp_dict_value_48;
    PyObject *tmp_dict_value_49;
    PyObject *tmp_dict_value_50;
    PyObject *tmp_dict_value_51;
    PyObject *tmp_dict_value_52;
    PyObject *tmp_dict_value_53;
    PyObject *tmp_dict_value_54;
    PyObject *tmp_dict_value_55;
    PyObject *tmp_dict_value_56;
    PyObject *tmp_dict_value_57;
    PyObject *tmp_dict_value_58;
    PyObject *tmp_dict_value_59;
    PyObject *tmp_dict_value_60;
    PyObject *tmp_dict_value_61;
    PyObject *tmp_dict_value_62;
    PyObject *tmp_dict_value_63;
    PyObject *tmp_dict_value_64;
    PyObject *tmp_dict_value_65;
    PyObject *tmp_dict_value_66;
    PyObject *tmp_dict_value_67;
    PyObject *tmp_dict_value_68;
    PyObject *tmp_dict_value_69;
    PyObject *tmp_dict_value_70;
    PyObject *tmp_dict_value_71;
    PyObject *tmp_dict_value_72;
    PyObject *tmp_dict_value_73;
    PyObject *tmp_dict_value_74;
    PyObject *tmp_dict_value_75;
    PyObject *tmp_dict_value_76;
    PyObject *tmp_dict_value_77;
    PyObject *tmp_dict_value_78;
    PyObject *tmp_dict_value_79;
    PyObject *tmp_dict_value_80;
    PyObject *tmp_dict_value_81;
    PyObject *tmp_dict_value_82;
    PyObject *tmp_dict_value_83;
    PyObject *tmp_dict_value_84;
    PyObject *tmp_dict_value_85;
    PyObject *tmp_dict_value_86;
    PyObject *tmp_dict_value_87;
    PyObject *tmp_dict_value_88;
    PyObject *tmp_dict_value_89;
    PyObject *tmp_dict_value_90;
    PyObject *tmp_dict_value_91;
    PyObject *tmp_dict_value_92;
    PyObject *tmp_dict_value_93;
    PyObject *tmp_dict_value_94;
    PyObject *tmp_dict_value_95;
    PyObject *tmp_dict_value_96;
    PyObject *tmp_dict_value_97;
    PyObject *tmp_dict_value_98;
    PyObject *tmp_dict_value_99;
    PyObject *tmp_dict_value_100;
    PyObject *tmp_dict_value_101;
    PyObject *tmp_dict_value_102;
    PyObject *tmp_dict_value_103;
    PyObject *tmp_dict_value_104;
    PyObject *tmp_dict_value_105;
    PyObject *tmp_dict_value_106;
    PyObject *tmp_dict_value_107;
    PyObject *tmp_dict_value_108;
    PyObject *tmp_dict_value_109;
    PyObject *tmp_dict_value_110;
    PyObject *tmp_dict_value_111;
    PyObject *tmp_dict_value_112;
    PyObject *tmp_dict_value_113;
    PyObject *tmp_dict_value_114;
    PyObject *tmp_dict_value_115;
    PyObject *tmp_dict_value_116;
    PyObject *tmp_dict_value_117;
    PyObject *tmp_dict_value_118;
    PyObject *tmp_dict_value_119;
    PyObject *tmp_dict_value_120;
    PyObject *tmp_dict_value_121;
    PyObject *tmp_dict_value_122;
    PyObject *tmp_dict_value_123;
    PyObject *tmp_dict_value_124;
    PyObject *tmp_dict_value_125;
    PyObject *tmp_dict_value_126;
    PyObject *tmp_dict_value_127;
    PyObject *tmp_dict_value_128;
    PyObject *tmp_dict_value_129;
    PyObject *tmp_dict_value_130;
    PyObject *tmp_dict_value_131;
    PyObject *tmp_dict_value_132;
    PyObject *tmp_dict_value_133;
    PyObject *tmp_dict_value_134;
    PyObject *tmp_dict_value_135;
    PyObject *tmp_dict_value_136;
    PyObject *tmp_dict_value_137;
    PyObject *tmp_dict_value_138;
    PyObject *tmp_dict_value_139;
    PyObject *tmp_dict_value_140;
    PyObject *tmp_dict_value_141;
    PyObject *tmp_dict_value_142;
    PyObject *tmp_dict_value_143;
    PyObject *tmp_dict_value_144;
    PyObject *tmp_dict_value_145;
    PyObject *tmp_dict_value_146;
    PyObject *tmp_dict_value_147;
    PyObject *tmp_dict_value_148;
    PyObject *tmp_dict_value_149;
    PyObject *tmp_dict_value_150;
    PyObject *tmp_dict_value_151;
    PyObject *tmp_dict_value_152;
    PyObject *tmp_dict_value_153;
    PyObject *tmp_dict_value_154;
    PyObject *tmp_dict_value_155;
    PyObject *tmp_dict_value_156;
    PyObject *tmp_dict_value_157;
    PyObject *tmp_dict_value_158;
    PyObject *tmp_dict_value_159;
    PyObject *tmp_dict_value_160;
    PyObject *tmp_dict_value_161;
    PyObject *tmp_dict_value_162;
    PyObject *tmp_dict_value_163;
    PyObject *tmp_dict_value_164;
    PyObject *tmp_dict_value_165;
    PyObject *tmp_dict_value_166;
    PyObject *tmp_dict_value_167;
    PyObject *tmp_dict_value_168;
    PyObject *tmp_dict_value_169;
    PyObject *tmp_dict_value_170;
    PyObject *tmp_dict_value_171;
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
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_list_element_4;
    PyObject *tmp_list_element_5;
    PyObject *tmp_list_element_6;
    PyObject *tmp_list_element_7;
    PyObject *tmp_list_element_8;
    PyObject *tmp_list_element_9;
    PyObject *tmp_list_element_10;
    PyObject *tmp_list_element_11;
    PyObject *tmp_list_element_12;
    PyObject *tmp_list_element_13;
    PyObject *tmp_list_element_14;
    PyObject *tmp_list_element_15;
    PyObject *tmp_list_element_16;
    PyObject *tmp_list_element_17;
    PyObject *tmp_list_element_18;
    PyObject *tmp_list_element_19;
    PyObject *tmp_list_element_20;
    PyObject *tmp_list_element_21;
    PyObject *tmp_list_element_22;
    PyObject *tmp_list_element_23;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_star_imported_1;

    // Module code.
    tmp_assign_source_1 = const_str_digest_944d30854f792479dcddb9de61a1979c;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_2fa94da6f6dac38a31cee8b080ffe216;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_3a445ca7774d6dcb0a7300adc2ca1828, module_numpy$f2py$cb_rules );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$f2py$cb_rules)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$f2py$cb_rules)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$f2py$cb_rules)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$f2py$cb_rules)->md_dict;
    frame_module->f_lineno = 18;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_pprint, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_pprint, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$f2py$cb_rules)->md_dict;
    frame_module->f_lineno = 19;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$f2py$cb_rules)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_empty, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain___version___tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain___version__ );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$f2py$cb_rules)->md_dict;
    frame_module->f_lineno = 22;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$f2py$cb_rules, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$f2py$cb_rules)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_empty, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_cfuncs_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_cfuncs );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cfuncs, tmp_assign_source_9 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain___version__ );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___version__ );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 23186 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_f2py_version, tmp_assign_source_10 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_stderr );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_write );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_errmess, tmp_assign_source_11 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_stdout );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_write );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_outmess, tmp_assign_source_12 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_pprint );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pprint );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124010 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_pprint );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_show, tmp_assign_source_13 );
    tmp_assign_source_14 = DEEP_COPY( const_dict_36d937bcf0293dc5d41436b25be64bbe );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cb_routine_rules, tmp_assign_source_14 );
    tmp_assign_source_15 = PyList_New( 6 );
    tmp_list_element_1 = _PyDict_NewPresized( 31 );
    tmp_dict_value_1 = PyDict_Copy( const_dict_a8e1c985afd1e244c02326c9a3bacda3 );
    tmp_dict_key_1 = const_str_plain_separatorsfor;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_value_2 = const_str_digest_40515d2f72587c8ab3dde947df85ba29;
    tmp_dict_key_2 = const_str_plain_decl;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = const_str_digest_f799e499bbf79ca500ba3d987fa42361;
    tmp_dict_key_3 = const_str_plain_pyobjfrom;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = const_str_digest_81dd5881d0e387c3fbe39fef2c0ad42a;
    tmp_dict_key_4 = const_str_plain_frompyobj;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = PyList_New( 0 );
    tmp_dict_key_5 = const_str_plain_args;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    tmp_dict_value_6 = const_str_empty;
    tmp_dict_key_6 = const_str_plain_optargs;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = const_str_empty;
    tmp_dict_key_7 = const_str_plain_return;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = const_str_empty;
    tmp_dict_key_8 = const_str_plain_strarglens;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_value_9 = const_str_digest_b3f6b0dfc1e5717ba7333debe235669f;
    tmp_dict_key_9 = const_str_plain_freemem;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_value_10 = PyList_New( 0 );
    tmp_dict_key_10 = const_str_plain_args_td;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    tmp_dict_value_11 = const_str_empty;
    tmp_dict_key_11 = const_str_plain_optargs_td;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dict_value_12 = const_str_empty;
    tmp_dict_key_12 = const_str_plain_strarglens_td;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_12, tmp_dict_value_12 );
    tmp_dict_value_13 = PyList_New( 0 );
    tmp_dict_key_13 = const_str_plain_args_nm;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_13, tmp_dict_value_13 );
    Py_DECREF( tmp_dict_value_13 );
    tmp_dict_value_14 = const_str_empty;
    tmp_dict_key_14 = const_str_plain_optargs_nm;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_14, tmp_dict_value_14 );
    tmp_dict_value_15 = const_str_empty;
    tmp_dict_key_15 = const_str_plain_strarglens_nm;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_15, tmp_dict_value_15 );
    tmp_dict_value_16 = const_str_empty;
    tmp_dict_key_16 = const_str_plain_noargs;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_16, tmp_dict_value_16 );
    tmp_dict_value_17 = const_str_digest_1c26d840c47e86d454a8df985648ca3e;
    tmp_dict_key_17 = const_str_plain_setdims;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_17, tmp_dict_value_17 );
    tmp_dict_value_18 = const_str_empty;
    tmp_dict_key_18 = const_str_plain_docstrsigns;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_18, tmp_dict_value_18 );
    tmp_dict_value_19 = const_str_empty;
    tmp_dict_key_19 = const_str_plain_latexdocstrsigns;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_19, tmp_dict_value_19 );
    tmp_dict_value_20 = const_str_digest_ab5c3dc8d53500e64b9825bf347c0f9d;
    tmp_dict_key_20 = const_str_plain_docstrreq;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_20, tmp_dict_value_20 );
    tmp_dict_value_21 = const_str_digest_e394761ad47752cb76a3adc133c2d55a;
    tmp_dict_key_21 = const_str_plain_docstropt;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_21, tmp_dict_value_21 );
    tmp_dict_value_22 = const_str_digest_309a08e781b97044dfb281118420278e;
    tmp_dict_key_22 = const_str_plain_docstrout;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_22, tmp_dict_value_22 );
    tmp_dict_value_23 = const_str_digest_88534ba6b7dab6f2d74d076127d9c916;
    tmp_dict_key_23 = const_str_plain_docstrcbs;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_23, tmp_dict_value_23 );
    tmp_dict_value_24 = const_str_empty;
    tmp_dict_key_24 = const_str_plain_docreturn;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_24, tmp_dict_value_24 );
    tmp_dict_value_25 = const_str_empty;
    tmp_dict_key_25 = const_str_plain_docsign;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_25, tmp_dict_value_25 );
    tmp_dict_value_26 = const_str_empty;
    tmp_dict_key_26 = const_str_plain_docsignopt;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_26, tmp_dict_value_26 );
    tmp_dict_value_27 = const_str_digest_b6844caa183c5fab60a573048a09c0ad;
    tmp_dict_key_27 = const_str_plain_latexdocstrreq;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_27, tmp_dict_value_27 );
    tmp_dict_value_28 = const_str_digest_317310e006d319ad28824cb9258c4565;
    tmp_dict_key_28 = const_str_plain_latexdocstropt;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_28, tmp_dict_value_28 );
    tmp_dict_value_29 = const_str_digest_6e0991fa019a9e09495ce3818d3272df;
    tmp_dict_key_29 = const_str_plain_latexdocstrout;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_29, tmp_dict_value_29 );
    tmp_dict_value_30 = const_str_digest_a8dd00e8789d337653fd72b5c50207f2;
    tmp_dict_key_30 = const_str_plain_latexdocstrcbs;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_30, tmp_dict_value_30 );
    tmp_dict_value_31 = _PyDict_NewPresized( 2 );
    tmp_dict_value_32 = const_str_digest_2fea6faaece8b13aba5205180919cad4;
    tmp_dict_key_32 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_hasnote );

    if (unlikely( tmp_dict_key_32 == NULL ))
    {
        tmp_dict_key_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hasnote );
    }

    if ( tmp_dict_key_32 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125485 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dict_value_31, tmp_dict_key_32, tmp_dict_value_32 );
    tmp_dict_value_33 = const_str_empty;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_not );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_not );
    }

    if ( tmp_called_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126216 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_hasnote );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hasnote );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125485 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 171;
    tmp_dict_key_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_dict_key_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_31 );

        frame_module->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_31, tmp_dict_key_33, tmp_dict_value_33 );
    Py_DECREF( tmp_dict_key_33 );
    tmp_dict_key_31 = const_str_plain_routnote;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_31, tmp_dict_value_31 );
    Py_DECREF( tmp_dict_value_31 );
    PyList_SET_ITEM( tmp_assign_source_15, 0, tmp_list_element_1 );
    tmp_list_element_1 = _PyDict_NewPresized( 5 );
    tmp_dict_value_34 = const_str_digest_2b616fd1fd0831aa40d721313c3500f1;
    tmp_dict_key_34 = const_str_plain_decl;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_34, tmp_dict_value_34 );
    tmp_dict_value_35 = PyList_New( 3 );
    tmp_list_element_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_36 = const_str_digest_4750d0cf21d25e54d406a8637a42af0d;
    tmp_dict_key_36 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_36 == NULL ))
    {
        tmp_dict_key_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_36 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_35 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 174;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_2, tmp_dict_key_36, tmp_dict_value_36 );
    PyList_SET_ITEM( tmp_dict_value_35, 0, tmp_list_element_2 );
    tmp_list_element_2 = const_str_digest_67f58f95edee22bb931970e9bc865738;
    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_dict_value_35, 1, tmp_list_element_2 );
    tmp_list_element_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_37 = const_str_digest_937868f6f61fc68aa640589ac3780318;
    tmp_dict_key_37 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_37 == NULL ))
    {
        tmp_dict_key_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_37 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_35 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 176;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_2, tmp_dict_key_37, tmp_dict_value_37 );
    PyList_SET_ITEM( tmp_dict_value_35, 2, tmp_list_element_2 );
    tmp_dict_key_35 = const_str_plain_frompyobj;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_35, tmp_dict_value_35 );
    Py_DECREF( tmp_dict_value_35 );
    tmp_dict_value_38 = PyList_New( 3 );
    tmp_list_element_3 = const_str_digest_aef332a279fc26992d9b07f03b37a7b7;
    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_dict_value_38, 0, tmp_list_element_3 );
    tmp_list_element_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_39 = const_str_plain_CFUNCSMESS;
    tmp_dict_key_39 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_39 == NULL ))
    {
        tmp_dict_key_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_39 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_38 );
        Py_DECREF( tmp_list_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 178;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_3, tmp_dict_key_39, tmp_dict_value_39 );
    PyList_SET_ITEM( tmp_dict_value_38, 1, tmp_list_element_3 );
    tmp_list_element_3 = const_str_plain_GETSCALARFROMPYTUPLE;
    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_dict_value_38, 2, tmp_list_element_3 );
    tmp_dict_key_38 = const_str_plain_need;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_38, tmp_dict_value_38 );
    Py_DECREF( tmp_dict_value_38 );
    tmp_dict_value_40 = const_str_digest_cd5a84a49021274f46006e53a3b4b5de;
    tmp_dict_key_40 = const_str_plain_return;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_40, tmp_dict_value_40 );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isfunction );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfunction );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 51248 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_not );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_not );
    }

    if ( tmp_called_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126216 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isstringfunction );

    if (unlikely( tmp_call_arg_element_4 == NULL ))
    {
        tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isstringfunction );
    }

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126171 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 180;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 180;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );

        frame_module->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_not );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_not );
    }

    if ( tmp_called_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126216 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_iscomplexfunction );

    if (unlikely( tmp_call_arg_element_6 == NULL ))
    {
        tmp_call_arg_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplexfunction );
    }

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125115 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 180;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 180;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_6 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_module->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 180;
    tmp_dict_value_41 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_dict_value_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );

        frame_module->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_41 = const_str_plain__check;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_41, tmp_dict_value_41 );
    Py_DECREF( tmp_dict_value_41 );
    PyList_SET_ITEM( tmp_assign_source_15, 1, tmp_list_element_1 );
    tmp_list_element_1 = _PyDict_NewPresized( 8 );
    tmp_dict_value_42 = _PyDict_NewPresized( 1 );
    tmp_dict_value_43 = const_str_digest_df5932485e8c0431603301c855c20f7c;
    tmp_dict_key_43 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_43 == NULL ))
    {
        tmp_dict_key_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_43 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_42 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 183;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dict_value_42, tmp_dict_key_43, tmp_dict_value_43 );
    tmp_dict_key_42 = const_str_plain_pyobjfrom;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_42, tmp_dict_value_42 );
    Py_DECREF( tmp_dict_value_42 );
    tmp_dict_value_44 = const_str_digest_c5a9692f8b837bdea0e70ac30c921b22;
    tmp_dict_key_44 = const_str_plain_args;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_44, tmp_dict_value_44 );
    tmp_dict_value_45 = const_str_digest_15652ce230749b0ed0d8e32d08644a44;
    tmp_dict_key_45 = const_str_plain_args_nm;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_45, tmp_dict_value_45 );
    tmp_dict_value_46 = const_str_digest_0d35d4083ef87bdf872b899ba6ac04e9;
    tmp_dict_key_46 = const_str_plain_args_td;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_46, tmp_dict_value_46 );
    tmp_dict_value_47 = PyList_New( 3 );
    tmp_list_element_4 = _PyDict_NewPresized( 1 );
    tmp_dict_value_48 = const_str_digest_c4a0227b69a010e183540b48dccc7cb7;
    tmp_dict_key_48 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_48 == NULL ))
    {
        tmp_dict_key_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_48 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_47 );
        Py_DECREF( tmp_list_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_4, tmp_dict_key_48, tmp_dict_value_48 );
    PyList_SET_ITEM( tmp_dict_value_47, 0, tmp_list_element_4 );
    tmp_list_element_4 = const_str_digest_5a506bd01a3ab8ed5f697d03e5d21dfe;
    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_dict_value_47, 1, tmp_list_element_4 );
    tmp_list_element_4 = _PyDict_NewPresized( 1 );
    tmp_dict_value_49 = const_str_digest_0a886b39391446543d4ea4cea70f3432;
    tmp_dict_key_49 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_49 == NULL ))
    {
        tmp_dict_key_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_49 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_47 );
        Py_DECREF( tmp_list_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_4, tmp_dict_key_49, tmp_dict_value_49 );
    PyList_SET_ITEM( tmp_dict_value_47, 2, tmp_list_element_4 );
    tmp_dict_key_47 = const_str_plain_frompyobj;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_47, tmp_dict_value_47 );
    Py_DECREF( tmp_dict_value_47 );
    tmp_dict_value_50 = PyList_New( 4 );
    tmp_list_element_5 = const_str_digest_aef332a279fc26992d9b07f03b37a7b7;
    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_dict_value_50, 0, tmp_list_element_5 );
    tmp_list_element_5 = _PyDict_NewPresized( 1 );
    tmp_dict_value_51 = const_str_plain_CFUNCSMESS;
    tmp_dict_key_51 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_51 == NULL ))
    {
        tmp_dict_key_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_51 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_50 );
        Py_DECREF( tmp_list_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 192;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_5, tmp_dict_key_51, tmp_dict_value_51 );
    PyList_SET_ITEM( tmp_dict_value_50, 1, tmp_list_element_5 );
    tmp_list_element_5 = const_str_digest_2782d06f338ee345290cef192d05e062;
    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_dict_value_50, 2, tmp_list_element_5 );
    tmp_list_element_5 = const_str_plain_GETSTRFROMPYTUPLE;
    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_dict_value_50, 3, tmp_list_element_5 );
    tmp_dict_key_50 = const_str_plain_need;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_50, tmp_dict_value_50 );
    Py_DECREF( tmp_dict_value_50 );
    tmp_dict_value_52 = const_str_digest_505b97969baa28c3f607a38ee02f4f2d;
    tmp_dict_key_52 = const_str_plain_return;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_52, tmp_dict_value_52 );
    tmp_dict_value_53 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isstringfunction );

    if (unlikely( tmp_dict_value_53 == NULL ))
    {
        tmp_dict_value_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isstringfunction );
    }

    if ( tmp_dict_value_53 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126171 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_53 = const_str_plain__check;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_53, tmp_dict_value_53 );
    PyList_SET_ITEM( tmp_assign_source_15, 2, tmp_list_element_1 );
    tmp_list_element_1 = _PyDict_NewPresized( 8 );
    tmp_dict_value_54 = const_str_digest_f2856c5fd4f3b3cd13e5b947797c9d12;
    tmp_dict_key_54 = const_str_plain_optargs;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_54, tmp_dict_value_54 );
    tmp_dict_value_55 = const_str_digest_f7987058d6849bcafa9efcbbdabb6dbe;
    tmp_dict_key_55 = const_str_plain_optargs_nm;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_55, tmp_dict_value_55 );
    tmp_dict_value_56 = const_str_digest_b4bc98c665b355881e4c167c8bda0d06;
    tmp_dict_key_56 = const_str_plain_optargs_td;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_56, tmp_dict_value_56 );
    tmp_dict_value_57 = const_str_digest_e538bc59b5fae7730995fab1c3db54ee;
    tmp_dict_key_57 = const_str_plain_decl;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_57, tmp_dict_value_57 );
    tmp_dict_value_58 = PyList_New( 3 );
    tmp_list_element_6 = _PyDict_NewPresized( 1 );
    tmp_dict_value_59 = const_str_digest_4750d0cf21d25e54d406a8637a42af0d;
    tmp_dict_key_59 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_59 == NULL ))
    {
        tmp_dict_key_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_59 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_58 );
        Py_DECREF( tmp_list_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 218;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_6, tmp_dict_key_59, tmp_dict_value_59 );
    PyList_SET_ITEM( tmp_dict_value_58, 0, tmp_list_element_6 );
    tmp_list_element_6 = const_str_digest_887675077da978be565dd02a36b99f5c;
    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_dict_value_58, 1, tmp_list_element_6 );
    tmp_list_element_6 = _PyDict_NewPresized( 1 );
    tmp_dict_value_60 = const_str_digest_5666b82682471b347afe7caafec21438;
    tmp_dict_key_60 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_60 == NULL ))
    {
        tmp_dict_key_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_60 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_58 );
        Py_DECREF( tmp_list_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 227;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_6, tmp_dict_key_60, tmp_dict_value_60 );
    PyList_SET_ITEM( tmp_dict_value_58, 2, tmp_list_element_6 );
    tmp_dict_key_58 = const_str_plain_frompyobj;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_58, tmp_dict_value_58 );
    Py_DECREF( tmp_dict_value_58 );
    tmp_dict_value_61 = const_str_digest_3c5a1d146bfac327fc3e9466d54c09cb;
    tmp_dict_key_61 = const_str_plain_return;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_61, tmp_dict_value_61 );
    tmp_dict_value_62 = PyList_New( 5 );
    tmp_list_element_7 = const_str_digest_aef332a279fc26992d9b07f03b37a7b7;
    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_dict_value_62, 0, tmp_list_element_7 );
    tmp_list_element_7 = _PyDict_NewPresized( 1 );
    tmp_dict_value_63 = const_str_plain_CFUNCSMESS;
    tmp_dict_key_63 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_63 == NULL ))
    {
        tmp_dict_key_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_63 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_62 );
        Py_DECREF( tmp_list_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_7, tmp_dict_key_63, tmp_dict_value_63 );
    PyList_SET_ITEM( tmp_dict_value_62, 1, tmp_list_element_7 );
    tmp_list_element_7 = const_str_digest_2782d06f338ee345290cef192d05e062;
    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_dict_value_62, 2, tmp_list_element_7 );
    tmp_list_element_7 = const_str_plain_GETSCALARFROMPYTUPLE;
    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_dict_value_62, 3, tmp_list_element_7 );
    tmp_list_element_7 = const_str_digest_034683ceccce831b3c4724622e7c61e0;
    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_dict_value_62, 4, tmp_list_element_7 );
    tmp_dict_key_62 = const_str_plain_need;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_62, tmp_dict_value_62 );
    Py_DECREF( tmp_dict_value_62 );
    tmp_dict_value_64 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_iscomplexfunction );

    if (unlikely( tmp_dict_value_64 == NULL ))
    {
        tmp_dict_value_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplexfunction );
    }

    if ( tmp_dict_value_64 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125115 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_64 = const_str_plain__check;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_64, tmp_dict_value_64 );
    PyList_SET_ITEM( tmp_assign_source_15, 3, tmp_list_element_1 );
    tmp_list_element_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_65 = const_str_digest_17ad783f1931e0a05dc6f1bb33728591;
    tmp_dict_key_65 = const_str_plain_docstrout;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_65, tmp_dict_value_65 );
    tmp_dict_value_66 = PyList_New( 2 );
    tmp_list_element_8 = const_str_digest_21848c21ee715afb46bb5dff54f12759;
    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_dict_value_66, 0, tmp_list_element_8 );
    tmp_list_element_8 = _PyDict_NewPresized( 1 );
    tmp_dict_value_67 = const_str_digest_2fea6faaece8b13aba5205180919cad4;
    tmp_dict_key_67 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_hasnote );

    if (unlikely( tmp_dict_key_67 == NULL ))
    {
        tmp_dict_key_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hasnote );
    }

    if ( tmp_dict_key_67 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_dict_value_66 );
        Py_DECREF( tmp_list_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125485 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_8, tmp_dict_key_67, tmp_dict_value_67 );
    PyList_SET_ITEM( tmp_dict_value_66, 1, tmp_list_element_8 );
    tmp_dict_key_66 = const_str_plain_latexdocstrout;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_66, tmp_dict_value_66 );
    Py_DECREF( tmp_dict_value_66 );
    tmp_dict_value_68 = const_str_digest_dbd40ba69da15782bc0a1e6888e6b0cb;
    tmp_dict_key_68 = const_str_plain_docreturn;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_68, tmp_dict_value_68 );
    tmp_dict_value_69 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isfunction );

    if (unlikely( tmp_dict_value_69 == NULL ))
    {
        tmp_dict_value_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfunction );
    }

    if ( tmp_dict_value_69 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 51248 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_69 = const_str_plain__check;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_69, tmp_dict_value_69 );
    PyList_SET_ITEM( tmp_assign_source_15, 4, tmp_list_element_1 );
    tmp_list_element_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_70 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_issubroutine );

    if (unlikely( tmp_dict_value_70 == NULL ))
    {
        tmp_dict_value_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issubroutine );
    }

    if ( tmp_dict_value_70 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124910 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 252;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_70 = const_str_plain__check;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_70, tmp_dict_value_70 );
    tmp_dict_value_71 = const_str_digest_505b97969baa28c3f607a38ee02f4f2d;
    tmp_dict_key_71 = const_str_plain_return;
    PyDict_SetItem( tmp_list_element_1, tmp_dict_key_71, tmp_dict_value_71 );
    PyList_SET_ITEM( tmp_assign_source_15, 5, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cb_rout_rules, tmp_assign_source_15 );
    tmp_assign_source_16 = PyList_New( 10 );
    tmp_list_element_9 = _PyDict_NewPresized( 9 );
    tmp_dict_value_72 = _PyDict_NewPresized( 1 );
    tmp_dict_value_73 = const_str_digest_9e0942c8582929b029d5631d00be919d;
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_72 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isoptional );

    if (unlikely( tmp_call_arg_element_7 == NULL ))
    {
        tmp_call_arg_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isoptional );
    }

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_72 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124244 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_nothide );

    if (unlikely( tmp_call_arg_element_8 == NULL ))
    {
        tmp_call_arg_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_nothide );
    }

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_72 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125197 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 257;
    tmp_dict_key_73 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    if ( tmp_dict_key_73 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_72 );

        frame_module->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_72, tmp_dict_key_73, tmp_dict_value_73 );
    Py_DECREF( tmp_dict_key_73 );
    tmp_dict_key_72 = const_str_plain_docstropt;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_72, tmp_dict_value_72 );
    Py_DECREF( tmp_dict_value_72 );
    tmp_dict_value_74 = _PyDict_NewPresized( 1 );
    tmp_dict_value_75 = const_str_digest_9e0942c8582929b029d5631d00be919d;
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_74 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 258;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isrequired );

    if (unlikely( tmp_call_arg_element_9 == NULL ))
    {
        tmp_call_arg_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isrequired );
    }

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_74 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128672 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 258;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_nothide );

    if (unlikely( tmp_call_arg_element_10 == NULL ))
    {
        tmp_call_arg_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_nothide );
    }

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_74 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125197 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 258;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 258;
    tmp_dict_key_75 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    if ( tmp_dict_key_75 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_74 );

        frame_module->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_74, tmp_dict_key_75, tmp_dict_value_75 );
    Py_DECREF( tmp_dict_key_75 );
    tmp_dict_key_74 = const_str_plain_docstrreq;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_74, tmp_dict_value_74 );
    Py_DECREF( tmp_dict_value_74 );
    tmp_dict_value_76 = _PyDict_NewPresized( 1 );
    tmp_dict_value_77 = const_str_digest_17ad783f1931e0a05dc6f1bb33728591;
    tmp_dict_key_77 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_out );

    if (unlikely( tmp_dict_key_77 == NULL ))
    {
        tmp_dict_key_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_out );
    }

    if ( tmp_dict_key_77 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_76 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124107 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 259;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dict_value_76, tmp_dict_key_77, tmp_dict_value_77 );
    tmp_dict_key_76 = const_str_plain_docstrout;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_76, tmp_dict_value_76 );
    Py_DECREF( tmp_dict_value_76 );
    tmp_dict_value_78 = _PyDict_NewPresized( 1 );
    tmp_dict_value_79 = PyList_New( 2 );
    tmp_list_element_10 = const_str_digest_8b28e68d7237750459f812a4e45fbbea;
    Py_INCREF( tmp_list_element_10 );
    PyList_SET_ITEM( tmp_dict_value_79, 0, tmp_list_element_10 );
    tmp_list_element_10 = _PyDict_NewPresized( 1 );
    tmp_dict_value_80 = const_str_digest_2fea6faaece8b13aba5205180919cad4;
    tmp_dict_key_80 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_hasnote );

    if (unlikely( tmp_dict_key_80 == NULL ))
    {
        tmp_dict_key_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hasnote );
    }

    if ( tmp_dict_key_80 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_78 );
        Py_DECREF( tmp_dict_value_79 );
        Py_DECREF( tmp_list_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125485 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_10, tmp_dict_key_80, tmp_dict_value_80 );
    PyList_SET_ITEM( tmp_dict_value_79, 1, tmp_list_element_10 );
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_78 );
        Py_DECREF( tmp_dict_value_79 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isoptional );

    if (unlikely( tmp_call_arg_element_11 == NULL ))
    {
        tmp_call_arg_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isoptional );
    }

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_78 );
        Py_DECREF( tmp_dict_value_79 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124244 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_12 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_nothide );

    if (unlikely( tmp_call_arg_element_12 == NULL ))
    {
        tmp_call_arg_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_nothide );
    }

    if ( tmp_call_arg_element_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_78 );
        Py_DECREF( tmp_dict_value_79 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125197 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 260;
    tmp_dict_key_79 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_dict_key_79 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_78 );
        Py_DECREF( tmp_dict_value_79 );

        frame_module->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_78, tmp_dict_key_79, tmp_dict_value_79 );
    Py_DECREF( tmp_dict_value_79 );
    Py_DECREF( tmp_dict_key_79 );
    tmp_dict_key_78 = const_str_plain_latexdocstropt;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_78, tmp_dict_value_78 );
    Py_DECREF( tmp_dict_value_78 );
    tmp_dict_value_81 = _PyDict_NewPresized( 1 );
    tmp_dict_value_82 = PyList_New( 2 );
    tmp_list_element_11 = const_str_digest_8b28e68d7237750459f812a4e45fbbea;
    Py_INCREF( tmp_list_element_11 );
    PyList_SET_ITEM( tmp_dict_value_82, 0, tmp_list_element_11 );
    tmp_list_element_11 = _PyDict_NewPresized( 1 );
    tmp_dict_value_83 = const_str_digest_2fea6faaece8b13aba5205180919cad4;
    tmp_dict_key_83 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_hasnote );

    if (unlikely( tmp_dict_key_83 == NULL ))
    {
        tmp_dict_key_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hasnote );
    }

    if ( tmp_dict_key_83 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_81 );
        Py_DECREF( tmp_dict_value_82 );
        Py_DECREF( tmp_list_element_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125485 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 263;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_11, tmp_dict_key_83, tmp_dict_value_83 );
    PyList_SET_ITEM( tmp_dict_value_82, 1, tmp_list_element_11 );
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_81 );
        Py_DECREF( tmp_dict_value_82 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isrequired );

    if (unlikely( tmp_call_arg_element_13 == NULL ))
    {
        tmp_call_arg_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isrequired );
    }

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_81 );
        Py_DECREF( tmp_dict_value_82 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128672 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_nothide );

    if (unlikely( tmp_call_arg_element_14 == NULL ))
    {
        tmp_call_arg_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_nothide );
    }

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_81 );
        Py_DECREF( tmp_dict_value_82 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125197 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 262;
    tmp_dict_key_82 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    if ( tmp_dict_key_82 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_81 );
        Py_DECREF( tmp_dict_value_82 );

        frame_module->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_81, tmp_dict_key_82, tmp_dict_value_82 );
    Py_DECREF( tmp_dict_value_82 );
    Py_DECREF( tmp_dict_key_82 );
    tmp_dict_key_81 = const_str_plain_latexdocstrreq;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_81, tmp_dict_value_81 );
    Py_DECREF( tmp_dict_value_81 );
    tmp_dict_value_84 = _PyDict_NewPresized( 1 );
    tmp_dict_value_85 = PyList_New( 2 );
    tmp_list_element_12 = const_str_digest_21848c21ee715afb46bb5dff54f12759;
    Py_INCREF( tmp_list_element_12 );
    PyList_SET_ITEM( tmp_dict_value_85, 0, tmp_list_element_12 );
    tmp_list_element_12 = _PyDict_NewPresized( 2 );
    tmp_dict_value_86 = const_str_digest_2fea6faaece8b13aba5205180919cad4;
    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_84 );
        Py_DECREF( tmp_dict_value_85 );
        Py_DECREF( tmp_list_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_15 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_hasnote );

    if (unlikely( tmp_call_arg_element_15 == NULL ))
    {
        tmp_call_arg_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hasnote );
    }

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_84 );
        Py_DECREF( tmp_dict_value_85 );
        Py_DECREF( tmp_list_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125485 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_16 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_hide );

    if (unlikely( tmp_call_arg_element_16 == NULL ))
    {
        tmp_call_arg_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_hide );
    }

    if ( tmp_call_arg_element_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_84 );
        Py_DECREF( tmp_dict_value_85 );
        Py_DECREF( tmp_list_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124141 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 265;
    tmp_dict_key_86 = CALL_FUNCTION_WITH_ARGS2( tmp_called_9, tmp_call_arg_element_15, tmp_call_arg_element_16 );
    if ( tmp_dict_key_86 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_84 );
        Py_DECREF( tmp_dict_value_85 );
        Py_DECREF( tmp_list_element_12 );

        frame_module->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_list_element_12, tmp_dict_key_86, tmp_dict_value_86 );
    Py_DECREF( tmp_dict_key_86 );
    tmp_dict_value_87 = const_str_digest_73a2c45e7b0015e7c3fd1d2bb61db866;
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_84 );
        Py_DECREF( tmp_dict_value_85 );
        Py_DECREF( tmp_list_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 266;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_17 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_hasnote );

    if (unlikely( tmp_call_arg_element_17 == NULL ))
    {
        tmp_call_arg_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hasnote );
    }

    if ( tmp_call_arg_element_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_84 );
        Py_DECREF( tmp_dict_value_85 );
        Py_DECREF( tmp_list_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125485 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 266;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_18 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_nothide );

    if (unlikely( tmp_call_arg_element_18 == NULL ))
    {
        tmp_call_arg_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_nothide );
    }

    if ( tmp_call_arg_element_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_84 );
        Py_DECREF( tmp_dict_value_85 );
        Py_DECREF( tmp_list_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125197 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 266;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 266;
    tmp_dict_key_87 = CALL_FUNCTION_WITH_ARGS2( tmp_called_10, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    if ( tmp_dict_key_87 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_84 );
        Py_DECREF( tmp_dict_value_85 );
        Py_DECREF( tmp_list_element_12 );

        frame_module->f_lineno = 266;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_list_element_12, tmp_dict_key_87, tmp_dict_value_87 );
    Py_DECREF( tmp_dict_key_87 );
    PyList_SET_ITEM( tmp_dict_value_85, 1, tmp_list_element_12 );
    tmp_dict_key_85 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_out );

    if (unlikely( tmp_dict_key_85 == NULL ))
    {
        tmp_dict_key_85 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_out );
    }

    if ( tmp_dict_key_85 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_84 );
        Py_DECREF( tmp_dict_value_85 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124107 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dict_value_84, tmp_dict_key_85, tmp_dict_value_85 );
    Py_DECREF( tmp_dict_value_85 );
    tmp_dict_key_84 = const_str_plain_latexdocstrout;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_84, tmp_dict_value_84 );
    Py_DECREF( tmp_dict_value_84 );
    tmp_dict_value_88 = _PyDict_NewPresized( 1 );
    tmp_dict_value_89 = const_str_digest_8a412c5a481127f099db01c171a0fb22;
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 267;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_19 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isrequired );

    if (unlikely( tmp_call_arg_element_19 == NULL ))
    {
        tmp_call_arg_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isrequired );
    }

    if ( tmp_call_arg_element_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128672 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 267;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_20 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_nothide );

    if (unlikely( tmp_call_arg_element_20 == NULL ))
    {
        tmp_call_arg_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_nothide );
    }

    if ( tmp_call_arg_element_20 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125197 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 267;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 267;
    tmp_dict_key_89 = CALL_FUNCTION_WITH_ARGS2( tmp_called_11, tmp_call_arg_element_19, tmp_call_arg_element_20 );
    if ( tmp_dict_key_89 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_88 );

        frame_module->f_lineno = 267;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_88, tmp_dict_key_89, tmp_dict_value_89 );
    Py_DECREF( tmp_dict_key_89 );
    tmp_dict_key_88 = const_str_plain_docsign;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_88, tmp_dict_value_88 );
    Py_DECREF( tmp_dict_value_88 );
    tmp_dict_value_90 = _PyDict_NewPresized( 1 );
    tmp_dict_value_91 = const_str_digest_8a412c5a481127f099db01c171a0fb22;
    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_90 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_21 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isoptional );

    if (unlikely( tmp_call_arg_element_21 == NULL ))
    {
        tmp_call_arg_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isoptional );
    }

    if ( tmp_call_arg_element_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_90 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124244 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_22 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_nothide );

    if (unlikely( tmp_call_arg_element_22 == NULL ))
    {
        tmp_call_arg_element_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_nothide );
    }

    if ( tmp_call_arg_element_22 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_90 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125197 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 268;
    tmp_dict_key_91 = CALL_FUNCTION_WITH_ARGS2( tmp_called_12, tmp_call_arg_element_21, tmp_call_arg_element_22 );
    if ( tmp_dict_key_91 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_90 );

        frame_module->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_90, tmp_dict_key_91, tmp_dict_value_91 );
    Py_DECREF( tmp_dict_key_91 );
    tmp_dict_key_90 = const_str_plain_docsignopt;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_90, tmp_dict_value_90 );
    Py_DECREF( tmp_dict_value_90 );
    tmp_dict_value_92 = const_str_empty;
    tmp_dict_key_92 = const_str_plain_depend;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_92, tmp_dict_value_92 );
    PyList_SET_ITEM( tmp_assign_source_16, 0, tmp_list_element_9 );
    tmp_list_element_9 = _PyDict_NewPresized( 6 );
    tmp_dict_value_93 = _PyDict_NewPresized( 4 );
    tmp_dict_value_94 = const_str_digest_062fc30b742b9709e8235f7458148ee4;
    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_93 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_23 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_call_arg_element_23 == NULL ))
    {
        tmp_call_arg_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_call_arg_element_23 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_93 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72345 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_24 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_call_arg_element_24 == NULL ))
    {
        tmp_call_arg_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_call_arg_element_24 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_93 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 273;
    tmp_dict_key_94 = CALL_FUNCTION_WITH_ARGS2( tmp_called_13, tmp_call_arg_element_23, tmp_call_arg_element_24 );
    if ( tmp_dict_key_94 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_93 );

        frame_module->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_93, tmp_dict_key_94, tmp_dict_value_94 );
    Py_DECREF( tmp_dict_key_94 );
    tmp_dict_value_95 = const_str_digest_6ef56ac40b151270b7eebb1ef096bcff;
    tmp_called_14 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_14 == NULL ))
    {
        tmp_called_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_93 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_25 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_call_arg_element_25 == NULL ))
    {
        tmp_call_arg_element_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_call_arg_element_25 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_93 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72345 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_not );

    if (unlikely( tmp_called_15 == NULL ))
    {
        tmp_called_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_not );
    }

    if ( tmp_called_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_93 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126216 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_27 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_call_arg_element_27 == NULL ))
    {
        tmp_call_arg_element_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_call_arg_element_27 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_93 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 274;
    tmp_call_arg_element_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_27 );
    if ( tmp_call_arg_element_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_93 );

        frame_module->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 274;
    tmp_dict_key_95 = CALL_FUNCTION_WITH_ARGS2( tmp_called_14, tmp_call_arg_element_25, tmp_call_arg_element_26 );
    Py_DECREF( tmp_call_arg_element_26 );
    if ( tmp_dict_key_95 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_93 );

        frame_module->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_93, tmp_dict_key_95, tmp_dict_value_95 );
    Py_DECREF( tmp_dict_key_95 );
    tmp_dict_value_96 = const_str_digest_ca4aa19a291df02d99962b1c429ee15c;
    tmp_dict_key_96 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isarray );

    if (unlikely( tmp_dict_key_96 == NULL ))
    {
        tmp_dict_key_96 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isarray );
    }

    if ( tmp_dict_key_96 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_93 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124593 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 275;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dict_value_93, tmp_dict_key_96, tmp_dict_value_96 );
    tmp_dict_value_97 = const_str_digest_062fc30b742b9709e8235f7458148ee4;
    tmp_dict_key_97 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isstring );

    if (unlikely( tmp_dict_key_97 == NULL ))
    {
        tmp_dict_key_97 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isstring );
    }

    if ( tmp_dict_key_97 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_93 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124629 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 276;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dict_value_93, tmp_dict_key_97, tmp_dict_value_97 );
    tmp_dict_key_93 = const_str_plain_args;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_93, tmp_dict_value_93 );
    Py_DECREF( tmp_dict_value_93 );
    tmp_dict_value_98 = _PyDict_NewPresized( 4 );
    tmp_dict_value_99 = const_str_digest_f8d04fc823e2ff5c34718637cc3d2882;
    tmp_called_16 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_16 == NULL ))
    {
        tmp_called_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_98 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_28 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_call_arg_element_28 == NULL ))
    {
        tmp_call_arg_element_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_call_arg_element_28 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_98 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72345 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_29 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_call_arg_element_29 == NULL ))
    {
        tmp_call_arg_element_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_call_arg_element_29 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_98 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 279;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 279;
    tmp_dict_key_99 = CALL_FUNCTION_WITH_ARGS2( tmp_called_16, tmp_call_arg_element_28, tmp_call_arg_element_29 );
    if ( tmp_dict_key_99 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_98 );

        frame_module->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_98, tmp_dict_key_99, tmp_dict_value_99 );
    Py_DECREF( tmp_dict_key_99 );
    tmp_dict_value_100 = const_str_digest_83b58e3d4bbe37775b1ce4afa2773473;
    tmp_called_17 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_17 == NULL ))
    {
        tmp_called_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_98 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 280;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_30 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_call_arg_element_30 == NULL ))
    {
        tmp_call_arg_element_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_call_arg_element_30 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_98 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72345 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 280;
        goto frame_exception_exit_1;
    }

    tmp_called_18 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_not );

    if (unlikely( tmp_called_18 == NULL ))
    {
        tmp_called_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_not );
    }

    if ( tmp_called_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_98 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126216 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 280;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_32 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_call_arg_element_32 == NULL ))
    {
        tmp_call_arg_element_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_call_arg_element_32 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_98 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 280;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 280;
    tmp_call_arg_element_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_32 );
    if ( tmp_call_arg_element_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_98 );

        frame_module->f_lineno = 280;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 280;
    tmp_dict_key_100 = CALL_FUNCTION_WITH_ARGS2( tmp_called_17, tmp_call_arg_element_30, tmp_call_arg_element_31 );
    Py_DECREF( tmp_call_arg_element_31 );
    if ( tmp_dict_key_100 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_98 );

        frame_module->f_lineno = 280;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_98, tmp_dict_key_100, tmp_dict_value_100 );
    Py_DECREF( tmp_dict_key_100 );
    tmp_dict_value_101 = const_str_digest_f8d04fc823e2ff5c34718637cc3d2882;
    tmp_dict_key_101 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isarray );

    if (unlikely( tmp_dict_key_101 == NULL ))
    {
        tmp_dict_key_101 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isarray );
    }

    if ( tmp_dict_key_101 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_98 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124593 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dict_value_98, tmp_dict_key_101, tmp_dict_value_101 );
    tmp_dict_value_102 = const_str_digest_f8d04fc823e2ff5c34718637cc3d2882;
    tmp_dict_key_102 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isstring );

    if (unlikely( tmp_dict_key_102 == NULL ))
    {
        tmp_dict_key_102 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isstring );
    }

    if ( tmp_dict_key_102 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_98 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124629 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 282;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dict_value_98, tmp_dict_key_102, tmp_dict_value_102 );
    tmp_dict_key_98 = const_str_plain_args_nm;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_98, tmp_dict_value_98 );
    Py_DECREF( tmp_dict_value_98 );
    tmp_dict_value_103 = _PyDict_NewPresized( 4 );
    tmp_dict_value_104 = const_str_digest_034683ceccce831b3c4724622e7c61e0;
    tmp_called_19 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_19 == NULL ))
    {
        tmp_called_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_103 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_33 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_call_arg_element_33 == NULL ))
    {
        tmp_call_arg_element_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_call_arg_element_33 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_103 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72345 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_34 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_call_arg_element_34 == NULL ))
    {
        tmp_call_arg_element_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_call_arg_element_34 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_103 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 285;
    tmp_dict_key_104 = CALL_FUNCTION_WITH_ARGS2( tmp_called_19, tmp_call_arg_element_33, tmp_call_arg_element_34 );
    if ( tmp_dict_key_104 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_103 );

        frame_module->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_103, tmp_dict_key_104, tmp_dict_value_104 );
    Py_DECREF( tmp_dict_key_104 );
    tmp_dict_value_105 = const_str_digest_850f2e0cd3bc4d953ff833d69c84d9ba;
    tmp_called_20 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_20 == NULL ))
    {
        tmp_called_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_20 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_103 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_35 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_call_arg_element_35 == NULL ))
    {
        tmp_call_arg_element_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_call_arg_element_35 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_103 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72345 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    tmp_called_21 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_not );

    if (unlikely( tmp_called_21 == NULL ))
    {
        tmp_called_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_not );
    }

    if ( tmp_called_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_103 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126216 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_37 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_call_arg_element_37 == NULL ))
    {
        tmp_call_arg_element_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_call_arg_element_37 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_103 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 286;
    tmp_call_arg_element_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_21, tmp_call_arg_element_37 );
    if ( tmp_call_arg_element_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_103 );

        frame_module->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 286;
    tmp_dict_key_105 = CALL_FUNCTION_WITH_ARGS2( tmp_called_20, tmp_call_arg_element_35, tmp_call_arg_element_36 );
    Py_DECREF( tmp_call_arg_element_36 );
    if ( tmp_dict_key_105 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_103 );

        frame_module->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_103, tmp_dict_key_105, tmp_dict_value_105 );
    Py_DECREF( tmp_dict_key_105 );
    tmp_dict_value_106 = const_str_digest_850f2e0cd3bc4d953ff833d69c84d9ba;
    tmp_dict_key_106 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isarray );

    if (unlikely( tmp_dict_key_106 == NULL ))
    {
        tmp_dict_key_106 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isarray );
    }

    if ( tmp_dict_key_106 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_103 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124593 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dict_value_103, tmp_dict_key_106, tmp_dict_value_106 );
    tmp_dict_value_107 = const_str_digest_034683ceccce831b3c4724622e7c61e0;
    tmp_dict_key_107 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isstring );

    if (unlikely( tmp_dict_key_107 == NULL ))
    {
        tmp_dict_key_107 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isstring );
    }

    if ( tmp_dict_key_107 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_103 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124629 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 288;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dict_value_103, tmp_dict_key_107, tmp_dict_value_107 );
    tmp_dict_key_103 = const_str_plain_args_td;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_103, tmp_dict_value_103 );
    Py_DECREF( tmp_dict_value_103 );
    tmp_dict_value_108 = _PyDict_NewPresized( 1 );
    tmp_dict_value_109 = const_str_digest_530b3386b3542daf507588e8c7c5390b;
    tmp_dict_key_109 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isstring );

    if (unlikely( tmp_dict_key_109 == NULL ))
    {
        tmp_dict_key_109 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isstring );
    }

    if ( tmp_dict_key_109 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_108 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124629 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 290;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dict_value_108, tmp_dict_key_109, tmp_dict_value_109 );
    tmp_dict_key_108 = const_str_plain_strarglens;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_108, tmp_dict_value_108 );
    Py_DECREF( tmp_dict_value_108 );
    tmp_dict_value_110 = _PyDict_NewPresized( 1 );
    tmp_dict_value_111 = const_str_digest_ab007b1738612d28e96d377ead964a8d;
    tmp_dict_key_111 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isstring );

    if (unlikely( tmp_dict_key_111 == NULL ))
    {
        tmp_dict_key_111 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isstring );
    }

    if ( tmp_dict_key_111 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_110 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124629 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dict_value_110, tmp_dict_key_111, tmp_dict_value_111 );
    tmp_dict_key_110 = const_str_plain_strarglens_td;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_110, tmp_dict_value_110 );
    Py_DECREF( tmp_dict_value_110 );
    tmp_dict_value_112 = _PyDict_NewPresized( 1 );
    tmp_dict_value_113 = const_str_digest_811d363ecf13a25af7385a15e54103d2;
    tmp_dict_key_113 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isstring );

    if (unlikely( tmp_dict_key_113 == NULL ))
    {
        tmp_dict_key_113 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isstring );
    }

    if ( tmp_dict_key_113 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_112 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124629 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_dict_value_112, tmp_dict_key_113, tmp_dict_value_113 );
    tmp_dict_key_112 = const_str_plain_strarglens_nm;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_112, tmp_dict_value_112 );
    Py_DECREF( tmp_dict_value_112 );
    PyList_SET_ITEM( tmp_assign_source_16, 1, tmp_list_element_9 );
    tmp_list_element_9 = _PyDict_NewPresized( 5 );
    tmp_dict_value_114 = _PyDict_NewPresized( 1 );
    tmp_dict_value_115 = const_str_digest_f3b237ec1dff09966ca77ac8516923fd;
    tmp_called_22 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_not );

    if (unlikely( tmp_called_22 == NULL ))
    {
        tmp_called_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_not );
    }

    if ( tmp_called_22 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_114 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126216 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 295;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_38 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_call_arg_element_38 == NULL ))
    {
        tmp_call_arg_element_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_call_arg_element_38 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_114 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 295;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 295;
    tmp_dict_key_115 = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_38 );
    if ( tmp_dict_key_115 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_114 );

        frame_module->f_lineno = 295;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_114, tmp_dict_key_115, tmp_dict_value_115 );
    Py_DECREF( tmp_dict_key_115 );
    tmp_dict_key_114 = const_str_plain_decl;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_114, tmp_dict_value_114 );
    Py_DECREF( tmp_dict_value_114 );
    tmp_dict_value_116 = _PyDict_NewPresized( 1 );
    tmp_dict_value_117 = const_str_empty;
    tmp_called_23 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_23 == NULL ))
    {
        tmp_called_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_23 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_116 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_39 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_call_arg_element_39 == NULL ))
    {
        tmp_call_arg_element_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_call_arg_element_39 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_116 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_40 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_out );

    if (unlikely( tmp_call_arg_element_40 == NULL ))
    {
        tmp_call_arg_element_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_out );
    }

    if ( tmp_call_arg_element_40 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_116 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124107 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_called_24 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_throw_error );

    if (unlikely( tmp_called_24 == NULL ))
    {
        tmp_called_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_throw_error );
    }

    if ( tmp_called_24 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_116 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129553 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 297;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_42 = const_str_digest_390f326c3653f24aed04916ca342b044;
    frame_module->f_lineno = 297;
    tmp_call_arg_element_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_24, tmp_call_arg_element_42 );
    if ( tmp_call_arg_element_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_116 );

        frame_module->f_lineno = 297;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 297;
    tmp_dict_key_117 = CALL_FUNCTION_WITH_ARGS3( tmp_called_23, tmp_call_arg_element_39, tmp_call_arg_element_40, tmp_call_arg_element_41 );
    Py_DECREF( tmp_call_arg_element_41 );
    if ( tmp_dict_key_117 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_116 );

        frame_module->f_lineno = 297;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_dict_value_116, tmp_dict_key_117, tmp_dict_value_117 );
    Py_DECREF( tmp_dict_key_117 );
    tmp_dict_key_116 = const_str_plain_error;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_116, tmp_dict_value_116 );
    Py_DECREF( tmp_dict_value_116 );
    tmp_dict_value_118 = PyList_New( 6 );
    tmp_list_element_13 = _PyDict_NewPresized( 1 );
    tmp_dict_value_119 = const_str_digest_08a78931e7a2c378875f5b389ab3f114;
    tmp_dict_key_119 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_119 == NULL ))
    {
        tmp_dict_key_119 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_119 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 299;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_13, tmp_dict_key_119, tmp_dict_value_119 );
    PyList_SET_ITEM( tmp_dict_value_118, 0, tmp_list_element_13 );
    tmp_list_element_13 = _PyDict_NewPresized( 1 );
    tmp_dict_value_120 = const_str_digest_47ca60bdc80f4d0efb3b24c4d11a512a;
    tmp_dict_key_120 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_out );

    if (unlikely( tmp_dict_key_120 == NULL ))
    {
        tmp_dict_key_120 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_out );
    }

    if ( tmp_dict_key_120 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124107 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 300;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_13, tmp_dict_key_120, tmp_dict_value_120 );
    PyList_SET_ITEM( tmp_dict_value_118, 1, tmp_list_element_13 );
    tmp_list_element_13 = _PyDict_NewPresized( 1 );
    tmp_dict_value_121 = const_str_digest_05fb119a3d90ecf2f7303cbd5a41f139;
    tmp_called_25 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_25 == NULL ))
    {
        tmp_called_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_25 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_43 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_call_arg_element_43 == NULL ))
    {
        tmp_call_arg_element_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_call_arg_element_43 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    tmp_called_26 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_26 == NULL ))
    {
        tmp_called_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_26 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    tmp_called_27 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_not );

    if (unlikely( tmp_called_27 == NULL ))
    {
        tmp_called_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_not );
    }

    if ( tmp_called_27 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126216 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_46 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_iscomplex );

    if (unlikely( tmp_call_arg_element_46 == NULL ))
    {
        tmp_call_arg_element_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplex );
    }

    if ( tmp_call_arg_element_46 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124745 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 301;
    tmp_call_arg_element_45 = CALL_FUNCTION_WITH_ARGS1( tmp_called_27, tmp_call_arg_element_46 );
    if ( tmp_call_arg_element_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );

        frame_module->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_47 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_call_arg_element_47 == NULL ))
    {
        tmp_call_arg_element_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_call_arg_element_47 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        Py_DECREF( tmp_call_arg_element_45 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 301;
    tmp_call_arg_element_44 = CALL_FUNCTION_WITH_ARGS2( tmp_called_26, tmp_call_arg_element_45, tmp_call_arg_element_47 );
    Py_DECREF( tmp_call_arg_element_45 );
    if ( tmp_call_arg_element_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );

        frame_module->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 301;
    tmp_dict_key_121 = CALL_FUNCTION_WITH_ARGS2( tmp_called_25, tmp_call_arg_element_43, tmp_call_arg_element_44 );
    Py_DECREF( tmp_call_arg_element_44 );
    if ( tmp_dict_key_121 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );

        frame_module->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_list_element_13, tmp_dict_key_121, tmp_dict_value_121 );
    Py_DECREF( tmp_dict_key_121 );
    PyList_SET_ITEM( tmp_dict_value_118, 2, tmp_list_element_13 );
    tmp_list_element_13 = _PyDict_NewPresized( 1 );
    tmp_dict_value_122 = const_str_digest_af267b59b630633ce09a592329c034e8;
    tmp_called_28 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_28 == NULL ))
    {
        tmp_called_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_28 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_48 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_call_arg_element_48 == NULL ))
    {
        tmp_call_arg_element_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_call_arg_element_48 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_called_29 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_29 == NULL ))
    {
        tmp_called_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_29 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_called_30 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_not );

    if (unlikely( tmp_called_30 == NULL ))
    {
        tmp_called_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_not );
    }

    if ( tmp_called_30 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126216 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_51 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_iscomplex );

    if (unlikely( tmp_call_arg_element_51 == NULL ))
    {
        tmp_call_arg_element_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplex );
    }

    if ( tmp_call_arg_element_51 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124745 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 302;
    tmp_call_arg_element_50 = CALL_FUNCTION_WITH_ARGS1( tmp_called_30, tmp_call_arg_element_51 );
    if ( tmp_call_arg_element_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );

        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }
    tmp_called_31 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_not );

    if (unlikely( tmp_called_31 == NULL ))
    {
        tmp_called_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_not );
    }

    if ( tmp_called_31 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        Py_DECREF( tmp_call_arg_element_50 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126216 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_53 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_call_arg_element_53 == NULL ))
    {
        tmp_call_arg_element_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_call_arg_element_53 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        Py_DECREF( tmp_call_arg_element_50 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 302;
    tmp_call_arg_element_52 = CALL_FUNCTION_WITH_ARGS1( tmp_called_31, tmp_call_arg_element_53 );
    if ( tmp_call_arg_element_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        Py_DECREF( tmp_call_arg_element_50 );

        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 302;
    tmp_call_arg_element_49 = CALL_FUNCTION_WITH_ARGS2( tmp_called_29, tmp_call_arg_element_50, tmp_call_arg_element_52 );
    Py_DECREF( tmp_call_arg_element_50 );
    Py_DECREF( tmp_call_arg_element_52 );
    if ( tmp_call_arg_element_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );

        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 302;
    tmp_dict_key_122 = CALL_FUNCTION_WITH_ARGS2( tmp_called_28, tmp_call_arg_element_48, tmp_call_arg_element_49 );
    Py_DECREF( tmp_call_arg_element_49 );
    if ( tmp_dict_key_122 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );

        frame_module->f_lineno = 302;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_list_element_13, tmp_dict_key_122, tmp_dict_value_122 );
    Py_DECREF( tmp_dict_key_122 );
    PyList_SET_ITEM( tmp_dict_value_118, 3, tmp_list_element_13 );
    tmp_list_element_13 = _PyDict_NewPresized( 1 );
    tmp_dict_value_123 = const_str_digest_89f6f62127a4a1602eaa47a425544c26;
    tmp_called_32 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_32 == NULL ))
    {
        tmp_called_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_32 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_54 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_call_arg_element_54 == NULL ))
    {
        tmp_call_arg_element_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_call_arg_element_54 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_called_33 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_33 == NULL ))
    {
        tmp_called_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_33 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_56 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_iscomplex );

    if (unlikely( tmp_call_arg_element_56 == NULL ))
    {
        tmp_call_arg_element_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplex );
    }

    if ( tmp_call_arg_element_56 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124745 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_57 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_call_arg_element_57 == NULL ))
    {
        tmp_call_arg_element_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_call_arg_element_57 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 303;
    tmp_call_arg_element_55 = CALL_FUNCTION_WITH_ARGS2( tmp_called_33, tmp_call_arg_element_56, tmp_call_arg_element_57 );
    if ( tmp_call_arg_element_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );

        frame_module->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 303;
    tmp_dict_key_123 = CALL_FUNCTION_WITH_ARGS2( tmp_called_32, tmp_call_arg_element_54, tmp_call_arg_element_55 );
    Py_DECREF( tmp_call_arg_element_55 );
    if ( tmp_dict_key_123 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );

        frame_module->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_list_element_13, tmp_dict_key_123, tmp_dict_value_123 );
    Py_DECREF( tmp_dict_key_123 );
    PyList_SET_ITEM( tmp_dict_value_118, 4, tmp_list_element_13 );
    tmp_list_element_13 = _PyDict_NewPresized( 1 );
    tmp_dict_value_124 = const_str_digest_dc08555b2fa40a3c42e86ef2e390269e;
    tmp_called_34 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_34 == NULL ))
    {
        tmp_called_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_34 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_58 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_call_arg_element_58 == NULL ))
    {
        tmp_call_arg_element_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_call_arg_element_58 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    tmp_called_35 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_35 == NULL ))
    {
        tmp_called_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_35 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_60 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_iscomplex );

    if (unlikely( tmp_call_arg_element_60 == NULL ))
    {
        tmp_call_arg_element_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplex );
    }

    if ( tmp_call_arg_element_60 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124745 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    tmp_called_36 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_not );

    if (unlikely( tmp_called_36 == NULL ))
    {
        tmp_called_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_not );
    }

    if ( tmp_called_36 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126216 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_62 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_call_arg_element_62 == NULL ))
    {
        tmp_call_arg_element_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_call_arg_element_62 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 304;
    tmp_call_arg_element_61 = CALL_FUNCTION_WITH_ARGS1( tmp_called_36, tmp_call_arg_element_62 );
    if ( tmp_call_arg_element_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );

        frame_module->f_lineno = 304;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 304;
    tmp_call_arg_element_59 = CALL_FUNCTION_WITH_ARGS2( tmp_called_35, tmp_call_arg_element_60, tmp_call_arg_element_61 );
    Py_DECREF( tmp_call_arg_element_61 );
    if ( tmp_call_arg_element_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );

        frame_module->f_lineno = 304;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 304;
    tmp_dict_key_124 = CALL_FUNCTION_WITH_ARGS2( tmp_called_34, tmp_call_arg_element_58, tmp_call_arg_element_59 );
    Py_DECREF( tmp_call_arg_element_59 );
    if ( tmp_dict_key_124 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_118 );
        Py_DECREF( tmp_list_element_13 );

        frame_module->f_lineno = 304;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_list_element_13, tmp_dict_key_124, tmp_dict_value_124 );
    Py_DECREF( tmp_dict_key_124 );
    PyList_SET_ITEM( tmp_dict_value_118, 5, tmp_list_element_13 );
    tmp_dict_key_118 = const_str_plain_frompyobj;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_118, tmp_dict_value_118 );
    Py_DECREF( tmp_dict_value_118 );
    tmp_dict_value_125 = PyList_New( 2 );
    tmp_list_element_14 = _PyDict_NewPresized( 1 );
    tmp_dict_value_126 = LIST_COPY( const_list_edafe23272f067714f6416e35418f3d0_list );
    tmp_dict_key_126 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_out );

    if (unlikely( tmp_dict_key_126 == NULL ))
    {
        tmp_dict_key_126 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_out );
    }

    if ( tmp_dict_key_126 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_125 );
        Py_DECREF( tmp_list_element_14 );
        Py_DECREF( tmp_dict_value_126 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124107 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_14, tmp_dict_key_126, tmp_dict_value_126 );
    Py_DECREF( tmp_dict_value_126 );
    PyList_SET_ITEM( tmp_dict_value_125, 0, tmp_list_element_14 );
    tmp_list_element_14 = _PyDict_NewPresized( 1 );
    tmp_dict_value_127 = const_str_plain_CFUNCSMESS;
    tmp_dict_key_127 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_127 == NULL ))
    {
        tmp_dict_key_127 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_127 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_125 );
        Py_DECREF( tmp_list_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 307;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_14, tmp_dict_key_127, tmp_dict_value_127 );
    PyList_SET_ITEM( tmp_dict_value_125, 1, tmp_list_element_14 );
    tmp_dict_key_125 = const_str_plain_need;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_125, tmp_dict_value_125 );
    Py_DECREF( tmp_dict_value_125 );
    tmp_dict_value_128 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_dict_value_128 == NULL ))
    {
        tmp_dict_value_128 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_dict_value_128 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72345 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_128 = const_str_plain__check;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_128, tmp_dict_value_128 );
    PyList_SET_ITEM( tmp_assign_source_16, 2, tmp_list_element_9 );
    tmp_list_element_9 = _PyDict_NewPresized( 4 );
    tmp_dict_value_129 = PyList_New( 2 );
    tmp_list_element_15 = _PyDict_NewPresized( 1 );
    tmp_dict_value_130 = const_str_digest_d5ca99338fdc3565df2ce5dd3d1cd6b3;
    tmp_dict_key_130 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_in );

    if (unlikely( tmp_dict_key_130 == NULL ))
    {
        tmp_dict_key_130 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_in );
    }

    if ( tmp_dict_key_130 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_129 );
        Py_DECREF( tmp_list_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124038 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 310;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_15, tmp_dict_key_130, tmp_dict_value_130 );
    PyList_SET_ITEM( tmp_dict_value_129, 0, tmp_list_element_15 );
    tmp_list_element_15 = _PyDict_NewPresized( 1 );
    tmp_dict_value_131 = const_str_digest_c51a918be8a1d8bb6711c1e83aa28a8d;
    tmp_dict_key_131 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_inout );

    if (unlikely( tmp_dict_key_131 == NULL ))
    {
        tmp_dict_key_131 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_inout );
    }

    if ( tmp_dict_key_131 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_129 );
        Py_DECREF( tmp_list_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124071 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 314;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_15, tmp_dict_key_131, tmp_dict_value_131 );
    PyList_SET_ITEM( tmp_dict_value_129, 1, tmp_list_element_15 );
    tmp_dict_key_129 = const_str_plain_pyobjfrom;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_129, tmp_dict_value_129 );
    Py_DECREF( tmp_dict_value_129 );
    tmp_dict_value_132 = PyList_New( 3 );
    tmp_list_element_16 = _PyDict_NewPresized( 1 );
    tmp_dict_value_133 = const_str_digest_e94bac8f3260b056e46d869b06fc3df5;
    tmp_dict_key_133 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_in );

    if (unlikely( tmp_dict_key_133 == NULL ))
    {
        tmp_dict_key_133 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_in );
    }

    if ( tmp_dict_key_133 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_132 );
        Py_DECREF( tmp_list_element_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124038 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 318;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_16, tmp_dict_key_133, tmp_dict_value_133 );
    PyList_SET_ITEM( tmp_dict_value_132, 0, tmp_list_element_16 );
    tmp_list_element_16 = _PyDict_NewPresized( 1 );
    tmp_dict_value_134 = const_str_digest_ecdbf99e78b44dd3b78e60aa408bc809;
    tmp_dict_key_134 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_inout );

    if (unlikely( tmp_dict_key_134 == NULL ))
    {
        tmp_dict_key_134 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_inout );
    }

    if ( tmp_dict_key_134 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_132 );
        Py_DECREF( tmp_list_element_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124071 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 319;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_16, tmp_dict_key_134, tmp_dict_value_134 );
    PyList_SET_ITEM( tmp_dict_value_132, 1, tmp_list_element_16 );
    tmp_list_element_16 = _PyDict_NewPresized( 1 );
    tmp_dict_value_135 = const_str_digest_034683ceccce831b3c4724622e7c61e0;
    tmp_dict_key_135 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_iscomplex );

    if (unlikely( tmp_dict_key_135 == NULL ))
    {
        tmp_dict_key_135 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplex );
    }

    if ( tmp_dict_key_135 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_132 );
        Py_DECREF( tmp_list_element_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124745 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 320;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_16, tmp_dict_key_135, tmp_dict_value_135 );
    PyList_SET_ITEM( tmp_dict_value_132, 2, tmp_list_element_16 );
    tmp_dict_key_132 = const_str_plain_need;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_132, tmp_dict_value_132 );
    Py_DECREF( tmp_dict_value_132 );
    tmp_called_37 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_37 == NULL ))
    {
        tmp_called_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_37 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_63 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_call_arg_element_63 == NULL ))
    {
        tmp_call_arg_element_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_call_arg_element_63 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72345 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_64 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_nothide );

    if (unlikely( tmp_call_arg_element_64 == NULL ))
    {
        tmp_call_arg_element_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_nothide );
    }

    if ( tmp_call_arg_element_64 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125197 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 321;
    tmp_dict_value_136 = CALL_FUNCTION_WITH_ARGS2( tmp_called_37, tmp_call_arg_element_63, tmp_call_arg_element_64 );
    if ( tmp_dict_value_136 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );

        frame_module->f_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_136 = const_str_plain__check;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_136, tmp_dict_value_136 );
    Py_DECREF( tmp_dict_value_136 );
    tmp_dict_value_137 = const_str_empty;
    tmp_dict_key_137 = const_str_plain__optional;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_137, tmp_dict_value_137 );
    PyList_SET_ITEM( tmp_assign_source_16, 3, tmp_list_element_9 );
    tmp_list_element_9 = _PyDict_NewPresized( 3 );
    tmp_dict_value_138 = PyList_New( 3 );
    tmp_list_element_17 = _PyDict_NewPresized( 1 );
    tmp_dict_value_139 = const_str_digest_5ce48477f4982782874e83cc46d19e47;
    tmp_dict_key_139 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_139 == NULL ))
    {
        tmp_dict_key_139 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_139 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_138 );
        Py_DECREF( tmp_list_element_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 324;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_17, tmp_dict_key_139, tmp_dict_value_139 );
    PyList_SET_ITEM( tmp_dict_value_138, 0, tmp_list_element_17 );
    tmp_list_element_17 = const_str_digest_e4849dcec8d34d9739a730d219adbd4f;
    Py_INCREF( tmp_list_element_17 );
    PyList_SET_ITEM( tmp_dict_value_138, 1, tmp_list_element_17 );
    tmp_list_element_17 = _PyDict_NewPresized( 1 );
    tmp_dict_value_140 = const_str_digest_5b0c5caac041b736a199c5510a3abec3;
    tmp_dict_key_140 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_140 == NULL ))
    {
        tmp_dict_key_140 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_140 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_138 );
        Py_DECREF( tmp_list_element_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 327;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_17, tmp_dict_key_140, tmp_dict_value_140 );
    PyList_SET_ITEM( tmp_dict_value_138, 2, tmp_list_element_17 );
    tmp_dict_key_138 = const_str_plain_frompyobj;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_138, tmp_dict_value_138 );
    Py_DECREF( tmp_dict_value_138 );
    tmp_dict_value_141 = PyList_New( 4 );
    tmp_list_element_18 = const_str_digest_034683ceccce831b3c4724622e7c61e0;
    Py_INCREF( tmp_list_element_18 );
    PyList_SET_ITEM( tmp_dict_value_141, 0, tmp_list_element_18 );
    tmp_list_element_18 = const_str_plain_GETSTRFROMPYTUPLE;
    Py_INCREF( tmp_list_element_18 );
    PyList_SET_ITEM( tmp_dict_value_141, 1, tmp_list_element_18 );
    tmp_list_element_18 = _PyDict_NewPresized( 1 );
    tmp_dict_value_142 = const_str_plain_CFUNCSMESS;
    tmp_dict_key_142 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_142 == NULL ))
    {
        tmp_dict_key_142 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_142 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_141 );
        Py_DECREF( tmp_list_element_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 330;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_18, tmp_dict_key_142, tmp_dict_value_142 );
    PyList_SET_ITEM( tmp_dict_value_141, 2, tmp_list_element_18 );
    tmp_list_element_18 = const_str_digest_2782d06f338ee345290cef192d05e062;
    Py_INCREF( tmp_list_element_18 );
    PyList_SET_ITEM( tmp_dict_value_141, 3, tmp_list_element_18 );
    tmp_dict_key_141 = const_str_plain_need;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_141, tmp_dict_value_141 );
    Py_DECREF( tmp_dict_value_141 );
    tmp_called_38 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_38 == NULL ))
    {
        tmp_called_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_38 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 331;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_65 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isstring );

    if (unlikely( tmp_call_arg_element_65 == NULL ))
    {
        tmp_call_arg_element_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isstring );
    }

    if ( tmp_call_arg_element_65 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124629 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 331;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_66 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_out );

    if (unlikely( tmp_call_arg_element_66 == NULL ))
    {
        tmp_call_arg_element_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_out );
    }

    if ( tmp_call_arg_element_66 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124107 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 331;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 331;
    tmp_dict_value_143 = CALL_FUNCTION_WITH_ARGS2( tmp_called_38, tmp_call_arg_element_65, tmp_call_arg_element_66 );
    if ( tmp_dict_value_143 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );

        frame_module->f_lineno = 331;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_143 = const_str_plain__check;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_143, tmp_dict_value_143 );
    Py_DECREF( tmp_dict_value_143 );
    PyList_SET_ITEM( tmp_assign_source_16, 4, tmp_list_element_9 );
    tmp_list_element_9 = _PyDict_NewPresized( 4 );
    tmp_dict_value_144 = PyList_New( 3 );
    tmp_list_element_19 = _PyDict_NewPresized( 1 );
    tmp_dict_value_145 = const_str_digest_0253250729cb119cb21ab3379a9157f7;
    tmp_dict_key_145 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_145 == NULL ))
    {
        tmp_dict_key_145 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_145 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_144 );
        Py_DECREF( tmp_list_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 333;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_19, tmp_dict_key_145, tmp_dict_value_145 );
    PyList_SET_ITEM( tmp_dict_value_144, 0, tmp_list_element_19 );
    tmp_list_element_19 = _PyDict_NewPresized( 1 );
    tmp_dict_value_146 = const_str_digest_c9c27e46657a399664406c8c254b7abb;
    tmp_dict_key_146 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_in );

    if (unlikely( tmp_dict_key_146 == NULL ))
    {
        tmp_dict_key_146 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_in );
    }

    if ( tmp_dict_key_146 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_144 );
        Py_DECREF( tmp_list_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124038 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 334;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_19, tmp_dict_key_146, tmp_dict_value_146 );
    PyList_SET_ITEM( tmp_dict_value_144, 1, tmp_list_element_19 );
    tmp_list_element_19 = _PyDict_NewPresized( 1 );
    tmp_dict_value_147 = const_str_digest_c2f46c40a38553e7834e77797dea7a0d;
    tmp_dict_key_147 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_inout );

    if (unlikely( tmp_dict_key_147 == NULL ))
    {
        tmp_dict_key_147 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_inout );
    }

    if ( tmp_dict_key_147 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_144 );
        Py_DECREF( tmp_list_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124071 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 338;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_19, tmp_dict_key_147, tmp_dict_value_147 );
    PyList_SET_ITEM( tmp_dict_value_144, 2, tmp_list_element_19 );
    tmp_dict_key_144 = const_str_plain_pyobjfrom;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_144, tmp_dict_value_144 );
    Py_DECREF( tmp_dict_value_144 );
    tmp_dict_value_148 = PyList_New( 2 );
    tmp_list_element_20 = _PyDict_NewPresized( 1 );
    tmp_dict_value_149 = const_str_digest_d83a6c45fc49f86e517c0e7fcabc8698;
    tmp_dict_key_149 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_in );

    if (unlikely( tmp_dict_key_149 == NULL ))
    {
        tmp_dict_key_149 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_in );
    }

    if ( tmp_dict_key_149 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_148 );
        Py_DECREF( tmp_list_element_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124038 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 344;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_20, tmp_dict_key_149, tmp_dict_value_149 );
    PyList_SET_ITEM( tmp_dict_value_148, 0, tmp_list_element_20 );
    tmp_list_element_20 = _PyDict_NewPresized( 1 );
    tmp_dict_value_150 = const_str_digest_ecdbf99e78b44dd3b78e60aa408bc809;
    tmp_dict_key_150 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_inout );

    if (unlikely( tmp_dict_key_150 == NULL ))
    {
        tmp_dict_key_150 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_inout );
    }

    if ( tmp_dict_key_150 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_148 );
        Py_DECREF( tmp_list_element_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124071 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_20, tmp_dict_key_150, tmp_dict_value_150 );
    PyList_SET_ITEM( tmp_dict_value_148, 1, tmp_list_element_20 );
    tmp_dict_key_148 = const_str_plain_need;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_148, tmp_dict_value_148 );
    Py_DECREF( tmp_dict_value_148 );
    tmp_called_39 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_39 == NULL ))
    {
        tmp_called_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_39 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 346;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_67 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isstring );

    if (unlikely( tmp_call_arg_element_67 == NULL ))
    {
        tmp_call_arg_element_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isstring );
    }

    if ( tmp_call_arg_element_67 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124629 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 346;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_68 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_nothide );

    if (unlikely( tmp_call_arg_element_68 == NULL ))
    {
        tmp_call_arg_element_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_nothide );
    }

    if ( tmp_call_arg_element_68 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125197 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 346;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 346;
    tmp_dict_value_151 = CALL_FUNCTION_WITH_ARGS2( tmp_called_39, tmp_call_arg_element_67, tmp_call_arg_element_68 );
    if ( tmp_dict_value_151 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );

        frame_module->f_lineno = 346;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_151 = const_str_plain__check;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_151, tmp_dict_value_151 );
    Py_DECREF( tmp_dict_value_151 );
    tmp_dict_value_152 = const_str_empty;
    tmp_dict_key_152 = const_str_plain__optional;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_152, tmp_dict_value_152 );
    PyList_SET_ITEM( tmp_assign_source_16, 5, tmp_list_element_9 );
    tmp_list_element_9 = _PyDict_NewPresized( 4 );
    tmp_dict_value_153 = const_str_digest_cf06c53b16f42dc67c3a5bc9db7a37e3;
    tmp_dict_key_153 = const_str_plain_decl;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_153, tmp_dict_value_153 );
    tmp_dict_value_154 = const_str_digest_914663107b35a32625edce8eb8262981;
    tmp_dict_key_154 = const_str_plain_setdims;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_154, tmp_dict_value_154 );
    tmp_dict_value_155 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isarray );

    if (unlikely( tmp_dict_value_155 == NULL ))
    {
        tmp_dict_value_155 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isarray );
    }

    if ( tmp_dict_value_155 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124593 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 353;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_155 = const_str_plain__check;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_155, tmp_dict_value_155 );
    tmp_dict_value_156 = const_str_empty;
    tmp_dict_key_156 = const_str_plain__depend;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_156, tmp_dict_value_156 );
    PyList_SET_ITEM( tmp_assign_source_16, 6, tmp_list_element_9 );
    tmp_list_element_9 = _PyDict_NewPresized( 3 );
    tmp_dict_value_157 = PyList_New( 3 );
    tmp_list_element_21 = _PyDict_NewPresized( 1 );
    tmp_dict_value_158 = const_str_digest_4e16731b2685c4e8076cd819997e7982;
    tmp_dict_key_158 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_158 == NULL ))
    {
        tmp_dict_key_158 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_158 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_157 );
        Py_DECREF( tmp_list_element_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 357;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_21, tmp_dict_key_158, tmp_dict_value_158 );
    PyList_SET_ITEM( tmp_dict_value_157, 0, tmp_list_element_21 );
    tmp_list_element_21 = _PyDict_NewPresized( 2 );
    tmp_dict_value_159 = const_str_digest_7a9edb9370d82b35209f1fdeab244609;
    tmp_dict_key_159 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_dict_key_159 == NULL ))
    {
        tmp_dict_key_159 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_dict_key_159 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_157 );
        Py_DECREF( tmp_list_element_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 358;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_21, tmp_dict_key_159, tmp_dict_value_159 );
    tmp_dict_value_160 = const_str_digest_b744d59b6918e5f99d824267ea765680;
    tmp_called_40 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_not );

    if (unlikely( tmp_called_40 == NULL ))
    {
        tmp_called_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_not );
    }

    if ( tmp_called_40 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_157 );
        Py_DECREF( tmp_list_element_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126216 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_69 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_call_arg_element_69 == NULL ))
    {
        tmp_call_arg_element_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_call_arg_element_69 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_157 );
        Py_DECREF( tmp_list_element_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 362;
    tmp_dict_key_160 = CALL_FUNCTION_WITH_ARGS1( tmp_called_40, tmp_call_arg_element_69 );
    if ( tmp_dict_key_160 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_157 );
        Py_DECREF( tmp_list_element_21 );

        frame_module->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_list_element_21, tmp_dict_key_160, tmp_dict_value_160 );
    Py_DECREF( tmp_dict_key_160 );
    PyList_SET_ITEM( tmp_dict_value_157, 1, tmp_list_element_21 );
    tmp_list_element_21 = const_str_digest_a41bfcc475f7eaabd7fe8789a234f2be;
    Py_INCREF( tmp_list_element_21 );
    PyList_SET_ITEM( tmp_dict_value_157, 2, tmp_list_element_21 );
    tmp_dict_key_157 = const_str_plain_pyobjfrom;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_157, tmp_dict_value_157 );
    Py_DECREF( tmp_dict_value_157 );
    tmp_called_41 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_41 == NULL ))
    {
        tmp_called_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_41 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_70 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isarray );

    if (unlikely( tmp_call_arg_element_70 == NULL ))
    {
        tmp_call_arg_element_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isarray );
    }

    if ( tmp_call_arg_element_70 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124593 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_71 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_nothide );

    if (unlikely( tmp_call_arg_element_71 == NULL ))
    {
        tmp_call_arg_element_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_nothide );
    }

    if ( tmp_call_arg_element_71 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125197 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_called_42 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_or );

    if (unlikely( tmp_called_42 == NULL ))
    {
        tmp_called_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_or );
    }

    if ( tmp_called_42 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125281 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_73 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_in );

    if (unlikely( tmp_call_arg_element_73 == NULL ))
    {
        tmp_call_arg_element_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_in );
    }

    if ( tmp_call_arg_element_73 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124038 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_74 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_inout );

    if (unlikely( tmp_call_arg_element_74 == NULL ))
    {
        tmp_call_arg_element_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_inout );
    }

    if ( tmp_call_arg_element_74 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124071 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 373;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 373;
    tmp_call_arg_element_72 = CALL_FUNCTION_WITH_ARGS2( tmp_called_42, tmp_call_arg_element_73, tmp_call_arg_element_74 );
    if ( tmp_call_arg_element_72 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );

        frame_module->f_lineno = 373;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 373;
    tmp_dict_value_161 = CALL_FUNCTION_WITH_ARGS3( tmp_called_41, tmp_call_arg_element_70, tmp_call_arg_element_71, tmp_call_arg_element_72 );
    Py_DECREF( tmp_call_arg_element_72 );
    if ( tmp_dict_value_161 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );

        frame_module->f_lineno = 373;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_161 = const_str_plain__check;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_161, tmp_dict_value_161 );
    Py_DECREF( tmp_dict_value_161 );
    tmp_dict_value_162 = const_str_empty;
    tmp_dict_key_162 = const_str_plain__optional;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_162, tmp_dict_value_162 );
    PyList_SET_ITEM( tmp_assign_source_16, 7, tmp_list_element_9 );
    tmp_list_element_9 = _PyDict_NewPresized( 3 );
    tmp_dict_value_163 = PyList_New( 5 );
    tmp_list_element_22 = _PyDict_NewPresized( 1 );
    tmp_dict_value_164 = const_str_digest_08a78931e7a2c378875f5b389ab3f114;
    tmp_dict_key_164 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_164 == NULL ))
    {
        tmp_dict_key_164 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_164 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_163 );
        Py_DECREF( tmp_list_element_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 376;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_22, tmp_dict_key_164, tmp_dict_value_164 );
    PyList_SET_ITEM( tmp_dict_value_163, 0, tmp_list_element_22 );
    tmp_list_element_22 = const_str_digest_a50551cba4bbbd594c0e45999424ed92;
    Py_INCREF( tmp_list_element_22 );
    PyList_SET_ITEM( tmp_dict_value_163, 1, tmp_list_element_22 );
    tmp_list_element_22 = _PyDict_NewPresized( 1 );
    tmp_dict_value_165 = const_str_digest_9ab9af24bc3de6192efb8583d62df701;
    tmp_dict_key_165 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_c );

    if (unlikely( tmp_dict_key_165 == NULL ))
    {
        tmp_dict_key_165 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_c );
    }

    if ( tmp_dict_key_165 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_163 );
        Py_DECREF( tmp_list_element_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124212 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 381;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_22, tmp_dict_key_165, tmp_dict_value_165 );
    PyList_SET_ITEM( tmp_dict_value_163, 2, tmp_list_element_22 );
    tmp_list_element_22 = const_str_digest_4df60cbe9802293cdd34e373c8a1f5a8;
    Py_INCREF( tmp_list_element_22 );
    PyList_SET_ITEM( tmp_dict_value_163, 3, tmp_list_element_22 );
    tmp_list_element_22 = _PyDict_NewPresized( 1 );
    tmp_dict_value_166 = const_str_digest_ad092776f36ce4f7cc9e6c518c32324e;
    tmp_dict_key_166 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_debugcapi );

    if (unlikely( tmp_dict_key_166 == NULL ))
    {
        tmp_dict_key_166 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_debugcapi );
    }

    if ( tmp_dict_key_166 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_163 );
        Py_DECREF( tmp_list_element_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128634 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 392;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_22, tmp_dict_key_166, tmp_dict_value_166 );
    PyList_SET_ITEM( tmp_dict_value_163, 4, tmp_list_element_22 );
    tmp_dict_key_163 = const_str_plain_frompyobj;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_163, tmp_dict_value_163 );
    Py_DECREF( tmp_dict_value_163 );
    tmp_dict_value_167 = PyList_New( 2 );
    tmp_list_element_23 = const_str_plain_MEMCOPY;
    Py_INCREF( tmp_list_element_23 );
    PyList_SET_ITEM( tmp_dict_value_167, 0, tmp_list_element_23 );
    tmp_list_element_23 = _PyDict_NewPresized( 1 );
    tmp_dict_value_168 = const_str_digest_034683ceccce831b3c4724622e7c61e0;
    tmp_dict_key_168 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_iscomplexarray );

    if (unlikely( tmp_dict_key_168 == NULL ))
    {
        tmp_dict_key_168 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplexarray );
    }

    if ( tmp_dict_key_168 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        Py_DECREF( tmp_dict_value_167 );
        Py_DECREF( tmp_list_element_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128275 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 394;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_list_element_23, tmp_dict_key_168, tmp_dict_value_168 );
    PyList_SET_ITEM( tmp_dict_value_167, 1, tmp_list_element_23 );
    tmp_dict_key_167 = const_str_plain_need;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_167, tmp_dict_value_167 );
    Py_DECREF( tmp_dict_value_167 );
    tmp_called_43 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_l_and );

    if (unlikely( tmp_called_43 == NULL ))
    {
        tmp_called_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l_and );
    }

    if ( tmp_called_43 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126137 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 395;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_75 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isarray );

    if (unlikely( tmp_call_arg_element_75 == NULL ))
    {
        tmp_call_arg_element_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isarray );
    }

    if ( tmp_call_arg_element_75 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124593 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 395;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_76 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_out );

    if (unlikely( tmp_call_arg_element_76 == NULL ))
    {
        tmp_call_arg_element_76 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_out );
    }

    if ( tmp_call_arg_element_76 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124107 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 395;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 395;
    tmp_dict_value_169 = CALL_FUNCTION_WITH_ARGS2( tmp_called_43, tmp_call_arg_element_75, tmp_call_arg_element_76 );
    if ( tmp_dict_value_169 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );

        frame_module->f_lineno = 395;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_169 = const_str_plain__check;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_169, tmp_dict_value_169 );
    Py_DECREF( tmp_dict_value_169 );
    PyList_SET_ITEM( tmp_assign_source_16, 8, tmp_list_element_9 );
    tmp_list_element_9 = _PyDict_NewPresized( 2 );
    tmp_dict_value_170 = const_str_digest_8a412c5a481127f099db01c171a0fb22;
    tmp_dict_key_170 = const_str_plain_docreturn;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_170, tmp_dict_value_170 );
    tmp_dict_value_171 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_isintent_out );

    if (unlikely( tmp_dict_value_171 == NULL ))
    {
        tmp_dict_value_171 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_out );
    }

    if ( tmp_dict_value_171 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        Py_DECREF( tmp_list_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124107 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 398;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_171 = const_str_plain__check;
    PyDict_SetItem( tmp_list_element_9, tmp_dict_key_171, tmp_dict_value_171 );
    PyList_SET_ITEM( tmp_assign_source_16, 9, tmp_list_element_9 );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cb_arg_rules, tmp_assign_source_16 );
    tmp_assign_source_17 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_cb_map, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_function_1_buildcallbacks_of_module_numpy$f2py$cb_rules(  );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        frame_module->f_lineno = 404;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_buildcallbacks, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_function_2_buildcallback_of_module_numpy$f2py$cb_rules(  );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_19 );

        frame_module->f_lineno = 415;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$cb_rules, (Nuitka_StringObject *)const_str_plain_buildcallback, tmp_assign_source_19 );

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

    return MOD_RETURN_VALUE( module_numpy$f2py$cb_rules );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
