// Generated code for Python source for module 'scipy.linalg.decomp_schur'
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

// The _module_scipy$linalg$decomp_schur is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$linalg$decomp_schur;
PyDictObject *moduledict_scipy$linalg$decomp_schur;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_float_0_0;
extern PyObject *const_float_1_0;
extern PyObject *const_float_3_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_neg_2;
extern PyObject *const_int_neg_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_B;
extern PyObject *const_str_plain_D;
extern PyObject *const_str_plain_F;
extern PyObject *const_str_plain_G;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_Z;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_Gc;
extern PyObject *const_str_plain_a1;
extern PyObject *const_str_plain_mu;
extern PyObject *const_str_plain_r_;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_arr;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_eps;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_iuc;
extern PyObject *const_str_plain_lhp;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_ouc;
extern PyObject *const_str_plain_rhp;
extern PyObject *const_str_plain_typ;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_conj;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_feps;
static PyObject *const_str_plain_gees;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_kind;
extern PyObject *const_str_plain_misc;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_sort;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_finfo;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_lwork;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_schur;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_slice;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_plain_arrays;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain_decomp;
extern PyObject *const_str_plain_lapack;
extern PyObject *const_str_plain_output;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_single;
extern PyObject *const_str_plain_sort_t;
static PyObject *const_str_plain_transp;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_complex;
extern PyObject *const_str_plain_eigvals;
extern PyObject *const_str_plain_rsf2csf;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_callable;
extern PyObject *const_str_plain_division;
static PyObject *const_list_float_3_0_list;
static PyObject *const_str_plain__castCopy;
extern PyObject *const_str_plain_precision;
extern PyObject *const_str_plain_sfunction;
extern PyObject *const_str_plain_transpose;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_LinAlgError;
static PyObject *const_str_plain__array_kind;
static PyObject *const_str_plain__array_type;
extern PyObject *const_str_plain__commonType;
extern PyObject *const_str_plain__datacopied;
extern PyObject *const_str_plain_cast_arrays;
extern PyObject *const_str_plain_overwrite_a;
extern PyObject *const_str_plain_check_finite;
extern PyObject *const_str_plain_decomp_schur;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain__array_precision;
extern PyObject *const_str_plain_get_lapack_funcs;
static PyObject *const_tuple_str_plain_gees_tuple;
static PyObject *const_tuple_str_plain_misc_tuple;
extern PyObject *const_str_plain__double_precision;
extern PyObject *const_str_plain_asarray_chkfinite;
extern PyObject *const_tuple_str_plain_arrays_tuple;
static PyObject *const_tuple_str_plain_eigvals_tuple;
extern PyObject *const_tuple_str_plain_callable_tuple;
extern PyObject *const_list_str_plain_F_str_plain_D_list;
extern PyObject *const_list_str_plain_f_str_plain_d_list;
extern PyObject *const_dict_01a7863d0509221cf3231e5ae47a0f98;
extern PyObject *const_dict_5c6aa9a3fae0b7e7abbd0f91e8c66271;
static PyObject *const_dict_f461c15a2b4d9a6ee80b4f29c347777b;
extern PyObject *const_tuple_str_plain_get_lapack_funcs_tuple;
extern PyObject *const_list_str_plain_complex_str_plain_c_list;
static PyObject *const_list_6684a01abc620c181414d0cfe37cff56_list;
static PyObject *const_list_str_plain_schur_str_plain_rsf2csf_list;
static PyObject *const_str_digest_01094e0f10f4b7030e5904a34a875aca;
extern PyObject *const_str_digest_14853efcfdd009f7fc9859f53283cb22;
static PyObject *const_str_digest_39d5a2b434b4775f05f535d1ecdd61bb;
static PyObject *const_str_digest_3a6a0f2ca9c23ee81ede5b38d780c93f;
static PyObject *const_str_digest_3c458f5f545bae2a5e1ff10f32736f24;
extern PyObject *const_str_digest_644880ce7dbf6c5f121ce247016ffe23;
extern PyObject *const_str_digest_6719d0fadde3ef33fd0713f5dbf8a440;
extern PyObject *const_str_digest_83dcdfb86ae6b4b323b9239a7958e93c;
static PyObject *const_str_digest_9690624e32107b49e9dd24012404ea5b;
static PyObject *const_str_digest_a1312f770276dded665bb18463ce29e5;
extern PyObject *const_str_digest_bfc63172b396a4f385572b1b0268edc0;
static PyObject *const_str_digest_d367f157ef35192c024ee857be9b5140;
static PyObject *const_str_digest_dc2d68abc6425455add5f445c25b3e80;
static PyObject *const_str_digest_e7dd0adc6aacaa64115dd994b19701d1;
static PyObject *const_str_digest_f306ae1109b61571ea350bb952177bd3;
extern PyObject *const_tuple_str_plain_type_str_plain_arrays_tuple;
extern PyObject *const_tuple_5a2a2786271c0228ad39b83ecf7cc221_tuple;
static PyObject *const_tuple_78702cdb92ca6fa32f029db2fbc767f0_tuple;
static PyObject *const_tuple_8a06bdd87c182f3d5650315f22a1c1a5_tuple;
static PyObject *const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple;
static PyObject *const_tuple_92672677c28f575295a116c4196011d5_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_e80699f7ac4a36018242328603509f2b_tuple;
extern PyObject *const_list_str_plain_i_str_plain_l_str_plain_d_list;
static PyObject *const_tuple_str_plain_real_none_false_none_true_tuple;
extern PyObject *const_tuple_str_plain_LinAlgError_str_plain__datacopied_tuple;
static PyObject *const_tuple_str_plain_T_str_plain_Z_str_plain_check_finite_tuple;
extern PyObject *const_list_str_plain_real_str_plain_complex_str_plain_r_str_plain_c_list;

static void _initModuleConstants(void)
{
    const_str_plain_Gc = UNSTREAM_STRING( &constant_bin[ 393198 ], 2, 1 );
    const_str_plain_gees = UNSTREAM_STRING( &constant_bin[ 254957 ], 4, 1 );
    const_str_plain_transp = UNSTREAM_STRING( &constant_bin[ 2746 ], 6, 1 );
    const_list_float_3_0_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_float_3_0_list, 0, const_float_3_0 ); Py_INCREF( const_float_3_0 );
    const_str_plain__castCopy = UNSTREAM_STRING( &constant_bin[ 255129 ], 9, 1 );
    const_str_plain__array_kind = UNSTREAM_STRING( &constant_bin[ 255004 ], 11, 1 );
    const_str_plain__array_type = UNSTREAM_STRING( &constant_bin[ 73823 ], 11, 1 );
    const_tuple_str_plain_gees_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_gees_tuple, 0, const_str_plain_gees ); Py_INCREF( const_str_plain_gees );
    const_tuple_str_plain_misc_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_misc_tuple, 0, const_str_plain_misc ); Py_INCREF( const_str_plain_misc );
    const_tuple_str_plain_eigvals_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_eigvals_tuple, 0, const_str_plain_eigvals ); Py_INCREF( const_str_plain_eigvals );
    const_dict_f461c15a2b4d9a6ee80b4f29c347777b = _PyDict_NewPresized( 9 );
    PyDict_SetItem( const_dict_f461c15a2b4d9a6ee80b4f29c347777b, const_str_plain_B, const_int_0 );
    PyDict_SetItem( const_dict_f461c15a2b4d9a6ee80b4f29c347777b, const_str_plain_d, const_int_0 );
    PyDict_SetItem( const_dict_f461c15a2b4d9a6ee80b4f29c347777b, const_str_plain_f, const_int_0 );
    PyDict_SetItem( const_dict_f461c15a2b4d9a6ee80b4f29c347777b, const_str_plain_i, const_int_0 );
    PyDict_SetItem( const_dict_f461c15a2b4d9a6ee80b4f29c347777b, const_str_plain_h, const_int_0 );
    PyDict_SetItem( const_dict_f461c15a2b4d9a6ee80b4f29c347777b, const_str_plain_F, const_int_pos_1 );
    PyDict_SetItem( const_dict_f461c15a2b4d9a6ee80b4f29c347777b, const_str_plain_l, const_int_0 );
    PyDict_SetItem( const_dict_f461c15a2b4d9a6ee80b4f29c347777b, const_str_plain_b, const_int_0 );
    PyDict_SetItem( const_dict_f461c15a2b4d9a6ee80b4f29c347777b, const_str_plain_D, const_int_pos_1 );
    const_list_6684a01abc620c181414d0cfe37cff56_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_6684a01abc620c181414d0cfe37cff56_list, 0, const_list_str_plain_f_str_plain_d_list ); Py_INCREF( const_list_str_plain_f_str_plain_d_list );
    PyList_SET_ITEM( const_list_6684a01abc620c181414d0cfe37cff56_list, 1, const_list_str_plain_F_str_plain_D_list ); Py_INCREF( const_list_str_plain_F_str_plain_D_list );
    const_list_str_plain_schur_str_plain_rsf2csf_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_schur_str_plain_rsf2csf_list, 0, const_str_plain_schur ); Py_INCREF( const_str_plain_schur );
    PyList_SET_ITEM( const_list_str_plain_schur_str_plain_rsf2csf_list, 1, const_str_plain_rsf2csf ); Py_INCREF( const_str_plain_rsf2csf );
    const_str_digest_01094e0f10f4b7030e5904a34a875aca = UNSTREAM_STRING( &constant_bin[ 2242408 ], 48, 0 );
    const_str_digest_39d5a2b434b4775f05f535d1ecdd61bb = UNSTREAM_STRING( &constant_bin[ 2242456 ], 50, 0 );
    const_str_digest_3a6a0f2ca9c23ee81ede5b38d780c93f = UNSTREAM_STRING( &constant_bin[ 2242506 ], 855, 0 );
    const_str_digest_3c458f5f545bae2a5e1ff10f32736f24 = UNSTREAM_STRING( &constant_bin[ 2243361 ], 50, 0 );
    const_str_digest_9690624e32107b49e9dd24012404ea5b = UNSTREAM_STRING( &constant_bin[ 2243411 ], 2699, 0 );
    const_str_digest_a1312f770276dded665bb18463ce29e5 = UNSTREAM_STRING( &constant_bin[ 2246110 ], 30, 0 );
    const_str_digest_d367f157ef35192c024ee857be9b5140 = UNSTREAM_STRING( &constant_bin[ 2246140 ], 22, 0 );
    const_str_digest_dc2d68abc6425455add5f445c25b3e80 = UNSTREAM_STRING( &constant_bin[ 2246162 ], 61, 0 );
    const_str_digest_e7dd0adc6aacaa64115dd994b19701d1 = UNSTREAM_STRING( &constant_bin[ 2246223 ], 32, 0 );
    const_str_digest_f306ae1109b61571ea350bb952177bd3 = UNSTREAM_STRING( &constant_bin[ 2246255 ], 48, 0 );
    const_tuple_78702cdb92ca6fa32f029db2fbc767f0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_78702cdb92ca6fa32f029db2fbc767f0_tuple, 0, const_str_plain_asarray_chkfinite ); Py_INCREF( const_str_plain_asarray_chkfinite );
    PyTuple_SET_ITEM( const_tuple_78702cdb92ca6fa32f029db2fbc767f0_tuple, 1, const_str_plain_single ); Py_INCREF( const_str_plain_single );
    PyTuple_SET_ITEM( const_tuple_78702cdb92ca6fa32f029db2fbc767f0_tuple, 2, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    const_tuple_8a06bdd87c182f3d5650315f22a1c1a5_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_8a06bdd87c182f3d5650315f22a1c1a5_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_8a06bdd87c182f3d5650315f22a1c1a5_tuple, 1, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    PyTuple_SET_ITEM( const_tuple_8a06bdd87c182f3d5650315f22a1c1a5_tuple, 2, const_str_plain_lwork ); Py_INCREF( const_str_plain_lwork );
    PyTuple_SET_ITEM( const_tuple_8a06bdd87c182f3d5650315f22a1c1a5_tuple, 3, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_8a06bdd87c182f3d5650315f22a1c1a5_tuple, 4, const_str_plain_sort ); Py_INCREF( const_str_plain_sort );
    PyTuple_SET_ITEM( const_tuple_8a06bdd87c182f3d5650315f22a1c1a5_tuple, 5, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 1, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    PyTuple_SET_ITEM( const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 2, const_str_plain_lwork ); Py_INCREF( const_str_plain_lwork );
    PyTuple_SET_ITEM( const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 3, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 4, const_str_plain_sort ); Py_INCREF( const_str_plain_sort );
    PyTuple_SET_ITEM( const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 5, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 6, const_str_plain_a1 ); Py_INCREF( const_str_plain_a1 );
    PyTuple_SET_ITEM( const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 7, const_str_plain_typ ); Py_INCREF( const_str_plain_typ );
    PyTuple_SET_ITEM( const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 8, const_str_plain_gees ); Py_INCREF( const_str_plain_gees );
    PyTuple_SET_ITEM( const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 9, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 10, const_str_plain_sort_t ); Py_INCREF( const_str_plain_sort_t );
    PyTuple_SET_ITEM( const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 11, const_str_plain_sfunction ); Py_INCREF( const_str_plain_sfunction );
    PyTuple_SET_ITEM( const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 12, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    const_tuple_92672677c28f575295a116c4196011d5_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2246303 ], 151 );
    const_tuple_e80699f7ac4a36018242328603509f2b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e80699f7ac4a36018242328603509f2b_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_e80699f7ac4a36018242328603509f2b_tuple, 1, const_str_plain_kind ); Py_INCREF( const_str_plain_kind );
    PyTuple_SET_ITEM( const_tuple_e80699f7ac4a36018242328603509f2b_tuple, 2, const_str_plain_precision ); Py_INCREF( const_str_plain_precision );
    PyTuple_SET_ITEM( const_tuple_e80699f7ac4a36018242328603509f2b_tuple, 3, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_e80699f7ac4a36018242328603509f2b_tuple, 4, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_tuple_str_plain_real_none_false_none_true_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_str_plain_real_none_false_none_true_tuple, 0, const_str_plain_real ); Py_INCREF( const_str_plain_real );
    PyTuple_SET_ITEM( const_tuple_str_plain_real_none_false_none_true_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_str_plain_real_none_false_none_true_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_str_plain_real_none_false_none_true_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_str_plain_real_none_false_none_true_tuple, 4, Py_True ); Py_INCREF( Py_True );
    const_tuple_str_plain_T_str_plain_Z_str_plain_check_finite_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_T_str_plain_Z_str_plain_check_finite_tuple, 0, const_str_plain_T ); Py_INCREF( const_str_plain_T );
    PyTuple_SET_ITEM( const_tuple_str_plain_T_str_plain_Z_str_plain_check_finite_tuple, 1, const_str_plain_Z ); Py_INCREF( const_str_plain_Z );
    PyTuple_SET_ITEM( const_tuple_str_plain_T_str_plain_Z_str_plain_check_finite_tuple, 2, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
}

// The module code objects.
static PyCodeObject *codeobj_8ce9c69c92ad30f1441d5994b3111ce7;
static PyCodeObject *codeobj_2cf3cb4f8a1de972c85bdfee704c7144;
static PyCodeObject *codeobj_7187dd015f95969d0e345a525b9351bb;
static PyCodeObject *codeobj_b3b25307e4072262705278468624fa3e;
static PyCodeObject *codeobj_9cbd9d79a684c40c92017d772d3fa3f7;
static PyCodeObject *codeobj_c4232390a3ff6658d04b7201d815856a;
static PyCodeObject *codeobj_f9dc3a52208fc56576bb538789adb7e0;
static PyCodeObject *codeobj_cb9b429626bb68154bc4c2f4c9e94fd9;
static PyCodeObject *codeobj_b2b2f643a98ab9504923cb6a8a879135;
static PyCodeObject *codeobj_66c1d834a9552dede1173abab730a905;
static PyCodeObject *codeobj_9085b2d3813798294aa83b61821607c2;
static PyCodeObject *codeobj_92443a8f23070dd22b6adfd1bcbff8b3;
static PyCodeObject *codeobj_3dc055c2c1035b0636acb0fc020cac30;
static PyCodeObject *codeobj_02e9014e8569df050125289321f029bd;
static PyCodeObject *codeobj_f03a2d4450c046637142424301ac20e9;

static void _initModuleCodeObjects(void)
{
    codeobj_8ce9c69c92ad30f1441d5994b3111ce7 = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_angle_lambda, 110, const_tuple_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2cf3cb4f8a1de972c85bdfee704c7144 = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_angle_lambda, 115, const_tuple_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7187dd015f95969d0e345a525b9351bb = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_angle_lambda, 121, const_tuple_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b3b25307e4072262705278468624fa3e = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_angle_lambda, 123, const_tuple_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9cbd9d79a684c40c92017d772d3fa3f7 = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_angle_lambda, 125, const_tuple_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c4232390a3ff6658d04b7201d815856a = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_angle_lambda, 127, const_tuple_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f9dc3a52208fc56576bb538789adb7e0 = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_plain__castCopy, 170, const_tuple_str_plain_type_str_plain_arrays_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cb9b429626bb68154bc4c2f4c9e94fd9 = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_plain__castCopy, 170, const_tuple_5a2a2786271c0228ad39b83ecf7cc221_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b2b2f643a98ab9504923cb6a8a879135 = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_plain__commonType, 160, const_tuple_str_plain_arrays_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_66c1d834a9552dede1173abab730a905 = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_plain__commonType, 160, const_tuple_e80699f7ac4a36018242328603509f2b_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9085b2d3813798294aa83b61821607c2 = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_plain_decomp_schur, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_92443a8f23070dd22b6adfd1bcbff8b3 = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_plain_rsf2csf, 183, const_tuple_str_plain_T_str_plain_Z_str_plain_check_finite_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3dc055c2c1035b0636acb0fc020cac30 = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_plain_rsf2csf, 183, const_tuple_92672677c28f575295a116c4196011d5_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_02e9014e8569df050125289321f029bd = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_plain_schur, 20, const_tuple_8a06bdd87c182f3d5650315f22a1c1a5_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f03a2d4450c046637142424301ac20e9 = MAKE_CODEOBJ( const_str_digest_dc2d68abc6425455add5f445c25b3e80, const_str_plain_schur, 20, const_tuple_8c66fbcfcbe43618608e13df9acdf64f_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_schur_of_module_scipy$linalg$decomp_schur( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2__commonType_of_module_scipy$linalg$decomp_schur(  );


static PyObject *MAKE_FUNCTION_function_3__castCopy_of_module_scipy$linalg$decomp_schur(  );


static PyObject *MAKE_FUNCTION_function_4_rsf2csf_of_module_scipy$linalg$decomp_schur( PyObject *defaults );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  );


static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  );


static PyObject *MAKE_FUNCTION_lambda_3_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  );


static PyObject *MAKE_FUNCTION_lambda_4_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  );


static PyObject *MAKE_FUNCTION_lambda_5_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  );


static PyObject *MAKE_FUNCTION_lambda_6_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  );


// The module function definitions.
static PyObject *impl_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_output, PyObject *_python_par_lwork, PyObject *_python_par_overwrite_a, PyObject *_python_par_sort, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_output; par_output.object = _python_par_output;
    PyObjectLocalVariable par_lwork; par_lwork.object = _python_par_lwork;
    PyObjectLocalVariable par_overwrite_a; par_overwrite_a.object = _python_par_overwrite_a;
    PyObjectLocalVariable par_sort; par_sort.object = _python_par_sort;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_a1;
    PyObjectLocalVariable var_typ;
    PyObjectLocalVariable var_gees;
    PyObjectLocalVariable var_result;
    PyObjectLocalVariable var_sort_t;
    PyObjectLocalVariable var_sfunction;
    PyObjectLocalVariable var_info;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_or_3__value_1;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    int tmp_cmp_Eq_6;
    int tmp_cmp_Eq_7;
    int tmp_cmp_Gt_1;
    int tmp_cmp_In_1;
    int tmp_cmp_Lt_1;
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
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_type_6;
    PyObject *tmp_raise_type_7;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unpack_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_02e9014e8569df050125289321f029bd, module_scipy$linalg$decomp_schur );
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
    tmp_compare_left_1 = par_output.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82676 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LIST_COPY( const_list_str_plain_real_str_plain_complex_str_plain_r_str_plain_c_list );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 90;
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
    tmp_make_exception_arg_1 = const_str_digest_14853efcfdd009f7fc9859f53283cb22;
    frame_function->f_lineno = 91;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 91;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_cond_value_1 = par_check_finite.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243662 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_asarray_chkfinite );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray_chkfinite );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243720 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_a.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 93;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    assert( var_a1.object == NULL );
    var_a1.object = tmp_assign_source_1;

    goto branch_end_2;
    branch_no_2:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_a.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 95;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    assert( var_a1.object == NULL );
    var_a1.object = tmp_assign_source_2;

    branch_end_2:;
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_source_name_1 = var_a1.object;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_2;
    }
    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_2;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_assign_source_3 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
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
    tmp_source_name_2 = var_a1.object;

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_3;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_3;
    }
    tmp_source_name_3 = var_a1.object;

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 96;
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

        frame_function->f_lineno = 96;
        goto try_finally_handler_3;
    }
    tmp_cond_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
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

        frame_function->f_lineno = 96;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_2 = const_str_digest_bfc63172b396a4f385572b1b0268edc0;
    frame_function->f_lineno = 97;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 97;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_3:;
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
    tmp_source_name_5 = var_a1.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_char );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    assert( var_typ.object == NULL );
    var_typ.object = tmp_assign_source_4;

    // Tried code
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_compexpr_left_3 = par_output.object;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82676 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto try_finally_handler_5;
    }

    tmp_compexpr_right_3 = LIST_COPY( const_list_str_plain_complex_str_plain_c_list );
    tmp_assign_source_5 = SEQUENCE_CONTAINS( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_3 );

        frame_function->f_lineno = 99;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_compexpr_right_3 );
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_cond_value_5 = tmp_and_1__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto try_finally_handler_5;
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
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_4 = var_typ.object;

    tmp_compexpr_right_4 = LIST_COPY( const_list_str_plain_F_str_plain_D_list );
    tmp_cond_value_4 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_4 );

        frame_function->f_lineno = 99;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_compexpr_right_4 );
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
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_4 = tmp_and_1__value_1.object;

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
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto try_finally_handler_4;
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
    tmp_compare_left_2 = var_typ.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5069 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto try_finally_handler_4;
    }

    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__double_precision );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__double_precision );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244059 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto try_finally_handler_4;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
        goto try_finally_handler_4;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_6 = var_a1.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto try_finally_handler_4;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_astype );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_3 = const_str_plain_D;
    frame_function->f_lineno = 101;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto try_finally_handler_4;
    }
    if (var_a1.object == NULL)
    {
        var_a1.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = var_a1.object;
        var_a1.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_assign_source_7 = const_str_plain_D;
    if (var_typ.object == NULL)
    {
        var_typ.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = var_typ.object;
        var_typ.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_7 = var_a1.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto try_finally_handler_4;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_astype );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_4 = const_str_plain_F;
    frame_function->f_lineno = 104;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto try_finally_handler_4;
    }
    if (var_a1.object == NULL)
    {
        var_a1.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = var_a1.object;
        var_a1.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    tmp_assign_source_9 = const_str_plain_F;
    if (var_typ.object == NULL)
    {
        var_typ.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_typ.object;
        var_typ.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    branch_end_5:;
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

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

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
    tmp_assign_source_10 = NULL;
    // Tried code
    tmp_assign_source_11 = par_overwrite_a.object;

    if ( tmp_assign_source_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244155 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto try_finally_handler_8;
    }

    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

    tmp_cond_value_6 = tmp_or_2__value_1.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto try_finally_handler_8;
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
    tmp_assign_source_10 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_assign_source_10 );
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_10 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__datacopied );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__datacopied );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244212 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto try_finally_handler_9;
    }

    tmp_call_arg_element_5 = var_a1.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto try_finally_handler_9;
    }

    tmp_call_arg_element_6 = par_a.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto try_finally_handler_9;
    }

    frame_function->f_lineno = 106;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto try_finally_handler_9;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
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

        goto try_finally_handler_8;
    }

    goto finally_end_7;
    finally_end_7:;
    condexpr_end_3:;
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
    if (par_overwrite_a.object == NULL)
    {
        par_overwrite_a.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = par_overwrite_a.object;
        par_overwrite_a.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
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

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
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
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244309 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto try_finally_handler_10;
    }

    tmp_call_arg_element_7 = const_tuple_str_plain_gees_tuple;
    tmp_call_arg_element_8 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_a1.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto try_finally_handler_10;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_8, 0, tmp_tuple_element_1 );
    frame_function->f_lineno = 107;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto try_finally_handler_10;
    }
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto try_finally_handler_10;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_12;

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


        frame_function->f_lineno = 107;
        goto try_finally_handler_10;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_13;

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

            goto try_finally_handler_10;
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

        goto try_finally_handler_10;
    }
    tmp_assign_source_14 = tmp_tuple_unpack_1__element_1.object;

    assert( var_gees.object == NULL );
    var_gees.object = INCREASE_REFCOUNT( tmp_assign_source_14 );

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

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
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
    // Tried code
    tmp_cond_value_7 = NULL;
    // Tried code
    tmp_compexpr_left_5 = par_lwork.object;

    if ( tmp_compexpr_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244354 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto try_finally_handler_12;
    }

    tmp_compexpr_right_5 = Py_None;
    tmp_assign_source_15 = BOOL_FROM( tmp_compexpr_left_5 == tmp_compexpr_right_5 );
    assert( tmp_or_3__value_1.object == NULL );
    tmp_or_3__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    tmp_cond_value_8 = tmp_or_3__value_1.object;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto try_finally_handler_12;
    }
    if (tmp_cond_truth_8 == 1)
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_cond_value_7 = tmp_or_3__value_1.object;

    Py_INCREF( tmp_cond_value_7 );
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_7 = NULL;
    // Tried code
    tmp_result = tmp_or_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_3__value_1.object );
        tmp_or_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_6 = par_lwork.object;

    if ( tmp_compexpr_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244354 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto try_finally_handler_13;
    }

    tmp_compexpr_right_6 = const_int_neg_1;
    tmp_cond_value_7 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
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
    condexpr_end_4:;
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
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        frame_function->f_lineno = 108;
        goto try_finally_handler_11;
    }
    Py_DECREF( tmp_cond_value_7 );
    if (tmp_cond_truth_7 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_7 = var_gees.object;

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254941 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto try_finally_handler_11;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = MAKE_FUNCTION_lambda_1_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_2 );

        frame_function->f_lineno = 110;
        goto try_finally_handler_11;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_a1.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto try_finally_handler_11;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_2 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_01a7863d0509221cf3231e5ae47a0f98 );
    frame_function->f_lineno = 110;
    tmp_assign_source_16 = CALL_FUNCTION( tmp_called_7, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto try_finally_handler_11;
    }
    assert( var_result.object == NULL );
    var_result.object = tmp_assign_source_16;

    tmp_subscr_target_4 = var_result.object;

    tmp_subscr_subscript_4 = const_int_neg_2;
    tmp_subscr_target_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_11;
    }
    tmp_subscr_subscript_3 = const_int_0;
    tmp_source_name_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_11;
    }
    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_real );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_11;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_astype );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_11;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto try_finally_handler_11;
    }

    tmp_call_arg_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_int );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 111;
        goto try_finally_handler_11;
    }
    frame_function->f_lineno = 111;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_11;
    }
    if (par_lwork.object == NULL)
    {
        par_lwork.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = par_lwork.object;
        par_lwork.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    branch_no_6:;
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

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_3__value_1.object );
    tmp_or_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
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
    tmp_compare_left_3 = par_sort.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243557 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_18 = const_int_0;
    assert( var_sort_t.object == NULL );
    var_sort_t.object = INCREASE_REFCOUNT( tmp_assign_source_18 );

    tmp_assign_source_19 = MAKE_FUNCTION_lambda_2_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_19 );

        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    assert( var_sfunction.object == NULL );
    var_sfunction.object = tmp_assign_source_19;

    goto branch_end_7;
    branch_no_7:;
    tmp_assign_source_20 = const_int_pos_1;
    assert( var_sort_t.object == NULL );
    var_sort_t.object = INCREASE_REFCOUNT( tmp_assign_source_20 );

    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_callable );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_callable );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243520 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = par_sort.object;

    if ( tmp_call_arg_element_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243557 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 118;
    tmp_cond_value_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_10 );
    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_9 );
    if (tmp_cond_truth_9 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_21 = par_sort.object;

    if ( tmp_assign_source_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243557 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    assert( var_sfunction.object == NULL );
    var_sfunction.object = INCREASE_REFCOUNT( tmp_assign_source_21 );

    goto branch_end_8;
    branch_no_8:;
    tmp_compare_left_4 = par_sort.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243557 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_str_plain_lhp;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assign_source_22 = MAKE_FUNCTION_lambda_3_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    assert( var_sfunction.object == NULL );
    var_sfunction.object = tmp_assign_source_22;

    goto branch_end_9;
    branch_no_9:;
    tmp_compare_left_5 = par_sort.object;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243557 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = const_str_plain_rhp;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
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
    tmp_assign_source_23 = MAKE_FUNCTION_lambda_4_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_23 );

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    assert( var_sfunction.object == NULL );
    var_sfunction.object = tmp_assign_source_23;

    goto branch_end_10;
    branch_no_10:;
    tmp_compare_left_6 = par_sort.object;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243557 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = const_str_plain_iuc;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 124;
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
    tmp_assign_source_24 = MAKE_FUNCTION_lambda_5_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    assert( var_sfunction.object == NULL );
    var_sfunction.object = tmp_assign_source_24;

    goto branch_end_11;
    branch_no_11:;
    tmp_compare_left_7 = par_sort.object;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243557 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = const_str_plain_ouc;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_4 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_25 = MAKE_FUNCTION_lambda_6_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_25 );

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    assert( var_sfunction.object == NULL );
    var_sfunction.object = tmp_assign_source_25;

    goto branch_end_12;
    branch_no_12:;
    tmp_make_exception_arg_3 = const_str_digest_6719d0fadde3ef33fd0713f5dbf8a440;
    frame_function->f_lineno = 129;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 129;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 129;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_12:;
    branch_end_11:;
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    tmp_called_10 = var_gees.object;

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254941 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_sfunction.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243607 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_a1.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 1, tmp_tuple_element_3 );
    tmp_call_kw_2 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_lwork.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244354 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
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

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_overwrite_a;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = var_sort_t.object;

    tmp_dict_key_3 = const_str_plain_sort_t;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 133;
    tmp_assign_source_26 = CALL_FUNCTION( tmp_called_10, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    if (var_result.object == NULL)
    {
        var_result.object = tmp_assign_source_26;
    }
    else
    {
        PyObject *old = var_result.object;
        var_result.object = tmp_assign_source_26;
        Py_DECREF( old );
    }
    tmp_subscr_target_5 = var_result.object;

    tmp_subscr_subscript_5 = const_int_neg_1;
    tmp_assign_source_27 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }
    assert( var_info.object == NULL );
    var_info.object = tmp_assign_source_27;

    tmp_compare_left_8 = var_info.object;

    tmp_compare_right_8 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_binop_left_1 = const_str_digest_f306ae1109b61571ea350bb952177bd3;
    tmp_unary_arg_1 = var_info.object;

    tmp_binop_right_1 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_make_exception_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 137;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 137;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_4 );
    Py_DECREF( tmp_make_exception_arg_4 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 137;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 137;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_13;
    branch_no_13:;
    tmp_compare_left_9 = var_info.object;

    tmp_source_name_11 = var_a1.object;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_shape );
    if ( tmp_subscr_target_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_6 = const_int_0;
    tmp_binop_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_target_6 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_2 = const_int_pos_1;
    tmp_compare_right_9 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_compare_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_9 );

        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_9 );
    if (tmp_cmp_Eq_5 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_LinAlgError );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183355 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 140;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = const_str_digest_39d5a2b434b4775f05f535d1ecdd61bb;
    frame_function->f_lineno = 140;
    tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_11 );
    if ( tmp_raise_type_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_5;
    frame_function->f_lineno = 140;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_14;
    branch_no_14:;
    tmp_compare_left_10 = var_info.object;

    tmp_source_name_12 = var_a1.object;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72375 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_shape );
    if ( tmp_subscr_target_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_7 = const_int_0;
    tmp_binop_left_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    Py_DECREF( tmp_subscr_target_7 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_3 = const_int_pos_2;
    tmp_compare_right_10 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_compare_right_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_6 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_10 );

        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_10 );
    if (tmp_cmp_Eq_6 == 1)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_LinAlgError );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183355 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_12 = const_str_digest_3c458f5f545bae2a5e1ff10f32736f24;
    frame_function->f_lineno = 142;
    tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_12 );
    if ( tmp_raise_type_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 142;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_6;
    frame_function->f_lineno = 142;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_15;
    branch_no_15:;
    tmp_compare_left_11 = var_info.object;

    tmp_compare_right_11 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_LinAlgError );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
    }

    if ( tmp_called_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183355 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = const_str_digest_01094e0f10f4b7030e5904a34a875aca;
    frame_function->f_lineno = 144;
    tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_13 );
    if ( tmp_raise_type_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_7;
    frame_function->f_lineno = 144;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_16:;
    branch_end_15:;
    branch_end_14:;
    branch_end_13:;
    tmp_compare_left_12 = var_sort_t.object;

    tmp_compare_right_12 = const_int_0;
    tmp_cmp_Eq_7 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_Eq_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_7 == 1)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_subscr_target_8 = var_result.object;

    tmp_subscr_subscript_8 = const_int_0;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_subscr_target_9 = var_result.object;

    tmp_subscr_subscript_9 = const_int_neg_3;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    goto frame_return_exit_1;
    goto branch_end_17;
    branch_no_17:;
    tmp_return_value = PyTuple_New( 3 );
    tmp_subscr_target_10 = var_result.object;

    tmp_subscr_subscript_10 = const_int_0;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
    tmp_subscr_target_11 = var_result.object;

    tmp_subscr_subscript_11 = const_int_neg_3;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
    tmp_subscr_target_12 = var_result.object;

    tmp_subscr_subscript_12 = const_int_pos_1;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_5 );
    goto frame_return_exit_1;
    branch_end_17:;

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
    if ((var_typ.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_typ,
            var_typ.object
        );

    }
    if ((var_gees.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gees,
            var_gees.object
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
    if ((var_sort_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sort_t,
            var_sort_t.object
        );

    }
    if ((var_sfunction.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sfunction,
            var_sfunction.object
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
    if ((par_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_output,
            par_output.object
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
    if ((par_overwrite_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_overwrite_a,
            par_overwrite_a.object
        );

    }
    if ((par_sort.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sort,
            par_sort.object
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
static PyObject *fparse_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_output = NULL;
    PyObject *_python_par_lwork = NULL;
    PyObject *_python_par_overwrite_a = NULL;
    PyObject *_python_par_sort = NULL;
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
                PyErr_Format( PyExc_TypeError, "schur() keywords must be strings" );
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
            if ( found == false && const_str_plain_output == key )
            {
                assert( _python_par_output == NULL );
                _python_par_output = value;

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
            if ( found == false && const_str_plain_overwrite_a == key )
            {
                assert( _python_par_overwrite_a == NULL );
                _python_par_overwrite_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_sort == key )
            {
                assert( _python_par_sort == NULL );
                _python_par_sort = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_output, key ) == 1 )
            {
                assert( _python_par_output == NULL );
                _python_par_output = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_overwrite_a, key ) == 1 )
            {
                assert( _python_par_overwrite_a == NULL );
                _python_par_overwrite_a = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_sort, key ) == 1 )
            {
                assert( _python_par_sort == NULL );
                _python_par_sort = value;

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
                   "schur() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_output != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_output = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_output == NULL )
    {
        if ( 1 + self->m_defaults_given >= 6  )
        {
            _python_par_output = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_sort != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_sort = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_sort == NULL )
    {
        if ( 4 + self->m_defaults_given >= 6  )
        {
            _python_par_sort = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 6 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_a == NULL || _python_par_output == NULL || _python_par_lwork == NULL || _python_par_overwrite_a == NULL || _python_par_sort == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_output, _python_par_lwork, _python_par_overwrite_a, _python_par_sort, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_schur_of_module_scipy$linalg$decomp_schur( self, _python_par_a, _python_par_output, _python_par_lwork, _python_par_overwrite_a, _python_par_sort, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_output );
    Py_XDECREF( _python_par_lwork );
    Py_XDECREF( _python_par_overwrite_a );
    Py_XDECREF( _python_par_sort );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_1_schur_of_module_scipy$linalg$decomp_schur( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_schur_of_module_scipy$linalg$decomp_schur( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_lambda_1_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
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

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_lambda_1_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_lambda_1_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_2_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_lambda_2_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
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

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_lambda_2_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_2_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_lambda_2_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_2_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_3_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7187dd015f95969d0e345a525b9351bb, module_scipy$linalg$decomp_schur );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_real );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_x.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 121;
    tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_float_0_0;
    tmp_return_value = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
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
static PyObject *fparse_lambda_3_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
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

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_lambda_3_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_3_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_lambda_3_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_3_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_4_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b3b25307e4072262705278468624fa3e, module_scipy$linalg$decomp_schur );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_real );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_x.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 123;
    tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_float_0_0;
    tmp_return_value = RICH_COMPARE_GE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
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
static PyObject *fparse_lambda_4_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
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

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_lambda_4_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_4_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_lambda_4_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_4_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_5_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9cbd9d79a684c40c92017d772d3fa3f7, module_scipy$linalg$decomp_schur );
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
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_x.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 125;
    tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_float_1_0;
    tmp_return_value = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
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
static PyObject *fparse_lambda_5_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
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

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_lambda_5_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_5_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_lambda_5_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_5_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_6_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c4232390a3ff6658d04b7201d815856a, module_scipy$linalg$decomp_schur );
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
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_x.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 127;
    tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_float_1_0;
    tmp_return_value = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
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
static PyObject *fparse_lambda_6_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
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

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_lambda_6_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_6_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_lambda_6_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_6_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__commonType_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject *_python_par_arrays )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_arrays; par_arrays.object = _python_par_arrays;
    PyObjectLocalVariable var_kind;
    PyObjectLocalVariable var_precision;
    PyObjectLocalVariable var_a;
    PyObjectLocalVariable var_t;
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
    PyObject *tmp_assign_source_8;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
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
    tmp_assign_source_1 = const_int_0;
    assert( var_kind.object == NULL );
    var_kind.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_int_0;
    assert( var_precision.object == NULL );
    var_precision.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b2b2f643a98ab9504923cb6a8a879135, module_scipy$linalg$decomp_schur );
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
    tmp_iter_arg_1 = par_arrays.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 176923 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
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
        frame_function->f_lineno = 163;
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

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_source_name_2 = var_a.object;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto try_finally_handler_1;
    }
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_char );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto try_finally_handler_1;
    }
    if (var_t.object == NULL)
    {
        var_t.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = var_t.object;
        var_t.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = var_kind.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61416 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__array_kind );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__array_kind );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 254991 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = var_t.object;

    tmp_call_arg_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 165;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto try_finally_handler_1;
    }
    if (var_kind.object == NULL)
    {
        var_kind.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = var_kind.object;
        var_kind.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_3 = var_precision.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56420 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__array_precision );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__array_precision );
    }

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255031 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_2 = var_t.object;

    tmp_call_arg_element_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 166;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto try_finally_handler_1;
    }
    if (var_precision.object == NULL)
    {
        var_precision.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = var_precision.object;
        var_precision.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
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
    tmp_subscr_target_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__array_type );

    if (unlikely( tmp_subscr_target_4 == NULL ))
    {
        tmp_subscr_target_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__array_type );
    }

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255076 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_4 = var_kind.object;

    if ( tmp_subscr_subscript_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61416 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = var_precision.object;

    if ( tmp_subscr_subscript_3 == NULL )
    {
        Py_DECREF( tmp_subscr_target_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 56420 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
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
    if ((var_kind.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_kind,
            var_kind.object
        );

    }
    if ((var_precision.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_precision,
            var_precision.object
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
    if ((var_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t,
            var_t.object
        );

    }
    if ((par_arrays.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arrays,
            par_arrays.object
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
static PyObject *fparse_function_2__commonType_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_arrays = NULL;
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
                PyErr_Format( PyExc_TypeError, "_commonType() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.

            // Slow path, compare against all parameter names.


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_commonType() got an unexpected keyword argument '%s'",
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

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 0 )
    {
        _python_par_arrays = PyTuple_New( args_size - 0 );

        for( Py_ssize_t i = 0; i < args_size - 0; i++ )
        {
           PyTuple_SET_ITEM( _python_par_arrays, i, INCREASE_REFCOUNT( args[0+i] ) );
        }
    }
    else
    {
        _python_par_arrays = INCREASE_REFCOUNT( const_tuple_empty );
    }


    return impl_function_2__commonType_of_module_scipy$linalg$decomp_schur( self, _python_par_arrays );

error_exit:;

    Py_XDECREF( _python_par_arrays );

    return NULL;
}

static PyObject *dparse_function_2__commonType_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2__commonType_of_module_scipy$linalg$decomp_schur( self, MAKE_TUPLE( &args[ 0 ], size > 0 ? size-0 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_2__commonType_of_module_scipy$linalg$decomp_schur( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__castCopy_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject *_python_par_type, PyObject *_python_par_arrays )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_type; par_type.object = _python_par_type;
    PyObjectLocalVariable par_arrays; par_arrays.object = _python_par_arrays;
    PyObjectLocalVariable var_cast_arrays;
    PyObjectLocalVariable var_a;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_tuple_empty;
    assert( var_cast_arrays.object == NULL );
    var_cast_arrays.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f9dc3a52208fc56576bb538789adb7e0, module_scipy$linalg$decomp_schur );
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
    tmp_iter_arg_1 = par_arrays.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 176923 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
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
        frame_function->f_lineno = 172;
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

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_source_name_2 = var_a.object;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto try_finally_handler_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_char );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto try_finally_handler_1;
    }
    tmp_compare_right_1 = par_type.object;

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25149 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto try_finally_handler_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 173;
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
    tmp_binop_left_1 = var_cast_arrays.object;

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183858 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto try_finally_handler_1;
    }

    tmp_binop_right_1 = PyTuple_New( 1 );
    tmp_source_name_3 = var_a.object;

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_copy );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 174;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 174;
    tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 174;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_5 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_1;
    }
    if (var_cast_arrays.object == NULL)
    {
        var_cast_arrays.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = var_cast_arrays.object;
        var_cast_arrays.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_binop_left_2 = var_cast_arrays.object;

    if ( tmp_binop_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183858 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto try_finally_handler_1;
    }

    tmp_binop_right_2 = PyTuple_New( 1 );
    tmp_source_name_4 = var_a.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_astype );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 176;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = par_type.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25149 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 176;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 176;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_2 );
    tmp_assign_source_6 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto try_finally_handler_1;
    }
    if (var_cast_arrays.object == NULL)
    {
        var_cast_arrays.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = var_cast_arrays.object;
        var_cast_arrays.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    branch_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
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
    tmp_len_arg_1 = var_cast_arrays.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183858 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_subscr_target_1 = var_cast_arrays.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183858 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = var_cast_arrays.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183858 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
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
    if ((var_cast_arrays.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cast_arrays,
            var_cast_arrays.object
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
    if ((par_type.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_type,
            par_type.object
        );

    }
    if ((par_arrays.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arrays,
            par_arrays.object
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
static PyObject *fparse_function_3__castCopy_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_type = NULL;
    PyObject *_python_par_arrays = NULL;
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
                PyErr_Format( PyExc_TypeError, "_castCopy() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_type == key )
            {
                assert( _python_par_type == NULL );
                _python_par_type = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
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
                   "_castCopy() got an unexpected keyword argument '%s'",
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

    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_type != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_type = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_type == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_type = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_type == NULL ))
    {
        PyObject *values[] = { _python_par_type };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_arrays = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_arrays, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_arrays = INCREASE_REFCOUNT( const_tuple_empty );
    }


    return impl_function_3__castCopy_of_module_scipy$linalg$decomp_schur( self, _python_par_type, _python_par_arrays );

error_exit:;

    Py_XDECREF( _python_par_type );
    Py_XDECREF( _python_par_arrays );

    return NULL;
}

static PyObject *dparse_function_3__castCopy_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_3__castCopy_of_module_scipy$linalg$decomp_schur( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_3__castCopy_of_module_scipy$linalg$decomp_schur( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_rsf2csf_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject *_python_par_T, PyObject *_python_par_Z, PyObject *_python_par_check_finite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_T; par_T.object = _python_par_T;
    PyObjectLocalVariable par_Z; par_Z.object = _python_par_Z;
    PyObjectLocalVariable par_check_finite; par_check_finite.object = _python_par_check_finite;
    PyObjectLocalVariable var_N;
    PyObjectLocalVariable var_arr;
    PyObjectLocalVariable var_t;
    PyObjectLocalVariable var_conj;
    PyObjectLocalVariable var_dot;
    PyObjectLocalVariable var_r_;
    PyObjectLocalVariable var_transp;
    PyObjectLocalVariable var_m;
    PyObjectLocalVariable var_k;
    PyObjectLocalVariable var_mu;
    PyObjectLocalVariable var_r;
    PyObjectLocalVariable var_c;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_G;
    PyObjectLocalVariable var_Gc;
    PyObjectLocalVariable var_j;
    PyObjectLocalVariable var_i;
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
    PyObjectTempVariable tmp_tuple_unpack_3__element_2;
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
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_attempt_3;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_list_element_4;
    PyObject *tmp_list_element_5;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_range3_high_1;
    PyObject *tmp_range3_low_1;
    PyObject *tmp_range3_step_1;
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
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_92443a8f23070dd22b6adfd1bcbff8b3, module_scipy$linalg$decomp_schur );
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

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 213;
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


        frame_function->f_lineno = 214;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_asarray_chkfinite );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray_chkfinite );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243720 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 214;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_Z.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199394 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 214;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_T.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 214;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 214;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
        goto try_finally_handler_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
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


        frame_function->f_lineno = 214;
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


        frame_function->f_lineno = 214;
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

    if (par_Z.object == NULL)
    {
        par_Z.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = par_Z.object;
        par_Z.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2.object;

    if (par_T.object == NULL)
    {
        par_T.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = par_T.object;
        par_T.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
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


        frame_function->f_lineno = 216;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_call_arg_element_3 == NULL ))
    {
        tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 216;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_4 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_Z.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199394 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 216;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_T.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 216;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 216;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 216;
        goto try_finally_handler_2;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 216;
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


        frame_function->f_lineno = 216;
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


        frame_function->f_lineno = 216;
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

    if (par_Z.object == NULL)
    {
        par_Z.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = par_Z.object;
        par_Z.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_assign_source_10 = tmp_tuple_unpack_2__element_2.object;

    if (par_T.object == NULL)
    {
        par_T.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = par_T.object;
        par_T.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
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
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_source_name_1 = par_Z.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199394 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 217;
        goto try_finally_handler_4;
    }

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 217;
        goto try_finally_handler_4;
    }
    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 217;
        goto try_finally_handler_4;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_assign_source_11 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 217;
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


        frame_function->f_lineno = 217;
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
    tmp_source_name_2 = par_Z.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199394 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 217;
        goto try_finally_handler_5;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 217;
        goto try_finally_handler_5;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 217;
        goto try_finally_handler_5;
    }
    tmp_source_name_3 = par_Z.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199394 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 217;
        goto try_finally_handler_5;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 217;
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

        frame_function->f_lineno = 217;
        goto try_finally_handler_5;
    }
    tmp_cond_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 217;
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

        frame_function->f_lineno = 217;
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
    tmp_make_exception_arg_1 = const_str_digest_d367f157ef35192c024ee857be9b5140;
    frame_function->f_lineno = 218;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto try_finally_handler_3;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 218;
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
    // Tried code
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_source_name_4 = par_T.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 219;
        goto try_finally_handler_7;
    }

    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto try_finally_handler_7;
    }
    tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto try_finally_handler_7;
    }
    tmp_compexpr_right_3 = const_int_pos_2;
    tmp_assign_source_12 = RICH_COMPARE_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto try_finally_handler_7;
    }
    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = tmp_assign_source_12;

    tmp_cond_value_5 = tmp_or_2__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto try_finally_handler_7;
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
    tmp_source_name_5 = par_T.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 219;
        goto try_finally_handler_8;
    }

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto try_finally_handler_8;
    }
    tmp_subscr_subscript_3 = const_int_0;
    tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto try_finally_handler_8;
    }
    tmp_source_name_6 = par_T.object;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 219;
        goto try_finally_handler_8;
    }

    tmp_subscr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_subscr_target_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_4 );

        frame_function->f_lineno = 219;
        goto try_finally_handler_8;
    }
    tmp_subscr_subscript_4 = const_int_pos_1;
    tmp_compexpr_right_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_target_4 );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_4 );

        frame_function->f_lineno = 219;
        goto try_finally_handler_8;
    }
    tmp_cond_value_4 = RICH_COMPARE_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
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
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 219;
        goto try_finally_handler_6;
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
    tmp_make_exception_arg_2 = const_str_digest_d367f157ef35192c024ee857be9b5140;
    frame_function->f_lineno = 220;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto try_finally_handler_6;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 220;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_6;
    branch_no_3:;
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
    tmp_source_name_7 = par_T.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_subscr_target_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_5 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_target_5 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_Z.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199394 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    if ( tmp_subscr_target_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_6 = const_int_0;
    tmp_compare_right_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_target_6 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_3 = const_str_digest_e7dd0adc6aacaa64115dd994b19701d1;
    frame_function->f_lineno = 222;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 222;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_source_name_9 = par_T.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
    if ( tmp_subscr_target_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_7 = const_int_0;
    tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    Py_DECREF( tmp_subscr_target_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }
    assert( var_N.object == NULL );
    var_N.object = tmp_assign_source_13;

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_array );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    assert( var_arr.object == NULL );
    var_arr.object = tmp_assign_source_14;

    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__commonType );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__commonType );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 184275 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 225;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = par_Z.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199394 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 225;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = par_T.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 225;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = var_arr.object;

    tmp_call_arg_element_8 = LIST_COPY( const_list_float_3_0_list );
    tmp_call_arg_element_9 = const_str_plain_F;
    frame_function->f_lineno = 225;
    tmp_call_arg_element_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 225;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 225;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 225;
        goto frame_exception_exit_1;
    }
    assert( var_t.object == NULL );
    var_t.object = tmp_assign_source_15;

    // Tried code
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__castCopy );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__castCopy );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255116 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto try_finally_handler_9;
    }

    tmp_call_arg_element_10 = var_t.object;

    tmp_call_arg_element_11 = par_Z.object;

    if ( tmp_call_arg_element_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199394 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto try_finally_handler_9;
    }

    tmp_call_arg_element_12 = par_T.object;

    if ( tmp_call_arg_element_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto try_finally_handler_9;
    }

    frame_function->f_lineno = 226;
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto try_finally_handler_9;
    }
    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto try_finally_handler_9;
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


        frame_function->f_lineno = 226;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_3__element_1.object == NULL );
    tmp_tuple_unpack_3__element_1.object = tmp_assign_source_17;

    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_18 = UNPACK_PARAMETER_NEXT( tmp_unpack_6, 1 );
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


        frame_function->f_lineno = 226;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_3__element_2.object == NULL );
    tmp_tuple_unpack_3__element_2.object = tmp_assign_source_18;

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
    tmp_assign_source_19 = tmp_tuple_unpack_3__element_1.object;

    if (par_Z.object == NULL)
    {
        par_Z.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
    }
    else
    {
        PyObject *old = par_Z.object;
        par_Z.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
        Py_DECREF( old );
    }
    tmp_assign_source_20 = tmp_tuple_unpack_3__element_2.object;

    if (par_T.object == NULL)
    {
        par_T.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
    }
    else
    {
        PyObject *old = par_T.object;
        par_T.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
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
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_conj );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    assert( var_conj.object == NULL );
    var_conj.object = tmp_assign_source_21;

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_dot );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    assert( var_dot.object == NULL );
    var_dot.object = tmp_assign_source_22;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_r_ );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }
    assert( var_r_.object == NULL );
    var_r_.object = tmp_assign_source_23;

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_transpose );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto frame_exception_exit_1;
    }
    assert( var_transp.object == NULL );
    var_transp.object = tmp_assign_source_24;

    tmp_binop_left_1 = var_N.object;

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = const_int_pos_1;
    tmp_range3_low_1 = BINARY_OPERATION_SUB( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_range3_low_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_range3_high_1 = const_int_0;
    tmp_range3_step_1 = const_int_neg_1;
    tmp_iter_arg_4 = BUILTIN_RANGE3( tmp_range3_low_1, tmp_range3_high_1, tmp_range3_step_1 );
    Py_DECREF( tmp_range3_low_1 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_25;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_26 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_26 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 231;
            goto try_finally_handler_10;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_26;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_26;
        Py_DECREF( old );
    }
    tmp_assign_source_27 = tmp_for_loop_1__iter_value.object;

    if (var_m.object == NULL)
    {
        var_m.object = INCREASE_REFCOUNT( tmp_assign_source_27 );
    }
    else
    {
        PyObject *old = var_m.object;
        var_m.object = INCREASE_REFCOUNT( tmp_assign_source_27 );
        Py_DECREF( old );
    }
    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    tmp_subscr_target_8 = par_T.object;

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }

    tmp_subscr_subscript_8 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_m.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_8, 0, tmp_tuple_element_3 );
    tmp_binop_left_2 = var_m.object;

    tmp_binop_right_2 = const_int_pos_1;
    tmp_tuple_element_3 = BINARY_OPERATION_SUB( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_8 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_8, 1, tmp_tuple_element_3 );
    tmp_call_arg_element_13 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    Py_DECREF( tmp_subscr_subscript_8 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    frame_function->f_lineno = 232;
    tmp_compare_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_13 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    tmp_binop_left_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_eps );

    if (unlikely( tmp_binop_left_3 == NULL ))
    {
        tmp_binop_left_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eps );
    }

    if ( tmp_binop_left_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255154 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }

    tmp_called_7 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    tmp_subscr_target_9 = par_T.object;

    if ( tmp_subscr_target_9 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }

    tmp_subscr_subscript_9 = PyTuple_New( 2 );
    tmp_binop_left_5 = var_m.object;

    tmp_binop_right_5 = const_int_pos_1;
    tmp_tuple_element_4 = BINARY_OPERATION_SUB( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_subscr_subscript_9 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_9, 0, tmp_tuple_element_4 );
    tmp_binop_left_6 = var_m.object;

    tmp_binop_right_6 = const_int_pos_1;
    tmp_tuple_element_4 = BINARY_OPERATION_SUB( tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_subscr_subscript_9 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_9, 1, tmp_tuple_element_4 );
    tmp_call_arg_element_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    Py_DECREF( tmp_subscr_subscript_9 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    frame_function->f_lineno = 232;
    tmp_binop_left_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_14 );
    Py_DECREF( tmp_call_arg_element_14 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    tmp_called_8 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    tmp_subscr_target_10 = par_T.object;

    if ( tmp_subscr_target_10 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }

    tmp_subscr_subscript_10 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_m.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_10, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_m.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_10, 1, tmp_tuple_element_5 );
    tmp_call_arg_element_15 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    Py_DECREF( tmp_subscr_subscript_10 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    frame_function->f_lineno = 232;
    tmp_binop_right_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_15 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    tmp_binop_right_3 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    tmp_compare_right_2 = BINARY_OPERATION_MUL( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 232;
        goto try_finally_handler_10;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_9 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto try_finally_handler_10;
    }
    tmp_binop_left_7 = var_m.object;

    tmp_binop_right_7 = const_int_pos_1;
    tmp_call_arg_element_16 = BINARY_OPERATION_SUB( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto try_finally_handler_10;
    }
    tmp_binop_left_8 = var_m.object;

    tmp_binop_right_8 = const_int_pos_1;
    tmp_call_arg_element_17 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_16 );

        frame_function->f_lineno = 233;
        goto try_finally_handler_10;
    }
    frame_function->f_lineno = 233;
    tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS2( tmp_called_9, tmp_call_arg_element_16, tmp_call_arg_element_17 );
    Py_DECREF( tmp_call_arg_element_16 );
    Py_DECREF( tmp_call_arg_element_17 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto try_finally_handler_10;
    }
    if (var_k.object == NULL)
    {
        var_k.object = tmp_assign_source_28;
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = tmp_assign_source_28;
        Py_DECREF( old );
    }
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_eigvals );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eigvals );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 174360 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto try_finally_handler_10;
    }

    tmp_subscr_target_11 = par_T.object;

    if ( tmp_subscr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto try_finally_handler_10;
    }

    tmp_subscr_subscript_11 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_k.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_11, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_k.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_11, 1, tmp_tuple_element_6 );
    tmp_call_arg_element_18 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    Py_DECREF( tmp_subscr_subscript_11 );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto try_finally_handler_10;
    }
    frame_function->f_lineno = 234;
    tmp_binop_left_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_18 );
    Py_DECREF( tmp_call_arg_element_18 );
    if ( tmp_binop_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto try_finally_handler_10;
    }
    tmp_subscr_target_12 = par_T.object;

    if ( tmp_subscr_target_12 == NULL )
    {
        Py_DECREF( tmp_binop_left_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto try_finally_handler_10;
    }

    tmp_subscr_subscript_12 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_m.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_12, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_m.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_12, 1, tmp_tuple_element_7 );
    tmp_binop_right_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    Py_DECREF( tmp_subscr_subscript_12 );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_9 );

        frame_function->f_lineno = 234;
        goto try_finally_handler_10;
    }
    tmp_assign_source_29 = BINARY_OPERATION_SUB( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_left_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto try_finally_handler_10;
    }
    if (var_mu.object == NULL)
    {
        var_mu.object = tmp_assign_source_29;
    }
    else
    {
        PyObject *old = var_mu.object;
        var_mu.object = tmp_assign_source_29;
        Py_DECREF( old );
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_misc );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_misc );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255186 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_10;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_norm );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto try_finally_handler_10;
    }
    tmp_call_arg_element_19 = PyList_New( 2 );
    tmp_subscr_target_13 = var_mu.object;

    tmp_subscr_subscript_13 = const_int_0;
    tmp_list_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_function->f_lineno = 235;
        goto try_finally_handler_10;
    }
    PyList_SET_ITEM( tmp_call_arg_element_19, 0, tmp_list_element_1 );
    tmp_subscr_target_14 = par_T.object;

    if ( tmp_subscr_target_14 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_10;
    }

    tmp_subscr_subscript_14 = PyTuple_New( 2 );
    tmp_tuple_element_8 = var_m.object;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_14, 0, tmp_tuple_element_8 );
    tmp_binop_left_10 = var_m.object;

    tmp_binop_right_10 = const_int_pos_1;
    tmp_tuple_element_8 = BINARY_OPERATION_SUB( tmp_binop_left_10, tmp_binop_right_10 );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_subscr_subscript_14 );

        frame_function->f_lineno = 235;
        goto try_finally_handler_10;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_14, 1, tmp_tuple_element_8 );
    tmp_list_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_14, tmp_subscr_subscript_14 );
    Py_DECREF( tmp_subscr_subscript_14 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_function->f_lineno = 235;
        goto try_finally_handler_10;
    }
    PyList_SET_ITEM( tmp_call_arg_element_19, 1, tmp_list_element_1 );
    frame_function->f_lineno = 235;
    tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_19 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto try_finally_handler_10;
    }
    if (var_r.object == NULL)
    {
        var_r.object = tmp_assign_source_30;
    }
    else
    {
        PyObject *old = var_r.object;
        var_r.object = tmp_assign_source_30;
        Py_DECREF( old );
    }
    tmp_subscr_target_15 = var_mu.object;

    tmp_subscr_subscript_15 = const_int_0;
    tmp_binop_left_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_15, tmp_subscr_subscript_15 );
    if ( tmp_binop_left_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto try_finally_handler_10;
    }
    tmp_binop_right_11 = var_r.object;

    tmp_assign_source_31 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_11, tmp_binop_right_11 );
    Py_DECREF( tmp_binop_left_11 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto try_finally_handler_10;
    }
    if (var_c.object == NULL)
    {
        var_c.object = tmp_assign_source_31;
    }
    else
    {
        PyObject *old = var_c.object;
        var_c.object = tmp_assign_source_31;
        Py_DECREF( old );
    }
    tmp_subscr_target_16 = par_T.object;

    if ( tmp_subscr_target_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto try_finally_handler_10;
    }

    tmp_subscr_subscript_16 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_m.object;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_16, 0, tmp_tuple_element_9 );
    tmp_binop_left_13 = var_m.object;

    tmp_binop_right_13 = const_int_pos_1;
    tmp_tuple_element_9 = BINARY_OPERATION_SUB( tmp_binop_left_13, tmp_binop_right_13 );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_16 );

        frame_function->f_lineno = 237;
        goto try_finally_handler_10;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_16, 1, tmp_tuple_element_9 );
    tmp_binop_left_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_16, tmp_subscr_subscript_16 );
    Py_DECREF( tmp_subscr_subscript_16 );
    if ( tmp_binop_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto try_finally_handler_10;
    }
    tmp_binop_right_12 = var_r.object;

    tmp_assign_source_32 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_left_12 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto try_finally_handler_10;
    }
    if (var_s.object == NULL)
    {
        var_s.object = tmp_assign_source_32;
    }
    else
    {
        PyObject *old = var_s.object;
        var_s.object = tmp_assign_source_32;
        Py_DECREF( old );
    }
    tmp_subscr_target_17 = var_r_.object;

    if ( tmp_subscr_target_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255219 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto try_finally_handler_10;
    }

    tmp_subscr_subscript_17 = PyTuple_New( 2 );
    tmp_called_12 = var_arr.object;

    if ( tmp_called_12 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10450 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto try_finally_handler_10;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_11 = PyList_New( 1 );
    tmp_list_element_2 = PyList_New( 2 );
    tmp_called_13 = var_conj.object;

    if ( tmp_called_13 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_17 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_11 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255267 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto try_finally_handler_10;
    }

    tmp_call_arg_element_20 = var_c.object;

    frame_function->f_lineno = 238;
    tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_20 );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_17 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_11 );
        Py_DECREF( tmp_list_element_2 );

        frame_function->f_lineno = 238;
        goto try_finally_handler_10;
    }
    PyList_SET_ITEM( tmp_list_element_2, 0, tmp_list_element_3 );
    tmp_list_element_3 = var_s.object;

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_list_element_2, 1, tmp_list_element_3 );
    PyList_SET_ITEM( tmp_tuple_element_11, 0, tmp_list_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_11 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_t.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_17 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto try_finally_handler_10;
    }

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 238;
    tmp_tuple_element_10 = CALL_FUNCTION( tmp_called_12, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_17 );

        frame_function->f_lineno = 238;
        goto try_finally_handler_10;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_17, 0, tmp_tuple_element_10 );
    tmp_called_14 = var_arr.object;

    if ( tmp_called_14 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10450 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto try_finally_handler_10;
    }

    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_12 = PyList_New( 1 );
    tmp_list_element_4 = PyList_New( 2 );
    tmp_unary_arg_1 = var_s.object;

    tmp_list_element_5 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_list_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_17 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_12 );
        Py_DECREF( tmp_list_element_4 );

        frame_function->f_lineno = 238;
        goto try_finally_handler_10;
    }
    PyList_SET_ITEM( tmp_list_element_4, 0, tmp_list_element_5 );
    tmp_list_element_5 = var_c.object;

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_list_element_4, 1, tmp_list_element_5 );
    PyList_SET_ITEM( tmp_tuple_element_12, 0, tmp_list_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_12 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_t.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_17 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto try_finally_handler_10;
    }

    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 238;
    tmp_tuple_element_10 = CALL_FUNCTION( tmp_called_14, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_17 );

        frame_function->f_lineno = 238;
        goto try_finally_handler_10;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_17, 1, tmp_tuple_element_10 );
    tmp_assign_source_33 = LOOKUP_SUBSCRIPT( tmp_subscr_target_17, tmp_subscr_subscript_17 );
    Py_DECREF( tmp_subscr_subscript_17 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
        goto try_finally_handler_10;
    }
    if (var_G.object == NULL)
    {
        var_G.object = tmp_assign_source_33;
    }
    else
    {
        PyObject *old = var_G.object;
        var_G.object = tmp_assign_source_33;
        Py_DECREF( old );
    }
    tmp_called_15 = var_conj.object;

    if ( tmp_called_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255267 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 239;
        goto try_finally_handler_10;
    }

    tmp_called_16 = var_transp.object;

    if ( tmp_called_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255317 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 239;
        goto try_finally_handler_10;
    }

    tmp_call_arg_element_22 = var_G.object;

    frame_function->f_lineno = 239;
    tmp_call_arg_element_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_22 );
    if ( tmp_call_arg_element_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto try_finally_handler_10;
    }
    frame_function->f_lineno = 239;
    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_21 );
    Py_DECREF( tmp_call_arg_element_21 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto try_finally_handler_10;
    }
    if (var_Gc.object == NULL)
    {
        var_Gc.object = tmp_assign_source_34;
    }
    else
    {
        PyObject *old = var_Gc.object;
        var_Gc.object = tmp_assign_source_34;
        Py_DECREF( old );
    }
    tmp_called_17 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto try_finally_handler_10;
    }
    tmp_binop_left_14 = var_m.object;

    tmp_binop_right_14 = const_int_pos_1;
    tmp_call_arg_element_23 = BINARY_OPERATION_SUB( tmp_binop_left_14, tmp_binop_right_14 );
    if ( tmp_call_arg_element_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto try_finally_handler_10;
    }
    tmp_call_arg_element_24 = var_N.object;

    if ( tmp_call_arg_element_24 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 240;
        goto try_finally_handler_10;
    }

    frame_function->f_lineno = 240;
    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2( tmp_called_17, tmp_call_arg_element_23, tmp_call_arg_element_24 );
    Py_DECREF( tmp_call_arg_element_23 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto try_finally_handler_10;
    }
    if (var_j.object == NULL)
    {
        var_j.object = tmp_assign_source_35;
    }
    else
    {
        PyObject *old = var_j.object;
        var_j.object = tmp_assign_source_35;
        Py_DECREF( old );
    }
    tmp_called_18 = var_dot.object;

    if ( tmp_called_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255369 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto try_finally_handler_10;
    }

    tmp_call_arg_element_25 = var_G.object;

    tmp_subscr_target_18 = par_T.object;

    if ( tmp_subscr_target_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto try_finally_handler_10;
    }

    tmp_subscr_subscript_18 = PyTuple_New( 2 );
    tmp_tuple_element_13 = var_k.object;

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_18, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = var_j.object;

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_18, 1, tmp_tuple_element_13 );
    tmp_call_arg_element_26 = LOOKUP_SUBSCRIPT( tmp_subscr_target_18, tmp_subscr_subscript_18 );
    Py_DECREF( tmp_subscr_subscript_18 );
    if ( tmp_call_arg_element_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto try_finally_handler_10;
    }
    frame_function->f_lineno = 241;
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_18, tmp_call_arg_element_25, tmp_call_arg_element_26 );
    Py_DECREF( tmp_call_arg_element_26 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto try_finally_handler_10;
    }
    tmp_ass_subscribed_1 = par_T.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto try_finally_handler_10;
    }

    tmp_ass_subscript_1 = PyTuple_New( 2 );
    tmp_tuple_element_14 = var_k.object;

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = var_j.object;

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_14 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto try_finally_handler_10;
    }
    tmp_called_19 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto try_finally_handler_10;
    }
    tmp_call_arg_element_27 = const_int_0;
    tmp_binop_left_15 = var_m.object;

    tmp_binop_right_15 = const_int_pos_1;
    tmp_call_arg_element_28 = BINARY_OPERATION_ADD( tmp_binop_left_15, tmp_binop_right_15 );
    if ( tmp_call_arg_element_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto try_finally_handler_10;
    }
    frame_function->f_lineno = 242;
    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2( tmp_called_19, tmp_call_arg_element_27, tmp_call_arg_element_28 );
    Py_DECREF( tmp_call_arg_element_28 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto try_finally_handler_10;
    }
    if (var_i.object == NULL)
    {
        var_i.object = tmp_assign_source_36;
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = tmp_assign_source_36;
        Py_DECREF( old );
    }
    tmp_called_20 = var_dot.object;

    if ( tmp_called_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255369 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto try_finally_handler_10;
    }

    tmp_subscr_target_19 = par_T.object;

    if ( tmp_subscr_target_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto try_finally_handler_10;
    }

    tmp_subscr_subscript_19 = PyTuple_New( 2 );
    tmp_tuple_element_15 = var_i.object;

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_19, 0, tmp_tuple_element_15 );
    tmp_tuple_element_15 = var_k.object;

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_19, 1, tmp_tuple_element_15 );
    tmp_call_arg_element_29 = LOOKUP_SUBSCRIPT( tmp_subscr_target_19, tmp_subscr_subscript_19 );
    Py_DECREF( tmp_subscr_subscript_19 );
    if ( tmp_call_arg_element_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto try_finally_handler_10;
    }
    tmp_call_arg_element_30 = var_Gc.object;

    frame_function->f_lineno = 243;
    tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_20, tmp_call_arg_element_29, tmp_call_arg_element_30 );
    Py_DECREF( tmp_call_arg_element_29 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto try_finally_handler_10;
    }
    tmp_ass_subscribed_2 = par_T.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto try_finally_handler_10;
    }

    tmp_ass_subscript_2 = PyTuple_New( 2 );
    tmp_tuple_element_16 = var_i.object;

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = var_k.object;

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_16 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscript_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto try_finally_handler_10;
    }
    tmp_called_21 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto try_finally_handler_10;
    }
    tmp_call_arg_element_31 = const_int_0;
    tmp_call_arg_element_32 = var_N.object;

    if ( tmp_call_arg_element_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 244;
        goto try_finally_handler_10;
    }

    frame_function->f_lineno = 244;
    tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS2( tmp_called_21, tmp_call_arg_element_31, tmp_call_arg_element_32 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto try_finally_handler_10;
    }
    assert( var_i.object != NULL );
    {
        PyObject *old = var_i.object;
        var_i.object = tmp_assign_source_37;
        Py_DECREF( old );
    }

    tmp_called_22 = var_dot.object;

    if ( tmp_called_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255369 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto try_finally_handler_10;
    }

    tmp_subscr_target_20 = par_Z.object;

    if ( tmp_subscr_target_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199394 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto try_finally_handler_10;
    }

    tmp_subscr_subscript_20 = PyTuple_New( 2 );
    tmp_tuple_element_17 = var_i.object;

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_20, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = var_k.object;

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_20, 1, tmp_tuple_element_17 );
    tmp_call_arg_element_33 = LOOKUP_SUBSCRIPT( tmp_subscr_target_20, tmp_subscr_subscript_20 );
    Py_DECREF( tmp_subscr_subscript_20 );
    if ( tmp_call_arg_element_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_10;
    }
    tmp_call_arg_element_34 = var_Gc.object;

    frame_function->f_lineno = 245;
    tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_22, tmp_call_arg_element_33, tmp_call_arg_element_34 );
    Py_DECREF( tmp_call_arg_element_33 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_10;
    }
    tmp_ass_subscribed_3 = par_Z.object;

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199394 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto try_finally_handler_10;
    }

    tmp_ass_subscript_3 = PyTuple_New( 2 );
    tmp_tuple_element_18 = var_i.object;

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_ass_subscript_3, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = var_k.object;

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_ass_subscript_3, 1, tmp_tuple_element_18 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscript_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_10;
    }
    branch_no_5:;
    tmp_ass_subvalue_4 = const_float_0_0;
    tmp_ass_subscribed_4 = par_T.object;

    if ( tmp_ass_subscribed_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto try_finally_handler_10;
    }

    tmp_ass_subscript_4 = PyTuple_New( 2 );
    tmp_tuple_element_19 = var_m.object;

    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_ass_subscript_4, 0, tmp_tuple_element_19 );
    tmp_binop_left_16 = var_m.object;

    tmp_binop_right_16 = const_int_pos_1;
    tmp_tuple_element_19 = BINARY_OPERATION_SUB( tmp_binop_left_16, tmp_binop_right_16 );
    if ( tmp_tuple_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subscript_4 );

        frame_function->f_lineno = 246;
        goto try_finally_handler_10;
    }
    PyTuple_SET_ITEM( tmp_ass_subscript_4, 1, tmp_tuple_element_19 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subscript_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto try_finally_handler_10;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
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
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

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
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_20 = par_T.object;

    if ( tmp_tuple_element_20 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246417 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = par_Z.object;

    if ( tmp_tuple_element_20 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199394 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_20 );
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
    if ((var_N.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_N,
            var_N.object
        );

    }
    if ((var_arr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arr,
            var_arr.object
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
    if ((var_conj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_conj,
            var_conj.object
        );

    }
    if ((var_dot.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dot,
            var_dot.object
        );

    }
    if ((var_r_.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_r_,
            var_r_.object
        );

    }
    if ((var_transp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_transp,
            var_transp.object
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
    if ((var_k.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            var_k.object
        );

    }
    if ((var_mu.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mu,
            var_mu.object
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
    if ((var_c.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c,
            var_c.object
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
    if ((var_G.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_G,
            var_G.object
        );

    }
    if ((var_Gc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Gc,
            var_Gc.object
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
    if ((var_i.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_i,
            var_i.object
        );

    }
    if ((par_T.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_T,
            par_T.object
        );

    }
    if ((par_Z.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Z,
            par_Z.object
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
static PyObject *fparse_function_4_rsf2csf_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_T = NULL;
    PyObject *_python_par_Z = NULL;
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
                PyErr_Format( PyExc_TypeError, "rsf2csf() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_T == key )
            {
                assert( _python_par_T == NULL );
                _python_par_T = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Z == key )
            {
                assert( _python_par_Z == NULL );
                _python_par_Z = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_T, key ) == 1 )
            {
                assert( _python_par_T == NULL );
                _python_par_T = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Z, key ) == 1 )
            {
                assert( _python_par_Z == NULL );
                _python_par_Z = value;

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
                   "rsf2csf() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_T != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_T = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_T == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_T = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_Z != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_Z = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_Z == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_Z = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_T == NULL || _python_par_Z == NULL || _python_par_check_finite == NULL ))
    {
        PyObject *values[] = { _python_par_T, _python_par_Z, _python_par_check_finite };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_rsf2csf_of_module_scipy$linalg$decomp_schur( self, _python_par_T, _python_par_Z, _python_par_check_finite );

error_exit:;

    Py_XDECREF( _python_par_T );
    Py_XDECREF( _python_par_Z );
    Py_XDECREF( _python_par_check_finite );

    return NULL;
}

static PyObject *dparse_function_4_rsf2csf_of_module_scipy$linalg$decomp_schur( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_4_rsf2csf_of_module_scipy$linalg$decomp_schur( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_rsf2csf_of_module_scipy$linalg$decomp_schur( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_schur_of_module_scipy$linalg$decomp_schur( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_schur_of_module_scipy$linalg$decomp_schur,
        dparse_function_1_schur_of_module_scipy$linalg$decomp_schur,
        const_str_plain_schur,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f03a2d4450c046637142424301ac20e9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_schur,
        const_str_digest_9690624e32107b49e9dd24012404ea5b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__commonType_of_module_scipy$linalg$decomp_schur(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__commonType_of_module_scipy$linalg$decomp_schur,
        dparse_function_2__commonType_of_module_scipy$linalg$decomp_schur,
        const_str_plain__commonType,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_66c1d834a9552dede1173abab730a905,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_schur,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__castCopy_of_module_scipy$linalg$decomp_schur(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__castCopy_of_module_scipy$linalg$decomp_schur,
        dparse_function_3__castCopy_of_module_scipy$linalg$decomp_schur,
        const_str_plain__castCopy,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cb9b429626bb68154bc4c2f4c9e94fd9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_schur,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_rsf2csf_of_module_scipy$linalg$decomp_schur( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_rsf2csf_of_module_scipy$linalg$decomp_schur,
        dparse_function_4_rsf2csf_of_module_scipy$linalg$decomp_schur,
        const_str_plain_rsf2csf,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3dc055c2c1035b0636acb0fc020cac30,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_schur,
        const_str_digest_3a6a0f2ca9c23ee81ede5b38d780c93f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur,
        dparse_lambda_1_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8ce9c69c92ad30f1441d5994b3111ce7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_schur,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_2_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur,
        dparse_lambda_2_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2cf3cb4f8a1de972c85bdfee704c7144,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_schur,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_3_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_3_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur,
        dparse_lambda_3_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7187dd015f95969d0e345a525b9351bb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_schur,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_4_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_4_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur,
        dparse_lambda_4_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b3b25307e4072262705278468624fa3e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_schur,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_5_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_5_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur,
        dparse_lambda_5_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9cbd9d79a684c40c92017d772d3fa3f7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_schur,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_6_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_6_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur,
        dparse_lambda_6_lambda_of_function_1_schur_of_module_scipy$linalg$decomp_schur,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c4232390a3ff6658d04b7201d815856a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$decomp_schur,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$linalg$decomp_schur =
{
    PyModuleDef_HEAD_INIT,
    "scipy.linalg.decomp_schur",   /* m_name */
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

MOD_INIT_DECL( scipy$linalg$decomp_schur )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$linalg$decomp_schur );
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

    // puts( "in initscipy$linalg$decomp_schur" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$linalg$decomp_schur = Py_InitModule4(
        "scipy.linalg.decomp_schur",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$linalg$decomp_schur = PyModule_Create( &mdef_scipy$linalg$decomp_schur );
#endif

    moduledict_scipy$linalg$decomp_schur = (PyDictObject *)((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;

    assertObject( module_scipy$linalg$decomp_schur );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_83dcdfb86ae6b4b323b9239a7958e93c, module_scipy$linalg$decomp_schur );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$linalg$decomp_schur );

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
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;

    // Module code.
    tmp_assign_source_1 = const_str_digest_a1312f770276dded665bb18463ce29e5;
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_dc2d68abc6425455add5f445c25b3e80;
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_9085b2d3813798294aa83b61821607c2, module_scipy$linalg$decomp_schur );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_numpy, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_5, tmp_import_globals_5, const_tuple_78702cdb92ca6fa32f029db2fbc767f0_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_asarray_chkfinite );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_asarray_chkfinite, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_6, tmp_import_globals_6, const_tuple_78702cdb92ca6fa32f029db2fbc767f0_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_single );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_single, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_7, tmp_import_globals_7, const_tuple_78702cdb92ca6fa32f029db2fbc767f0_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_asarray );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_644880ce7dbf6c5f121ce247016ffe23, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_callable_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_callable );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_callable, tmp_assign_source_10 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_empty, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_misc_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_misc );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_misc, tmp_assign_source_11 );
    tmp_import_globals_10 = ((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_LinAlgError_str_plain__datacopied_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_LinAlgError );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_LinAlgError, tmp_assign_source_12 );
    tmp_import_globals_11 = ((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_LinAlgError_str_plain__datacopied_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain__datacopied );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__datacopied, tmp_assign_source_13 );
    tmp_import_globals_12 = ((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_lapack, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_get_lapack_funcs_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_get_lapack_funcs );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs, tmp_assign_source_14 );
    tmp_import_globals_13 = ((PyModuleObject *)module_scipy$linalg$decomp_schur)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_decomp, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_plain_eigvals_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_eigvals );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_eigvals, tmp_assign_source_15 );
    tmp_assign_source_16 = LIST_COPY( const_list_str_plain_schur_str_plain_rsf2csf_list );
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_16 );
    tmp_assign_source_17 = LIST_COPY( const_list_str_plain_i_str_plain_l_str_plain_d_list );
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__double_precision, tmp_assign_source_17 );
    tmp_defaults_1 = const_tuple_str_plain_real_none_false_none_true_tuple;
    tmp_assign_source_18 = MAKE_FUNCTION_function_1_schur_of_module_scipy$linalg$decomp_schur( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_schur, tmp_assign_source_18 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59708 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_finfo );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = LOOKUP_BUILTIN( const_str_plain_float );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 152;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_eps );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_eps, tmp_assign_source_19 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59708 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_finfo );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_single );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_single );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 183095 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 153;
    tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_eps );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_feps, tmp_assign_source_20 );
    tmp_assign_source_21 = PyDict_Copy( const_dict_f461c15a2b4d9a6ee80b4f29c347777b );
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__array_kind, tmp_assign_source_21 );
    tmp_assign_source_22 = PyDict_Copy( const_dict_5c6aa9a3fae0b7e7abbd0f91e8c66271 );
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__array_precision, tmp_assign_source_22 );
    tmp_assign_source_23 = DEEP_COPY( const_list_6684a01abc620c181414d0cfe37cff56_list );
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__array_type, tmp_assign_source_23 );
    tmp_assign_source_24 = MAKE_FUNCTION_function_2__commonType_of_module_scipy$linalg$decomp_schur(  );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        frame_module->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__commonType, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_function_3__castCopy_of_module_scipy$linalg$decomp_schur(  );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_25 );

        frame_module->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain__castCopy, tmp_assign_source_25 );
    tmp_defaults_2 = const_tuple_true_tuple;
    tmp_assign_source_26 = MAKE_FUNCTION_function_4_rsf2csf_of_module_scipy$linalg$decomp_schur( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_26 );

        frame_module->f_lineno = 183;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_schur, (Nuitka_StringObject *)const_str_plain_rsf2csf, tmp_assign_source_26 );

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

    return MOD_RETURN_VALUE( module_scipy$linalg$decomp_schur );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
