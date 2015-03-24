// Generated code for Python source for module 'scipy.linalg.basic'
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

// The _module_scipy$linalg$basic is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$linalg$basic;
PyDictObject *moduledict_scipy$linalg$basic;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_float_1_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
static PyObject *const_float_1_01;
extern PyObject *const_list_empty;
extern PyObject *const_str_plain_B;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_empty;
extern PyObject *const_float_1000_0;
extern PyObject *const_str_plain_a1;
extern PyObject *const_str_plain_a2;
extern PyObject *const_str_plain_ab;
extern PyObject *const_str_plain_b1;
extern PyObject *const_str_plain_b2;
extern PyObject *const_str_plain_lu;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_vh;
extern PyObject *const_str_plain_x1;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_det;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_eps;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_inv;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_piv;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_svd;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_cond;
extern PyObject *const_str_plain_eigh;
static PyObject *const_str_plain_fdet;
static PyObject *const_str_plain_gbsv;
static PyObject *const_str_plain_gesv;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_misc;
static PyObject *const_str_plain_nrhs;
static PyObject *const_str_plain_pbsv;
extern PyObject *const_str_plain_pinv;
static PyObject *const_str_plain_posv;
extern PyObject *const_str_plain_rank;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_work;
extern PyObject *const_float_1000000_0;
static PyObject *const_str_plain_a_det;
extern PyObject *const_str_plain_basic;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_finfo;
static PyObject *const_str_plain_gelss;
extern PyObject *const_str_plain_getrf;
static PyObject *const_str_plain_getri;
static PyObject *const_str_plain_inv_a;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_lstsq;
extern PyObject *const_str_plain_lwork;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_pinv2;
static PyObject *const_str_plain_pinvh;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_rcond;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_solve;
extern PyObject *const_str_plain_trans;
static PyObject *const_str_plain_trtrs;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain_decomp;
extern PyObject *const_str_plain_factor;
extern PyObject *const_str_plain_lapack;
extern PyObject *const_str_plain_resids;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_flinalg;
static PyObject *const_str_plain_l_and_u;
static PyObject *const_str_plain_sym_pos;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_identity;
extern PyObject *const_str_plain_typecode;
static PyObject *const_str_plain_unitdiag;
extern PyObject *const_str_plain_conjugate;
extern PyObject *const_str_plain_transpose;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_calc_lwork;
extern PyObject *const_str_plain_decomp_svd;
extern PyObject *const_str_plain_LinAlgError;
extern PyObject *const_str_plain__datacopied;
extern PyObject *const_str_plain_overwrite_a;
extern PyObject *const_str_plain_overwrite_b;
static PyObject *const_str_plain_psigma_diag;
static PyObject *const_str_plain_return_rank;
static PyObject *const_str_plain_above_cutoff;
extern PyObject *const_str_plain_check_finite;
extern PyObject *const_str_plain_overwrite_ab;
static PyObject *const_str_plain_overwrite_lu;
static PyObject *const_str_plain_solve_banded;
extern PyObject *const_tuple_false_true_tuple;
extern PyObject *const_tuple_list_empty_tuple;
extern PyObject *const_str_plain_full_matrices;
static PyObject *const_str_plain_solveh_banded;
static PyObject *const_str_plain_unit_diagonal;
static PyObject *const_list_none_int_neg_1_list;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_str_plain_det_tuple;
extern PyObject *const_str_plain_get_lapack_funcs;
extern PyObject *const_str_plain_solve_triangular;
static PyObject *const_tuple_str_plain_gbsv_tuple;
static PyObject *const_tuple_str_plain_gesv_tuple;
static PyObject *const_tuple_str_plain_pbsv_tuple;
static PyObject *const_tuple_str_plain_posv_tuple;
extern PyObject *const_str_plain_asarray_chkfinite;
extern PyObject *const_str_plain_get_flinalg_funcs;
static PyObject *const_tuple_str_plain_gelss_tuple;
static PyObject *const_tuple_str_plain_trtrs_tuple;
static PyObject *const_tuple_none_none_false_true_tuple;
extern PyObject *const_tuple_str_plain_calc_lwork_tuple;
static PyObject *const_tuple_none_false_false_true_tuple;
static PyObject *const_tuple_false_false_false_true_tuple;
extern PyObject *const_dict_01a7863d0509221cf3231e5ae47a0f98;
static PyObject *const_dict_2687b19d99e2462dfa15c4b5f3e6edf8;
static PyObject *const_dict_3bafd88ebc63b0445e48f8aae35d233a;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
static PyObject *const_dict_7212e28450a00ce19d2eda8b2198a16b;
static PyObject *const_tuple_none_none_true_false_true_tuple;
extern PyObject *const_tuple_str_plain_get_lapack_funcs_tuple;
extern PyObject *const_tuple_str_plain_get_flinalg_funcs_tuple;
static PyObject *const_list_2618e03ffabe4a42404baaa4efad352a_list;
static PyObject *const_str_digest_13f7b9415bb74fc804ba75c70f5dd43b;
static PyObject *const_str_digest_16197db83cd80419d9307aa7d6f93473;
static PyObject *const_str_digest_17c1defafeb9eaa7b659b158c4aba48e;
static PyObject *const_str_digest_1ef26876be16ded561892e360e5b012c;
extern PyObject *const_str_digest_21f35a87e538df504d0b1dab18933f90;
static PyObject *const_str_digest_2895a4d0552bd4929fa3b36d8b57284a;
static PyObject *const_str_digest_2db952b835af6038832b01cfd0157e71;
static PyObject *const_str_digest_32b21685c72b26bab9d8e3b48806bba5;
static PyObject *const_str_digest_343477a1bc6bf0627f4385463832baf0;
extern PyObject *const_str_digest_918d0d83ae3f9e81ba561b5bc610327f;
static PyObject *const_str_digest_952e6ad03f7d60483895ead0dd2d6415;
static PyObject *const_str_digest_96342b148e44183f9e27c358016e8b3d;
extern PyObject *const_str_digest_9af7d042bb07b0a8fb0252066084eb07;
static PyObject *const_str_digest_9dab9d37cec9c83462e19480e61ab44c;
extern PyObject *const_str_digest_9e37f9ab918a6f6404b8dec5a4bda862;
static PyObject *const_str_digest_ab5b866e5de8083e0d3ec852b190906d;
static PyObject *const_str_digest_af384fbd15036006d2f8d30df8e31dad;
static PyObject *const_str_digest_b077007cebbf93f92bcb50c20941ccd9;
static PyObject *const_str_digest_bb4052427691ada6652f52cb95177bb0;
static PyObject *const_str_digest_be72bc238c8e39974ac4dbdfd3f56d35;
extern PyObject *const_str_digest_bfc63172b396a4f385572b1b0268edc0;
static PyObject *const_str_digest_c1ca0508a291adaa83c7bd5ab1478be2;
static PyObject *const_str_digest_c7bd9c6fd44990228ea5d54a061ed871;
static PyObject *const_str_digest_c9ce96b04020a922080320c319f0beb0;
static PyObject *const_str_digest_cc4cd7e93e1a16dc82483f3d9725e5f5;
extern PyObject *const_str_digest_cea6f413576eecfc568663ad19404835;
extern PyObject *const_str_digest_d28cac11cb69aacda04126eb9e8c97c4;
static PyObject *const_str_digest_e57ad839057595f38aee03019a6e8679;
static PyObject *const_str_digest_eb2a6d283ec9a5f7826fd93664289969;
static PyObject *const_str_digest_ef1a1050940d9318e998b471253fda49;
static PyObject *const_str_digest_f31958934525eb33da01f7af7e15b84e;
static PyObject *const_tuple_str_plain_getrf_str_plain_getri_tuple;
static PyObject *const_tuple_23577be8e2a17b01ea8d4d3db6480e2a_tuple;
static PyObject *const_tuple_3aa73e3b6051f5fa834b7808eed8f2ce_tuple;
static PyObject *const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple;
static PyObject *const_tuple_4a7ceecbba569d968bff613c9de56ef8_tuple;
static PyObject *const_tuple_4c0f6796925cb7ca7157b9d9830a79a8_tuple;
static PyObject *const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple;
static PyObject *const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple;
static PyObject *const_tuple_9d1e6230239293cc749370f7b27c26ac_tuple;
static PyObject *const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple;
static PyObject *const_tuple_9f7efd14d19758ff0faaf37f2bab9658_tuple;
static PyObject *const_tuple_a802cccab984ec6751775d01f166b612_tuple;
static PyObject *const_tuple_a84488f9ae095b9ecbe3434c5fd8f4d9_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple;
static PyObject *const_tuple_d6a1c5db44cc1fb9b69178e606e89230_tuple;
static PyObject *const_tuple_f2888c6cc6291fceaf47f7bbbf2cda0e_tuple;
static PyObject *const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple;
static PyObject *const_tuple_f2ad9c13c17b34cf562af3952d7ff520_tuple;
static PyObject *const_tuple_false_false_false_false_false_true_tuple;
static PyObject *const_tuple_int_0_false_false_false_false_true_tuple;
static PyObject *const_tuple_str_plain_decomp_str_plain_decomp_svd_tuple;
extern PyObject *const_tuple_str_plain_LinAlgError_str_plain__datacopied_tuple;
extern PyObject *const_tuple_str_plain_a_str_plain_overwrite_a_str_plain_check_finite_tuple;

static void _initModuleConstants(void)
{
    const_float_1_01 = UNSTREAM_FLOAT( &constant_bin[ 2189653 ] );
    const_str_plain_fdet = UNSTREAM_STRING( &constant_bin[ 249714 ], 4, 1 );
    const_str_plain_gbsv = UNSTREAM_STRING( &constant_bin[ 249221 ], 4, 1 );
    const_str_plain_gesv = UNSTREAM_STRING( &constant_bin[ 248960 ], 4, 1 );
    const_str_plain_nrhs = UNSTREAM_STRING( &constant_bin[ 249815 ], 4, 1 );
    const_str_plain_pbsv = UNSTREAM_STRING( &constant_bin[ 249271 ], 4, 1 );
    const_str_plain_posv = UNSTREAM_STRING( &constant_bin[ 248910 ], 4, 1 );
    const_str_plain_a_det = UNSTREAM_STRING( &constant_bin[ 249764 ], 5, 1 );
    const_str_plain_gelss = UNSTREAM_STRING( &constant_bin[ 249865 ], 5, 1 );
    const_str_plain_getri = UNSTREAM_STRING( &constant_bin[ 249469 ], 5, 1 );
    const_str_plain_inv_a = UNSTREAM_STRING( &constant_bin[ 249617 ], 5, 1 );
    const_str_plain_pinvh = UNSTREAM_STRING( &constant_bin[ 2152223 ], 5, 1 );
    const_str_plain_trtrs = UNSTREAM_STRING( &constant_bin[ 249010 ], 5, 1 );
    const_str_plain_l_and_u = UNSTREAM_STRING( &constant_bin[ 249120 ], 7, 1 );
    const_str_plain_sym_pos = UNSTREAM_STRING( &constant_bin[ 248857 ], 7, 1 );
    const_str_plain_unitdiag = UNSTREAM_STRING( &constant_bin[ 2189661 ], 8, 1 );
    const_str_plain_psigma_diag = UNSTREAM_STRING( &constant_bin[ 2189669 ], 11, 1 );
    const_str_plain_return_rank = UNSTREAM_STRING( &constant_bin[ 249916 ], 11, 1 );
    const_str_plain_above_cutoff = UNSTREAM_STRING( &constant_bin[ 2189680 ], 12, 1 );
    const_str_plain_overwrite_lu = UNSTREAM_STRING( &constant_bin[ 2189692 ], 12, 1 );
    const_str_plain_solve_banded = UNSTREAM_STRING( &constant_bin[ 2151845 ], 12, 1 );
    const_str_plain_solveh_banded = UNSTREAM_STRING( &constant_bin[ 2151892 ], 13, 1 );
    const_str_plain_unit_diagonal = UNSTREAM_STRING( &constant_bin[ 249061 ], 13, 1 );
    const_list_none_int_neg_1_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_none_int_neg_1_list, 0, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_none_int_neg_1_list, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    const_tuple_str_plain_det_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_det_tuple, 0, const_str_plain_det ); Py_INCREF( const_str_plain_det );
    const_tuple_str_plain_gbsv_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_gbsv_tuple, 0, const_str_plain_gbsv ); Py_INCREF( const_str_plain_gbsv );
    const_tuple_str_plain_gesv_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_gesv_tuple, 0, const_str_plain_gesv ); Py_INCREF( const_str_plain_gesv );
    const_tuple_str_plain_pbsv_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_pbsv_tuple, 0, const_str_plain_pbsv ); Py_INCREF( const_str_plain_pbsv );
    const_tuple_str_plain_posv_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_posv_tuple, 0, const_str_plain_posv ); Py_INCREF( const_str_plain_posv );
    const_tuple_str_plain_gelss_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_gelss_tuple, 0, const_str_plain_gelss ); Py_INCREF( const_str_plain_gelss );
    const_tuple_str_plain_trtrs_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_trtrs_tuple, 0, const_str_plain_trtrs ); Py_INCREF( const_str_plain_trtrs );
    const_tuple_none_none_false_true_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_none_false_true_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_true_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_true_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_false_true_tuple, 3, Py_True ); Py_INCREF( Py_True );
    const_tuple_none_false_false_true_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_false_false_true_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_false_false_true_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_false_false_true_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_false_false_true_tuple, 3, Py_True ); Py_INCREF( Py_True );
    const_tuple_false_false_false_true_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_false_false_false_true_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_true_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_true_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_true_tuple, 3, Py_True ); Py_INCREF( Py_True );
    const_dict_2687b19d99e2462dfa15c4b5f3e6edf8 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_2687b19d99e2462dfa15c4b5f3e6edf8, const_str_plain_d, const_float_1000000_0 );
    PyDict_SetItem( const_dict_2687b19d99e2462dfa15c4b5f3e6edf8, const_str_plain_f, const_float_1000_0 );
    const_dict_3bafd88ebc63b0445e48f8aae35d233a = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_3bafd88ebc63b0445e48f8aae35d233a, const_str_plain_C, const_int_pos_2 );
    PyDict_SetItem( const_dict_3bafd88ebc63b0445e48f8aae35d233a, const_str_plain_T, const_int_pos_1 );
    PyDict_SetItem( const_dict_3bafd88ebc63b0445e48f8aae35d233a, const_str_plain_N, const_int_0 );
    const_dict_7212e28450a00ce19d2eda8b2198a16b = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_7212e28450a00ce19d2eda8b2198a16b, const_str_plain_check_finite, Py_False );
    PyDict_SetItem( const_dict_7212e28450a00ce19d2eda8b2198a16b, const_str_plain_full_matrices, Py_False );
    const_tuple_none_none_true_false_true_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_none_none_true_false_true_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_true_false_true_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_true_false_true_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_none_none_true_false_true_tuple, 3, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_true_false_true_tuple, 4, Py_True ); Py_INCREF( Py_True );
    const_list_2618e03ffabe4a42404baaa4efad352a_list = PyList_New( 10 );
    PyList_SET_ITEM( const_list_2618e03ffabe4a42404baaa4efad352a_list, 0, const_str_plain_solve ); Py_INCREF( const_str_plain_solve );
    PyList_SET_ITEM( const_list_2618e03ffabe4a42404baaa4efad352a_list, 1, const_str_plain_solve_triangular ); Py_INCREF( const_str_plain_solve_triangular );
    PyList_SET_ITEM( const_list_2618e03ffabe4a42404baaa4efad352a_list, 2, const_str_plain_solveh_banded ); Py_INCREF( const_str_plain_solveh_banded );
    PyList_SET_ITEM( const_list_2618e03ffabe4a42404baaa4efad352a_list, 3, const_str_plain_solve_banded ); Py_INCREF( const_str_plain_solve_banded );
    PyList_SET_ITEM( const_list_2618e03ffabe4a42404baaa4efad352a_list, 4, const_str_plain_inv ); Py_INCREF( const_str_plain_inv );
    PyList_SET_ITEM( const_list_2618e03ffabe4a42404baaa4efad352a_list, 5, const_str_plain_det ); Py_INCREF( const_str_plain_det );
    PyList_SET_ITEM( const_list_2618e03ffabe4a42404baaa4efad352a_list, 6, const_str_plain_lstsq ); Py_INCREF( const_str_plain_lstsq );
    PyList_SET_ITEM( const_list_2618e03ffabe4a42404baaa4efad352a_list, 7, const_str_plain_pinv ); Py_INCREF( const_str_plain_pinv );
    PyList_SET_ITEM( const_list_2618e03ffabe4a42404baaa4efad352a_list, 8, const_str_plain_pinv2 ); Py_INCREF( const_str_plain_pinv2 );
    PyList_SET_ITEM( const_list_2618e03ffabe4a42404baaa4efad352a_list, 9, const_str_plain_pinvh ); Py_INCREF( const_str_plain_pinvh );
    const_str_digest_13f7b9415bb74fc804ba75c70f5dd43b = UNSTREAM_STRING( &constant_bin[ 2189704 ], 1382, 0 );
    const_str_digest_16197db83cd80419d9307aa7d6f93473 = UNSTREAM_STRING( &constant_bin[ 2191086 ], 102, 0 );
    const_str_digest_17c1defafeb9eaa7b659b158c4aba48e = UNSTREAM_STRING( &constant_bin[ 2191188 ], 18, 0 );
    const_str_digest_1ef26876be16ded561892e360e5b012c = UNSTREAM_STRING( &constant_bin[ 2175365 ], 15, 0 );
    const_str_digest_2895a4d0552bd4929fa3b36d8b57284a = UNSTREAM_STRING( &constant_bin[ 2191206 ], 1233, 0 );
    const_str_digest_2db952b835af6038832b01cfd0157e71 = UNSTREAM_STRING( &constant_bin[ 2192439 ], 1348, 0 );
    const_str_digest_32b21685c72b26bab9d8e3b48806bba5 = UNSTREAM_STRING( &constant_bin[ 2193787 ], 1260, 0 );
    const_str_digest_343477a1bc6bf0627f4385463832baf0 = UNSTREAM_STRING( &constant_bin[ 2195047 ], 18, 0 );
    const_str_digest_952e6ad03f7d60483895ead0dd2d6415 = UNSTREAM_STRING( &constant_bin[ 2195065 ], 1166, 0 );
    const_str_digest_96342b148e44183f9e27c358016e8b3d = UNSTREAM_STRING( &constant_bin[ 2196231 ], 1588, 0 );
    const_str_digest_9dab9d37cec9c83462e19480e61ab44c = UNSTREAM_STRING( &constant_bin[ 2197819 ], 951, 0 );
    const_str_digest_ab5b866e5de8083e0d3ec852b190906d = UNSTREAM_STRING( &constant_bin[ 2198770 ], 1439, 0 );
    const_str_digest_af384fbd15036006d2f8d30df8e31dad = UNSTREAM_STRING( &constant_bin[ 2200209 ], 1462, 0 );
    const_str_digest_b077007cebbf93f92bcb50c20941ccd9 = UNSTREAM_STRING( &constant_bin[ 2201671 ], 1760, 0 );
    const_str_digest_bb4052427691ada6652f52cb95177bb0 = UNSTREAM_STRING( &constant_bin[ 2203431 ], 38, 0 );
    const_str_digest_be72bc238c8e39974ac4dbdfd3f56d35 = UNSTREAM_STRING( &constant_bin[ 2203469 ], 53, 0 );
    const_str_digest_c1ca0508a291adaa83c7bd5ab1478be2 = UNSTREAM_STRING( &constant_bin[ 2203522 ], 48, 0 );
    const_str_digest_c7bd9c6fd44990228ea5d54a061ed871 = UNSTREAM_STRING( &constant_bin[ 2203570 ], 54, 0 );
    const_str_digest_c9ce96b04020a922080320c319f0beb0 = UNSTREAM_STRING( &constant_bin[ 2203624 ], 55, 0 );
    const_str_digest_cc4cd7e93e1a16dc82483f3d9725e5f5 = UNSTREAM_STRING( &constant_bin[ 2203679 ], 49, 0 );
    const_str_digest_e57ad839057595f38aee03019a6e8679 = UNSTREAM_STRING( &constant_bin[ 2203728 ], 48, 0 );
    const_str_digest_eb2a6d283ec9a5f7826fd93664289969 = UNSTREAM_STRING( &constant_bin[ 2203776 ], 49, 0 );
    const_str_digest_ef1a1050940d9318e998b471253fda49 = UNSTREAM_STRING( &constant_bin[ 2203825 ], 49, 0 );
    const_str_digest_f31958934525eb33da01f7af7e15b84e = UNSTREAM_STRING( &constant_bin[ 798498 ], 23, 0 );
    const_tuple_str_plain_getrf_str_plain_getri_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_getrf_str_plain_getri_tuple, 0, const_str_plain_getrf ); Py_INCREF( const_str_plain_getrf );
    PyTuple_SET_ITEM( const_tuple_str_plain_getrf_str_plain_getri_tuple, 1, const_str_plain_getri ); Py_INCREF( const_str_plain_getri );
    const_tuple_23577be8e2a17b01ea8d4d3db6480e2a_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_23577be8e2a17b01ea8d4d3db6480e2a_tuple, 0, const_str_plain_ab ); Py_INCREF( const_str_plain_ab );
    PyTuple_SET_ITEM( const_tuple_23577be8e2a17b01ea8d4d3db6480e2a_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_23577be8e2a17b01ea8d4d3db6480e2a_tuple, 2, const_str_plain_overwrite_ab ); Py_INCREF( const_str_plain_overwrite_ab );
    PyTuple_SET_ITEM( const_tuple_23577be8e2a17b01ea8d4d3db6480e2a_tuple, 3, const_str_plain_overwrite_b ); Py_INCREF( const_str_plain_overwrite_b );
    PyTuple_SET_ITEM( const_tuple_23577be8e2a17b01ea8d4d3db6480e2a_tuple, 4, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_23577be8e2a17b01ea8d4d3db6480e2a_tuple, 5, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_23577be8e2a17b01ea8d4d3db6480e2a_tuple, 6, const_str_plain_pbsv ); Py_INCREF( const_str_plain_pbsv );
    PyTuple_SET_ITEM( const_tuple_23577be8e2a17b01ea8d4d3db6480e2a_tuple, 7, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_23577be8e2a17b01ea8d4d3db6480e2a_tuple, 8, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_23577be8e2a17b01ea8d4d3db6480e2a_tuple, 9, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    const_tuple_3aa73e3b6051f5fa834b7808eed8f2ce_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_3aa73e3b6051f5fa834b7808eed8f2ce_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_3aa73e3b6051f5fa834b7808eed8f2ce_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_3aa73e3b6051f5fa834b7808eed8f2ce_tuple, 2, const_str_plain_cond ); Py_INCREF( const_str_plain_cond );
    PyTuple_SET_ITEM( const_tuple_3aa73e3b6051f5fa834b7808eed8f2ce_tuple, 3, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_3aa73e3b6051f5fa834b7808eed8f2ce_tuple, 4, const_str_plain_overwrite_b ); Py_INCREF( const_str_plain_overwrite_b );
    PyTuple_SET_ITEM( const_tuple_3aa73e3b6051f5fa834b7808eed8f2ce_tuple, 5, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 1, const_str_plain_cond ); Py_INCREF( const_str_plain_cond );
    PyTuple_SET_ITEM( const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 2, const_str_plain_rcond ); Py_INCREF( const_str_plain_rcond );
    PyTuple_SET_ITEM( const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 3, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 4, const_str_plain_return_rank ); Py_INCREF( const_str_plain_return_rank );
    PyTuple_SET_ITEM( const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 5, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 6, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 7, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 8, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 9, const_str_plain_factor ); Py_INCREF( const_str_plain_factor );
    PyTuple_SET_ITEM( const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 10, const_str_plain_above_cutoff ); Py_INCREF( const_str_plain_above_cutoff );
    PyTuple_SET_ITEM( const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 11, const_str_plain_psigma_diag ); Py_INCREF( const_str_plain_psigma_diag );
    PyTuple_SET_ITEM( const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 12, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    const_tuple_4a7ceecbba569d968bff613c9de56ef8_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_4a7ceecbba569d968bff613c9de56ef8_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_4a7ceecbba569d968bff613c9de56ef8_tuple, 1, const_str_plain_cond ); Py_INCREF( const_str_plain_cond );
    PyTuple_SET_ITEM( const_tuple_4a7ceecbba569d968bff613c9de56ef8_tuple, 2, const_str_plain_rcond ); Py_INCREF( const_str_plain_rcond );
    PyTuple_SET_ITEM( const_tuple_4a7ceecbba569d968bff613c9de56ef8_tuple, 3, const_str_plain_return_rank ); Py_INCREF( const_str_plain_return_rank );
    PyTuple_SET_ITEM( const_tuple_4a7ceecbba569d968bff613c9de56ef8_tuple, 4, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_4a7ceecbba569d968bff613c9de56ef8_tuple, 5, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_4a7ceecbba569d968bff613c9de56ef8_tuple, 6, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_4a7ceecbba569d968bff613c9de56ef8_tuple, 7, const_str_plain_resids ); Py_INCREF( const_str_plain_resids );
    PyTuple_SET_ITEM( const_tuple_4a7ceecbba569d968bff613c9de56ef8_tuple, 8, const_str_plain_rank ); Py_INCREF( const_str_plain_rank );
    PyTuple_SET_ITEM( const_tuple_4a7ceecbba569d968bff613c9de56ef8_tuple, 9, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_tuple_4c0f6796925cb7ca7157b9d9830a79a8_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_4c0f6796925cb7ca7157b9d9830a79a8_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_4c0f6796925cb7ca7157b9d9830a79a8_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_4c0f6796925cb7ca7157b9d9830a79a8_tuple, 2, const_str_plain_sym_pos ); Py_INCREF( const_str_plain_sym_pos );
    PyTuple_SET_ITEM( const_tuple_4c0f6796925cb7ca7157b9d9830a79a8_tuple, 3, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_4c0f6796925cb7ca7157b9d9830a79a8_tuple, 4, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_4c0f6796925cb7ca7157b9d9830a79a8_tuple, 5, const_str_plain_overwrite_b ); Py_INCREF( const_str_plain_overwrite_b );
    PyTuple_SET_ITEM( const_tuple_4c0f6796925cb7ca7157b9d9830a79a8_tuple, 6, const_str_plain_debug ); Py_INCREF( const_str_plain_debug );
    PyTuple_SET_ITEM( const_tuple_4c0f6796925cb7ca7157b9d9830a79a8_tuple, 7, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 1, const_str_plain_cond ); Py_INCREF( const_str_plain_cond );
    PyTuple_SET_ITEM( const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 2, const_str_plain_rcond ); Py_INCREF( const_str_plain_rcond );
    PyTuple_SET_ITEM( const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 3, const_str_plain_return_rank ); Py_INCREF( const_str_plain_return_rank );
    PyTuple_SET_ITEM( const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 4, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 5, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 6, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 7, const_str_plain_vh ); Py_INCREF( const_str_plain_vh );
    PyTuple_SET_ITEM( const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 8, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 9, const_str_plain_factor ); Py_INCREF( const_str_plain_factor );
    PyTuple_SET_ITEM( const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 10, const_str_plain_rank ); Py_INCREF( const_str_plain_rank );
    PyTuple_SET_ITEM( const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 11, const_str_plain_psigma_diag ); Py_INCREF( const_str_plain_psigma_diag );
    PyTuple_SET_ITEM( const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 12, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 2, const_str_plain_trans ); Py_INCREF( const_str_plain_trans );
    PyTuple_SET_ITEM( const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 3, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 4, const_str_plain_unit_diagonal ); Py_INCREF( const_str_plain_unit_diagonal );
    PyTuple_SET_ITEM( const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 5, const_str_plain_overwrite_b ); Py_INCREF( const_str_plain_overwrite_b );
    PyTuple_SET_ITEM( const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 6, const_str_plain_debug ); Py_INCREF( const_str_plain_debug );
    PyTuple_SET_ITEM( const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 7, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 8, const_str_plain_a1 ); Py_INCREF( const_str_plain_a1 );
    PyTuple_SET_ITEM( const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 9, const_str_plain_b1 ); Py_INCREF( const_str_plain_b1 );
    PyTuple_SET_ITEM( const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 10, const_str_plain_trtrs ); Py_INCREF( const_str_plain_trtrs );
    PyTuple_SET_ITEM( const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 11, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 12, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    const_tuple_9d1e6230239293cc749370f7b27c26ac_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_9d1e6230239293cc749370f7b27c26ac_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_9d1e6230239293cc749370f7b27c26ac_tuple, 1, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_9d1e6230239293cc749370f7b27c26ac_tuple, 2, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_9d1e6230239293cc749370f7b27c26ac_tuple, 3, const_str_plain_a1 ); Py_INCREF( const_str_plain_a1 );
    PyTuple_SET_ITEM( const_tuple_9d1e6230239293cc749370f7b27c26ac_tuple, 4, const_str_plain_fdet ); Py_INCREF( const_str_plain_fdet );
    PyTuple_SET_ITEM( const_tuple_9d1e6230239293cc749370f7b27c26ac_tuple, 5, const_str_plain_a_det ); Py_INCREF( const_str_plain_a_det );
    PyTuple_SET_ITEM( const_tuple_9d1e6230239293cc749370f7b27c26ac_tuple, 6, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 0, const_str_plain_l_and_u ); Py_INCREF( const_str_plain_l_and_u );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 1, const_str_plain_ab ); Py_INCREF( const_str_plain_ab );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 3, const_str_plain_overwrite_ab ); Py_INCREF( const_str_plain_overwrite_ab );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 4, const_str_plain_overwrite_b ); Py_INCREF( const_str_plain_overwrite_b );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 5, const_str_plain_debug ); Py_INCREF( const_str_plain_debug );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 6, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 7, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 8, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 9, const_str_plain_a1 ); Py_INCREF( const_str_plain_a1 );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 10, const_str_plain_b1 ); Py_INCREF( const_str_plain_b1 );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 11, const_str_plain_gbsv ); Py_INCREF( const_str_plain_gbsv );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 12, const_str_plain_a2 ); Py_INCREF( const_str_plain_a2 );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 13, const_str_plain_lu ); Py_INCREF( const_str_plain_lu );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 14, const_str_plain_piv ); Py_INCREF( const_str_plain_piv );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 15, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 16, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    const_tuple_9f7efd14d19758ff0faaf37f2bab9658_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2203874 ], 200 );
    const_tuple_a802cccab984ec6751775d01f166b612_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a802cccab984ec6751775d01f166b612_tuple, 0, const_str_plain_ab ); Py_INCREF( const_str_plain_ab );
    PyTuple_SET_ITEM( const_tuple_a802cccab984ec6751775d01f166b612_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_a802cccab984ec6751775d01f166b612_tuple, 2, const_str_plain_overwrite_ab ); Py_INCREF( const_str_plain_overwrite_ab );
    PyTuple_SET_ITEM( const_tuple_a802cccab984ec6751775d01f166b612_tuple, 3, const_str_plain_overwrite_b ); Py_INCREF( const_str_plain_overwrite_b );
    PyTuple_SET_ITEM( const_tuple_a802cccab984ec6751775d01f166b612_tuple, 4, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_a802cccab984ec6751775d01f166b612_tuple, 5, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    const_tuple_a84488f9ae095b9ecbe3434c5fd8f4d9_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a84488f9ae095b9ecbe3434c5fd8f4d9_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_a84488f9ae095b9ecbe3434c5fd8f4d9_tuple, 1, const_str_plain_cond ); Py_INCREF( const_str_plain_cond );
    PyTuple_SET_ITEM( const_tuple_a84488f9ae095b9ecbe3434c5fd8f4d9_tuple, 2, const_str_plain_rcond ); Py_INCREF( const_str_plain_rcond );
    PyTuple_SET_ITEM( const_tuple_a84488f9ae095b9ecbe3434c5fd8f4d9_tuple, 3, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_a84488f9ae095b9ecbe3434c5fd8f4d9_tuple, 4, const_str_plain_return_rank ); Py_INCREF( const_str_plain_return_rank );
    PyTuple_SET_ITEM( const_tuple_a84488f9ae095b9ecbe3434c5fd8f4d9_tuple, 5, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple, 1, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple, 2, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple, 3, const_str_plain_a1 ); Py_INCREF( const_str_plain_a1 );
    PyTuple_SET_ITEM( const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple, 4, const_str_plain_getrf ); Py_INCREF( const_str_plain_getrf );
    PyTuple_SET_ITEM( const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple, 5, const_str_plain_getri ); Py_INCREF( const_str_plain_getri );
    PyTuple_SET_ITEM( const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple, 6, const_str_plain_lu ); Py_INCREF( const_str_plain_lu );
    PyTuple_SET_ITEM( const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple, 7, const_str_plain_piv ); Py_INCREF( const_str_plain_piv );
    PyTuple_SET_ITEM( const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple, 8, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyTuple_SET_ITEM( const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple, 9, const_str_plain_lwork ); Py_INCREF( const_str_plain_lwork );
    PyTuple_SET_ITEM( const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple, 10, const_str_plain_inv_a ); Py_INCREF( const_str_plain_inv_a );
    const_tuple_d6a1c5db44cc1fb9b69178e606e89230_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_d6a1c5db44cc1fb9b69178e606e89230_tuple, 0, const_str_plain_l_and_u ); Py_INCREF( const_str_plain_l_and_u );
    PyTuple_SET_ITEM( const_tuple_d6a1c5db44cc1fb9b69178e606e89230_tuple, 1, const_str_plain_ab ); Py_INCREF( const_str_plain_ab );
    PyTuple_SET_ITEM( const_tuple_d6a1c5db44cc1fb9b69178e606e89230_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_d6a1c5db44cc1fb9b69178e606e89230_tuple, 3, const_str_plain_overwrite_ab ); Py_INCREF( const_str_plain_overwrite_ab );
    PyTuple_SET_ITEM( const_tuple_d6a1c5db44cc1fb9b69178e606e89230_tuple, 4, const_str_plain_overwrite_b ); Py_INCREF( const_str_plain_overwrite_b );
    PyTuple_SET_ITEM( const_tuple_d6a1c5db44cc1fb9b69178e606e89230_tuple, 5, const_str_plain_debug ); Py_INCREF( const_str_plain_debug );
    PyTuple_SET_ITEM( const_tuple_d6a1c5db44cc1fb9b69178e606e89230_tuple, 6, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    const_tuple_f2888c6cc6291fceaf47f7bbbf2cda0e_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_f2888c6cc6291fceaf47f7bbbf2cda0e_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_f2888c6cc6291fceaf47f7bbbf2cda0e_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_f2888c6cc6291fceaf47f7bbbf2cda0e_tuple, 2, const_str_plain_trans ); Py_INCREF( const_str_plain_trans );
    PyTuple_SET_ITEM( const_tuple_f2888c6cc6291fceaf47f7bbbf2cda0e_tuple, 3, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_f2888c6cc6291fceaf47f7bbbf2cda0e_tuple, 4, const_str_plain_unit_diagonal ); Py_INCREF( const_str_plain_unit_diagonal );
    PyTuple_SET_ITEM( const_tuple_f2888c6cc6291fceaf47f7bbbf2cda0e_tuple, 5, const_str_plain_overwrite_b ); Py_INCREF( const_str_plain_overwrite_b );
    PyTuple_SET_ITEM( const_tuple_f2888c6cc6291fceaf47f7bbbf2cda0e_tuple, 6, const_str_plain_debug ); Py_INCREF( const_str_plain_debug );
    PyTuple_SET_ITEM( const_tuple_f2888c6cc6291fceaf47f7bbbf2cda0e_tuple, 7, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 2, const_str_plain_sym_pos ); Py_INCREF( const_str_plain_sym_pos );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 3, const_str_plain_lower ); Py_INCREF( const_str_plain_lower );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 4, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 5, const_str_plain_overwrite_b ); Py_INCREF( const_str_plain_overwrite_b );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 6, const_str_plain_debug ); Py_INCREF( const_str_plain_debug );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 7, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 8, const_str_plain_a1 ); Py_INCREF( const_str_plain_a1 );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 9, const_str_plain_b1 ); Py_INCREF( const_str_plain_b1 );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 10, const_str_plain_posv ); Py_INCREF( const_str_plain_posv );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 11, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 12, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 13, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 14, const_str_plain_gesv ); Py_INCREF( const_str_plain_gesv );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 15, const_str_plain_lu ); Py_INCREF( const_str_plain_lu );
    PyTuple_SET_ITEM( const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 16, const_str_plain_piv ); Py_INCREF( const_str_plain_piv );
    const_tuple_f2ad9c13c17b34cf562af3952d7ff520_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f2ad9c13c17b34cf562af3952d7ff520_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_f2ad9c13c17b34cf562af3952d7ff520_tuple, 1, const_str_plain_cond ); Py_INCREF( const_str_plain_cond );
    PyTuple_SET_ITEM( const_tuple_f2ad9c13c17b34cf562af3952d7ff520_tuple, 2, const_str_plain_rcond ); Py_INCREF( const_str_plain_rcond );
    PyTuple_SET_ITEM( const_tuple_f2ad9c13c17b34cf562af3952d7ff520_tuple, 3, const_str_plain_return_rank ); Py_INCREF( const_str_plain_return_rank );
    PyTuple_SET_ITEM( const_tuple_f2ad9c13c17b34cf562af3952d7ff520_tuple, 4, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    const_tuple_false_false_false_false_false_true_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_false_false_false_false_false_true_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_false_false_true_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_false_false_true_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_false_false_true_tuple, 3, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_false_false_true_tuple, 4, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_false_false_false_true_tuple, 5, Py_True ); Py_INCREF( Py_True );
    const_tuple_int_0_false_false_false_false_true_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_false_false_false_true_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_false_false_false_true_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_0_false_false_false_false_true_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_0_false_false_false_false_true_tuple, 3, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_0_false_false_false_false_true_tuple, 4, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_0_false_false_false_false_true_tuple, 5, Py_True ); Py_INCREF( Py_True );
    const_tuple_str_plain_decomp_str_plain_decomp_svd_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_decomp_str_plain_decomp_svd_tuple, 0, const_str_plain_decomp ); Py_INCREF( const_str_plain_decomp );
    PyTuple_SET_ITEM( const_tuple_str_plain_decomp_str_plain_decomp_svd_tuple, 1, const_str_plain_decomp_svd ); Py_INCREF( const_str_plain_decomp_svd );
}

// The module code objects.
static PyCodeObject *codeobj_d5d93941c4bf2e6834ee4c786fe5d056;
static PyCodeObject *codeobj_cf2b026d1ab9008597f0657c72c701f5;
static PyCodeObject *codeobj_13b0b78248a1fc782000f84e021fb73c;
static PyCodeObject *codeobj_30a22a42d34dd09837072d9eeb5449b4;
static PyCodeObject *codeobj_4c624cef2391c2de040d4b41491a01ce;
static PyCodeObject *codeobj_9c96b5b6e406a6b5c7360b998332b2ec;
static PyCodeObject *codeobj_bbdcb7fb91529ca6573cfc13d1b12449;
static PyCodeObject *codeobj_c08e01dda000445267b2e3ff02983972;
static PyCodeObject *codeobj_49319e51266e27772b1ae8866c894a1c;
static PyCodeObject *codeobj_59794205c18623ead663e7eff215165f;
static PyCodeObject *codeobj_db2b0bc39d00fe633d551bd41d9e7e7e;
static PyCodeObject *codeobj_2a106aee5a1890f007f60b89263936a3;
static PyCodeObject *codeobj_1ccb2ac85a72ed053193faa1abbe9e2f;
static PyCodeObject *codeobj_614d8800b41a74147b6dceff66a55d9a;
static PyCodeObject *codeobj_4bc779e010a48e78a9e0b87e58a7b34b;
static PyCodeObject *codeobj_e61bca856eabb222f77045ba7f6c7df1;
static PyCodeObject *codeobj_a3fc041fde1970a492945d3b14f357e4;
static PyCodeObject *codeobj_bca1e2fdbe5dd77a8a13bd2e3d36cb72;
static PyCodeObject *codeobj_48fe6edd3ff2accf99b8a2dd74db81ea;
static PyCodeObject *codeobj_434cede8962577306d14ec45291a624b;
static PyCodeObject *codeobj_7d502cb382d26297f05c5be930591929;

static void _initModuleCodeObjects(void)
{
    codeobj_d5d93941c4bf2e6834ee4c786fe5d056 = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_basic, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cf2b026d1ab9008597f0657c72c701f5 = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_det, 392, const_tuple_str_plain_a_str_plain_overwrite_a_str_plain_check_finite_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_13b0b78248a1fc782000f84e021fb73c = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_det, 392, const_tuple_9d1e6230239293cc749370f7b27c26ac_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_30a22a42d34dd09837072d9eeb5449b4 = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_inv, 314, const_tuple_str_plain_a_str_plain_overwrite_a_str_plain_check_finite_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4c624cef2391c2de040d4b41491a01ce = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_inv, 314, const_tuple_bc57bd897798c2f383d98f82e7b665c6_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9c96b5b6e406a6b5c7360b998332b2ec = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_lstsq, 454, const_tuple_3aa73e3b6051f5fa834b7808eed8f2ce_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bbdcb7fb91529ca6573cfc13d1b12449 = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_lstsq, 454, const_tuple_9f7efd14d19758ff0faaf37f2bab9658_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c08e01dda000445267b2e3ff02983972 = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_pinv, 555, const_tuple_f2ad9c13c17b34cf562af3952d7ff520_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_49319e51266e27772b1ae8866c894a1c = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_pinv, 555, const_tuple_4a7ceecbba569d968bff613c9de56ef8_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_59794205c18623ead663e7eff215165f = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_pinv2, 615, const_tuple_f2ad9c13c17b34cf562af3952d7ff520_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_db2b0bc39d00fe633d551bd41d9e7e7e = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_pinv2, 615, const_tuple_62d9634cee03dfacc342c0ce5899497d_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2a106aee5a1890f007f60b89263936a3 = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_pinvh, 686, const_tuple_a84488f9ae095b9ecbe3434c5fd8f4d9_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1ccb2ac85a72ed053193faa1abbe9e2f = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_pinvh, 686, const_tuple_487f7805bb4d466421ec75d3384bfba0_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_614d8800b41a74147b6dceff66a55d9a = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_solve, 22, const_tuple_4c0f6796925cb7ca7157b9d9830a79a8_tuple, 8, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4bc779e010a48e78a9e0b87e58a7b34b = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_solve, 22, const_tuple_f29bd24a1b609de7a9657f45cd1df640_tuple, 8, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e61bca856eabb222f77045ba7f6c7df1 = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_solve_banded, 178, const_tuple_d6a1c5db44cc1fb9b69178e606e89230_tuple, 7, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a3fc041fde1970a492945d3b14f357e4 = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_solve_banded, 178, const_tuple_9f07e18c0bcb4b1e1d9c75059f2e9e19_tuple, 7, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bca1e2fdbe5dd77a8a13bd2e3d36cb72 = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_solve_triangular, 104, const_tuple_f2888c6cc6291fceaf47f7bbbf2cda0e_tuple, 8, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_48fe6edd3ff2accf99b8a2dd74db81ea = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_solve_triangular, 104, const_tuple_87412d1ff64976c2d39c52c181c3c579_tuple, 8, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_434cede8962577306d14ec45291a624b = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_solveh_banded, 244, const_tuple_a802cccab984ec6751775d01f166b612_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7d502cb382d26297f05c5be930591929 = MAKE_CODEOBJ( const_str_digest_c7bd9c6fd44990228ea5d54a061ed871, const_str_plain_solveh_banded, 244, const_tuple_23577be8e2a17b01ea8d4d3db6480e2a_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_10_pinvh_of_module_scipy$linalg$basic( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1_solve_of_module_scipy$linalg$basic( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_solve_triangular_of_module_scipy$linalg$basic( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_solve_banded_of_module_scipy$linalg$basic( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_solveh_banded_of_module_scipy$linalg$basic( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5_inv_of_module_scipy$linalg$basic( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_6_det_of_module_scipy$linalg$basic( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_7_lstsq_of_module_scipy$linalg$basic( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_8_pinv_of_module_scipy$linalg$basic( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_9_pinv2_of_module_scipy$linalg$basic( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_solve_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_b, PyObject *_python_par_sym_pos, PyObject *_python_par_lower, PyObject *_python_par_overwrite_a, PyObject *_python_par_overwrite_b, PyObject *_python_par_debug, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_sym_pos; par_sym_pos.object = _python_par_sym_pos;
    PyObjectLocalVariable par_lower; par_lower.object = _python_par_lower;
    PyObjectLocalVariable par_overwrite_a; par_overwrite_a.object = _python_par_overwrite_a;
    PyObjectLocalVariable par_overwrite_b; par_overwrite_b.object = _python_par_overwrite_b;
    PyObjectLocalVariable par_debug; par_debug.object = _python_par_debug;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_a1;
    PyObjectLocalVariable var_b1;
    PyObjectLocalVariable var_posv;
    PyObjectLocalVariable var_c;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_info;
    PyObjectLocalVariable var_gesv;
    PyObjectLocalVariable var_lu;
    PyObjectLocalVariable var_piv;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_or_3__value_1;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
    PyObjectTempVariable tmp_tuple_unpack_4__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_4__element_1;
    PyObjectTempVariable tmp_tuple_unpack_4__element_2;
    PyObjectTempVariable tmp_tuple_unpack_4__element_3;
    PyObjectTempVariable tmp_tuple_unpack_5__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_5__element_1;
    PyObjectTempVariable tmp_tuple_unpack_6__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_6__element_1;
    PyObjectTempVariable tmp_tuple_unpack_6__element_2;
    PyObjectTempVariable tmp_tuple_unpack_6__element_3;
    PyObjectTempVariable tmp_tuple_unpack_6__element_4;
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
    PyObject *tmp_call_arg_element_17;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_attempt_3;
    PyObject *tmp_iterator_attempt_4;
    PyObject *tmp_iterator_attempt_5;
    PyObject *tmp_iterator_attempt_6;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_iterator_name_5;
    PyObject *tmp_iterator_name_6;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
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
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
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
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    int tmp_tried_lineno_8;
    int tmp_tried_lineno_9;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_unary_arg_1;
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
    PyObject *tmp_unpack_12;
    PyObject *tmp_unpack_13;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_614d8800b41a74147b6dceff66a55d9a, module_scipy$linalg$basic );
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
    tmp_cond_value_1 = par_check_finite.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243662 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
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
    // Tried code
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray_chkfinite );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_a.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_b.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 74;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
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


        frame_function->f_lineno = 74;
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


        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_3;

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
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1.object;

    assert( var_a1.object == NULL );
    var_a1.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2.object;

    assert( var_b1.object == NULL );
    var_b1.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

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
    goto branch_end_1;
    branch_no_1:;
    // Tried code
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto try_finally_handler_2;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_4 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_a.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_b.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 76;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto try_finally_handler_2;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_6;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_7 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 76;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_7;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_8 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
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


        frame_function->f_lineno = 76;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_8;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_2;
    }
    tmp_assign_source_9 = tmp_tuple_unpack_2__element_1.object;

    assert( var_a1.object == NULL );
    var_a1.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    tmp_assign_source_10 = tmp_tuple_unpack_2__element_2.object;

    assert( var_b1.object == NULL );
    var_b1.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

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
    branch_end_1:;
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_source_name_3 = var_a1.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto try_finally_handler_4;
    }

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto try_finally_handler_4;
    }
    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto try_finally_handler_4;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_assign_source_11 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto try_finally_handler_4;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_11;

    tmp_cond_value_3 = tmp_or_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
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
    tmp_cond_value_2 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_cond_value_2 );
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
    tmp_source_name_4 = var_a1.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto try_finally_handler_5;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto try_finally_handler_5;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto try_finally_handler_5;
    }
    tmp_source_name_5 = var_a1.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto try_finally_handler_5;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 77;
        goto try_finally_handler_5;
    }
    tmp_subscr_subscript_2 = const_int_pos_1;
    tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 77;
        goto try_finally_handler_5;
    }
    tmp_cond_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
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
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 77;
        goto try_finally_handler_3;
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
    tmp_make_exception_arg_1 = const_str_digest_bfc63172b396a4f385572b1b0268edc0;
    frame_function->f_lineno = 78;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto try_finally_handler_3;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 78;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_3;
    branch_no_2:;
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

        goto frame_exception_exit_1;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_source_name_6 = var_a1.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = var_b1.object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_subscr_target_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_4 = const_int_0;
    tmp_compare_right_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_target_4 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_2 = const_str_digest_f31958934525eb33da01f7af7e15b84e;
    frame_function->f_lineno = 80;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 80;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    // Tried code
    tmp_assign_source_12 = NULL;
    // Tried code
    tmp_assign_source_13 = par_overwrite_a.object;

    if ( tmp_assign_source_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto try_finally_handler_7;
    }

    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

    tmp_cond_value_4 = tmp_or_2__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
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
    tmp_assign_source_12 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_assign_source_12 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_12 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain__datacopied );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__datacopied );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244212 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto try_finally_handler_8;
    }

    tmp_call_arg_element_5 = var_a1.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto try_finally_handler_8;
    }

    tmp_call_arg_element_6 = par_a.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto try_finally_handler_8;
    }

    frame_function->f_lineno = 81;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto try_finally_handler_8;
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
    condexpr_end_2:;
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
    if (par_overwrite_a.object == NULL)
    {
        par_overwrite_a.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = par_overwrite_a.object;
        par_overwrite_a.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
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

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

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
    // Tried code
    tmp_assign_source_14 = NULL;
    // Tried code
    tmp_assign_source_15 = par_overwrite_b.object;

    if ( tmp_assign_source_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244252 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto try_finally_handler_10;
    }

    assert( tmp_or_3__value_1.object == NULL );
    tmp_or_3__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    tmp_cond_value_5 = tmp_or_3__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
        goto try_finally_handler_10;
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
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain__datacopied );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__datacopied );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244212 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto try_finally_handler_11;
    }

    tmp_call_arg_element_7 = var_b1.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto try_finally_handler_11;
    }

    tmp_call_arg_element_8 = par_b.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto try_finally_handler_11;
    }

    frame_function->f_lineno = 82;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
        goto try_finally_handler_11;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
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

        goto try_finally_handler_10;
    }

    goto finally_end_9;
    finally_end_9:;
    condexpr_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
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

        goto try_finally_handler_9;
    }

    goto finally_end_10;
    finally_end_10:;
    if (par_overwrite_b.object == NULL)
    {
        par_overwrite_b.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = par_overwrite_b.object;
        par_overwrite_b.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_3__value_1.object );
    tmp_or_3__value_1.object = NULL;

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
    tmp_cond_value_6 = par_debug.object;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81520 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
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
    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = const_str_digest_17c1defafeb9eaa7b659b158c4aba48e;
    tmp_call_arg_element_10 = par_overwrite_a.object;

    if ( tmp_call_arg_element_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 84;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = const_str_digest_343477a1bc6bf0627f4385463832baf0;
    tmp_call_arg_element_12 = par_overwrite_b.object;

    if ( tmp_call_arg_element_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244252 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 85;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    tmp_cond_value_7 = par_sym_pos.object;

    if ( tmp_cond_value_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 248841 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_7 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    // Tried code
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto try_finally_handler_12;
    }

    tmp_call_arg_element_13 = const_tuple_str_plain_posv_tuple;
    tmp_call_arg_element_14 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_a1.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto try_finally_handler_12;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_14, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_b1.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto try_finally_handler_12;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_14, 1, tmp_tuple_element_3 );
    frame_function->f_lineno = 87;
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_call_arg_element_14 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto try_finally_handler_12;
    }
    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto try_finally_handler_12;
    }
    assert( tmp_tuple_unpack_3__source_iter.object == NULL );
    tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_16;

    tmp_unpack_5 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_17 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 0 );
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


        frame_function->f_lineno = 87;
        goto try_finally_handler_12;
    }
    assert( tmp_tuple_unpack_3__element_1.object == NULL );
    tmp_tuple_unpack_3__element_1.object = tmp_assign_source_17;

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

            goto try_finally_handler_12;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_3 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_12;
    }
    tmp_assign_source_18 = tmp_tuple_unpack_3__element_1.object;

    assert( var_posv.object == NULL );
    var_posv.object = INCREASE_REFCOUNT( tmp_assign_source_18 );

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
    Py_XDECREF( tmp_tuple_unpack_3__source_iter.object );
    tmp_tuple_unpack_3__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1.object );
    tmp_tuple_unpack_3__element_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto frame_exception_exit_1;
    }

    goto finally_end_12;
    finally_end_12:;
    // Tried code
    tmp_called_8 = var_posv.object;

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 248894 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto try_finally_handler_13;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_a1.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto try_finally_handler_13;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_b1.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto try_finally_handler_13;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_4 );
    tmp_call_kw_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_lower.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 225972 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto try_finally_handler_13;
    }

    tmp_dict_key_1 = const_str_plain_lower;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_overwrite_a.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 89;
        goto try_finally_handler_13;
    }

    tmp_dict_key_2 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_overwrite_b.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244252 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto try_finally_handler_13;
    }

    tmp_dict_key_3 = const_str_plain_overwrite_b;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 90;
    tmp_iter_arg_4 = CALL_FUNCTION( tmp_called_8, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto try_finally_handler_13;
    }
    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto try_finally_handler_13;
    }
    assert( tmp_tuple_unpack_4__source_iter.object == NULL );
    tmp_tuple_unpack_4__source_iter.object = tmp_assign_source_19;

    tmp_unpack_6 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_20 = UNPACK_PARAMETER_NEXT( tmp_unpack_6, 0 );
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


        frame_function->f_lineno = 88;
        goto try_finally_handler_13;
    }
    assert( tmp_tuple_unpack_4__element_1.object == NULL );
    tmp_tuple_unpack_4__element_1.object = tmp_assign_source_20;

    tmp_unpack_7 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_21 = UNPACK_PARAMETER_NEXT( tmp_unpack_7, 1 );
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


        frame_function->f_lineno = 88;
        goto try_finally_handler_13;
    }
    assert( tmp_tuple_unpack_4__element_2.object == NULL );
    tmp_tuple_unpack_4__element_2.object = tmp_assign_source_21;

    tmp_unpack_8 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_22 = UNPACK_PARAMETER_NEXT( tmp_unpack_8, 2 );
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


        frame_function->f_lineno = 88;
        goto try_finally_handler_13;
    }
    assert( tmp_tuple_unpack_4__element_3.object == NULL );
    tmp_tuple_unpack_4__element_3.object = tmp_assign_source_22;

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

            goto try_finally_handler_13;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_4 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_13;
    }
    tmp_assign_source_23 = tmp_tuple_unpack_4__element_1.object;

    assert( var_c.object == NULL );
    var_c.object = INCREASE_REFCOUNT( tmp_assign_source_23 );

    tmp_assign_source_24 = tmp_tuple_unpack_4__element_2.object;

    assert( var_x.object == NULL );
    var_x.object = INCREASE_REFCOUNT( tmp_assign_source_24 );

    tmp_assign_source_25 = tmp_tuple_unpack_4__element_3.object;

    assert( var_info.object == NULL );
    var_info.object = INCREASE_REFCOUNT( tmp_assign_source_25 );

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_4__source_iter.object );
    tmp_tuple_unpack_4__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_1.object );
    tmp_tuple_unpack_4__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2.object );
    tmp_tuple_unpack_4__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_3.object );
    tmp_tuple_unpack_4__element_3.object = NULL;

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
    goto branch_end_5;
    branch_no_5:;
    // Tried code
    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_15 = const_tuple_str_plain_gesv_tuple;
    tmp_call_arg_element_16 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_a1.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto try_finally_handler_14;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_call_arg_element_16, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_b1.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto try_finally_handler_14;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_call_arg_element_16, 1, tmp_tuple_element_5 );
    frame_function->f_lineno = 92;
    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_9, tmp_call_arg_element_15, tmp_call_arg_element_16 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto try_finally_handler_14;
    }
    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto try_finally_handler_14;
    }
    assert( tmp_tuple_unpack_5__source_iter.object == NULL );
    tmp_tuple_unpack_5__source_iter.object = tmp_assign_source_26;

    tmp_unpack_9 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_27 = UNPACK_PARAMETER_NEXT( tmp_unpack_9, 0 );
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


        frame_function->f_lineno = 92;
        goto try_finally_handler_14;
    }
    assert( tmp_tuple_unpack_5__element_1.object == NULL );
    tmp_tuple_unpack_5__element_1.object = tmp_assign_source_27;

    tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_5 ); assert( PyIter_Check( tmp_iterator_name_5 ) );

    tmp_iterator_attempt_5 = (*Py_TYPE( tmp_iterator_name_5 )->tp_iternext)( tmp_iterator_name_5 );

    if (likely( tmp_iterator_attempt_5 == NULL ))
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

            goto try_finally_handler_14;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_5 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_14;
    }
    tmp_assign_source_28 = tmp_tuple_unpack_5__element_1.object;

    assert( var_gesv.object == NULL );
    var_gesv.object = INCREASE_REFCOUNT( tmp_assign_source_28 );

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
    Py_XDECREF( tmp_tuple_unpack_5__source_iter.object );
    tmp_tuple_unpack_5__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_1.object );
    tmp_tuple_unpack_5__element_1.object = NULL;

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
    // Tried code
    tmp_called_10 = var_gesv.object;

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 248944 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto try_finally_handler_15;
    }

    tmp_call_pos_2 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_a1.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto try_finally_handler_15;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_b1.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto try_finally_handler_15;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 1, tmp_tuple_element_6 );
    tmp_call_kw_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_4 = par_overwrite_a.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto try_finally_handler_15;
    }

    tmp_dict_key_4 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_overwrite_b.object;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244252 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 94;
        goto try_finally_handler_15;
    }

    tmp_dict_key_5 = const_str_plain_overwrite_b;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_5, tmp_dict_value_5 );
    frame_function->f_lineno = 94;
    tmp_iter_arg_6 = CALL_FUNCTION( tmp_called_10, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 94;
        goto try_finally_handler_15;
    }
    tmp_assign_source_29 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_6__source_iter.object == NULL );
    tmp_tuple_unpack_6__source_iter.object = tmp_assign_source_29;

    tmp_unpack_10 = tmp_tuple_unpack_6__source_iter.object;

    tmp_assign_source_30 = UNPACK_PARAMETER_NEXT( tmp_unpack_10, 0 );
    if ( tmp_assign_source_30 == NULL )
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


        frame_function->f_lineno = 93;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_6__element_1.object == NULL );
    tmp_tuple_unpack_6__element_1.object = tmp_assign_source_30;

    tmp_unpack_11 = tmp_tuple_unpack_6__source_iter.object;

    tmp_assign_source_31 = UNPACK_PARAMETER_NEXT( tmp_unpack_11, 1 );
    if ( tmp_assign_source_31 == NULL )
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


        frame_function->f_lineno = 93;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_6__element_2.object == NULL );
    tmp_tuple_unpack_6__element_2.object = tmp_assign_source_31;

    tmp_unpack_12 = tmp_tuple_unpack_6__source_iter.object;

    tmp_assign_source_32 = UNPACK_PARAMETER_NEXT( tmp_unpack_12, 2 );
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


        frame_function->f_lineno = 93;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_6__element_3.object == NULL );
    tmp_tuple_unpack_6__element_3.object = tmp_assign_source_32;

    tmp_unpack_13 = tmp_tuple_unpack_6__source_iter.object;

    tmp_assign_source_33 = UNPACK_PARAMETER_NEXT( tmp_unpack_13, 3 );
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


        frame_function->f_lineno = 93;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_6__element_4.object == NULL );
    tmp_tuple_unpack_6__element_4.object = tmp_assign_source_33;

    tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_6 ); assert( PyIter_Check( tmp_iterator_name_6 ) );

    tmp_iterator_attempt_6 = (*Py_TYPE( tmp_iterator_name_6 )->tp_iternext)( tmp_iterator_name_6 );

    if (likely( tmp_iterator_attempt_6 == NULL ))
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

            goto try_finally_handler_15;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_6 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_15;
    }
    tmp_assign_source_34 = tmp_tuple_unpack_6__element_1.object;

    assert( var_lu.object == NULL );
    var_lu.object = INCREASE_REFCOUNT( tmp_assign_source_34 );

    tmp_assign_source_35 = tmp_tuple_unpack_6__element_2.object;

    assert( var_piv.object == NULL );
    var_piv.object = INCREASE_REFCOUNT( tmp_assign_source_35 );

    tmp_assign_source_36 = tmp_tuple_unpack_6__element_3.object;

    if (var_x.object == NULL)
    {
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
        Py_DECREF( old );
    }
    tmp_assign_source_37 = tmp_tuple_unpack_6__element_4.object;

    if (var_info.object == NULL)
    {
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_37 );
    }
    else
    {
        PyObject *old = var_info.object;
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_37 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_6__source_iter.object );
    tmp_tuple_unpack_6__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_1.object );
    tmp_tuple_unpack_6__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_2.object );
    tmp_tuple_unpack_6__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_3.object );
    tmp_tuple_unpack_6__element_3.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_4.object );
    tmp_tuple_unpack_6__element_4.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_15 != NULL )
    {
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;

        goto frame_exception_exit_1;
    }

    goto finally_end_15;
    finally_end_15:;
    branch_end_5:;
    tmp_compare_left_2 = var_info.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_return_value = var_x.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_6:;
    tmp_compare_left_3 = var_info.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_LinAlgError );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183355 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_17 = const_str_digest_1ef26876be16ded561892e360e5b012c;
    frame_function->f_lineno = 99;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_17 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 99;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_7:;
    tmp_binop_left_1 = const_str_digest_9af7d042bb07b0a8fb0252066084eb07;
    tmp_unary_arg_1 = var_info.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 100;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    Py_DECREF( tmp_make_exception_arg_3 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 100;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;

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
    if ((var_a1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a1,
            var_a1.object
        );

    }
    if ((var_b1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b1,
            var_b1.object
        );

    }
    if ((var_posv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_posv,
            var_posv.object
        );

    }
    if ((var_c.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c,
            var_c.object
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
    if ((var_info.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info,
            var_info.object
        );

    }
    if ((var_gesv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gesv,
            var_gesv.object
        );

    }
    if ((var_lu.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lu,
            var_lu.object
        );

    }
    if ((var_piv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_piv,
            var_piv.object
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
    if ((par_sym_pos.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sym_pos,
            par_sym_pos.object
        );

    }
    if ((par_lower.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lower,
            par_lower.object
        );

    }
    if ((par_overwrite_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_overwrite_a,
            par_overwrite_a.object
        );

    }
    if ((par_overwrite_b.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_overwrite_b,
            par_overwrite_b.object
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
    if ((par_check_finite.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_finite,
            par_check_finite.object
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
static PyObject *fparse_function_1_solve_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_sym_pos = NULL;
    PyObject *_python_par_lower = NULL;
    PyObject *_python_par_overwrite_a = NULL;
    PyObject *_python_par_overwrite_b = NULL;
    PyObject *_python_par_debug = NULL;
    PyObject *_python_par_check_finite = NULL;
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
                PyErr_Format( PyExc_TypeError, "solve() keywords must be strings" );
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
            if ( found == false && const_str_plain_sym_pos == key )
            {
                assert( _python_par_sym_pos == NULL );
                _python_par_sym_pos = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_lower == key )
            {
                assert( _python_par_lower == NULL );
                _python_par_lower = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_overwrite_a == key )
            {
                assert( _python_par_overwrite_a == NULL );
                _python_par_overwrite_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_overwrite_b == key )
            {
                assert( _python_par_overwrite_b == NULL );
                _python_par_overwrite_b = value;

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
            if ( found == false && const_str_plain_check_finite == key )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_sym_pos, key ) == 1 )
            {
                assert( _python_par_sym_pos == NULL );
                _python_par_sym_pos = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_lower, key ) == 1 )
            {
                assert( _python_par_lower == NULL );
                _python_par_lower = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_overwrite_a, key ) == 1 )
            {
                assert( _python_par_overwrite_a == NULL );
                _python_par_overwrite_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_overwrite_b, key ) == 1 )
            {
                assert( _python_par_overwrite_b == NULL );
                _python_par_overwrite_b = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_check_finite, key ) == 1 )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "solve() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 0 + self->m_defaults_given >= 8  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
        if ( 1 + self->m_defaults_given >= 8  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_sym_pos != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_sym_pos = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_sym_pos == NULL )
    {
        if ( 2 + self->m_defaults_given >= 8  )
        {
            _python_par_sym_pos = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_lower != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_lower = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_lower == NULL )
    {
        if ( 3 + self->m_defaults_given >= 8  )
        {
            _python_par_lower = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_overwrite_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_overwrite_a = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_overwrite_a == NULL )
    {
        if ( 4 + self->m_defaults_given >= 8  )
        {
            _python_par_overwrite_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_overwrite_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_overwrite_b = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_overwrite_b == NULL )
    {
        if ( 5 + self->m_defaults_given >= 8  )
        {
            _python_par_overwrite_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_debug != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_debug = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_debug == NULL )
    {
        if ( 6 + self->m_defaults_given >= 8  )
        {
            _python_par_debug = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_check_finite != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_check_finite = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_check_finite == NULL )
    {
        if ( 7 + self->m_defaults_given >= 8  )
        {
            _python_par_check_finite = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_a == NULL || _python_par_b == NULL || _python_par_sym_pos == NULL || _python_par_lower == NULL || _python_par_overwrite_a == NULL || _python_par_overwrite_b == NULL || _python_par_debug == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_b, _python_par_sym_pos, _python_par_lower, _python_par_overwrite_a, _python_par_overwrite_b, _python_par_debug, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_solve_of_module_scipy$linalg$basic( self, _python_par_a, _python_par_b, _python_par_sym_pos, _python_par_lower, _python_par_overwrite_a, _python_par_overwrite_b, _python_par_debug, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_sym_pos );
    Py_XDECREF( _python_par_lower );
    Py_XDECREF( _python_par_overwrite_a );
    Py_XDECREF( _python_par_overwrite_b );
    Py_XDECREF( _python_par_debug );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_1_solve_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 8 )
    {
        return impl_function_1_solve_of_module_scipy$linalg$basic( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_solve_of_module_scipy$linalg$basic( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_solve_triangular_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_b, PyObject *_python_par_trans, PyObject *_python_par_lower, PyObject *_python_par_unit_diagonal, PyObject *_python_par_overwrite_b, PyObject *_python_par_debug, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_trans; par_trans.object = _python_par_trans;
    PyObjectLocalVariable par_lower; par_lower.object = _python_par_lower;
    PyObjectLocalVariable par_unit_diagonal; par_unit_diagonal.object = _python_par_unit_diagonal;
    PyObjectLocalVariable par_overwrite_b; par_overwrite_b.object = _python_par_overwrite_b;
    PyObjectLocalVariable par_debug; par_debug.object = _python_par_debug;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_a1;
    PyObjectLocalVariable var_b1;
    PyObjectLocalVariable var_trtrs;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_info;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
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
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_attempt_3;
    PyObject *tmp_iterator_attempt_4;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
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
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_unary_arg_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bca1e2fdbe5dd77a8a13bd2e3d36cb72, module_scipy$linalg$basic );
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
    tmp_cond_value_1 = par_check_finite.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243662 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
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
    // Tried code
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto try_finally_handler_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray_chkfinite );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_a.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_b.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 155;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto try_finally_handler_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
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


        frame_function->f_lineno = 155;
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


        frame_function->f_lineno = 155;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_3;

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
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1.object;

    assert( var_a1.object == NULL );
    var_a1.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2.object;

    assert( var_b1.object == NULL );
    var_b1.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

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
    goto branch_end_1;
    branch_no_1:;
    // Tried code
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto try_finally_handler_2;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_4 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_a.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_b.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 157;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto try_finally_handler_2;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_6;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_7 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 157;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_7;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_8 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
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


        frame_function->f_lineno = 157;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_8;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_2;
    }
    tmp_assign_source_9 = tmp_tuple_unpack_2__element_1.object;

    assert( var_a1.object == NULL );
    var_a1.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    tmp_assign_source_10 = tmp_tuple_unpack_2__element_2.object;

    assert( var_b1.object == NULL );
    var_b1.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

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
    branch_end_1:;
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_source_name_3 = var_a1.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 158;
        goto try_finally_handler_4;
    }

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto try_finally_handler_4;
    }
    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto try_finally_handler_4;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_assign_source_11 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto try_finally_handler_4;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_11;

    tmp_cond_value_3 = tmp_or_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
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
    tmp_cond_value_2 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_cond_value_2 );
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
    tmp_source_name_4 = var_a1.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 158;
        goto try_finally_handler_5;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto try_finally_handler_5;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto try_finally_handler_5;
    }
    tmp_source_name_5 = var_a1.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 158;
        goto try_finally_handler_5;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 158;
        goto try_finally_handler_5;
    }
    tmp_subscr_subscript_2 = const_int_pos_1;
    tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 158;
        goto try_finally_handler_5;
    }
    tmp_cond_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
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
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 158;
        goto try_finally_handler_3;
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
    tmp_make_exception_arg_1 = const_str_digest_bfc63172b396a4f385572b1b0268edc0;
    frame_function->f_lineno = 159;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 159;
        goto try_finally_handler_3;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 159;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_3;
    branch_no_2:;
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

        goto frame_exception_exit_1;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_source_name_6 = var_a1.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = var_b1.object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_subscr_target_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_4 = const_int_0;
    tmp_compare_right_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_target_4 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_2 = const_str_digest_f31958934525eb33da01f7af7e15b84e;
    frame_function->f_lineno = 161;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 161;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    // Tried code
    tmp_assign_source_12 = NULL;
    // Tried code
    tmp_assign_source_13 = par_overwrite_b.object;

    if ( tmp_assign_source_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244252 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_7;
    }

    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

    tmp_cond_value_4 = tmp_or_2__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
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
    tmp_assign_source_12 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_assign_source_12 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_12 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain__datacopied );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__datacopied );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244212 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_8;
    }

    tmp_call_arg_element_5 = var_b1.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_8;
    }

    tmp_call_arg_element_6 = par_b.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_8;
    }

    frame_function->f_lineno = 162;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto try_finally_handler_8;
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
    condexpr_end_2:;
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
    if (par_overwrite_b.object == NULL)
    {
        par_overwrite_b.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = par_overwrite_b.object;
        par_overwrite_b.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
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

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

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
    tmp_cond_value_5 = par_debug.object;

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 81520 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
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
    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_digest_343477a1bc6bf0627f4385463832baf0;
    tmp_call_arg_element_8 = par_overwrite_b.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244252 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 164;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    tmp_source_name_8 = PyDict_Copy( const_dict_3bafd88ebc63b0445e48f8aae35d233a );
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_get );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = par_trans.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229265 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = par_trans.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229265 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 165;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    if (par_trans.object == NULL)
    {
        par_trans.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = par_trans.object;
        par_trans.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    // Tried code
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }

    tmp_call_arg_element_11 = const_tuple_str_plain_trtrs_tuple;
    tmp_call_arg_element_12 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_a1.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_12, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_b1.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_12, 1, tmp_tuple_element_3 );
    frame_function->f_lineno = 166;
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }
    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_3__source_iter.object == NULL );
    tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_15;

    tmp_unpack_5 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_16 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 0 );
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


        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_3__element_1.object == NULL );
    tmp_tuple_unpack_3__element_1.object = tmp_assign_source_16;

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

            goto try_finally_handler_9;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_3 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_9;
    }
    tmp_assign_source_17 = tmp_tuple_unpack_3__element_1.object;

    assert( var_trtrs.object == NULL );
    var_trtrs.object = INCREASE_REFCOUNT( tmp_assign_source_17 );

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
    Py_XDECREF( tmp_tuple_unpack_3__source_iter.object );
    tmp_tuple_unpack_3__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1.object );
    tmp_tuple_unpack_3__element_1.object = NULL;

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

    goto finally_end_9;
    finally_end_9:;
    // Tried code
    tmp_called_7 = var_trtrs.object;

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 248994 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto try_finally_handler_10;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_a1.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto try_finally_handler_10;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_b1.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto try_finally_handler_10;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_4 );
    tmp_call_kw_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = par_overwrite_b.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244252 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto try_finally_handler_10;
    }

    tmp_dict_key_1 = const_str_plain_overwrite_b;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_lower.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 225972 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto try_finally_handler_10;
    }

    tmp_dict_key_2 = const_str_plain_lower;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_trans.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229265 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto try_finally_handler_10;
    }

    tmp_dict_key_3 = const_str_plain_trans;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_unit_diagonal.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249045 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto try_finally_handler_10;
    }

    tmp_dict_key_4 = const_str_plain_unitdiag;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 168;
    tmp_iter_arg_4 = CALL_FUNCTION( tmp_called_7, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto try_finally_handler_10;
    }
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
        goto try_finally_handler_10;
    }
    assert( tmp_tuple_unpack_4__source_iter.object == NULL );
    tmp_tuple_unpack_4__source_iter.object = tmp_assign_source_18;

    tmp_unpack_6 = tmp_tuple_unpack_4__source_iter.object;

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


        frame_function->f_lineno = 167;
        goto try_finally_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_1.object == NULL );
    tmp_tuple_unpack_4__element_1.object = tmp_assign_source_19;

    tmp_unpack_7 = tmp_tuple_unpack_4__source_iter.object;

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


        frame_function->f_lineno = 167;
        goto try_finally_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_2.object == NULL );
    tmp_tuple_unpack_4__element_2.object = tmp_assign_source_20;

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

            goto try_finally_handler_10;
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

        goto try_finally_handler_10;
    }
    tmp_assign_source_21 = tmp_tuple_unpack_4__element_1.object;

    assert( var_x.object == NULL );
    var_x.object = INCREASE_REFCOUNT( tmp_assign_source_21 );

    tmp_assign_source_22 = tmp_tuple_unpack_4__element_2.object;

    assert( var_info.object == NULL );
    var_info.object = INCREASE_REFCOUNT( tmp_assign_source_22 );

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
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
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto frame_exception_exit_1;
    }

    goto finally_end_10;
    finally_end_10:;
    tmp_compare_left_2 = var_info.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
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
    tmp_return_value = var_x.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_5:;
    tmp_compare_left_3 = var_info.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
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
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_LinAlgError );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183355 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = const_str_digest_cc4cd7e93e1a16dc82483f3d9725e5f5;
    tmp_binop_left_2 = var_info.object;

    if ( tmp_binop_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = const_int_pos_1;
    tmp_binop_right_1 = BINARY_OPERATION_SUB( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 173;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_13 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 173;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_6:;
    tmp_binop_left_3 = const_str_digest_eb2a6d283ec9a5f7826fd93664289969;
    tmp_unary_arg_1 = var_info.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_3 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 174;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    Py_DECREF( tmp_make_exception_arg_3 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 174;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;

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
    if ((var_a1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a1,
            var_a1.object
        );

    }
    if ((var_b1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b1,
            var_b1.object
        );

    }
    if ((var_trtrs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_trtrs,
            var_trtrs.object
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
    if ((var_info.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info,
            var_info.object
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
    if ((par_trans.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_trans,
            par_trans.object
        );

    }
    if ((par_lower.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lower,
            par_lower.object
        );

    }
    if ((par_unit_diagonal.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_unit_diagonal,
            par_unit_diagonal.object
        );

    }
    if ((par_overwrite_b.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_overwrite_b,
            par_overwrite_b.object
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
    if ((par_check_finite.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_finite,
            par_check_finite.object
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
static PyObject *fparse_function_2_solve_triangular_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_trans = NULL;
    PyObject *_python_par_lower = NULL;
    PyObject *_python_par_unit_diagonal = NULL;
    PyObject *_python_par_overwrite_b = NULL;
    PyObject *_python_par_debug = NULL;
    PyObject *_python_par_check_finite = NULL;
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
                PyErr_Format( PyExc_TypeError, "solve_triangular() keywords must be strings" );
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
            if ( found == false && const_str_plain_trans == key )
            {
                assert( _python_par_trans == NULL );
                _python_par_trans = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_lower == key )
            {
                assert( _python_par_lower == NULL );
                _python_par_lower = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_unit_diagonal == key )
            {
                assert( _python_par_unit_diagonal == NULL );
                _python_par_unit_diagonal = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_overwrite_b == key )
            {
                assert( _python_par_overwrite_b == NULL );
                _python_par_overwrite_b = value;

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
            if ( found == false && const_str_plain_check_finite == key )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_trans, key ) == 1 )
            {
                assert( _python_par_trans == NULL );
                _python_par_trans = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_lower, key ) == 1 )
            {
                assert( _python_par_lower == NULL );
                _python_par_lower = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_unit_diagonal, key ) == 1 )
            {
                assert( _python_par_unit_diagonal == NULL );
                _python_par_unit_diagonal = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_overwrite_b, key ) == 1 )
            {
                assert( _python_par_overwrite_b == NULL );
                _python_par_overwrite_b = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_check_finite, key ) == 1 )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "solve_triangular() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 0 + self->m_defaults_given >= 8  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
        if ( 1 + self->m_defaults_given >= 8  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_trans != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_trans = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_trans == NULL )
    {
        if ( 2 + self->m_defaults_given >= 8  )
        {
            _python_par_trans = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_lower != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_lower = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_lower == NULL )
    {
        if ( 3 + self->m_defaults_given >= 8  )
        {
            _python_par_lower = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_unit_diagonal != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_unit_diagonal = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_unit_diagonal == NULL )
    {
        if ( 4 + self->m_defaults_given >= 8  )
        {
            _python_par_unit_diagonal = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_overwrite_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_overwrite_b = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_overwrite_b == NULL )
    {
        if ( 5 + self->m_defaults_given >= 8  )
        {
            _python_par_overwrite_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_debug != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_debug = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_debug == NULL )
    {
        if ( 6 + self->m_defaults_given >= 8  )
        {
            _python_par_debug = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_check_finite != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_check_finite = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_check_finite == NULL )
    {
        if ( 7 + self->m_defaults_given >= 8  )
        {
            _python_par_check_finite = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 8 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_a == NULL || _python_par_b == NULL || _python_par_trans == NULL || _python_par_lower == NULL || _python_par_unit_diagonal == NULL || _python_par_overwrite_b == NULL || _python_par_debug == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_b, _python_par_trans, _python_par_lower, _python_par_unit_diagonal, _python_par_overwrite_b, _python_par_debug, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_solve_triangular_of_module_scipy$linalg$basic( self, _python_par_a, _python_par_b, _python_par_trans, _python_par_lower, _python_par_unit_diagonal, _python_par_overwrite_b, _python_par_debug, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_trans );
    Py_XDECREF( _python_par_lower );
    Py_XDECREF( _python_par_unit_diagonal );
    Py_XDECREF( _python_par_overwrite_b );
    Py_XDECREF( _python_par_debug );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_2_solve_triangular_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 8 )
    {
        return impl_function_2_solve_triangular_of_module_scipy$linalg$basic( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_solve_triangular_of_module_scipy$linalg$basic( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_solve_banded_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject *_python_par_l_and_u, PyObject *_python_par_ab, PyObject *_python_par_b, PyObject *_python_par_overwrite_ab, PyObject *_python_par_overwrite_b, PyObject *_python_par_debug, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_l_and_u; par_l_and_u.object = _python_par_l_and_u;
    PyObjectLocalVariable par_ab; par_ab.object = _python_par_ab;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_overwrite_ab; par_overwrite_ab.object = _python_par_overwrite_ab;
    PyObjectLocalVariable par_overwrite_b; par_overwrite_b.object = _python_par_overwrite_b;
    PyObjectLocalVariable par_debug; par_debug.object = _python_par_debug;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_l;
    PyObjectLocalVariable var_u;
    PyObjectLocalVariable var_a1;
    PyObjectLocalVariable var_b1;
    PyObjectLocalVariable var_gbsv;
    PyObjectLocalVariable var_a2;
    PyObjectLocalVariable var_lu;
    PyObjectLocalVariable var_piv;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_info;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
    PyObjectTempVariable tmp_tuple_unpack_3__element_2;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_tuple_unpack_4__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_4__element_1;
    PyObjectTempVariable tmp_tuple_unpack_5__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_5__element_1;
    PyObjectTempVariable tmp_tuple_unpack_5__element_2;
    PyObjectTempVariable tmp_tuple_unpack_5__element_3;
    PyObjectTempVariable tmp_tuple_unpack_5__element_4;
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
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_attempt_3;
    PyObject *tmp_iterator_attempt_4;
    PyObject *tmp_iterator_attempt_5;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_iterator_name_5;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_sliceobj_lower_1;
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
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_unary_arg_1;
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
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e61bca856eabb222f77045ba7f6c7df1, module_scipy$linalg$basic );
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
    tmp_iter_arg_1 = par_l_and_u.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249104 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto try_finally_handler_1;
    }

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
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


        frame_function->f_lineno = 218;
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


        frame_function->f_lineno = 218;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_3;

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
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1.object;

    assert( var_l.object == NULL );
    var_l.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2.object;

    assert( var_u.object == NULL );
    var_u.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

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
    tmp_cond_value_1 = par_check_finite.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243662 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
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
    // Tried code
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto try_finally_handler_2;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 220;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray_chkfinite );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_ab.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249157 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 220;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_b.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 220;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 220;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto try_finally_handler_2;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_6;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_7 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 220;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_7;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_8 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
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


        frame_function->f_lineno = 220;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_8;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_2;
    }
    tmp_assign_source_9 = tmp_tuple_unpack_2__element_1.object;

    assert( var_a1.object == NULL );
    var_a1.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    tmp_assign_source_10 = tmp_tuple_unpack_2__element_2.object;

    assert( var_b1.object == NULL );
    var_b1.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

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
    goto branch_end_1;
    branch_no_1:;
    // Tried code
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto try_finally_handler_3;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 222;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_4 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_ab.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249157 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 222;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_b.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 222;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 222;
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto try_finally_handler_3;
    }
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__source_iter.object == NULL );
    tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_11;

    tmp_unpack_5 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_12 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 0 );
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


        frame_function->f_lineno = 222;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__element_1.object == NULL );
    tmp_tuple_unpack_3__element_1.object = tmp_assign_source_12;

    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_13 = UNPACK_PARAMETER_NEXT( tmp_unpack_6, 1 );
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


        frame_function->f_lineno = 222;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__element_2.object == NULL );
    tmp_tuple_unpack_3__element_2.object = tmp_assign_source_13;

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
    tmp_assign_source_14 = tmp_tuple_unpack_3__element_1.object;

    assert( var_a1.object == NULL );
    var_a1.object = INCREASE_REFCOUNT( tmp_assign_source_14 );

    tmp_assign_source_15 = tmp_tuple_unpack_3__element_2.object;

    assert( var_b1.object == NULL );
    var_b1.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

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

        goto frame_exception_exit_1;
    }

    goto finally_end_3;
    finally_end_3:;
    branch_end_1:;
    tmp_source_name_3 = var_a1.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_neg_1;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = var_b1.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_2 = const_int_0;
    tmp_compare_right_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_bb4052427691ada6652f52cb95177bb0;
    frame_function->f_lineno = 225;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 225;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 225;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_binop_left_2 = var_l.object;

    if ( tmp_binop_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = var_u.object;

    if ( tmp_binop_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129038 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = const_int_pos_1;
    tmp_compare_left_2 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = var_a1.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = const_int_0;
    tmp_compare_right_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_binop_left_3 = const_str_digest_16197db83cd80419d9307aa7d6f93473;
    tmp_binop_right_3 = PyTuple_New( 2 );
    tmp_binop_left_5 = var_l.object;

    if ( tmp_binop_left_5 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_5 = var_u.object;

    if ( tmp_binop_right_5 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129038 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_4 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_4 = const_int_pos_1;
    tmp_tuple_element_3 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_3 );
    tmp_source_name_6 = par_ab.object;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249157 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_subscr_target_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_4 = const_int_0;
    tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_target_4 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_3, 1, tmp_tuple_element_3 );
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 227;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    Py_DECREF( tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 227;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    // Tried code
    tmp_assign_source_16 = NULL;
    // Tried code
    tmp_assign_source_17 = par_overwrite_b.object;

    if ( tmp_assign_source_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244252 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto try_finally_handler_5;
    }

    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_17 );

    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto try_finally_handler_5;
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
    tmp_assign_source_16 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_assign_source_16 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_16 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain__datacopied );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__datacopied );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244212 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_5 = var_b1.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_6 = par_b.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto try_finally_handler_6;
    }

    frame_function->f_lineno = 230;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
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
    if (par_overwrite_b.object == NULL)
    {
        par_overwrite_b.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = par_overwrite_b.object;
        par_overwrite_b.object = tmp_assign_source_16;
        Py_DECREF( old );
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

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

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
    // Tried code
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_7 = const_tuple_str_plain_gbsv_tuple;
    tmp_call_arg_element_8 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_a1.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_arg_element_8, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_b1.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_arg_element_8, 1, tmp_tuple_element_4 );
    frame_function->f_lineno = 232;
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto try_finally_handler_7;
    }
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto try_finally_handler_7;
    }
    assert( tmp_tuple_unpack_4__source_iter.object == NULL );
    tmp_tuple_unpack_4__source_iter.object = tmp_assign_source_18;

    tmp_unpack_7 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_19 = UNPACK_PARAMETER_NEXT( tmp_unpack_7, 0 );
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


        frame_function->f_lineno = 232;
        goto try_finally_handler_7;
    }
    assert( tmp_tuple_unpack_4__element_1.object == NULL );
    tmp_tuple_unpack_4__element_1.object = tmp_assign_source_19;

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

            goto try_finally_handler_7;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_4 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_7;
    }
    tmp_assign_source_20 = tmp_tuple_unpack_4__element_1.object;

    assert( var_gbsv.object == NULL );
    var_gbsv.object = INCREASE_REFCOUNT( tmp_assign_source_20 );

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
    Py_XDECREF( tmp_tuple_unpack_4__source_iter.object );
    tmp_tuple_unpack_4__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_1.object );
    tmp_tuple_unpack_4__element_1.object = NULL;

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
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_zeros );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_5 = PyTuple_New( 2 );
    tmp_binop_left_8 = const_int_pos_2;
    tmp_binop_right_8 = var_l.object;

    if ( tmp_binop_right_8 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_7 = BINARY_OPERATION_MUL( tmp_binop_left_8, tmp_binop_right_8 );
    if ( tmp_binop_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_5 );

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_7 = var_u.object;

    if ( tmp_binop_right_7 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_5 );
        Py_DECREF( tmp_binop_left_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129038 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_6 = BINARY_OPERATION_ADD( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_left_7 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_5 );

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_6 = const_int_pos_1;
    tmp_tuple_element_6 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_5 );

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_5, 0, tmp_tuple_element_6 );
    tmp_source_name_8 = var_a1.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    if ( tmp_subscr_target_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_5 );

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_5 = const_int_pos_1;
    tmp_tuple_element_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_target_5 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_5 );

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_5, 1, tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_5 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_9 = var_gbsv.object;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249205 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dtype );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 233;
    tmp_assign_source_21 = CALL_FUNCTION( tmp_called_5, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    assert( var_a2.object == NULL );
    var_a2.object = tmp_assign_source_21;

    tmp_ass_subvalue_1 = var_a1.object;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = var_a2.object;

    tmp_ass_subscript_1 = PyTuple_New( 2 );
    tmp_sliceobj_lower_1 = var_l.object;

    if ( tmp_sliceobj_lower_1 == NULL )
    {
        Py_DECREF( tmp_ass_subscript_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_7 = MAKE_SLICEOBJ( tmp_sliceobj_lower_1, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_7 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }
    // Tried code
    tmp_called_6 = var_gbsv.object;

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249205 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_8;
    }

    tmp_call_pos_2 = PyTuple_New( 4 );
    tmp_tuple_element_8 = var_l.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_8;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_u.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129038 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_8;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_a2.object;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 2, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_b1.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_8;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 3, tmp_tuple_element_8 );
    tmp_call_kw_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_2 = Py_True;
    tmp_dict_key_2 = const_str_plain_overwrite_ab;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_overwrite_b.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244252 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 236;
        goto try_finally_handler_8;
    }

    tmp_dict_key_3 = const_str_plain_overwrite_b;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 236;
    tmp_iter_arg_5 = CALL_FUNCTION( tmp_called_6, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto try_finally_handler_8;
    }
    tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_5__source_iter.object == NULL );
    tmp_tuple_unpack_5__source_iter.object = tmp_assign_source_22;

    tmp_unpack_8 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_23 = UNPACK_PARAMETER_NEXT( tmp_unpack_8, 0 );
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


        frame_function->f_lineno = 235;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_5__element_1.object == NULL );
    tmp_tuple_unpack_5__element_1.object = tmp_assign_source_23;

    tmp_unpack_9 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_24 = UNPACK_PARAMETER_NEXT( tmp_unpack_9, 1 );
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


        frame_function->f_lineno = 235;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_5__element_2.object == NULL );
    tmp_tuple_unpack_5__element_2.object = tmp_assign_source_24;

    tmp_unpack_10 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_25 = UNPACK_PARAMETER_NEXT( tmp_unpack_10, 2 );
    if ( tmp_assign_source_25 == NULL )
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


        frame_function->f_lineno = 235;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_5__element_3.object == NULL );
    tmp_tuple_unpack_5__element_3.object = tmp_assign_source_25;

    tmp_unpack_11 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_26 = UNPACK_PARAMETER_NEXT( tmp_unpack_11, 3 );
    if ( tmp_assign_source_26 == NULL )
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


        frame_function->f_lineno = 235;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_5__element_4.object == NULL );
    tmp_tuple_unpack_5__element_4.object = tmp_assign_source_26;

    tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_5 ); assert( PyIter_Check( tmp_iterator_name_5 ) );

    tmp_iterator_attempt_5 = (*Py_TYPE( tmp_iterator_name_5 )->tp_iternext)( tmp_iterator_name_5 );

    if (likely( tmp_iterator_attempt_5 == NULL ))
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
        Py_DECREF( tmp_iterator_attempt_5 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_8;
    }
    tmp_assign_source_27 = tmp_tuple_unpack_5__element_1.object;

    assert( var_lu.object == NULL );
    var_lu.object = INCREASE_REFCOUNT( tmp_assign_source_27 );

    tmp_assign_source_28 = tmp_tuple_unpack_5__element_2.object;

    assert( var_piv.object == NULL );
    var_piv.object = INCREASE_REFCOUNT( tmp_assign_source_28 );

    tmp_assign_source_29 = tmp_tuple_unpack_5__element_3.object;

    assert( var_x.object == NULL );
    var_x.object = INCREASE_REFCOUNT( tmp_assign_source_29 );

    tmp_assign_source_30 = tmp_tuple_unpack_5__element_4.object;

    assert( var_info.object == NULL );
    var_info.object = INCREASE_REFCOUNT( tmp_assign_source_30 );

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

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_5__source_iter.object );
    tmp_tuple_unpack_5__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_1.object );
    tmp_tuple_unpack_5__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2.object );
    tmp_tuple_unpack_5__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_3.object );
    tmp_tuple_unpack_5__element_3.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_4.object );
    tmp_tuple_unpack_5__element_4.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
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
    tmp_compare_left_3 = var_info.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
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
    tmp_return_value = var_x.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_compare_left_4 = var_info.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_LinAlgError );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183355 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = const_str_digest_1ef26876be16ded561892e360e5b012c;
    frame_function->f_lineno = 240;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_9 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 240;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_binop_left_9 = const_str_digest_e57ad839057595f38aee03019a6e8679;
    tmp_unary_arg_1 = var_info.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_9 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 241;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    Py_DECREF( tmp_make_exception_arg_3 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 241;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;

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
    if ((var_l.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_l,
            var_l.object
        );

    }
    if ((var_u.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_u,
            var_u.object
        );

    }
    if ((var_a1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a1,
            var_a1.object
        );

    }
    if ((var_b1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b1,
            var_b1.object
        );

    }
    if ((var_gbsv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gbsv,
            var_gbsv.object
        );

    }
    if ((var_a2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a2,
            var_a2.object
        );

    }
    if ((var_lu.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lu,
            var_lu.object
        );

    }
    if ((var_piv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_piv,
            var_piv.object
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
    if ((var_info.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info,
            var_info.object
        );

    }
    if ((par_l_and_u.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_l_and_u,
            par_l_and_u.object
        );

    }
    if ((par_ab.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ab,
            par_ab.object
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
    if ((par_overwrite_ab.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_overwrite_ab,
            par_overwrite_ab.object
        );

    }
    if ((par_overwrite_b.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_overwrite_b,
            par_overwrite_b.object
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
    if ((par_check_finite.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_finite,
            par_check_finite.object
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
static PyObject *fparse_function_3_solve_banded_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_l_and_u = NULL;
    PyObject *_python_par_ab = NULL;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_overwrite_ab = NULL;
    PyObject *_python_par_overwrite_b = NULL;
    PyObject *_python_par_debug = NULL;
    PyObject *_python_par_check_finite = NULL;
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
                PyErr_Format( PyExc_TypeError, "solve_banded() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_l_and_u == key )
            {
                assert( _python_par_l_and_u == NULL );
                _python_par_l_and_u = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ab == key )
            {
                assert( _python_par_ab == NULL );
                _python_par_ab = value;

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
            if ( found == false && const_str_plain_overwrite_ab == key )
            {
                assert( _python_par_overwrite_ab == NULL );
                _python_par_overwrite_ab = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_overwrite_b == key )
            {
                assert( _python_par_overwrite_b == NULL );
                _python_par_overwrite_b = value;

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
            if ( found == false && const_str_plain_check_finite == key )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_l_and_u, key ) == 1 )
            {
                assert( _python_par_l_and_u == NULL );
                _python_par_l_and_u = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ab, key ) == 1 )
            {
                assert( _python_par_ab == NULL );
                _python_par_ab = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_overwrite_ab, key ) == 1 )
            {
                assert( _python_par_overwrite_ab == NULL );
                _python_par_overwrite_ab = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_overwrite_b, key ) == 1 )
            {
                assert( _python_par_overwrite_b == NULL );
                _python_par_overwrite_b = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_check_finite, key ) == 1 )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "solve_banded() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_l_and_u != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_l_and_u = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_l_and_u == NULL )
    {
        if ( 0 + self->m_defaults_given >= 7  )
        {
            _python_par_l_and_u = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_ab != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_ab = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_ab == NULL )
    {
        if ( 1 + self->m_defaults_given >= 7  )
        {
            _python_par_ab = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_b = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_b == NULL )
    {
        if ( 2 + self->m_defaults_given >= 7  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_overwrite_ab != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_overwrite_ab = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_overwrite_ab == NULL )
    {
        if ( 3 + self->m_defaults_given >= 7  )
        {
            _python_par_overwrite_ab = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_overwrite_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_overwrite_b = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_overwrite_b == NULL )
    {
        if ( 4 + self->m_defaults_given >= 7  )
        {
            _python_par_overwrite_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
        if ( 5 + self->m_defaults_given >= 7  )
        {
            _python_par_debug = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_check_finite != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_check_finite = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_check_finite == NULL )
    {
        if ( 6 + self->m_defaults_given >= 7  )
        {
            _python_par_check_finite = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_l_and_u == NULL || _python_par_ab == NULL || _python_par_b == NULL || _python_par_overwrite_ab == NULL || _python_par_overwrite_b == NULL || _python_par_debug == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_l_and_u, _python_par_ab, _python_par_b, _python_par_overwrite_ab, _python_par_overwrite_b, _python_par_debug, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_solve_banded_of_module_scipy$linalg$basic( self, _python_par_l_and_u, _python_par_ab, _python_par_b, _python_par_overwrite_ab, _python_par_overwrite_b, _python_par_debug, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_l_and_u );
    Py_XDECREF( _python_par_ab );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_overwrite_ab );
    Py_XDECREF( _python_par_overwrite_b );
    Py_XDECREF( _python_par_debug );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_3_solve_banded_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 7 )
    {
        return impl_function_3_solve_banded_of_module_scipy$linalg$basic( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_solve_banded_of_module_scipy$linalg$basic( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_solveh_banded_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject *_python_par_ab, PyObject *_python_par_b, PyObject *_python_par_overwrite_ab, PyObject *_python_par_overwrite_b, PyObject *_python_par_lower, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_ab; par_ab.object = _python_par_ab;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_overwrite_ab; par_overwrite_ab.object = _python_par_overwrite_ab;
    PyObjectLocalVariable par_overwrite_b; par_overwrite_b.object = _python_par_overwrite_b;
    PyObjectLocalVariable par_lower; par_lower.object = _python_par_lower;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_pbsv;
    PyObjectLocalVariable var_c;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_info;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
    PyObjectTempVariable tmp_tuple_unpack_4__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_4__element_1;
    PyObjectTempVariable tmp_tuple_unpack_4__element_2;
    PyObjectTempVariable tmp_tuple_unpack_4__element_3;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_attempt_3;
    PyObject *tmp_iterator_attempt_4;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    PyObject *tmp_unpack_8;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_434cede8962577306d14ec45291a624b, module_scipy$linalg$basic );
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
    tmp_cond_value_1 = par_check_finite.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243662 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 294;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 294;
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
    // Tried code
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray_chkfinite );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_ab.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249157 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_b.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 295;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
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


        frame_function->f_lineno = 295;
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


        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_3;

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
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1.object;

    if (par_ab.object == NULL)
    {
        par_ab.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = par_ab.object;
        par_ab.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2.object;

    if (par_b.object == NULL)
    {
        par_b.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = par_b.object;
        par_b.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
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
    goto branch_end_1;
    branch_no_1:;
    // Tried code
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto try_finally_handler_2;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 297;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_4 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_ab.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249157 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 297;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_b.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 297;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 297;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto try_finally_handler_2;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_6;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_7 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 297;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_7;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_8 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
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


        frame_function->f_lineno = 297;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_8;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_2;
    }
    tmp_assign_source_9 = tmp_tuple_unpack_2__element_1.object;

    if (par_ab.object == NULL)
    {
        par_ab.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = par_ab.object;
        par_ab.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_assign_source_10 = tmp_tuple_unpack_2__element_2.object;

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
    branch_end_1:;
    tmp_source_name_3 = par_ab.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249157 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_neg_1;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_b.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_2 = const_int_0;
    tmp_compare_right_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_bb4052427691ada6652f52cb95177bb0;
    frame_function->f_lineno = 300;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 300;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 300;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    // Tried code
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_5 = const_tuple_str_plain_pbsv_tuple;
    tmp_call_arg_element_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = par_ab.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249157 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_6, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_b.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_6, 1, tmp_tuple_element_3 );
    frame_function->f_lineno = 302;
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 302;
        goto try_finally_handler_3;
    }
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 302;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__source_iter.object == NULL );
    tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_11;

    tmp_unpack_5 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_12 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 0 );
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


        frame_function->f_lineno = 302;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__element_1.object == NULL );
    tmp_tuple_unpack_3__element_1.object = tmp_assign_source_12;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_3;
    }
    tmp_assign_source_13 = tmp_tuple_unpack_3__element_1.object;

    assert( var_pbsv.object == NULL );
    var_pbsv.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

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
    // Tried code
    tmp_called_4 = var_pbsv.object;

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249255 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto try_finally_handler_4;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_4 = par_ab.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249157 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = par_b.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_4 );
    tmp_call_kw_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_lower.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 225972 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto try_finally_handler_4;
    }

    tmp_dict_key_1 = const_str_plain_lower;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_overwrite_ab.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249305 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto try_finally_handler_4;
    }

    tmp_dict_key_2 = const_str_plain_overwrite_ab;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_overwrite_b.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244252 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 304;
        goto try_finally_handler_4;
    }

    tmp_dict_key_3 = const_str_plain_overwrite_b;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 304;
    tmp_iter_arg_4 = CALL_FUNCTION( tmp_called_4, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 304;
        goto try_finally_handler_4;
    }
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_4__source_iter.object == NULL );
    tmp_tuple_unpack_4__source_iter.object = tmp_assign_source_14;

    tmp_unpack_6 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_15 = UNPACK_PARAMETER_NEXT( tmp_unpack_6, 0 );
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


        frame_function->f_lineno = 303;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_4__element_1.object == NULL );
    tmp_tuple_unpack_4__element_1.object = tmp_assign_source_15;

    tmp_unpack_7 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_16 = UNPACK_PARAMETER_NEXT( tmp_unpack_7, 1 );
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


        frame_function->f_lineno = 303;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_4__element_2.object == NULL );
    tmp_tuple_unpack_4__element_2.object = tmp_assign_source_16;

    tmp_unpack_8 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_17 = UNPACK_PARAMETER_NEXT( tmp_unpack_8, 2 );
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


        frame_function->f_lineno = 303;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_4__element_3.object == NULL );
    tmp_tuple_unpack_4__element_3.object = tmp_assign_source_17;

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

            goto try_finally_handler_4;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_4 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_4;
    }
    tmp_assign_source_18 = tmp_tuple_unpack_4__element_1.object;

    assert( var_c.object == NULL );
    var_c.object = INCREASE_REFCOUNT( tmp_assign_source_18 );

    tmp_assign_source_19 = tmp_tuple_unpack_4__element_2.object;

    assert( var_x.object == NULL );
    var_x.object = INCREASE_REFCOUNT( tmp_assign_source_19 );

    tmp_assign_source_20 = tmp_tuple_unpack_4__element_3.object;

    assert( var_info.object == NULL );
    var_info.object = INCREASE_REFCOUNT( tmp_assign_source_20 );

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
    Py_XDECREF( tmp_tuple_unpack_4__source_iter.object );
    tmp_tuple_unpack_4__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_1.object );
    tmp_tuple_unpack_4__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2.object );
    tmp_tuple_unpack_4__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_3.object );
    tmp_tuple_unpack_4__element_3.object = NULL;

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
    tmp_compare_left_2 = var_info.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_LinAlgError );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183355 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = const_str_digest_cea6f413576eecfc568663ad19404835;
    tmp_binop_right_1 = var_info.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 306;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 306;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_compare_left_3 = var_info.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_binop_left_2 = const_str_digest_c1ca0508a291adaa83c7bd5ab1478be2;
    tmp_unary_arg_1 = var_info.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 308;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    Py_DECREF( tmp_make_exception_arg_2 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 308;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_return_value = var_x.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
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
    if ((var_pbsv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pbsv,
            var_pbsv.object
        );

    }
    if ((var_c.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c,
            var_c.object
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
    if ((var_info.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info,
            var_info.object
        );

    }
    if ((par_ab.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ab,
            par_ab.object
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
    if ((par_overwrite_ab.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_overwrite_ab,
            par_overwrite_ab.object
        );

    }
    if ((par_overwrite_b.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_overwrite_b,
            par_overwrite_b.object
        );

    }
    if ((par_lower.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lower,
            par_lower.object
        );

    }
    if ((par_check_finite.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_finite,
            par_check_finite.object
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
static PyObject *fparse_function_4_solveh_banded_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ab = NULL;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_overwrite_ab = NULL;
    PyObject *_python_par_overwrite_b = NULL;
    PyObject *_python_par_lower = NULL;
    PyObject *_python_par_check_finite = NULL;
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
                PyErr_Format( PyExc_TypeError, "solveh_banded() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_ab == key )
            {
                assert( _python_par_ab == NULL );
                _python_par_ab = value;

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
            if ( found == false && const_str_plain_overwrite_ab == key )
            {
                assert( _python_par_overwrite_ab == NULL );
                _python_par_overwrite_ab = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_overwrite_b == key )
            {
                assert( _python_par_overwrite_b == NULL );
                _python_par_overwrite_b = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_lower == key )
            {
                assert( _python_par_lower == NULL );
                _python_par_lower = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_check_finite == key )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ab, key ) == 1 )
            {
                assert( _python_par_ab == NULL );
                _python_par_ab = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_overwrite_ab, key ) == 1 )
            {
                assert( _python_par_overwrite_ab == NULL );
                _python_par_overwrite_ab = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_overwrite_b, key ) == 1 )
            {
                assert( _python_par_overwrite_b == NULL );
                _python_par_overwrite_b = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_lower, key ) == 1 )
            {
                assert( _python_par_lower == NULL );
                _python_par_lower = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_check_finite, key ) == 1 )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "solveh_banded() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_ab != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_ab = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_ab == NULL )
    {
        if ( 0 + self->m_defaults_given >= 6  )
        {
            _python_par_ab = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
        if ( 1 + self->m_defaults_given >= 6  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_overwrite_ab != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_overwrite_ab = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_overwrite_ab == NULL )
    {
        if ( 2 + self->m_defaults_given >= 6  )
        {
            _python_par_overwrite_ab = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_overwrite_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_overwrite_b = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_overwrite_b == NULL )
    {
        if ( 3 + self->m_defaults_given >= 6  )
        {
            _python_par_overwrite_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_lower != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_lower = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_lower == NULL )
    {
        if ( 4 + self->m_defaults_given >= 6  )
        {
            _python_par_lower = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_check_finite != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_check_finite = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_check_finite == NULL )
    {
        if ( 5 + self->m_defaults_given >= 6  )
        {
            _python_par_check_finite = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_ab == NULL || _python_par_b == NULL || _python_par_overwrite_ab == NULL || _python_par_overwrite_b == NULL || _python_par_lower == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_ab, _python_par_b, _python_par_overwrite_ab, _python_par_overwrite_b, _python_par_lower, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_solveh_banded_of_module_scipy$linalg$basic( self, _python_par_ab, _python_par_b, _python_par_overwrite_ab, _python_par_overwrite_b, _python_par_lower, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_ab );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_overwrite_ab );
    Py_XDECREF( _python_par_overwrite_b );
    Py_XDECREF( _python_par_lower );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_4_solveh_banded_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_4_solveh_banded_of_module_scipy$linalg$basic( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_solveh_banded_of_module_scipy$linalg$basic( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_inv_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_overwrite_a, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_overwrite_a; par_overwrite_a.object = _python_par_overwrite_a;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_a1;
    PyObjectLocalVariable var_getrf;
    PyObjectLocalVariable var_getri;
    PyObjectLocalVariable var_lu;
    PyObjectLocalVariable var_piv;
    PyObjectLocalVariable var_info;
    PyObjectLocalVariable var_lwork;
    PyObjectLocalVariable var_inv_a;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
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
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_attempt_3;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
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
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_30a22a42d34dd09837072d9eeb5449b4, module_scipy$linalg$basic );
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
    tmp_cond_value_1 = par_check_finite.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243662 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 353;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 353;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray_chkfinite );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_a.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 354;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }
    assert( var_a1.object == NULL );
    var_a1.object = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_a.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 356;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    assert( var_a1.object == NULL );
    var_a1.object = tmp_assign_source_2;

    branch_end_1:;
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_source_name_3 = var_a1.object;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
        goto try_finally_handler_2;
    }
    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
        goto try_finally_handler_2;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_assign_source_3 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
        goto try_finally_handler_2;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_3;

    tmp_cond_value_3 = tmp_or_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
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

    Py_INCREF( tmp_cond_value_2 );
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
    tmp_source_name_4 = var_a1.object;

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
        goto try_finally_handler_3;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
        goto try_finally_handler_3;
    }
    tmp_source_name_5 = var_a1.object;

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 357;
        goto try_finally_handler_3;
    }
    tmp_subscr_subscript_2 = const_int_pos_1;
    tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 357;
        goto try_finally_handler_3;
    }
    tmp_cond_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
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
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 357;
        goto try_finally_handler_1;
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
    tmp_make_exception_arg_1 = const_str_digest_bfc63172b396a4f385572b1b0268edc0;
    frame_function->f_lineno = 358;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 358;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 358;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_2:;
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
    // Tried code
    tmp_assign_source_4 = NULL;
    // Tried code
    tmp_assign_source_5 = par_overwrite_a.object;

    if ( tmp_assign_source_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 359;
        goto try_finally_handler_5;
    }

    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_cond_value_4 = tmp_or_2__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 359;
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
    tmp_assign_source_4 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_assign_source_4 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_4 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain__datacopied );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__datacopied );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244212 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 359;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_3 = var_a1.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 359;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_4 = par_a.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 359;
        goto try_finally_handler_6;
    }

    frame_function->f_lineno = 359;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 359;
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
    if (par_overwrite_a.object == NULL)
    {
        par_overwrite_a.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = par_overwrite_a.object;
        par_overwrite_a.object = tmp_assign_source_4;
        Py_DECREF( old );
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
    // Tried code
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_5 = const_tuple_str_plain_getrf_str_plain_getri_tuple;
    tmp_call_arg_element_6 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_a1.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_6, 0, tmp_tuple_element_1 );
    frame_function->f_lineno = 369;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 369;
        goto try_finally_handler_7;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 369;
        goto try_finally_handler_7;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_6;

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


        frame_function->f_lineno = 369;
        goto try_finally_handler_7;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_7;

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


        frame_function->f_lineno = 369;
        goto try_finally_handler_7;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_8;

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
    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1.object;

    assert( var_getrf.object == NULL );
    var_getrf.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2.object;

    assert( var_getri.object == NULL );
    var_getri.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

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
    // Tried code
    tmp_called_5 = var_getrf.object;

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249363 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 370;
        goto try_finally_handler_8;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_a1.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 370;
        goto try_finally_handler_8;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_overwrite_a.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 370;
        goto try_finally_handler_8;
    }

    tmp_dict_key_1 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 370;
    tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_5, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto try_finally_handler_8;
    }
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_11;

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


        frame_function->f_lineno = 370;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_12;

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


        frame_function->f_lineno = 370;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_13;

    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_14 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 2 );
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


        frame_function->f_lineno = 370;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_2__element_3.object == NULL );
    tmp_tuple_unpack_2__element_3.object = tmp_assign_source_14;

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

            goto try_finally_handler_8;
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

        goto try_finally_handler_8;
    }
    tmp_assign_source_15 = tmp_tuple_unpack_2__element_1.object;

    assert( var_lu.object == NULL );
    var_lu.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    tmp_assign_source_16 = tmp_tuple_unpack_2__element_2.object;

    assert( var_piv.object == NULL );
    var_piv.object = INCREASE_REFCOUNT( tmp_assign_source_16 );

    tmp_assign_source_17 = tmp_tuple_unpack_2__element_3.object;

    assert( var_info.object == NULL );
    var_info.object = INCREASE_REFCOUNT( tmp_assign_source_17 );

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

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2.object );
    tmp_tuple_unpack_2__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3.object );
    tmp_tuple_unpack_2__element_3.object = NULL;

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
    tmp_compare_left_1 = var_info.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 371;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto frame_exception_exit_1;
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
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_calc_lwork );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_calc_lwork );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249414 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_getri );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = var_getri.object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249453 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_typecode );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = var_a1.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = const_int_0;
    tmp_call_arg_element_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 372;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }
    assert( var_lwork.object == NULL );
    var_lwork.object = tmp_assign_source_18;

    tmp_subscr_target_4 = var_lwork.object;

    tmp_subscr_subscript_4 = const_int_pos_1;
    tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto frame_exception_exit_1;
    }
    assert( var_lwork.object != NULL );
    {
        PyObject *old = var_lwork.object;
        var_lwork.object = tmp_assign_source_19;
        Py_DECREF( old );
    }

    tmp_binop_left_1 = const_float_1_01;
    tmp_binop_right_1 = var_lwork.object;

    tmp_int_arg_1 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }
    assert( var_lwork.object != NULL );
    {
        PyObject *old = var_lwork.object;
        var_lwork.object = tmp_assign_source_20;
        Py_DECREF( old );
    }

    // Tried code
    tmp_called_7 = var_getri.object;

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249453 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 381;
        goto try_finally_handler_9;
    }

    tmp_call_pos_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_lu.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249504 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 381;
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_piv.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249552 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 381;
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 1, tmp_tuple_element_3 );
    tmp_call_kw_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_2 = var_lwork.object;

    tmp_dict_key_2 = const_str_plain_lwork;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = const_int_pos_1;
    tmp_dict_key_3 = const_str_plain_overwrite_lu;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 381;
    tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_7, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 381;
        goto try_finally_handler_9;
    }
    tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 381;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_3__source_iter.object == NULL );
    tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_21;

    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_22 = UNPACK_PARAMETER_NEXT( tmp_unpack_6, 0 );
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


        frame_function->f_lineno = 381;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_3__element_1.object == NULL );
    tmp_tuple_unpack_3__element_1.object = tmp_assign_source_22;

    tmp_unpack_7 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_23 = UNPACK_PARAMETER_NEXT( tmp_unpack_7, 1 );
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


        frame_function->f_lineno = 381;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_3__element_2.object == NULL );
    tmp_tuple_unpack_3__element_2.object = tmp_assign_source_23;

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

            goto try_finally_handler_9;
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

        goto try_finally_handler_9;
    }
    tmp_assign_source_24 = tmp_tuple_unpack_3__element_1.object;

    assert( var_inv_a.object == NULL );
    var_inv_a.object = INCREASE_REFCOUNT( tmp_assign_source_24 );

    tmp_assign_source_25 = tmp_tuple_unpack_3__element_2.object;

    if (var_info.object == NULL)
    {
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
    }
    else
    {
        PyObject *old = var_info.object;
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
        Py_DECREF( old );
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
    Py_XDECREF( tmp_tuple_unpack_3__source_iter.object );
    tmp_tuple_unpack_3__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1.object );
    tmp_tuple_unpack_3__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2.object );
    tmp_tuple_unpack_3__element_2.object = NULL;

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

    goto finally_end_9;
    finally_end_9:;
    branch_no_3:;
    tmp_compare_left_2 = var_info.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
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
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_LinAlgError );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183355 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 383;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = const_str_digest_1ef26876be16ded561892e360e5b012c;
    frame_function->f_lineno = 383;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_9 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 383;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 383;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_compare_left_3 = var_info.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_binop_left_2 = const_str_digest_c9ce96b04020a922080320c319f0beb0;
    tmp_unary_arg_1 = var_info.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 385;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 385;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    Py_DECREF( tmp_make_exception_arg_2 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 385;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 385;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_return_value = var_inv_a.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249601 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 387;
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
    if ((var_a1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a1,
            var_a1.object
        );

    }
    if ((var_getrf.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_getrf,
            var_getrf.object
        );

    }
    if ((var_getri.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_getri,
            var_getri.object
        );

    }
    if ((var_lu.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lu,
            var_lu.object
        );

    }
    if ((var_piv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_piv,
            var_piv.object
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
    if ((var_lwork.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lwork,
            var_lwork.object
        );

    }
    if ((var_inv_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_inv_a,
            var_inv_a.object
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
    if ((par_overwrite_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_overwrite_a,
            par_overwrite_a.object
        );

    }
    if ((par_check_finite.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_finite,
            par_check_finite.object
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
static PyObject *fparse_function_5_inv_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_overwrite_a = NULL;
    PyObject *_python_par_check_finite = NULL;
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
                PyErr_Format( PyExc_TypeError, "inv() keywords must be strings" );
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
            if ( found == false && const_str_plain_overwrite_a == key )
            {
                assert( _python_par_overwrite_a == NULL );
                _python_par_overwrite_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_check_finite == key )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_overwrite_a, key ) == 1 )
            {
                assert( _python_par_overwrite_a == NULL );
                _python_par_overwrite_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_check_finite, key ) == 1 )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "inv() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_overwrite_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_overwrite_a = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_overwrite_a == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_overwrite_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_check_finite != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_check_finite = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_check_finite == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_check_finite = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_a == NULL || _python_par_overwrite_a == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_overwrite_a, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_inv_of_module_scipy$linalg$basic( self, _python_par_a, _python_par_overwrite_a, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_overwrite_a );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_5_inv_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_5_inv_of_module_scipy$linalg$basic( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_inv_of_module_scipy$linalg$basic( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_det_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_overwrite_a, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_overwrite_a; par_overwrite_a.object = _python_par_overwrite_a;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_a1;
    PyObjectLocalVariable var_fdet;
    PyObjectLocalVariable var_a_det;
    PyObjectLocalVariable var_info;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
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
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cf2b026d1ab9008597f0657c72c701f5, module_scipy$linalg$basic );
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
    tmp_cond_value_1 = par_check_finite.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243662 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 437;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 438;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray_chkfinite );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 438;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_a.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 438;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 438;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 438;
        goto frame_exception_exit_1;
    }
    assert( var_a1.object == NULL );
    var_a1.object = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 440;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 440;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_a.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 440;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 440;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 440;
        goto frame_exception_exit_1;
    }
    assert( var_a1.object == NULL );
    var_a1.object = tmp_assign_source_2;

    branch_end_1:;
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_source_name_3 = var_a1.object;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
        goto try_finally_handler_2;
    }
    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
        goto try_finally_handler_2;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_assign_source_3 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
        goto try_finally_handler_2;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_3;

    tmp_cond_value_3 = tmp_or_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
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

    Py_INCREF( tmp_cond_value_2 );
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
    tmp_source_name_4 = var_a1.object;

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
        goto try_finally_handler_3;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
        goto try_finally_handler_3;
    }
    tmp_source_name_5 = var_a1.object;

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 441;
        goto try_finally_handler_3;
    }
    tmp_subscr_subscript_2 = const_int_pos_1;
    tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 441;
        goto try_finally_handler_3;
    }
    tmp_cond_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
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
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 441;
        goto try_finally_handler_1;
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
    tmp_make_exception_arg_1 = const_str_digest_bfc63172b396a4f385572b1b0268edc0;
    frame_function->f_lineno = 442;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 442;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 442;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_2:;
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
    // Tried code
    tmp_assign_source_4 = NULL;
    // Tried code
    tmp_assign_source_5 = par_overwrite_a.object;

    if ( tmp_assign_source_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 443;
        goto try_finally_handler_5;
    }

    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_cond_value_4 = tmp_or_2__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 443;
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
    tmp_assign_source_4 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_assign_source_4 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_4 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain__datacopied );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__datacopied );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244212 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 443;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_3 = var_a1.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 443;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_4 = par_a.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 443;
        goto try_finally_handler_6;
    }

    frame_function->f_lineno = 443;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 443;
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
    if (par_overwrite_a.object == NULL)
    {
        par_overwrite_a.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = par_overwrite_a.object;
        par_overwrite_a.object = tmp_assign_source_4;
        Py_DECREF( old );
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
    // Tried code
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_get_flinalg_funcs );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_flinalg_funcs );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249652 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 444;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_5 = const_tuple_str_plain_det_tuple;
    tmp_call_arg_element_6 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_a1.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 444;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_6, 0, tmp_tuple_element_1 );
    frame_function->f_lineno = 444;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 444;
        goto try_finally_handler_7;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 444;
        goto try_finally_handler_7;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_6;

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


        frame_function->f_lineno = 444;
        goto try_finally_handler_7;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_7;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_7;
    }
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1.object;

    assert( var_fdet.object == NULL );
    var_fdet.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

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
    // Tried code
    tmp_called_5 = var_fdet.object;

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249698 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 445;
        goto try_finally_handler_8;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_a1.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 445;
        goto try_finally_handler_8;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_overwrite_a.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 445;
        goto try_finally_handler_8;
    }

    tmp_dict_key_1 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 445;
    tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_5, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 445;
        goto try_finally_handler_8;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 445;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_9;

    tmp_unpack_2 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_10 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 0 );
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


        frame_function->f_lineno = 445;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_10;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_11 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 1 );
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


        frame_function->f_lineno = 445;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_11;

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

            goto try_finally_handler_8;
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

        goto try_finally_handler_8;
    }
    tmp_assign_source_12 = tmp_tuple_unpack_2__element_1.object;

    assert( var_a_det.object == NULL );
    var_a_det.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

    tmp_assign_source_13 = tmp_tuple_unpack_2__element_2.object;

    assert( var_info.object == NULL );
    var_info.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

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
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto frame_exception_exit_1;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_compare_left_1 = var_info.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 446;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 446;
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
    tmp_binop_left_1 = const_str_digest_be72bc238c8e39974ac4dbdfd3f56d35;
    tmp_unary_arg_1 = var_info.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 448;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 448;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 447;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 447;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    Py_DECREF( tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 447;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 447;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_return_value = var_a_det.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249748 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 449;
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
    if ((var_a1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a1,
            var_a1.object
        );

    }
    if ((var_fdet.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fdet,
            var_fdet.object
        );

    }
    if ((var_a_det.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a_det,
            var_a_det.object
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
    if ((par_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a,
            par_a.object
        );

    }
    if ((par_overwrite_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_overwrite_a,
            par_overwrite_a.object
        );

    }
    if ((par_check_finite.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_finite,
            par_check_finite.object
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
static PyObject *fparse_function_6_det_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_overwrite_a = NULL;
    PyObject *_python_par_check_finite = NULL;
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
                PyErr_Format( PyExc_TypeError, "det() keywords must be strings" );
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
            if ( found == false && const_str_plain_overwrite_a == key )
            {
                assert( _python_par_overwrite_a == NULL );
                _python_par_overwrite_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_check_finite == key )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_overwrite_a, key ) == 1 )
            {
                assert( _python_par_overwrite_a == NULL );
                _python_par_overwrite_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_check_finite, key ) == 1 )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "det() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_overwrite_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_overwrite_a = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_overwrite_a == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_overwrite_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_check_finite != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_check_finite = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_check_finite == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_check_finite = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_a == NULL || _python_par_overwrite_a == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_overwrite_a, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6_det_of_module_scipy$linalg$basic( self, _python_par_a, _python_par_overwrite_a, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_overwrite_a );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_6_det_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_6_det_of_module_scipy$linalg$basic( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_det_of_module_scipy$linalg$basic( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_lstsq_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_b, PyObject *_python_par_cond, PyObject *_python_par_overwrite_a, PyObject *_python_par_overwrite_b, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_cond; par_cond.object = _python_par_cond;
    PyObjectLocalVariable par_overwrite_a; par_overwrite_a.object = _python_par_overwrite_a;
    PyObjectLocalVariable par_overwrite_b; par_overwrite_b.object = _python_par_overwrite_b;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_a1;
    PyObjectLocalVariable var_b1;
    PyObjectLocalVariable var_m;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_nrhs;
    PyObjectLocalVariable var_gelss;
    PyObjectLocalVariable var_b2;
    PyObjectLocalVariable var_work;
    PyObjectLocalVariable var_lwork;
    PyObjectLocalVariable var_v;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_rank;
    PyObjectLocalVariable var_info;
    PyObjectLocalVariable var_resids;
    PyObjectLocalVariable var_x1;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
    PyObjectTempVariable tmp_tuple_unpack_3__element_2;
    PyObjectTempVariable tmp_tuple_unpack_4__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_4__element_1;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_tuple_unpack_5__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_5__element_1;
    PyObjectTempVariable tmp_tuple_unpack_5__element_2;
    PyObjectTempVariable tmp_tuple_unpack_5__element_3;
    PyObjectTempVariable tmp_tuple_unpack_5__element_4;
    PyObjectTempVariable tmp_tuple_unpack_5__element_5;
    PyObjectTempVariable tmp_tuple_unpack_5__element_6;
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
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_kw_4;
    PyObject *tmp_call_kw_5;
    PyObject *tmp_call_kw_6;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_call_pos_3;
    PyObject *tmp_call_pos_4;
    PyObject *tmp_call_pos_5;
    PyObject *tmp_call_pos_6;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
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
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
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
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_attempt_3;
    PyObject *tmp_iterator_attempt_4;
    PyObject *tmp_iterator_attempt_5;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_iterator_name_5;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_upper_1;
    PyObject *tmp_sliceass_value_1;
    PyObject *tmp_sliceobj_upper_1;
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
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
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
    PyObject *tmp_unary_arg_1;
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
    PyObject *tmp_unpack_12;
    PyObject *tmp_unpack_13;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9c96b5b6e406a6b5c7360b998332b2ec, module_scipy$linalg$basic );
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
    tmp_cond_value_1 = par_check_finite.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243662 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 506;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 506;
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
    // Tried code
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 507;
        goto try_finally_handler_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 507;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray_chkfinite );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 507;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_a.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 507;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_b.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 507;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 507;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 507;
        goto try_finally_handler_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 507;
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


        frame_function->f_lineno = 507;
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


        frame_function->f_lineno = 507;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_3;

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
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1.object;

    assert( var_a1.object == NULL );
    var_a1.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2.object;

    assert( var_b1.object == NULL );
    var_b1.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

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
    goto branch_end_1;
    branch_no_1:;
    // Tried code
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 509;
        goto try_finally_handler_2;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 509;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 509;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_4 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_a.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 509;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_b.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 509;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 509;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 509;
        goto try_finally_handler_2;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 509;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_6;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_7 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 509;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_7;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_8 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
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


        frame_function->f_lineno = 509;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_8;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_2;
    }
    tmp_assign_source_9 = tmp_tuple_unpack_2__element_1.object;

    assert( var_a1.object == NULL );
    var_a1.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    tmp_assign_source_10 = tmp_tuple_unpack_2__element_2.object;

    assert( var_b1.object == NULL );
    var_b1.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

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
    branch_end_1:;
    tmp_source_name_3 = var_a1.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 510;
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 510;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 510;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 510;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_d28cac11cb69aacda04126eb9e8c97c4;
    frame_function->f_lineno = 511;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 511;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 511;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    // Tried code
    tmp_source_name_4 = var_a1.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 512;
        goto try_finally_handler_3;
    }

    tmp_iter_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 512;
        goto try_finally_handler_3;
    }
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 512;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__source_iter.object == NULL );
    tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_11;

    tmp_unpack_5 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_12 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 0 );
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


        frame_function->f_lineno = 512;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__element_1.object == NULL );
    tmp_tuple_unpack_3__element_1.object = tmp_assign_source_12;

    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_13 = UNPACK_PARAMETER_NEXT( tmp_unpack_6, 1 );
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


        frame_function->f_lineno = 512;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__element_2.object == NULL );
    tmp_tuple_unpack_3__element_2.object = tmp_assign_source_13;

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
    tmp_assign_source_14 = tmp_tuple_unpack_3__element_1.object;

    assert( var_m.object == NULL );
    var_m.object = INCREASE_REFCOUNT( tmp_assign_source_14 );

    tmp_assign_source_15 = tmp_tuple_unpack_3__element_2.object;

    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

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

        goto frame_exception_exit_1;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_source_name_5 = var_b1.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 513;
        goto frame_exception_exit_1;
    }

    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 513;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 513;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 513;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_6 = var_b1.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 514;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 514;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_pos_1;
    tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 514;
        goto frame_exception_exit_1;
    }
    assert( var_nrhs.object == NULL );
    var_nrhs.object = tmp_assign_source_16;

    goto branch_end_3;
    branch_no_3:;
    tmp_assign_source_17 = const_int_pos_1;
    assert( var_nrhs.object == NULL );
    var_nrhs.object = INCREASE_REFCOUNT( tmp_assign_source_17 );

    branch_end_3:;
    tmp_compare_left_3 = var_m.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 517;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = var_b1.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 517;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 517;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_2 = const_int_0;
    tmp_compare_right_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 517;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_3 );

        frame_function->f_lineno = 517;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_3 );
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_f31958934525eb33da01f7af7e15b84e;
    frame_function->f_lineno = 518;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 518;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 518;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    // Tried code
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 519;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_5 = const_tuple_str_plain_gelss_tuple;
    tmp_call_arg_element_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_a1.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 519;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_6, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_b1.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 519;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_6, 1, tmp_tuple_element_3 );
    frame_function->f_lineno = 519;
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 519;
        goto try_finally_handler_4;
    }
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 519;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_4__source_iter.object == NULL );
    tmp_tuple_unpack_4__source_iter.object = tmp_assign_source_18;

    tmp_unpack_7 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_19 = UNPACK_PARAMETER_NEXT( tmp_unpack_7, 0 );
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


        frame_function->f_lineno = 519;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_4__element_1.object == NULL );
    tmp_tuple_unpack_4__element_1.object = tmp_assign_source_19;

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

            goto try_finally_handler_4;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_4 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_4;
    }
    tmp_assign_source_20 = tmp_tuple_unpack_4__element_1.object;

    assert( var_gelss.object == NULL );
    var_gelss.object = INCREASE_REFCOUNT( tmp_assign_source_20 );

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
    Py_XDECREF( tmp_tuple_unpack_4__source_iter.object );
    tmp_tuple_unpack_4__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_1.object );
    tmp_tuple_unpack_4__element_1.object = NULL;

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
    tmp_compare_left_4 = var_n.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 520;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = var_m.object;

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 520;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 520;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_8 = var_b1.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 523;
        goto frame_exception_exit_1;
    }

    tmp_len_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    if ( tmp_len_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 523;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_5 = BUILTIN_LEN( tmp_len_arg_3 );
    Py_DECREF( tmp_len_arg_3 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 523;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = const_int_pos_2;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        frame_function->f_lineno = 523;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 524;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_zeros );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 524;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_4 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_n.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 524;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_tuple_element_4, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_nrhs.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249799 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 524;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_tuple_element_4, 1, tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_4 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_10 = var_gelss.object;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249849 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 524;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dtype );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 524;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 524;
    tmp_assign_source_21 = CALL_FUNCTION( tmp_called_4, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 524;
        goto frame_exception_exit_1;
    }
    assert( var_b2.object == NULL );
    var_b2.object = tmp_assign_source_21;

    tmp_ass_subvalue_1 = var_b1.object;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 525;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = var_b2.object;

    tmp_ass_subscript_1 = PyTuple_New( 2 );
    tmp_sliceobj_upper_1 = var_m.object;

    if ( tmp_sliceobj_upper_1 == NULL )
    {
        Py_DECREF( tmp_ass_subscript_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 525;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = MAKE_SLICEOBJ( Py_None, tmp_sliceobj_upper_1, Py_None );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_6 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 525;
        goto frame_exception_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_zeros );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_7 = var_n.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_7 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_source_name_12 = var_gelss.object;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249849 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_dtype );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 527;
    tmp_assign_source_22 = CALL_FUNCTION( tmp_called_5, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }
    assert( var_b2.object == NULL );
    var_b2.object = tmp_assign_source_22;

    tmp_sliceass_value_1 = var_b1.object;

    if ( tmp_sliceass_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 528;
        goto frame_exception_exit_1;
    }

    tmp_sliceass_target_1 = var_b2.object;

    tmp_sliceass_upper_1 = var_m.object;

    if ( tmp_sliceass_upper_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 528;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SLICE( tmp_sliceass_target_1, Py_None, tmp_sliceass_upper_1, tmp_sliceass_value_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 528;
        goto frame_exception_exit_1;
    }
    branch_end_6:;
    tmp_assign_source_23 = var_b2.object;

    if (var_b1.object == NULL)
    {
        var_b1.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
    }
    else
    {
        PyObject *old = var_b1.object;
        var_b1.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
        Py_DECREF( old );
    }
    branch_no_5:;
    // Tried code
    tmp_assign_source_24 = NULL;
    // Tried code
    tmp_assign_source_25 = par_overwrite_a.object;

    if ( tmp_assign_source_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 531;
        goto try_finally_handler_6;
    }

    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_25 );

    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 531;
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
    tmp_assign_source_24 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_assign_source_24 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_24 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain__datacopied );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__datacopied );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244212 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 531;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_7 = var_a1.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 531;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_8 = par_a.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 531;
        goto try_finally_handler_7;
    }

    frame_function->f_lineno = 531;
    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 531;
        goto try_finally_handler_7;
    }
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

    goto finally_end_5;
    finally_end_5:;
    condexpr_end_1:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_5;
    }

    goto finally_end_6;
    finally_end_6:;
    if (par_overwrite_a.object == NULL)
    {
        par_overwrite_a.object = tmp_assign_source_24;
    }
    else
    {
        PyObject *old = par_overwrite_a.object;
        par_overwrite_a.object = tmp_assign_source_24;
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

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
    // Tried code
    tmp_assign_source_26 = NULL;
    // Tried code
    tmp_assign_source_27 = par_overwrite_b.object;

    if ( tmp_assign_source_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244252 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 532;
        goto try_finally_handler_9;
    }

    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_27 );

    tmp_cond_value_3 = tmp_or_2__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 532;
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
    tmp_assign_source_26 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_assign_source_26 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_26 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain__datacopied );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__datacopied );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244212 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 532;
        goto try_finally_handler_10;
    }

    tmp_call_arg_element_9 = var_b1.object;

    if ( tmp_call_arg_element_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 532;
        goto try_finally_handler_10;
    }

    tmp_call_arg_element_10 = par_b.object;

    if ( tmp_call_arg_element_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 532;
        goto try_finally_handler_10;
    }

    frame_function->f_lineno = 532;
    tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 532;
        goto try_finally_handler_10;
    }
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

    goto finally_end_8;
    finally_end_8:;
    condexpr_end_2:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto try_finally_handler_8;
    }

    goto finally_end_9;
    finally_end_9:;
    if (par_overwrite_b.object == NULL)
    {
        par_overwrite_b.object = tmp_assign_source_26;
    }
    else
    {
        PyObject *old = par_overwrite_b.object;
        par_overwrite_b.object = tmp_assign_source_26;
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

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

    goto finally_end_10;
    finally_end_10:;
    tmp_called_8 = var_gelss.object;

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249849 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 535;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_3 = PyTuple_New( 2 );
    tmp_tuple_element_8 = var_a1.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 535;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_b1.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 535;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 1, tmp_tuple_element_8 );
    tmp_call_kw_3 = PyDict_Copy( const_dict_01a7863d0509221cf3231e5ae47a0f98 );
    frame_function->f_lineno = 535;
    tmp_subscr_target_3 = CALL_FUNCTION( tmp_called_8, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 535;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = const_int_pos_4;
    tmp_assign_source_28 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 535;
        goto frame_exception_exit_1;
    }
    assert( var_work.object == NULL );
    var_work.object = tmp_assign_source_28;

    tmp_subscr_target_4 = var_work.object;

    tmp_subscr_subscript_4 = const_int_0;
    tmp_source_name_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_real );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }
    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_astype );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_int );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 536;
    tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }
    assert( var_lwork.object == NULL );
    var_lwork.object = tmp_assign_source_29;

    // Tried code
    tmp_called_10 = var_gelss.object;

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249849 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 537;
        goto try_finally_handler_11;
    }

    tmp_call_pos_4 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_a1.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 538;
        goto try_finally_handler_11;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_b1.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166742 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 538;
        goto try_finally_handler_11;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 1, tmp_tuple_element_9 );
    tmp_call_kw_4 = _PyDict_NewPresized( 4 );
    tmp_dict_value_3 = par_cond.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 191027 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 538;
        goto try_finally_handler_11;
    }

    tmp_dict_key_3 = const_str_plain_cond;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = var_lwork.object;

    tmp_dict_key_4 = const_str_plain_lwork;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_overwrite_a.object;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 538;
        goto try_finally_handler_11;
    }

    tmp_dict_key_5 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = par_overwrite_b.object;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244252 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 539;
        goto try_finally_handler_11;
    }

    tmp_dict_key_6 = const_str_plain_overwrite_b;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 539;
    tmp_iter_arg_5 = CALL_FUNCTION( tmp_called_10, tmp_call_pos_4, tmp_call_kw_4 );
    Py_DECREF( tmp_call_pos_4 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 539;
        goto try_finally_handler_11;
    }
    tmp_assign_source_30 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 537;
        goto try_finally_handler_11;
    }
    assert( tmp_tuple_unpack_5__source_iter.object == NULL );
    tmp_tuple_unpack_5__source_iter.object = tmp_assign_source_30;

    tmp_unpack_8 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_31 = UNPACK_PARAMETER_NEXT( tmp_unpack_8, 0 );
    if ( tmp_assign_source_31 == NULL )
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


        frame_function->f_lineno = 537;
        goto try_finally_handler_11;
    }
    assert( tmp_tuple_unpack_5__element_1.object == NULL );
    tmp_tuple_unpack_5__element_1.object = tmp_assign_source_31;

    tmp_unpack_9 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_32 = UNPACK_PARAMETER_NEXT( tmp_unpack_9, 1 );
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


        frame_function->f_lineno = 537;
        goto try_finally_handler_11;
    }
    assert( tmp_tuple_unpack_5__element_2.object == NULL );
    tmp_tuple_unpack_5__element_2.object = tmp_assign_source_32;

    tmp_unpack_10 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_33 = UNPACK_PARAMETER_NEXT( tmp_unpack_10, 2 );
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


        frame_function->f_lineno = 537;
        goto try_finally_handler_11;
    }
    assert( tmp_tuple_unpack_5__element_3.object == NULL );
    tmp_tuple_unpack_5__element_3.object = tmp_assign_source_33;

    tmp_unpack_11 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_34 = UNPACK_PARAMETER_NEXT( tmp_unpack_11, 3 );
    if ( tmp_assign_source_34 == NULL )
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


        frame_function->f_lineno = 537;
        goto try_finally_handler_11;
    }
    assert( tmp_tuple_unpack_5__element_4.object == NULL );
    tmp_tuple_unpack_5__element_4.object = tmp_assign_source_34;

    tmp_unpack_12 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_35 = UNPACK_PARAMETER_NEXT( tmp_unpack_12, 4 );
    if ( tmp_assign_source_35 == NULL )
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


        frame_function->f_lineno = 537;
        goto try_finally_handler_11;
    }
    assert( tmp_tuple_unpack_5__element_5.object == NULL );
    tmp_tuple_unpack_5__element_5.object = tmp_assign_source_35;

    tmp_unpack_13 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_36 = UNPACK_PARAMETER_NEXT( tmp_unpack_13, 5 );
    if ( tmp_assign_source_36 == NULL )
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


        frame_function->f_lineno = 537;
        goto try_finally_handler_11;
    }
    assert( tmp_tuple_unpack_5__element_6.object == NULL );
    tmp_tuple_unpack_5__element_6.object = tmp_assign_source_36;

    tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_5 ); assert( PyIter_Check( tmp_iterator_name_5 ) );

    tmp_iterator_attempt_5 = (*Py_TYPE( tmp_iterator_name_5 )->tp_iternext)( tmp_iterator_name_5 );

    if (likely( tmp_iterator_attempt_5 == NULL ))
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
        Py_DECREF( tmp_iterator_attempt_5 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 6)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_11;
    }
    tmp_assign_source_37 = tmp_tuple_unpack_5__element_1.object;

    assert( var_v.object == NULL );
    var_v.object = INCREASE_REFCOUNT( tmp_assign_source_37 );

    tmp_assign_source_38 = tmp_tuple_unpack_5__element_2.object;

    assert( var_x.object == NULL );
    var_x.object = INCREASE_REFCOUNT( tmp_assign_source_38 );

    tmp_assign_source_39 = tmp_tuple_unpack_5__element_3.object;

    assert( var_s.object == NULL );
    var_s.object = INCREASE_REFCOUNT( tmp_assign_source_39 );

    tmp_assign_source_40 = tmp_tuple_unpack_5__element_4.object;

    assert( var_rank.object == NULL );
    var_rank.object = INCREASE_REFCOUNT( tmp_assign_source_40 );

    tmp_assign_source_41 = tmp_tuple_unpack_5__element_5.object;

    assert( var_work.object != NULL );
    {
        PyObject *old = var_work.object;
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_41 );
        Py_DECREF( old );
    }

    tmp_assign_source_42 = tmp_tuple_unpack_5__element_6.object;

    assert( var_info.object == NULL );
    var_info.object = INCREASE_REFCOUNT( tmp_assign_source_42 );

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_5__source_iter.object );
    tmp_tuple_unpack_5__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_1.object );
    tmp_tuple_unpack_5__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2.object );
    tmp_tuple_unpack_5__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_3.object );
    tmp_tuple_unpack_5__element_3.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_4.object );
    tmp_tuple_unpack_5__element_4.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_5.object );
    tmp_tuple_unpack_5__element_5.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_6.object );
    tmp_tuple_unpack_5__element_6.object = NULL;

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

    goto finally_end_11;
    finally_end_11:;
    tmp_compare_left_6 = var_info.object;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 541;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = const_int_0;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 541;
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
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_LinAlgError );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183355 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_12 = const_str_digest_21f35a87e538df504d0b1dab18933f90;
    frame_function->f_lineno = 542;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_12 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 542;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_7:;
    tmp_compare_left_7 = var_info.object;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_binop_left_1 = const_str_digest_ef1a1050940d9318e998b471253fda49;
    tmp_unary_arg_1 = var_info.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 545;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 545;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 544;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 544;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    Py_DECREF( tmp_make_exception_arg_3 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 544;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 544;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_8:;
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 546;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_asarray );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 546;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_5 = DEEP_COPY( const_tuple_list_empty_tuple );
    tmp_call_kw_5 = _PyDict_NewPresized( 1 );
    tmp_source_name_17 = var_x.object;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 546;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_dtype );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_call_kw_5 );

        frame_function->f_lineno = 546;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    frame_function->f_lineno = 546;
    tmp_assign_source_43 = CALL_FUNCTION( tmp_called_12, tmp_call_pos_5, tmp_call_kw_5 );
    Py_DECREF( tmp_called_12 );
    Py_DECREF( tmp_call_pos_5 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 546;
        goto frame_exception_exit_1;
    }
    assert( var_resids.object == NULL );
    var_resids.object = tmp_assign_source_43;

    tmp_compare_left_8 = var_n.object;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 547;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_8 = var_m.object;

    if ( tmp_compare_right_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 547;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 547;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_2 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_slice_source_1 = var_x.object;

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 548;
        goto frame_exception_exit_1;
    }

    tmp_slice_upper_1 = var_n.object;

    if ( tmp_slice_upper_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 548;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_44 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 548;
        goto frame_exception_exit_1;
    }
    assert( var_x1.object == NULL );
    var_x1.object = tmp_assign_source_44;

    tmp_compare_left_9 = var_rank.object;

    if ( tmp_compare_left_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13139 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 549;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_9 = var_n.object;

    if ( tmp_compare_right_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 549;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 549;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_sum );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_6 = PyTuple_New( 1 );
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_pos_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_abs );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_pos_6 );

        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }
    tmp_slice_source_2 = var_x.object;

    if ( tmp_slice_source_2 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_pos_6 );
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }

    tmp_slice_lower_1 = var_n.object;

    if ( tmp_slice_lower_1 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_pos_6 );
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_1, Py_None );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_pos_6 );
        Py_DECREF( tmp_called_14 );

        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 550;
    tmp_binop_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_14 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_pos_6 );

        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_2 = const_int_pos_2;
    tmp_tuple_element_10 = POWER_OPERATION( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_pos_6 );

        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_6, 0, tmp_tuple_element_10 );
    tmp_call_kw_6 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
    frame_function->f_lineno = 550;
    tmp_assign_source_45 = CALL_FUNCTION( tmp_called_13, tmp_call_pos_6, tmp_call_kw_6 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_pos_6 );
    Py_DECREF( tmp_call_kw_6 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 550;
        goto frame_exception_exit_1;
    }
    assert( var_resids.object != NULL );
    {
        PyObject *old = var_resids.object;
        var_resids.object = tmp_assign_source_45;
        Py_DECREF( old );
    }

    branch_no_10:;
    tmp_assign_source_46 = var_x1.object;

    if (var_x.object == NULL)
    {
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_46 );
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_46 );
        Py_DECREF( old );
    }
    branch_no_9:;
    tmp_return_value = PyTuple_New( 4 );
    tmp_tuple_element_11 = var_x.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 552;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_resids.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 175000 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 552;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_rank.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13139 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 552;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_s.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 552;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_11 );
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
    if ((var_a1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a1,
            var_a1.object
        );

    }
    if ((var_b1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b1,
            var_b1.object
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
    if ((var_n.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n,
            var_n.object
        );

    }
    if ((var_nrhs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nrhs,
            var_nrhs.object
        );

    }
    if ((var_gelss.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gelss,
            var_gelss.object
        );

    }
    if ((var_b2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b2,
            var_b2.object
        );

    }
    if ((var_work.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_work,
            var_work.object
        );

    }
    if ((var_lwork.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lwork,
            var_lwork.object
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
    if ((var_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            var_x.object
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
    if ((var_rank.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rank,
            var_rank.object
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
    if ((var_resids.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_resids,
            var_resids.object
        );

    }
    if ((var_x1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x1,
            var_x1.object
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
    if ((par_cond.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cond,
            par_cond.object
        );

    }
    if ((par_overwrite_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_overwrite_a,
            par_overwrite_a.object
        );

    }
    if ((par_overwrite_b.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_overwrite_b,
            par_overwrite_b.object
        );

    }
    if ((par_check_finite.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_finite,
            par_check_finite.object
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
static PyObject *fparse_function_7_lstsq_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_cond = NULL;
    PyObject *_python_par_overwrite_a = NULL;
    PyObject *_python_par_overwrite_b = NULL;
    PyObject *_python_par_check_finite = NULL;
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
                PyErr_Format( PyExc_TypeError, "lstsq() keywords must be strings" );
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
            if ( found == false && const_str_plain_cond == key )
            {
                assert( _python_par_cond == NULL );
                _python_par_cond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_overwrite_a == key )
            {
                assert( _python_par_overwrite_a == NULL );
                _python_par_overwrite_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_overwrite_b == key )
            {
                assert( _python_par_overwrite_b == NULL );
                _python_par_overwrite_b = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_check_finite == key )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cond, key ) == 1 )
            {
                assert( _python_par_cond == NULL );
                _python_par_cond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_overwrite_a, key ) == 1 )
            {
                assert( _python_par_overwrite_a == NULL );
                _python_par_overwrite_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_overwrite_b, key ) == 1 )
            {
                assert( _python_par_overwrite_b == NULL );
                _python_par_overwrite_b = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_check_finite, key ) == 1 )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "lstsq() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 0 + self->m_defaults_given >= 6  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
        if ( 1 + self->m_defaults_given >= 6  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_cond != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_cond = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_cond == NULL )
    {
        if ( 2 + self->m_defaults_given >= 6  )
        {
            _python_par_cond = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_overwrite_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_overwrite_a = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_overwrite_a == NULL )
    {
        if ( 3 + self->m_defaults_given >= 6  )
        {
            _python_par_overwrite_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_overwrite_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_overwrite_b = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_overwrite_b == NULL )
    {
        if ( 4 + self->m_defaults_given >= 6  )
        {
            _python_par_overwrite_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_check_finite != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_check_finite = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_check_finite == NULL )
    {
        if ( 5 + self->m_defaults_given >= 6  )
        {
            _python_par_check_finite = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_a == NULL || _python_par_b == NULL || _python_par_cond == NULL || _python_par_overwrite_a == NULL || _python_par_overwrite_b == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_b, _python_par_cond, _python_par_overwrite_a, _python_par_overwrite_b, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7_lstsq_of_module_scipy$linalg$basic( self, _python_par_a, _python_par_b, _python_par_cond, _python_par_overwrite_a, _python_par_overwrite_b, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_cond );
    Py_XDECREF( _python_par_overwrite_a );
    Py_XDECREF( _python_par_overwrite_b );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_7_lstsq_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_7_lstsq_of_module_scipy$linalg$basic( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_lstsq_of_module_scipy$linalg$basic( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_pinv_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_cond, PyObject *_python_par_rcond, PyObject *_python_par_return_rank, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_cond; par_cond.object = _python_par_cond;
    PyObjectLocalVariable par_rcond; par_rcond.object = _python_par_rcond;
    PyObjectLocalVariable par_return_rank; par_return_rank.object = _python_par_return_rank;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_b;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_resids;
    PyObjectLocalVariable var_rank;
    PyObjectLocalVariable var_s;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_1__element_3;
    PyObjectTempVariable tmp_tuple_unpack_1__element_4;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c08e01dda000445267b2e3ff02983972, module_scipy$linalg$basic );
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
    tmp_cond_value_1 = par_check_finite.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243662 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 599;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 599;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 600;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray_chkfinite );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 600;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_a.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 600;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 600;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 600;
        goto frame_exception_exit_1;
    }
    if (par_a.object == NULL)
    {
        par_a.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_a.object;
        par_a.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 602;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 602;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_a.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 602;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 602;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 602;
        goto frame_exception_exit_1;
    }
    if (par_a.object == NULL)
    {
        par_a.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_a.object;
        par_a.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    branch_end_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 603;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_identity );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 603;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_source_name_4 = par_a.object;

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 603;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 603;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_5 = par_a.object;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 603;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 603;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 603;
        goto frame_exception_exit_1;
    }
    assert( var_b.object == NULL );
    var_b.object = tmp_assign_source_3;

    tmp_compare_left_1 = par_rcond.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 174658 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 604;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if (tmp_isnot_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_4 = par_rcond.object;

    if ( tmp_assign_source_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 174658 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 605;
        goto frame_exception_exit_1;
    }

    if (par_cond.object == NULL)
    {
        par_cond.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = par_cond.object;
        par_cond.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    branch_no_2:;
    // Tried code
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_lstsq );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lstsq );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 174876 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 607;
        goto try_finally_handler_1;
    }

    tmp_call_pos_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_a.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_b.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 1, tmp_tuple_element_2 );
    tmp_call_kw_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_2 = par_cond.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 191027 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 607;
        goto try_finally_handler_1;
    }

    tmp_dict_key_2 = const_str_plain_cond;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = Py_False;
    tmp_dict_key_3 = const_str_plain_check_finite;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 607;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_4, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 607;
        goto try_finally_handler_1;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 607;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_5;

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


        frame_function->f_lineno = 607;
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


        frame_function->f_lineno = 607;
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


        frame_function->f_lineno = 607;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_3.object == NULL );
    tmp_tuple_unpack_1__element_3.object = tmp_assign_source_8;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_9 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 3 );
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


        frame_function->f_lineno = 607;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_4.object == NULL );
    tmp_tuple_unpack_1__element_4.object = tmp_assign_source_9;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_1;
    }
    tmp_assign_source_10 = tmp_tuple_unpack_1__element_1.object;

    assert( var_x.object == NULL );
    var_x.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_2.object;

    assert( var_resids.object == NULL );
    var_resids.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_3.object;

    assert( var_rank.object == NULL );
    var_rank.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_4.object;

    assert( var_s.object == NULL );
    var_s.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

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
    tmp_cond_value_2 = par_return_rank.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249900 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 609;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 609;
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
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_x.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 610;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_rank.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13139 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 610;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_return_value = var_x.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 612;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_3:;

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
    if ((var_b.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b,
            var_b.object
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
    if ((var_resids.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_resids,
            var_resids.object
        );

    }
    if ((var_rank.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rank,
            var_rank.object
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
    if ((par_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a,
            par_a.object
        );

    }
    if ((par_cond.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cond,
            par_cond.object
        );

    }
    if ((par_rcond.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rcond,
            par_rcond.object
        );

    }
    if ((par_return_rank.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_return_rank,
            par_return_rank.object
        );

    }
    if ((par_check_finite.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_finite,
            par_check_finite.object
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
static PyObject *fparse_function_8_pinv_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_cond = NULL;
    PyObject *_python_par_rcond = NULL;
    PyObject *_python_par_return_rank = NULL;
    PyObject *_python_par_check_finite = NULL;
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
                PyErr_Format( PyExc_TypeError, "pinv() keywords must be strings" );
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
            if ( found == false && const_str_plain_cond == key )
            {
                assert( _python_par_cond == NULL );
                _python_par_cond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_rcond == key )
            {
                assert( _python_par_rcond == NULL );
                _python_par_rcond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_return_rank == key )
            {
                assert( _python_par_return_rank == NULL );
                _python_par_return_rank = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_check_finite == key )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cond, key ) == 1 )
            {
                assert( _python_par_cond == NULL );
                _python_par_cond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rcond, key ) == 1 )
            {
                assert( _python_par_rcond == NULL );
                _python_par_rcond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_return_rank, key ) == 1 )
            {
                assert( _python_par_return_rank == NULL );
                _python_par_return_rank = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_check_finite, key ) == 1 )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "pinv() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_cond != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_cond = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_cond == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_cond = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_rcond != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_rcond = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_rcond == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_rcond = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_return_rank != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_return_rank = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_return_rank == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_return_rank = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_check_finite != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_check_finite = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_check_finite == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_check_finite = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_a == NULL || _python_par_cond == NULL || _python_par_rcond == NULL || _python_par_return_rank == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_cond, _python_par_rcond, _python_par_return_rank, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8_pinv_of_module_scipy$linalg$basic( self, _python_par_a, _python_par_cond, _python_par_rcond, _python_par_return_rank, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_cond );
    Py_XDECREF( _python_par_rcond );
    Py_XDECREF( _python_par_return_rank );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_8_pinv_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_8_pinv_of_module_scipy$linalg$basic( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_pinv_of_module_scipy$linalg$basic( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_pinv2_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_cond, PyObject *_python_par_rcond, PyObject *_python_par_return_rank, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_cond; par_cond.object = _python_par_cond;
    PyObjectLocalVariable par_rcond; par_rcond.object = _python_par_rcond;
    PyObjectLocalVariable par_return_rank; par_return_rank.object = _python_par_return_rank;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_u;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_vh;
    PyObjectLocalVariable var_t;
    PyObjectLocalVariable var_factor;
    PyObjectLocalVariable var_rank;
    PyObjectLocalVariable var_psigma_diag;
    PyObjectLocalVariable var_B;
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
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_slice_upper_2;
    PyObject *tmp_sliceobj_upper_1;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_59794205c18623ead663e7eff215165f, module_scipy$linalg$basic );
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
    tmp_cond_value_1 = par_check_finite.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243662 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 661;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 661;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 662;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray_chkfinite );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 662;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_a.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 662;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 662;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 662;
        goto frame_exception_exit_1;
    }
    if (par_a.object == NULL)
    {
        par_a.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_a.object;
        par_a.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 664;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 664;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_a.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 664;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 664;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 664;
        goto frame_exception_exit_1;
    }
    if (par_a.object == NULL)
    {
        par_a.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_a.object;
        par_a.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    branch_end_1:;
    // Tried code
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_decomp_svd );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decomp_svd );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249957 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 665;
        goto try_finally_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_svd );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 665;
        goto try_finally_handler_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_7212e28450a00ce19d2eda8b2198a16b );
    frame_function->f_lineno = 665;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 665;
        goto try_finally_handler_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 665;
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


        frame_function->f_lineno = 665;
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


        frame_function->f_lineno = 665;
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


        frame_function->f_lineno = 665;
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

    assert( var_u.object == NULL );
    var_u.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2.object;

    assert( var_s.object == NULL );
    var_s.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_3.object;

    assert( var_vh.object == NULL );
    var_vh.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

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

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_compare_left_1 = par_rcond.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 174658 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 667;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if (tmp_isnot_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_10 = par_rcond.object;

    if ( tmp_assign_source_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 174658 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 668;
        goto frame_exception_exit_1;
    }

    if (par_cond.object == NULL)
    {
        par_cond.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = par_cond.object;
        par_cond.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    branch_no_2:;
    tmp_compare_left_2 = par_cond.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 191027 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 669;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LIST_COPY( const_list_none_int_neg_1_list );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 669;
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
    tmp_source_name_6 = var_u.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129038 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 670;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 670;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_char );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 670;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_lower );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 670;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 670;
    tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 670;
        goto frame_exception_exit_1;
    }
    assert( var_t.object == NULL );
    var_t.object = tmp_assign_source_11;

    tmp_assign_source_12 = PyDict_Copy( const_dict_2687b19d99e2462dfa15c4b5f3e6edf8 );
    assert( var_factor.object == NULL );
    var_factor.object = tmp_assign_source_12;

    tmp_subscr_target_1 = var_factor.object;

    tmp_subscr_subscript_1 = var_t.object;

    tmp_binop_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 672;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 672;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_finfo );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 672;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = var_t.object;

    frame_function->f_lineno = 672;
    tmp_source_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 672;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_eps );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 672;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 672;
        goto frame_exception_exit_1;
    }
    if (par_cond.object == NULL)
    {
        par_cond.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = par_cond.object;
        par_cond.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    branch_no_3:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_sum );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = var_s.object;

    if ( tmp_compexpr_left_1 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_2 = par_cond.object;

    if ( tmp_binop_left_2 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 191027 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_max );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = var_s.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 674;
    tmp_binop_right_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 674;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }
    assert( var_rank.object == NULL );
    var_rank.object = tmp_assign_source_14;

    tmp_binop_left_3 = const_float_1_0;
    tmp_slice_source_1 = var_s.object;

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 675;
        goto frame_exception_exit_1;
    }

    tmp_slice_upper_1 = var_rank.object;

    tmp_binop_right_3 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 675;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 675;
        goto frame_exception_exit_1;
    }
    assert( var_psigma_diag.object == NULL );
    var_psigma_diag.object = tmp_assign_source_15;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 677;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_transpose );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 677;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 677;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_conjugate );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 677;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 677;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_dot );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 677;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_2 = var_u.object;

    if ( tmp_subscr_target_2 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129038 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 677;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_2, 0, tmp_tuple_element_2 );
    tmp_sliceobj_upper_1 = var_rank.object;

    tmp_tuple_element_2 = MAKE_SLICEOBJ( Py_None, tmp_sliceobj_upper_1, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_2, 1, tmp_tuple_element_2 );
    tmp_binop_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_subscript_2 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 677;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_4 = var_psigma_diag.object;

    tmp_call_arg_element_8 = BINARY_OPERATION_MUL( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 677;
        goto frame_exception_exit_1;
    }
    tmp_slice_source_2 = var_vh.object;

    if ( tmp_slice_source_2 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243472 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 678;
        goto frame_exception_exit_1;
    }

    tmp_slice_upper_2 = var_rank.object;

    tmp_call_arg_element_9 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_2 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 678;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 678;
    tmp_call_arg_element_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_10, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 678;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 677;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 677;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 677;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 677;
        goto frame_exception_exit_1;
    }
    assert( var_B.object == NULL );
    var_B.object = tmp_assign_source_16;

    tmp_cond_value_2 = par_return_rank.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249900 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 680;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 680;
        goto frame_exception_exit_1;
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
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_B.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_rank.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_return_value = var_B.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_4:;

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
    if ((var_u.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_u,
            var_u.object
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
    if ((var_vh.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vh,
            var_vh.object
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
    if ((var_factor.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_factor,
            var_factor.object
        );

    }
    if ((var_rank.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rank,
            var_rank.object
        );

    }
    if ((var_psigma_diag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_psigma_diag,
            var_psigma_diag.object
        );

    }
    if ((var_B.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_B,
            var_B.object
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
    if ((par_cond.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cond,
            par_cond.object
        );

    }
    if ((par_rcond.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rcond,
            par_rcond.object
        );

    }
    if ((par_return_rank.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_return_rank,
            par_return_rank.object
        );

    }
    if ((par_check_finite.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_finite,
            par_check_finite.object
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
static PyObject *fparse_function_9_pinv2_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_cond = NULL;
    PyObject *_python_par_rcond = NULL;
    PyObject *_python_par_return_rank = NULL;
    PyObject *_python_par_check_finite = NULL;
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
                PyErr_Format( PyExc_TypeError, "pinv2() keywords must be strings" );
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
            if ( found == false && const_str_plain_cond == key )
            {
                assert( _python_par_cond == NULL );
                _python_par_cond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_rcond == key )
            {
                assert( _python_par_rcond == NULL );
                _python_par_rcond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_return_rank == key )
            {
                assert( _python_par_return_rank == NULL );
                _python_par_return_rank = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_check_finite == key )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cond, key ) == 1 )
            {
                assert( _python_par_cond == NULL );
                _python_par_cond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rcond, key ) == 1 )
            {
                assert( _python_par_rcond == NULL );
                _python_par_rcond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_return_rank, key ) == 1 )
            {
                assert( _python_par_return_rank == NULL );
                _python_par_return_rank = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_check_finite, key ) == 1 )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "pinv2() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_cond != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_cond = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_cond == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_cond = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_rcond != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_rcond = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_rcond == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_rcond = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_return_rank != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_return_rank = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_return_rank == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_return_rank = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_check_finite != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_check_finite = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_check_finite == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_check_finite = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_a == NULL || _python_par_cond == NULL || _python_par_rcond == NULL || _python_par_return_rank == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_cond, _python_par_rcond, _python_par_return_rank, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_9_pinv2_of_module_scipy$linalg$basic( self, _python_par_a, _python_par_cond, _python_par_rcond, _python_par_return_rank, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_cond );
    Py_XDECREF( _python_par_rcond );
    Py_XDECREF( _python_par_return_rank );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_9_pinv2_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_9_pinv2_of_module_scipy$linalg$basic( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_pinv2_of_module_scipy$linalg$basic( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_pinvh_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_cond, PyObject *_python_par_rcond, PyObject *_python_par_lower, PyObject *_python_par_return_rank, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_cond; par_cond.object = _python_par_cond;
    PyObjectLocalVariable par_rcond; par_rcond.object = _python_par_rcond;
    PyObjectLocalVariable par_lower; par_lower.object = _python_par_lower;
    PyObjectLocalVariable par_return_rank; par_return_rank.object = _python_par_return_rank;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_u;
    PyObjectLocalVariable var_t;
    PyObjectLocalVariable var_factor;
    PyObjectLocalVariable var_above_cutoff;
    PyObjectLocalVariable var_psigma_diag;
    PyObjectLocalVariable var_B;
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
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_len_arg_1;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2a106aee5a1890f007f60b89263936a3, module_scipy$linalg$basic );
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
    tmp_cond_value_1 = par_check_finite.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243662 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 739;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 739;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 740;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray_chkfinite );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 740;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_a.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 740;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 740;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 740;
        goto frame_exception_exit_1;
    }
    if (par_a.object == NULL)
    {
        par_a.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_a.object;
        par_a.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 742;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 742;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_a.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 742;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 742;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 742;
        goto frame_exception_exit_1;
    }
    if (par_a.object == NULL)
    {
        par_a.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_a.object;
        par_a.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    branch_end_1:;
    // Tried code
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_decomp );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decomp );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249996 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 743;
        goto try_finally_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_eigh );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 743;
        goto try_finally_handler_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_lower.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 225972 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 743;
        goto try_finally_handler_1;
    }

    tmp_dict_key_1 = const_str_plain_lower;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = Py_False;
    tmp_dict_key_2 = const_str_plain_check_finite;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 743;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 743;
        goto try_finally_handler_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 743;
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


        frame_function->f_lineno = 743;
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


        frame_function->f_lineno = 743;
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

    assert( var_u.object == NULL );
    var_u.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

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
    tmp_compare_left_1 = par_rcond.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 174658 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 745;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if (tmp_isnot_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_8 = par_rcond.object;

    if ( tmp_assign_source_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 174658 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 746;
        goto frame_exception_exit_1;
    }

    if (par_cond.object == NULL)
    {
        par_cond.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = par_cond.object;
        par_cond.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    branch_no_2:;
    tmp_compare_left_2 = par_cond.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 191027 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 747;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LIST_COPY( const_list_none_int_neg_1_list );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 747;
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
    tmp_source_name_6 = var_u.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129038 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 748;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 748;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_char );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 748;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_lower );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 748;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 748;
    tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 748;
        goto frame_exception_exit_1;
    }
    assert( var_t.object == NULL );
    var_t.object = tmp_assign_source_9;

    tmp_assign_source_10 = PyDict_Copy( const_dict_2687b19d99e2462dfa15c4b5f3e6edf8 );
    assert( var_factor.object == NULL );
    var_factor.object = tmp_assign_source_10;

    tmp_subscr_target_1 = var_factor.object;

    tmp_subscr_subscript_1 = var_t.object;

    tmp_binop_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 750;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 750;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_finfo );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 750;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = var_t.object;

    frame_function->f_lineno = 750;
    tmp_source_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 750;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_eps );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 750;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 750;
        goto frame_exception_exit_1;
    }
    if (par_cond.object == NULL)
    {
        par_cond.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = par_cond.object;
        par_cond.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    branch_no_3:;
    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 753;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = var_s.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 753;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 753;
    tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_4 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 753;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = par_cond.object;

    if ( tmp_binop_left_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 191027 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 753;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 753;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_max );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        frame_function->f_lineno = 753;
        goto frame_exception_exit_1;
    }
    tmp_called_8 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 753;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = var_s.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 753;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 753;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_6 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 753;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 753;
    tmp_binop_right_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        frame_function->f_lineno = 753;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        frame_function->f_lineno = 753;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 753;
        goto frame_exception_exit_1;
    }
    assert( var_above_cutoff.object == NULL );
    var_above_cutoff.object = tmp_assign_source_12;

    tmp_binop_left_3 = const_float_1_0;
    tmp_subscr_target_2 = var_s.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 754;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = var_above_cutoff.object;

    tmp_binop_right_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 754;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 754;
        goto frame_exception_exit_1;
    }
    assert( var_psigma_diag.object == NULL );
    var_psigma_diag.object = tmp_assign_source_13;

    tmp_subscr_target_3 = var_u.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129038 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 755;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_3 = PyTuple_New( 2 );
    tmp_tuple_element_2 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_3, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_above_cutoff.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_3, 1, tmp_tuple_element_2 );
    tmp_assign_source_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_subscript_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 755;
        goto frame_exception_exit_1;
    }
    if (var_u.object == NULL)
    {
        var_u.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = var_u.object;
        var_u.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 757;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dot );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 757;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_4 = var_u.object;

    tmp_binop_right_4 = var_psigma_diag.object;

    tmp_call_arg_element_7 = BINARY_OPERATION_MUL( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 757;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 757;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_conjugate );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 757;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = var_u.object;

    frame_function->f_lineno = 757;
    tmp_source_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 757;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_T );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 757;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 757;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_9, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 757;
        goto frame_exception_exit_1;
    }
    assert( var_B.object == NULL );
    var_B.object = tmp_assign_source_15;

    tmp_cond_value_2 = par_return_rank.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 249900 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 759;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 759;
        goto frame_exception_exit_1;
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
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_B.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_len_arg_1 = var_psigma_diag.object;

    tmp_tuple_element_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 760;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_return_value = var_B.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_4:;

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
    if ((var_s.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_s,
            var_s.object
        );

    }
    if ((var_u.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_u,
            var_u.object
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
    if ((var_factor.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_factor,
            var_factor.object
        );

    }
    if ((var_above_cutoff.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_above_cutoff,
            var_above_cutoff.object
        );

    }
    if ((var_psigma_diag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_psigma_diag,
            var_psigma_diag.object
        );

    }
    if ((var_B.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_B,
            var_B.object
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
    if ((par_cond.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cond,
            par_cond.object
        );

    }
    if ((par_rcond.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rcond,
            par_rcond.object
        );

    }
    if ((par_lower.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lower,
            par_lower.object
        );

    }
    if ((par_return_rank.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_return_rank,
            par_return_rank.object
        );

    }
    if ((par_check_finite.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_check_finite,
            par_check_finite.object
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
static PyObject *fparse_function_10_pinvh_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_cond = NULL;
    PyObject *_python_par_rcond = NULL;
    PyObject *_python_par_lower = NULL;
    PyObject *_python_par_return_rank = NULL;
    PyObject *_python_par_check_finite = NULL;
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
                PyErr_Format( PyExc_TypeError, "pinvh() keywords must be strings" );
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
            if ( found == false && const_str_plain_cond == key )
            {
                assert( _python_par_cond == NULL );
                _python_par_cond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_rcond == key )
            {
                assert( _python_par_rcond == NULL );
                _python_par_rcond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_lower == key )
            {
                assert( _python_par_lower == NULL );
                _python_par_lower = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_return_rank == key )
            {
                assert( _python_par_return_rank == NULL );
                _python_par_return_rank = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_check_finite == key )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cond, key ) == 1 )
            {
                assert( _python_par_cond == NULL );
                _python_par_cond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rcond, key ) == 1 )
            {
                assert( _python_par_rcond == NULL );
                _python_par_rcond = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_lower, key ) == 1 )
            {
                assert( _python_par_lower == NULL );
                _python_par_lower = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_return_rank, key ) == 1 )
            {
                assert( _python_par_return_rank == NULL );
                _python_par_return_rank = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_check_finite, key ) == 1 )
            {
                assert( _python_par_check_finite == NULL );
                _python_par_check_finite = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "pinvh() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 0 + self->m_defaults_given >= 6  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_cond != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_cond = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_cond == NULL )
    {
        if ( 1 + self->m_defaults_given >= 6  )
        {
            _python_par_cond = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_rcond != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_rcond = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_rcond == NULL )
    {
        if ( 2 + self->m_defaults_given >= 6  )
        {
            _python_par_rcond = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_lower != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_lower = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_lower == NULL )
    {
        if ( 3 + self->m_defaults_given >= 6  )
        {
            _python_par_lower = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_return_rank != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_return_rank = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_return_rank == NULL )
    {
        if ( 4 + self->m_defaults_given >= 6  )
        {
            _python_par_return_rank = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_check_finite != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_check_finite = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_check_finite == NULL )
    {
        if ( 5 + self->m_defaults_given >= 6  )
        {
            _python_par_check_finite = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_a == NULL || _python_par_cond == NULL || _python_par_rcond == NULL || _python_par_lower == NULL || _python_par_return_rank == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_cond, _python_par_rcond, _python_par_lower, _python_par_return_rank, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_10_pinvh_of_module_scipy$linalg$basic( self, _python_par_a, _python_par_cond, _python_par_rcond, _python_par_lower, _python_par_return_rank, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_cond );
    Py_XDECREF( _python_par_rcond );
    Py_XDECREF( _python_par_lower );
    Py_XDECREF( _python_par_return_rank );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_10_pinvh_of_module_scipy$linalg$basic( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_10_pinvh_of_module_scipy$linalg$basic( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_pinvh_of_module_scipy$linalg$basic( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_pinvh_of_module_scipy$linalg$basic( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_pinvh_of_module_scipy$linalg$basic,
        dparse_function_10_pinvh_of_module_scipy$linalg$basic,
        const_str_plain_pinvh,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1ccb2ac85a72ed053193faa1abbe9e2f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$basic,
        const_str_digest_96342b148e44183f9e27c358016e8b3d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_solve_of_module_scipy$linalg$basic( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_solve_of_module_scipy$linalg$basic,
        dparse_function_1_solve_of_module_scipy$linalg$basic,
        const_str_plain_solve,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4bc779e010a48e78a9e0b87e58a7b34b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$basic,
        const_str_digest_ab5b866e5de8083e0d3ec852b190906d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_solve_triangular_of_module_scipy$linalg$basic( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_solve_triangular_of_module_scipy$linalg$basic,
        dparse_function_2_solve_triangular_of_module_scipy$linalg$basic,
        const_str_plain_solve_triangular,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_48fe6edd3ff2accf99b8a2dd74db81ea,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$basic,
        const_str_digest_13f7b9415bb74fc804ba75c70f5dd43b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_solve_banded_of_module_scipy$linalg$basic( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_solve_banded_of_module_scipy$linalg$basic,
        dparse_function_3_solve_banded_of_module_scipy$linalg$basic,
        const_str_plain_solve_banded,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a3fc041fde1970a492945d3b14f357e4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$basic,
        const_str_digest_2895a4d0552bd4929fa3b36d8b57284a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_solveh_banded_of_module_scipy$linalg$basic( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_solveh_banded_of_module_scipy$linalg$basic,
        dparse_function_4_solveh_banded_of_module_scipy$linalg$basic,
        const_str_plain_solveh_banded,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7d502cb382d26297f05c5be930591929,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$basic,
        const_str_digest_af384fbd15036006d2f8d30df8e31dad
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_inv_of_module_scipy$linalg$basic( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_inv_of_module_scipy$linalg$basic,
        dparse_function_5_inv_of_module_scipy$linalg$basic,
        const_str_plain_inv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4c624cef2391c2de040d4b41491a01ce,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$basic,
        const_str_digest_9dab9d37cec9c83462e19480e61ab44c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_det_of_module_scipy$linalg$basic( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_det_of_module_scipy$linalg$basic,
        dparse_function_6_det_of_module_scipy$linalg$basic,
        const_str_plain_det,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_13b0b78248a1fc782000f84e021fb73c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$basic,
        const_str_digest_952e6ad03f7d60483895ead0dd2d6415
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_lstsq_of_module_scipy$linalg$basic( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_lstsq_of_module_scipy$linalg$basic,
        dparse_function_7_lstsq_of_module_scipy$linalg$basic,
        const_str_plain_lstsq,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bbdcb7fb91529ca6573cfc13d1b12449,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$basic,
        const_str_digest_b077007cebbf93f92bcb50c20941ccd9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_pinv_of_module_scipy$linalg$basic( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_pinv_of_module_scipy$linalg$basic,
        dparse_function_8_pinv_of_module_scipy$linalg$basic,
        const_str_plain_pinv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_49319e51266e27772b1ae8866c894a1c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$basic,
        const_str_digest_32b21685c72b26bab9d8e3b48806bba5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_pinv2_of_module_scipy$linalg$basic( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_pinv2_of_module_scipy$linalg$basic,
        dparse_function_9_pinv2_of_module_scipy$linalg$basic,
        const_str_plain_pinv2,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_db2b0bc39d00fe633d551bd41d9e7e7e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$basic,
        const_str_digest_2db952b835af6038832b01cfd0157e71
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$linalg$basic =
{
    PyModuleDef_HEAD_INIT,
    "scipy.linalg.basic",   /* m_name */
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

MOD_INIT_DECL( scipy$linalg$basic )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$linalg$basic );
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

    // puts( "in initscipy$linalg$basic" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$linalg$basic = Py_InitModule4(
        "scipy.linalg.basic",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$linalg$basic = PyModule_Create( &mdef_scipy$linalg$basic );
#endif

    moduledict_scipy$linalg$basic = (PyDictObject *)((PyModuleObject *)module_scipy$linalg$basic)->md_dict;

    assertObject( module_scipy$linalg$basic );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_918d0d83ae3f9e81ba561b5bc610327f, module_scipy$linalg$basic );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$linalg$basic );

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
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
    PyObject *tmp_defaults_9;
    PyObject *tmp_defaults_10;
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
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c7bd9c6fd44990228ea5d54a061ed871;
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_d5d93941c4bf2e6834ee4c786fe5d056, module_scipy$linalg$basic );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$linalg$basic)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
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
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$linalg$basic)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$linalg$basic)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_2618e03ffabe4a42404baaa4efad352a_list );
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$linalg$basic)->md_dict;
    frame_module->f_lineno = 12;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$linalg$basic)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_flinalg, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_get_flinalg_funcs_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_get_flinalg_funcs );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_get_flinalg_funcs, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$linalg$basic)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_lapack, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_get_lapack_funcs_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_get_lapack_funcs );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$linalg$basic)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_LinAlgError_str_plain__datacopied_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_LinAlgError );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_LinAlgError, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$linalg$basic)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_LinAlgError_str_plain__datacopied_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain__datacopied );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain__datacopied, tmp_assign_source_11 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$linalg$basic)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_9e37f9ab918a6f6404b8dec5a4bda862, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_calc_lwork_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_calc_lwork );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_calc_lwork, tmp_assign_source_12 );
    tmp_import_globals_10 = ((PyModuleObject *)module_scipy$linalg$basic)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_empty, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_decomp_str_plain_decomp_svd_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_decomp );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_decomp, tmp_assign_source_13 );
    tmp_import_globals_11 = ((PyModuleObject *)module_scipy$linalg$basic)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_empty, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_decomp_str_plain_decomp_svd_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_decomp_svd );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_decomp_svd, tmp_assign_source_14 );
    tmp_defaults_1 = const_tuple_false_false_false_false_false_true_tuple;
    tmp_assign_source_15 = MAKE_FUNCTION_function_1_solve_of_module_scipy$linalg$basic( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_15 );

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_solve, tmp_assign_source_15 );
    tmp_defaults_2 = const_tuple_int_0_false_false_false_false_true_tuple;
    tmp_assign_source_16 = MAKE_FUNCTION_function_2_solve_triangular_of_module_scipy$linalg$basic( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );

        frame_module->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_solve_triangular, tmp_assign_source_16 );
    tmp_defaults_3 = const_tuple_false_false_false_true_tuple;
    tmp_assign_source_17 = MAKE_FUNCTION_function_3_solve_banded_of_module_scipy$linalg$basic( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_17 );

        frame_module->f_lineno = 178;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_solve_banded, tmp_assign_source_17 );
    tmp_defaults_4 = const_tuple_false_false_false_true_tuple;
    tmp_assign_source_18 = MAKE_FUNCTION_function_4_solveh_banded_of_module_scipy$linalg$basic( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        frame_module->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_solveh_banded, tmp_assign_source_18 );
    tmp_defaults_5 = const_tuple_false_true_tuple;
    tmp_assign_source_19 = MAKE_FUNCTION_function_5_inv_of_module_scipy$linalg$basic( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_19 );

        frame_module->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_inv, tmp_assign_source_19 );
    tmp_defaults_6 = const_tuple_false_true_tuple;
    tmp_assign_source_20 = MAKE_FUNCTION_function_6_det_of_module_scipy$linalg$basic( INCREASE_REFCOUNT( tmp_defaults_6 ) );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_20 );

        frame_module->f_lineno = 392;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_det, tmp_assign_source_20 );
    tmp_defaults_7 = const_tuple_none_false_false_true_tuple;
    tmp_assign_source_21 = MAKE_FUNCTION_function_7_lstsq_of_module_scipy$linalg$basic( INCREASE_REFCOUNT( tmp_defaults_7 ) );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_21 );

        frame_module->f_lineno = 454;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_lstsq, tmp_assign_source_21 );
    tmp_defaults_8 = const_tuple_none_none_false_true_tuple;
    tmp_assign_source_22 = MAKE_FUNCTION_function_8_pinv_of_module_scipy$linalg$basic( INCREASE_REFCOUNT( tmp_defaults_8 ) );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        frame_module->f_lineno = 555;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_pinv, tmp_assign_source_22 );
    tmp_defaults_9 = const_tuple_none_none_false_true_tuple;
    tmp_assign_source_23 = MAKE_FUNCTION_function_9_pinv2_of_module_scipy$linalg$basic( INCREASE_REFCOUNT( tmp_defaults_9 ) );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_23 );

        frame_module->f_lineno = 615;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_pinv2, tmp_assign_source_23 );
    tmp_defaults_10 = const_tuple_none_none_true_false_true_tuple;
    tmp_assign_source_24 = MAKE_FUNCTION_function_10_pinvh_of_module_scipy$linalg$basic( INCREASE_REFCOUNT( tmp_defaults_10 ) );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        frame_module->f_lineno = 686;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$basic, (Nuitka_StringObject *)const_str_plain_pinvh, tmp_assign_source_24 );

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

    return MOD_RETURN_VALUE( module_scipy$linalg$basic );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
