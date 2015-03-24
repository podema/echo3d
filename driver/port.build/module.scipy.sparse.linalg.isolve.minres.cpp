// Generated code for Python source for module 'scipy.sparse.linalg.isolve.minres'
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

// The _module_scipy$sparse$linalg$isolve$minres is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$sparse$linalg$isolve$minres;
PyDictObject *moduledict_scipy$sparse$linalg$isolve$minres;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_float_0_0;
extern PyObject *const_float_0_1;
extern PyObject *const_float_1_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_6;
extern PyObject *const_dict_empty;
extern PyObject *const_float_0_01;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_40;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_z;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_cs;
static PyObject *const_str_plain_r1;
static PyObject *const_str_plain_r2;
extern PyObject *const_str_plain_sn;
extern PyObject *const_str_plain_t1;
extern PyObject *const_str_plain_t2;
static PyObject *const_str_plain_w1;
static PyObject *const_str_plain_w2;
extern PyObject *const_str_plain_x0;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_eps;
extern PyObject *const_str_plain_itn;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_phi;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_alfa;
extern PyObject *const_str_plain_beta;
static PyObject *const_str_plain_dbar;
extern PyObject *const_str_plain_diag;
static PyObject *const_str_plain_epsa;
static PyObject *const_str_plain_epsr;
static PyObject *const_str_plain_epsx;
static PyObject *const_str_plain_gbar;
static PyObject *const_str_plain_gmax;
static PyObject *const_str_plain_gmin;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_last;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_oldb;
extern PyObject *const_str_plain_prnt;
static PyObject *const_str_plain_rhs1;
static PyObject *const_str_plain_rhs2;
extern PyObject *const_str_plain_root;
extern PyObject *const_str_plain_show;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain_str1;
extern PyObject *const_str_plain_str2;
extern PyObject *const_str_plain_str3;
static PyObject *const_str_plain_Acond;
extern PyObject *const_str_plain_Ainfo;
static PyObject *const_str_plain_Anorm;
static PyObject *const_str_plain_beta1;
extern PyObject *const_str_plain_check;
extern PyObject *const_str_plain_delta;
extern PyObject *const_str_plain_denom;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_plain_epsln;
extern PyObject *const_str_plain_finfo;
extern PyObject *const_str_plain_first;
extern PyObject *const_str_plain_gamma;
extern PyObject *const_str_plain_inner;
extern PyObject *const_str_plain_istop;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_rnorm;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_shift;
extern PyObject *const_str_plain_test1;
extern PyObject *const_str_plain_test2;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_xtype;
static PyObject *const_str_plain_ynorm;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_plain_Arnorm;
extern PyObject *const_str_plain_footer;
extern PyObject *const_str_plain_header;
extern PyObject *const_str_plain_matvec;
extern PyObject *const_str_plain_minres;
static PyObject *const_str_plain_oldeps;
extern PyObject *const_str_plain_phibar;
extern PyObject *const_str_plain_psolve;
static PyObject *const_str_plain_qrnorm;
static PyObject *const_str_plain_tnorm2;
static PyObject *const_str_plain_ynorm2;
extern PyObject *const_float_1e_minus_05;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_maxiter;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_callback;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_iterative;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_make_system;
extern PyObject *const_str_plain_postprocess;
extern PyObject *const_str_plain_set_docstring;
extern PyObject *const_float_0_3333333333333333;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_list_str_plain_minres_list;
extern PyObject *const_tuple_str_plain_norm_tuple;
extern PyObject *const_tuple_str_plain_make_system_tuple;
static PyObject *const_tuple_str_plain_set_docstring_tuple;
static PyObject *const_list_a48e5cdbe14eeaa01904f2f5185158a6_list;
static PyObject *const_str_digest_09f8badf5af3608c6b1374de3fc318af;
static PyObject *const_str_digest_1341bc9eb9e075668441f92351f118a3;
static PyObject *const_str_digest_1630a433da066e76f0bc02da222a4118;
static PyObject *const_str_digest_1731415aa23503dacb4823a4946b9b61;
static PyObject *const_str_digest_18d035b5007b391b497b9617a3975eb1;
static PyObject *const_str_digest_1a0d34ed758b0d05d1c02aefa1a0f060;
static PyObject *const_str_digest_1c1ad65706a8ca506c2820f23fd38f0a;
static PyObject *const_str_digest_2748a1d55c3d3c8cc0c4ea19f30a80ff;
static PyObject *const_str_digest_277febb702dffc40c0abd7f1b2db150c;
static PyObject *const_str_digest_2fb1e1aa1ade90de4986701765bf4563;
static PyObject *const_str_digest_31b0198f3d470a3cdb4716f799bd1818;
extern PyObject *const_str_digest_31c135a8754779dc25b4674933b86e04;
static PyObject *const_str_digest_56fe2a4178f99d84d9275e0719e61118;
static PyObject *const_str_digest_5d3c1511e0127ae4d5761eeb22141451;
static PyObject *const_str_digest_622ce33ad4f7419d7cd97411bf250ccf;
static PyObject *const_str_digest_6f65cb8d7ceb9fdf95139baeedd5f354;
static PyObject *const_str_digest_869b257a3713a4fad2f4747f6d9356d1;
static PyObject *const_str_digest_953bbe73c5b24f47e085a179c1985b7d;
static PyObject *const_str_digest_9ef3c7d589134de23aaeb599e3b68c81;
static PyObject *const_str_digest_aa155003e3eba007cc927a11c9c176c9;
static PyObject *const_str_digest_af085d5b06bae1d98a4a79d4e0998f83;
static PyObject *const_str_digest_af2cbe90efec585308c63910a2483c30;
static PyObject *const_str_digest_b74332a3acd2279c8bb145ac505a454a;
static PyObject *const_str_digest_b8a6c03c6ff9316626918e48c049e118;
static PyObject *const_str_digest_c6b795940a742365522d6a87e0b3806b;
static PyObject *const_str_digest_c9931b6e8104897e338b9431a416dd80;
static PyObject *const_str_digest_dbe666ccdb8b5b6b75af5de437147d37;
static PyObject *const_str_digest_dcbb39045da50d4133319fa7327bd785;
static PyObject *const_str_digest_dda2eed0399d148ba4de6d0012928690;
static PyObject *const_str_digest_e0f74aca6ac7666b235e0ceb5f1d08c4;
static PyObject *const_str_digest_ebcabe47901deed8a1fe71210dea101c;
static PyObject *const_str_digest_f00c15137ebcdc1885cd6ad9c47a135c;
static PyObject *const_str_digest_fec14bc38691115c8dd3ed95f27b4579;
static PyObject *const_tuple_22c65d3fe66d2095ae0cfd01dd97fa08_tuple;
static PyObject *const_tuple_2cc03bf6bb8534a8d959a9f2f0691265_tuple;
static PyObject *const_tuple_4e9c88d5f0c1394f9d94477640a82a33_tuple;
static PyObject *const_tuple_b5daa950859866d6788a4db0785d6235_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_r1 = UNSTREAM_STRING( &constant_bin[ 53830 ], 2, 1 );
    const_str_plain_r2 = UNSTREAM_STRING( &constant_bin[ 53778 ], 2, 1 );
    const_str_plain_w1 = UNSTREAM_STRING( &constant_bin[ 465785 ], 2, 1 );
    const_str_plain_w2 = UNSTREAM_STRING( &constant_bin[ 117495 ], 2, 1 );
    const_str_plain_dbar = UNSTREAM_STRING( &constant_bin[ 285654 ], 4, 1 );
    const_str_plain_epsa = UNSTREAM_STRING( &constant_bin[ 239634 ], 4, 1 );
    const_str_plain_epsr = UNSTREAM_STRING( &constant_bin[ 239686 ], 4, 1 );
    const_str_plain_epsx = UNSTREAM_STRING( &constant_bin[ 2462759 ], 4, 1 );
    const_str_plain_gbar = UNSTREAM_STRING( &constant_bin[ 286106 ], 4, 1 );
    const_str_plain_gmax = UNSTREAM_STRING( &constant_bin[ 63923 ], 4, 1 );
    const_str_plain_gmin = UNSTREAM_STRING( &constant_bin[ 63975 ], 4, 1 );
    const_str_plain_rhs1 = UNSTREAM_STRING( &constant_bin[ 285852 ], 4, 1 );
    const_str_plain_rhs2 = UNSTREAM_STRING( &constant_bin[ 285954 ], 4, 1 );
    const_str_plain_Acond = UNSTREAM_STRING( &constant_bin[ 286055 ], 5, 1 );
    const_str_plain_Anorm = UNSTREAM_STRING( &constant_bin[ 286004 ], 5, 1 );
    const_str_plain_beta1 = UNSTREAM_STRING( &constant_bin[ 285552 ], 5, 1 );
    const_str_plain_epsln = UNSTREAM_STRING( &constant_bin[ 285603 ], 5, 1 );
    const_str_plain_ynorm = UNSTREAM_STRING( &constant_bin[ 285902 ], 5, 1 );
    const_str_plain_Arnorm = UNSTREAM_STRING( &constant_bin[ 286258 ], 6, 1 );
    const_str_plain_oldeps = UNSTREAM_STRING( &constant_bin[ 2462763 ], 6, 1 );
    const_str_plain_qrnorm = UNSTREAM_STRING( &constant_bin[ 2462769 ], 6, 1 );
    const_str_plain_tnorm2 = UNSTREAM_STRING( &constant_bin[ 285500 ], 6, 1 );
    const_str_plain_ynorm2 = UNSTREAM_STRING( &constant_bin[ 285902 ], 6, 1 );
    const_list_str_plain_minres_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_minres_list, 0, const_str_plain_minres ); Py_INCREF( const_str_plain_minres );
    const_tuple_str_plain_set_docstring_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_set_docstring_tuple, 0, const_str_plain_set_docstring ); Py_INCREF( const_str_plain_set_docstring );
    const_list_a48e5cdbe14eeaa01904f2f5185158a6_list = PyList_New( 11 );
    const_str_digest_1731415aa23503dacb4823a4946b9b61 = UNSTREAM_STRING( &constant_bin[ 2462775 ], 51, 0 );
    PyList_SET_ITEM( const_list_a48e5cdbe14eeaa01904f2f5185158a6_list, 0, const_str_digest_1731415aa23503dacb4823a4946b9b61 ); Py_INCREF( const_str_digest_1731415aa23503dacb4823a4946b9b61 );
    const_str_digest_b74332a3acd2279c8bb145ac505a454a = UNSTREAM_STRING( &constant_bin[ 2462826 ], 51, 0 );
    PyList_SET_ITEM( const_list_a48e5cdbe14eeaa01904f2f5185158a6_list, 1, const_str_digest_b74332a3acd2279c8bb145ac505a454a ); Py_INCREF( const_str_digest_b74332a3acd2279c8bb145ac505a454a );
    const_str_digest_09f8badf5af3608c6b1374de3fc318af = UNSTREAM_STRING( &constant_bin[ 2462877 ], 51, 0 );
    PyList_SET_ITEM( const_list_a48e5cdbe14eeaa01904f2f5185158a6_list, 2, const_str_digest_09f8badf5af3608c6b1374de3fc318af ); Py_INCREF( const_str_digest_09f8badf5af3608c6b1374de3fc318af );
    const_str_digest_af085d5b06bae1d98a4a79d4e0998f83 = UNSTREAM_STRING( &constant_bin[ 2462928 ], 51, 0 );
    PyList_SET_ITEM( const_list_a48e5cdbe14eeaa01904f2f5185158a6_list, 3, const_str_digest_af085d5b06bae1d98a4a79d4e0998f83 ); Py_INCREF( const_str_digest_af085d5b06bae1d98a4a79d4e0998f83 );
    const_str_digest_af2cbe90efec585308c63910a2483c30 = UNSTREAM_STRING( &constant_bin[ 2462979 ], 51, 0 );
    PyList_SET_ITEM( const_list_a48e5cdbe14eeaa01904f2f5185158a6_list, 4, const_str_digest_af2cbe90efec585308c63910a2483c30 ); Py_INCREF( const_str_digest_af2cbe90efec585308c63910a2483c30 );
    const_str_digest_e0f74aca6ac7666b235e0ceb5f1d08c4 = UNSTREAM_STRING( &constant_bin[ 2463030 ], 51, 0 );
    PyList_SET_ITEM( const_list_a48e5cdbe14eeaa01904f2f5185158a6_list, 5, const_str_digest_e0f74aca6ac7666b235e0ceb5f1d08c4 ); Py_INCREF( const_str_digest_e0f74aca6ac7666b235e0ceb5f1d08c4 );
    const_str_digest_ebcabe47901deed8a1fe71210dea101c = UNSTREAM_STRING( &constant_bin[ 2463081 ], 51, 0 );
    PyList_SET_ITEM( const_list_a48e5cdbe14eeaa01904f2f5185158a6_list, 6, const_str_digest_ebcabe47901deed8a1fe71210dea101c ); Py_INCREF( const_str_digest_ebcabe47901deed8a1fe71210dea101c );
    const_str_digest_f00c15137ebcdc1885cd6ad9c47a135c = UNSTREAM_STRING( &constant_bin[ 2463132 ], 51, 0 );
    PyList_SET_ITEM( const_list_a48e5cdbe14eeaa01904f2f5185158a6_list, 7, const_str_digest_f00c15137ebcdc1885cd6ad9c47a135c ); Py_INCREF( const_str_digest_f00c15137ebcdc1885cd6ad9c47a135c );
    const_str_digest_277febb702dffc40c0abd7f1b2db150c = UNSTREAM_STRING( &constant_bin[ 2463183 ], 51, 0 );
    PyList_SET_ITEM( const_list_a48e5cdbe14eeaa01904f2f5185158a6_list, 8, const_str_digest_277febb702dffc40c0abd7f1b2db150c ); Py_INCREF( const_str_digest_277febb702dffc40c0abd7f1b2db150c );
    const_str_digest_aa155003e3eba007cc927a11c9c176c9 = UNSTREAM_STRING( &constant_bin[ 2463234 ], 51, 0 );
    PyList_SET_ITEM( const_list_a48e5cdbe14eeaa01904f2f5185158a6_list, 9, const_str_digest_aa155003e3eba007cc927a11c9c176c9 ); Py_INCREF( const_str_digest_aa155003e3eba007cc927a11c9c176c9 );
    const_str_digest_c9931b6e8104897e338b9431a416dd80 = UNSTREAM_STRING( &constant_bin[ 2463285 ], 51, 0 );
    PyList_SET_ITEM( const_list_a48e5cdbe14eeaa01904f2f5185158a6_list, 10, const_str_digest_c9931b6e8104897e338b9431a416dd80 ); Py_INCREF( const_str_digest_c9931b6e8104897e338b9431a416dd80 );
    const_str_digest_1341bc9eb9e075668441f92351f118a3 = UNSTREAM_STRING( &constant_bin[ 2463336 ], 53, 0 );
    const_str_digest_1630a433da066e76f0bc02da222a4118 = UNSTREAM_STRING( &constant_bin[ 2463389 ], 68, 0 );
    const_str_digest_18d035b5007b391b497b9617a3975eb1 = UNSTREAM_STRING( &constant_bin[ 2463457 ], 39, 0 );
    const_str_digest_1a0d34ed758b0d05d1c02aefa1a0f060 = UNSTREAM_STRING( &constant_bin[ 2463496 ], 39, 0 );
    const_str_digest_1c1ad65706a8ca506c2820f23fd38f0a = UNSTREAM_STRING( &constant_bin[ 2463535 ], 7, 0 );
    const_str_digest_2748a1d55c3d3c8cc0c4ea19f30a80ff = UNSTREAM_STRING( &constant_bin[ 2463542 ], 16, 0 );
    const_str_digest_2fb1e1aa1ade90de4986701765bf4563 = UNSTREAM_STRING( &constant_bin[ 2463558 ], 18, 0 );
    const_str_digest_31b0198f3d470a3cdb4716f799bd1818 = UNSTREAM_STRING( &constant_bin[ 2463576 ], 18, 0 );
    const_str_digest_56fe2a4178f99d84d9275e0719e61118 = UNSTREAM_STRING( &constant_bin[ 2463594 ], 16, 0 );
    const_str_digest_5d3c1511e0127ae4d5761eeb22141451 = UNSTREAM_STRING( &constant_bin[ 2463610 ], 425, 0 );
    const_str_digest_622ce33ad4f7419d7cd97411bf250ccf = UNSTREAM_STRING( &constant_bin[ 2464035 ], 20, 0 );
    const_str_digest_6f65cb8d7ceb9fdf95139baeedd5f354 = UNSTREAM_STRING( &constant_bin[ 2464055 ], 237, 0 );
    const_str_digest_869b257a3713a4fad2f4747f6d9356d1 = UNSTREAM_STRING( &constant_bin[ 2464292 ], 25, 0 );
    const_str_digest_953bbe73c5b24f47e085a179c1985b7d = UNSTREAM_STRING( &constant_bin[ 2464317 ], 33, 0 );
    const_str_digest_9ef3c7d589134de23aaeb599e3b68c81 = UNSTREAM_STRING( &constant_bin[ 2464350 ], 17, 0 );
    const_str_digest_b8a6c03c6ff9316626918e48c049e118 = UNSTREAM_STRING( &constant_bin[ 2464367 ], 40, 0 );
    const_str_digest_c6b795940a742365522d6a87e0b3806b = UNSTREAM_STRING( &constant_bin[ 2464407 ], 69, 0 );
    const_str_digest_dbe666ccdb8b5b6b75af5de437147d37 = UNSTREAM_STRING( &constant_bin[ 2464476 ], 35, 0 );
    const_str_digest_dcbb39045da50d4133319fa7327bd785 = UNSTREAM_STRING( &constant_bin[ 2464511 ], 28, 0 );
    const_str_digest_dda2eed0399d148ba4de6d0012928690 = UNSTREAM_STRING( &constant_bin[ 2464539 ], 28, 0 );
    const_str_digest_fec14bc38691115c8dd3ed95f27b4579 = UNSTREAM_STRING( &constant_bin[ 2464567 ], 34, 0 );
    const_tuple_22c65d3fe66d2095ae0cfd01dd97fa08_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2464601 ], 652 );
    const_tuple_2cc03bf6bb8534a8d959a9f2f0691265_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_2cc03bf6bb8534a8d959a9f2f0691265_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_2cc03bf6bb8534a8d959a9f2f0691265_tuple, 1, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    PyTuple_SET_ITEM( const_tuple_2cc03bf6bb8534a8d959a9f2f0691265_tuple, 2, const_float_1e_minus_05 ); Py_INCREF( const_float_1e_minus_05 );
    PyTuple_SET_ITEM( const_tuple_2cc03bf6bb8534a8d959a9f2f0691265_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_2cc03bf6bb8534a8d959a9f2f0691265_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_2cc03bf6bb8534a8d959a9f2f0691265_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_2cc03bf6bb8534a8d959a9f2f0691265_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_2cc03bf6bb8534a8d959a9f2f0691265_tuple, 7, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_2cc03bf6bb8534a8d959a9f2f0691265_tuple, 8, Py_False ); Py_INCREF( Py_False );
    const_tuple_4e9c88d5f0c1394f9d94477640a82a33_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_4e9c88d5f0c1394f9d94477640a82a33_tuple, 0, const_str_plain_sqrt ); Py_INCREF( const_str_plain_sqrt );
    PyTuple_SET_ITEM( const_tuple_4e9c88d5f0c1394f9d94477640a82a33_tuple, 1, const_str_plain_inner ); Py_INCREF( const_str_plain_inner );
    PyTuple_SET_ITEM( const_tuple_4e9c88d5f0c1394f9d94477640a82a33_tuple, 2, const_str_plain_finfo ); Py_INCREF( const_str_plain_finfo );
    PyTuple_SET_ITEM( const_tuple_4e9c88d5f0c1394f9d94477640a82a33_tuple, 3, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    const_tuple_b5daa950859866d6788a4db0785d6235_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_b5daa950859866d6788a4db0785d6235_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_b5daa950859866d6788a4db0785d6235_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_b5daa950859866d6788a4db0785d6235_tuple, 2, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_b5daa950859866d6788a4db0785d6235_tuple, 3, const_str_plain_shift ); Py_INCREF( const_str_plain_shift );
    PyTuple_SET_ITEM( const_tuple_b5daa950859866d6788a4db0785d6235_tuple, 4, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_b5daa950859866d6788a4db0785d6235_tuple, 5, const_str_plain_maxiter ); Py_INCREF( const_str_plain_maxiter );
    PyTuple_SET_ITEM( const_tuple_b5daa950859866d6788a4db0785d6235_tuple, 6, const_str_plain_xtype ); Py_INCREF( const_str_plain_xtype );
    PyTuple_SET_ITEM( const_tuple_b5daa950859866d6788a4db0785d6235_tuple, 7, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_b5daa950859866d6788a4db0785d6235_tuple, 8, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    PyTuple_SET_ITEM( const_tuple_b5daa950859866d6788a4db0785d6235_tuple, 9, const_str_plain_show ); Py_INCREF( const_str_plain_show );
    PyTuple_SET_ITEM( const_tuple_b5daa950859866d6788a4db0785d6235_tuple, 10, const_str_plain_check ); Py_INCREF( const_str_plain_check );
}

// The module code objects.
static PyCodeObject *codeobj_ad634b265280ff54a4fcdcf8375704ae;
static PyCodeObject *codeobj_484e6b1dae12d8963f3d82cc0ecc1337;
static PyCodeObject *codeobj_de0e45f4295c3890b711c331dec4965a;

static void _initModuleCodeObjects(void)
{
    codeobj_ad634b265280ff54a4fcdcf8375704ae = MAKE_CODEOBJ( const_str_digest_c6b795940a742365522d6a87e0b3806b, const_str_plain_minres, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_484e6b1dae12d8963f3d82cc0ecc1337 = MAKE_CODEOBJ( const_str_digest_c6b795940a742365522d6a87e0b3806b, const_str_plain_minres, 41, const_tuple_b5daa950859866d6788a4db0785d6235_tuple, 11, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_de0e45f4295c3890b711c331dec4965a = MAKE_CODEOBJ( const_str_digest_c6b795940a742365522d6a87e0b3806b, const_str_plain_minres, 41, const_tuple_22c65d3fe66d2095ae0cfd01dd97fa08_tuple, 11, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_minres_of_module_scipy$sparse$linalg$isolve$minres( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_minres_of_module_scipy$sparse$linalg$isolve$minres( Nuitka_FunctionObject *self, PyObject *_python_par_A, PyObject *_python_par_b, PyObject *_python_par_x0, PyObject *_python_par_shift, PyObject *_python_par_tol, PyObject *_python_par_maxiter, PyObject *_python_par_xtype, PyObject *_python_par_M, PyObject *_python_par_callback, PyObject *_python_par_show, PyObject *_python_par_check )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_A; par_A.object = _python_par_A;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_x0; par_x0.object = _python_par_x0;
    PyObjectLocalVariable par_shift; par_shift.object = _python_par_shift;
    PyObjectLocalVariable par_tol; par_tol.object = _python_par_tol;
    PyObjectLocalVariable par_maxiter; par_maxiter.object = _python_par_maxiter;
    PyObjectLocalVariable par_xtype; par_xtype.object = _python_par_xtype;
    PyObjectLocalVariable par_M; par_M.object = _python_par_M;
    PyObjectLocalVariable par_callback; par_callback.object = _python_par_callback;
    PyObjectLocalVariable par_show; par_show.object = _python_par_show;
    PyObjectLocalVariable par_check; par_check.object = _python_par_check;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_postprocess;
    PyObjectLocalVariable var_matvec;
    PyObjectLocalVariable var_psolve;
    PyObjectLocalVariable var_first;
    PyObjectLocalVariable var_last;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_msg;
    PyObjectLocalVariable var_istop;
    PyObjectLocalVariable var_itn;
    PyObjectLocalVariable var_Anorm;
    PyObjectLocalVariable var_Acond;
    PyObjectLocalVariable var_rnorm;
    PyObjectLocalVariable var_ynorm;
    PyObjectLocalVariable var_eps;
    PyObjectLocalVariable var_y;
    PyObjectLocalVariable var_r1;
    PyObjectLocalVariable var_beta1;
    PyObjectLocalVariable var_w;
    PyObjectLocalVariable var_r2;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_t;
    PyObjectLocalVariable var_z;
    PyObjectLocalVariable var_epsa;
    PyObjectLocalVariable var_oldb;
    PyObjectLocalVariable var_beta;
    PyObjectLocalVariable var_dbar;
    PyObjectLocalVariable var_epsln;
    PyObjectLocalVariable var_qrnorm;
    PyObjectLocalVariable var_phibar;
    PyObjectLocalVariable var_rhs1;
    PyObjectLocalVariable var_rhs2;
    PyObjectLocalVariable var_tnorm2;
    PyObjectLocalVariable var_ynorm2;
    PyObjectLocalVariable var_cs;
    PyObjectLocalVariable var_sn;
    PyObjectLocalVariable var_w2;
    PyObjectLocalVariable var_v;
    PyObjectLocalVariable var_alfa;
    PyObjectLocalVariable var_gmax;
    PyObjectLocalVariable var_gmin;
    PyObjectLocalVariable var_oldeps;
    PyObjectLocalVariable var_delta;
    PyObjectLocalVariable var_gbar;
    PyObjectLocalVariable var_root;
    PyObjectLocalVariable var_Arnorm;
    PyObjectLocalVariable var_gamma;
    PyObjectLocalVariable var_phi;
    PyObjectLocalVariable var_denom;
    PyObjectLocalVariable var_w1;
    PyObjectLocalVariable var_epsx;
    PyObjectLocalVariable var_epsr;
    PyObjectLocalVariable var_diag;
    PyObjectLocalVariable var_test1;
    PyObjectLocalVariable var_test2;
    PyObjectLocalVariable var_t1;
    PyObjectLocalVariable var_t2;
    PyObjectLocalVariable var_prnt;
    PyObjectLocalVariable var_str1;
    PyObjectLocalVariable var_str2;
    PyObjectLocalVariable var_str3;
    PyObjectLocalVariable var_info;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_1__element_3;
    PyObjectTempVariable tmp_tuple_unpack_1__element_4;
    PyObjectTempVariable tmp_tuple_unpack_1__element_5;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_end;
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
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_assign_source_137;
    PyObject *tmp_assign_source_138;
    PyObject *tmp_assign_source_139;
    PyObject *tmp_assign_source_140;
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
    PyObject *tmp_binop_left_15;
    PyObject *tmp_binop_left_16;
    PyObject *tmp_binop_left_17;
    PyObject *tmp_binop_left_18;
    PyObject *tmp_binop_left_19;
    PyObject *tmp_binop_left_20;
    PyObject *tmp_binop_left_21;
    PyObject *tmp_binop_left_22;
    PyObject *tmp_binop_left_23;
    PyObject *tmp_binop_left_24;
    PyObject *tmp_binop_left_25;
    PyObject *tmp_binop_left_26;
    PyObject *tmp_binop_left_27;
    PyObject *tmp_binop_left_28;
    PyObject *tmp_binop_left_29;
    PyObject *tmp_binop_left_30;
    PyObject *tmp_binop_left_31;
    PyObject *tmp_binop_left_32;
    PyObject *tmp_binop_left_33;
    PyObject *tmp_binop_left_34;
    PyObject *tmp_binop_left_35;
    PyObject *tmp_binop_left_36;
    PyObject *tmp_binop_left_37;
    PyObject *tmp_binop_left_38;
    PyObject *tmp_binop_left_39;
    PyObject *tmp_binop_left_40;
    PyObject *tmp_binop_left_41;
    PyObject *tmp_binop_left_42;
    PyObject *tmp_binop_left_43;
    PyObject *tmp_binop_left_44;
    PyObject *tmp_binop_left_45;
    PyObject *tmp_binop_left_46;
    PyObject *tmp_binop_left_47;
    PyObject *tmp_binop_left_48;
    PyObject *tmp_binop_left_49;
    PyObject *tmp_binop_left_50;
    PyObject *tmp_binop_left_51;
    PyObject *tmp_binop_left_52;
    PyObject *tmp_binop_left_53;
    PyObject *tmp_binop_left_54;
    PyObject *tmp_binop_left_55;
    PyObject *tmp_binop_left_56;
    PyObject *tmp_binop_left_57;
    PyObject *tmp_binop_left_58;
    PyObject *tmp_binop_left_59;
    PyObject *tmp_binop_left_60;
    PyObject *tmp_binop_left_61;
    PyObject *tmp_binop_left_62;
    PyObject *tmp_binop_left_63;
    PyObject *tmp_binop_left_64;
    PyObject *tmp_binop_left_65;
    PyObject *tmp_binop_left_66;
    PyObject *tmp_binop_left_67;
    PyObject *tmp_binop_left_68;
    PyObject *tmp_binop_left_69;
    PyObject *tmp_binop_left_70;
    PyObject *tmp_binop_left_71;
    PyObject *tmp_binop_left_72;
    PyObject *tmp_binop_left_73;
    PyObject *tmp_binop_left_74;
    PyObject *tmp_binop_left_75;
    PyObject *tmp_binop_left_76;
    PyObject *tmp_binop_left_77;
    PyObject *tmp_binop_left_78;
    PyObject *tmp_binop_left_79;
    PyObject *tmp_binop_left_80;
    PyObject *tmp_binop_left_81;
    PyObject *tmp_binop_left_82;
    PyObject *tmp_binop_left_83;
    PyObject *tmp_binop_left_84;
    PyObject *tmp_binop_left_85;
    PyObject *tmp_binop_left_86;
    PyObject *tmp_binop_left_87;
    PyObject *tmp_binop_left_88;
    PyObject *tmp_binop_left_89;
    PyObject *tmp_binop_left_90;
    PyObject *tmp_binop_left_91;
    PyObject *tmp_binop_left_92;
    PyObject *tmp_binop_left_93;
    PyObject *tmp_binop_left_94;
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
    PyObject *tmp_binop_right_15;
    PyObject *tmp_binop_right_16;
    PyObject *tmp_binop_right_17;
    PyObject *tmp_binop_right_18;
    PyObject *tmp_binop_right_19;
    PyObject *tmp_binop_right_20;
    PyObject *tmp_binop_right_21;
    PyObject *tmp_binop_right_22;
    PyObject *tmp_binop_right_23;
    PyObject *tmp_binop_right_24;
    PyObject *tmp_binop_right_25;
    PyObject *tmp_binop_right_26;
    PyObject *tmp_binop_right_27;
    PyObject *tmp_binop_right_28;
    PyObject *tmp_binop_right_29;
    PyObject *tmp_binop_right_30;
    PyObject *tmp_binop_right_31;
    PyObject *tmp_binop_right_32;
    PyObject *tmp_binop_right_33;
    PyObject *tmp_binop_right_34;
    PyObject *tmp_binop_right_35;
    PyObject *tmp_binop_right_36;
    PyObject *tmp_binop_right_37;
    PyObject *tmp_binop_right_38;
    PyObject *tmp_binop_right_39;
    PyObject *tmp_binop_right_40;
    PyObject *tmp_binop_right_41;
    PyObject *tmp_binop_right_42;
    PyObject *tmp_binop_right_43;
    PyObject *tmp_binop_right_44;
    PyObject *tmp_binop_right_45;
    PyObject *tmp_binop_right_46;
    PyObject *tmp_binop_right_47;
    PyObject *tmp_binop_right_48;
    PyObject *tmp_binop_right_49;
    PyObject *tmp_binop_right_50;
    PyObject *tmp_binop_right_51;
    PyObject *tmp_binop_right_52;
    PyObject *tmp_binop_right_53;
    PyObject *tmp_binop_right_54;
    PyObject *tmp_binop_right_55;
    PyObject *tmp_binop_right_56;
    PyObject *tmp_binop_right_57;
    PyObject *tmp_binop_right_58;
    PyObject *tmp_binop_right_59;
    PyObject *tmp_binop_right_60;
    PyObject *tmp_binop_right_61;
    PyObject *tmp_binop_right_62;
    PyObject *tmp_binop_right_63;
    PyObject *tmp_binop_right_64;
    PyObject *tmp_binop_right_65;
    PyObject *tmp_binop_right_66;
    PyObject *tmp_binop_right_67;
    PyObject *tmp_binop_right_68;
    PyObject *tmp_binop_right_69;
    PyObject *tmp_binop_right_70;
    PyObject *tmp_binop_right_71;
    PyObject *tmp_binop_right_72;
    PyObject *tmp_binop_right_73;
    PyObject *tmp_binop_right_74;
    PyObject *tmp_binop_right_75;
    PyObject *tmp_binop_right_76;
    PyObject *tmp_binop_right_77;
    PyObject *tmp_binop_right_78;
    PyObject *tmp_binop_right_79;
    PyObject *tmp_binop_right_80;
    PyObject *tmp_binop_right_81;
    PyObject *tmp_binop_right_82;
    PyObject *tmp_binop_right_83;
    PyObject *tmp_binop_right_84;
    PyObject *tmp_binop_right_85;
    PyObject *tmp_binop_right_86;
    PyObject *tmp_binop_right_87;
    PyObject *tmp_binop_right_88;
    PyObject *tmp_binop_right_89;
    PyObject *tmp_binop_right_90;
    PyObject *tmp_binop_right_91;
    PyObject *tmp_binop_right_92;
    PyObject *tmp_binop_right_93;
    PyObject *tmp_binop_right_94;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_call_pos_3;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    int tmp_cmp_Eq_6;
    int tmp_cmp_Eq_7;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_GtE_1;
    int tmp_cmp_GtE_2;
    int tmp_cmp_GtE_3;
    int tmp_cmp_GtE_4;
    int tmp_cmp_GtE_5;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    int tmp_cmp_Lt_3;
    int tmp_cmp_LtE_1;
    int tmp_cmp_LtE_2;
    int tmp_cmp_LtE_3;
    int tmp_cmp_LtE_4;
    int tmp_cmp_LtE_5;
    int tmp_cmp_LtE_6;
    int tmp_cmp_LtE_7;
    int tmp_cmp_LtE_8;
    int tmp_cmp_LtE_9;
    int tmp_cmp_LtE_10;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
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
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
    PyObject *tmp_compare_left_20;
    PyObject *tmp_compare_left_21;
    PyObject *tmp_compare_left_22;
    PyObject *tmp_compare_left_23;
    PyObject *tmp_compare_left_24;
    PyObject *tmp_compare_left_25;
    PyObject *tmp_compare_left_26;
    PyObject *tmp_compare_left_27;
    PyObject *tmp_compare_left_28;
    PyObject *tmp_compare_left_29;
    PyObject *tmp_compare_left_30;
    PyObject *tmp_compare_left_31;
    PyObject *tmp_compare_left_32;
    PyObject *tmp_compare_left_33;
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
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compare_right_20;
    PyObject *tmp_compare_right_21;
    PyObject *tmp_compare_right_22;
    PyObject *tmp_compare_right_23;
    PyObject *tmp_compare_right_24;
    PyObject *tmp_compare_right_25;
    PyObject *tmp_compare_right_26;
    PyObject *tmp_compare_right_27;
    PyObject *tmp_compare_right_28;
    PyObject *tmp_compare_right_29;
    PyObject *tmp_compare_right_30;
    PyObject *tmp_compare_right_31;
    PyObject *tmp_compare_right_32;
    PyObject *tmp_compare_right_33;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
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
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_484e6b1dae12d8963f3d82cc0ecc1337, module_scipy$sparse$linalg$isolve$minres );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_make_system );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_make_system );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 279280 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_1 = par_A.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_2 = par_M.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_3 = par_x0.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2178 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_4 = par_b.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_5 = par_xtype.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 279320 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 46;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_2 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_3 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
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


        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_3;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_4 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 2 );
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


        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_3.object == NULL );
    tmp_tuple_unpack_1__element_3.object = tmp_assign_source_4;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_5 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 3 );
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


        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_4.object == NULL );
    tmp_tuple_unpack_1__element_4.object = tmp_assign_source_5;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_6 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 4 );
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


        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_5.object == NULL );
    tmp_tuple_unpack_1__element_5.object = tmp_assign_source_6;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_1;
    }
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1.object;

    if (par_A.object == NULL)
    {
        par_A.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = par_A.object;
        par_A.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2.object;

    if (par_M.object == NULL)
    {
        par_M.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = par_M.object;
        par_M.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_assign_source_9 = tmp_tuple_unpack_1__element_3.object;

    assert( var_x.object == NULL );
    var_x.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_4.object;

    if (par_b.object == NULL)
    {
        par_b.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = par_b.object;
        par_b.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    tmp_assign_source_11 = tmp_tuple_unpack_1__element_5.object;

    assert( var_postprocess.object == NULL );
    var_postprocess.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

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

    Py_XDECREF( tmp_tuple_unpack_1__element_4.object );
    tmp_tuple_unpack_1__element_4.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_5.object );
    tmp_tuple_unpack_1__element_5.object = NULL;

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
    tmp_source_name_1 = par_A.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_matvec );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    assert( var_matvec.object == NULL );
    var_matvec.object = tmp_assign_source_12;

    tmp_source_name_2 = par_M.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_matvec );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    assert( var_psolve.object == NULL );
    var_psolve.object = tmp_assign_source_13;

    tmp_assign_source_14 = const_str_digest_56fe2a4178f99d84d9275e0719e61118;
    assert( var_first.object == NULL );
    var_first.object = INCREASE_REFCOUNT( tmp_assign_source_14 );

    tmp_assign_source_15 = const_str_digest_2748a1d55c3d3c8cc0c4ea19f30a80ff;
    assert( var_last.object == NULL );
    var_last.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    tmp_source_name_3 = par_A.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    assert( var_n.object == NULL );
    var_n.object = tmp_assign_source_16;

    tmp_compare_left_1 = par_maxiter.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
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
    tmp_binop_left_1 = const_int_pos_5;
    tmp_binop_right_1 = var_n.object;

    tmp_assign_source_17 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    if (par_maxiter.object == NULL)
    {
        par_maxiter.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = par_maxiter.object;
        par_maxiter.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    branch_no_1:;
    tmp_assign_source_18 = LIST_COPY( const_list_a48e5cdbe14eeaa01904f2f5185158a6_list );
    assert( var_msg.object == NULL );
    var_msg.object = tmp_assign_source_18;

    tmp_cond_value_1 = par_show.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
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
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = var_first.object;

    tmp_binop_right_2 = const_str_digest_dcbb39045da50d4133319fa7327bd785;
    tmp_call_arg_element_6 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 72;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_3 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_3 = var_first.object;

    tmp_binop_left_4 = const_str_digest_dbe666ccdb8b5b6b75af5de437147d37;
    tmp_binop_right_4 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_n.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_shift.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70589 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 1, tmp_tuple_element_1 );
    tmp_binop_right_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 73;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_5 = var_first.object;

    tmp_binop_left_6 = const_str_digest_fec14bc38691115c8dd3ed95f27b4579;
    tmp_binop_right_6 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_maxiter.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_6, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_tol.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161861 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_6, 1, tmp_tuple_element_2 );
    tmp_binop_right_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 74;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 75;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_assign_source_19 = const_int_0;
    assert( var_istop.object == NULL );
    var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_19 );

    tmp_assign_source_20 = const_int_0;
    assert( var_itn.object == NULL );
    var_itn.object = INCREASE_REFCOUNT( tmp_assign_source_20 );

    tmp_assign_source_21 = const_int_0;
    assert( var_Anorm.object == NULL );
    var_Anorm.object = INCREASE_REFCOUNT( tmp_assign_source_21 );

    tmp_assign_source_22 = const_int_0;
    assert( var_Acond.object == NULL );
    var_Acond.object = INCREASE_REFCOUNT( tmp_assign_source_22 );

    tmp_assign_source_23 = const_int_0;
    assert( var_rnorm.object == NULL );
    var_rnorm.object = INCREASE_REFCOUNT( tmp_assign_source_23 );

    tmp_assign_source_24 = const_int_0;
    assert( var_ynorm.object == NULL );
    var_ynorm.object = INCREASE_REFCOUNT( tmp_assign_source_24 );

    tmp_source_name_4 = var_x.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    if (par_xtype.object == NULL)
    {
        par_xtype.object = tmp_assign_source_25;
    }
    else
    {
        PyObject *old = par_xtype.object;
        par_xtype.object = tmp_assign_source_25;
        Py_DECREF( old );
    }
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_finfo );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_finfo );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 174709 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = par_xtype.object;

    frame_function->f_lineno = 86;
    tmp_source_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_9 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_eps );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    assert( var_eps.object == NULL );
    var_eps.object = tmp_assign_source_26;

    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_zeros );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71424 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_n.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_3 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_xtype.object;

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 88;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_7, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    if (var_x.object == NULL)
    {
        var_x.object = tmp_assign_source_27;
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = tmp_assign_source_27;
        Py_DECREF( old );
    }
    tmp_assign_source_28 = par_b.object;

    if ( tmp_assign_source_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    assert( var_y.object == NULL );
    var_y.object = INCREASE_REFCOUNT( tmp_assign_source_28 );

    tmp_assign_source_29 = par_b.object;

    if ( tmp_assign_source_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    assert( var_r1.object == NULL );
    var_r1.object = INCREASE_REFCOUNT( tmp_assign_source_29 );

    tmp_called_8 = var_psolve.object;

    tmp_call_arg_element_10 = par_b.object;

    if ( tmp_call_arg_element_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 97;
    tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_10 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    assert( var_y.object != NULL );
    {
        PyObject *old = var_y.object;
        var_y.object = tmp_assign_source_30;
        Py_DECREF( old );
    }

    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_inner );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inner );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285354 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = par_b.object;

    if ( tmp_call_arg_element_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_12 = var_y.object;

    frame_function->f_lineno = 99;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS2( tmp_called_9, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    assert( var_beta1.object == NULL );
    var_beta1.object = tmp_assign_source_31;

    tmp_compare_left_2 = var_beta1.object;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_1 = const_str_digest_869b257a3713a4fad2f4747f6d9356d1;
    frame_function->f_lineno = 102;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 102;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_3 = var_beta1.object;

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_called_10 = var_postprocess.object;

    if ( tmp_called_10 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 280079 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = var_x.object;

    frame_function->f_lineno = 104;
    tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_13 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_int_0;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    goto frame_return_exit_1;
    branch_no_4:;
    branch_end_3:;
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = var_beta1.object;

    frame_function->f_lineno = 106;
    tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_14 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    assert( var_beta1.object != NULL );
    {
        PyObject *old = var_beta1.object;
        var_beta1.object = tmp_assign_source_32;
        Py_DECREF( old );
    }

    tmp_cond_value_2 = par_check.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1733 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
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
    tmp_called_12 = var_matvec.object;

    tmp_call_arg_element_15 = var_y.object;

    frame_function->f_lineno = 112;
    tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_15 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    assert( var_w.object == NULL );
    var_w.object = tmp_assign_source_33;

    tmp_called_13 = var_matvec.object;

    tmp_call_arg_element_16 = var_w.object;

    frame_function->f_lineno = 113;
    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_16 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    assert( var_r2.object == NULL );
    var_r2.object = tmp_assign_source_34;

    tmp_called_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_inner );

    if (unlikely( tmp_called_14 == NULL ))
    {
        tmp_called_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inner );
    }

    if ( tmp_called_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285354 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_17 = var_w.object;

    tmp_call_arg_element_18 = var_w.object;

    frame_function->f_lineno = 114;
    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2( tmp_called_14, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    assert( var_s.object == NULL );
    var_s.object = tmp_assign_source_35;

    tmp_called_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_inner );

    if (unlikely( tmp_called_15 == NULL ))
    {
        tmp_called_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inner );
    }

    if ( tmp_called_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285354 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_19 = var_y.object;

    tmp_call_arg_element_20 = var_r2.object;

    frame_function->f_lineno = 115;
    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2( tmp_called_15, tmp_call_arg_element_19, tmp_call_arg_element_20 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    assert( var_t.object == NULL );
    var_t.object = tmp_assign_source_36;

    tmp_called_16 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_7 = var_s.object;

    tmp_binop_right_7 = var_t.object;

    tmp_call_arg_element_21 = BINARY_OPERATION_SUB( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_call_arg_element_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 116;
    tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_21 );
    Py_DECREF( tmp_call_arg_element_21 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    assert( var_z.object == NULL );
    var_z.object = tmp_assign_source_37;

    tmp_binop_left_9 = var_s.object;

    tmp_binop_right_9 = var_eps.object;

    tmp_binop_left_8 = BINARY_OPERATION_ADD( tmp_binop_left_9, tmp_binop_right_9 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_10 = var_eps.object;

    tmp_binop_right_10 = const_float_0_3333333333333333;
    tmp_binop_right_8 = POWER_OPERATION( tmp_binop_left_10, tmp_binop_right_10 );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_8 );

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_38 = BINARY_OPERATION_MUL( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    assert( var_epsa.object == NULL );
    var_epsa.object = tmp_assign_source_38;

    tmp_compare_left_4 = var_z.object;

    tmp_compare_right_4 = var_epsa.object;

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_make_exception_arg_2 = const_str_digest_622ce33ad4f7419d7cd97411bf250ccf;
    frame_function->f_lineno = 119;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 119;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_6:;
    tmp_called_17 = var_psolve.object;

    tmp_call_arg_element_22 = var_y.object;

    frame_function->f_lineno = 122;
    tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_17, tmp_call_arg_element_22 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
    }
    assert( var_r2.object != NULL );
    {
        PyObject *old = var_r2.object;
        var_r2.object = tmp_assign_source_39;
        Py_DECREF( old );
    }

    tmp_called_18 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_inner );

    if (unlikely( tmp_called_18 == NULL ))
    {
        tmp_called_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inner );
    }

    if ( tmp_called_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285354 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_23 = var_y.object;

    tmp_call_arg_element_24 = var_y.object;

    frame_function->f_lineno = 123;
    tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS2( tmp_called_18, tmp_call_arg_element_23, tmp_call_arg_element_24 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    assert( var_s.object != NULL );
    {
        PyObject *old = var_s.object;
        var_s.object = tmp_assign_source_40;
        Py_DECREF( old );
    }

    tmp_called_19 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_inner );

    if (unlikely( tmp_called_19 == NULL ))
    {
        tmp_called_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inner );
    }

    if ( tmp_called_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285354 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_25 = var_r1.object;

    tmp_call_arg_element_26 = var_r2.object;

    frame_function->f_lineno = 124;
    tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS2( tmp_called_19, tmp_call_arg_element_25, tmp_call_arg_element_26 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    assert( var_t.object != NULL );
    {
        PyObject *old = var_t.object;
        var_t.object = tmp_assign_source_41;
        Py_DECREF( old );
    }

    tmp_called_20 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_11 = var_s.object;

    tmp_binop_right_11 = var_t.object;

    tmp_call_arg_element_27 = BINARY_OPERATION_SUB( tmp_binop_left_11, tmp_binop_right_11 );
    if ( tmp_call_arg_element_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 125;
    tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_20, tmp_call_arg_element_27 );
    Py_DECREF( tmp_call_arg_element_27 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    assert( var_z.object != NULL );
    {
        PyObject *old = var_z.object;
        var_z.object = tmp_assign_source_42;
        Py_DECREF( old );
    }

    tmp_binop_left_13 = var_s.object;

    tmp_binop_right_13 = var_eps.object;

    tmp_binop_left_12 = BINARY_OPERATION_ADD( tmp_binop_left_13, tmp_binop_right_13 );
    if ( tmp_binop_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_14 = var_eps.object;

    tmp_binop_right_14 = const_float_0_3333333333333333;
    tmp_binop_right_12 = POWER_OPERATION( tmp_binop_left_14, tmp_binop_right_14 );
    if ( tmp_binop_right_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_12 );

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_43 = BINARY_OPERATION_MUL( tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_left_12 );
    Py_DECREF( tmp_binop_right_12 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    assert( var_epsa.object != NULL );
    {
        PyObject *old = var_epsa.object;
        var_epsa.object = tmp_assign_source_43;
        Py_DECREF( old );
    }

    tmp_compare_left_5 = var_z.object;

    tmp_compare_right_5 = var_epsa.object;

    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_2 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_make_exception_arg_3 = const_str_digest_dda2eed0399d148ba4de6d0012928690;
    frame_function->f_lineno = 128;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 128;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_7:;
    branch_no_5:;
    tmp_assign_source_44 = const_int_0;
    assert( var_oldb.object == NULL );
    var_oldb.object = INCREASE_REFCOUNT( tmp_assign_source_44 );

    tmp_assign_source_45 = var_beta1.object;

    assert( var_beta.object == NULL );
    var_beta.object = INCREASE_REFCOUNT( tmp_assign_source_45 );

    tmp_assign_source_46 = const_int_0;
    assert( var_dbar.object == NULL );
    var_dbar.object = INCREASE_REFCOUNT( tmp_assign_source_46 );

    tmp_assign_source_47 = const_int_0;
    assert( var_epsln.object == NULL );
    var_epsln.object = INCREASE_REFCOUNT( tmp_assign_source_47 );

    tmp_assign_source_48 = var_beta1.object;

    assert( var_qrnorm.object == NULL );
    var_qrnorm.object = INCREASE_REFCOUNT( tmp_assign_source_48 );

    tmp_assign_source_49 = var_beta1.object;

    assert( var_phibar.object == NULL );
    var_phibar.object = INCREASE_REFCOUNT( tmp_assign_source_49 );

    tmp_assign_source_50 = var_beta1.object;

    assert( var_rhs1.object == NULL );
    var_rhs1.object = INCREASE_REFCOUNT( tmp_assign_source_50 );

    tmp_assign_source_51 = const_int_0;
    assert( var_rhs2.object == NULL );
    var_rhs2.object = INCREASE_REFCOUNT( tmp_assign_source_51 );

    tmp_assign_source_52 = const_int_0;
    assert( var_tnorm2.object == NULL );
    var_tnorm2.object = INCREASE_REFCOUNT( tmp_assign_source_52 );

    tmp_assign_source_53 = const_int_0;
    assert( var_ynorm2.object == NULL );
    var_ynorm2.object = INCREASE_REFCOUNT( tmp_assign_source_53 );

    tmp_assign_source_54 = const_int_neg_1;
    assert( var_cs.object == NULL );
    var_cs.object = INCREASE_REFCOUNT( tmp_assign_source_54 );

    tmp_assign_source_55 = const_int_0;
    assert( var_sn.object == NULL );
    var_sn.object = INCREASE_REFCOUNT( tmp_assign_source_55 );

    tmp_called_21 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_zeros );

    if (unlikely( tmp_called_21 == NULL ))
    {
        tmp_called_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
    }

    if ( tmp_called_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71424 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_5 = var_n.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_5 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = par_xtype.object;

    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 143;
    tmp_assign_source_56 = CALL_FUNCTION( tmp_called_21, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }
    if (var_w.object == NULL)
    {
        var_w.object = tmp_assign_source_56;
    }
    else
    {
        PyObject *old = var_w.object;
        var_w.object = tmp_assign_source_56;
        Py_DECREF( old );
    }
    tmp_called_22 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_zeros );

    if (unlikely( tmp_called_22 == NULL ))
    {
        tmp_called_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
    }

    if ( tmp_called_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71424 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_3 = PyTuple_New( 1 );
    tmp_tuple_element_6 = var_n.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_6 );
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = par_xtype.object;

    tmp_dict_key_3 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 144;
    tmp_assign_source_57 = CALL_FUNCTION( tmp_called_22, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }
    assert( var_w2.object == NULL );
    var_w2.object = tmp_assign_source_57;

    tmp_assign_source_58 = var_r1.object;

    if (var_r2.object == NULL)
    {
        var_r2.object = INCREASE_REFCOUNT( tmp_assign_source_58 );
    }
    else
    {
        PyObject *old = var_r2.object;
        var_r2.object = INCREASE_REFCOUNT( tmp_assign_source_58 );
        Py_DECREF( old );
    }
    tmp_cond_value_3 = par_show.object;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_23 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 148;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_24 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 149;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_25 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_28 = const_str_digest_1630a433da066e76f0bc02da222a4118;
    frame_function->f_lineno = 150;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_25, tmp_call_arg_element_28 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    loop_start_1:;
    tmp_compare_left_6 = var_itn.object;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = par_maxiter.object;

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_2 == 1)
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    goto loop_end_1;
    branch_no_9:;
    tmp_assign_source_59 = var_itn.object;

    if ( tmp_assign_source_59 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    if (tmp_inplace_assign_1__inplace_start.object == NULL)
    {
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_59 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_start.object;
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_59 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_15 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_15 = const_int_pos_1;
    tmp_assign_source_60 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_15, tmp_binop_right_15 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
        goto try_finally_handler_2;
    }
    if (tmp_inplace_assign_1__inplace_end.object == NULL)
    {
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_60;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_end.object;
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_60;
        Py_DECREF( old );
    }
    tmp_compare_left_7 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_7 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_7 != tmp_compare_right_7 );
    if (tmp_isnot_1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_61 = tmp_inplace_assign_1__inplace_end.object;

    if (var_itn.object == NULL)
    {
        var_itn.object = INCREASE_REFCOUNT( tmp_assign_source_61 );
    }
    else
    {
        PyObject *old = var_itn.object;
        var_itn.object = INCREASE_REFCOUNT( tmp_assign_source_61 );
        Py_DECREF( old );
    }
    branch_no_10:;
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
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_end.object );
    tmp_inplace_assign_1__inplace_end.object = NULL;

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
    tmp_binop_left_16 = const_float_1_0;
    tmp_binop_right_16 = var_beta.object;

    if ( tmp_binop_right_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66513 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_62 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_16, tmp_binop_right_16 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    if (var_s.object == NULL)
    {
        var_s.object = tmp_assign_source_62;
    }
    else
    {
        PyObject *old = var_s.object;
        var_s.object = tmp_assign_source_62;
        Py_DECREF( old );
    }
    tmp_binop_left_17 = var_s.object;

    tmp_binop_right_17 = var_y.object;

    if ( tmp_binop_right_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_63 = BINARY_OPERATION_MUL( tmp_binop_left_17, tmp_binop_right_17 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    if (var_v.object == NULL)
    {
        var_v.object = tmp_assign_source_63;
    }
    else
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_63;
        Py_DECREF( old );
    }
    tmp_called_26 = var_matvec.object;

    if ( tmp_called_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 273315 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 158;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_29 = var_v.object;

    frame_function->f_lineno = 158;
    tmp_assign_source_64 = CALL_FUNCTION_WITH_ARGS1( tmp_called_26, tmp_call_arg_element_29 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto frame_exception_exit_1;
    }
    if (var_y.object == NULL)
    {
        var_y.object = tmp_assign_source_64;
    }
    else
    {
        PyObject *old = var_y.object;
        var_y.object = tmp_assign_source_64;
        Py_DECREF( old );
    }
    tmp_binop_left_18 = var_y.object;

    tmp_binop_left_19 = par_shift.object;

    if ( tmp_binop_left_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70589 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 159;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_19 = var_v.object;

    tmp_binop_right_18 = BINARY_OPERATION_MUL( tmp_binop_left_19, tmp_binop_right_19 );
    if ( tmp_binop_right_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 159;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_65 = BINARY_OPERATION_SUB( tmp_binop_left_18, tmp_binop_right_18 );
    Py_DECREF( tmp_binop_right_18 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 159;
        goto frame_exception_exit_1;
    }
    assert( var_y.object != NULL );
    {
        PyObject *old = var_y.object;
        var_y.object = tmp_assign_source_65;
        Py_DECREF( old );
    }

    tmp_compare_left_8 = var_itn.object;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_8 = const_int_pos_2;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_GtE_1 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_binop_left_20 = var_y.object;

    tmp_binop_left_22 = var_beta.object;

    if ( tmp_binop_left_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66513 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_22 = var_oldb.object;

    if ( tmp_binop_right_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70539 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_21 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_22, tmp_binop_right_22 );
    if ( tmp_binop_left_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_21 = var_r1.object;

    if ( tmp_binop_right_21 == NULL )
    {
        Py_DECREF( tmp_binop_left_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285388 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_20 = BINARY_OPERATION_MUL( tmp_binop_left_21, tmp_binop_right_21 );
    Py_DECREF( tmp_binop_left_21 );
    if ( tmp_binop_right_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_66 = BINARY_OPERATION_SUB( tmp_binop_left_20, tmp_binop_right_20 );
    Py_DECREF( tmp_binop_right_20 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    assert( var_y.object != NULL );
    {
        PyObject *old = var_y.object;
        var_y.object = tmp_assign_source_66;
        Py_DECREF( old );
    }

    branch_no_11:;
    tmp_called_27 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_inner );

    if (unlikely( tmp_called_27 == NULL ))
    {
        tmp_called_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inner );
    }

    if ( tmp_called_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285354 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_30 = var_v.object;

    tmp_call_arg_element_31 = var_y.object;

    frame_function->f_lineno = 164;
    tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS2( tmp_called_27, tmp_call_arg_element_30, tmp_call_arg_element_31 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    if (var_alfa.object == NULL)
    {
        var_alfa.object = tmp_assign_source_67;
    }
    else
    {
        PyObject *old = var_alfa.object;
        var_alfa.object = tmp_assign_source_67;
        Py_DECREF( old );
    }
    tmp_binop_left_23 = var_y.object;

    tmp_binop_left_25 = var_alfa.object;

    tmp_binop_right_25 = var_beta.object;

    if ( tmp_binop_right_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66513 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_24 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_25, tmp_binop_right_25 );
    if ( tmp_binop_left_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_24 = var_r2.object;

    if ( tmp_binop_right_24 == NULL )
    {
        Py_DECREF( tmp_binop_left_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285436 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_23 = BINARY_OPERATION_MUL( tmp_binop_left_24, tmp_binop_right_24 );
    Py_DECREF( tmp_binop_left_24 );
    if ( tmp_binop_right_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_68 = BINARY_OPERATION_SUB( tmp_binop_left_23, tmp_binop_right_23 );
    Py_DECREF( tmp_binop_right_23 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    assert( var_y.object != NULL );
    {
        PyObject *old = var_y.object;
        var_y.object = tmp_assign_source_68;
        Py_DECREF( old );
    }

    tmp_assign_source_69 = var_r2.object;

    if ( tmp_assign_source_69 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285436 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }

    if (var_r1.object == NULL)
    {
        var_r1.object = INCREASE_REFCOUNT( tmp_assign_source_69 );
    }
    else
    {
        PyObject *old = var_r1.object;
        var_r1.object = INCREASE_REFCOUNT( tmp_assign_source_69 );
        Py_DECREF( old );
    }
    tmp_assign_source_70 = var_y.object;

    if (var_r2.object == NULL)
    {
        var_r2.object = INCREASE_REFCOUNT( tmp_assign_source_70 );
    }
    else
    {
        PyObject *old = var_r2.object;
        var_r2.object = INCREASE_REFCOUNT( tmp_assign_source_70 );
        Py_DECREF( old );
    }
    tmp_called_28 = var_psolve.object;

    if ( tmp_called_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 279817 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_32 = var_r2.object;

    frame_function->f_lineno = 168;
    tmp_assign_source_71 = CALL_FUNCTION_WITH_ARGS1( tmp_called_28, tmp_call_arg_element_32 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    assert( var_y.object != NULL );
    {
        PyObject *old = var_y.object;
        var_y.object = tmp_assign_source_71;
        Py_DECREF( old );
    }

    tmp_assign_source_72 = var_beta.object;

    if ( tmp_assign_source_72 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66513 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    if (var_oldb.object == NULL)
    {
        var_oldb.object = INCREASE_REFCOUNT( tmp_assign_source_72 );
    }
    else
    {
        PyObject *old = var_oldb.object;
        var_oldb.object = INCREASE_REFCOUNT( tmp_assign_source_72 );
        Py_DECREF( old );
    }
    tmp_called_29 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_inner );

    if (unlikely( tmp_called_29 == NULL ))
    {
        tmp_called_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inner );
    }

    if ( tmp_called_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285354 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_33 = var_r2.object;

    tmp_call_arg_element_34 = var_y.object;

    frame_function->f_lineno = 170;
    tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS2( tmp_called_29, tmp_call_arg_element_33, tmp_call_arg_element_34 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    if (var_beta.object == NULL)
    {
        var_beta.object = tmp_assign_source_73;
    }
    else
    {
        PyObject *old = var_beta.object;
        var_beta.object = tmp_assign_source_73;
        Py_DECREF( old );
    }
    tmp_compare_left_9 = var_beta.object;

    tmp_compare_right_9 = const_int_0;
    tmp_cmp_Lt_3 = RICH_COMPARE_BOOL_LT( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Lt_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_3 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_make_exception_arg_4 = const_str_digest_622ce33ad4f7419d7cd97411bf250ccf;
    frame_function->f_lineno = 172;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_4 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 172;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_12:;
    tmp_called_30 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_30 == NULL ))
    {
        tmp_called_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_35 = var_beta.object;

    frame_function->f_lineno = 173;
    tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS1( tmp_called_30, tmp_call_arg_element_35 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    assert( var_beta.object != NULL );
    {
        PyObject *old = var_beta.object;
        var_beta.object = tmp_assign_source_74;
        Py_DECREF( old );
    }

    tmp_assign_source_75 = var_tnorm2.object;

    if ( tmp_assign_source_75 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285484 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }

    if (tmp_inplace_assign_2__inplace_start.object == NULL)
    {
        tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_75 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_2__inplace_start.object;
        tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_75 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_26 = tmp_inplace_assign_2__inplace_start.object;

    tmp_binop_left_29 = var_alfa.object;

    tmp_binop_right_29 = const_int_pos_2;
    tmp_binop_left_28 = POWER_OPERATION( tmp_binop_left_29, tmp_binop_right_29 );
    if ( tmp_binop_left_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_3;
    }
    tmp_binop_left_30 = var_oldb.object;

    tmp_binop_right_30 = const_int_pos_2;
    tmp_binop_right_28 = POWER_OPERATION( tmp_binop_left_30, tmp_binop_right_30 );
    if ( tmp_binop_right_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_28 );

        frame_function->f_lineno = 174;
        goto try_finally_handler_3;
    }
    tmp_binop_left_27 = BINARY_OPERATION_ADD( tmp_binop_left_28, tmp_binop_right_28 );
    Py_DECREF( tmp_binop_left_28 );
    Py_DECREF( tmp_binop_right_28 );
    if ( tmp_binop_left_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_3;
    }
    tmp_binop_left_31 = var_beta.object;

    tmp_binop_right_31 = const_int_pos_2;
    tmp_binop_right_27 = POWER_OPERATION( tmp_binop_left_31, tmp_binop_right_31 );
    if ( tmp_binop_right_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_27 );

        frame_function->f_lineno = 174;
        goto try_finally_handler_3;
    }
    tmp_binop_right_26 = BINARY_OPERATION_ADD( tmp_binop_left_27, tmp_binop_right_27 );
    Py_DECREF( tmp_binop_left_27 );
    Py_DECREF( tmp_binop_right_27 );
    if ( tmp_binop_right_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_3;
    }
    tmp_assign_source_76 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_26, tmp_binop_right_26 );
    Py_DECREF( tmp_binop_right_26 );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_3;
    }
    if (tmp_inplace_assign_2__inplace_end.object == NULL)
    {
        tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_76;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_2__inplace_end.object;
        tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_76;
        Py_DECREF( old );
    }
    tmp_compare_left_10 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_10 = tmp_inplace_assign_2__inplace_end.object;

    tmp_isnot_2 = ( tmp_compare_left_10 != tmp_compare_right_10 );
    if (tmp_isnot_2)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_assign_source_77 = tmp_inplace_assign_2__inplace_end.object;

    if (var_tnorm2.object == NULL)
    {
        var_tnorm2.object = INCREASE_REFCOUNT( tmp_assign_source_77 );
    }
    else
    {
        PyObject *old = var_tnorm2.object;
        var_tnorm2.object = INCREASE_REFCOUNT( tmp_assign_source_77 );
        Py_DECREF( old );
    }
    branch_no_13:;
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
    tmp_compare_left_11 = var_itn.object;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_11 = const_int_pos_1;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_binop_left_32 = var_beta.object;

    if ( tmp_binop_left_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66513 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_32 = var_beta1.object;

    if ( tmp_binop_right_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285536 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_12 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_32, tmp_binop_right_32 );
    if ( tmp_compare_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_33 = const_int_pos_10;
    tmp_binop_right_33 = var_eps.object;

    if ( tmp_binop_right_33 == NULL )
    {
        Py_DECREF( tmp_compare_left_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66868 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_12 = BINARY_OPERATION_MUL( tmp_binop_left_33, tmp_binop_right_33 );
    if ( tmp_compare_right_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_12 );

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_12 );
        Py_DECREF( tmp_compare_right_12 );

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_12 );
    Py_DECREF( tmp_compare_right_12 );
    if (tmp_cmp_LtE_1 == 1)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_assign_source_78 = const_int_neg_1;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_78 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_78 );
        Py_DECREF( old );
    }
    branch_no_15:;
    tmp_called_31 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_36 = var_alfa.object;

    if ( tmp_call_arg_element_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284596 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 180;
    tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS1( tmp_called_31, tmp_call_arg_element_36 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    if (var_gmax.object == NULL)
    {
        var_gmax.object = tmp_assign_source_79;
    }
    else
    {
        PyObject *old = var_gmax.object;
        var_gmax.object = tmp_assign_source_79;
        Py_DECREF( old );
    }
    tmp_assign_source_80 = var_gmax.object;

    if (var_gmin.object == NULL)
    {
        var_gmin.object = INCREASE_REFCOUNT( tmp_assign_source_80 );
    }
    else
    {
        PyObject *old = var_gmin.object;
        var_gmin.object = INCREASE_REFCOUNT( tmp_assign_source_80 );
        Py_DECREF( old );
    }
    branch_no_14:;
    tmp_assign_source_81 = var_epsln.object;

    if ( tmp_assign_source_81 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285587 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    if (var_oldeps.object == NULL)
    {
        var_oldeps.object = INCREASE_REFCOUNT( tmp_assign_source_81 );
    }
    else
    {
        PyObject *old = var_oldeps.object;
        var_oldeps.object = INCREASE_REFCOUNT( tmp_assign_source_81 );
        Py_DECREF( old );
    }
    tmp_binop_left_35 = var_cs.object;

    if ( tmp_binop_left_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284797 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_35 = var_dbar.object;

    if ( tmp_binop_right_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285638 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_34 = BINARY_OPERATION_MUL( tmp_binop_left_35, tmp_binop_right_35 );
    if ( tmp_binop_left_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_36 = var_sn.object;

    if ( tmp_binop_left_36 == NULL )
    {
        Py_DECREF( tmp_binop_left_34 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284749 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_36 = var_alfa.object;

    if ( tmp_binop_right_36 == NULL )
    {
        Py_DECREF( tmp_binop_left_34 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284596 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_34 = BINARY_OPERATION_MUL( tmp_binop_left_36, tmp_binop_right_36 );
    if ( tmp_binop_right_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_34 );

        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_82 = BINARY_OPERATION_ADD( tmp_binop_left_34, tmp_binop_right_34 );
    Py_DECREF( tmp_binop_left_34 );
    Py_DECREF( tmp_binop_right_34 );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }
    if (var_delta.object == NULL)
    {
        var_delta.object = tmp_assign_source_82;
    }
    else
    {
        PyObject *old = var_delta.object;
        var_delta.object = tmp_assign_source_82;
        Py_DECREF( old );
    }
    tmp_binop_left_38 = var_sn.object;

    if ( tmp_binop_left_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284749 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_38 = var_dbar.object;

    if ( tmp_binop_right_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285638 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_37 = BINARY_OPERATION_MUL( tmp_binop_left_38, tmp_binop_right_38 );
    if ( tmp_binop_left_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_39 = var_cs.object;

    if ( tmp_binop_left_39 == NULL )
    {
        Py_DECREF( tmp_binop_left_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284797 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_39 = var_alfa.object;

    if ( tmp_binop_right_39 == NULL )
    {
        Py_DECREF( tmp_binop_left_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284596 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_37 = BINARY_OPERATION_MUL( tmp_binop_left_39, tmp_binop_right_39 );
    if ( tmp_binop_right_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_37 );

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_83 = BINARY_OPERATION_SUB( tmp_binop_left_37, tmp_binop_right_37 );
    Py_DECREF( tmp_binop_left_37 );
    Py_DECREF( tmp_binop_right_37 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }
    if (var_gbar.object == NULL)
    {
        var_gbar.object = tmp_assign_source_83;
    }
    else
    {
        PyObject *old = var_gbar.object;
        var_gbar.object = tmp_assign_source_83;
        Py_DECREF( old );
    }
    tmp_binop_left_40 = var_sn.object;

    if ( tmp_binop_left_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284749 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_40 = var_beta.object;

    if ( tmp_binop_right_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66513 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_84 = BINARY_OPERATION_MUL( tmp_binop_left_40, tmp_binop_right_40 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }
    if (var_epsln.object == NULL)
    {
        var_epsln.object = tmp_assign_source_84;
    }
    else
    {
        PyObject *old = var_epsln.object;
        var_epsln.object = tmp_assign_source_84;
        Py_DECREF( old );
    }
    tmp_unary_arg_1 = var_cs.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284797 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_41 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_binop_left_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_41 = var_beta.object;

    if ( tmp_binop_right_41 == NULL )
    {
        Py_DECREF( tmp_binop_left_41 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66513 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_85 = BINARY_OPERATION_MUL( tmp_binop_left_41, tmp_binop_right_41 );
    Py_DECREF( tmp_binop_left_41 );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }
    if (var_dbar.object == NULL)
    {
        var_dbar.object = tmp_assign_source_85;
    }
    else
    {
        PyObject *old = var_dbar.object;
        var_dbar.object = tmp_assign_source_85;
        Py_DECREF( old );
    }
    tmp_called_32 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_norm );

    if (unlikely( tmp_called_32 == NULL ))
    {
        tmp_called_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
    }

    if ( tmp_called_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185595 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_37 = PyList_New( 2 );
    tmp_list_element_1 = var_gbar.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_call_arg_element_37, 0, tmp_list_element_1 );
    tmp_list_element_1 = var_dbar.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_call_arg_element_37, 1, tmp_list_element_1 );
    frame_function->f_lineno = 192;
    tmp_assign_source_86 = CALL_FUNCTION_WITH_ARGS1( tmp_called_32, tmp_call_arg_element_37 );
    Py_DECREF( tmp_call_arg_element_37 );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }
    if (var_root.object == NULL)
    {
        var_root.object = tmp_assign_source_86;
    }
    else
    {
        PyObject *old = var_root.object;
        var_root.object = tmp_assign_source_86;
        Py_DECREF( old );
    }
    tmp_binop_left_42 = var_phibar.object;

    if ( tmp_binop_left_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284697 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_42 = var_root.object;

    tmp_assign_source_87 = BINARY_OPERATION_MUL( tmp_binop_left_42, tmp_binop_right_42 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    if (var_Arnorm.object == NULL)
    {
        var_Arnorm.object = tmp_assign_source_87;
    }
    else
    {
        PyObject *old = var_Arnorm.object;
        var_Arnorm.object = tmp_assign_source_87;
        Py_DECREF( old );
    }
    tmp_called_33 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_norm );

    if (unlikely( tmp_called_33 == NULL ))
    {
        tmp_called_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
    }

    if ( tmp_called_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185595 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_38 = PyList_New( 2 );
    tmp_list_element_2 = var_gbar.object;

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_call_arg_element_38, 0, tmp_list_element_2 );
    tmp_list_element_2 = var_beta.object;

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_38 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66513 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_call_arg_element_38, 1, tmp_list_element_2 );
    frame_function->f_lineno = 197;
    tmp_assign_source_88 = CALL_FUNCTION_WITH_ARGS1( tmp_called_33, tmp_call_arg_element_38 );
    Py_DECREF( tmp_call_arg_element_38 );
    if ( tmp_assign_source_88 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }
    if (var_gamma.object == NULL)
    {
        var_gamma.object = tmp_assign_source_88;
    }
    else
    {
        PyObject *old = var_gamma.object;
        var_gamma.object = tmp_assign_source_88;
        Py_DECREF( old );
    }
    tmp_called_34 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_39 = var_gamma.object;

    tmp_call_arg_element_40 = var_eps.object;

    if ( tmp_call_arg_element_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66868 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 198;
    tmp_assign_source_89 = CALL_FUNCTION_WITH_ARGS2( tmp_called_34, tmp_call_arg_element_39, tmp_call_arg_element_40 );
    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    assert( var_gamma.object != NULL );
    {
        PyObject *old = var_gamma.object;
        var_gamma.object = tmp_assign_source_89;
        Py_DECREF( old );
    }

    tmp_binop_left_43 = var_gbar.object;

    tmp_binop_right_43 = var_gamma.object;

    tmp_assign_source_90 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_43, tmp_binop_right_43 );
    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    if (var_cs.object == NULL)
    {
        var_cs.object = tmp_assign_source_90;
    }
    else
    {
        PyObject *old = var_cs.object;
        var_cs.object = tmp_assign_source_90;
        Py_DECREF( old );
    }
    tmp_binop_left_44 = var_beta.object;

    if ( tmp_binop_left_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66513 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_44 = var_gamma.object;

    tmp_assign_source_91 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_44, tmp_binop_right_44 );
    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }
    if (var_sn.object == NULL)
    {
        var_sn.object = tmp_assign_source_91;
    }
    else
    {
        PyObject *old = var_sn.object;
        var_sn.object = tmp_assign_source_91;
        Py_DECREF( old );
    }
    tmp_binop_left_45 = var_cs.object;

    tmp_binop_right_45 = var_phibar.object;

    if ( tmp_binop_right_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284697 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_92 = BINARY_OPERATION_MUL( tmp_binop_left_45, tmp_binop_right_45 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }
    if (var_phi.object == NULL)
    {
        var_phi.object = tmp_assign_source_92;
    }
    else
    {
        PyObject *old = var_phi.object;
        var_phi.object = tmp_assign_source_92;
        Py_DECREF( old );
    }
    tmp_binop_left_46 = var_sn.object;

    tmp_binop_right_46 = var_phibar.object;

    if ( tmp_binop_right_46 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284697 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_93 = BINARY_OPERATION_MUL( tmp_binop_left_46, tmp_binop_right_46 );
    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }
    if (var_phibar.object == NULL)
    {
        var_phibar.object = tmp_assign_source_93;
    }
    else
    {
        PyObject *old = var_phibar.object;
        var_phibar.object = tmp_assign_source_93;
        Py_DECREF( old );
    }
    tmp_binop_left_47 = const_float_1_0;
    tmp_binop_right_47 = var_gamma.object;

    tmp_assign_source_94 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_47, tmp_binop_right_47 );
    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 206;
        goto frame_exception_exit_1;
    }
    if (var_denom.object == NULL)
    {
        var_denom.object = tmp_assign_source_94;
    }
    else
    {
        PyObject *old = var_denom.object;
        var_denom.object = tmp_assign_source_94;
        Py_DECREF( old );
    }
    tmp_assign_source_95 = var_w2.object;

    if ( tmp_assign_source_95 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285688 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 207;
        goto frame_exception_exit_1;
    }

    if (var_w1.object == NULL)
    {
        var_w1.object = INCREASE_REFCOUNT( tmp_assign_source_95 );
    }
    else
    {
        PyObject *old = var_w1.object;
        var_w1.object = INCREASE_REFCOUNT( tmp_assign_source_95 );
        Py_DECREF( old );
    }
    tmp_assign_source_96 = var_w.object;

    if ( tmp_assign_source_96 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4312 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 208;
        goto frame_exception_exit_1;
    }

    if (var_w2.object == NULL)
    {
        var_w2.object = INCREASE_REFCOUNT( tmp_assign_source_96 );
    }
    else
    {
        PyObject *old = var_w2.object;
        var_w2.object = INCREASE_REFCOUNT( tmp_assign_source_96 );
        Py_DECREF( old );
    }
    tmp_binop_left_50 = var_v.object;

    if ( tmp_binop_left_50 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4481 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 209;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_51 = var_oldeps.object;

    tmp_binop_right_51 = var_w1.object;

    tmp_binop_right_50 = BINARY_OPERATION_MUL( tmp_binop_left_51, tmp_binop_right_51 );
    if ( tmp_binop_right_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 209;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_49 = BINARY_OPERATION_SUB( tmp_binop_left_50, tmp_binop_right_50 );
    Py_DECREF( tmp_binop_right_50 );
    if ( tmp_binop_left_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 209;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_52 = var_delta.object;

    tmp_binop_right_52 = var_w2.object;

    tmp_binop_right_49 = BINARY_OPERATION_MUL( tmp_binop_left_52, tmp_binop_right_52 );
    if ( tmp_binop_right_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_49 );

        frame_function->f_lineno = 209;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_48 = BINARY_OPERATION_SUB( tmp_binop_left_49, tmp_binop_right_49 );
    Py_DECREF( tmp_binop_left_49 );
    Py_DECREF( tmp_binop_right_49 );
    if ( tmp_binop_left_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 209;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_48 = var_denom.object;

    tmp_assign_source_97 = BINARY_OPERATION_MUL( tmp_binop_left_48, tmp_binop_right_48 );
    Py_DECREF( tmp_binop_left_48 );
    if ( tmp_assign_source_97 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 209;
        goto frame_exception_exit_1;
    }
    if (var_w.object == NULL)
    {
        var_w.object = tmp_assign_source_97;
    }
    else
    {
        PyObject *old = var_w.object;
        var_w.object = tmp_assign_source_97;
        Py_DECREF( old );
    }
    tmp_binop_left_53 = var_x.object;

    if ( tmp_binop_left_53 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_54 = var_phi.object;

    tmp_binop_right_54 = var_w.object;

    tmp_binop_right_53 = BINARY_OPERATION_MUL( tmp_binop_left_54, tmp_binop_right_54 );
    if ( tmp_binop_right_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_98 = BINARY_OPERATION_ADD( tmp_binop_left_53, tmp_binop_right_53 );
    Py_DECREF( tmp_binop_right_53 );
    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    if (var_x.object == NULL)
    {
        var_x.object = tmp_assign_source_98;
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = tmp_assign_source_98;
        Py_DECREF( old );
    }
    tmp_called_35 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_41 = var_gmax.object;

    if ( tmp_call_arg_element_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285736 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_42 = var_gamma.object;

    frame_function->f_lineno = 214;
    tmp_assign_source_99 = CALL_FUNCTION_WITH_ARGS2( tmp_called_35, tmp_call_arg_element_41, tmp_call_arg_element_42 );
    if ( tmp_assign_source_99 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }
    if (var_gmax.object == NULL)
    {
        var_gmax.object = tmp_assign_source_99;
    }
    else
    {
        PyObject *old = var_gmax.object;
        var_gmax.object = tmp_assign_source_99;
        Py_DECREF( old );
    }
    tmp_called_36 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_43 = var_gmin.object;

    if ( tmp_call_arg_element_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285786 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_44 = var_gamma.object;

    frame_function->f_lineno = 215;
    tmp_assign_source_100 = CALL_FUNCTION_WITH_ARGS2( tmp_called_36, tmp_call_arg_element_43, tmp_call_arg_element_44 );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }
    if (var_gmin.object == NULL)
    {
        var_gmin.object = tmp_assign_source_100;
    }
    else
    {
        PyObject *old = var_gmin.object;
        var_gmin.object = tmp_assign_source_100;
        Py_DECREF( old );
    }
    tmp_binop_left_55 = var_rhs1.object;

    if ( tmp_binop_left_55 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285836 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_55 = var_gamma.object;

    tmp_assign_source_101 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_55, tmp_binop_right_55 );
    if ( tmp_assign_source_101 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }
    if (var_z.object == NULL)
    {
        var_z.object = tmp_assign_source_101;
    }
    else
    {
        PyObject *old = var_z.object;
        var_z.object = tmp_assign_source_101;
        Py_DECREF( old );
    }
    tmp_binop_left_57 = var_z.object;

    tmp_binop_right_57 = const_int_pos_2;
    tmp_binop_left_56 = POWER_OPERATION( tmp_binop_left_57, tmp_binop_right_57 );
    if ( tmp_binop_left_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 217;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_56 = var_ynorm2.object;

    if ( tmp_binop_right_56 == NULL )
    {
        Py_DECREF( tmp_binop_left_56 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285886 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 217;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_102 = BINARY_OPERATION_ADD( tmp_binop_left_56, tmp_binop_right_56 );
    Py_DECREF( tmp_binop_left_56 );
    if ( tmp_assign_source_102 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 217;
        goto frame_exception_exit_1;
    }
    if (var_ynorm2.object == NULL)
    {
        var_ynorm2.object = tmp_assign_source_102;
    }
    else
    {
        PyObject *old = var_ynorm2.object;
        var_ynorm2.object = tmp_assign_source_102;
        Py_DECREF( old );
    }
    tmp_binop_left_58 = var_rhs2.object;

    if ( tmp_binop_left_58 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285938 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_59 = var_delta.object;

    tmp_binop_right_59 = var_z.object;

    tmp_binop_right_58 = BINARY_OPERATION_MUL( tmp_binop_left_59, tmp_binop_right_59 );
    if ( tmp_binop_right_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_103 = BINARY_OPERATION_SUB( tmp_binop_left_58, tmp_binop_right_58 );
    Py_DECREF( tmp_binop_right_58 );
    if ( tmp_assign_source_103 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }
    if (var_rhs1.object == NULL)
    {
        var_rhs1.object = tmp_assign_source_103;
    }
    else
    {
        PyObject *old = var_rhs1.object;
        var_rhs1.object = tmp_assign_source_103;
        Py_DECREF( old );
    }
    tmp_unary_arg_2 = var_epsln.object;

    tmp_binop_left_60 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_2 );
    if ( tmp_binop_left_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_60 = var_z.object;

    tmp_assign_source_104 = BINARY_OPERATION_MUL( tmp_binop_left_60, tmp_binop_right_60 );
    Py_DECREF( tmp_binop_left_60 );
    if ( tmp_assign_source_104 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    if (var_rhs2.object == NULL)
    {
        var_rhs2.object = tmp_assign_source_104;
    }
    else
    {
        PyObject *old = var_rhs2.object;
        var_rhs2.object = tmp_assign_source_104;
        Py_DECREF( old );
    }
    tmp_called_37 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_37 == NULL ))
    {
        tmp_called_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_37 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_45 = var_tnorm2.object;

    if ( tmp_call_arg_element_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285484 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 223;
    tmp_assign_source_105 = CALL_FUNCTION_WITH_ARGS1( tmp_called_37, tmp_call_arg_element_45 );
    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }
    if (var_Anorm.object == NULL)
    {
        var_Anorm.object = tmp_assign_source_105;
    }
    else
    {
        PyObject *old = var_Anorm.object;
        var_Anorm.object = tmp_assign_source_105;
        Py_DECREF( old );
    }
    tmp_called_38 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_38 == NULL ))
    {
        tmp_called_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_46 = var_ynorm2.object;

    frame_function->f_lineno = 224;
    tmp_assign_source_106 = CALL_FUNCTION_WITH_ARGS1( tmp_called_38, tmp_call_arg_element_46 );
    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    if (var_ynorm.object == NULL)
    {
        var_ynorm.object = tmp_assign_source_106;
    }
    else
    {
        PyObject *old = var_ynorm.object;
        var_ynorm.object = tmp_assign_source_106;
        Py_DECREF( old );
    }
    tmp_binop_left_61 = var_Anorm.object;

    tmp_binop_right_61 = var_eps.object;

    if ( tmp_binop_right_61 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66868 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 225;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_107 = BINARY_OPERATION_MUL( tmp_binop_left_61, tmp_binop_right_61 );
    if ( tmp_assign_source_107 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 225;
        goto frame_exception_exit_1;
    }
    if (var_epsa.object == NULL)
    {
        var_epsa.object = tmp_assign_source_107;
    }
    else
    {
        PyObject *old = var_epsa.object;
        var_epsa.object = tmp_assign_source_107;
        Py_DECREF( old );
    }
    tmp_binop_left_63 = var_Anorm.object;

    tmp_binop_right_63 = var_ynorm.object;

    tmp_binop_left_62 = BINARY_OPERATION_MUL( tmp_binop_left_63, tmp_binop_right_63 );
    if ( tmp_binop_left_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_62 = var_eps.object;

    if ( tmp_binop_right_62 == NULL )
    {
        Py_DECREF( tmp_binop_left_62 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66868 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_108 = BINARY_OPERATION_MUL( tmp_binop_left_62, tmp_binop_right_62 );
    Py_DECREF( tmp_binop_left_62 );
    if ( tmp_assign_source_108 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    if (var_epsx.object == NULL)
    {
        var_epsx.object = tmp_assign_source_108;
    }
    else
    {
        PyObject *old = var_epsx.object;
        var_epsx.object = tmp_assign_source_108;
        Py_DECREF( old );
    }
    tmp_binop_left_65 = var_Anorm.object;

    tmp_binop_right_65 = var_ynorm.object;

    tmp_binop_left_64 = BINARY_OPERATION_MUL( tmp_binop_left_65, tmp_binop_right_65 );
    if ( tmp_binop_left_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_64 = par_tol.object;

    if ( tmp_binop_right_64 == NULL )
    {
        Py_DECREF( tmp_binop_left_64 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161861 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_109 = BINARY_OPERATION_MUL( tmp_binop_left_64, tmp_binop_right_64 );
    Py_DECREF( tmp_binop_left_64 );
    if ( tmp_assign_source_109 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    if (var_epsr.object == NULL)
    {
        var_epsr.object = tmp_assign_source_109;
    }
    else
    {
        PyObject *old = var_epsr.object;
        var_epsr.object = tmp_assign_source_109;
        Py_DECREF( old );
    }
    tmp_assign_source_110 = var_gbar.object;

    if (var_diag.object == NULL)
    {
        var_diag.object = INCREASE_REFCOUNT( tmp_assign_source_110 );
    }
    else
    {
        PyObject *old = var_diag.object;
        var_diag.object = INCREASE_REFCOUNT( tmp_assign_source_110 );
        Py_DECREF( old );
    }
    tmp_compare_left_13 = var_diag.object;

    tmp_compare_right_13 = const_int_0;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_assign_source_111 = var_epsa.object;

    assert( var_diag.object != NULL );
    {
        PyObject *old = var_diag.object;
        var_diag.object = INCREASE_REFCOUNT( tmp_assign_source_111 );
        Py_DECREF( old );
    }

    branch_no_16:;
    tmp_assign_source_112 = var_phibar.object;

    if (var_qrnorm.object == NULL)
    {
        var_qrnorm.object = INCREASE_REFCOUNT( tmp_assign_source_112 );
    }
    else
    {
        PyObject *old = var_qrnorm.object;
        var_qrnorm.object = INCREASE_REFCOUNT( tmp_assign_source_112 );
        Py_DECREF( old );
    }
    tmp_assign_source_113 = var_qrnorm.object;

    if (var_rnorm.object == NULL)
    {
        var_rnorm.object = INCREASE_REFCOUNT( tmp_assign_source_113 );
    }
    else
    {
        PyObject *old = var_rnorm.object;
        var_rnorm.object = INCREASE_REFCOUNT( tmp_assign_source_113 );
        Py_DECREF( old );
    }
    tmp_binop_left_66 = var_rnorm.object;

    tmp_binop_left_67 = var_Anorm.object;

    tmp_binop_right_67 = var_ynorm.object;

    tmp_binop_right_66 = BINARY_OPERATION_MUL( tmp_binop_left_67, tmp_binop_right_67 );
    if ( tmp_binop_right_66 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_114 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_66, tmp_binop_right_66 );
    Py_DECREF( tmp_binop_right_66 );
    if ( tmp_assign_source_114 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto frame_exception_exit_1;
    }
    if (var_test1.object == NULL)
    {
        var_test1.object = tmp_assign_source_114;
    }
    else
    {
        PyObject *old = var_test1.object;
        var_test1.object = tmp_assign_source_114;
        Py_DECREF( old );
    }
    tmp_binop_left_68 = var_root.object;

    tmp_binop_right_68 = var_Anorm.object;

    tmp_assign_source_115 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_68, tmp_binop_right_68 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    if (var_test2.object == NULL)
    {
        var_test2.object = tmp_assign_source_115;
    }
    else
    {
        PyObject *old = var_test2.object;
        var_test2.object = tmp_assign_source_115;
        Py_DECREF( old );
    }
    tmp_binop_left_69 = var_gmax.object;

    tmp_binop_right_69 = var_gmin.object;

    tmp_assign_source_116 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_69, tmp_binop_right_69 );
    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    if (var_Acond.object == NULL)
    {
        var_Acond.object = tmp_assign_source_116;
    }
    else
    {
        PyObject *old = var_Acond.object;
        var_Acond.object = tmp_assign_source_116;
        Py_DECREF( old );
    }
    tmp_compare_left_14 = var_istop.object;

    if ( tmp_compare_left_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_14 = const_int_0;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_4 == 1)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_binop_left_70 = const_int_pos_1;
    tmp_binop_right_70 = var_test1.object;

    tmp_assign_source_117 = BINARY_OPERATION_ADD( tmp_binop_left_70, tmp_binop_right_70 );
    if ( tmp_assign_source_117 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    if (var_t1.object == NULL)
    {
        var_t1.object = tmp_assign_source_117;
    }
    else
    {
        PyObject *old = var_t1.object;
        var_t1.object = tmp_assign_source_117;
        Py_DECREF( old );
    }
    tmp_binop_left_71 = const_int_pos_1;
    tmp_binop_right_71 = var_test2.object;

    tmp_assign_source_118 = BINARY_OPERATION_ADD( tmp_binop_left_71, tmp_binop_right_71 );
    if ( tmp_assign_source_118 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    if (var_t2.object == NULL)
    {
        var_t2.object = tmp_assign_source_118;
    }
    else
    {
        PyObject *old = var_t2.object;
        var_t2.object = tmp_assign_source_118;
        Py_DECREF( old );
    }
    tmp_compare_left_15 = var_t2.object;

    tmp_compare_right_15 = const_int_pos_1;
    tmp_cmp_LtE_2 = RICH_COMPARE_BOOL_LE( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_LtE_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_LtE_2 == 1)
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_assign_source_119 = const_int_pos_2;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_119 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_119 );
        Py_DECREF( old );
    }
    branch_no_18:;
    tmp_compare_left_16 = var_t1.object;

    tmp_compare_right_16 = const_int_pos_1;
    tmp_cmp_LtE_3 = RICH_COMPARE_BOOL_LE( tmp_compare_left_16, tmp_compare_right_16 );
    if ( tmp_cmp_LtE_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_LtE_3 == 1)
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_assign_source_120 = const_int_pos_1;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_120 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_120 );
        Py_DECREF( old );
    }
    branch_no_19:;
    tmp_compare_left_17 = var_itn.object;

    if ( tmp_compare_left_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_17 = par_maxiter.object;

    if ( tmp_compare_right_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_cmp_GtE_2 = RICH_COMPARE_BOOL_GE( tmp_compare_left_17, tmp_compare_right_17 );
    if ( tmp_cmp_GtE_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_GtE_2 == 1)
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_assign_source_121 = const_int_pos_6;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_121 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_121 );
        Py_DECREF( old );
    }
    branch_no_20:;
    tmp_compare_left_18 = var_Acond.object;

    tmp_binop_left_72 = const_float_0_1;
    tmp_binop_right_72 = var_eps.object;

    if ( tmp_binop_right_72 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66868 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_18 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_72, tmp_binop_right_72 );
    if ( tmp_compare_right_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }
    tmp_cmp_GtE_3 = RICH_COMPARE_BOOL_GE( tmp_compare_left_18, tmp_compare_right_18 );
    if ( tmp_cmp_GtE_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_18 );

        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_18 );
    if (tmp_cmp_GtE_3 == 1)
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_assign_source_122 = const_int_pos_4;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_122 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_122 );
        Py_DECREF( old );
    }
    branch_no_21:;
    tmp_compare_left_19 = var_epsx.object;

    tmp_compare_right_19 = var_beta.object;

    if ( tmp_compare_right_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66513 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_cmp_GtE_4 = RICH_COMPARE_BOOL_GE( tmp_compare_left_19, tmp_compare_right_19 );
    if ( tmp_cmp_GtE_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_GtE_4 == 1)
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_assign_source_123 = const_int_pos_3;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_123 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_123 );
        Py_DECREF( old );
    }
    branch_no_22:;
    tmp_compare_left_20 = var_test2.object;

    tmp_compare_right_20 = par_tol.object;

    if ( tmp_compare_right_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161861 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_cmp_LtE_4 = RICH_COMPARE_BOOL_LE( tmp_compare_left_20, tmp_compare_right_20 );
    if ( tmp_cmp_LtE_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_LtE_4 == 1)
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_assign_source_124 = const_int_pos_2;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_124 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_124 );
        Py_DECREF( old );
    }
    branch_no_23:;
    tmp_compare_left_21 = var_test1.object;

    tmp_compare_right_21 = par_tol.object;

    if ( tmp_compare_right_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161861 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }

    tmp_cmp_LtE_5 = RICH_COMPARE_BOOL_LE( tmp_compare_left_21, tmp_compare_right_21 );
    if ( tmp_cmp_LtE_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_LtE_5 == 1)
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    tmp_assign_source_125 = const_int_pos_1;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_125 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_125 );
        Py_DECREF( old );
    }
    branch_no_24:;
    branch_no_17:;
    tmp_assign_source_126 = Py_False;
    if (var_prnt.object == NULL)
    {
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_126 );
    }
    else
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_126 );
        Py_DECREF( old );
    }
    tmp_compare_left_22 = var_n.object;

    if ( tmp_compare_left_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_22 = const_int_pos_40;
    tmp_cmp_LtE_6 = RICH_COMPARE_BOOL_LE( tmp_compare_left_22, tmp_compare_right_22 );
    if ( tmp_cmp_LtE_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_LtE_6 == 1)
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_assign_source_127 = Py_True;
    assert( var_prnt.object != NULL );
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_127 );
        Py_DECREF( old );
    }

    branch_no_25:;
    tmp_compare_left_23 = var_itn.object;

    if ( tmp_compare_left_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_23 = const_int_pos_10;
    tmp_cmp_LtE_7 = RICH_COMPARE_BOOL_LE( tmp_compare_left_23, tmp_compare_right_23 );
    if ( tmp_cmp_LtE_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_LtE_7 == 1)
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    tmp_assign_source_128 = Py_True;
    assert( var_prnt.object != NULL );
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_128 );
        Py_DECREF( old );
    }

    branch_no_26:;
    tmp_compare_left_24 = var_itn.object;

    if ( tmp_compare_left_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_73 = par_maxiter.object;

    if ( tmp_binop_left_73 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_73 = const_int_pos_10;
    tmp_compare_right_24 = BINARY_OPERATION_SUB( tmp_binop_left_73, tmp_binop_right_73 );
    if ( tmp_compare_right_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    tmp_cmp_GtE_5 = RICH_COMPARE_BOOL_GE( tmp_compare_left_24, tmp_compare_right_24 );
    if ( tmp_cmp_GtE_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_24 );

        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_24 );
    if (tmp_cmp_GtE_5 == 1)
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    tmp_assign_source_129 = Py_True;
    if (var_prnt.object == NULL)
    {
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_129 );
    }
    else
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_129 );
        Py_DECREF( old );
    }
    branch_no_27:;
    tmp_binop_left_74 = var_itn.object;

    if ( tmp_binop_left_74 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_74 = const_int_pos_10;
    tmp_compare_left_25 = BINARY_OPERATION_REMAINDER( tmp_binop_left_74, tmp_binop_right_74 );
    if ( tmp_compare_left_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_25 = const_int_0;
    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_25, tmp_compare_right_25 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_25 );

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_25 );
    if (tmp_cmp_Eq_5 == 1)
    {
        goto branch_yes_28;
    }
    else
    {
        goto branch_no_28;
    }
    branch_yes_28:;
    tmp_assign_source_130 = Py_True;
    if (var_prnt.object == NULL)
    {
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_130 );
    }
    else
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_130 );
        Py_DECREF( old );
    }
    branch_no_28:;
    tmp_compare_left_26 = var_qrnorm.object;

    tmp_binop_left_75 = const_int_pos_10;
    tmp_binop_right_75 = var_epsx.object;

    tmp_compare_right_26 = BINARY_OPERATION_MUL( tmp_binop_left_75, tmp_binop_right_75 );
    if ( tmp_compare_right_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_cmp_LtE_8 = RICH_COMPARE_BOOL_LE( tmp_compare_left_26, tmp_compare_right_26 );
    if ( tmp_cmp_LtE_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_26 );

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_26 );
    if (tmp_cmp_LtE_8 == 1)
    {
        goto branch_yes_29;
    }
    else
    {
        goto branch_no_29;
    }
    branch_yes_29:;
    tmp_assign_source_131 = Py_True;
    if (var_prnt.object == NULL)
    {
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_131 );
    }
    else
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_131 );
        Py_DECREF( old );
    }
    branch_no_29:;
    tmp_compare_left_27 = var_qrnorm.object;

    tmp_binop_left_76 = const_int_pos_10;
    tmp_binop_right_76 = var_epsr.object;

    tmp_compare_right_27 = BINARY_OPERATION_MUL( tmp_binop_left_76, tmp_binop_right_76 );
    if ( tmp_compare_right_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    tmp_cmp_LtE_9 = RICH_COMPARE_BOOL_LE( tmp_compare_left_27, tmp_compare_right_27 );
    if ( tmp_cmp_LtE_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_27 );

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_27 );
    if (tmp_cmp_LtE_9 == 1)
    {
        goto branch_yes_30;
    }
    else
    {
        goto branch_no_30;
    }
    branch_yes_30:;
    tmp_assign_source_132 = Py_True;
    if (var_prnt.object == NULL)
    {
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_132 );
    }
    else
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_132 );
        Py_DECREF( old );
    }
    branch_no_30:;
    tmp_compare_left_28 = var_Acond.object;

    tmp_binop_left_77 = const_float_0_01;
    tmp_binop_right_77 = var_eps.object;

    if ( tmp_binop_right_77 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66868 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_28 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_77, tmp_binop_right_77 );
    if ( tmp_compare_right_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_cmp_LtE_10 = RICH_COMPARE_BOOL_LE( tmp_compare_left_28, tmp_compare_right_28 );
    if ( tmp_cmp_LtE_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_28 );

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_28 );
    if (tmp_cmp_LtE_10 == 1)
    {
        goto branch_yes_31;
    }
    else
    {
        goto branch_no_31;
    }
    branch_yes_31:;
    tmp_assign_source_133 = Py_True;
    if (var_prnt.object == NULL)
    {
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_133 );
    }
    else
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_133 );
        Py_DECREF( old );
    }
    branch_no_31:;
    tmp_compare_left_29 = var_istop.object;

    if ( tmp_compare_left_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_29 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_29, tmp_compare_right_29 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_32;
    }
    else
    {
        goto branch_no_32;
    }
    branch_yes_32:;
    tmp_assign_source_134 = Py_True;
    if (var_prnt.object == NULL)
    {
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_134 );
    }
    else
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_134 );
        Py_DECREF( old );
    }
    branch_no_32:;
    // Tried code
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_assign_source_135 = par_show.object;

    if ( tmp_assign_source_135 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 290;
        goto try_finally_handler_5;
    }

    if (tmp_and_1__value_1.object == NULL)
    {
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_135 );
    }
    else
    {
        PyObject *old = tmp_and_1__value_1.object;
        tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_135 );
        Py_DECREF( old );
    }
    tmp_cond_value_5 = tmp_and_1__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 290;
        goto try_finally_handler_5;
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
    tmp_cond_value_4 = var_prnt.object;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285249 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 290;
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
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_4 = tmp_and_1__value_1.object;

    condexpr_end_1:;
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
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 290;
        goto try_finally_handler_4;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_33;
    }
    else
    {
        goto branch_no_33;
    }
    branch_yes_33:;
    tmp_binop_left_78 = const_str_digest_9ef3c7d589134de23aaeb599e3b68c81;
    tmp_binop_right_78 = PyTuple_New( 3 );
    tmp_tuple_element_7 = var_itn.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_binop_right_78 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_binop_right_78, 0, tmp_tuple_element_7 );
    tmp_subscr_target_2 = var_x.object;

    if ( tmp_subscr_target_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_78 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto try_finally_handler_4;
    }

    tmp_subscr_subscript_2 = const_int_0;
    tmp_tuple_element_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_78 );

        frame_function->f_lineno = 291;
        goto try_finally_handler_4;
    }
    PyTuple_SET_ITEM( tmp_binop_right_78, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_test1.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_binop_right_78 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284033 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_binop_right_78, 2, tmp_tuple_element_7 );
    tmp_assign_source_136 = BINARY_OPERATION_REMAINDER( tmp_binop_left_78, tmp_binop_right_78 );
    Py_DECREF( tmp_binop_right_78 );
    if ( tmp_assign_source_136 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto try_finally_handler_4;
    }
    if (var_str1.object == NULL)
    {
        var_str1.object = tmp_assign_source_136;
    }
    else
    {
        PyObject *old = var_str1.object;
        var_str1.object = tmp_assign_source_136;
        Py_DECREF( old );
    }
    tmp_binop_left_79 = const_str_digest_1c1ad65706a8ca506c2820f23fd38f0a;
    tmp_binop_right_79 = PyTuple_New( 1 );
    tmp_tuple_element_8 = var_test2.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_binop_right_79 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284084 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_binop_right_79, 0, tmp_tuple_element_8 );
    tmp_assign_source_137 = BINARY_OPERATION_REMAINDER( tmp_binop_left_79, tmp_binop_right_79 );
    Py_DECREF( tmp_binop_right_79 );
    if ( tmp_assign_source_137 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto try_finally_handler_4;
    }
    if (var_str2.object == NULL)
    {
        var_str2.object = tmp_assign_source_137;
    }
    else
    {
        PyObject *old = var_str2.object;
        var_str2.object = tmp_assign_source_137;
        Py_DECREF( old );
    }
    tmp_binop_left_80 = const_str_digest_31b0198f3d470a3cdb4716f799bd1818;
    tmp_binop_right_80 = PyTuple_New( 3 );
    tmp_tuple_element_9 = var_Anorm.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_binop_right_80 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_binop_right_80, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_Acond.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_binop_right_80 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 286039 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_binop_right_80, 1, tmp_tuple_element_9 );
    tmp_binop_left_81 = var_gbar.object;

    if ( tmp_binop_left_81 == NULL )
    {
        Py_DECREF( tmp_binop_right_80 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 286090 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto try_finally_handler_4;
    }

    tmp_binop_right_81 = var_Anorm.object;

    if ( tmp_binop_right_81 == NULL )
    {
        Py_DECREF( tmp_binop_right_80 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto try_finally_handler_4;
    }

    tmp_tuple_element_9 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_81, tmp_binop_right_81 );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_80 );

        frame_function->f_lineno = 293;
        goto try_finally_handler_4;
    }
    PyTuple_SET_ITEM( tmp_binop_right_80, 2, tmp_tuple_element_9 );
    tmp_assign_source_138 = BINARY_OPERATION_REMAINDER( tmp_binop_left_80, tmp_binop_right_80 );
    Py_DECREF( tmp_binop_right_80 );
    if ( tmp_assign_source_138 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto try_finally_handler_4;
    }
    if (var_str3.object == NULL)
    {
        var_str3.object = tmp_assign_source_138;
    }
    else
    {
        PyObject *old = var_str3.object;
        var_str3.object = tmp_assign_source_138;
        Py_DECREF( old );
    }
    tmp_called_39 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_finally_handler_4;
    }
    tmp_binop_left_83 = var_str1.object;

    tmp_binop_right_83 = var_str2.object;

    tmp_binop_left_82 = BINARY_OPERATION_ADD( tmp_binop_left_83, tmp_binop_right_83 );
    if ( tmp_binop_left_82 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_finally_handler_4;
    }
    tmp_binop_right_82 = var_str3.object;

    tmp_call_arg_element_47 = BINARY_OPERATION_ADD( tmp_binop_left_82, tmp_binop_right_82 );
    Py_DECREF( tmp_binop_left_82 );
    if ( tmp_call_arg_element_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 295;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_39, tmp_call_arg_element_47 );
    Py_DECREF( tmp_call_arg_element_47 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_84 = var_itn.object;

    if ( tmp_binop_left_84 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 297;
        goto try_finally_handler_4;
    }

    tmp_binop_right_84 = const_int_pos_10;
    tmp_compare_left_30 = BINARY_OPERATION_REMAINDER( tmp_binop_left_84, tmp_binop_right_84 );
    if ( tmp_compare_left_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto try_finally_handler_4;
    }
    tmp_compare_right_30 = const_int_0;
    tmp_cmp_Eq_6 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_30, tmp_compare_right_30 );
    if ( tmp_cmp_Eq_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_30 );

        frame_function->f_lineno = 297;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_compare_left_30 );
    if (tmp_cmp_Eq_6 == 1)
    {
        goto branch_yes_34;
    }
    else
    {
        goto branch_no_34;
    }
    branch_yes_34:;
    tmp_called_40 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 298;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_40 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_no_34:;
    branch_no_33:;
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

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

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
    tmp_compare_left_31 = par_callback.object;

    if ( tmp_compare_left_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29376 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 300;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_31 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_31 != tmp_compare_right_31 );
    if (tmp_isnot_3)
    {
        goto branch_yes_35;
    }
    else
    {
        goto branch_no_35;
    }
    branch_yes_35:;
    tmp_called_41 = par_callback.object;

    if ( tmp_called_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29376 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_48 = var_x.object;

    if ( tmp_call_arg_element_48 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 301;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_41, tmp_call_arg_element_48 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_35:;
    tmp_compare_left_32 = var_istop.object;

    if ( tmp_compare_left_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_32 = const_int_0;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_32, tmp_compare_right_32 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_36;
    }
    else
    {
        goto branch_no_36;
    }
    branch_yes_36:;
    goto loop_end_1;
    branch_no_36:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_cond_value_6 = par_show.object;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_yes_37;
    }
    else
    {
        goto branch_no_37;
    }
    branch_yes_37:;
    tmp_called_42 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 307;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_42 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_43 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_85 = var_last.object;

    if ( tmp_binop_left_85 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 31978 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_86 = const_str_digest_b8a6c03c6ff9316626918e48c049e118;
    tmp_binop_right_86 = PyTuple_New( 2 );
    tmp_tuple_element_10 = var_istop.object;

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_binop_right_86 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_binop_right_86, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = var_itn.object;

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_binop_right_86 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_binop_right_86, 1, tmp_tuple_element_10 );
    tmp_binop_right_85 = BINARY_OPERATION_REMAINDER( tmp_binop_left_86, tmp_binop_right_86 );
    Py_DECREF( tmp_binop_right_86 );
    if ( tmp_binop_right_85 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_49 = BINARY_OPERATION_ADD( tmp_binop_left_85, tmp_binop_right_85 );
    Py_DECREF( tmp_binop_right_85 );
    if ( tmp_call_arg_element_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 308;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_43, tmp_call_arg_element_49 );
    Py_DECREF( tmp_call_arg_element_49 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_44 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_87 = var_last.object;

    if ( tmp_binop_left_87 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 31978 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_88 = const_str_digest_1a0d34ed758b0d05d1c02aefa1a0f060;
    tmp_binop_right_88 = PyTuple_New( 2 );
    tmp_tuple_element_11 = var_Anorm.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_binop_right_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_binop_right_88, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_Acond.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_binop_right_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 286039 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_binop_right_88, 1, tmp_tuple_element_11 );
    tmp_binop_right_87 = BINARY_OPERATION_REMAINDER( tmp_binop_left_88, tmp_binop_right_88 );
    Py_DECREF( tmp_binop_right_88 );
    if ( tmp_binop_right_87 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_50 = BINARY_OPERATION_ADD( tmp_binop_left_87, tmp_binop_right_87 );
    Py_DECREF( tmp_binop_right_87 );
    if ( tmp_call_arg_element_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 309;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_44, tmp_call_arg_element_50 );
    Py_DECREF( tmp_call_arg_element_50 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_45 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_89 = var_last.object;

    if ( tmp_binop_left_89 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 31978 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_90 = const_str_digest_18d035b5007b391b497b9617a3975eb1;
    tmp_binop_right_90 = PyTuple_New( 2 );
    tmp_tuple_element_12 = var_rnorm.object;

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_binop_right_90 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 286140 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_binop_right_90, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = var_ynorm.object;

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_binop_right_90 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 286191 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_binop_right_90, 1, tmp_tuple_element_12 );
    tmp_binop_right_89 = BINARY_OPERATION_REMAINDER( tmp_binop_left_90, tmp_binop_right_90 );
    Py_DECREF( tmp_binop_right_90 );
    if ( tmp_binop_right_89 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_51 = BINARY_OPERATION_ADD( tmp_binop_left_89, tmp_binop_right_89 );
    Py_DECREF( tmp_binop_right_89 );
    if ( tmp_call_arg_element_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 310;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_45, tmp_call_arg_element_51 );
    Py_DECREF( tmp_call_arg_element_51 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_46 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_91 = var_last.object;

    if ( tmp_binop_left_91 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 31978 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_92 = const_str_digest_2fb1e1aa1ade90de4986701765bf4563;
    tmp_binop_right_92 = PyTuple_New( 1 );
    tmp_tuple_element_13 = var_Arnorm.object;

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_binop_right_92 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 286242 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_binop_right_92, 0, tmp_tuple_element_13 );
    tmp_binop_right_91 = BINARY_OPERATION_REMAINDER( tmp_binop_left_92, tmp_binop_right_92 );
    Py_DECREF( tmp_binop_right_92 );
    if ( tmp_binop_right_91 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_52 = BINARY_OPERATION_ADD( tmp_binop_left_91, tmp_binop_right_91 );
    Py_DECREF( tmp_binop_right_91 );
    if ( tmp_call_arg_element_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 311;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_46, tmp_call_arg_element_52 );
    Py_DECREF( tmp_call_arg_element_52 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_47 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_93 = var_last.object;

    if ( tmp_binop_left_93 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 31978 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_3 = var_msg.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28198 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_94 = var_istop.object;

    if ( tmp_binop_left_94 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_94 = const_int_pos_1;
    tmp_subscr_subscript_3 = BINARY_OPERATION_ADD( tmp_binop_left_94, tmp_binop_right_94 );
    if ( tmp_subscr_subscript_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_93 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_subscript_3 );
    if ( tmp_binop_right_93 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_53 = BINARY_OPERATION_ADD( tmp_binop_left_93, tmp_binop_right_93 );
    Py_DECREF( tmp_binop_right_93 );
    if ( tmp_call_arg_element_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 312;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_47, tmp_call_arg_element_53 );
    Py_DECREF( tmp_call_arg_element_53 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_37:;
    tmp_compare_left_33 = var_istop.object;

    if ( tmp_compare_left_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_33 = const_int_pos_6;
    tmp_cmp_Eq_7 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_33, tmp_compare_right_33 );
    if ( tmp_cmp_Eq_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_7 == 1)
    {
        goto branch_yes_38;
    }
    else
    {
        goto branch_no_38;
    }
    branch_yes_38:;
    tmp_assign_source_139 = par_maxiter.object;

    if ( tmp_assign_source_139 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }

    assert( var_info.object == NULL );
    var_info.object = INCREASE_REFCOUNT( tmp_assign_source_139 );

    goto branch_end_38;
    branch_no_38:;
    tmp_assign_source_140 = const_int_0;
    assert( var_info.object == NULL );
    var_info.object = INCREASE_REFCOUNT( tmp_assign_source_140 );

    branch_end_38:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_called_48 = var_postprocess.object;

    if ( tmp_called_48 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 280079 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_54 = var_x.object;

    if ( tmp_call_arg_element_54 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 319;
    tmp_tuple_element_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_48, tmp_call_arg_element_54 );
    if ( tmp_tuple_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = var_info.object;

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_14 );
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
    if ((var_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            var_x.object
        );

    }
    if ((var_postprocess.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_postprocess,
            var_postprocess.object
        );

    }
    if ((var_matvec.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_matvec,
            var_matvec.object
        );

    }
    if ((var_psolve.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_psolve,
            var_psolve.object
        );

    }
    if ((var_first.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_first,
            var_first.object
        );

    }
    if ((var_last.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_last,
            var_last.object
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
    if ((var_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msg,
            var_msg.object
        );

    }
    if ((var_istop.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_istop,
            var_istop.object
        );

    }
    if ((var_itn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_itn,
            var_itn.object
        );

    }
    if ((var_Anorm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Anorm,
            var_Anorm.object
        );

    }
    if ((var_Acond.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Acond,
            var_Acond.object
        );

    }
    if ((var_rnorm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rnorm,
            var_rnorm.object
        );

    }
    if ((var_ynorm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ynorm,
            var_ynorm.object
        );

    }
    if ((var_eps.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_eps,
            var_eps.object
        );

    }
    if ((var_y.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_y,
            var_y.object
        );

    }
    if ((var_r1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_r1,
            var_r1.object
        );

    }
    if ((var_beta1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_beta1,
            var_beta1.object
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
    if ((var_r2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_r2,
            var_r2.object
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
    if ((var_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t,
            var_t.object
        );

    }
    if ((var_z.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_z,
            var_z.object
        );

    }
    if ((var_epsa.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsa,
            var_epsa.object
        );

    }
    if ((var_oldb.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_oldb,
            var_oldb.object
        );

    }
    if ((var_beta.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_beta,
            var_beta.object
        );

    }
    if ((var_dbar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dbar,
            var_dbar.object
        );

    }
    if ((var_epsln.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsln,
            var_epsln.object
        );

    }
    if ((var_qrnorm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_qrnorm,
            var_qrnorm.object
        );

    }
    if ((var_phibar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_phibar,
            var_phibar.object
        );

    }
    if ((var_rhs1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rhs1,
            var_rhs1.object
        );

    }
    if ((var_rhs2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rhs2,
            var_rhs2.object
        );

    }
    if ((var_tnorm2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tnorm2,
            var_tnorm2.object
        );

    }
    if ((var_ynorm2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ynorm2,
            var_ynorm2.object
        );

    }
    if ((var_cs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cs,
            var_cs.object
        );

    }
    if ((var_sn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sn,
            var_sn.object
        );

    }
    if ((var_w2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_w2,
            var_w2.object
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
    if ((var_alfa.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_alfa,
            var_alfa.object
        );

    }
    if ((var_gmax.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gmax,
            var_gmax.object
        );

    }
    if ((var_gmin.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gmin,
            var_gmin.object
        );

    }
    if ((var_oldeps.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_oldeps,
            var_oldeps.object
        );

    }
    if ((var_delta.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_delta,
            var_delta.object
        );

    }
    if ((var_gbar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gbar,
            var_gbar.object
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
    if ((var_Arnorm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Arnorm,
            var_Arnorm.object
        );

    }
    if ((var_gamma.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gamma,
            var_gamma.object
        );

    }
    if ((var_phi.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_phi,
            var_phi.object
        );

    }
    if ((var_denom.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_denom,
            var_denom.object
        );

    }
    if ((var_w1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_w1,
            var_w1.object
        );

    }
    if ((var_epsx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsx,
            var_epsx.object
        );

    }
    if ((var_epsr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsr,
            var_epsr.object
        );

    }
    if ((var_diag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_diag,
            var_diag.object
        );

    }
    if ((var_test1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_test1,
            var_test1.object
        );

    }
    if ((var_test2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_test2,
            var_test2.object
        );

    }
    if ((var_t1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t1,
            var_t1.object
        );

    }
    if ((var_t2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t2,
            var_t2.object
        );

    }
    if ((var_prnt.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_prnt,
            var_prnt.object
        );

    }
    if ((var_str1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_str1,
            var_str1.object
        );

    }
    if ((var_str2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_str2,
            var_str2.object
        );

    }
    if ((var_str3.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_str3,
            var_str3.object
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
    if ((par_A.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_A,
            par_A.object
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
    if ((par_x0.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x0,
            par_x0.object
        );

    }
    if ((par_shift.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_shift,
            par_shift.object
        );

    }
    if ((par_tol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tol,
            par_tol.object
        );

    }
    if ((par_maxiter.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_maxiter,
            par_maxiter.object
        );

    }
    if ((par_xtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_xtype,
            par_xtype.object
        );

    }
    if ((par_M.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_M,
            par_M.object
        );

    }
    if ((par_callback.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_callback,
            par_callback.object
        );

    }
    if ((par_show.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_show,
            par_show.object
        );

    }
    if ((par_check.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check,
            par_check.object
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
static PyObject *fparse_function_1_minres_of_module_scipy$sparse$linalg$isolve$minres( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_A = NULL;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_x0 = NULL;
    PyObject *_python_par_shift = NULL;
    PyObject *_python_par_tol = NULL;
    PyObject *_python_par_maxiter = NULL;
    PyObject *_python_par_xtype = NULL;
    PyObject *_python_par_M = NULL;
    PyObject *_python_par_callback = NULL;
    PyObject *_python_par_show = NULL;
    PyObject *_python_par_check = NULL;
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
                PyErr_Format( PyExc_TypeError, "minres() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_A == key )
            {
                assert( _python_par_A == NULL );
                _python_par_A = value;

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
            if ( found == false && const_str_plain_x0 == key )
            {
                assert( _python_par_x0 == NULL );
                _python_par_x0 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_shift == key )
            {
                assert( _python_par_shift == NULL );
                _python_par_shift = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_tol == key )
            {
                assert( _python_par_tol == NULL );
                _python_par_tol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_maxiter == key )
            {
                assert( _python_par_maxiter == NULL );
                _python_par_maxiter = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_xtype == key )
            {
                assert( _python_par_xtype == NULL );
                _python_par_xtype = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_M == key )
            {
                assert( _python_par_M == NULL );
                _python_par_M = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_callback == key )
            {
                assert( _python_par_callback == NULL );
                _python_par_callback = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_show == key )
            {
                assert( _python_par_show == NULL );
                _python_par_show = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_check == key )
            {
                assert( _python_par_check == NULL );
                _python_par_check = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_A, key ) == 1 )
            {
                assert( _python_par_A == NULL );
                _python_par_A = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x0, key ) == 1 )
            {
                assert( _python_par_x0 == NULL );
                _python_par_x0 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_shift, key ) == 1 )
            {
                assert( _python_par_shift == NULL );
                _python_par_shift = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_tol, key ) == 1 )
            {
                assert( _python_par_tol == NULL );
                _python_par_tol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maxiter, key ) == 1 )
            {
                assert( _python_par_maxiter == NULL );
                _python_par_maxiter = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_xtype, key ) == 1 )
            {
                assert( _python_par_xtype == NULL );
                _python_par_xtype = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_M, key ) == 1 )
            {
                assert( _python_par_M == NULL );
                _python_par_M = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_callback, key ) == 1 )
            {
                assert( _python_par_callback == NULL );
                _python_par_callback = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_show, key ) == 1 )
            {
                assert( _python_par_show == NULL );
                _python_par_show = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_check, key ) == 1 )
            {
                assert( _python_par_check == NULL );
                _python_par_check = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "minres() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 11 ))
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
         if (unlikely( _python_par_A != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_A = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_A == NULL )
    {
        if ( 0 + self->m_defaults_given >= 11  )
        {
            _python_par_A = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 11 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
        if ( 1 + self->m_defaults_given >= 11  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 11 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_x0 != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_x0 = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_x0 == NULL )
    {
        if ( 2 + self->m_defaults_given >= 11  )
        {
            _python_par_x0 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 11 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_shift != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_shift = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_shift == NULL )
    {
        if ( 3 + self->m_defaults_given >= 11  )
        {
            _python_par_shift = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 11 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_tol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_tol = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_tol == NULL )
    {
        if ( 4 + self->m_defaults_given >= 11  )
        {
            _python_par_tol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 11 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_maxiter != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_maxiter = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_maxiter == NULL )
    {
        if ( 5 + self->m_defaults_given >= 11  )
        {
            _python_par_maxiter = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 11 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_xtype != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_xtype = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_xtype == NULL )
    {
        if ( 6 + self->m_defaults_given >= 11  )
        {
            _python_par_xtype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 11 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_M != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_M = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_M == NULL )
    {
        if ( 7 + self->m_defaults_given >= 11  )
        {
            _python_par_M = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 11 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_callback != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_callback = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_callback == NULL )
    {
        if ( 8 + self->m_defaults_given >= 11  )
        {
            _python_par_callback = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 11 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_show != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 9 );
             goto error_exit;
         }

        _python_par_show = INCREASE_REFCOUNT( args[ 9 ] );
    }
    else if ( _python_par_show == NULL )
    {
        if ( 9 + self->m_defaults_given >= 11  )
        {
            _python_par_show = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 9 - 11 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_check != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 10 );
             goto error_exit;
         }

        _python_par_check = INCREASE_REFCOUNT( args[ 10 ] );
    }
    else if ( _python_par_check == NULL )
    {
        if ( 10 + self->m_defaults_given >= 11  )
        {
            _python_par_check = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 10 - 11 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_A == NULL || _python_par_b == NULL || _python_par_x0 == NULL || _python_par_shift == NULL || _python_par_tol == NULL || _python_par_maxiter == NULL || _python_par_xtype == NULL || _python_par_M == NULL || _python_par_callback == NULL || _python_par_show == NULL || _python_par_check == NULL ))
    {
        PyObject *values[] = { _python_par_A, _python_par_b, _python_par_x0, _python_par_shift, _python_par_tol, _python_par_maxiter, _python_par_xtype, _python_par_M, _python_par_callback, _python_par_show, _python_par_check };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_minres_of_module_scipy$sparse$linalg$isolve$minres( self, _python_par_A, _python_par_b, _python_par_x0, _python_par_shift, _python_par_tol, _python_par_maxiter, _python_par_xtype, _python_par_M, _python_par_callback, _python_par_show, _python_par_check );

error_exit:;

    Py_XDECREF( _python_par_A );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_x0 );
    Py_XDECREF( _python_par_shift );
    Py_XDECREF( _python_par_tol );
    Py_XDECREF( _python_par_maxiter );
    Py_XDECREF( _python_par_xtype );
    Py_XDECREF( _python_par_M );
    Py_XDECREF( _python_par_callback );
    Py_XDECREF( _python_par_show );
    Py_XDECREF( _python_par_check );

    return NULL;
}

static PyObject *dparse_function_1_minres_of_module_scipy$sparse$linalg$isolve$minres( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 11 )
    {
        return impl_function_1_minres_of_module_scipy$sparse$linalg$isolve$minres( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ), INCREASE_REFCOUNT( args[ 10 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_minres_of_module_scipy$sparse$linalg$isolve$minres( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_minres_of_module_scipy$sparse$linalg$isolve$minres( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_minres_of_module_scipy$sparse$linalg$isolve$minres,
        dparse_function_1_minres_of_module_scipy$sparse$linalg$isolve$minres,
        const_str_plain_minres,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_de0e45f4295c3890b711c331dec4965a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$isolve$minres,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$linalg$isolve$minres =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.linalg.isolve.minres",   /* m_name */
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

MOD_INIT_DECL( scipy$sparse$linalg$isolve$minres )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$linalg$isolve$minres );
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

    // puts( "in initscipy$sparse$linalg$isolve$minres" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$linalg$isolve$minres = Py_InitModule4(
        "scipy.sparse.linalg.isolve.minres",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$sparse$linalg$isolve$minres = PyModule_Create( &mdef_scipy$sparse$linalg$isolve$minres );
#endif

    moduledict_scipy$sparse$linalg$isolve$minres = (PyDictObject *)((PyModuleObject *)module_scipy$sparse$linalg$isolve$minres)->md_dict;

    assertObject( module_scipy$sparse$linalg$isolve$minres );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_953bbe73c5b24f47e085a179c1985b7d, module_scipy$sparse$linalg$isolve$minres );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$sparse$linalg$isolve$minres );

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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_defaults_1;
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

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c6b795940a742365522d6a87e0b3806b;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_ad634b265280ff54a4fcdcf8375704ae, module_scipy$sparse$linalg$isolve$minres );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$minres)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
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
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$minres)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$minres)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$minres)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_4, tmp_import_globals_4, const_tuple_4e9c88d5f0c1394f9d94477640a82a33_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_sqrt );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_sqrt, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$minres)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_5, tmp_import_globals_5, const_tuple_4e9c88d5f0c1394f9d94477640a82a33_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_inner );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_inner, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$minres)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_6, tmp_import_globals_6, const_tuple_4e9c88d5f0c1394f9d94477640a82a33_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_finfo );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_finfo, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$minres)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_7, tmp_import_globals_7, const_tuple_4e9c88d5f0c1394f9d94477640a82a33_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_zeros );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$minres)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_31c135a8754779dc25b4674933b86e04, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_norm_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_norm );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_10 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$minres)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_utils, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_make_system_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_make_system );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_make_system, tmp_assign_source_11 );
    tmp_import_globals_10 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$minres)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_iterative, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_set_docstring_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_set_docstring );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_set_docstring, tmp_assign_source_12 );
    tmp_assign_source_13 = LIST_COPY( const_list_str_plain_minres_list );
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_13 );
    tmp_assign_source_14 = const_str_digest_6f65cb8d7ceb9fdf95139baeedd5f354;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_header, tmp_assign_source_14 );
    tmp_assign_source_15 = const_str_digest_1341bc9eb9e075668441f92351f118a3;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_Ainfo, tmp_assign_source_15 );
    tmp_assign_source_16 = const_str_digest_5d3c1511e0127ae4d5761eeb22141451;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_footer, tmp_assign_source_16 );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_set_docstring );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_docstring );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 279079 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_header );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_header );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 95384 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_Ainfo );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Ainfo );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285299 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_footer );

    if (unlikely( tmp_call_arg_element_3 == NULL ))
    {
        tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_footer );
    }

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285326 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 43;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 43;
    tmp_called_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_defaults_1 = const_tuple_2cc03bf6bb8534a8d959a9f2f0691265_tuple;
    tmp_call_arg_element_4 = MAKE_FUNCTION_function_1_minres_of_module_scipy$sparse$linalg$isolve$minres( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 41;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$minres, (Nuitka_StringObject *)const_str_plain_minres, tmp_assign_source_17 );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$linalg$isolve$minres );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
