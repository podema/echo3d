// Generated code for Python source for module 'scipy.linalg.decomp_qr'
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

// The _module_scipy$linalg$decomp_qr is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$linalg$decomp_qr;
PyDictObject *moduledict_scipy$linalg$decomp_qr;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_neg_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_F;
extern PyObject *const_str_plain_L;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_Q;
extern PyObject *const_str_plain_R;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_t;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_Rj;
extern PyObject *const_str_plain_a1;
static PyObject *const_str_plain_cQ;
extern PyObject *const_str_plain_cc;
static PyObject *const_str_plain_lr;
extern PyObject *const_str_plain_qr;
extern PyObject *const_str_plain_rq;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_plain_qqr;
extern PyObject *const_str_plain_raw;
extern PyObject *const_str_plain_ret;
static PyObject *const_str_plain_rq1;
extern PyObject *const_str_plain_tau;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_blas;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_full;
extern PyObject *const_str_plain_info;
static PyObject *const_str_plain_jpvt;
extern PyObject *const_str_plain_left;
extern PyObject *const_str_plain_misc;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_triu;
extern PyObject *const_str_plain_work;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_flags;
static PyObject *const_str_plain_geqp3;
static PyObject *const_str_plain_geqrf;
static PyObject *const_str_plain_gerqf;
extern PyObject *const_str_plain_lwork;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_order;
static PyObject *const_str_plain_orgqr;
static PyObject *const_str_plain_orgrq;
static PyObject *const_str_plain_ormqr;
extern PyObject *const_str_plain_ravel;
extern PyObject *const_str_plain_right;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_trans;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_lapack;
static PyObject *const_str_plain_onedim;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_economic;
static PyObject *const_str_plain_pivoting;
static PyObject *const_str_plain_safecall;
extern PyObject *const_str_plain_typecode;
extern PyObject *const_str_plain_conjugate;
extern PyObject *const_str_plain_decomp_qr;
extern PyObject *const_str_plain___future__;
static PyObject *const_str_plain_gor_un_gqr;
static PyObject *const_str_plain_gor_un_grq;
static PyObject *const_str_plain_gor_un_mqr;
extern PyObject *const_str_plain__datacopied;
extern PyObject *const_str_plain_overwrite_a;
static PyObject *const_str_plain_overwrite_c;
static PyObject *const_str_plain_qr_multiply;
extern PyObject *const_str_plain_C_CONTIGUOUS;
extern PyObject *const_str_plain_check_finite;
extern PyObject *const_str_plain_get_blas_funcs;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_get_lapack_funcs;
extern PyObject *const_str_plain_asarray_chkfinite;
static PyObject *const_tuple_str_plain_geqp3_tuple;
static PyObject *const_tuple_str_plain_geqrf_tuple;
static PyObject *const_tuple_str_plain_gerqf_tuple;
static PyObject *const_tuple_str_plain_orgqr_tuple;
static PyObject *const_tuple_str_plain_orgrq_tuple;
static PyObject *const_tuple_str_plain_ormqr_tuple;
extern PyObject *const_tuple_str_plain__datacopied_tuple;
static PyObject *const_tuple_str_plain_s_str_plain_d_tuple;
extern PyObject *const_tuple_str_plain_get_blas_funcs_tuple;
static PyObject *const_dict_9edb306c9f9c5c2d096ac013fc19025b;
extern PyObject *const_tuple_str_plain_get_lapack_funcs_tuple;
static PyObject *const_list_str_plain_left_str_plain_right_list;
static PyObject *const_list_e5fdc0227982eb0ea248a5354e73df21_list;
static PyObject *const_list_str_plain_economic_str_plain_raw_list;
static PyObject *const_tuple_false_none_str_plain_full_true_tuple;
static PyObject *const_str_digest_236b3b68034156912ec77de804858172;
static PyObject *const_str_digest_35a28a3e26741bbae3c94fc303fc66d2;
static PyObject *const_str_digest_5031f6bae0891bfe27089aa0e8c2b2ad;
static PyObject *const_str_digest_65b7827232be01e770a0a911e39a1399;
static PyObject *const_str_digest_6f7c40aefa92e3ab305031532bb6c7bf;
static PyObject *const_str_digest_7ebeb96e52e66a25e7d57e0716089e44;
static PyObject *const_str_digest_80cebe757e074d1948b34cda8bab066a;
extern PyObject *const_str_digest_964c113c6f30094ebbf13b0ba86c9a94;
static PyObject *const_str_digest_a0cc2c732744aac6385401ecdf011525;
static PyObject *const_str_digest_bb8b1cc1a54727d351339f79a000eca8;
static PyObject *const_str_digest_c77ee52d32dd56770fb038500a2fd35a;
static PyObject *const_str_digest_cce057dde722c2a02559a74b52c5ab78;
extern PyObject *const_str_digest_d28cac11cb69aacda04126eb9e8c97c4;
static PyObject *const_str_digest_d2de24f09047549fe9b37ebdc84240ff;
static PyObject *const_str_digest_d302b0d134c951e126b20176f2859215;
static PyObject *const_str_digest_d67d04dd5b60802d235db1cb4dd36b81;
static PyObject *const_str_digest_e99401cdba8ae1f116aadb9b45a47a89;
static PyObject *const_str_digest_f96264aacbf3f6666a71aa6c9649e869;
static PyObject *const_tuple_16f56e1a04a9e9a4bf95a9aca319eace_tuple;
static PyObject *const_tuple_3de6b1100f1117fb796b8b14406cc5a4_tuple;
static PyObject *const_tuple_48241020ae4cbe060ba7d7bbfe238b6f_tuple;
static PyObject *const_tuple_6030b2ba635332187d2e05310160e909_tuple;
static PyObject *const_tuple_6704499237045ba19c18494e9ad9e4e0_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_c355795e317383b3eff39f7634e59207_tuple;
static PyObject *const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple;
static PyObject *const_tuple_false_none_str_plain_full_false_true_tuple;
static PyObject *const_tuple_str_plain_right_false_false_false_false_tuple;
static PyObject *const_list_str_plain_full_str_plain_r_str_plain_economic_list;
static PyObject *const_list_str_plain_qr_str_plain_qr_multiply_str_plain_rq_list;
static PyObject *const_tuple_str_plain_f_str_plain_name_str_plain_args_str_plain_kwargs_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_Rj = UNSTREAM_STRING( &constant_bin[ 254358 ], 2, 1 );
    const_str_plain_cQ = UNSTREAM_STRING( &constant_bin[ 254653 ], 2, 1 );
    const_str_plain_lr = UNSTREAM_STRING( &constant_bin[ 178202 ], 2, 1 );
    const_str_plain_qqr = UNSTREAM_STRING( &constant_bin[ 2235264 ], 3, 1 );
    const_str_plain_rq1 = UNSTREAM_STRING( &constant_bin[ 254908 ], 3, 1 );
    const_str_plain_jpvt = UNSTREAM_STRING( &constant_bin[ 254106 ], 4, 1 );
    const_str_plain_geqp3 = UNSTREAM_STRING( &constant_bin[ 254055 ], 5, 1 );
    const_str_plain_geqrf = UNSTREAM_STRING( &constant_bin[ 254156 ], 5, 1 );
    const_str_plain_gerqf = UNSTREAM_STRING( &constant_bin[ 254753 ], 5, 1 );
    const_str_plain_orgqr = UNSTREAM_STRING( &constant_bin[ 978948 ], 5, 1 );
    const_str_plain_orgrq = UNSTREAM_STRING( &constant_bin[ 978960 ], 5, 1 );
    const_str_plain_ormqr = UNSTREAM_STRING( &constant_bin[ 979022 ], 5, 1 );
    const_str_plain_onedim = UNSTREAM_STRING( &constant_bin[ 254701 ], 6, 1 );
    const_str_plain_pivoting = UNSTREAM_STRING( &constant_bin[ 253964 ], 8, 1 );
    const_str_plain_safecall = UNSTREAM_STRING( &constant_bin[ 254015 ], 8, 1 );
    const_str_plain_gor_un_gqr = UNSTREAM_STRING( &constant_bin[ 254255 ], 10, 1 );
    const_str_plain_gor_un_grq = UNSTREAM_STRING( &constant_bin[ 254852 ], 10, 1 );
    const_str_plain_gor_un_mqr = UNSTREAM_STRING( &constant_bin[ 254494 ], 10, 1 );
    const_str_plain_overwrite_c = UNSTREAM_STRING( &constant_bin[ 254406 ], 11, 1 );
    const_str_plain_qr_multiply = UNSTREAM_STRING( &constant_bin[ 2153824 ], 11, 1 );
    const_tuple_str_plain_geqp3_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_geqp3_tuple, 0, const_str_plain_geqp3 ); Py_INCREF( const_str_plain_geqp3 );
    const_tuple_str_plain_geqrf_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_geqrf_tuple, 0, const_str_plain_geqrf ); Py_INCREF( const_str_plain_geqrf );
    const_tuple_str_plain_gerqf_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_gerqf_tuple, 0, const_str_plain_gerqf ); Py_INCREF( const_str_plain_gerqf );
    const_tuple_str_plain_orgqr_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_orgqr_tuple, 0, const_str_plain_orgqr ); Py_INCREF( const_str_plain_orgqr );
    const_tuple_str_plain_orgrq_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_orgrq_tuple, 0, const_str_plain_orgrq ); Py_INCREF( const_str_plain_orgrq );
    const_tuple_str_plain_ormqr_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ormqr_tuple, 0, const_str_plain_ormqr ); Py_INCREF( const_str_plain_ormqr );
    const_tuple_str_plain_s_str_plain_d_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_d_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_d_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_dict_9edb306c9f9c5c2d096ac013fc19025b = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_9edb306c9f9c5c2d096ac013fc19025b, const_str_plain_overwrite_a, const_int_pos_1 );
    PyDict_SetItem( const_dict_9edb306c9f9c5c2d096ac013fc19025b, const_str_plain_lwork, const_int_neg_1 );
    const_list_str_plain_left_str_plain_right_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_left_str_plain_right_list, 0, const_str_plain_left ); Py_INCREF( const_str_plain_left );
    PyList_SET_ITEM( const_list_str_plain_left_str_plain_right_list, 1, const_str_plain_right ); Py_INCREF( const_str_plain_right );
    const_list_e5fdc0227982eb0ea248a5354e73df21_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_e5fdc0227982eb0ea248a5354e73df21_list, 0, const_str_plain_full ); Py_INCREF( const_str_plain_full );
    PyList_SET_ITEM( const_list_e5fdc0227982eb0ea248a5354e73df21_list, 1, const_str_plain_qr ); Py_INCREF( const_str_plain_qr );
    PyList_SET_ITEM( const_list_e5fdc0227982eb0ea248a5354e73df21_list, 2, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyList_SET_ITEM( const_list_e5fdc0227982eb0ea248a5354e73df21_list, 3, const_str_plain_economic ); Py_INCREF( const_str_plain_economic );
    PyList_SET_ITEM( const_list_e5fdc0227982eb0ea248a5354e73df21_list, 4, const_str_plain_raw ); Py_INCREF( const_str_plain_raw );
    const_list_str_plain_economic_str_plain_raw_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_economic_str_plain_raw_list, 0, const_str_plain_economic ); Py_INCREF( const_str_plain_economic );
    PyList_SET_ITEM( const_list_str_plain_economic_str_plain_raw_list, 1, const_str_plain_raw ); Py_INCREF( const_str_plain_raw );
    const_tuple_false_none_str_plain_full_true_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_false_none_str_plain_full_true_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_str_plain_full_true_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_str_plain_full_true_tuple, 2, const_str_plain_full ); Py_INCREF( const_str_plain_full );
    PyTuple_SET_ITEM( const_tuple_false_none_str_plain_full_true_tuple, 3, Py_True ); Py_INCREF( Py_True );
    const_str_digest_236b3b68034156912ec77de804858172 = UNSTREAM_STRING( &constant_bin[ 2235267 ], 2883, 0 );
    const_str_digest_35a28a3e26741bbae3c94fc303fc66d2 = UNSTREAM_STRING( &constant_bin[ 2238150 ], 63, 0 );
    const_str_digest_5031f6bae0891bfe27089aa0e8c2b2ad = UNSTREAM_STRING( &constant_bin[ 2238213 ], 1635, 0 );
    const_str_digest_65b7827232be01e770a0a911e39a1399 = UNSTREAM_STRING( &constant_bin[ 2239848 ], 58, 0 );
    const_str_digest_6f7c40aefa92e3ab305031532bb6c7bf = UNSTREAM_STRING( &constant_bin[ 2239906 ], 91, 0 );
    const_str_digest_7ebeb96e52e66a25e7d57e0716089e44 = UNSTREAM_STRING( &constant_bin[ 2239997 ], 49, 0 );
    const_str_digest_80cebe757e074d1948b34cda8bab066a = UNSTREAM_STRING( &constant_bin[ 2240046 ], 23, 0 );
    const_str_digest_a0cc2c732744aac6385401ecdf011525 = UNSTREAM_STRING( &constant_bin[ 2240069 ], 13, 0 );
    const_str_digest_bb8b1cc1a54727d351339f79a000eca8 = UNSTREAM_STRING( &constant_bin[ 2240082 ], 48, 0 );
    const_str_digest_c77ee52d32dd56770fb038500a2fd35a = UNSTREAM_STRING( &constant_bin[ 2240130 ], 13, 0 );
    const_str_digest_cce057dde722c2a02559a74b52c5ab78 = UNSTREAM_STRING( &constant_bin[ 2240143 ], 1907, 0 );
    const_str_digest_d2de24f09047549fe9b37ebdc84240ff = UNSTREAM_STRING( &constant_bin[ 2242050 ], 22, 0 );
    const_str_digest_d302b0d134c951e126b20176f2859215 = UNSTREAM_STRING( &constant_bin[ 2242072 ], 17, 0 );
    const_str_digest_d67d04dd5b60802d235db1cb4dd36b81 = UNSTREAM_STRING( &constant_bin[ 2242089 ], 27, 0 );
    const_str_digest_e99401cdba8ae1f116aadb9b45a47a89 = UNSTREAM_STRING( &constant_bin[ 2242116 ], 56, 0 );
    const_str_digest_f96264aacbf3f6666a71aa6c9649e869 = UNSTREAM_STRING( &constant_bin[ 2242172 ], 49, 0 );
    const_tuple_16f56e1a04a9e9a4bf95a9aca319eace_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2242221 ], 187 );
    const_tuple_3de6b1100f1117fb796b8b14406cc5a4_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_3de6b1100f1117fb796b8b14406cc5a4_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_3de6b1100f1117fb796b8b14406cc5a4_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_3de6b1100f1117fb796b8b14406cc5a4_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_3de6b1100f1117fb796b8b14406cc5a4_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_3de6b1100f1117fb796b8b14406cc5a4_tuple, 4, const_str_plain_lwork ); Py_INCREF( const_str_plain_lwork );
    PyTuple_SET_ITEM( const_tuple_3de6b1100f1117fb796b8b14406cc5a4_tuple, 5, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_tuple_48241020ae4cbe060ba7d7bbfe238b6f_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_48241020ae4cbe060ba7d7bbfe238b6f_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_48241020ae4cbe060ba7d7bbfe238b6f_tuple, 1, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_48241020ae4cbe060ba7d7bbfe238b6f_tuple, 2, const_str_plain_lwork ); Py_INCREF( const_str_plain_lwork );
    PyTuple_SET_ITEM( const_tuple_48241020ae4cbe060ba7d7bbfe238b6f_tuple, 3, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_48241020ae4cbe060ba7d7bbfe238b6f_tuple, 4, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    const_tuple_6030b2ba635332187d2e05310160e909_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 2, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 3, const_str_plain_pivoting ); Py_INCREF( const_str_plain_pivoting );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 4, const_str_plain_conjugate ); Py_INCREF( const_str_plain_conjugate );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 5, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 6, const_str_plain_overwrite_c ); Py_INCREF( const_str_plain_overwrite_c );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 7, const_str_plain_onedim ); Py_INCREF( const_str_plain_onedim );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 8, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 9, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 10, const_str_plain_raw ); Py_INCREF( const_str_plain_raw );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 11, const_str_plain_Q ); Py_INCREF( const_str_plain_Q );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 12, const_str_plain_tau ); Py_INCREF( const_str_plain_tau );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 13, const_str_plain_gor_un_mqr ); Py_INCREF( const_str_plain_gor_un_mqr );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 14, const_str_plain_trans ); Py_INCREF( const_str_plain_trans );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 15, const_str_plain_cc ); Py_INCREF( const_str_plain_cc );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 16, const_str_plain_lr ); Py_INCREF( const_str_plain_lr );
    PyTuple_SET_ITEM( const_tuple_6030b2ba635332187d2e05310160e909_tuple, 17, const_str_plain_cQ ); Py_INCREF( const_str_plain_cQ );
    const_tuple_6704499237045ba19c18494e9ad9e4e0_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_6704499237045ba19c18494e9ad9e4e0_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_6704499237045ba19c18494e9ad9e4e0_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_6704499237045ba19c18494e9ad9e4e0_tuple, 2, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_6704499237045ba19c18494e9ad9e4e0_tuple, 3, const_str_plain_pivoting ); Py_INCREF( const_str_plain_pivoting );
    PyTuple_SET_ITEM( const_tuple_6704499237045ba19c18494e9ad9e4e0_tuple, 4, const_str_plain_conjugate ); Py_INCREF( const_str_plain_conjugate );
    PyTuple_SET_ITEM( const_tuple_6704499237045ba19c18494e9ad9e4e0_tuple, 5, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_6704499237045ba19c18494e9ad9e4e0_tuple, 6, const_str_plain_overwrite_c ); Py_INCREF( const_str_plain_overwrite_c );
    const_tuple_c355795e317383b3eff39f7634e59207_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c355795e317383b3eff39f7634e59207_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_c355795e317383b3eff39f7634e59207_tuple, 1, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_c355795e317383b3eff39f7634e59207_tuple, 2, const_str_plain_lwork ); Py_INCREF( const_str_plain_lwork );
    PyTuple_SET_ITEM( const_tuple_c355795e317383b3eff39f7634e59207_tuple, 3, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_c355795e317383b3eff39f7634e59207_tuple, 4, const_str_plain_pivoting ); Py_INCREF( const_str_plain_pivoting );
    PyTuple_SET_ITEM( const_tuple_c355795e317383b3eff39f7634e59207_tuple, 5, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 1, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 2, const_str_plain_lwork ); Py_INCREF( const_str_plain_lwork );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 3, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 4, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 5, const_str_plain_a1 ); Py_INCREF( const_str_plain_a1 );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 6, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 7, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 8, const_str_plain_gerqf ); Py_INCREF( const_str_plain_gerqf );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 9, const_str_plain_rq ); Py_INCREF( const_str_plain_rq );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 10, const_str_plain_tau ); Py_INCREF( const_str_plain_tau );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 11, const_str_plain_work ); Py_INCREF( const_str_plain_work );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 12, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 13, const_str_plain_R ); Py_INCREF( const_str_plain_R );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 14, const_str_plain_gor_un_grq ); Py_INCREF( const_str_plain_gor_un_grq );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 15, const_str_plain_Q ); Py_INCREF( const_str_plain_Q );
    PyTuple_SET_ITEM( const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 16, const_str_plain_rq1 ); Py_INCREF( const_str_plain_rq1 );
    const_tuple_false_none_str_plain_full_false_true_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_false_none_str_plain_full_false_true_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_str_plain_full_false_true_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_str_plain_full_false_true_tuple, 2, const_str_plain_full ); Py_INCREF( const_str_plain_full );
    PyTuple_SET_ITEM( const_tuple_false_none_str_plain_full_false_true_tuple, 3, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_str_plain_full_false_true_tuple, 4, Py_True ); Py_INCREF( Py_True );
    const_tuple_str_plain_right_false_false_false_false_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_str_plain_right_false_false_false_false_tuple, 0, const_str_plain_right ); Py_INCREF( const_str_plain_right );
    PyTuple_SET_ITEM( const_tuple_str_plain_right_false_false_false_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_str_plain_right_false_false_false_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_str_plain_right_false_false_false_false_tuple, 3, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_str_plain_right_false_false_false_false_tuple, 4, Py_False ); Py_INCREF( Py_False );
    const_list_str_plain_full_str_plain_r_str_plain_economic_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_full_str_plain_r_str_plain_economic_list, 0, const_str_plain_full ); Py_INCREF( const_str_plain_full );
    PyList_SET_ITEM( const_list_str_plain_full_str_plain_r_str_plain_economic_list, 1, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyList_SET_ITEM( const_list_str_plain_full_str_plain_r_str_plain_economic_list, 2, const_str_plain_economic ); Py_INCREF( const_str_plain_economic );
    const_list_str_plain_qr_str_plain_qr_multiply_str_plain_rq_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_qr_str_plain_qr_multiply_str_plain_rq_list, 0, const_str_plain_qr ); Py_INCREF( const_str_plain_qr );
    PyList_SET_ITEM( const_list_str_plain_qr_str_plain_qr_multiply_str_plain_rq_list, 1, const_str_plain_qr_multiply ); Py_INCREF( const_str_plain_qr_multiply );
    PyList_SET_ITEM( const_list_str_plain_qr_str_plain_qr_multiply_str_plain_rq_list, 2, const_str_plain_rq ); Py_INCREF( const_str_plain_rq );
    const_tuple_str_plain_f_str_plain_name_str_plain_args_str_plain_kwargs_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_name_str_plain_args_str_plain_kwargs_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_name_str_plain_args_str_plain_kwargs_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_name_str_plain_args_str_plain_kwargs_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_name_str_plain_args_str_plain_kwargs_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
}

// The module code objects.
static PyCodeObject *codeobj_a977c468c618432d87579810ac6a00a2;
static PyCodeObject *codeobj_149d5cc280954fe7915600c9f1982234;
static PyCodeObject *codeobj_96d76ca6f709225884136bb25d5f90f4;
static PyCodeObject *codeobj_6c2aeb88896d95d5ff6fbb7db3f70eaf;
static PyCodeObject *codeobj_1d6c91a76f470f8ba145971bce440cad;
static PyCodeObject *codeobj_c02b3df0bf5471e316ca8953ab08b144;
static PyCodeObject *codeobj_e8f6a6abd8e695c64509dd48989da426;
static PyCodeObject *codeobj_ba1322e1d04082be3fe4ec35d29d2277;
static PyCodeObject *codeobj_d77d5875841889f97ab1bf51da16e4e8;

static void _initModuleCodeObjects(void)
{
    codeobj_a977c468c618432d87579810ac6a00a2 = MAKE_CODEOBJ( const_str_digest_65b7827232be01e770a0a911e39a1399, const_str_plain_decomp_qr, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_149d5cc280954fe7915600c9f1982234 = MAKE_CODEOBJ( const_str_digest_65b7827232be01e770a0a911e39a1399, const_str_plain_qr, 29, const_tuple_c355795e317383b3eff39f7634e59207_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_96d76ca6f709225884136bb25d5f90f4 = MAKE_CODEOBJ( const_str_digest_65b7827232be01e770a0a911e39a1399, const_str_plain_qr, 29, const_tuple_16f56e1a04a9e9a4bf95a9aca319eace_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6c2aeb88896d95d5ff6fbb7db3f70eaf = MAKE_CODEOBJ( const_str_digest_65b7827232be01e770a0a911e39a1399, const_str_plain_qr_multiply, 177, const_tuple_6704499237045ba19c18494e9ad9e4e0_tuple, 7, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1d6c91a76f470f8ba145971bce440cad = MAKE_CODEOBJ( const_str_digest_65b7827232be01e770a0a911e39a1399, const_str_plain_qr_multiply, 177, const_tuple_6030b2ba635332187d2e05310160e909_tuple, 7, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c02b3df0bf5471e316ca8953ab08b144 = MAKE_CODEOBJ( const_str_digest_65b7827232be01e770a0a911e39a1399, const_str_plain_rq, 299, const_tuple_48241020ae4cbe060ba7d7bbfe238b6f_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e8f6a6abd8e695c64509dd48989da426 = MAKE_CODEOBJ( const_str_digest_65b7827232be01e770a0a911e39a1399, const_str_plain_rq, 299, const_tuple_cf5ca587487ee5f5d3fa7fb9dd51b43f_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ba1322e1d04082be3fe4ec35d29d2277 = MAKE_CODEOBJ( const_str_digest_65b7827232be01e770a0a911e39a1399, const_str_plain_safecall, 14, const_tuple_str_plain_f_str_plain_name_str_plain_args_str_plain_kwargs_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d77d5875841889f97ab1bf51da16e4e8 = MAKE_CODEOBJ( const_str_digest_65b7827232be01e770a0a911e39a1399, const_str_plain_safecall, 14, const_tuple_3de6b1100f1117fb796b8b14406cc5a4_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl_function_2_complex_call_helper_star_list_star_dict_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_star_arg_list, PyObject *_python_par_star_arg_dict );


static PyObject *MAKE_FUNCTION_function_1_safecall_of_module_scipy$linalg$decomp_qr(  );


static PyObject *MAKE_FUNCTION_function_2_qr_of_module_scipy$linalg$decomp_qr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_qr_multiply_of_module_scipy$linalg$decomp_qr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_rq_of_module_scipy$linalg$decomp_qr( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_safecall_of_module_scipy$linalg$decomp_qr( Nuitka_FunctionObject *self, PyObject *_python_par_f, PyObject *_python_par_name, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_f; par_f.object = _python_par_f;
    PyObjectLocalVariable par_name; par_name.object = _python_par_name;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_kwargs; par_kwargs.object = _python_par_kwargs;
    PyObjectLocalVariable var_lwork;
    PyObjectLocalVariable var_ret;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_make_exception_arg_1;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unary_arg_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ba1322e1d04082be3fe4ec35d29d2277, module_scipy$linalg$decomp_qr );
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
    tmp_source_name_1 = par_kwargs.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 17;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pop );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_lwork;
    tmp_call_arg_element_2 = Py_None;
    frame_function->f_lineno = 17;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    assert( var_lwork.object == NULL );
    var_lwork.object = tmp_assign_source_1;

    tmp_compare_left_1 = var_lwork.object;

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
    tmp_ass_subvalue_1 = const_int_neg_1;
    tmp_ass_subscribed_1 = par_kwargs.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_lwork;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = par_f.object;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6491 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = par_args.object;

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = par_kwargs.object;

    if ( tmp_dircall_arg3_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = impl_function_2_complex_call_helper_star_list_star_dict_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), INCREASE_REFCOUNT( tmp_dircall_arg2_1 ), INCREASE_REFCOUNT( tmp_dircall_arg3_1 ) );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    assert( var_ret.object == NULL );
    var_ret.object = tmp_assign_source_2;

    tmp_subscr_target_2 = var_ret.object;

    tmp_subscr_subscript_2 = const_int_neg_2;
    tmp_subscr_target_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_real );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_astype );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_int );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 21;
    tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_2 = par_kwargs.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_lwork;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_dircall_arg1_2 = par_f.object;

    if ( tmp_dircall_arg1_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6491 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_2 = par_args.object;

    if ( tmp_dircall_arg2_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_2 = par_kwargs.object;

    if ( tmp_dircall_arg3_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = impl_function_2_complex_call_helper_star_list_star_dict_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_2 ), INCREASE_REFCOUNT( tmp_dircall_arg2_2 ), INCREASE_REFCOUNT( tmp_dircall_arg3_2 ) );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    if (var_ret.object == NULL)
    {
        var_ret.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = var_ret.object;
        var_ret.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_subscr_target_3 = var_ret.object;

    tmp_subscr_subscript_3 = const_int_neg_1;
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 23;
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
    tmp_binop_left_1 = const_str_digest_964c113c6f30094ebbf13b0ba86c9a94;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_subscr_target_4 = var_ret.object;

    tmp_subscr_subscript_4 = const_int_neg_1;
    tmp_unary_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    Py_DECREF( tmp_unary_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_name.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 24;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 24;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -2;
    tmp_slice_source_1 = var_ret.object;

    tmp_return_value = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 26;
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
    if ((var_lwork.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lwork,
            var_lwork.object
        );

    }
    if ((var_ret.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ret,
            var_ret.object
        );

    }
    if ((par_f.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_f,
            par_f.object
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
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            par_args.object
        );

    }
    if ((par_kwargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_kwargs,
            par_kwargs.object
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
static PyObject *fparse_function_1_safecall_of_module_scipy$linalg$decomp_qr( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_f = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kwargs = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_kwargs = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kwargs = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "safecall() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwargs, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "safecall() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_kwargs = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kwargs = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "safecall() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwargs, entry->me_key, value );

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
            _python_par_kwargs = PyDict_New();
        }
    }

    // Check if argument f was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, const_str_plain_f );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_f == NULL );

            _python_par_f = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, const_str_plain_f );

            kw_found += 1;
        }
    }

    // Check if argument name was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, const_str_plain_name );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_name == NULL );

            _python_par_name = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, const_str_plain_name );

            kw_found += 1;
        }
    }

    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_f != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_f = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_f == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_f = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_name == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_f == NULL || _python_par_name == NULL ))
    {
        PyObject *values[] = { _python_par_f, _python_par_name };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 2 )
    {
        _python_par_args = PyTuple_New( args_size - 2 );

        for( Py_ssize_t i = 0; i < args_size - 2; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[2+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( const_tuple_empty );
    }


    return impl_function_1_safecall_of_module_scipy$linalg$decomp_qr( self, _python_par_f, _python_par_name, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_f );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1_safecall_of_module_scipy$linalg$decomp_qr( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_1_safecall_of_module_scipy$linalg$decomp_qr( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), MAKE_TUPLE( &args[ 2 ], size > 2 ? size-2 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_safecall_of_module_scipy$linalg$decomp_qr( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_qr_of_module_scipy$linalg$decomp_qr( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_overwrite_a, PyObject *_python_par_lwork, PyObject *_python_par_mode, PyObject *_python_par_pivoting, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_overwrite_a; par_overwrite_a.object = _python_par_overwrite_a;
    PyObjectLocalVariable par_lwork; par_lwork.object = _python_par_lwork;
    PyObjectLocalVariable par_mode; par_mode.object = _python_par_mode;
    PyObjectLocalVariable par_pivoting; par_pivoting.object = _python_par_pivoting;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_a1;
    PyObjectLocalVariable var_M;
    PyObjectLocalVariable var_N;
    PyObjectLocalVariable var_geqp3;
    PyObjectLocalVariable var_qr;
    PyObjectLocalVariable var_jpvt;
    PyObjectLocalVariable var_tau;
    PyObjectLocalVariable var_geqrf;
    PyObjectLocalVariable var_R;
    PyObjectLocalVariable var_Rj;
    PyObjectLocalVariable var_gor_un_gqr;
    PyObjectLocalVariable var_Q;
    PyObjectLocalVariable var_t;
    PyObjectLocalVariable var_qqr;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
    PyObjectTempVariable tmp_tuple_unpack_3__element_2;
    PyObjectTempVariable tmp_tuple_unpack_3__element_3;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObjectTempVariable tmp_tuple_unpack_4__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_4__element_1;
    PyObjectTempVariable tmp_tuple_unpack_5__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_5__element_1;
    PyObjectTempVariable tmp_tuple_unpack_5__element_2;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_tuple_unpack_6__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_6__element_1;
    PyObjectTempVariable tmp_tuple_unpack_7__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_7__element_1;
    PyObjectTempVariable tmp_tuple_unpack_8__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_8__element_1;
    PyObjectTempVariable tmp_tuple_unpack_9__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_9__element_1;
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
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
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
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
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
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iter_arg_9;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_attempt_3;
    PyObject *tmp_iterator_attempt_4;
    PyObject *tmp_iterator_attempt_5;
    PyObject *tmp_iterator_attempt_6;
    PyObject *tmp_iterator_attempt_7;
    PyObject *tmp_iterator_attempt_8;
    PyObject *tmp_iterator_attempt_9;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_iterator_name_5;
    PyObject *tmp_iterator_name_6;
    PyObject *tmp_iterator_name_7;
    PyObject *tmp_iterator_name_8;
    PyObject *tmp_iterator_name_9;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_sliceobj_upper_1;
    PyObject *tmp_sliceobj_upper_2;
    PyObject *tmp_sliceobj_upper_3;
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
    int tmp_tried_lineno_9;
    int tmp_tried_lineno_10;
    int tmp_tried_lineno_11;
    int tmp_tried_lineno_12;
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
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_149d5cc280954fe7915600c9f1982234, module_scipy$linalg$decomp_qr );
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
    tmp_compare_left_1 = par_mode.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LIST_COPY( const_list_e5fdc0227982eb0ea248a5354e73df21_list );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
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
    tmp_make_exception_arg_1 = const_str_digest_35a28a3e26741bbae3c94fc303fc66d2;
    frame_function->f_lineno = 123;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 123;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_cond_value_1 = par_check_finite.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243662 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray_chkfinite );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_a.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 127;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    assert( var_a1.object == NULL );
    var_a1.object = tmp_assign_source_1;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 129;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_a.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 129;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 129;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 129;
        goto frame_exception_exit_1;
    }
    assert( var_a1.object == NULL );
    var_a1.object = tmp_assign_source_2;

    branch_end_2:;
    tmp_source_name_3 = var_a1.object;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_2 = const_str_digest_d302b0d134c951e126b20176f2859215;
    frame_function->f_lineno = 131;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 131;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    // Tried code
    tmp_source_name_4 = var_a1.object;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto try_finally_handler_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
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


        frame_function->f_lineno = 132;
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


        frame_function->f_lineno = 132;
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

    assert( var_M.object == NULL );
    var_M.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2.object;

    assert( var_N.object == NULL );
    var_N.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

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
    // Tried code
    tmp_assign_source_8 = NULL;
    // Tried code
    tmp_assign_source_9 = par_overwrite_a.object;

    if ( tmp_assign_source_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 133;
        goto try_finally_handler_3;
    }

    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
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
    tmp_assign_source_8 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_assign_source_8 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_8 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain__datacopied );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__datacopied );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244212 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 133;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_3 = var_a1.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 133;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_4 = par_a.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 133;
        goto try_finally_handler_4;
    }

    frame_function->f_lineno = 133;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
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
    if (par_overwrite_a.object == NULL)
    {
        par_overwrite_a.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = par_overwrite_a.object;
        par_overwrite_a.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
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

        goto frame_exception_exit_1;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_cond_value_3 = par_pivoting.object;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 253948 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
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
    // Tried code
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 136;
        goto try_finally_handler_5;
    }

    tmp_call_arg_element_5 = const_tuple_str_plain_geqp3_tuple;
    tmp_call_arg_element_6 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_a1.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 136;
        goto try_finally_handler_5;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_6, 0, tmp_tuple_element_1 );
    frame_function->f_lineno = 136;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto try_finally_handler_5;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto try_finally_handler_5;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_10;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_11 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 136;
        goto try_finally_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_11;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_5;
    }
    tmp_assign_source_12 = tmp_tuple_unpack_2__element_1.object;

    assert( var_geqp3.object == NULL );
    var_geqp3.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

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
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

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
    // Tried code
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_safecall );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_safecall );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254002 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 137;
        goto try_finally_handler_6;
    }

    tmp_call_pos_1 = PyTuple_New( 3 );
    tmp_tuple_element_2 = var_geqp3.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254039 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 137;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_str_plain_geqp3;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_a1.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 137;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 2, tmp_tuple_element_2 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_overwrite_a.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 137;
        goto try_finally_handler_6;
    }

    tmp_dict_key_1 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 137;
    tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_5, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 137;
        goto try_finally_handler_6;
    }
    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 137;
        goto try_finally_handler_6;
    }
    assert( tmp_tuple_unpack_3__source_iter.object == NULL );
    tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_13;

    tmp_unpack_4 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_14 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 0 );
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


        frame_function->f_lineno = 137;
        goto try_finally_handler_6;
    }
    assert( tmp_tuple_unpack_3__element_1.object == NULL );
    tmp_tuple_unpack_3__element_1.object = tmp_assign_source_14;

    tmp_unpack_5 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_15 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 1 );
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


        frame_function->f_lineno = 137;
        goto try_finally_handler_6;
    }
    assert( tmp_tuple_unpack_3__element_2.object == NULL );
    tmp_tuple_unpack_3__element_2.object = tmp_assign_source_15;

    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_16 = UNPACK_PARAMETER_NEXT( tmp_unpack_6, 2 );
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


        frame_function->f_lineno = 137;
        goto try_finally_handler_6;
    }
    assert( tmp_tuple_unpack_3__element_3.object == NULL );
    tmp_tuple_unpack_3__element_3.object = tmp_assign_source_16;

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

            goto try_finally_handler_6;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_3 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_6;
    }
    tmp_assign_source_17 = tmp_tuple_unpack_3__element_1.object;

    assert( var_qr.object == NULL );
    var_qr.object = INCREASE_REFCOUNT( tmp_assign_source_17 );

    tmp_assign_source_18 = tmp_tuple_unpack_3__element_2.object;

    assert( var_jpvt.object == NULL );
    var_jpvt.object = INCREASE_REFCOUNT( tmp_assign_source_18 );

    tmp_assign_source_19 = tmp_tuple_unpack_3__element_3.object;

    assert( var_tau.object == NULL );
    var_tau.object = INCREASE_REFCOUNT( tmp_assign_source_19 );

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
    Py_XDECREF( tmp_tuple_unpack_3__source_iter.object );
    tmp_tuple_unpack_3__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1.object );
    tmp_tuple_unpack_3__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2.object );
    tmp_tuple_unpack_3__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_3.object );
    tmp_tuple_unpack_3__element_3.object = NULL;

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
    tmp_assign_source_20 = var_jpvt.object;

    if ( tmp_assign_source_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254090 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 138;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_20 );

    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_1 = const_int_pos_1;
    tmp_assign_source_21 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_7;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_21;

    tmp_compare_left_3 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_3 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_22 = tmp_inplace_assign_1__inplace_end.object;

    if (var_jpvt.object == NULL)
    {
        var_jpvt.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
    }
    else
    {
        PyObject *old = var_jpvt.object;
        var_jpvt.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
        Py_DECREF( old );
    }
    branch_no_5:;
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
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto frame_exception_exit_1;
    }

    goto finally_end_7;
    finally_end_7:;
    goto branch_end_4;
    branch_no_4:;
    // Tried code
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 140;
        goto try_finally_handler_8;
    }

    tmp_call_arg_element_7 = const_tuple_str_plain_geqrf_tuple;
    tmp_call_arg_element_8 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_a1.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 140;
        goto try_finally_handler_8;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_8, 0, tmp_tuple_element_3 );
    frame_function->f_lineno = 140;
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto try_finally_handler_8;
    }
    tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_4__source_iter.object == NULL );
    tmp_tuple_unpack_4__source_iter.object = tmp_assign_source_23;

    tmp_unpack_7 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_24 = UNPACK_PARAMETER_NEXT( tmp_unpack_7, 0 );
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


        frame_function->f_lineno = 140;
        goto try_finally_handler_8;
    }
    assert( tmp_tuple_unpack_4__element_1.object == NULL );
    tmp_tuple_unpack_4__element_1.object = tmp_assign_source_24;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_8;
    }
    tmp_assign_source_25 = tmp_tuple_unpack_4__element_1.object;

    assert( var_geqrf.object == NULL );
    var_geqrf.object = INCREASE_REFCOUNT( tmp_assign_source_25 );

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
    Py_XDECREF( tmp_tuple_unpack_4__source_iter.object );
    tmp_tuple_unpack_4__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_1.object );
    tmp_tuple_unpack_4__element_1.object = NULL;

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
    // Tried code
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_safecall );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_safecall );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254002 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 141;
        goto try_finally_handler_9;
    }

    tmp_call_pos_2 = PyTuple_New( 3 );
    tmp_tuple_element_4 = var_geqrf.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254140 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 141;
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_str_plain_geqrf;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_a1.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 141;
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 2, tmp_tuple_element_4 );
    tmp_call_kw_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_2 = par_lwork.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244354 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 141;
        goto try_finally_handler_9;
    }

    tmp_dict_key_2 = const_str_plain_lwork;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_overwrite_a.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto try_finally_handler_9;
    }

    tmp_dict_key_3 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 142;
    tmp_iter_arg_5 = CALL_FUNCTION( tmp_called_7, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 142;
        goto try_finally_handler_9;
    }
    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 141;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_5__source_iter.object == NULL );
    tmp_tuple_unpack_5__source_iter.object = tmp_assign_source_26;

    tmp_unpack_8 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_27 = UNPACK_PARAMETER_NEXT( tmp_unpack_8, 0 );
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


        frame_function->f_lineno = 141;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_5__element_1.object == NULL );
    tmp_tuple_unpack_5__element_1.object = tmp_assign_source_27;

    tmp_unpack_9 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_28 = UNPACK_PARAMETER_NEXT( tmp_unpack_9, 1 );
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


        frame_function->f_lineno = 141;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_5__element_2.object == NULL );
    tmp_tuple_unpack_5__element_2.object = tmp_assign_source_28;

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

            goto try_finally_handler_9;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_5 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_9;
    }
    tmp_assign_source_29 = tmp_tuple_unpack_5__element_1.object;

    if (var_qr.object == NULL)
    {
        var_qr.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
    }
    else
    {
        PyObject *old = var_qr.object;
        var_qr.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
        Py_DECREF( old );
    }
    tmp_assign_source_30 = tmp_tuple_unpack_5__element_2.object;

    if (var_tau.object == NULL)
    {
        var_tau.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
    }
    else
    {
        PyObject *old = var_tau.object;
        var_tau.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
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

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_5__source_iter.object );
    tmp_tuple_unpack_5__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_1.object );
    tmp_tuple_unpack_5__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2.object );
    tmp_tuple_unpack_5__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
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
    branch_end_4:;
    // Tried code
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_compexpr_left_1 = par_mode.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto try_finally_handler_11;
    }

    tmp_compexpr_right_1 = LIST_COPY( const_list_str_plain_economic_str_plain_raw_list );
    tmp_assign_source_31 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_1 );

        frame_function->f_lineno = 144;
        goto try_finally_handler_11;
    }
    Py_DECREF( tmp_compexpr_right_1 );
    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_31 );

    tmp_cond_value_5 = tmp_or_2__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
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
    tmp_cond_value_4 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_cond_value_4 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = var_M.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto try_finally_handler_12;
    }

    tmp_compexpr_right_2 = var_N.object;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto try_finally_handler_12;
    }

    tmp_cond_value_4 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto try_finally_handler_12;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
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

        goto try_finally_handler_11;
    }

    goto finally_end_10;
    finally_end_10:;
    condexpr_end_2:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto try_finally_handler_10;
    }

    goto finally_end_11;
    finally_end_11:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 144;
        goto try_finally_handler_10;
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto try_finally_handler_10;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_triu );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto try_finally_handler_10;
    }
    tmp_call_arg_element_9 = var_qr.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254191 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto try_finally_handler_10;
    }

    frame_function->f_lineno = 145;
    tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto try_finally_handler_10;
    }
    assert( var_R.object == NULL );
    var_R.object = tmp_assign_source_32;

    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto try_finally_handler_10;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_triu );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_10;
    }
    tmp_subscr_target_1 = var_qr.object;

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254191 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto try_finally_handler_10;
    }

    tmp_subscr_subscript_1 = PyTuple_New( 2 );
    tmp_sliceobj_upper_1 = var_N.object;

    if ( tmp_sliceobj_upper_1 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_subscr_subscript_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto try_finally_handler_10;
    }

    tmp_tuple_element_5 = MAKE_SLICEOBJ( Py_None, tmp_sliceobj_upper_1, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_1, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_1, 1, tmp_tuple_element_5 );
    tmp_call_arg_element_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_subscript_1 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 147;
        goto try_finally_handler_10;
    }
    frame_function->f_lineno = 147;
    tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_10;
    }
    assert( var_R.object == NULL );
    var_R.object = tmp_assign_source_33;

    branch_end_6:;
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

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
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
    tmp_cond_value_6 = par_pivoting.object;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 253948 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
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
    tmp_assign_source_34 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_R.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_34 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242037 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_34, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_jpvt.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_34 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254090 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_34, 1, tmp_tuple_element_6 );
    assert( var_Rj.object == NULL );
    var_Rj.object = tmp_assign_source_34;

    goto branch_end_7;
    branch_no_7:;
    tmp_assign_source_35 = PyTuple_New( 1 );
    tmp_tuple_element_7 = var_R.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242037 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_35, 0, tmp_tuple_element_7 );
    assert( var_Rj.object == NULL );
    var_Rj.object = tmp_assign_source_35;

    branch_end_7:;
    tmp_compare_left_4 = par_mode.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_str_plain_r;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
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
    tmp_return_value = var_Rj.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_8;
    branch_no_8:;
    tmp_compare_left_5 = par_mode.object;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = const_str_plain_raw;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_binop_left_2 = PyTuple_New( 1 );
    tmp_tuple_element_8 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_qr.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        Py_DECREF( tmp_tuple_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254191 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_tuple_element_8, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_tau.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        Py_DECREF( tmp_tuple_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185046 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_tuple_element_8, 1, tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_binop_left_2, 0, tmp_tuple_element_8 );
    tmp_binop_right_2 = var_Rj.object;

    tmp_return_value = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_9:;
    branch_end_8:;
    // Tried code
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 159;
        goto try_finally_handler_13;
    }

    tmp_call_arg_element_11 = const_tuple_str_plain_orgqr_tuple;
    tmp_call_arg_element_12 = PyTuple_New( 1 );
    tmp_tuple_element_10 = var_qr.object;

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254191 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 159;
        goto try_finally_handler_13;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_call_arg_element_12, 0, tmp_tuple_element_10 );
    frame_function->f_lineno = 159;
    tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 159;
        goto try_finally_handler_13;
    }
    tmp_assign_source_36 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 159;
        goto try_finally_handler_13;
    }
    assert( tmp_tuple_unpack_6__source_iter.object == NULL );
    tmp_tuple_unpack_6__source_iter.object = tmp_assign_source_36;

    tmp_unpack_10 = tmp_tuple_unpack_6__source_iter.object;

    tmp_assign_source_37 = UNPACK_PARAMETER_NEXT( tmp_unpack_10, 0 );
    if ( tmp_assign_source_37 == NULL )
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


        frame_function->f_lineno = 159;
        goto try_finally_handler_13;
    }
    assert( tmp_tuple_unpack_6__element_1.object == NULL );
    tmp_tuple_unpack_6__element_1.object = tmp_assign_source_37;

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

            goto try_finally_handler_13;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_6 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_13;
    }
    tmp_assign_source_38 = tmp_tuple_unpack_6__element_1.object;

    assert( var_gor_un_gqr.object == NULL );
    var_gor_un_gqr.object = INCREASE_REFCOUNT( tmp_assign_source_38 );

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

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_6__source_iter.object );
    tmp_tuple_unpack_6__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_1.object );
    tmp_tuple_unpack_6__element_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
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
    tmp_compare_left_6 = var_M.object;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = var_N.object;

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    // Tried code
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_safecall );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_safecall );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254002 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_14;
    }

    tmp_call_pos_3 = PyTuple_New( 4 );
    tmp_tuple_element_11 = var_gor_un_gqr.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254239 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_14;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = const_str_digest_c77ee52d32dd56770fb038500a2fd35a;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 1, tmp_tuple_element_11 );
    tmp_subscr_target_2 = var_qr.object;

    if ( tmp_subscr_target_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254191 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_14;
    }

    tmp_subscr_subscript_2 = PyTuple_New( 2 );
    tmp_tuple_element_12 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_2, 0, tmp_tuple_element_12 );
    tmp_sliceobj_upper_2 = var_M.object;

    if ( tmp_sliceobj_upper_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_subscr_subscript_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_14;
    }

    tmp_tuple_element_12 = MAKE_SLICEOBJ( Py_None, tmp_sliceobj_upper_2, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_2, 1, tmp_tuple_element_12 );
    tmp_tuple_element_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_subscript_2 );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 162;
        goto try_finally_handler_14;
    }
    PyTuple_SET_ITEM( tmp_call_pos_3, 2, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_tau.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185046 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_14;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 3, tmp_tuple_element_11 );
    tmp_call_kw_3 = _PyDict_NewPresized( 2 );
    tmp_dict_value_4 = par_lwork.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244354 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 163;
        goto try_finally_handler_14;
    }

    tmp_dict_key_4 = const_str_plain_lwork;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = const_int_pos_1;
    tmp_dict_key_5 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_5, tmp_dict_value_5 );
    frame_function->f_lineno = 163;
    tmp_iter_arg_7 = CALL_FUNCTION( tmp_called_11, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_iter_arg_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto try_finally_handler_14;
    }
    tmp_assign_source_39 = MAKE_ITERATOR( tmp_iter_arg_7 );
    Py_DECREF( tmp_iter_arg_7 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto try_finally_handler_14;
    }
    assert( tmp_tuple_unpack_7__source_iter.object == NULL );
    tmp_tuple_unpack_7__source_iter.object = tmp_assign_source_39;

    tmp_unpack_11 = tmp_tuple_unpack_7__source_iter.object;

    tmp_assign_source_40 = UNPACK_PARAMETER_NEXT( tmp_unpack_11, 0 );
    if ( tmp_assign_source_40 == NULL )
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


        frame_function->f_lineno = 162;
        goto try_finally_handler_14;
    }
    assert( tmp_tuple_unpack_7__element_1.object == NULL );
    tmp_tuple_unpack_7__element_1.object = tmp_assign_source_40;

    tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_7 ); assert( PyIter_Check( tmp_iterator_name_7 ) );

    tmp_iterator_attempt_7 = (*Py_TYPE( tmp_iterator_name_7 )->tp_iternext)( tmp_iterator_name_7 );

    if (likely( tmp_iterator_attempt_7 == NULL ))
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
        Py_DECREF( tmp_iterator_attempt_7 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_14;
    }
    tmp_assign_source_41 = tmp_tuple_unpack_7__element_1.object;

    assert( var_Q.object == NULL );
    var_Q.object = INCREASE_REFCOUNT( tmp_assign_source_41 );

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

    tmp_tried_lineno_10 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_7__source_iter.object );
    tmp_tuple_unpack_7__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_1.object );
    tmp_tuple_unpack_7__element_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_10;
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
    goto branch_end_10;
    branch_no_10:;
    tmp_compare_left_7 = par_mode.object;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = const_str_plain_economic;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    // Tried code
    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_safecall );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_safecall );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254002 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_15;
    }

    tmp_call_pos_4 = PyTuple_New( 4 );
    tmp_tuple_element_13 = var_gor_un_gqr.object;

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254239 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_15;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = const_str_digest_c77ee52d32dd56770fb038500a2fd35a;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 1, tmp_tuple_element_13 );
    tmp_tuple_element_13 = var_qr.object;

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254191 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_15;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 2, tmp_tuple_element_13 );
    tmp_tuple_element_13 = var_tau.object;

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185046 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_15;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 3, tmp_tuple_element_13 );
    tmp_call_kw_4 = _PyDict_NewPresized( 2 );
    tmp_dict_value_6 = par_lwork.object;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244354 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_15;
    }

    tmp_dict_key_6 = const_str_plain_lwork;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = const_int_pos_1;
    tmp_dict_key_7 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_7, tmp_dict_value_7 );
    frame_function->f_lineno = 166;
    tmp_iter_arg_8 = CALL_FUNCTION( tmp_called_12, tmp_call_pos_4, tmp_call_kw_4 );
    Py_DECREF( tmp_call_pos_4 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_iter_arg_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto try_finally_handler_15;
    }
    tmp_assign_source_42 = MAKE_ITERATOR( tmp_iter_arg_8 );
    Py_DECREF( tmp_iter_arg_8 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_8__source_iter.object == NULL );
    tmp_tuple_unpack_8__source_iter.object = tmp_assign_source_42;

    tmp_unpack_12 = tmp_tuple_unpack_8__source_iter.object;

    tmp_assign_source_43 = UNPACK_PARAMETER_NEXT( tmp_unpack_12, 0 );
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


        frame_function->f_lineno = 165;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_8__element_1.object == NULL );
    tmp_tuple_unpack_8__element_1.object = tmp_assign_source_43;

    tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_8 ); assert( PyIter_Check( tmp_iterator_name_8 ) );

    tmp_iterator_attempt_8 = (*Py_TYPE( tmp_iterator_name_8 )->tp_iternext)( tmp_iterator_name_8 );

    if (likely( tmp_iterator_attempt_8 == NULL ))
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
        Py_DECREF( tmp_iterator_attempt_8 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_15;
    }
    tmp_assign_source_44 = tmp_tuple_unpack_8__element_1.object;

    assert( var_Q.object == NULL );
    var_Q.object = INCREASE_REFCOUNT( tmp_assign_source_44 );

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

    tmp_tried_lineno_11 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_8__source_iter.object );
    tmp_tuple_unpack_8__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_1.object );
    tmp_tuple_unpack_8__element_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_11;
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
    goto branch_end_11;
    branch_no_11:;
    tmp_source_name_8 = var_qr.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254191 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dtype );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_45 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_char );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    assert( var_t.object == NULL );
    var_t.object = tmp_assign_source_45;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_empty );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_5 = PyTuple_New( 1 );
    tmp_tuple_element_14 = PyTuple_New( 2 );
    tmp_tuple_element_15 = var_M.object;

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_tuple_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_tuple_element_14, 0, tmp_tuple_element_15 );
    tmp_tuple_element_15 = var_M.object;

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_tuple_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_tuple_element_14, 1, tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_call_pos_5, 0, tmp_tuple_element_14 );
    tmp_call_kw_5 = _PyDict_NewPresized( 1 );
    tmp_dict_value_8 = var_t.object;

    tmp_dict_key_8 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_8, tmp_dict_value_8 );
    frame_function->f_lineno = 169;
    tmp_assign_source_46 = CALL_FUNCTION( tmp_called_13, tmp_call_pos_5, tmp_call_kw_5 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_pos_5 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    assert( var_qqr.object == NULL );
    var_qqr.object = tmp_assign_source_46;

    tmp_ass_subvalue_1 = var_qr.object;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254191 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = var_qqr.object;

    tmp_ass_subscript_1 = PyTuple_New( 2 );
    tmp_tuple_element_16 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_16 );
    tmp_sliceobj_upper_3 = var_N.object;

    if ( tmp_sliceobj_upper_3 == NULL )
    {
        Py_DECREF( tmp_ass_subscript_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_16 = MAKE_SLICEOBJ( Py_None, tmp_sliceobj_upper_3, Py_None );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_16 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    // Tried code
    tmp_called_14 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_safecall );

    if (unlikely( tmp_called_14 == NULL ))
    {
        tmp_called_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_safecall );
    }

    if ( tmp_called_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254002 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto try_finally_handler_16;
    }

    tmp_call_pos_6 = PyTuple_New( 4 );
    tmp_tuple_element_17 = var_gor_un_gqr.object;

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_call_pos_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254239 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_call_pos_6, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = const_str_digest_c77ee52d32dd56770fb038500a2fd35a;
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_call_pos_6, 1, tmp_tuple_element_17 );
    tmp_tuple_element_17 = var_qqr.object;

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_call_pos_6, 2, tmp_tuple_element_17 );
    tmp_tuple_element_17 = var_tau.object;

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_call_pos_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185046 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_call_pos_6, 3, tmp_tuple_element_17 );
    tmp_call_kw_6 = _PyDict_NewPresized( 2 );
    tmp_dict_value_9 = par_lwork.object;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_6 );
        Py_DECREF( tmp_call_kw_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244354 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto try_finally_handler_16;
    }

    tmp_dict_key_9 = const_str_plain_lwork;
    PyDict_SetItem( tmp_call_kw_6, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_value_10 = const_int_pos_1;
    tmp_dict_key_10 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_6, tmp_dict_key_10, tmp_dict_value_10 );
    frame_function->f_lineno = 172;
    tmp_iter_arg_9 = CALL_FUNCTION( tmp_called_14, tmp_call_pos_6, tmp_call_kw_6 );
    Py_DECREF( tmp_call_pos_6 );
    Py_DECREF( tmp_call_kw_6 );
    if ( tmp_iter_arg_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto try_finally_handler_16;
    }
    tmp_assign_source_47 = MAKE_ITERATOR( tmp_iter_arg_9 );
    Py_DECREF( tmp_iter_arg_9 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto try_finally_handler_16;
    }
    assert( tmp_tuple_unpack_9__source_iter.object == NULL );
    tmp_tuple_unpack_9__source_iter.object = tmp_assign_source_47;

    tmp_unpack_13 = tmp_tuple_unpack_9__source_iter.object;

    tmp_assign_source_48 = UNPACK_PARAMETER_NEXT( tmp_unpack_13, 0 );
    if ( tmp_assign_source_48 == NULL )
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


        frame_function->f_lineno = 171;
        goto try_finally_handler_16;
    }
    assert( tmp_tuple_unpack_9__element_1.object == NULL );
    tmp_tuple_unpack_9__element_1.object = tmp_assign_source_48;

    tmp_iterator_name_9 = tmp_tuple_unpack_9__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_9 ); assert( PyIter_Check( tmp_iterator_name_9 ) );

    tmp_iterator_attempt_9 = (*Py_TYPE( tmp_iterator_name_9 )->tp_iternext)( tmp_iterator_name_9 );

    if (likely( tmp_iterator_attempt_9 == NULL ))
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

            goto try_finally_handler_16;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_9 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_16;
    }
    tmp_assign_source_49 = tmp_tuple_unpack_9__element_1.object;

    assert( var_Q.object == NULL );
    var_Q.object = INCREASE_REFCOUNT( tmp_assign_source_49 );

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

    tmp_tried_lineno_12 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_9__source_iter.object );
    tmp_tuple_unpack_9__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_9__element_1.object );
    tmp_tuple_unpack_9__element_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_12;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_16 != NULL )
    {
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;

        goto frame_exception_exit_1;
    }

    goto finally_end_16;
    finally_end_16:;
    branch_end_11:;
    branch_end_10:;
    tmp_binop_left_3 = PyTuple_New( 1 );
    tmp_tuple_element_18 = var_Q.object;

    if ( tmp_tuple_element_18 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254295 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_binop_left_3, 0, tmp_tuple_element_18 );
    tmp_binop_right_3 = var_Rj.object;

    if ( tmp_binop_right_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254342 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }

    tmp_return_value = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
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
    if ((var_a1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a1,
            var_a1.object
        );

    }
    if ((var_M.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_M,
            var_M.object
        );

    }
    if ((var_N.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_N,
            var_N.object
        );

    }
    if ((var_geqp3.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_geqp3,
            var_geqp3.object
        );

    }
    if ((var_qr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_qr,
            var_qr.object
        );

    }
    if ((var_jpvt.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_jpvt,
            var_jpvt.object
        );

    }
    if ((var_tau.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tau,
            var_tau.object
        );

    }
    if ((var_geqrf.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_geqrf,
            var_geqrf.object
        );

    }
    if ((var_R.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_R,
            var_R.object
        );

    }
    if ((var_Rj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Rj,
            var_Rj.object
        );

    }
    if ((var_gor_un_gqr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gor_un_gqr,
            var_gor_un_gqr.object
        );

    }
    if ((var_Q.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Q,
            var_Q.object
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
    if ((var_qqr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_qqr,
            var_qqr.object
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
    if ((par_lwork.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lwork,
            par_lwork.object
        );

    }
    if ((par_mode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mode,
            par_mode.object
        );

    }
    if ((par_pivoting.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pivoting,
            par_pivoting.object
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
static PyObject *fparse_function_2_qr_of_module_scipy$linalg$decomp_qr( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_overwrite_a = NULL;
    PyObject *_python_par_lwork = NULL;
    PyObject *_python_par_mode = NULL;
    PyObject *_python_par_pivoting = NULL;
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
                PyErr_Format( PyExc_TypeError, "qr() keywords must be strings" );
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
            if ( found == false && const_str_plain_lwork == key )
            {
                assert( _python_par_lwork == NULL );
                _python_par_lwork = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_mode == key )
            {
                assert( _python_par_mode == NULL );
                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_pivoting == key )
            {
                assert( _python_par_pivoting == NULL );
                _python_par_pivoting = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_lwork, key ) == 1 )
            {
                assert( _python_par_lwork == NULL );
                _python_par_lwork = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mode, key ) == 1 )
            {
                assert( _python_par_mode == NULL );
                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_pivoting, key ) == 1 )
            {
                assert( _python_par_pivoting == NULL );
                _python_par_pivoting = value;

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
                   "qr() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_overwrite_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_overwrite_a = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_overwrite_a == NULL )
    {
        if ( 1 + self->m_defaults_given >= 6  )
        {
            _python_par_overwrite_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_lwork != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_lwork = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_lwork == NULL )
    {
        if ( 2 + self->m_defaults_given >= 6  )
        {
            _python_par_lwork = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_mode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_mode = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_mode == NULL )
    {
        if ( 3 + self->m_defaults_given >= 6  )
        {
            _python_par_mode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_pivoting != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_pivoting = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_pivoting == NULL )
    {
        if ( 4 + self->m_defaults_given >= 6  )
        {
            _python_par_pivoting = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_a == NULL || _python_par_overwrite_a == NULL || _python_par_lwork == NULL || _python_par_mode == NULL || _python_par_pivoting == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_overwrite_a, _python_par_lwork, _python_par_mode, _python_par_pivoting, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_qr_of_module_scipy$linalg$decomp_qr( self, _python_par_a, _python_par_overwrite_a, _python_par_lwork, _python_par_mode, _python_par_pivoting, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_overwrite_a );
    Py_XDECREF( _python_par_lwork );
    Py_XDECREF( _python_par_mode );
    Py_XDECREF( _python_par_pivoting );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_2_qr_of_module_scipy$linalg$decomp_qr( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_2_qr_of_module_scipy$linalg$decomp_qr( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_qr_of_module_scipy$linalg$decomp_qr( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_qr_multiply_of_module_scipy$linalg$decomp_qr( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_c, PyObject *_python_par_mode, PyObject *_python_par_pivoting, PyObject *_python_par_conjugate, PyObject *_python_par_overwrite_a, PyObject *_python_par_overwrite_c )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_c; par_c.object = _python_par_c;
    PyObjectLocalVariable par_mode; par_mode.object = _python_par_mode;
    PyObjectLocalVariable par_pivoting; par_pivoting.object = _python_par_pivoting;
    PyObjectLocalVariable par_conjugate; par_conjugate.object = _python_par_conjugate;
    PyObjectLocalVariable par_overwrite_a; par_overwrite_a.object = _python_par_overwrite_a;
    PyObjectLocalVariable par_overwrite_c; par_overwrite_c.object = _python_par_overwrite_c;
    PyObjectLocalVariable var_onedim;
    PyObjectLocalVariable var_M;
    PyObjectLocalVariable var_N;
    PyObjectLocalVariable var_raw;
    PyObjectLocalVariable var_Q;
    PyObjectLocalVariable var_tau;
    PyObjectLocalVariable var_gor_un_mqr;
    PyObjectLocalVariable var_trans;
    PyObjectLocalVariable var_cc;
    PyObjectLocalVariable var_lr;
    PyObjectLocalVariable var_cQ;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_and_2__value_1;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_and_3__value_1;
    PyObjectTempVariable tmp_and_4__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
    PyObjectTempVariable tmp_and_5__value_1;
    PyObjectTempVariable tmp_and_5__value_2;
    PyObjectTempVariable tmp_and_6__value_1;
    PyObjectTempVariable tmp_or_3__value_1;
    PyObjectTempVariable tmp_tuple_unpack_4__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_4__element_1;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_In_1;
    int tmp_cmp_NotEq_1;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_left_8;
    PyObject *tmp_compexpr_left_9;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    PyObject *tmp_compexpr_right_8;
    PyObject *tmp_compexpr_right_9;
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
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_sliceobj_upper_1;
    PyObject *tmp_sliceobj_upper_2;
    PyObject *tmp_sliceobj_upper_3;
    PyObject *tmp_sliceobj_upper_4;
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
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_subscript_6;
    PyObject *tmp_subscr_subscript_7;
    PyObject *tmp_subscr_subscript_8;
    PyObject *tmp_subscr_subscript_9;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_subscr_target_5;
    PyObject *tmp_subscr_target_6;
    PyObject *tmp_subscr_target_7;
    PyObject *tmp_subscr_target_8;
    PyObject *tmp_subscr_target_9;
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
    PyObject *tmp_unary_arg_2;
    PyObject *tmp_unary_arg_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6c2aeb88896d95d5ff6fbb7db3f70eaf, module_scipy$linalg$decomp_qr );
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
    tmp_compare_left_1 = par_mode.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LIST_COPY( const_list_str_plain_left_str_plain_right_list );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
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
    tmp_make_exception_arg_1 = const_str_digest_bb8b1cc1a54727d351339f79a000eca8;
    frame_function->f_lineno = 235;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 235;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray_chkfinite );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_c.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 236;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    if (par_c.object == NULL)
    {
        par_c.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_c.object;
        par_c.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_source_name_2 = par_c.object;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_assign_source_2 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    assert( var_onedim.object == NULL );
    var_onedim.object = tmp_assign_source_2;

    tmp_cond_value_1 = var_onedim.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
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
    tmp_source_name_3 = par_c.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_reshape );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_int_pos_1;
    tmp_len_arg_1 = par_c.object;

    tmp_call_arg_element_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 239;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    assert( par_c.object != NULL );
    {
        PyObject *old = par_c.object;
        par_c.object = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_compare_left_2 = par_mode.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_str_plain_left;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
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
    tmp_source_name_4 = par_c.object;

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_T );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    assert( par_c.object != NULL );
    {
        PyObject *old = par_c.object;
        par_c.object = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_3:;
    branch_no_2:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_asarray );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = par_a.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 243;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    if (par_a.object == NULL)
    {
        par_a.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = par_a.object;
        par_a.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    // Tried code
    tmp_source_name_6 = par_a.object;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto try_finally_handler_1;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto try_finally_handler_1;
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


        frame_function->f_lineno = 244;
        goto try_finally_handler_1;
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


        frame_function->f_lineno = 244;
        goto try_finally_handler_1;
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
    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1.object;

    assert( var_M.object == NULL );
    var_M.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2.object;

    assert( var_N.object == NULL );
    var_N.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

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
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_unary_arg_1 = NULL;
    // Tried code
    // Tried code
    tmp_assign_source_11 = NULL;
    // Tried code
    tmp_compexpr_left_2 = par_mode.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto try_finally_handler_5;
    }

    tmp_compexpr_right_2 = const_str_plain_left;
    tmp_assign_source_12 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_5;
    }
    assert( tmp_and_3__value_1.object == NULL );
    tmp_and_3__value_1.object = tmp_assign_source_12;

    tmp_cond_value_3 = tmp_and_3__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_5;
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
    tmp_assign_source_11 = NULL;
    // Tried code
    tmp_assign_source_11 = NULL;
    // Tried code
    tmp_result = tmp_and_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_3__value_1.object );
        tmp_and_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_assign_source_11 = NULL;
    // Tried code
    // Tried code
    tmp_assign_source_13 = NULL;
    // Tried code
    tmp_unary_arg_2 = par_overwrite_c.object;

    if ( tmp_unary_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254390 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto try_finally_handler_10;
    }

    tmp_assign_source_14 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto try_finally_handler_10;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_14 );

    tmp_cond_value_4 = tmp_and_1__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto try_finally_handler_10;
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
    tmp_assign_source_13 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto try_finally_handler_11;
    }
    tmp_call_arg_element_5 = var_M.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto try_finally_handler_11;
    }

    tmp_call_arg_element_6 = var_N.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto try_finally_handler_11;
    }

    frame_function->f_lineno = 246;
    tmp_compexpr_left_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto try_finally_handler_11;
    }
    tmp_source_name_7 = par_c.object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto try_finally_handler_11;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        frame_function->f_lineno = 246;
        goto try_finally_handler_11;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compexpr_right_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        frame_function->f_lineno = 246;
        goto try_finally_handler_11;
    }
    tmp_assign_source_13 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto try_finally_handler_11;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
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

        goto try_finally_handler_10;
    }

    goto finally_end_2;
    finally_end_2:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_13 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_assign_source_13 );
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
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

        goto try_finally_handler_9;
    }

    goto finally_end_3;
    finally_end_3:;
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_13;

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
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

        goto try_finally_handler_8;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_cond_value_5 = tmp_or_1__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto try_finally_handler_8;
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
    tmp_assign_source_11 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_assign_source_11 );
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_11 = NULL;
    // Tried code
    tmp_assign_source_11 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_assign_source_11 = NULL;
    // Tried code
    tmp_assign_source_15 = par_overwrite_c.object;

    if ( tmp_assign_source_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254390 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto try_finally_handler_14;
    }

    assert( tmp_and_2__value_1.object == NULL );
    tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    tmp_cond_value_6 = tmp_and_2__value_1.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto try_finally_handler_14;
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
    tmp_assign_source_11 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_4 = var_M.object;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto try_finally_handler_15;
    }

    tmp_source_name_8 = par_c.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto try_finally_handler_15;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto try_finally_handler_15;
    }
    tmp_subscr_subscript_2 = const_int_0;
    tmp_compexpr_right_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto try_finally_handler_15;
    }
    tmp_assign_source_11 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto try_finally_handler_15;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_15:;
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

        goto try_finally_handler_14;
    }

    goto finally_end_5;
    finally_end_5:;
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_11 = tmp_and_2__value_1.object;

    Py_INCREF( tmp_assign_source_11 );
    condexpr_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_14:;
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

        goto try_finally_handler_13;
    }

    goto finally_end_6;
    finally_end_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_13:;
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

        goto try_finally_handler_12;
    }

    goto finally_end_7;
    finally_end_7:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
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
    condexpr_end_3:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto try_finally_handler_7;
    }

    goto finally_end_9;
    finally_end_9:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
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

        goto try_finally_handler_6;
    }

    goto finally_end_10;
    finally_end_10:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto try_finally_handler_5;
    }

    goto finally_end_11;
    finally_end_11:;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_11 = tmp_and_3__value_1.object;

    Py_INCREF( tmp_assign_source_11 );
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
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

        goto try_finally_handler_4;
    }

    goto finally_end_12;
    finally_end_12:;
    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = tmp_assign_source_11;

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_3__value_1.object );
    tmp_and_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_13 != NULL )
    {
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;

        goto try_finally_handler_3;
    }

    goto finally_end_13;
    finally_end_13:;
    tmp_cond_value_7 = tmp_or_2__value_1.object;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_3;
    }
    if (tmp_cond_truth_7 == 1)
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_unary_arg_1 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_unary_arg_1 );
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_compexpr_left_5 = par_mode.object;

    if ( tmp_compexpr_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 248;
        goto try_finally_handler_18;
    }

    tmp_compexpr_right_5 = const_str_plain_right;
    tmp_assign_source_16 = RICH_COMPARE_EQ( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 248;
        goto try_finally_handler_18;
    }
    assert( tmp_and_4__value_1.object == NULL );
    tmp_and_4__value_1.object = tmp_assign_source_16;

    tmp_cond_value_8 = tmp_and_4__value_1.object;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 248;
        goto try_finally_handler_18;
    }
    if (tmp_cond_truth_8 == 1)
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_result = tmp_and_4__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_4__value_1.object );
        tmp_and_4__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_6 = var_M.object;

    if ( tmp_compexpr_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 248;
        goto try_finally_handler_19;
    }

    tmp_source_name_9 = par_c.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 248;
        goto try_finally_handler_19;
    }

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 248;
        goto try_finally_handler_19;
    }
    tmp_subscr_subscript_3 = const_int_pos_1;
    tmp_compexpr_right_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_compexpr_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 248;
        goto try_finally_handler_19;
    }
    tmp_unary_arg_1 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_right_6 );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 248;
        goto try_finally_handler_19;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_19:;
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

        goto try_finally_handler_18;
    }

    goto finally_end_14;
    finally_end_14:;
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_unary_arg_1 = tmp_and_4__value_1.object;

    Py_INCREF( tmp_unary_arg_1 );
    condexpr_end_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_18:;
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

        goto try_finally_handler_17;
    }

    goto finally_end_15;
    finally_end_15:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_17:;
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

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_4__value_1.object );
    tmp_and_4__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_17 != NULL )
    {
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;

        goto try_finally_handler_3;
    }

    goto finally_end_17;
    finally_end_17:;
    condexpr_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
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

        goto try_finally_handler_2;
    }

    goto finally_end_18;
    finally_end_18:;
    tmp_cond_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    Py_DECREF( tmp_unary_arg_1 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_2;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_19 != NULL )
    {
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;

        goto frame_exception_exit_1;
    }

    goto finally_end_19;
    finally_end_19:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
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
    tmp_make_exception_arg_2 = const_str_digest_80cebe757e074d1948b34cda8bab066a;
    frame_function->f_lineno = 249;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 249;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_qr );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_qr );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254447 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = par_a.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = par_overwrite_a.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = Py_None;
    tmp_call_arg_element_10 = const_str_plain_raw;
    tmp_call_arg_element_11 = par_pivoting.object;

    if ( tmp_call_arg_element_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 253948 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 251;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS5( tmp_called_5, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9, tmp_call_arg_element_10, tmp_call_arg_element_11 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    assert( var_raw.object == NULL );
    var_raw.object = tmp_assign_source_17;

    // Tried code
    tmp_subscr_target_4 = var_raw.object;

    tmp_subscr_subscript_4 = const_int_0;
    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 252;
        goto try_finally_handler_20;
    }
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 252;
        goto try_finally_handler_20;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_18;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_19 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 252;
        goto try_finally_handler_20;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_19;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_20 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
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


        frame_function->f_lineno = 252;
        goto try_finally_handler_20;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_20;

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

            goto try_finally_handler_20;
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

        goto try_finally_handler_20;
    }
    tmp_assign_source_21 = tmp_tuple_unpack_2__element_1.object;

    assert( var_Q.object == NULL );
    var_Q.object = INCREASE_REFCOUNT( tmp_assign_source_21 );

    tmp_assign_source_22 = tmp_tuple_unpack_2__element_2.object;

    assert( var_tau.object == NULL );
    var_tau.object = INCREASE_REFCOUNT( tmp_assign_source_22 );

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_20:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2.object );
    tmp_tuple_unpack_2__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
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
    // Tried code
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 254;
        goto try_finally_handler_21;
    }

    tmp_call_arg_element_12 = const_tuple_str_plain_ormqr_tuple;
    tmp_call_arg_element_13 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_Q.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254295 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 254;
        goto try_finally_handler_21;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_13, 0, tmp_tuple_element_1 );
    frame_function->f_lineno = 254;
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_12, tmp_call_arg_element_13 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto try_finally_handler_21;
    }
    tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto try_finally_handler_21;
    }
    assert( tmp_tuple_unpack_3__source_iter.object == NULL );
    tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_23;

    tmp_unpack_5 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_24 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 0 );
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


        frame_function->f_lineno = 254;
        goto try_finally_handler_21;
    }
    assert( tmp_tuple_unpack_3__element_1.object == NULL );
    tmp_tuple_unpack_3__element_1.object = tmp_assign_source_24;

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

            goto try_finally_handler_21;
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

        goto try_finally_handler_21;
    }
    tmp_assign_source_25 = tmp_tuple_unpack_3__element_1.object;

    assert( var_gor_un_mqr.object == NULL );
    var_gor_un_mqr.object = INCREASE_REFCOUNT( tmp_assign_source_25 );

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_21:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_3__source_iter.object );
    tmp_tuple_unpack_3__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1.object );
    tmp_tuple_unpack_3__element_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_21 != NULL )
    {
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;

        goto frame_exception_exit_1;
    }

    goto finally_end_21;
    finally_end_21:;
    tmp_source_name_10 = var_gor_un_mqr.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254478 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_typecode );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_tuple_str_plain_s_str_plain_d_tuple;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_26 = const_str_plain_T;
    assert( var_trans.object == NULL );
    var_trans.object = INCREASE_REFCOUNT( tmp_assign_source_26 );

    goto branch_end_5;
    branch_no_5:;
    tmp_assign_source_27 = const_str_plain_C;
    assert( var_trans.object == NULL );
    var_trans.object = INCREASE_REFCOUNT( tmp_assign_source_27 );

    branch_end_5:;
    tmp_subscr_target_5 = var_Q.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254295 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_5 = PyTuple_New( 2 );
    tmp_tuple_element_2 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_5, 0, tmp_tuple_element_2 );
    tmp_called_7 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_5 );

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_14 = var_M.object;

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_15 = var_N.object;

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 260;
    tmp_sliceobj_upper_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    if ( tmp_sliceobj_upper_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_5 );

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = MAKE_SLICEOBJ( Py_None, tmp_sliceobj_upper_1, Py_None );
    Py_DECREF( tmp_sliceobj_upper_1 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_5, 1, tmp_tuple_element_2 );
    tmp_assign_source_28 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_subscript_5 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    if (var_Q.object == NULL)
    {
        var_Q.object = tmp_assign_source_28;
    }
    else
    {
        PyObject *old = var_Q.object;
        var_Q.object = tmp_assign_source_28;
        Py_DECREF( old );
    }
    // Tried code
    tmp_cond_value_9 = NULL;
    // Tried code
    tmp_compexpr_left_7 = var_M.object;

    if ( tmp_compexpr_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto try_finally_handler_23;
    }

    tmp_compexpr_right_7 = var_N.object;

    if ( tmp_compexpr_right_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto try_finally_handler_23;
    }

    tmp_assign_source_29 = RICH_COMPARE_GT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto try_finally_handler_23;
    }
    assert( tmp_and_5__value_2.object == NULL );
    tmp_and_5__value_2.object = tmp_assign_source_29;

    tmp_cond_value_10 = tmp_and_5__value_2.object;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto try_finally_handler_23;
    }
    if (tmp_cond_truth_10 == 1)
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
    tmp_cond_value_9 = NULL;
    // Tried code
    tmp_result = tmp_and_5__value_2.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_5__value_2.object );
        tmp_and_5__value_2.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_9 = NULL;
    // Tried code
    tmp_compexpr_left_8 = par_mode.object;

    if ( tmp_compexpr_left_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto try_finally_handler_26;
    }

    tmp_compexpr_right_8 = const_str_plain_left;
    tmp_assign_source_30 = RICH_COMPARE_EQ( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto try_finally_handler_26;
    }
    assert( tmp_and_5__value_1.object == NULL );
    tmp_and_5__value_1.object = tmp_assign_source_30;

    tmp_cond_value_11 = tmp_and_5__value_1.object;

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto try_finally_handler_26;
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
    tmp_cond_value_9 = NULL;
    // Tried code
    tmp_result = tmp_and_5__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_5__value_1.object );
        tmp_and_5__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_unary_arg_3 = par_overwrite_c.object;

    if ( tmp_unary_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254390 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto try_finally_handler_27;
    }

    tmp_cond_value_9 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_3 );
    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto try_finally_handler_27;
    }
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
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_cond_value_9 = tmp_and_5__value_1.object;

    condexpr_end_8:;
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

    tmp_tried_lineno_10 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_5__value_1.object );
    tmp_and_5__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_10;
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
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_9 = tmp_and_5__value_2.object;

    condexpr_end_7:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_26 != NULL )
    {
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;

        goto try_finally_handler_22;
    }

    goto finally_end_26;
    finally_end_26:;
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto try_finally_handler_22;
    }
    if (tmp_cond_truth_9 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_cond_value_12 = par_conjugate.object;

    if ( tmp_cond_value_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254534 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto try_finally_handler_22;
    }

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto try_finally_handler_22;
    }
    if (tmp_cond_truth_12 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto try_finally_handler_22;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_zeros );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto try_finally_handler_22;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_3 = PyTuple_New( 2 );
    tmp_source_name_12 = par_c.object;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto try_finally_handler_22;
    }

    tmp_subscr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_shape );
    if ( tmp_subscr_target_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_3 );

        frame_function->f_lineno = 263;
        goto try_finally_handler_22;
    }
    tmp_subscr_subscript_6 = const_int_pos_1;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_target_6 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_3 );

        frame_function->f_lineno = 263;
        goto try_finally_handler_22;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_M.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto try_finally_handler_22;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_3 );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_source_name_13 = par_c.object;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto try_finally_handler_22;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_dtype );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 263;
        goto try_finally_handler_22;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_value_2 = const_str_plain_F;
    tmp_dict_key_2 = const_str_plain_order;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 263;
    tmp_assign_source_31 = CALL_FUNCTION( tmp_called_8, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto try_finally_handler_22;
    }
    assert( var_cc.object == NULL );
    var_cc.object = tmp_assign_source_31;

    tmp_source_name_14 = par_c.object;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto try_finally_handler_22;
    }

    tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_T );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto try_finally_handler_22;
    }
    tmp_ass_subscribed_1 = var_cc.object;

    tmp_ass_subscript_1 = PyTuple_New( 2 );
    tmp_tuple_element_5 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_5 );
    tmp_sliceobj_upper_2 = var_N.object;

    if ( tmp_sliceobj_upper_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto try_finally_handler_22;
    }

    tmp_tuple_element_5 = MAKE_SLICEOBJ( Py_None, tmp_sliceobj_upper_2, Py_None );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_5 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto try_finally_handler_22;
    }
    goto branch_end_7;
    branch_no_7:;
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 266;
        goto try_finally_handler_22;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_zeros );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto try_finally_handler_22;
    }
    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_6 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_M.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 266;
        goto try_finally_handler_22;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_tuple_element_6, 0, tmp_tuple_element_7 );
    tmp_source_name_16 = par_c.object;

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 266;
        goto try_finally_handler_22;
    }

    tmp_subscr_target_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_shape );
    if ( tmp_subscr_target_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_6 );

        frame_function->f_lineno = 266;
        goto try_finally_handler_22;
    }
    tmp_subscr_subscript_7 = const_int_pos_1;
    tmp_tuple_element_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    Py_DECREF( tmp_subscr_target_7 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_6 );

        frame_function->f_lineno = 266;
        goto try_finally_handler_22;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_6, 1, tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_6 );
    tmp_call_kw_2 = _PyDict_NewPresized( 2 );
    tmp_source_name_17 = par_c.object;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 266;
        goto try_finally_handler_22;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_dtype );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 266;
        goto try_finally_handler_22;
    }
    tmp_dict_key_3 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_dict_value_4 = const_str_plain_F;
    tmp_dict_key_4 = const_str_plain_order;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 266;
    tmp_assign_source_32 = CALL_FUNCTION( tmp_called_9, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto try_finally_handler_22;
    }
    assert( var_cc.object == NULL );
    var_cc.object = tmp_assign_source_32;

    tmp_ass_subvalue_2 = par_c.object;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto try_finally_handler_22;
    }

    tmp_ass_subscribed_2 = var_cc.object;

    tmp_ass_subscript_2 = PyTuple_New( 2 );
    tmp_sliceobj_upper_3 = var_N.object;

    if ( tmp_sliceobj_upper_3 == NULL )
    {
        Py_DECREF( tmp_ass_subscript_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto try_finally_handler_22;
    }

    tmp_tuple_element_8 = MAKE_SLICEOBJ( Py_None, tmp_sliceobj_upper_3, Py_None );
    PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_8 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscript_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_22;
    }
    tmp_assign_source_33 = const_str_plain_N;
    if (var_trans.object == NULL)
    {
        var_trans.object = INCREASE_REFCOUNT( tmp_assign_source_33 );
    }
    else
    {
        PyObject *old = var_trans.object;
        var_trans.object = INCREASE_REFCOUNT( tmp_assign_source_33 );
        Py_DECREF( old );
    }
    branch_end_7:;
    tmp_cond_value_13 = par_conjugate.object;

    if ( tmp_cond_value_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254534 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 269;
        goto try_finally_handler_22;
    }

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 269;
        goto try_finally_handler_22;
    }
    if (tmp_cond_truth_13 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_34 = const_str_plain_R;
    assert( var_lr.object == NULL );
    var_lr.object = INCREASE_REFCOUNT( tmp_assign_source_34 );

    goto branch_end_8;
    branch_no_8:;
    tmp_assign_source_35 = const_str_plain_L;
    assert( var_lr.object == NULL );
    var_lr.object = INCREASE_REFCOUNT( tmp_assign_source_35 );

    branch_end_8:;
    tmp_assign_source_36 = Py_True;
    if (par_overwrite_c.object == NULL)
    {
        par_overwrite_c.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
    }
    else
    {
        PyObject *old = par_overwrite_c.object;
        par_overwrite_c.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
        Py_DECREF( old );
    }
    goto branch_end_6;
    branch_no_6:;
    // Tried code
    tmp_cond_value_14 = NULL;
    // Tried code
    // Tried code
    tmp_assign_source_37 = NULL;
    // Tried code
    tmp_source_name_18 = par_c.object;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto try_finally_handler_31;
    }

    tmp_subscr_target_8 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_flags );
    if ( tmp_subscr_target_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto try_finally_handler_31;
    }
    tmp_subscr_subscript_8 = const_str_plain_C_CONTIGUOUS;
    tmp_assign_source_38 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    Py_DECREF( tmp_subscr_target_8 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto try_finally_handler_31;
    }
    assert( tmp_and_6__value_1.object == NULL );
    tmp_and_6__value_1.object = tmp_assign_source_38;

    tmp_cond_value_15 = tmp_and_6__value_1.object;

    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto try_finally_handler_31;
    }
    if (tmp_cond_truth_15 == 1)
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_assign_source_37 = NULL;
    // Tried code
    tmp_result = tmp_and_6__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_6__value_1.object );
        tmp_and_6__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_9 = var_trans.object;

    if ( tmp_compexpr_left_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229265 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto try_finally_handler_32;
    }

    tmp_compexpr_right_9 = const_str_plain_T;
    tmp_assign_source_37 = RICH_COMPARE_EQ( tmp_compexpr_left_9, tmp_compexpr_right_9 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto try_finally_handler_32;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_32:;
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

        goto try_finally_handler_31;
    }

    goto finally_end_27;
    finally_end_27:;
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_37 = tmp_and_6__value_1.object;

    Py_INCREF( tmp_assign_source_37 );
    condexpr_end_9:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_31:;
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

        goto try_finally_handler_30;
    }

    goto finally_end_28;
    finally_end_28:;
    assert( tmp_or_3__value_1.object == NULL );
    tmp_or_3__value_1.object = tmp_assign_source_37;

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_30:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_11 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_6__value_1.object );
    tmp_and_6__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_11;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_29 != NULL )
    {
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;

        goto try_finally_handler_29;
    }

    goto finally_end_29;
    finally_end_29:;
    tmp_cond_value_16 = tmp_or_3__value_1.object;

    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto try_finally_handler_29;
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
    tmp_cond_value_14 = tmp_or_3__value_1.object;

    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_cond_value_14 = NULL;
    // Tried code
    tmp_result = tmp_or_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_3__value_1.object );
        tmp_or_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_14 = par_conjugate.object;

    if ( tmp_cond_value_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254534 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto try_finally_handler_33;
    }

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_33:;
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

        goto try_finally_handler_29;
    }

    goto finally_end_30;
    finally_end_30:;
    condexpr_end_10:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_29:;
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

        goto try_finally_handler_28;
    }

    goto finally_end_31;
    finally_end_31:;
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto try_finally_handler_28;
    }
    if (tmp_cond_truth_14 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_19 = par_c.object;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto try_finally_handler_28;
    }

    tmp_assign_source_39 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_T );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto try_finally_handler_28;
    }
    if (var_cc.object == NULL)
    {
        var_cc.object = tmp_assign_source_39;
    }
    else
    {
        PyObject *old = var_cc.object;
        var_cc.object = tmp_assign_source_39;
        Py_DECREF( old );
    }
    tmp_compare_left_4 = par_mode.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 276;
        goto try_finally_handler_28;
    }

    tmp_compare_right_4 = const_str_plain_left;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 276;
        goto try_finally_handler_28;
    }
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_40 = const_str_plain_R;
    if (var_lr.object == NULL)
    {
        var_lr.object = INCREASE_REFCOUNT( tmp_assign_source_40 );
    }
    else
    {
        PyObject *old = var_lr.object;
        var_lr.object = INCREASE_REFCOUNT( tmp_assign_source_40 );
        Py_DECREF( old );
    }
    goto branch_end_10;
    branch_no_10:;
    tmp_assign_source_41 = const_str_plain_L;
    if (var_lr.object == NULL)
    {
        var_lr.object = INCREASE_REFCOUNT( tmp_assign_source_41 );
    }
    else
    {
        PyObject *old = var_lr.object;
        var_lr.object = INCREASE_REFCOUNT( tmp_assign_source_41 );
        Py_DECREF( old );
    }
    branch_end_10:;
    goto branch_end_9;
    branch_no_9:;
    tmp_assign_source_42 = const_str_plain_N;
    if (var_trans.object == NULL)
    {
        var_trans.object = INCREASE_REFCOUNT( tmp_assign_source_42 );
    }
    else
    {
        PyObject *old = var_trans.object;
        var_trans.object = INCREASE_REFCOUNT( tmp_assign_source_42 );
        Py_DECREF( old );
    }
    tmp_assign_source_43 = par_c.object;

    if ( tmp_assign_source_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 282;
        goto try_finally_handler_28;
    }

    if (var_cc.object == NULL)
    {
        var_cc.object = INCREASE_REFCOUNT( tmp_assign_source_43 );
    }
    else
    {
        PyObject *old = var_cc.object;
        var_cc.object = INCREASE_REFCOUNT( tmp_assign_source_43 );
        Py_DECREF( old );
    }
    tmp_compare_left_5 = par_mode.object;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto try_finally_handler_28;
    }

    tmp_compare_right_5 = const_str_plain_left;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto try_finally_handler_28;
    }
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_44 = const_str_plain_L;
    if (var_lr.object == NULL)
    {
        var_lr.object = INCREASE_REFCOUNT( tmp_assign_source_44 );
    }
    else
    {
        PyObject *old = var_lr.object;
        var_lr.object = INCREASE_REFCOUNT( tmp_assign_source_44 );
        Py_DECREF( old );
    }
    goto branch_end_11;
    branch_no_11:;
    tmp_assign_source_45 = const_str_plain_R;
    if (var_lr.object == NULL)
    {
        var_lr.object = INCREASE_REFCOUNT( tmp_assign_source_45 );
    }
    else
    {
        PyObject *old = var_lr.object;
        var_lr.object = INCREASE_REFCOUNT( tmp_assign_source_45 );
        Py_DECREF( old );
    }
    branch_end_11:;
    branch_end_9:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_28:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_12 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_3__value_1.object );
    tmp_or_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_12;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_32 != NULL )
    {
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;

        goto try_finally_handler_22;
    }

    goto finally_end_32;
    finally_end_32:;
    branch_end_6:;
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

    tmp_tried_lineno_13 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_5__value_2.object );
    tmp_and_5__value_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_13;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_33 != NULL )
    {
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;

        goto frame_exception_exit_1;
    }

    goto finally_end_33;
    finally_end_33:;
    // Tried code
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_safecall );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_safecall );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254002 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto try_finally_handler_34;
    }

    tmp_call_pos_3 = PyTuple_New( 7 );
    tmp_tuple_element_9 = var_gor_un_mqr.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254478 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto try_finally_handler_34;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = const_str_digest_a0cc2c732744aac6385401ecdf011525;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 1, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_lr.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254589 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto try_finally_handler_34;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 2, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_trans.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229265 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto try_finally_handler_34;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 3, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_Q.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254295 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto try_finally_handler_34;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 4, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_tau.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185046 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto try_finally_handler_34;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 5, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_cc.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 135777 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto try_finally_handler_34;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 6, tmp_tuple_element_9 );
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_5 = par_overwrite_c.object;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254390 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 288;
        goto try_finally_handler_34;
    }

    tmp_dict_key_5 = const_str_plain_overwrite_c;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_5, tmp_dict_value_5 );
    frame_function->f_lineno = 288;
    tmp_iter_arg_4 = CALL_FUNCTION( tmp_called_10, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 288;
        goto try_finally_handler_34;
    }
    tmp_assign_source_46 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto try_finally_handler_34;
    }
    assert( tmp_tuple_unpack_4__source_iter.object == NULL );
    tmp_tuple_unpack_4__source_iter.object = tmp_assign_source_46;

    tmp_unpack_6 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_47 = UNPACK_PARAMETER_NEXT( tmp_unpack_6, 0 );
    if ( tmp_assign_source_47 == NULL )
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
        goto try_finally_handler_34;
    }
    assert( tmp_tuple_unpack_4__element_1.object == NULL );
    tmp_tuple_unpack_4__element_1.object = tmp_assign_source_47;

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

            goto try_finally_handler_34;
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

        goto try_finally_handler_34;
    }
    tmp_assign_source_48 = tmp_tuple_unpack_4__element_1.object;

    assert( var_cQ.object == NULL );
    var_cQ.object = INCREASE_REFCOUNT( tmp_assign_source_48 );

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_34:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_14 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_4__source_iter.object );
    tmp_tuple_unpack_4__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_1.object );
    tmp_tuple_unpack_4__element_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_14;
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
    tmp_compare_left_6 = var_trans.object;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229265 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = const_str_plain_N;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_20 = var_cQ.object;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254637 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_49 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_T );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    if (var_cQ.object == NULL)
    {
        var_cQ.object = tmp_assign_source_49;
    }
    else
    {
        PyObject *old = var_cQ.object;
        var_cQ.object = tmp_assign_source_49;
        Py_DECREF( old );
    }
    branch_no_12:;
    tmp_compare_left_7 = par_mode.object;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = const_str_plain_right;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_4 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_subscr_target_9 = var_cQ.object;

    if ( tmp_subscr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254637 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_9 = PyTuple_New( 2 );
    tmp_tuple_element_10 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_9, 0, tmp_tuple_element_10 );
    tmp_called_11 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_9 );

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = var_M.object;

    if ( tmp_call_arg_element_16 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_17 = var_N.object;

    if ( tmp_call_arg_element_17 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 292;
    tmp_sliceobj_upper_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_11, tmp_call_arg_element_16, tmp_call_arg_element_17 );
    if ( tmp_sliceobj_upper_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_9 );

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_10 = MAKE_SLICEOBJ( Py_None, tmp_sliceobj_upper_4, Py_None );
    Py_DECREF( tmp_sliceobj_upper_4 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_9, 1, tmp_tuple_element_10 );
    tmp_assign_source_50 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    Py_DECREF( tmp_subscr_subscript_9 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    if (var_cQ.object == NULL)
    {
        var_cQ.object = tmp_assign_source_50;
    }
    else
    {
        PyObject *old = var_cQ.object;
        var_cQ.object = tmp_assign_source_50;
        Py_DECREF( old );
    }
    branch_no_13:;
    tmp_cond_value_17 = var_onedim.object;

    if ( tmp_cond_value_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254685 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_17 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_21 = var_cQ.object;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254637 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 294;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ravel );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 294;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 294;
    tmp_assign_source_51 = CALL_FUNCTION_NO_ARGS( tmp_called_12 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 294;
        goto frame_exception_exit_1;
    }
    if (var_cQ.object == NULL)
    {
        var_cQ.object = tmp_assign_source_51;
    }
    else
    {
        PyObject *old = var_cQ.object;
        var_cQ.object = tmp_assign_source_51;
        Py_DECREF( old );
    }
    branch_no_14:;
    tmp_binop_left_1 = PyTuple_New( 1 );
    tmp_tuple_element_11 = var_cQ.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254637 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_binop_left_1, 0, tmp_tuple_element_11 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_raw.object;

    if ( tmp_slice_source_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 193937 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 296;
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
    if ((var_onedim.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_onedim,
            var_onedim.object
        );

    }
    if ((var_M.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_M,
            var_M.object
        );

    }
    if ((var_N.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_N,
            var_N.object
        );

    }
    if ((var_raw.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_raw,
            var_raw.object
        );

    }
    if ((var_Q.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Q,
            var_Q.object
        );

    }
    if ((var_tau.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tau,
            var_tau.object
        );

    }
    if ((var_gor_un_mqr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gor_un_mqr,
            var_gor_un_mqr.object
        );

    }
    if ((var_trans.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_trans,
            var_trans.object
        );

    }
    if ((var_cc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cc,
            var_cc.object
        );

    }
    if ((var_lr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lr,
            var_lr.object
        );

    }
    if ((var_cQ.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cQ,
            var_cQ.object
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
    if ((par_c.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c,
            par_c.object
        );

    }
    if ((par_mode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mode,
            par_mode.object
        );

    }
    if ((par_pivoting.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pivoting,
            par_pivoting.object
        );

    }
    if ((par_conjugate.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_conjugate,
            par_conjugate.object
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
    if ((par_overwrite_c.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_overwrite_c,
            par_overwrite_c.object
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
static PyObject *fparse_function_3_qr_multiply_of_module_scipy$linalg$decomp_qr( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_c = NULL;
    PyObject *_python_par_mode = NULL;
    PyObject *_python_par_pivoting = NULL;
    PyObject *_python_par_conjugate = NULL;
    PyObject *_python_par_overwrite_a = NULL;
    PyObject *_python_par_overwrite_c = NULL;
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
                PyErr_Format( PyExc_TypeError, "qr_multiply() keywords must be strings" );
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
            if ( found == false && const_str_plain_c == key )
            {
                assert( _python_par_c == NULL );
                _python_par_c = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_mode == key )
            {
                assert( _python_par_mode == NULL );
                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_pivoting == key )
            {
                assert( _python_par_pivoting == NULL );
                _python_par_pivoting = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_conjugate == key )
            {
                assert( _python_par_conjugate == NULL );
                _python_par_conjugate = value;

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
            if ( found == false && const_str_plain_overwrite_c == key )
            {
                assert( _python_par_overwrite_c == NULL );
                _python_par_overwrite_c = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_c, key ) == 1 )
            {
                assert( _python_par_c == NULL );
                _python_par_c = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mode, key ) == 1 )
            {
                assert( _python_par_mode == NULL );
                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_pivoting, key ) == 1 )
            {
                assert( _python_par_pivoting == NULL );
                _python_par_pivoting = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_conjugate, key ) == 1 )
            {
                assert( _python_par_conjugate == NULL );
                _python_par_conjugate = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_overwrite_c, key ) == 1 )
            {
                assert( _python_par_overwrite_c == NULL );
                _python_par_overwrite_c = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "qr_multiply() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 0 + self->m_defaults_given >= 7  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_c != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_c = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_c == NULL )
    {
        if ( 1 + self->m_defaults_given >= 7  )
        {
            _python_par_c = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_mode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_mode = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_mode == NULL )
    {
        if ( 2 + self->m_defaults_given >= 7  )
        {
            _python_par_mode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_pivoting != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_pivoting = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_pivoting == NULL )
    {
        if ( 3 + self->m_defaults_given >= 7  )
        {
            _python_par_pivoting = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_conjugate != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_conjugate = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_conjugate == NULL )
    {
        if ( 4 + self->m_defaults_given >= 7  )
        {
            _python_par_conjugate = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_overwrite_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_overwrite_a = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_overwrite_a == NULL )
    {
        if ( 5 + self->m_defaults_given >= 7  )
        {
            _python_par_overwrite_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_overwrite_c != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_overwrite_c = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_overwrite_c == NULL )
    {
        if ( 6 + self->m_defaults_given >= 7  )
        {
            _python_par_overwrite_c = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 7 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_a == NULL || _python_par_c == NULL || _python_par_mode == NULL || _python_par_pivoting == NULL || _python_par_conjugate == NULL || _python_par_overwrite_a == NULL || _python_par_overwrite_c == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_c, _python_par_mode, _python_par_pivoting, _python_par_conjugate, _python_par_overwrite_a, _python_par_overwrite_c };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_qr_multiply_of_module_scipy$linalg$decomp_qr( self, _python_par_a, _python_par_c, _python_par_mode, _python_par_pivoting, _python_par_conjugate, _python_par_overwrite_a, _python_par_overwrite_c );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_c );
    Py_XDECREF( _python_par_mode );
    Py_XDECREF( _python_par_pivoting );
    Py_XDECREF( _python_par_conjugate );
    Py_XDECREF( _python_par_overwrite_a );
    Py_XDECREF( _python_par_overwrite_c );

    return NULL;
}

static PyObject *dparse_function_3_qr_multiply_of_module_scipy$linalg$decomp_qr( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 7 )
    {
        return impl_function_3_qr_multiply_of_module_scipy$linalg$decomp_qr( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_qr_multiply_of_module_scipy$linalg$decomp_qr( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_rq_of_module_scipy$linalg$decomp_qr( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_overwrite_a, PyObject *_python_par_lwork, PyObject *_python_par_mode, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_overwrite_a; par_overwrite_a.object = _python_par_overwrite_a;
    PyObjectLocalVariable par_lwork; par_lwork.object = _python_par_lwork;
    PyObjectLocalVariable par_mode; par_mode.object = _python_par_mode;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_a1;
    PyObjectLocalVariable var_M;
    PyObjectLocalVariable var_N;
    PyObjectLocalVariable var_gerqf;
    PyObjectLocalVariable var_rq;
    PyObjectLocalVariable var_tau;
    PyObjectLocalVariable var_work;
    PyObjectLocalVariable var_info;
    PyObjectLocalVariable var_R;
    PyObjectLocalVariable var_gor_un_grq;
    PyObjectLocalVariable var_Q;
    PyObjectLocalVariable var_rq1;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
    PyObjectTempVariable tmp_tuple_unpack_3__element_2;
    PyObjectTempVariable tmp_tuple_unpack_3__element_3;
    PyObjectTempVariable tmp_tuple_unpack_3__element_4;
    PyObjectTempVariable tmp_tuple_unpack_4__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_4__element_1;
    PyObjectTempVariable tmp_tuple_unpack_4__element_2;
    PyObjectTempVariable tmp_tuple_unpack_4__element_3;
    PyObjectTempVariable tmp_tuple_unpack_4__element_4;
    PyObjectTempVariable tmp_or_3__value_1;
    PyObjectTempVariable tmp_tuple_unpack_5__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_5__element_1;
    PyObjectTempVariable tmp_tuple_unpack_6__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_6__element_1;
    PyObjectTempVariable tmp_tuple_unpack_6__element_2;
    PyObjectTempVariable tmp_tuple_unpack_6__element_3;
    PyObjectTempVariable tmp_tuple_unpack_7__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_7__element_1;
    PyObjectTempVariable tmp_tuple_unpack_7__element_2;
    PyObjectTempVariable tmp_tuple_unpack_7__element_3;
    PyObjectTempVariable tmp_tuple_unpack_8__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_8__element_1;
    PyObjectTempVariable tmp_tuple_unpack_8__element_2;
    PyObjectTempVariable tmp_tuple_unpack_8__element_3;
    PyObjectTempVariable tmp_tuple_unpack_9__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_9__element_1;
    PyObjectTempVariable tmp_tuple_unpack_9__element_2;
    PyObjectTempVariable tmp_tuple_unpack_9__element_3;
    PyObjectTempVariable tmp_tuple_unpack_10__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_10__element_1;
    PyObjectTempVariable tmp_tuple_unpack_10__element_2;
    PyObjectTempVariable tmp_tuple_unpack_10__element_3;
    PyObjectTempVariable tmp_tuple_unpack_11__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_11__element_1;
    PyObjectTempVariable tmp_tuple_unpack_11__element_2;
    PyObjectTempVariable tmp_tuple_unpack_11__element_3;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_kw_4;
    PyObject *tmp_call_kw_5;
    PyObject *tmp_call_kw_6;
    PyObject *tmp_call_kw_7;
    PyObject *tmp_call_kw_8;
    PyObject *tmp_call_kw_9;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_call_pos_3;
    PyObject *tmp_call_pos_4;
    PyObject *tmp_call_pos_5;
    PyObject *tmp_call_pos_6;
    PyObject *tmp_call_pos_7;
    PyObject *tmp_call_pos_8;
    PyObject *tmp_call_pos_9;
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
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    int tmp_cmp_Lt_3;
    int tmp_cmp_NotEq_1;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
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
    PyObject *tmp_frame_locals;
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
    PyObject *tmp_iterator_attempt_3;
    PyObject *tmp_iterator_attempt_4;
    PyObject *tmp_iterator_attempt_5;
    PyObject *tmp_iterator_attempt_6;
    PyObject *tmp_iterator_attempt_7;
    PyObject *tmp_iterator_attempt_8;
    PyObject *tmp_iterator_attempt_9;
    PyObject *tmp_iterator_attempt_10;
    PyObject *tmp_iterator_attempt_11;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_iterator_name_5;
    PyObject *tmp_iterator_name_6;
    PyObject *tmp_iterator_name_7;
    PyObject *tmp_iterator_name_8;
    PyObject *tmp_iterator_name_9;
    PyObject *tmp_iterator_name_10;
    PyObject *tmp_iterator_name_11;
    PyObject *tmp_len_arg_1;
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
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_sliceass_lower_1;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_value_1;
    PyObject *tmp_sliceobj_lower_1;
    PyObject *tmp_sliceobj_lower_2;
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
    int tmp_tried_lineno_7;
    int tmp_tried_lineno_8;
    int tmp_tried_lineno_9;
    int tmp_tried_lineno_10;
    int tmp_tried_lineno_11;
    int tmp_tried_lineno_12;
    int tmp_tried_lineno_13;
    int tmp_tried_lineno_14;
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
    PyObject *tmp_unary_arg_3;
    PyObject *tmp_unary_arg_4;
    PyObject *tmp_unary_arg_5;
    PyObject *tmp_unary_arg_6;
    PyObject *tmp_unary_arg_7;
    PyObject *tmp_unary_arg_8;
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
    PyObject *tmp_unpack_14;
    PyObject *tmp_unpack_15;
    PyObject *tmp_unpack_16;
    PyObject *tmp_unpack_17;
    PyObject *tmp_unpack_18;
    PyObject *tmp_unpack_19;
    PyObject *tmp_unpack_20;
    PyObject *tmp_unpack_21;
    PyObject *tmp_unpack_22;
    PyObject *tmp_unpack_23;
    PyObject *tmp_unpack_24;
    PyObject *tmp_unpack_25;
    PyObject *tmp_unpack_26;
    PyObject *tmp_unpack_27;
    PyObject *tmp_unpack_28;
    PyObject *tmp_unpack_29;
    PyObject *tmp_unpack_30;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c02b3df0bf5471e316ca8953ab08b144, module_scipy$linalg$decomp_qr );
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
    tmp_compare_left_1 = par_mode.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LIST_COPY( const_list_str_plain_full_str_plain_r_str_plain_economic_list );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
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
    tmp_make_exception_arg_1 = const_str_digest_e99401cdba8ae1f116aadb9b45a47a89;
    frame_function->f_lineno = 355;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 355;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_cond_value_1 = par_check_finite.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243662 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 358;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 358;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 359;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray_chkfinite );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 359;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_a.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 359;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 359;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 359;
        goto frame_exception_exit_1;
    }
    assert( var_a1.object == NULL );
    var_a1.object = tmp_assign_source_1;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_a.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 361;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }
    assert( var_a1.object == NULL );
    var_a1.object = tmp_assign_source_2;

    branch_end_2:;
    tmp_source_name_3 = var_a1.object;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_2 = const_str_digest_d28cac11cb69aacda04126eb9e8c97c4;
    frame_function->f_lineno = 363;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 363;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 363;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    // Tried code
    tmp_source_name_4 = var_a1.object;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
        goto try_finally_handler_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
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


        frame_function->f_lineno = 364;
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


        frame_function->f_lineno = 364;
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

    assert( var_M.object == NULL );
    var_M.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2.object;

    assert( var_N.object == NULL );
    var_N.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

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
    // Tried code
    tmp_assign_source_8 = NULL;
    // Tried code
    tmp_assign_source_9 = par_overwrite_a.object;

    if ( tmp_assign_source_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 365;
        goto try_finally_handler_3;
    }

    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 365;
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
    tmp_assign_source_8 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_assign_source_8 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_8 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain__datacopied );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__datacopied );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244212 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 365;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_3 = var_a1.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 365;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_4 = par_a.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 365;
        goto try_finally_handler_4;
    }

    frame_function->f_lineno = 365;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 365;
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
    if (par_overwrite_a.object == NULL)
    {
        par_overwrite_a.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = par_overwrite_a.object;
        par_overwrite_a.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
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

        goto frame_exception_exit_1;
    }

    goto finally_end_4;
    finally_end_4:;
    // Tried code
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 367;
        goto try_finally_handler_5;
    }

    tmp_call_arg_element_5 = const_tuple_str_plain_gerqf_tuple;
    tmp_call_arg_element_6 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_a1.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 367;
        goto try_finally_handler_5;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_6, 0, tmp_tuple_element_1 );
    frame_function->f_lineno = 367;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 367;
        goto try_finally_handler_5;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 367;
        goto try_finally_handler_5;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_10;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_11 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 367;
        goto try_finally_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_11;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_5;
    }
    tmp_assign_source_12 = tmp_tuple_unpack_2__element_1.object;

    assert( var_gerqf.object == NULL );
    var_gerqf.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

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
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

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
    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_compexpr_left_1 = par_lwork.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244354 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 368;
        goto try_finally_handler_7;
    }

    tmp_compexpr_right_1 = Py_None;
    tmp_assign_source_13 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

    tmp_cond_value_4 = tmp_or_2__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
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
    tmp_cond_value_3 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_cond_value_3 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = par_lwork.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244354 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 368;
        goto try_finally_handler_8;
    }

    tmp_compexpr_right_2 = const_int_neg_1;
    tmp_cond_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
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
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 368;
        goto try_finally_handler_6;
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
    // Tried code
    tmp_called_5 = var_gerqf.object;

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254737 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 370;
        goto try_finally_handler_9;
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
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_9edb306c9f9c5c2d096ac013fc19025b );
    frame_function->f_lineno = 370;
    tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_5, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto try_finally_handler_9;
    }
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_3__source_iter.object == NULL );
    tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_14;

    tmp_unpack_4 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_15 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 0 );
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


        frame_function->f_lineno = 370;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_3__element_1.object == NULL );
    tmp_tuple_unpack_3__element_1.object = tmp_assign_source_15;

    tmp_unpack_5 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_16 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 1 );
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


        frame_function->f_lineno = 370;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_3__element_2.object == NULL );
    tmp_tuple_unpack_3__element_2.object = tmp_assign_source_16;

    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_17 = UNPACK_PARAMETER_NEXT( tmp_unpack_6, 2 );
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


        frame_function->f_lineno = 370;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_3__element_3.object == NULL );
    tmp_tuple_unpack_3__element_3.object = tmp_assign_source_17;

    tmp_unpack_7 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_18 = UNPACK_PARAMETER_NEXT( tmp_unpack_7, 3 );
    if ( tmp_assign_source_18 == NULL )
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
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_3__element_4.object == NULL );
    tmp_tuple_unpack_3__element_4.object = tmp_assign_source_18;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_9;
    }
    tmp_assign_source_19 = tmp_tuple_unpack_3__element_1.object;

    assert( var_rq.object == NULL );
    var_rq.object = INCREASE_REFCOUNT( tmp_assign_source_19 );

    tmp_assign_source_20 = tmp_tuple_unpack_3__element_2.object;

    assert( var_tau.object == NULL );
    var_tau.object = INCREASE_REFCOUNT( tmp_assign_source_20 );

    tmp_assign_source_21 = tmp_tuple_unpack_3__element_3.object;

    assert( var_work.object == NULL );
    var_work.object = INCREASE_REFCOUNT( tmp_assign_source_21 );

    tmp_assign_source_22 = tmp_tuple_unpack_3__element_4.object;

    assert( var_info.object == NULL );
    var_info.object = INCREASE_REFCOUNT( tmp_assign_source_22 );

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

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_3__source_iter.object );
    tmp_tuple_unpack_3__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1.object );
    tmp_tuple_unpack_3__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2.object );
    tmp_tuple_unpack_3__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_3.object );
    tmp_tuple_unpack_3__element_3.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_4.object );
    tmp_tuple_unpack_3__element_4.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto try_finally_handler_6;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_subscr_target_1 = var_work.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 201590 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 371;
        goto try_finally_handler_6;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_source_name_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto try_finally_handler_6;
    }
    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_real );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto try_finally_handler_6;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_astype );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto try_finally_handler_6;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 371;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_int );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 371;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 371;
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto try_finally_handler_6;
    }
    if (par_lwork.object == NULL)
    {
        par_lwork.object = tmp_assign_source_23;
    }
    else
    {
        PyObject *old = par_lwork.object;
        par_lwork.object = tmp_assign_source_23;
        Py_DECREF( old );
    }
    branch_no_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
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

    goto finally_end_9;
    finally_end_9:;
    // Tried code
    tmp_called_7 = var_gerqf.object;

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254737 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto try_finally_handler_10;
    }

    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_a1.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto try_finally_handler_10;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_3 );
    tmp_call_kw_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_lwork.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244354 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto try_finally_handler_10;
    }

    tmp_dict_key_1 = const_str_plain_lwork;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_overwrite_a.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto try_finally_handler_10;
    }

    tmp_dict_key_2 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 372;
    tmp_iter_arg_4 = CALL_FUNCTION( tmp_called_7, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_10;
    }
    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_10;
    }
    assert( tmp_tuple_unpack_4__source_iter.object == NULL );
    tmp_tuple_unpack_4__source_iter.object = tmp_assign_source_24;

    tmp_unpack_8 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_25 = UNPACK_PARAMETER_NEXT( tmp_unpack_8, 0 );
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


        frame_function->f_lineno = 372;
        goto try_finally_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_1.object == NULL );
    tmp_tuple_unpack_4__element_1.object = tmp_assign_source_25;

    tmp_unpack_9 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_26 = UNPACK_PARAMETER_NEXT( tmp_unpack_9, 1 );
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


        frame_function->f_lineno = 372;
        goto try_finally_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_2.object == NULL );
    tmp_tuple_unpack_4__element_2.object = tmp_assign_source_26;

    tmp_unpack_10 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_27 = UNPACK_PARAMETER_NEXT( tmp_unpack_10, 2 );
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


        frame_function->f_lineno = 372;
        goto try_finally_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_3.object == NULL );
    tmp_tuple_unpack_4__element_3.object = tmp_assign_source_27;

    tmp_unpack_11 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_28 = UNPACK_PARAMETER_NEXT( tmp_unpack_11, 3 );
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


        frame_function->f_lineno = 372;
        goto try_finally_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_4.object == NULL );
    tmp_tuple_unpack_4__element_4.object = tmp_assign_source_28;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_10;
    }
    tmp_assign_source_29 = tmp_tuple_unpack_4__element_1.object;

    if (var_rq.object == NULL)
    {
        var_rq.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
    }
    else
    {
        PyObject *old = var_rq.object;
        var_rq.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
        Py_DECREF( old );
    }
    tmp_assign_source_30 = tmp_tuple_unpack_4__element_2.object;

    if (var_tau.object == NULL)
    {
        var_tau.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
    }
    else
    {
        PyObject *old = var_tau.object;
        var_tau.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
        Py_DECREF( old );
    }
    tmp_assign_source_31 = tmp_tuple_unpack_4__element_3.object;

    if (var_work.object == NULL)
    {
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_31 );
    }
    else
    {
        PyObject *old = var_work.object;
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_31 );
        Py_DECREF( old );
    }
    tmp_assign_source_32 = tmp_tuple_unpack_4__element_4.object;

    if (var_info.object == NULL)
    {
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
    }
    else
    {
        PyObject *old = var_info.object;
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
        Py_DECREF( old );
    }
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

    Py_XDECREF( tmp_tuple_unpack_4__element_3.object );
    tmp_tuple_unpack_4__element_3.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_4.object );
    tmp_tuple_unpack_4__element_4.object = NULL;

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
    tmp_compare_left_3 = var_info.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
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
    tmp_binop_left_1 = const_str_digest_7ebeb96e52e66a25e7d57e0716089e44;
    tmp_unary_arg_1 = var_info.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 375;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 375;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 374;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    Py_DECREF( tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 374;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_compexpr_left_3 = par_mode.object;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_12;
    }

    tmp_compexpr_right_3 = const_str_plain_economic;
    tmp_unary_arg_2 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_unary_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_12;
    }
    tmp_assign_source_33 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_2 );
    Py_DECREF( tmp_unary_arg_2 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_12;
    }
    assert( tmp_or_3__value_1.object == NULL );
    tmp_or_3__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_33 );

    tmp_cond_value_6 = tmp_or_3__value_1.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_12;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_cond_value_5 = tmp_or_3__value_1.object;

    Py_INCREF( tmp_cond_value_5 );
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_or_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_3__value_1.object );
        tmp_or_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_4 = var_N.object;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_13;
    }

    tmp_compexpr_right_4 = var_M.object;

    if ( tmp_compexpr_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_13;
    }

    tmp_cond_value_5 = RICH_COMPARE_LT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_13;
    }
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
    condexpr_end_3:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto try_finally_handler_11;
    }

    goto finally_end_12;
    finally_end_12:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 376;
        goto try_finally_handler_11;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 377;
        goto try_finally_handler_11;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_triu );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
        goto try_finally_handler_11;
    }
    tmp_call_arg_element_8 = var_rq.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254788 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 377;
        goto try_finally_handler_11;
    }

    tmp_binop_left_2 = var_N.object;

    if ( tmp_binop_left_2 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 377;
        goto try_finally_handler_11;
    }

    tmp_binop_right_2 = var_M.object;

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 377;
        goto try_finally_handler_11;
    }

    tmp_call_arg_element_9 = BINARY_OPERATION_SUB( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 377;
        goto try_finally_handler_11;
    }
    frame_function->f_lineno = 377;
    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
        goto try_finally_handler_11;
    }
    assert( var_R.object == NULL );
    var_R.object = tmp_assign_source_34;

    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 379;
        goto try_finally_handler_11;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_triu );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 379;
        goto try_finally_handler_11;
    }
    tmp_subscr_target_2 = var_rq.object;

    if ( tmp_subscr_target_2 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254788 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 379;
        goto try_finally_handler_11;
    }

    tmp_subscr_subscript_2 = PyTuple_New( 2 );
    tmp_unary_arg_3 = var_M.object;

    if ( tmp_unary_arg_3 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_subscr_subscript_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 379;
        goto try_finally_handler_11;
    }

    tmp_sliceobj_lower_1 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_3 );
    if ( tmp_sliceobj_lower_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_subscr_subscript_2 );

        frame_function->f_lineno = 379;
        goto try_finally_handler_11;
    }
    tmp_tuple_element_4 = MAKE_SLICEOBJ( tmp_sliceobj_lower_1, Py_None, Py_None );
    Py_DECREF( tmp_sliceobj_lower_1 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_2, 0, tmp_tuple_element_4 );
    tmp_unary_arg_4 = var_M.object;

    if ( tmp_unary_arg_4 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_subscr_subscript_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 379;
        goto try_finally_handler_11;
    }

    tmp_sliceobj_lower_2 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_4 );
    if ( tmp_sliceobj_lower_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_subscr_subscript_2 );

        frame_function->f_lineno = 379;
        goto try_finally_handler_11;
    }
    tmp_tuple_element_4 = MAKE_SLICEOBJ( tmp_sliceobj_lower_2, Py_None, Py_None );
    Py_DECREF( tmp_sliceobj_lower_2 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_2, 1, tmp_tuple_element_4 );
    tmp_call_arg_element_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_subscript_2 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 379;
        goto try_finally_handler_11;
    }
    frame_function->f_lineno = 379;
    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 379;
        goto try_finally_handler_11;
    }
    assert( var_R.object == NULL );
    var_R.object = tmp_assign_source_35;

    branch_end_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_3__value_1.object );
    tmp_or_3__value_1.object = NULL;

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
    tmp_compare_left_4 = par_mode.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_str_plain_r;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_return_value = var_R.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242037 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_7:;
    // Tried code
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 384;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_11 = const_tuple_str_plain_orgrq_tuple;
    tmp_call_arg_element_12 = PyTuple_New( 1 );
    tmp_tuple_element_5 = var_rq.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254788 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 384;
        goto try_finally_handler_14;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_call_arg_element_12, 0, tmp_tuple_element_5 );
    frame_function->f_lineno = 384;
    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto try_finally_handler_14;
    }
    tmp_assign_source_36 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto try_finally_handler_14;
    }
    assert( tmp_tuple_unpack_5__source_iter.object == NULL );
    tmp_tuple_unpack_5__source_iter.object = tmp_assign_source_36;

    tmp_unpack_12 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_37 = UNPACK_PARAMETER_NEXT( tmp_unpack_12, 0 );
    if ( tmp_assign_source_37 == NULL )
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
        goto try_finally_handler_14;
    }
    assert( tmp_tuple_unpack_5__element_1.object == NULL );
    tmp_tuple_unpack_5__element_1.object = tmp_assign_source_37;

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
    tmp_assign_source_38 = tmp_tuple_unpack_5__element_1.object;

    assert( var_gor_un_grq.object == NULL );
    var_gor_un_grq.object = INCREASE_REFCOUNT( tmp_assign_source_38 );

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
    tmp_compare_left_5 = var_N.object;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = var_M.object;

    if ( tmp_compare_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_2 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    // Tried code
    tmp_called_11 = var_gor_un_grq.object;

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254836 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 388;
        goto try_finally_handler_15;
    }

    tmp_call_pos_3 = PyTuple_New( 2 );
    tmp_slice_source_1 = var_rq.object;

    if ( tmp_slice_source_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254788 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 388;
        goto try_finally_handler_15;
    }

    tmp_unary_arg_5 = var_N.object;

    if ( tmp_unary_arg_5 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 388;
        goto try_finally_handler_15;
    }

    tmp_slice_lower_1 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_5 );
    if ( tmp_slice_lower_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 388;
        goto try_finally_handler_15;
    }
    tmp_tuple_element_6 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, Py_None );
    Py_DECREF( tmp_slice_lower_1 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 388;
        goto try_finally_handler_15;
    }
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_tau.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185046 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 388;
        goto try_finally_handler_15;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 1, tmp_tuple_element_6 );
    tmp_call_kw_3 = PyDict_Copy( const_dict_9edb306c9f9c5c2d096ac013fc19025b );
    frame_function->f_lineno = 388;
    tmp_iter_arg_6 = CALL_FUNCTION( tmp_called_11, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto try_finally_handler_15;
    }
    tmp_assign_source_39 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_6__source_iter.object == NULL );
    tmp_tuple_unpack_6__source_iter.object = tmp_assign_source_39;

    tmp_unpack_13 = tmp_tuple_unpack_6__source_iter.object;

    tmp_assign_source_40 = UNPACK_PARAMETER_NEXT( tmp_unpack_13, 0 );
    if ( tmp_assign_source_40 == NULL )
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


        frame_function->f_lineno = 388;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_6__element_1.object == NULL );
    tmp_tuple_unpack_6__element_1.object = tmp_assign_source_40;

    tmp_unpack_14 = tmp_tuple_unpack_6__source_iter.object;

    tmp_assign_source_41 = UNPACK_PARAMETER_NEXT( tmp_unpack_14, 1 );
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


        frame_function->f_lineno = 388;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_6__element_2.object == NULL );
    tmp_tuple_unpack_6__element_2.object = tmp_assign_source_41;

    tmp_unpack_15 = tmp_tuple_unpack_6__source_iter.object;

    tmp_assign_source_42 = UNPACK_PARAMETER_NEXT( tmp_unpack_15, 2 );
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


        frame_function->f_lineno = 388;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_6__element_3.object == NULL );
    tmp_tuple_unpack_6__element_3.object = tmp_assign_source_42;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_15;
    }
    tmp_assign_source_43 = tmp_tuple_unpack_6__element_1.object;

    assert( var_Q.object == NULL );
    var_Q.object = INCREASE_REFCOUNT( tmp_assign_source_43 );

    tmp_assign_source_44 = tmp_tuple_unpack_6__element_2.object;

    if (var_work.object == NULL)
    {
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_44 );
    }
    else
    {
        PyObject *old = var_work.object;
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_44 );
        Py_DECREF( old );
    }
    tmp_assign_source_45 = tmp_tuple_unpack_6__element_3.object;

    if (var_info.object == NULL)
    {
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_45 );
    }
    else
    {
        PyObject *old = var_info.object;
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_45 );
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
    tmp_subscr_target_3 = var_work.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 201590 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_3 = const_int_0;
    tmp_source_name_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_real );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }
    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_astype );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_int );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 389;
    tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_12 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }
    if (par_lwork.object == NULL)
    {
        par_lwork.object = tmp_assign_source_46;
    }
    else
    {
        PyObject *old = par_lwork.object;
        par_lwork.object = tmp_assign_source_46;
        Py_DECREF( old );
    }
    // Tried code
    tmp_called_13 = var_gor_un_grq.object;

    if ( tmp_called_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254836 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto try_finally_handler_16;
    }

    tmp_call_pos_4 = PyTuple_New( 2 );
    tmp_slice_source_2 = var_rq.object;

    if ( tmp_slice_source_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254788 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto try_finally_handler_16;
    }

    tmp_unary_arg_6 = var_N.object;

    if ( tmp_unary_arg_6 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto try_finally_handler_16;
    }

    tmp_slice_lower_2 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_6 );
    if ( tmp_slice_lower_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_4 );

        frame_function->f_lineno = 390;
        goto try_finally_handler_16;
    }
    tmp_tuple_element_7 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_2, Py_None );
    Py_DECREF( tmp_slice_lower_2 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_4 );

        frame_function->f_lineno = 390;
        goto try_finally_handler_16;
    }
    PyTuple_SET_ITEM( tmp_call_pos_4, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_tau.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185046 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 1, tmp_tuple_element_7 );
    tmp_call_kw_4 = _PyDict_NewPresized( 2 );
    tmp_dict_value_3 = par_lwork.object;

    tmp_dict_key_3 = const_str_plain_lwork;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = const_int_pos_1;
    tmp_dict_key_4 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 390;
    tmp_iter_arg_7 = CALL_FUNCTION( tmp_called_13, tmp_call_pos_4, tmp_call_kw_4 );
    Py_DECREF( tmp_call_pos_4 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_iter_arg_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 390;
        goto try_finally_handler_16;
    }
    tmp_assign_source_47 = MAKE_ITERATOR( tmp_iter_arg_7 );
    Py_DECREF( tmp_iter_arg_7 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 390;
        goto try_finally_handler_16;
    }
    assert( tmp_tuple_unpack_7__source_iter.object == NULL );
    tmp_tuple_unpack_7__source_iter.object = tmp_assign_source_47;

    tmp_unpack_16 = tmp_tuple_unpack_7__source_iter.object;

    tmp_assign_source_48 = UNPACK_PARAMETER_NEXT( tmp_unpack_16, 0 );
    if ( tmp_assign_source_48 == NULL )
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


        frame_function->f_lineno = 390;
        goto try_finally_handler_16;
    }
    assert( tmp_tuple_unpack_7__element_1.object == NULL );
    tmp_tuple_unpack_7__element_1.object = tmp_assign_source_48;

    tmp_unpack_17 = tmp_tuple_unpack_7__source_iter.object;

    tmp_assign_source_49 = UNPACK_PARAMETER_NEXT( tmp_unpack_17, 1 );
    if ( tmp_assign_source_49 == NULL )
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


        frame_function->f_lineno = 390;
        goto try_finally_handler_16;
    }
    assert( tmp_tuple_unpack_7__element_2.object == NULL );
    tmp_tuple_unpack_7__element_2.object = tmp_assign_source_49;

    tmp_unpack_18 = tmp_tuple_unpack_7__source_iter.object;

    tmp_assign_source_50 = UNPACK_PARAMETER_NEXT( tmp_unpack_18, 2 );
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


        frame_function->f_lineno = 390;
        goto try_finally_handler_16;
    }
    assert( tmp_tuple_unpack_7__element_3.object == NULL );
    tmp_tuple_unpack_7__element_3.object = tmp_assign_source_50;

    tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_7 ); assert( PyIter_Check( tmp_iterator_name_7 ) );

    tmp_iterator_attempt_7 = (*Py_TYPE( tmp_iterator_name_7 )->tp_iternext)( tmp_iterator_name_7 );

    if (likely( tmp_iterator_attempt_7 == NULL ))
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

            goto try_finally_handler_16;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_7 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_16;
    }
    tmp_assign_source_51 = tmp_tuple_unpack_7__element_1.object;

    if (var_Q.object == NULL)
    {
        var_Q.object = INCREASE_REFCOUNT( tmp_assign_source_51 );
    }
    else
    {
        PyObject *old = var_Q.object;
        var_Q.object = INCREASE_REFCOUNT( tmp_assign_source_51 );
        Py_DECREF( old );
    }
    tmp_assign_source_52 = tmp_tuple_unpack_7__element_2.object;

    if (var_work.object == NULL)
    {
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_52 );
    }
    else
    {
        PyObject *old = var_work.object;
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_52 );
        Py_DECREF( old );
    }
    tmp_assign_source_53 = tmp_tuple_unpack_7__element_3.object;

    if (var_info.object == NULL)
    {
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_53 );
    }
    else
    {
        PyObject *old = var_info.object;
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_53 );
        Py_DECREF( old );
    }
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

    tmp_tried_lineno_10 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_7__source_iter.object );
    tmp_tuple_unpack_7__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_1.object );
    tmp_tuple_unpack_7__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_2.object );
    tmp_tuple_unpack_7__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_3.object );
    tmp_tuple_unpack_7__element_3.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_10;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_16 != NULL )
    {
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;

        goto frame_exception_exit_1;
    }

    goto finally_end_16;
    finally_end_16:;
    goto branch_end_8;
    branch_no_8:;
    tmp_compare_left_6 = par_mode.object;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = const_str_plain_economic;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    // Tried code
    tmp_called_14 = var_gor_un_grq.object;

    if ( tmp_called_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254836 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 393;
        goto try_finally_handler_17;
    }

    tmp_call_pos_5 = PyTuple_New( 2 );
    tmp_tuple_element_8 = var_rq.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254788 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 393;
        goto try_finally_handler_17;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_call_pos_5, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_tau.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185046 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 393;
        goto try_finally_handler_17;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_call_pos_5, 1, tmp_tuple_element_8 );
    tmp_call_kw_5 = PyDict_Copy( const_dict_9edb306c9f9c5c2d096ac013fc19025b );
    frame_function->f_lineno = 393;
    tmp_iter_arg_8 = CALL_FUNCTION( tmp_called_14, tmp_call_pos_5, tmp_call_kw_5 );
    Py_DECREF( tmp_call_pos_5 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_iter_arg_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto try_finally_handler_17;
    }
    tmp_assign_source_54 = MAKE_ITERATOR( tmp_iter_arg_8 );
    Py_DECREF( tmp_iter_arg_8 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto try_finally_handler_17;
    }
    assert( tmp_tuple_unpack_8__source_iter.object == NULL );
    tmp_tuple_unpack_8__source_iter.object = tmp_assign_source_54;

    tmp_unpack_19 = tmp_tuple_unpack_8__source_iter.object;

    tmp_assign_source_55 = UNPACK_PARAMETER_NEXT( tmp_unpack_19, 0 );
    if ( tmp_assign_source_55 == NULL )
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


        frame_function->f_lineno = 393;
        goto try_finally_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_1.object == NULL );
    tmp_tuple_unpack_8__element_1.object = tmp_assign_source_55;

    tmp_unpack_20 = tmp_tuple_unpack_8__source_iter.object;

    tmp_assign_source_56 = UNPACK_PARAMETER_NEXT( tmp_unpack_20, 1 );
    if ( tmp_assign_source_56 == NULL )
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


        frame_function->f_lineno = 393;
        goto try_finally_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_2.object == NULL );
    tmp_tuple_unpack_8__element_2.object = tmp_assign_source_56;

    tmp_unpack_21 = tmp_tuple_unpack_8__source_iter.object;

    tmp_assign_source_57 = UNPACK_PARAMETER_NEXT( tmp_unpack_21, 2 );
    if ( tmp_assign_source_57 == NULL )
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


        frame_function->f_lineno = 393;
        goto try_finally_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_3.object == NULL );
    tmp_tuple_unpack_8__element_3.object = tmp_assign_source_57;

    tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_8 ); assert( PyIter_Check( tmp_iterator_name_8 ) );

    tmp_iterator_attempt_8 = (*Py_TYPE( tmp_iterator_name_8 )->tp_iternext)( tmp_iterator_name_8 );

    if (likely( tmp_iterator_attempt_8 == NULL ))
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

            goto try_finally_handler_17;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_8 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_17;
    }
    tmp_assign_source_58 = tmp_tuple_unpack_8__element_1.object;

    assert( var_Q.object == NULL );
    var_Q.object = INCREASE_REFCOUNT( tmp_assign_source_58 );

    tmp_assign_source_59 = tmp_tuple_unpack_8__element_2.object;

    if (var_work.object == NULL)
    {
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_59 );
    }
    else
    {
        PyObject *old = var_work.object;
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_59 );
        Py_DECREF( old );
    }
    tmp_assign_source_60 = tmp_tuple_unpack_8__element_3.object;

    if (var_info.object == NULL)
    {
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_60 );
    }
    else
    {
        PyObject *old = var_info.object;
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_60 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_11 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_8__source_iter.object );
    tmp_tuple_unpack_8__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_1.object );
    tmp_tuple_unpack_8__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_2.object );
    tmp_tuple_unpack_8__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_3.object );
    tmp_tuple_unpack_8__element_3.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_11;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_17 != NULL )
    {
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;

        goto frame_exception_exit_1;
    }

    goto finally_end_17;
    finally_end_17:;
    tmp_subscr_target_4 = var_work.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 201590 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_4 = const_int_0;
    tmp_source_name_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_real );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_astype );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_int );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_15 );

        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 394;
    tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_15 );
    Py_DECREF( tmp_call_arg_element_14 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }
    if (par_lwork.object == NULL)
    {
        par_lwork.object = tmp_assign_source_61;
    }
    else
    {
        PyObject *old = par_lwork.object;
        par_lwork.object = tmp_assign_source_61;
        Py_DECREF( old );
    }
    // Tried code
    tmp_called_16 = var_gor_un_grq.object;

    if ( tmp_called_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254836 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 395;
        goto try_finally_handler_18;
    }

    tmp_call_pos_6 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_rq.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254788 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 395;
        goto try_finally_handler_18;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_6, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_tau.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185046 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 395;
        goto try_finally_handler_18;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_6, 1, tmp_tuple_element_9 );
    tmp_call_kw_6 = _PyDict_NewPresized( 2 );
    tmp_dict_value_5 = par_lwork.object;

    tmp_dict_key_5 = const_str_plain_lwork;
    PyDict_SetItem( tmp_call_kw_6, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = const_int_pos_1;
    tmp_dict_key_6 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_6, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 395;
    tmp_iter_arg_9 = CALL_FUNCTION( tmp_called_16, tmp_call_pos_6, tmp_call_kw_6 );
    Py_DECREF( tmp_call_pos_6 );
    Py_DECREF( tmp_call_kw_6 );
    if ( tmp_iter_arg_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 395;
        goto try_finally_handler_18;
    }
    tmp_assign_source_62 = MAKE_ITERATOR( tmp_iter_arg_9 );
    Py_DECREF( tmp_iter_arg_9 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 395;
        goto try_finally_handler_18;
    }
    assert( tmp_tuple_unpack_9__source_iter.object == NULL );
    tmp_tuple_unpack_9__source_iter.object = tmp_assign_source_62;

    tmp_unpack_22 = tmp_tuple_unpack_9__source_iter.object;

    tmp_assign_source_63 = UNPACK_PARAMETER_NEXT( tmp_unpack_22, 0 );
    if ( tmp_assign_source_63 == NULL )
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


        frame_function->f_lineno = 395;
        goto try_finally_handler_18;
    }
    assert( tmp_tuple_unpack_9__element_1.object == NULL );
    tmp_tuple_unpack_9__element_1.object = tmp_assign_source_63;

    tmp_unpack_23 = tmp_tuple_unpack_9__source_iter.object;

    tmp_assign_source_64 = UNPACK_PARAMETER_NEXT( tmp_unpack_23, 1 );
    if ( tmp_assign_source_64 == NULL )
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


        frame_function->f_lineno = 395;
        goto try_finally_handler_18;
    }
    assert( tmp_tuple_unpack_9__element_2.object == NULL );
    tmp_tuple_unpack_9__element_2.object = tmp_assign_source_64;

    tmp_unpack_24 = tmp_tuple_unpack_9__source_iter.object;

    tmp_assign_source_65 = UNPACK_PARAMETER_NEXT( tmp_unpack_24, 2 );
    if ( tmp_assign_source_65 == NULL )
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


        frame_function->f_lineno = 395;
        goto try_finally_handler_18;
    }
    assert( tmp_tuple_unpack_9__element_3.object == NULL );
    tmp_tuple_unpack_9__element_3.object = tmp_assign_source_65;

    tmp_iterator_name_9 = tmp_tuple_unpack_9__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_9 ); assert( PyIter_Check( tmp_iterator_name_9 ) );

    tmp_iterator_attempt_9 = (*Py_TYPE( tmp_iterator_name_9 )->tp_iternext)( tmp_iterator_name_9 );

    if (likely( tmp_iterator_attempt_9 == NULL ))
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

            goto try_finally_handler_18;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_9 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_18;
    }
    tmp_assign_source_66 = tmp_tuple_unpack_9__element_1.object;

    if (var_Q.object == NULL)
    {
        var_Q.object = INCREASE_REFCOUNT( tmp_assign_source_66 );
    }
    else
    {
        PyObject *old = var_Q.object;
        var_Q.object = INCREASE_REFCOUNT( tmp_assign_source_66 );
        Py_DECREF( old );
    }
    tmp_assign_source_67 = tmp_tuple_unpack_9__element_2.object;

    if (var_work.object == NULL)
    {
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_67 );
    }
    else
    {
        PyObject *old = var_work.object;
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_67 );
        Py_DECREF( old );
    }
    tmp_assign_source_68 = tmp_tuple_unpack_9__element_3.object;

    if (var_info.object == NULL)
    {
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_68 );
    }
    else
    {
        PyObject *old = var_info.object;
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_68 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_12 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_9__source_iter.object );
    tmp_tuple_unpack_9__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_9__element_1.object );
    tmp_tuple_unpack_9__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_9__element_2.object );
    tmp_tuple_unpack_9__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_9__element_3.object );
    tmp_tuple_unpack_9__element_3.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_12;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_18 != NULL )
    {
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;

        goto frame_exception_exit_1;
    }

    goto finally_end_18;
    finally_end_18:;
    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_empty );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_7 = PyTuple_New( 1 );
    tmp_tuple_element_10 = PyTuple_New( 2 );
    tmp_tuple_element_11 = var_N.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_tuple_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_tuple_element_10, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_N.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_tuple_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_tuple_element_10, 1, tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_call_pos_7, 0, tmp_tuple_element_10 );
    tmp_call_kw_7 = _PyDict_NewPresized( 1 );
    tmp_source_name_17 = var_rq.object;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_call_kw_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254788 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_dtype );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_call_kw_7 );

        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_7, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    frame_function->f_lineno = 397;
    tmp_assign_source_69 = CALL_FUNCTION( tmp_called_17, tmp_call_pos_7, tmp_call_kw_7 );
    Py_DECREF( tmp_called_17 );
    Py_DECREF( tmp_call_pos_7 );
    Py_DECREF( tmp_call_kw_7 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }
    assert( var_rq1.object == NULL );
    var_rq1.object = tmp_assign_source_69;

    tmp_sliceass_value_1 = var_rq.object;

    if ( tmp_sliceass_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254788 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }

    tmp_sliceass_target_1 = var_rq1.object;

    tmp_unary_arg_7 = var_M.object;

    if ( tmp_unary_arg_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }

    tmp_sliceass_lower_1 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_7 );
    if ( tmp_sliceass_lower_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_SLICE( tmp_sliceass_target_1, tmp_sliceass_lower_1, Py_None, tmp_sliceass_value_1 );
    Py_DECREF( tmp_sliceass_lower_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }
    // Tried code
    tmp_called_18 = var_gor_un_grq.object;

    if ( tmp_called_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254836 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto try_finally_handler_19;
    }

    tmp_call_pos_8 = PyTuple_New( 2 );
    tmp_tuple_element_12 = var_rq1.object;

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_call_pos_8, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = var_tau.object;

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_call_pos_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185046 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto try_finally_handler_19;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_call_pos_8, 1, tmp_tuple_element_12 );
    tmp_call_kw_8 = PyDict_Copy( const_dict_9edb306c9f9c5c2d096ac013fc19025b );
    frame_function->f_lineno = 400;
    tmp_iter_arg_10 = CALL_FUNCTION( tmp_called_18, tmp_call_pos_8, tmp_call_kw_8 );
    Py_DECREF( tmp_call_pos_8 );
    Py_DECREF( tmp_call_kw_8 );
    if ( tmp_iter_arg_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto try_finally_handler_19;
    }
    tmp_assign_source_70 = MAKE_ITERATOR( tmp_iter_arg_10 );
    Py_DECREF( tmp_iter_arg_10 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto try_finally_handler_19;
    }
    assert( tmp_tuple_unpack_10__source_iter.object == NULL );
    tmp_tuple_unpack_10__source_iter.object = tmp_assign_source_70;

    tmp_unpack_25 = tmp_tuple_unpack_10__source_iter.object;

    tmp_assign_source_71 = UNPACK_PARAMETER_NEXT( tmp_unpack_25, 0 );
    if ( tmp_assign_source_71 == NULL )
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


        frame_function->f_lineno = 400;
        goto try_finally_handler_19;
    }
    assert( tmp_tuple_unpack_10__element_1.object == NULL );
    tmp_tuple_unpack_10__element_1.object = tmp_assign_source_71;

    tmp_unpack_26 = tmp_tuple_unpack_10__source_iter.object;

    tmp_assign_source_72 = UNPACK_PARAMETER_NEXT( tmp_unpack_26, 1 );
    if ( tmp_assign_source_72 == NULL )
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


        frame_function->f_lineno = 400;
        goto try_finally_handler_19;
    }
    assert( tmp_tuple_unpack_10__element_2.object == NULL );
    tmp_tuple_unpack_10__element_2.object = tmp_assign_source_72;

    tmp_unpack_27 = tmp_tuple_unpack_10__source_iter.object;

    tmp_assign_source_73 = UNPACK_PARAMETER_NEXT( tmp_unpack_27, 2 );
    if ( tmp_assign_source_73 == NULL )
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


        frame_function->f_lineno = 400;
        goto try_finally_handler_19;
    }
    assert( tmp_tuple_unpack_10__element_3.object == NULL );
    tmp_tuple_unpack_10__element_3.object = tmp_assign_source_73;

    tmp_iterator_name_10 = tmp_tuple_unpack_10__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_10 ); assert( PyIter_Check( tmp_iterator_name_10 ) );

    tmp_iterator_attempt_10 = (*Py_TYPE( tmp_iterator_name_10 )->tp_iternext)( tmp_iterator_name_10 );

    if (likely( tmp_iterator_attempt_10 == NULL ))
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

            goto try_finally_handler_19;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_10 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_19;
    }
    tmp_assign_source_74 = tmp_tuple_unpack_10__element_1.object;

    assert( var_Q.object == NULL );
    var_Q.object = INCREASE_REFCOUNT( tmp_assign_source_74 );

    tmp_assign_source_75 = tmp_tuple_unpack_10__element_2.object;

    if (var_work.object == NULL)
    {
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_75 );
    }
    else
    {
        PyObject *old = var_work.object;
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_75 );
        Py_DECREF( old );
    }
    tmp_assign_source_76 = tmp_tuple_unpack_10__element_3.object;

    if (var_info.object == NULL)
    {
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_76 );
    }
    else
    {
        PyObject *old = var_info.object;
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_76 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_13 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_10__source_iter.object );
    tmp_tuple_unpack_10__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_10__element_1.object );
    tmp_tuple_unpack_10__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_10__element_2.object );
    tmp_tuple_unpack_10__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_10__element_3.object );
    tmp_tuple_unpack_10__element_3.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_13;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_19 != NULL )
    {
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;

        goto frame_exception_exit_1;
    }

    goto finally_end_19;
    finally_end_19:;
    tmp_subscr_target_5 = var_work.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 201590 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_5 = const_int_0;
    tmp_source_name_19 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_real );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_source_name_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }
    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_astype );
    Py_DECREF( tmp_source_name_18 );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_15 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_int );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_19 );

        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 401;
    tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_19 );
    Py_DECREF( tmp_call_arg_element_15 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }
    if (par_lwork.object == NULL)
    {
        par_lwork.object = tmp_assign_source_77;
    }
    else
    {
        PyObject *old = par_lwork.object;
        par_lwork.object = tmp_assign_source_77;
        Py_DECREF( old );
    }
    // Tried code
    tmp_called_20 = var_gor_un_grq.object;

    if ( tmp_called_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254836 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto try_finally_handler_20;
    }

    tmp_call_pos_9 = PyTuple_New( 2 );
    tmp_tuple_element_13 = var_rq1.object;

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_call_pos_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254892 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto try_finally_handler_20;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_call_pos_9, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = var_tau.object;

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_call_pos_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185046 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto try_finally_handler_20;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_call_pos_9, 1, tmp_tuple_element_13 );
    tmp_call_kw_9 = _PyDict_NewPresized( 2 );
    tmp_dict_value_8 = par_lwork.object;

    tmp_dict_key_8 = const_str_plain_lwork;
    PyDict_SetItem( tmp_call_kw_9, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_value_9 = const_int_pos_1;
    tmp_dict_key_9 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_9, tmp_dict_key_9, tmp_dict_value_9 );
    frame_function->f_lineno = 402;
    tmp_iter_arg_11 = CALL_FUNCTION( tmp_called_20, tmp_call_pos_9, tmp_call_kw_9 );
    Py_DECREF( tmp_call_pos_9 );
    Py_DECREF( tmp_call_kw_9 );
    if ( tmp_iter_arg_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 402;
        goto try_finally_handler_20;
    }
    tmp_assign_source_78 = MAKE_ITERATOR( tmp_iter_arg_11 );
    Py_DECREF( tmp_iter_arg_11 );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 402;
        goto try_finally_handler_20;
    }
    assert( tmp_tuple_unpack_11__source_iter.object == NULL );
    tmp_tuple_unpack_11__source_iter.object = tmp_assign_source_78;

    tmp_unpack_28 = tmp_tuple_unpack_11__source_iter.object;

    tmp_assign_source_79 = UNPACK_PARAMETER_NEXT( tmp_unpack_28, 0 );
    if ( tmp_assign_source_79 == NULL )
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


        frame_function->f_lineno = 402;
        goto try_finally_handler_20;
    }
    assert( tmp_tuple_unpack_11__element_1.object == NULL );
    tmp_tuple_unpack_11__element_1.object = tmp_assign_source_79;

    tmp_unpack_29 = tmp_tuple_unpack_11__source_iter.object;

    tmp_assign_source_80 = UNPACK_PARAMETER_NEXT( tmp_unpack_29, 1 );
    if ( tmp_assign_source_80 == NULL )
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


        frame_function->f_lineno = 402;
        goto try_finally_handler_20;
    }
    assert( tmp_tuple_unpack_11__element_2.object == NULL );
    tmp_tuple_unpack_11__element_2.object = tmp_assign_source_80;

    tmp_unpack_30 = tmp_tuple_unpack_11__source_iter.object;

    tmp_assign_source_81 = UNPACK_PARAMETER_NEXT( tmp_unpack_30, 2 );
    if ( tmp_assign_source_81 == NULL )
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


        frame_function->f_lineno = 402;
        goto try_finally_handler_20;
    }
    assert( tmp_tuple_unpack_11__element_3.object == NULL );
    tmp_tuple_unpack_11__element_3.object = tmp_assign_source_81;

    tmp_iterator_name_11 = tmp_tuple_unpack_11__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_11 ); assert( PyIter_Check( tmp_iterator_name_11 ) );

    tmp_iterator_attempt_11 = (*Py_TYPE( tmp_iterator_name_11 )->tp_iternext)( tmp_iterator_name_11 );

    if (likely( tmp_iterator_attempt_11 == NULL ))
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

            goto try_finally_handler_20;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_11 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_20;
    }
    tmp_assign_source_82 = tmp_tuple_unpack_11__element_1.object;

    if (var_Q.object == NULL)
    {
        var_Q.object = INCREASE_REFCOUNT( tmp_assign_source_82 );
    }
    else
    {
        PyObject *old = var_Q.object;
        var_Q.object = INCREASE_REFCOUNT( tmp_assign_source_82 );
        Py_DECREF( old );
    }
    tmp_assign_source_83 = tmp_tuple_unpack_11__element_2.object;

    if (var_work.object == NULL)
    {
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_83 );
    }
    else
    {
        PyObject *old = var_work.object;
        var_work.object = INCREASE_REFCOUNT( tmp_assign_source_83 );
        Py_DECREF( old );
    }
    tmp_assign_source_84 = tmp_tuple_unpack_11__element_3.object;

    if (var_info.object == NULL)
    {
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_84 );
    }
    else
    {
        PyObject *old = var_info.object;
        var_info.object = INCREASE_REFCOUNT( tmp_assign_source_84 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_20:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_14 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_11__source_iter.object );
    tmp_tuple_unpack_11__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_11__element_1.object );
    tmp_tuple_unpack_11__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_11__element_2.object );
    tmp_tuple_unpack_11__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_11__element_3.object );
    tmp_tuple_unpack_11__element_3.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_14;
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
    branch_end_9:;
    branch_end_8:;
    tmp_compare_left_7 = var_info.object;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = const_int_0;
    tmp_cmp_Lt_3 = RICH_COMPARE_BOOL_LT( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Lt_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_3 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_binop_left_3 = const_str_digest_f96264aacbf3f6666a71aa6c9649e869;
    tmp_unary_arg_8 = var_info.object;

    if ( tmp_unary_arg_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 406;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_3 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_8 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 406;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_make_exception_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 405;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_4 );
    Py_DECREF( tmp_make_exception_arg_4 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 405;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_10:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_14 = var_R.object;

    if ( tmp_tuple_element_14 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242037 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = var_Q.object;

    if ( tmp_tuple_element_14 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254295 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }

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
    if ((var_a1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a1,
            var_a1.object
        );

    }
    if ((var_M.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_M,
            var_M.object
        );

    }
    if ((var_N.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_N,
            var_N.object
        );

    }
    if ((var_gerqf.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gerqf,
            var_gerqf.object
        );

    }
    if ((var_rq.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rq,
            var_rq.object
        );

    }
    if ((var_tau.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tau,
            var_tau.object
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
    if ((var_info.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info,
            var_info.object
        );

    }
    if ((var_R.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_R,
            var_R.object
        );

    }
    if ((var_gor_un_grq.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gor_un_grq,
            var_gor_un_grq.object
        );

    }
    if ((var_Q.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Q,
            var_Q.object
        );

    }
    if ((var_rq1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rq1,
            var_rq1.object
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
    if ((par_lwork.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lwork,
            par_lwork.object
        );

    }
    if ((par_mode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mode,
            par_mode.object
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
static PyObject *fparse_function_4_rq_of_module_scipy$linalg$decomp_qr( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_overwrite_a = NULL;
    PyObject *_python_par_lwork = NULL;
    PyObject *_python_par_mode = NULL;
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
                PyErr_Format( PyExc_TypeError, "rq() keywords must be strings" );
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
            if ( found == false && const_str_plain_lwork == key )
            {
                assert( _python_par_lwork == NULL );
                _python_par_lwork = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_mode == key )
            {
                assert( _python_par_mode == NULL );
                _python_par_mode = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_lwork, key ) == 1 )
            {
                assert( _python_par_lwork == NULL );
                _python_par_lwork = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mode, key ) == 1 )
            {
                assert( _python_par_mode == NULL );
                _python_par_mode = value;

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
                   "rq() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_overwrite_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_overwrite_a = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_overwrite_a == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_overwrite_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_lwork != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_lwork = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_lwork == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_lwork = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_mode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_mode = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_mode == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_mode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_a == NULL || _python_par_overwrite_a == NULL || _python_par_lwork == NULL || _python_par_mode == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_overwrite_a, _python_par_lwork, _python_par_mode, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_rq_of_module_scipy$linalg$decomp_qr( self, _python_par_a, _python_par_overwrite_a, _python_par_lwork, _python_par_mode, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_overwrite_a );
    Py_XDECREF( _python_par_lwork );
    Py_XDECREF( _python_par_mode );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_4_rq_of_module_scipy$linalg$decomp_qr( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_4_rq_of_module_scipy$linalg$decomp_qr( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_rq_of_module_scipy$linalg$decomp_qr( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_safecall_of_module_scipy$linalg$decomp_qr(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_safecall_of_module_scipy$linalg$decomp_qr,
        dparse_function_1_safecall_of_module_scipy$linalg$decomp_qr,
        const_str_plain_safecall,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d77d5875841889f97ab1bf51da16e4e8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_qr,
        const_str_digest_6f7c40aefa92e3ab305031532bb6c7bf
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_qr_of_module_scipy$linalg$decomp_qr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_qr_of_module_scipy$linalg$decomp_qr,
        dparse_function_2_qr_of_module_scipy$linalg$decomp_qr,
        const_str_plain_qr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_96d76ca6f709225884136bb25d5f90f4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_qr,
        const_str_digest_236b3b68034156912ec77de804858172
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_qr_multiply_of_module_scipy$linalg$decomp_qr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_qr_multiply_of_module_scipy$linalg$decomp_qr,
        dparse_function_3_qr_multiply_of_module_scipy$linalg$decomp_qr,
        const_str_plain_qr_multiply,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1d6c91a76f470f8ba145971bce440cad,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_qr,
        const_str_digest_cce057dde722c2a02559a74b52c5ab78
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_rq_of_module_scipy$linalg$decomp_qr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_rq_of_module_scipy$linalg$decomp_qr,
        dparse_function_4_rq_of_module_scipy$linalg$decomp_qr,
        const_str_plain_rq,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e8f6a6abd8e695c64509dd48989da426,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_qr,
        const_str_digest_5031f6bae0891bfe27089aa0e8c2b2ad
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$linalg$decomp_qr =
{
    PyModuleDef_HEAD_INIT,
    "scipy.linalg.decomp_qr",   /* m_name */
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

MOD_INIT_DECL( scipy$linalg$decomp_qr )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$linalg$decomp_qr );
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

    // puts( "in initscipy$linalg$decomp_qr" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$linalg$decomp_qr = Py_InitModule4(
        "scipy.linalg.decomp_qr",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$linalg$decomp_qr = PyModule_Create( &mdef_scipy$linalg$decomp_qr );
#endif

    moduledict_scipy$linalg$decomp_qr = (PyDictObject *)((PyModuleObject *)module_scipy$linalg$decomp_qr)->md_dict;

    assertObject( module_scipy$linalg$decomp_qr );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d2de24f09047549fe9b37ebdc84240ff, module_scipy$linalg$decomp_qr );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$linalg$decomp_qr );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;

    // Module code.
    tmp_assign_source_1 = const_str_digest_d67d04dd5b60802d235db1cb4dd36b81;
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_65b7827232be01e770a0a911e39a1399;
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_a977c468c618432d87579810ac6a00a2, module_scipy$linalg$decomp_qr );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$linalg$decomp_qr)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$linalg$decomp_qr)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$linalg$decomp_qr)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$linalg$decomp_qr)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_numpy, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$linalg$decomp_qr)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_blas, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_get_blas_funcs_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_get_blas_funcs );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_get_blas_funcs, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$linalg$decomp_qr)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_lapack, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_get_lapack_funcs_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_get_lapack_funcs );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$linalg$decomp_qr)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain__datacopied_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain__datacopied );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain__datacopied, tmp_assign_source_9 );
    tmp_assign_source_10 = LIST_COPY( const_list_str_plain_qr_str_plain_qr_multiply_str_plain_rq_list );
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_function_1_safecall_of_module_scipy$linalg$decomp_qr(  );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_safecall, tmp_assign_source_11 );
    tmp_defaults_1 = const_tuple_false_none_str_plain_full_false_true_tuple;
    tmp_assign_source_12 = MAKE_FUNCTION_function_2_qr_of_module_scipy$linalg$decomp_qr( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_12 );

        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_qr, tmp_assign_source_12 );
    tmp_defaults_2 = const_tuple_str_plain_right_false_false_false_false_tuple;
    tmp_assign_source_13 = MAKE_FUNCTION_function_3_qr_multiply_of_module_scipy$linalg$decomp_qr( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_13 );

        frame_module->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_qr_multiply, tmp_assign_source_13 );
    tmp_defaults_3 = const_tuple_false_none_str_plain_full_true_tuple;
    tmp_assign_source_14 = MAKE_FUNCTION_function_4_rq_of_module_scipy$linalg$decomp_qr( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_14 );

        frame_module->f_lineno = 299;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_qr, (Nuitka_StringObject *)const_str_plain_rq, tmp_assign_source_14 );

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

    return MOD_RETURN_VALUE( module_scipy$linalg$decomp_qr );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
