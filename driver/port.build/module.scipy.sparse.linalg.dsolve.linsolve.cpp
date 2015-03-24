// Generated code for Python source for module 'scipy.sparse.linalg.dsolve.linsolve'
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

// The _module_scipy$sparse$linalg$dsolve$linsolve is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$sparse$linalg$dsolve$linsolve;
PyDictObject *moduledict_scipy$sparse$linalg$dsolve$linsolve;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_D;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_dD;
extern PyObject *const_str_plain_di;
extern PyObject *const_str_plain_np;
static PyObject *const_str_plain_xj;
static PyObject *const_str_plain_zi;
extern PyObject *const_str_plain_col;
static PyObject *const_str_plain_ilu;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_nan;
extern PyObject *const_str_plain_nnz;
static PyObject *const_str_plain_umf;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_fill;
extern PyObject *const_str_plain_flag;
static PyObject *const_str_plain_gssv;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_splu;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_plain_Relax;
static PyObject *const_str_plain_b_vec;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_empty;
static PyObject *const_str_plain_gstrf;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_ravel;
extern PyObject *const_str_plain_relax;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_solve;
static PyObject *const_str_plain_spilu;
static PyObject *const_str_plain_tempj;
extern PyObject *const_str_plain_family;
extern PyObject *const_str_plain_indptr;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_update;
static PyObject *const_str_plain_ColPerm;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_indices;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_spsolve;
extern PyObject *const_str_plain_toarray;
extern PyObject *const_str_plain_umfpack;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__options;
extern PyObject *const_str_plain__superlu;
extern PyObject *const_str_plain_asfptype;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_drop_tol;
extern PyObject *const_str_plain_linsolve;
static PyObject *const_str_plain_noScikit;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_plain_PanelSize;
static PyObject *const_str_plain_UMFPACK_A;
static PyObject *const_str_plain_drop_rule;
static PyObject *const_str_plain_Afactsolve;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_csc_matrix;
static PyObject *const_str_plain_factorized;
extern PyObject *const_str_plain_isspmatrix;
static PyObject *const_str_plain_panel_size;
static PyObject *const_str_plain_permc_spec;
static PyObject *const_str_plain_useUmfpack;
static PyObject *const_str_plain_use_solver;
static PyObject *const_str_plain_ILU_DropTol;
extern PyObject *const_str_plain_UserWarning;
static PyObject *const_str_plain_b_is_sparse;
static PyObject *const_str_plain_b_is_vector;
static PyObject *const_str_plain_fill_factor;
static PyObject *const_str_plain_use_umfpack;
extern PyObject *const_tuple_none_true_tuple;
static PyObject *const_str_plain_ILU_DropRule;
extern PyObject *const_str_plain_sort_indices;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_autoTranspose;
extern PyObject *const_tuple_str_plain_A_tuple;
extern PyObject *const_tuple_str_plain_b_tuple;
static PyObject *const_str_plain_ILU_FillFactor;
static PyObject *const_str_plain_UmfpackContext;
extern PyObject *const_str_plain_isspmatrix_csc;
extern PyObject *const_str_plain_isspmatrix_csr;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_DiagPivotThresh;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_warn_tuple;
static PyObject *const_str_plain_MatrixRankWarning;
static PyObject *const_str_plain_diag_pivot_thresh;
static PyObject *const_tuple_str_plain_kwargs_tuple;
static PyObject *const_tuple_str_plain__superlu_tuple;
extern PyObject *const_str_plain_SparseEfficiencyWarning;
static PyObject *const_dict_b2bab5df1959da28c3495e7f1fe7bb0a;
static PyObject *const_dict_d651afcac12196dc5a0b74e25d976a33;
static PyObject *const_tuple_str_plain_b_str_plain_umf_tuple;
static PyObject *const_list_0d47a033b5e91dbe67f914f4e802cf3d_list;
static PyObject *const_str_digest_005066114b2569e01ad709b1f427c16c;
static PyObject *const_str_digest_0e5d4f794bcc68345c2f0460000ff41e;
static PyObject *const_str_digest_19c805926e169a631d87d7b756522f46;
static PyObject *const_str_digest_35824f584ff27b7d515925985d7fad10;
static PyObject *const_str_digest_42b22bae9f211ca1e582b02430bf6bb6;
static PyObject *const_str_digest_4ce94f9d635edbee259aa2f6c09955c3;
static PyObject *const_str_digest_5caff9e05db9c049e44d7c45320ca02b;
static PyObject *const_str_digest_6050cb865cf8f0753b724ea3fb370df6;
static PyObject *const_str_digest_7e7e62ab2f726983dcc3738af88d42f1;
static PyObject *const_str_digest_8dd5d9b89d8869a8b48721aef2b0d8ce;
static PyObject *const_str_digest_93fbe9be126286aedb0f5b97942dfe26;
static PyObject *const_str_digest_a6c8cfdc3c6d440500a08cecf9f1488a;
extern PyObject *const_str_digest_bba312255c96f4c843b12f3f8e172622;
static PyObject *const_str_digest_c4f119b62d6a587ef3f2ec467eac3f36;
static PyObject *const_str_digest_c8166d672f1e7b6b6a8dec98c2967077;
static PyObject *const_str_digest_d2e7f91854a98c45bf91b7e12fcaa078;
static PyObject *const_str_digest_e1dc8c7f68734af177ed151269cbbbc2;
static PyObject *const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c;
static PyObject *const_tuple_290d380a9581aade535af49fd4c8d61f_tuple;
static PyObject *const_tuple_388d93dfcd7a4cefac21d82494b808b8_tuple;
static PyObject *const_tuple_3fdaa2f9935e480d8ede7427257c96bb_tuple;
static PyObject *const_tuple_6747cfd0855974a589f5c5f11694851c_tuple;
static PyObject *const_tuple_67ac047c53d359c5175fc5b4ab49bf39_tuple;
static PyObject *const_tuple_6ce4f0aacec2ea5b5b28eea7db9bd576_tuple;
static PyObject *const_tuple_6f5ade2fd6691fdcccd03fe0fcbb8d38_tuple;
static PyObject *const_tuple_7e12d64c8d0617fd3eb5774105dbdb24_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
extern PyObject *const_tuple_none_none_none_none_none_none_none_none_tuple;
static PyObject *const_tuple_str_plain_A_str_plain_family_str_plain_umf_str_plain_solve_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_dD = UNSTREAM_STRING( &constant_bin[ 27923 ], 2, 1 );
    const_str_plain_xj = UNSTREAM_STRING( &constant_bin[ 2387517 ], 2, 1 );
    const_str_plain_zi = UNSTREAM_STRING( &constant_bin[ 15855 ], 2, 1 );
    const_str_plain_ilu = UNSTREAM_STRING( &constant_bin[ 205213 ], 3, 1 );
    const_str_plain_umf = UNSTREAM_STRING( &constant_bin[ 118779 ], 3, 1 );
    const_str_plain_gssv = UNSTREAM_STRING( &constant_bin[ 2387519 ], 4, 1 );
    const_str_plain_Relax = UNSTREAM_STRING( &constant_bin[ 2387523 ], 5, 1 );
    const_str_plain_b_vec = UNSTREAM_STRING( &constant_bin[ 2387528 ], 5, 1 );
    const_str_plain_gstrf = UNSTREAM_STRING( &constant_bin[ 2387533 ], 5, 1 );
    const_str_plain_spilu = UNSTREAM_STRING( &constant_bin[ 2367504 ], 5, 1 );
    const_str_plain_tempj = UNSTREAM_STRING( &constant_bin[ 271877 ], 5, 1 );
    const_str_plain_ColPerm = UNSTREAM_STRING( &constant_bin[ 2387538 ], 7, 1 );
    const_str_plain__options = UNSTREAM_STRING( &constant_bin[ 80452 ], 8, 1 );
    const_str_plain_drop_tol = UNSTREAM_STRING( &constant_bin[ 272102 ], 8, 1 );
    const_str_plain_noScikit = UNSTREAM_STRING( &constant_bin[ 271234 ], 8, 1 );
    const_str_plain_PanelSize = UNSTREAM_STRING( &constant_bin[ 2387545 ], 9, 1 );
    const_str_plain_UMFPACK_A = UNSTREAM_STRING( &constant_bin[ 2387554 ], 9, 1 );
    const_str_plain_drop_rule = UNSTREAM_STRING( &constant_bin[ 272047 ], 9, 1 );
    const_str_plain_Afactsolve = UNSTREAM_STRING( &constant_bin[ 271821 ], 10, 1 );
    const_str_plain_factorized = UNSTREAM_STRING( &constant_bin[ 271779 ], 10, 1 );
    const_str_plain_panel_size = UNSTREAM_STRING( &constant_bin[ 271991 ], 10, 1 );
    const_str_plain_permc_spec = UNSTREAM_STRING( &constant_bin[ 271643 ], 10, 1 );
    const_str_plain_useUmfpack = UNSTREAM_STRING( &constant_bin[ 271414 ], 10, 1 );
    const_str_plain_use_solver = UNSTREAM_STRING( &constant_bin[ 2383055 ], 10, 1 );
    const_str_plain_ILU_DropTol = UNSTREAM_STRING( &constant_bin[ 2387563 ], 11, 1 );
    const_str_plain_b_is_sparse = UNSTREAM_STRING( &constant_bin[ 271513 ], 11, 1 );
    const_str_plain_b_is_vector = UNSTREAM_STRING( &constant_bin[ 271456 ], 11, 1 );
    const_str_plain_fill_factor = UNSTREAM_STRING( &constant_bin[ 272156 ], 11, 1 );
    const_str_plain_use_umfpack = UNSTREAM_STRING( &constant_bin[ 271360 ], 11, 1 );
    const_str_plain_ILU_DropRule = UNSTREAM_STRING( &constant_bin[ 2387574 ], 12, 1 );
    const_str_plain_autoTranspose = UNSTREAM_STRING( &constant_bin[ 2387586 ], 13, 1 );
    const_str_plain_ILU_FillFactor = UNSTREAM_STRING( &constant_bin[ 2387599 ], 14, 1 );
    const_str_plain_UmfpackContext = UNSTREAM_STRING( &constant_bin[ 2387613 ], 14, 1 );
    const_str_plain_DiagPivotThresh = UNSTREAM_STRING( &constant_bin[ 2387627 ], 15, 1 );
    const_str_plain_MatrixRankWarning = UNSTREAM_STRING( &constant_bin[ 271733 ], 17, 1 );
    const_str_plain_diag_pivot_thresh = UNSTREAM_STRING( &constant_bin[ 271928 ], 17, 1 );
    const_tuple_str_plain_kwargs_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kwargs_tuple, 0, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_tuple_str_plain__superlu_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__superlu_tuple, 0, const_str_plain__superlu ); Py_INCREF( const_str_plain__superlu );
    const_dict_b2bab5df1959da28c3495e7f1fe7bb0a = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_b2bab5df1959da28c3495e7f1fe7bb0a, const_str_plain_D, const_str_plain_zi );
    PyDict_SetItem( const_dict_b2bab5df1959da28c3495e7f1fe7bb0a, const_str_plain_d, const_str_plain_di );
    const_dict_d651afcac12196dc5a0b74e25d976a33 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_d651afcac12196dc5a0b74e25d976a33, const_str_plain_autoTranspose, Py_True );
    const_tuple_str_plain_b_str_plain_umf_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_umf_tuple, 0, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_umf_tuple, 1, const_str_plain_umf ); Py_INCREF( const_str_plain_umf );
    const_list_0d47a033b5e91dbe67f914f4e802cf3d_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_0d47a033b5e91dbe67f914f4e802cf3d_list, 0, const_str_plain_use_solver ); Py_INCREF( const_str_plain_use_solver );
    PyList_SET_ITEM( const_list_0d47a033b5e91dbe67f914f4e802cf3d_list, 1, const_str_plain_spsolve ); Py_INCREF( const_str_plain_spsolve );
    PyList_SET_ITEM( const_list_0d47a033b5e91dbe67f914f4e802cf3d_list, 2, const_str_plain_splu ); Py_INCREF( const_str_plain_splu );
    PyList_SET_ITEM( const_list_0d47a033b5e91dbe67f914f4e802cf3d_list, 3, const_str_plain_spilu ); Py_INCREF( const_str_plain_spilu );
    PyList_SET_ITEM( const_list_0d47a033b5e91dbe67f914f4e802cf3d_list, 4, const_str_plain_factorized ); Py_INCREF( const_str_plain_factorized );
    PyList_SET_ITEM( const_list_0d47a033b5e91dbe67f914f4e802cf3d_list, 5, const_str_plain_MatrixRankWarning ); Py_INCREF( const_str_plain_MatrixRankWarning );
    const_str_digest_005066114b2569e01ad709b1f427c16c = UNSTREAM_STRING( &constant_bin[ 2387642 ], 30, 0 );
    const_str_digest_0e5d4f794bcc68345c2f0460000ff41e = UNSTREAM_STRING( &constant_bin[ 2387672 ], 46, 0 );
    const_str_digest_19c805926e169a631d87d7b756522f46 = UNSTREAM_STRING( &constant_bin[ 2387718 ], 36, 0 );
    const_str_digest_35824f584ff27b7d515925985d7fad10 = UNSTREAM_STRING( &constant_bin[ 2387754 ], 663, 0 );
    const_str_digest_42b22bae9f211ca1e582b02430bf6bb6 = UNSTREAM_STRING( &constant_bin[ 2388417 ], 56, 0 );
    const_str_digest_4ce94f9d635edbee259aa2f6c09955c3 = UNSTREAM_STRING( &constant_bin[ 2388473 ], 1530, 0 );
    const_str_digest_5caff9e05db9c049e44d7c45320ca02b = UNSTREAM_STRING( &constant_bin[ 2390003 ], 41, 0 );
    const_str_digest_6050cb865cf8f0753b724ea3fb370df6 = UNSTREAM_STRING( &constant_bin[ 2390044 ], 90, 0 );
    const_str_digest_7e7e62ab2f726983dcc3738af88d42f1 = UNSTREAM_STRING( &constant_bin[ 2390134 ], 26, 0 );
    const_str_digest_8dd5d9b89d8869a8b48721aef2b0d8ce = UNSTREAM_STRING( &constant_bin[ 2390160 ], 31, 0 );
    const_str_digest_93fbe9be126286aedb0f5b97942dfe26 = UNSTREAM_STRING( &constant_bin[ 2390191 ], 31, 0 );
    const_str_digest_a6c8cfdc3c6d440500a08cecf9f1488a = UNSTREAM_STRING( &constant_bin[ 2390222 ], 1796, 0 );
    const_str_digest_c4f119b62d6a587ef3f2ec467eac3f36 = UNSTREAM_STRING( &constant_bin[ 2392018 ], 487, 0 );
    const_str_digest_c8166d672f1e7b6b6a8dec98c2967077 = UNSTREAM_STRING( &constant_bin[ 2392505 ], 15, 0 );
    const_str_digest_d2e7f91854a98c45bf91b7e12fcaa078 = UNSTREAM_STRING( &constant_bin[ 2392520 ], 35, 0 );
    const_str_digest_e1dc8c7f68734af177ed151269cbbbc2 = UNSTREAM_STRING( &constant_bin[ 2392555 ], 1330, 0 );
    const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c = UNSTREAM_STRING( &constant_bin[ 2393885 ], 71, 0 );
    const_tuple_290d380a9581aade535af49fd4c8d61f_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 1, const_str_plain_drop_tol ); Py_INCREF( const_str_plain_drop_tol );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 2, const_str_plain_fill_factor ); Py_INCREF( const_str_plain_fill_factor );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 3, const_str_plain_drop_rule ); Py_INCREF( const_str_plain_drop_rule );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 4, const_str_plain_permc_spec ); Py_INCREF( const_str_plain_permc_spec );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 5, const_str_plain_diag_pivot_thresh ); Py_INCREF( const_str_plain_diag_pivot_thresh );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 6, const_str_plain_relax ); Py_INCREF( const_str_plain_relax );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 7, const_str_plain_panel_size ); Py_INCREF( const_str_plain_panel_size );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 8, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 9, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 10, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 11, const_str_plain__options ); Py_INCREF( const_str_plain__options );
    const_tuple_388d93dfcd7a4cefac21d82494b808b8_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_388d93dfcd7a4cefac21d82494b808b8_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_388d93dfcd7a4cefac21d82494b808b8_tuple, 1, const_str_plain_permc_spec ); Py_INCREF( const_str_plain_permc_spec );
    PyTuple_SET_ITEM( const_tuple_388d93dfcd7a4cefac21d82494b808b8_tuple, 2, const_str_plain_diag_pivot_thresh ); Py_INCREF( const_str_plain_diag_pivot_thresh );
    PyTuple_SET_ITEM( const_tuple_388d93dfcd7a4cefac21d82494b808b8_tuple, 3, const_str_plain_drop_tol ); Py_INCREF( const_str_plain_drop_tol );
    PyTuple_SET_ITEM( const_tuple_388d93dfcd7a4cefac21d82494b808b8_tuple, 4, const_str_plain_relax ); Py_INCREF( const_str_plain_relax );
    PyTuple_SET_ITEM( const_tuple_388d93dfcd7a4cefac21d82494b808b8_tuple, 5, const_str_plain_panel_size ); Py_INCREF( const_str_plain_panel_size );
    PyTuple_SET_ITEM( const_tuple_388d93dfcd7a4cefac21d82494b808b8_tuple, 6, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    const_tuple_3fdaa2f9935e480d8ede7427257c96bb_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_3fdaa2f9935e480d8ede7427257c96bb_tuple, 0, const_str_plain_isspmatrix_csc ); Py_INCREF( const_str_plain_isspmatrix_csc );
    PyTuple_SET_ITEM( const_tuple_3fdaa2f9935e480d8ede7427257c96bb_tuple, 1, const_str_plain_isspmatrix_csr ); Py_INCREF( const_str_plain_isspmatrix_csr );
    PyTuple_SET_ITEM( const_tuple_3fdaa2f9935e480d8ede7427257c96bb_tuple, 2, const_str_plain_isspmatrix ); Py_INCREF( const_str_plain_isspmatrix );
    PyTuple_SET_ITEM( const_tuple_3fdaa2f9935e480d8ede7427257c96bb_tuple, 3, const_str_plain_SparseEfficiencyWarning ); Py_INCREF( const_str_plain_SparseEfficiencyWarning );
    PyTuple_SET_ITEM( const_tuple_3fdaa2f9935e480d8ede7427257c96bb_tuple, 4, const_str_plain_csc_matrix ); Py_INCREF( const_str_plain_csc_matrix );
    const_tuple_6747cfd0855974a589f5c5f11694851c_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2393956 ], 209 );
    const_tuple_67ac047c53d359c5175fc5b4ab49bf39_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_67ac047c53d359c5175fc5b4ab49bf39_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_67ac047c53d359c5175fc5b4ab49bf39_tuple, 1, const_str_plain_empty ); Py_INCREF( const_str_plain_empty );
    PyTuple_SET_ITEM( const_tuple_67ac047c53d359c5175fc5b4ab49bf39_tuple, 2, const_str_plain_ravel ); Py_INCREF( const_str_plain_ravel );
    PyTuple_SET_ITEM( const_tuple_67ac047c53d359c5175fc5b4ab49bf39_tuple, 3, const_str_plain_nonzero ); Py_INCREF( const_str_plain_nonzero );
    const_tuple_6ce4f0aacec2ea5b5b28eea7db9bd576_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_6ce4f0aacec2ea5b5b28eea7db9bd576_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_6ce4f0aacec2ea5b5b28eea7db9bd576_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_6ce4f0aacec2ea5b5b28eea7db9bd576_tuple, 2, const_str_plain_permc_spec ); Py_INCREF( const_str_plain_permc_spec );
    PyTuple_SET_ITEM( const_tuple_6ce4f0aacec2ea5b5b28eea7db9bd576_tuple, 3, const_str_plain_use_umfpack ); Py_INCREF( const_str_plain_use_umfpack );
    const_tuple_6f5ade2fd6691fdcccd03fe0fcbb8d38_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_6f5ade2fd6691fdcccd03fe0fcbb8d38_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_6f5ade2fd6691fdcccd03fe0fcbb8d38_tuple, 1, const_str_plain_permc_spec ); Py_INCREF( const_str_plain_permc_spec );
    PyTuple_SET_ITEM( const_tuple_6f5ade2fd6691fdcccd03fe0fcbb8d38_tuple, 2, const_str_plain_diag_pivot_thresh ); Py_INCREF( const_str_plain_diag_pivot_thresh );
    PyTuple_SET_ITEM( const_tuple_6f5ade2fd6691fdcccd03fe0fcbb8d38_tuple, 3, const_str_plain_drop_tol ); Py_INCREF( const_str_plain_drop_tol );
    PyTuple_SET_ITEM( const_tuple_6f5ade2fd6691fdcccd03fe0fcbb8d38_tuple, 4, const_str_plain_relax ); Py_INCREF( const_str_plain_relax );
    PyTuple_SET_ITEM( const_tuple_6f5ade2fd6691fdcccd03fe0fcbb8d38_tuple, 5, const_str_plain_panel_size ); Py_INCREF( const_str_plain_panel_size );
    PyTuple_SET_ITEM( const_tuple_6f5ade2fd6691fdcccd03fe0fcbb8d38_tuple, 6, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_6f5ade2fd6691fdcccd03fe0fcbb8d38_tuple, 7, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_6f5ade2fd6691fdcccd03fe0fcbb8d38_tuple, 8, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_6f5ade2fd6691fdcccd03fe0fcbb8d38_tuple, 9, const_str_plain__options ); Py_INCREF( const_str_plain__options );
    const_tuple_7e12d64c8d0617fd3eb5774105dbdb24_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_7e12d64c8d0617fd3eb5774105dbdb24_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_7e12d64c8d0617fd3eb5774105dbdb24_tuple, 1, const_str_plain_drop_tol ); Py_INCREF( const_str_plain_drop_tol );
    PyTuple_SET_ITEM( const_tuple_7e12d64c8d0617fd3eb5774105dbdb24_tuple, 2, const_str_plain_fill_factor ); Py_INCREF( const_str_plain_fill_factor );
    PyTuple_SET_ITEM( const_tuple_7e12d64c8d0617fd3eb5774105dbdb24_tuple, 3, const_str_plain_drop_rule ); Py_INCREF( const_str_plain_drop_rule );
    PyTuple_SET_ITEM( const_tuple_7e12d64c8d0617fd3eb5774105dbdb24_tuple, 4, const_str_plain_permc_spec ); Py_INCREF( const_str_plain_permc_spec );
    PyTuple_SET_ITEM( const_tuple_7e12d64c8d0617fd3eb5774105dbdb24_tuple, 5, const_str_plain_diag_pivot_thresh ); Py_INCREF( const_str_plain_diag_pivot_thresh );
    PyTuple_SET_ITEM( const_tuple_7e12d64c8d0617fd3eb5774105dbdb24_tuple, 6, const_str_plain_relax ); Py_INCREF( const_str_plain_relax );
    PyTuple_SET_ITEM( const_tuple_7e12d64c8d0617fd3eb5774105dbdb24_tuple, 7, const_str_plain_panel_size ); Py_INCREF( const_str_plain_panel_size );
    PyTuple_SET_ITEM( const_tuple_7e12d64c8d0617fd3eb5774105dbdb24_tuple, 8, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    const_tuple_str_plain_A_str_plain_family_str_plain_umf_str_plain_solve_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_family_str_plain_umf_str_plain_solve_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_family_str_plain_umf_str_plain_solve_tuple, 1, const_str_plain_family ); Py_INCREF( const_str_plain_family );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_family_str_plain_umf_str_plain_solve_tuple, 2, const_str_plain_umf ); Py_INCREF( const_str_plain_umf );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_family_str_plain_umf_str_plain_solve_tuple, 3, const_str_plain_solve ); Py_INCREF( const_str_plain_solve );
}

// The module code objects.
static PyCodeObject *codeobj_a38ce2490c334e53ee2151903f514c3b;
static PyCodeObject *codeobj_0142de1ab456dda068490f08688be639;
static PyCodeObject *codeobj_fd2cff43c25b740f260eecbd7edc6655;
static PyCodeObject *codeobj_5e8180867f8dabc80cfa45fcba09c4ad;
static PyCodeObject *codeobj_2c98747d4a742685bfec7711ed8c3289;
static PyCodeObject *codeobj_64cf90855fed1f8d3e523299449f7132;
static PyCodeObject *codeobj_df48376a7178e44357b73250a3b77fb6;
static PyCodeObject *codeobj_6afeb39a649c947537b95138395e132e;
static PyCodeObject *codeobj_79a2827d032fe24fffea320225049e02;
static PyCodeObject *codeobj_55a29d27376475327a82f571a1ca450a;
static PyCodeObject *codeobj_0d6a47e27405ab5ccf5645ae63132b71;
static PyCodeObject *codeobj_7d31b9651a1d524c48fedb6d185c5045;
static PyCodeObject *codeobj_367f20845b2feaa467d29f7e99e2d8ab;

static void _initModuleCodeObjects(void)
{
    codeobj_a38ce2490c334e53ee2151903f514c3b = MAKE_CODEOBJ( const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c, const_str_plain_factorized, 312, const_tuple_str_plain_A_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0142de1ab456dda068490f08688be639 = MAKE_CODEOBJ( const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c, const_str_plain_factorized, 312, const_tuple_str_plain_A_str_plain_family_str_plain_umf_str_plain_solve_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fd2cff43c25b740f260eecbd7edc6655 = MAKE_CODEOBJ( const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c, const_str_plain_linsolve, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5e8180867f8dabc80cfa45fcba09c4ad = MAKE_CODEOBJ( const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c, const_str_plain_solve, 361, const_tuple_str_plain_b_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2c98747d4a742685bfec7711ed8c3289 = MAKE_CODEOBJ( const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c, const_str_plain_solve, 361, const_tuple_str_plain_b_str_plain_umf_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_64cf90855fed1f8d3e523299449f7132 = MAKE_CODEOBJ( const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c, const_str_plain_spilu, 245, const_tuple_7e12d64c8d0617fd3eb5774105dbdb24_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_df48376a7178e44357b73250a3b77fb6 = MAKE_CODEOBJ( const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c, const_str_plain_spilu, 245, const_tuple_290d380a9581aade535af49fd4c8d61f_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6afeb39a649c947537b95138395e132e = MAKE_CODEOBJ( const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c, const_str_plain_splu, 171, const_tuple_388d93dfcd7a4cefac21d82494b808b8_tuple, 7, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_79a2827d032fe24fffea320225049e02 = MAKE_CODEOBJ( const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c, const_str_plain_splu, 171, const_tuple_6f5ade2fd6691fdcccd03fe0fcbb8d38_tuple, 7, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_55a29d27376475327a82f571a1ca450a = MAKE_CODEOBJ( const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c, const_str_plain_spsolve, 50, const_tuple_6ce4f0aacec2ea5b5b28eea7db9bd576_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0d6a47e27405ab5ccf5645ae63132b71 = MAKE_CODEOBJ( const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c, const_str_plain_spsolve, 50, const_tuple_6747cfd0855974a589f5c5f11694851c_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7d31b9651a1d524c48fedb6d185c5045 = MAKE_CODEOBJ( const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c, const_str_plain_use_solver, 28, const_tuple_str_plain_kwargs_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_367f20845b2feaa467d29f7e99e2d8ab = MAKE_CODEOBJ( const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c, const_str_plain_use_solver, 28, const_tuple_str_plain_kwargs_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_MatrixRankWarning_of_module_scipy$sparse$linalg$dsolve$linsolve(  );


static PyObject *MAKE_FUNCTION_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( PyObjectSharedLocalVariable &closure_A, PyObjectSharedLocalVariable &closure_umf );


// This structure is for attachment as self of function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve.
// It is allocated at the time the function object is created.
struct _context_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve_t
{
    // The function can access a read-only closure of the creator.
    PyObjectSharedLocalVariable closure_A;
    PyObjectSharedLocalVariable closure_umf;
};

static void _context_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve_destructor( void *context_voidptr )
{
    _context_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve_t *_python_context = (_context_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_2_use_solver_of_module_scipy$sparse$linalg$dsolve$linsolve(  );


static PyObject *MAKE_FUNCTION_function_3_spsolve_of_module_scipy$sparse$linalg$dsolve$linsolve( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_splu_of_module_scipy$sparse$linalg$dsolve$linsolve( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5_spilu_of_module_scipy$sparse$linalg$dsolve$linsolve( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_MatrixRankWarning_of_module_scipy$sparse$linalg$dsolve$linsolve(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_d2e7f91854a98c45bf91b7e12fcaa078;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_return_value = PyDict_New();
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__.object
        );

    }
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
    return NULL;
function_return_exit:
    return tmp_return_value;

}


static PyObject *impl_function_2_use_solver_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_kwargs; par_kwargs.object = _python_par_kwargs;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_367f20845b2feaa467d29f7e99e2d8ab, module_scipy$sparse$linalg$dsolve$linsolve );
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
    tmp_compare_left_1 = const_str_plain_useUmfpack;
    tmp_compare_right_1 = par_kwargs.object;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
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
    tmp_subscr_target_1 = par_kwargs.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_str_plain_useUmfpack;
    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    tmp_ass_subscript_1 = const_str_plain_useUmfpack;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }
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
static PyObject *fparse_function_2_use_solver_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_kwargs = NULL;

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
                        PyErr_Format( PyExc_TypeError, "use_solver() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "use_solver() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "use_solver() keywords must be strings" );
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

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 0 ))
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



    return impl_function_2_use_solver_of_module_scipy$sparse$linalg$dsolve$linsolve( self, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_2_use_solver_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_use_solver_of_module_scipy$sparse$linalg$dsolve$linsolve( self, PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_2_use_solver_of_module_scipy$sparse$linalg$dsolve$linsolve( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_spsolve_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject *_python_par_A, PyObject *_python_par_b, PyObject *_python_par_permc_spec, PyObject *_python_par_use_umfpack )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_A; par_A.object = _python_par_A;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_permc_spec; par_permc_spec.object = _python_par_permc_spec;
    PyObjectLocalVariable par_use_umfpack; par_use_umfpack.object = _python_par_use_umfpack;
    PyObjectLocalVariable var_b_is_sparse;
    PyObjectLocalVariable var_b_is_vector;
    PyObjectLocalVariable var_M;
    PyObjectLocalVariable var_N;
    PyObjectLocalVariable var_b_vec;
    PyObjectLocalVariable var_family;
    PyObjectLocalVariable var_umf;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_flag;
    PyObjectLocalVariable var_options;
    PyObjectLocalVariable var_info;
    PyObjectLocalVariable var_Afactsolve;
    PyObjectLocalVariable var_tempj;
    PyObjectLocalVariable var_j;
    PyObjectLocalVariable var_col;
    PyObjectLocalVariable var_xj;
    PyObjectLocalVariable var_w;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_and_2__value_1;
    PyObjectTempVariable tmp_and_3__value_1;
    PyObjectTempVariable tmp_and_4__value_1;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_or_3__value_1;
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
    PyObject *tmp_call_arg_element_17;
    PyObject *tmp_call_arg_element_18;
    PyObject *tmp_call_arg_element_19;
    PyObject *tmp_call_arg_element_20;
    PyObject *tmp_call_arg_element_21;
    PyObject *tmp_call_arg_element_22;
    PyObject *tmp_call_arg_element_23;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_kw_4;
    PyObject *tmp_call_kw_5;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_call_pos_3;
    PyObject *tmp_call_pos_4;
    PyObject *tmp_call_pos_5;
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
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
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
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
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
    PyObject *tmp_dict_arg_1;
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
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_range_arg_1;
    bool tmp_result;
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
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    int tmp_tried_lineno_8;
    int tmp_tried_lineno_9;
    int tmp_tried_lineno_10;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_55a29d27376475327a82f571a1ca450a, module_scipy$sparse$linalg$dsolve$linsolve );
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
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271258 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_1 = par_A.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 87;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto try_finally_handler_2;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_1;

    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
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
    tmp_unary_arg_1 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_unary_arg_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_unary_arg_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csr );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csr );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271301 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_2 = par_A.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto try_finally_handler_3;
    }

    frame_function->f_lineno = 87;
    tmp_unary_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
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
    tmp_cond_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    Py_DECREF( tmp_unary_arg_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto try_finally_handler_1;
    }
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
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
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
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csc_matrix );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263510 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_A.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 88;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    if (par_A.object == NULL)
    {
        par_A.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_A.object;
        par_A.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 253704 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = const_str_digest_0e5d4f794bcc68345c2f0460000ff41e;
    tmp_call_arg_element_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );

    if (unlikely( tmp_call_arg_element_5 == NULL ))
    {
        tmp_call_arg_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );
    }

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 261477 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 90;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259965 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = par_b.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 93;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    assert( var_b_is_sparse.object == NULL );
    var_b_is_sparse.object = tmp_assign_source_3;

    tmp_cond_value_3 = var_b_is_sparse.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 94;
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
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = par_b.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 95;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_7 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    if (par_b.object == NULL)
    {
        par_b.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = par_b.object;
        par_b.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    branch_no_2:;
    // Tried code
    tmp_assign_source_5 = NULL;
    // Tried code
    tmp_source_name_1 = par_b.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto try_finally_handler_5;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_5;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_assign_source_6 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_5;
    }
    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = tmp_assign_source_6;

    tmp_cond_value_4 = tmp_or_2__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
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
    tmp_assign_source_5 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_assign_source_5 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_5 = NULL;
    // Tried code
    tmp_assign_source_5 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_assign_source_5 = NULL;
    // Tried code
    tmp_source_name_2 = par_b.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto try_finally_handler_8;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_8;
    }
    tmp_compexpr_right_2 = const_int_pos_2;
    tmp_assign_source_7 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_8;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_7;

    tmp_cond_value_5 = tmp_and_1__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
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
    tmp_assign_source_5 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_3 = par_b.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto try_finally_handler_9;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_9;
    }
    tmp_subscr_subscript_1 = const_int_pos_1;
    tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_9;
    }
    tmp_compexpr_right_3 = const_int_pos_1;
    tmp_assign_source_5 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto try_finally_handler_9;
    }
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
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_5 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_assign_source_5 );
    condexpr_end_3:;
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

        goto try_finally_handler_7;
    }

    goto finally_end_5;
    finally_end_5:;
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

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_5;
    }

    goto finally_end_7;
    finally_end_7:;
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
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

        goto try_finally_handler_4;
    }

    goto finally_end_8;
    finally_end_8:;
    assert( var_b_is_vector.object == NULL );
    var_b_is_vector.object = tmp_assign_source_5;

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
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
    tmp_source_name_4 = par_A.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sort_indices );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 98;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_A.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_asfptype );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 99;
    tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    if (par_A.object == NULL)
    {
        par_A.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = par_A.object;
        par_A.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    // Tried code
    tmp_source_name_6 = par_A.object;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto try_finally_handler_10;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto try_finally_handler_10;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_9;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_10 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 102;
        goto try_finally_handler_10;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_10;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_11 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
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


        frame_function->f_lineno = 102;
        goto try_finally_handler_10;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_11;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_10;
    }
    tmp_assign_source_12 = tmp_tuple_unpack_1__element_1.object;

    assert( var_M.object == NULL );
    var_M.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_2.object;

    assert( var_N.object == NULL );
    var_N.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

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

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

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
    tmp_compare_left_1 = var_M.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = var_N.object;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
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
    tmp_binop_left_1 = const_str_digest_19c805926e169a631d87d7b756522f46;
    tmp_binop_right_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_M.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_N.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 104;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 104;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_compare_left_2 = var_M.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = par_b.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_2 = const_int_0;
    tmp_compare_right_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_binop_left_2 = const_str_digest_5caff9e05db9c049e44d7c45320ca02b;
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_source_name_8 = par_A.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_3 );
    tmp_source_name_9 = par_b.object;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = const_int_0;
    tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_3 );
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 107;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    Py_DECREF( tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 107;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    // Tried code
    tmp_assign_source_14 = NULL;
    // Tried code
    tmp_assign_source_15 = par_use_umfpack.object;

    if ( tmp_assign_source_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271344 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto try_finally_handler_12;
    }

    assert( tmp_and_2__value_1.object == NULL );
    tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    tmp_cond_value_6 = tmp_and_2__value_1.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto try_finally_handler_12;
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
    tmp_assign_source_14 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_assign_source_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_useUmfpack );

    if (unlikely( tmp_assign_source_14 == NULL ))
    {
        tmp_assign_source_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_useUmfpack );
    }

    if ( tmp_assign_source_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271401 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
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
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_14 = tmp_and_2__value_1.object;

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
    if (par_use_umfpack.object == NULL)
    {
        par_use_umfpack.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = par_use_umfpack.object;
        par_use_umfpack.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
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
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

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
    // Tried code
    tmp_cond_value_7 = NULL;
    // Tried code
    tmp_assign_source_16 = var_b_is_vector.object;

    if ( tmp_assign_source_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271440 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 112;
        goto try_finally_handler_15;
    }

    assert( tmp_and_3__value_1.object == NULL );
    tmp_and_3__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_16 );

    tmp_cond_value_8 = tmp_and_3__value_1.object;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto try_finally_handler_15;
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
    tmp_cond_value_7 = NULL;
    // Tried code
    tmp_result = tmp_and_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_3__value_1.object );
        tmp_and_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_7 = par_use_umfpack.object;

    if ( tmp_cond_value_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271344 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 112;
        goto try_finally_handler_16;
    }

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_16:;
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

        goto try_finally_handler_15;
    }

    goto finally_end_14;
    finally_end_14:;
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_cond_value_7 = tmp_and_3__value_1.object;

    condexpr_end_5:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_15 != NULL )
    {
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;

        goto try_finally_handler_14;
    }

    goto finally_end_15;
    finally_end_15:;
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto try_finally_handler_14;
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
    tmp_cond_value_9 = var_b_is_sparse.object;

    if ( tmp_cond_value_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271497 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
        goto try_finally_handler_14;
    }

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 113;
        goto try_finally_handler_14;
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
    tmp_source_name_10 = par_b.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto try_finally_handler_14;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_toarray );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto try_finally_handler_14;
    }
    frame_function->f_lineno = 114;
    tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS( tmp_called_9 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto try_finally_handler_14;
    }
    assert( var_b_vec.object == NULL );
    var_b_vec.object = tmp_assign_source_17;

    goto branch_end_6;
    branch_no_6:;
    tmp_assign_source_18 = par_b.object;

    if ( tmp_assign_source_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto try_finally_handler_14;
    }

    assert( var_b_vec.object == NULL );
    var_b_vec.object = INCREASE_REFCOUNT( tmp_assign_source_18 );

    branch_end_6:;
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto try_finally_handler_14;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_4 = var_b_vec.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_4 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_12 = par_A.object;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto try_finally_handler_14;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_dtype );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 117;
        goto try_finally_handler_14;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 117;
    tmp_source_name_11 = CALL_FUNCTION( tmp_called_11, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto try_finally_handler_14;
    }
    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_ravel );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto try_finally_handler_14;
    }
    frame_function->f_lineno = 117;
    tmp_assign_source_19 = CALL_FUNCTION_NO_ARGS( tmp_called_10 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto try_finally_handler_14;
    }
    assert( var_b_vec.object != NULL );
    {
        PyObject *old = var_b_vec.object;
        var_b_vec.object = tmp_assign_source_19;
        Py_DECREF( old );
    }

    tmp_cond_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_noScikit );

    if (unlikely( tmp_cond_value_10 == NULL ))
    {
        tmp_cond_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_noScikit );
    }

    if ( tmp_cond_value_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271554 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto try_finally_handler_14;
    }

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_14;
    }
    if (tmp_cond_truth_10 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_make_exception_arg_3 = const_str_digest_005066114b2569e01ad709b1f427c16c;
    frame_function->f_lineno = 120;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto try_finally_handler_14;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 120;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_14;
    branch_no_7:;
    tmp_source_name_14 = par_A.object;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 122;
        goto try_finally_handler_14;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dtype );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto try_finally_handler_14;
    }
    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_char );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto try_finally_handler_14;
    }
    tmp_compare_right_3 = const_str_plain_dD;
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 122;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_make_exception_arg_4 = const_str_digest_6050cb865cf8f0753b724ea3fb370df6;
    frame_function->f_lineno = 123;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_4 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto try_finally_handler_14;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 123;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_14;
    branch_no_8:;
    tmp_assign_source_20 = PyDict_Copy( const_dict_b2bab5df1959da28c3495e7f1fe7bb0a );
    assert( var_family.object == NULL );
    var_family.object = tmp_assign_source_20;

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_umfpack );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umfpack );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271591 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto try_finally_handler_14;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_UmfpackContext );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto try_finally_handler_14;
    }
    tmp_subscr_target_4 = var_family.object;

    tmp_source_name_17 = par_A.object;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto try_finally_handler_14;
    }

    tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_dtype );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_function->f_lineno = 127;
        goto try_finally_handler_14;
    }
    tmp_subscr_subscript_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_char );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_subscr_subscript_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_function->f_lineno = 127;
        goto try_finally_handler_14;
    }
    tmp_call_arg_element_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_subscript_4 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_function->f_lineno = 127;
        goto try_finally_handler_14;
    }
    frame_function->f_lineno = 127;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_12 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto try_finally_handler_14;
    }
    assert( var_umf.object == NULL );
    var_umf.object = tmp_assign_source_21;

    tmp_source_name_18 = var_umf.object;

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_linsolve );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 128;
        goto try_finally_handler_14;
    }
    tmp_call_pos_2 = PyTuple_New( 3 );
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_umfpack );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umfpack );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271591 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 128;
        goto try_finally_handler_14;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_UMFPACK_A );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 128;
        goto try_finally_handler_14;
    }
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = par_A.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 128;
        goto try_finally_handler_14;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_b_vec.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 2, tmp_tuple_element_5 );
    tmp_call_kw_2 = PyDict_Copy( const_dict_d651afcac12196dc5a0b74e25d976a33 );
    frame_function->f_lineno = 129;
    tmp_assign_source_22 = CALL_FUNCTION( tmp_called_13, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 129;
        goto try_finally_handler_14;
    }
    assert( var_x.object == NULL );
    var_x.object = tmp_assign_source_22;

    goto branch_end_5;
    branch_no_5:;
    // Tried code
    tmp_cond_value_11 = NULL;
    // Tried code
    tmp_assign_source_23 = var_b_is_vector.object;

    if ( tmp_assign_source_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271440 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 131;
        goto try_finally_handler_18;
    }

    assert( tmp_and_4__value_1.object == NULL );
    tmp_and_4__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_23 );

    tmp_cond_value_12 = tmp_and_4__value_1.object;

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 131;
        goto try_finally_handler_18;
    }
    if (tmp_cond_truth_12 == 1)
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_cond_value_11 = NULL;
    // Tried code
    tmp_result = tmp_and_4__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_4__value_1.object );
        tmp_and_4__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_11 = var_b_is_sparse.object;

    if ( tmp_cond_value_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271497 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 131;
        goto try_finally_handler_19;
    }

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_19:;
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

        goto try_finally_handler_18;
    }

    goto finally_end_16;
    finally_end_16:;
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_cond_value_11 = tmp_and_4__value_1.object;

    condexpr_end_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_18:;
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

        goto try_finally_handler_17;
    }

    goto finally_end_17;
    finally_end_17:;
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 131;
        goto try_finally_handler_17;
    }
    if (tmp_cond_truth_11 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_20 = par_b.object;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto try_finally_handler_17;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_toarray );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto try_finally_handler_17;
    }
    frame_function->f_lineno = 132;
    tmp_assign_source_24 = CALL_FUNCTION_NO_ARGS( tmp_called_14 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto try_finally_handler_17;
    }
    if (par_b.object == NULL)
    {
        par_b.object = tmp_assign_source_24;
    }
    else
    {
        PyObject *old = par_b.object;
        par_b.object = tmp_assign_source_24;
        Py_DECREF( old );
    }
    tmp_assign_source_25 = Py_False;
    if (var_b_is_sparse.object == NULL)
    {
        var_b_is_sparse.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
    }
    else
    {
        PyObject *old = var_b_is_sparse.object;
        var_b_is_sparse.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
        Py_DECREF( old );
    }
    branch_no_9:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_17:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_4__value_1.object );
    tmp_and_4__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_18 != NULL )
    {
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;

        goto try_finally_handler_14;
    }

    goto finally_end_18;
    finally_end_18:;
    tmp_cond_value_13 = var_b_is_sparse.object;

    if ( tmp_cond_value_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271497 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto try_finally_handler_14;
    }

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
        goto try_finally_handler_14;
    }
    if (tmp_cond_truth_13 == 1)
    {
        goto branch_no_10;
    }
    else
    {
        goto branch_yes_10;
    }
    branch_yes_10:;
    tmp_called_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );

    if (unlikely( tmp_called_15 == NULL ))
    {
        tmp_called_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );
    }

    if ( tmp_called_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271258 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 136;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_9 = par_A.object;

    if ( tmp_call_arg_element_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 136;
        goto try_finally_handler_14;
    }

    frame_function->f_lineno = 136;
    tmp_cond_value_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_9 );
    if ( tmp_cond_value_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto try_finally_handler_14;
    }
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_14 );

        frame_function->f_lineno = 136;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_cond_value_14 );
    if (tmp_cond_truth_14 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_26 = const_int_pos_1;
    assert( var_flag.object == NULL );
    var_flag.object = INCREASE_REFCOUNT( tmp_assign_source_26 );

    goto branch_end_11;
    branch_no_11:;
    tmp_assign_source_27 = const_int_0;
    assert( var_flag.object == NULL );
    var_flag.object = INCREASE_REFCOUNT( tmp_assign_source_27 );

    branch_end_11:;
    tmp_dict_arg_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = par_permc_spec.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271627 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 141;
        goto try_finally_handler_14;
    }

    tmp_dict_key_2 = const_str_plain_ColPerm;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_assign_source_28 = tmp_dict_arg_1;
    assert( var_options.object == NULL );
    var_options.object = tmp_assign_source_28;

    // Tried code
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain__superlu );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__superlu );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271683 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_gssv );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }
    tmp_call_pos_3 = PyTuple_New( 7 );
    tmp_tuple_element_6 = var_N.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_6 );
    tmp_source_name_22 = par_A.object;

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_nnz );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }
    PyTuple_SET_ITEM( tmp_call_pos_3, 1, tmp_tuple_element_6 );
    tmp_source_name_23 = par_A.object;

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_data );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }
    PyTuple_SET_ITEM( tmp_call_pos_3, 2, tmp_tuple_element_6 );
    tmp_source_name_24 = par_A.object;

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_indices );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }
    PyTuple_SET_ITEM( tmp_call_pos_3, 3, tmp_tuple_element_6 );
    tmp_source_name_25 = par_A.object;

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_indptr );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }
    PyTuple_SET_ITEM( tmp_call_pos_3, 4, tmp_tuple_element_6 );
    tmp_tuple_element_6 = par_b.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto try_finally_handler_20;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 5, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_flag.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 6, tmp_tuple_element_6 );
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = var_options.object;

    tmp_dict_key_3 = const_str_plain_options;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 143;
    tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_16, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_called_16 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto try_finally_handler_20;
    }
    tmp_assign_source_29 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_29;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_30 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_30;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_31 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
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


        frame_function->f_lineno = 142;
        goto try_finally_handler_20;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_31;

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
    tmp_assign_source_32 = tmp_tuple_unpack_2__element_1.object;

    if (var_x.object == NULL)
    {
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
        Py_DECREF( old );
    }
    tmp_assign_source_33 = tmp_tuple_unpack_2__element_2.object;

    assert( var_info.object == NULL );
    var_info.object = INCREASE_REFCOUNT( tmp_assign_source_33 );

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

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2.object );
    tmp_tuple_unpack_2__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_19 != NULL )
    {
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;

        goto try_finally_handler_14;
    }

    goto finally_end_19;
    finally_end_19:;
    tmp_compare_left_4 = var_info.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3017 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto try_finally_handler_14;
    }

    tmp_compare_right_4 = const_int_0;
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto try_finally_handler_14;
    }
    if (tmp_cmp_NotEq_3 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_17 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn );

    if (unlikely( tmp_called_17 == NULL ))
    {
        tmp_called_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
    }

    if ( tmp_called_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 253704 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_10 = const_str_digest_7e7e62ab2f726983dcc3738af88d42f1;
    tmp_call_arg_element_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_MatrixRankWarning );

    if (unlikely( tmp_call_arg_element_11 == NULL ))
    {
        tmp_call_arg_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MatrixRankWarning );
    }

    if ( tmp_call_arg_element_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271720 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto try_finally_handler_14;
    }

    frame_function->f_lineno = 145;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_17, tmp_call_arg_element_10, tmp_call_arg_element_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_26 = var_x.object;

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto try_finally_handler_14;
    }

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_fill );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto try_finally_handler_14;
    }
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_nan );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );

        frame_function->f_lineno = 146;
        goto try_finally_handler_14;
    }
    frame_function->f_lineno = 146;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_18 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_unused );
    branch_no_12:;
    tmp_cond_value_15 = var_b_is_vector.object;

    if ( tmp_cond_value_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271440 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto try_finally_handler_14;
    }

    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_14;
    }
    if (tmp_cond_truth_15 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_28 = var_x.object;

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto try_finally_handler_14;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_ravel );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto try_finally_handler_14;
    }
    frame_function->f_lineno = 148;
    tmp_assign_source_34 = CALL_FUNCTION_NO_ARGS( tmp_called_19 );
    Py_DECREF( tmp_called_19 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto try_finally_handler_14;
    }
    if (var_x.object == NULL)
    {
        var_x.object = tmp_assign_source_34;
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = tmp_assign_source_34;
        Py_DECREF( old );
    }
    branch_no_13:;
    goto branch_end_10;
    branch_no_10:;
    tmp_called_20 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_factorized );

    if (unlikely( tmp_called_20 == NULL ))
    {
        tmp_called_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_factorized );
    }

    if ( tmp_called_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271766 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_13 = par_A.object;

    if ( tmp_call_arg_element_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto try_finally_handler_14;
    }

    frame_function->f_lineno = 151;
    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_20, tmp_call_arg_element_13 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto try_finally_handler_14;
    }
    assert( var_Afactsolve.object == NULL );
    var_Afactsolve.object = tmp_assign_source_35;

    tmp_called_21 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_empty );

    if (unlikely( tmp_called_21 == NULL ))
    {
        tmp_called_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_empty );
    }

    if ( tmp_called_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 69177 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto try_finally_handler_14;
    }

    tmp_call_pos_4 = PyTuple_New( 1 );
    tmp_tuple_element_7 = var_M.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto try_finally_handler_14;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 0, tmp_tuple_element_7 );
    tmp_call_kw_4 = _PyDict_NewPresized( 1 );
    tmp_dict_value_4 = LOOKUP_BUILTIN( const_str_plain_int );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_call_kw_4 );

        frame_function->f_lineno = 152;
        goto try_finally_handler_14;
    }
    tmp_dict_key_4 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 152;
    tmp_assign_source_36 = CALL_FUNCTION( tmp_called_21, tmp_call_pos_4, tmp_call_kw_4 );
    Py_DECREF( tmp_call_pos_4 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_14;
    }
    assert( var_tempj.object == NULL );
    var_tempj.object = tmp_assign_source_36;

    tmp_source_name_29 = par_A.object;

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 153;
        goto try_finally_handler_14;
    }

    tmp_called_22 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_29 );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
        goto try_finally_handler_14;
    }
    tmp_source_name_30 = par_b.object;

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_called_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 153;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_14 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_shape );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_22 );

        frame_function->f_lineno = 153;
        goto try_finally_handler_14;
    }
    frame_function->f_lineno = 153;
    tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_22 );
    Py_DECREF( tmp_call_arg_element_14 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
        goto try_finally_handler_14;
    }
    if (var_x.object == NULL)
    {
        var_x.object = tmp_assign_source_37;
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = tmp_assign_source_37;
        Py_DECREF( old );
    }
    tmp_cond_value_16 = NULL;
    // Tried code
    tmp_unary_arg_2 = NULL;
    // Tried code
    tmp_called_23 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csr );

    if (unlikely( tmp_called_23 == NULL ))
    {
        tmp_called_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csr );
    }

    if ( tmp_called_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271301 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto try_finally_handler_22;
    }

    tmp_call_arg_element_15 = par_b.object;

    if ( tmp_call_arg_element_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto try_finally_handler_22;
    }

    frame_function->f_lineno = 155;
    tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_15 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto try_finally_handler_22;
    }
    assert( tmp_or_3__value_1.object == NULL );
    tmp_or_3__value_1.object = tmp_assign_source_38;

    tmp_cond_value_17 = tmp_or_3__value_1.object;

    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto try_finally_handler_22;
    }
    if (tmp_cond_truth_17 == 1)
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_unary_arg_2 = tmp_or_3__value_1.object;

    Py_INCREF( tmp_unary_arg_2 );
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_unary_arg_2 = NULL;
    // Tried code
    tmp_result = tmp_or_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_3__value_1.object );
        tmp_or_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_24 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );

    if (unlikely( tmp_called_24 == NULL ))
    {
        tmp_called_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );
    }

    if ( tmp_called_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271258 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto try_finally_handler_23;
    }

    tmp_call_arg_element_16 = par_b.object;

    if ( tmp_call_arg_element_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto try_finally_handler_23;
    }

    frame_function->f_lineno = 155;
    tmp_unary_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_24, tmp_call_arg_element_16 );
    if ( tmp_unary_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto try_finally_handler_23;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_23:;
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

        goto try_finally_handler_22;
    }

    goto finally_end_20;
    finally_end_20:;
    condexpr_end_7:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_22:;
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

        goto try_finally_handler_21;
    }

    goto finally_end_21;
    finally_end_21:;
    tmp_cond_value_16 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_2 );
    Py_DECREF( tmp_unary_arg_2 );
    if ( tmp_cond_value_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto try_finally_handler_21;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_21:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_3__value_1.object );
    tmp_or_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_22 != NULL )
    {
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;

        goto try_finally_handler_14;
    }

    goto finally_end_22;
    finally_end_22:;
    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto try_finally_handler_14;
    }
    if (tmp_cond_truth_16 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_called_25 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn );

    if (unlikely( tmp_called_25 == NULL ))
    {
        tmp_called_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
    }

    if ( tmp_called_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 253704 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_17 = const_str_digest_42b22bae9f211ca1e582b02430bf6bb6;
    tmp_call_arg_element_18 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );

    if (unlikely( tmp_call_arg_element_18 == NULL ))
    {
        tmp_call_arg_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );
    }

    if ( tmp_call_arg_element_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 261477 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
        goto try_finally_handler_14;
    }

    frame_function->f_lineno = 157;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_25, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto try_finally_handler_14;
    }
    Py_DECREF( tmp_unused );
    tmp_called_26 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csc_matrix );

    if (unlikely( tmp_called_26 == NULL ))
    {
        tmp_called_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
    }

    if ( tmp_called_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263510 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 158;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_19 = par_b.object;

    if ( tmp_call_arg_element_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 158;
        goto try_finally_handler_14;
    }

    frame_function->f_lineno = 158;
    tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_26, tmp_call_arg_element_19 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto try_finally_handler_14;
    }
    if (par_b.object == NULL)
    {
        par_b.object = tmp_assign_source_39;
    }
    else
    {
        PyObject *old = par_b.object;
        par_b.object = tmp_assign_source_39;
        Py_DECREF( old );
    }
    branch_no_14:;
    tmp_source_name_31 = par_b.object;

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto try_finally_handler_14;
    }

    tmp_subscr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_shape );
    if ( tmp_subscr_target_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto try_finally_handler_14;
    }
    tmp_subscr_subscript_5 = const_int_pos_1;
    tmp_range_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_target_5 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto try_finally_handler_14;
    }
    tmp_iter_arg_3 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto try_finally_handler_14;
    }
    tmp_assign_source_40 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto try_finally_handler_14;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_40;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_41 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_41 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 160;
            goto try_finally_handler_24;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_41;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_41;
        Py_DECREF( old );
    }
    tmp_assign_source_42 = tmp_for_loop_1__iter_value.object;

    if (var_j.object == NULL)
    {
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_42 );
    }
    else
    {
        PyObject *old = var_j.object;
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_42 );
        Py_DECREF( old );
    }
    tmp_subscr_target_6 = par_b.object;

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto try_finally_handler_24;
    }

    tmp_subscr_subscript_6 = PyTuple_New( 2 );
    tmp_tuple_element_8 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_6, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_j.object;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_6, 1, tmp_tuple_element_8 );
    tmp_source_name_32 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_subscript_6 );
    if ( tmp_source_name_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto try_finally_handler_24;
    }
    tmp_called_27 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_toarray );
    Py_DECREF( tmp_source_name_32 );
    if ( tmp_called_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto try_finally_handler_24;
    }
    frame_function->f_lineno = 161;
    tmp_assign_source_43 = CALL_FUNCTION_NO_ARGS( tmp_called_27 );
    Py_DECREF( tmp_called_27 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto try_finally_handler_24;
    }
    if (var_col.object == NULL)
    {
        var_col.object = tmp_assign_source_43;
    }
    else
    {
        PyObject *old = var_col.object;
        var_col.object = tmp_assign_source_43;
        Py_DECREF( old );
    }
    tmp_called_28 = var_Afactsolve.object;

    if ( tmp_called_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271805 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_24;
    }

    tmp_called_29 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_ravel );

    if (unlikely( tmp_called_29 == NULL ))
    {
        tmp_called_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ravel );
    }

    if ( tmp_called_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57257 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto try_finally_handler_24;
    }

    tmp_call_arg_element_21 = var_col.object;

    frame_function->f_lineno = 162;
    tmp_call_arg_element_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_29, tmp_call_arg_element_21 );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto try_finally_handler_24;
    }
    frame_function->f_lineno = 162;
    tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS1( tmp_called_28, tmp_call_arg_element_20 );
    Py_DECREF( tmp_call_arg_element_20 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto try_finally_handler_24;
    }
    if (var_xj.object == NULL)
    {
        var_xj.object = tmp_assign_source_44;
    }
    else
    {
        PyObject *old = var_xj.object;
        var_xj.object = tmp_assign_source_44;
        Py_DECREF( old );
    }
    tmp_called_30 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_nonzero );

    if (unlikely( tmp_called_30 == NULL ))
    {
        tmp_called_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nonzero );
    }

    if ( tmp_called_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 165422 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 163;
        goto try_finally_handler_24;
    }

    tmp_call_arg_element_22 = var_xj.object;

    frame_function->f_lineno = 163;
    tmp_subscr_target_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_30, tmp_call_arg_element_22 );
    if ( tmp_subscr_target_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto try_finally_handler_24;
    }
    tmp_subscr_subscript_7 = const_int_0;
    tmp_assign_source_45 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    Py_DECREF( tmp_subscr_target_7 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto try_finally_handler_24;
    }
    if (var_w.object == NULL)
    {
        var_w.object = tmp_assign_source_45;
    }
    else
    {
        PyObject *old = var_w.object;
        var_w.object = tmp_assign_source_45;
        Py_DECREF( old );
    }
    tmp_source_name_33 = var_tempj.object;

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271861 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto try_finally_handler_24;
    }

    tmp_called_31 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_fill );
    if ( tmp_called_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto try_finally_handler_24;
    }
    tmp_call_arg_element_23 = var_j.object;

    frame_function->f_lineno = 164;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_31, tmp_call_arg_element_23 );
    Py_DECREF( tmp_called_31 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto try_finally_handler_24;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_3 = var_x.object;

    if ( tmp_binop_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_24;
    }

    tmp_source_name_34 = par_A.object;

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_24;
    }

    tmp_called_32 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_34 );
    if ( tmp_called_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto try_finally_handler_24;
    }
    tmp_call_pos_5 = PyTuple_New( 1 );
    tmp_tuple_element_9 = PyTuple_New( 2 );
    tmp_subscr_target_8 = var_xj.object;

    tmp_subscr_subscript_8 = var_w.object;

    tmp_tuple_element_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_tuple_element_9 );

        frame_function->f_lineno = 165;
        goto try_finally_handler_24;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_9, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = PyTuple_New( 2 );
    tmp_tuple_element_11 = var_w.object;

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_tuple_element_10, 0, tmp_tuple_element_11 );
    tmp_slice_source_1 = var_tempj.object;

    if ( tmp_slice_source_1 == NULL )
    {
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_tuple_element_9 );
        Py_DECREF( tmp_tuple_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271861 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_24;
    }

    tmp_len_arg_1 = var_w.object;

    tmp_slice_upper_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_tuple_element_9 );
        Py_DECREF( tmp_tuple_element_10 );

        frame_function->f_lineno = 165;
        goto try_finally_handler_24;
    }
    tmp_tuple_element_11 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_tuple_element_9 );
        Py_DECREF( tmp_tuple_element_10 );

        frame_function->f_lineno = 165;
        goto try_finally_handler_24;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_10, 1, tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_tuple_element_9, 1, tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_call_pos_5, 0, tmp_tuple_element_9 );
    tmp_call_kw_5 = _PyDict_NewPresized( 2 );
    tmp_source_name_35 = par_b.object;

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto try_finally_handler_24;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_shape );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_call_kw_5 );

        frame_function->f_lineno = 166;
        goto try_finally_handler_24;
    }
    tmp_dict_key_5 = const_str_plain_shape;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    tmp_source_name_36 = par_A.object;

    if ( tmp_source_name_36 == NULL )
    {
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto try_finally_handler_24;
    }

    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_dtype );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_call_kw_5 );

        frame_function->f_lineno = 166;
        goto try_finally_handler_24;
    }
    tmp_dict_key_6 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    frame_function->f_lineno = 166;
    tmp_binop_right_3 = CALL_FUNCTION( tmp_called_32, tmp_call_pos_5, tmp_call_kw_5 );
    Py_DECREF( tmp_called_32 );
    Py_DECREF( tmp_call_pos_5 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto try_finally_handler_24;
    }
    tmp_assign_source_46 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto try_finally_handler_24;
    }
    if (var_x.object == NULL)
    {
        var_x.object = tmp_assign_source_46;
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = tmp_assign_source_46;
        Py_DECREF( old );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto try_finally_handler_24;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_24:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_23 != NULL )
    {
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;

        goto try_finally_handler_14;
    }

    goto finally_end_23;
    finally_end_23:;
    branch_end_10:;
    branch_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_14:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_10 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_3__value_1.object );
    tmp_and_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_10;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_24 != NULL )
    {
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;

        goto frame_exception_exit_1;
    }

    goto finally_end_24;
    finally_end_24:;
    tmp_return_value = var_x.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
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
    if ((var_b_is_sparse.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b_is_sparse,
            var_b_is_sparse.object
        );

    }
    if ((var_b_is_vector.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b_is_vector,
            var_b_is_vector.object
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
    if ((var_b_vec.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b_vec,
            var_b_vec.object
        );

    }
    if ((var_family.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_family,
            var_family.object
        );

    }
    if ((var_umf.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_umf,
            var_umf.object
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
    if ((var_flag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_flag,
            var_flag.object
        );

    }
    if ((var_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_options,
            var_options.object
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
    if ((var_Afactsolve.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Afactsolve,
            var_Afactsolve.object
        );

    }
    if ((var_tempj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tempj,
            var_tempj.object
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
    if ((var_col.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_col,
            var_col.object
        );

    }
    if ((var_xj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_xj,
            var_xj.object
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
    if ((par_permc_spec.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_permc_spec,
            par_permc_spec.object
        );

    }
    if ((par_use_umfpack.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_use_umfpack,
            par_use_umfpack.object
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
static PyObject *fparse_function_3_spsolve_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_A = NULL;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_permc_spec = NULL;
    PyObject *_python_par_use_umfpack = NULL;
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
                PyErr_Format( PyExc_TypeError, "spsolve() keywords must be strings" );
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
            if ( found == false && const_str_plain_permc_spec == key )
            {
                assert( _python_par_permc_spec == NULL );
                _python_par_permc_spec = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_use_umfpack == key )
            {
                assert( _python_par_use_umfpack == NULL );
                _python_par_use_umfpack = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_permc_spec, key ) == 1 )
            {
                assert( _python_par_permc_spec == NULL );
                _python_par_permc_spec = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_use_umfpack, key ) == 1 )
            {
                assert( _python_par_use_umfpack == NULL );
                _python_par_use_umfpack = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "spsolve() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_A != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_A = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_A == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_A = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
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
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_permc_spec != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_permc_spec = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_permc_spec == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_permc_spec = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_use_umfpack != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_use_umfpack = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_use_umfpack == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_use_umfpack = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_A == NULL || _python_par_b == NULL || _python_par_permc_spec == NULL || _python_par_use_umfpack == NULL ))
    {
        PyObject *values[] = { _python_par_A, _python_par_b, _python_par_permc_spec, _python_par_use_umfpack };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_spsolve_of_module_scipy$sparse$linalg$dsolve$linsolve( self, _python_par_A, _python_par_b, _python_par_permc_spec, _python_par_use_umfpack );

error_exit:;

    Py_XDECREF( _python_par_A );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_permc_spec );
    Py_XDECREF( _python_par_use_umfpack );

    return NULL;
}

static PyObject *dparse_function_3_spsolve_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_3_spsolve_of_module_scipy$sparse$linalg$dsolve$linsolve( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_spsolve_of_module_scipy$sparse$linalg$dsolve$linsolve( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_splu_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject *_python_par_A, PyObject *_python_par_permc_spec, PyObject *_python_par_diag_pivot_thresh, PyObject *_python_par_drop_tol, PyObject *_python_par_relax, PyObject *_python_par_panel_size, PyObject *_python_par_options )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_A; par_A.object = _python_par_A;
    PyObjectLocalVariable par_permc_spec; par_permc_spec.object = _python_par_permc_spec;
    PyObjectLocalVariable par_diag_pivot_thresh; par_diag_pivot_thresh.object = _python_par_diag_pivot_thresh;
    PyObjectLocalVariable par_drop_tol; par_drop_tol.object = _python_par_drop_tol;
    PyObjectLocalVariable par_relax; par_relax.object = _python_par_relax;
    PyObjectLocalVariable par_panel_size; par_panel_size.object = _python_par_panel_size;
    PyObjectLocalVariable par_options; par_options.object = _python_par_options;
    PyObjectLocalVariable var_M;
    PyObjectLocalVariable var_N;
    PyObjectLocalVariable var__options;
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
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_arg_1;
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
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
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
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6afeb39a649c947537b95138395e132e, module_scipy$sparse$linalg$dsolve$linsolve );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271258 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_A.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 226;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 226;
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csc_matrix );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263510 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_A.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 227;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    if (par_A.object == NULL)
    {
        par_A.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_A.object;
        par_A.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 253704 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = const_str_digest_93fbe9be126286aedb0f5b97942dfe26;
    tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );

    if (unlikely( tmp_call_arg_element_4 == NULL ))
    {
        tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );
    }

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 261477 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 228;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_1 = par_A.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sort_indices );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 230;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_A.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asfptype );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 231;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    if (par_A.object == NULL)
    {
        par_A.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_A.object;
        par_A.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    // Tried code
    tmp_source_name_3 = par_A.object;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto try_finally_handler_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
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


        frame_function->f_lineno = 233;
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


        frame_function->f_lineno = 233;
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
    tmp_compare_left_1 = var_M.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = var_N.object;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_8dd5d9b89d8869a8b48721aef2b0d8ce;
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
    branch_no_2:;
    tmp_dict_arg_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = par_diag_pivot_thresh.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271912 ], 63, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_DiagPivotThresh;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_permc_spec.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271627 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_ColPerm;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_panel_size.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271975 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_PanelSize;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_relax.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 236780 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_Relax;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_assign_source_8 = tmp_dict_arg_1;
    assert( var__options.object == NULL );
    var__options.object = tmp_assign_source_8;

    tmp_compare_left_2 = par_options.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11639 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
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
    tmp_source_name_4 = var__options.object;

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_update );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = par_options.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11639 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 240;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain__superlu );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__superlu );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271683 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_gstrf );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 5 );
    tmp_tuple_element_1 = var_N.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_source_name_6 = par_A.object;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_nnz );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_source_name_7 = par_A.object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_data );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 2, tmp_tuple_element_1 );
    tmp_source_name_8 = par_A.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_indices );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 3, tmp_tuple_element_1 );
    tmp_source_name_9 = par_A.object;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_indptr );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 4, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_5 = Py_False;
    tmp_dict_key_5 = const_str_plain_ilu;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = var__options.object;

    tmp_dict_key_6 = const_str_plain_options;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 242;
    tmp_return_value = CALL_FUNCTION( tmp_called_7, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
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
    if ((var__options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__options,
            var__options.object
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
    if ((par_permc_spec.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_permc_spec,
            par_permc_spec.object
        );

    }
    if ((par_diag_pivot_thresh.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_diag_pivot_thresh,
            par_diag_pivot_thresh.object
        );

    }
    if ((par_drop_tol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_drop_tol,
            par_drop_tol.object
        );

    }
    if ((par_relax.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_relax,
            par_relax.object
        );

    }
    if ((par_panel_size.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_panel_size,
            par_panel_size.object
        );

    }
    if ((par_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_options,
            par_options.object
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
static PyObject *fparse_function_4_splu_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_A = NULL;
    PyObject *_python_par_permc_spec = NULL;
    PyObject *_python_par_diag_pivot_thresh = NULL;
    PyObject *_python_par_drop_tol = NULL;
    PyObject *_python_par_relax = NULL;
    PyObject *_python_par_panel_size = NULL;
    PyObject *_python_par_options = NULL;
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
                PyErr_Format( PyExc_TypeError, "splu() keywords must be strings" );
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
            if ( found == false && const_str_plain_permc_spec == key )
            {
                assert( _python_par_permc_spec == NULL );
                _python_par_permc_spec = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_diag_pivot_thresh == key )
            {
                assert( _python_par_diag_pivot_thresh == NULL );
                _python_par_diag_pivot_thresh = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_drop_tol == key )
            {
                assert( _python_par_drop_tol == NULL );
                _python_par_drop_tol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_relax == key )
            {
                assert( _python_par_relax == NULL );
                _python_par_relax = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_panel_size == key )
            {
                assert( _python_par_panel_size == NULL );
                _python_par_panel_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_options == key )
            {
                assert( _python_par_options == NULL );
                _python_par_options = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_permc_spec, key ) == 1 )
            {
                assert( _python_par_permc_spec == NULL );
                _python_par_permc_spec = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_diag_pivot_thresh, key ) == 1 )
            {
                assert( _python_par_diag_pivot_thresh == NULL );
                _python_par_diag_pivot_thresh = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_drop_tol, key ) == 1 )
            {
                assert( _python_par_drop_tol == NULL );
                _python_par_drop_tol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_relax, key ) == 1 )
            {
                assert( _python_par_relax == NULL );
                _python_par_relax = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_panel_size, key ) == 1 )
            {
                assert( _python_par_panel_size == NULL );
                _python_par_panel_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_options, key ) == 1 )
            {
                assert( _python_par_options == NULL );
                _python_par_options = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "splu() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_A != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_A = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_A == NULL )
    {
        if ( 0 + self->m_defaults_given >= 7  )
        {
            _python_par_A = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 7 ) );
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
         if (unlikely( _python_par_permc_spec != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_permc_spec = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_permc_spec == NULL )
    {
        if ( 1 + self->m_defaults_given >= 7  )
        {
            _python_par_permc_spec = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 7 ) );
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
         if (unlikely( _python_par_diag_pivot_thresh != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_diag_pivot_thresh = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_diag_pivot_thresh == NULL )
    {
        if ( 2 + self->m_defaults_given >= 7  )
        {
            _python_par_diag_pivot_thresh = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 7 ) );
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
         if (unlikely( _python_par_drop_tol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_drop_tol = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_drop_tol == NULL )
    {
        if ( 3 + self->m_defaults_given >= 7  )
        {
            _python_par_drop_tol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 7 ) );
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
         if (unlikely( _python_par_relax != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_relax = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_relax == NULL )
    {
        if ( 4 + self->m_defaults_given >= 7  )
        {
            _python_par_relax = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 7 ) );
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
         if (unlikely( _python_par_panel_size != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_panel_size = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_panel_size == NULL )
    {
        if ( 5 + self->m_defaults_given >= 7  )
        {
            _python_par_panel_size = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 7 ) );
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
         if (unlikely( _python_par_options != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_options = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_options == NULL )
    {
        if ( 6 + self->m_defaults_given >= 7  )
        {
            _python_par_options = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 7 ) );
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
    if (unlikely( _python_par_A == NULL || _python_par_permc_spec == NULL || _python_par_diag_pivot_thresh == NULL || _python_par_drop_tol == NULL || _python_par_relax == NULL || _python_par_panel_size == NULL || _python_par_options == NULL ))
    {
        PyObject *values[] = { _python_par_A, _python_par_permc_spec, _python_par_diag_pivot_thresh, _python_par_drop_tol, _python_par_relax, _python_par_panel_size, _python_par_options };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_splu_of_module_scipy$sparse$linalg$dsolve$linsolve( self, _python_par_A, _python_par_permc_spec, _python_par_diag_pivot_thresh, _python_par_drop_tol, _python_par_relax, _python_par_panel_size, _python_par_options );

error_exit:;

    Py_XDECREF( _python_par_A );
    Py_XDECREF( _python_par_permc_spec );
    Py_XDECREF( _python_par_diag_pivot_thresh );
    Py_XDECREF( _python_par_drop_tol );
    Py_XDECREF( _python_par_relax );
    Py_XDECREF( _python_par_panel_size );
    Py_XDECREF( _python_par_options );

    return NULL;
}

static PyObject *dparse_function_4_splu_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 7 )
    {
        return impl_function_4_splu_of_module_scipy$sparse$linalg$dsolve$linsolve( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_splu_of_module_scipy$sparse$linalg$dsolve$linsolve( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_spilu_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject *_python_par_A, PyObject *_python_par_drop_tol, PyObject *_python_par_fill_factor, PyObject *_python_par_drop_rule, PyObject *_python_par_permc_spec, PyObject *_python_par_diag_pivot_thresh, PyObject *_python_par_relax, PyObject *_python_par_panel_size, PyObject *_python_par_options )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_A; par_A.object = _python_par_A;
    PyObjectLocalVariable par_drop_tol; par_drop_tol.object = _python_par_drop_tol;
    PyObjectLocalVariable par_fill_factor; par_fill_factor.object = _python_par_fill_factor;
    PyObjectLocalVariable par_drop_rule; par_drop_rule.object = _python_par_drop_rule;
    PyObjectLocalVariable par_permc_spec; par_permc_spec.object = _python_par_permc_spec;
    PyObjectLocalVariable par_diag_pivot_thresh; par_diag_pivot_thresh.object = _python_par_diag_pivot_thresh;
    PyObjectLocalVariable par_relax; par_relax.object = _python_par_relax;
    PyObjectLocalVariable par_panel_size; par_panel_size.object = _python_par_panel_size;
    PyObjectLocalVariable par_options; par_options.object = _python_par_options;
    PyObjectLocalVariable var_M;
    PyObjectLocalVariable var_N;
    PyObjectLocalVariable var__options;
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
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_arg_1;
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
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
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
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_64cf90855fed1f8d3e523299449f7132, module_scipy$sparse$linalg$dsolve$linsolve );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271258 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_A.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 291;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 291;
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csc_matrix );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263510 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_A.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 292;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    if (par_A.object == NULL)
    {
        par_A.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_A.object;
        par_A.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 253704 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = const_str_digest_93fbe9be126286aedb0f5b97942dfe26;
    tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );

    if (unlikely( tmp_call_arg_element_4 == NULL ))
    {
        tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );
    }

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 261477 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 293;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_1 = par_A.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sort_indices );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 295;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_A.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asfptype );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 296;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    if (par_A.object == NULL)
    {
        par_A.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_A.object;
        par_A.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    // Tried code
    tmp_source_name_3 = par_A.object;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto try_finally_handler_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
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


        frame_function->f_lineno = 298;
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


        frame_function->f_lineno = 298;
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
    tmp_compare_left_1 = var_M.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = var_N.object;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_8dd5d9b89d8869a8b48721aef2b0d8ce;
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
    tmp_dict_arg_1 = _PyDict_NewPresized( 7 );
    tmp_dict_value_1 = par_drop_rule.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 272031 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_ILU_DropRule;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_drop_tol.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 272086 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_ILU_DropTol;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_fill_factor.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 272140 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_ILU_FillFactor;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_diag_pivot_thresh.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271912 ], 63, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_DiagPivotThresh;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_permc_spec.object;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271627 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_ColPerm;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = par_panel_size.object;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271975 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_PanelSize;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = par_relax.object;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_dict_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 236780 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = const_str_plain_Relax;
    PyDict_SetItem( tmp_dict_arg_1, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_assign_source_8 = tmp_dict_arg_1;
    assert( var__options.object == NULL );
    var__options.object = tmp_assign_source_8;

    tmp_compare_left_2 = par_options.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11639 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
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
    tmp_source_name_4 = var__options.object;

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_update );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = par_options.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11639 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 307;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain__superlu );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__superlu );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271683 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_gstrf );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 5 );
    tmp_tuple_element_1 = var_N.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_source_name_6 = par_A.object;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_nnz );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_source_name_7 = par_A.object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_data );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 2, tmp_tuple_element_1 );
    tmp_source_name_8 = par_A.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_indices );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 3, tmp_tuple_element_1 );
    tmp_source_name_9 = par_A.object;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_indptr );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 4, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_8 = Py_True;
    tmp_dict_key_8 = const_str_plain_ilu;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_value_9 = var__options.object;

    tmp_dict_key_9 = const_str_plain_options;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_9, tmp_dict_value_9 );
    frame_function->f_lineno = 309;
    tmp_return_value = CALL_FUNCTION( tmp_called_7, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
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
    if ((var__options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__options,
            var__options.object
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
    if ((par_drop_tol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_drop_tol,
            par_drop_tol.object
        );

    }
    if ((par_fill_factor.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fill_factor,
            par_fill_factor.object
        );

    }
    if ((par_drop_rule.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_drop_rule,
            par_drop_rule.object
        );

    }
    if ((par_permc_spec.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_permc_spec,
            par_permc_spec.object
        );

    }
    if ((par_diag_pivot_thresh.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_diag_pivot_thresh,
            par_diag_pivot_thresh.object
        );

    }
    if ((par_relax.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_relax,
            par_relax.object
        );

    }
    if ((par_panel_size.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_panel_size,
            par_panel_size.object
        );

    }
    if ((par_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_options,
            par_options.object
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
static PyObject *fparse_function_5_spilu_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_A = NULL;
    PyObject *_python_par_drop_tol = NULL;
    PyObject *_python_par_fill_factor = NULL;
    PyObject *_python_par_drop_rule = NULL;
    PyObject *_python_par_permc_spec = NULL;
    PyObject *_python_par_diag_pivot_thresh = NULL;
    PyObject *_python_par_relax = NULL;
    PyObject *_python_par_panel_size = NULL;
    PyObject *_python_par_options = NULL;
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
                PyErr_Format( PyExc_TypeError, "spilu() keywords must be strings" );
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
            if ( found == false && const_str_plain_drop_tol == key )
            {
                assert( _python_par_drop_tol == NULL );
                _python_par_drop_tol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_fill_factor == key )
            {
                assert( _python_par_fill_factor == NULL );
                _python_par_fill_factor = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_drop_rule == key )
            {
                assert( _python_par_drop_rule == NULL );
                _python_par_drop_rule = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_permc_spec == key )
            {
                assert( _python_par_permc_spec == NULL );
                _python_par_permc_spec = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_diag_pivot_thresh == key )
            {
                assert( _python_par_diag_pivot_thresh == NULL );
                _python_par_diag_pivot_thresh = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_relax == key )
            {
                assert( _python_par_relax == NULL );
                _python_par_relax = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_panel_size == key )
            {
                assert( _python_par_panel_size == NULL );
                _python_par_panel_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_options == key )
            {
                assert( _python_par_options == NULL );
                _python_par_options = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_drop_tol, key ) == 1 )
            {
                assert( _python_par_drop_tol == NULL );
                _python_par_drop_tol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_fill_factor, key ) == 1 )
            {
                assert( _python_par_fill_factor == NULL );
                _python_par_fill_factor = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_drop_rule, key ) == 1 )
            {
                assert( _python_par_drop_rule == NULL );
                _python_par_drop_rule = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_permc_spec, key ) == 1 )
            {
                assert( _python_par_permc_spec == NULL );
                _python_par_permc_spec = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_diag_pivot_thresh, key ) == 1 )
            {
                assert( _python_par_diag_pivot_thresh == NULL );
                _python_par_diag_pivot_thresh = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_relax, key ) == 1 )
            {
                assert( _python_par_relax == NULL );
                _python_par_relax = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_panel_size, key ) == 1 )
            {
                assert( _python_par_panel_size == NULL );
                _python_par_panel_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_options, key ) == 1 )
            {
                assert( _python_par_options == NULL );
                _python_par_options = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "spilu() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_A != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_A = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_A == NULL )
    {
        if ( 0 + self->m_defaults_given >= 9  )
        {
            _python_par_A = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 9 ) );
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
         if (unlikely( _python_par_drop_tol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_drop_tol = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_drop_tol == NULL )
    {
        if ( 1 + self->m_defaults_given >= 9  )
        {
            _python_par_drop_tol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 9 ) );
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
         if (unlikely( _python_par_fill_factor != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_fill_factor = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_fill_factor == NULL )
    {
        if ( 2 + self->m_defaults_given >= 9  )
        {
            _python_par_fill_factor = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 9 ) );
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
         if (unlikely( _python_par_drop_rule != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_drop_rule = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_drop_rule == NULL )
    {
        if ( 3 + self->m_defaults_given >= 9  )
        {
            _python_par_drop_rule = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 9 ) );
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
         if (unlikely( _python_par_permc_spec != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_permc_spec = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_permc_spec == NULL )
    {
        if ( 4 + self->m_defaults_given >= 9  )
        {
            _python_par_permc_spec = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 9 ) );
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
         if (unlikely( _python_par_diag_pivot_thresh != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_diag_pivot_thresh = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_diag_pivot_thresh == NULL )
    {
        if ( 5 + self->m_defaults_given >= 9  )
        {
            _python_par_diag_pivot_thresh = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 9 ) );
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
         if (unlikely( _python_par_relax != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_relax = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_relax == NULL )
    {
        if ( 6 + self->m_defaults_given >= 9  )
        {
            _python_par_relax = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 9 ) );
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
         if (unlikely( _python_par_panel_size != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_panel_size = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_panel_size == NULL )
    {
        if ( 7 + self->m_defaults_given >= 9  )
        {
            _python_par_panel_size = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 9 ) );
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
         if (unlikely( _python_par_options != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_options = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_options == NULL )
    {
        if ( 8 + self->m_defaults_given >= 9  )
        {
            _python_par_options = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 9 ) );
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
    if (unlikely( _python_par_A == NULL || _python_par_drop_tol == NULL || _python_par_fill_factor == NULL || _python_par_drop_rule == NULL || _python_par_permc_spec == NULL || _python_par_diag_pivot_thresh == NULL || _python_par_relax == NULL || _python_par_panel_size == NULL || _python_par_options == NULL ))
    {
        PyObject *values[] = { _python_par_A, _python_par_drop_tol, _python_par_fill_factor, _python_par_drop_rule, _python_par_permc_spec, _python_par_diag_pivot_thresh, _python_par_relax, _python_par_panel_size, _python_par_options };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_spilu_of_module_scipy$sparse$linalg$dsolve$linsolve( self, _python_par_A, _python_par_drop_tol, _python_par_fill_factor, _python_par_drop_rule, _python_par_permc_spec, _python_par_diag_pivot_thresh, _python_par_relax, _python_par_panel_size, _python_par_options );

error_exit:;

    Py_XDECREF( _python_par_A );
    Py_XDECREF( _python_par_drop_tol );
    Py_XDECREF( _python_par_fill_factor );
    Py_XDECREF( _python_par_drop_rule );
    Py_XDECREF( _python_par_permc_spec );
    Py_XDECREF( _python_par_diag_pivot_thresh );
    Py_XDECREF( _python_par_relax );
    Py_XDECREF( _python_par_panel_size );
    Py_XDECREF( _python_par_options );

    return NULL;
}

static PyObject *dparse_function_5_spilu_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 9 )
    {
        return impl_function_5_spilu_of_module_scipy$sparse$linalg$dsolve$linsolve( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_spilu_of_module_scipy$sparse$linalg$dsolve$linsolve( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject *_python_par_A )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable par_A; par_A.storage->object = _python_par_A;
    PyObjectLocalVariable var_family;
    PyObjectSharedLocalVariable var_umf;
    PyObjectLocalVariable var_solve;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
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
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a38ce2490c334e53ee2151903f514c3b, module_scipy$sparse$linalg$dsolve$linsolve );
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
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_useUmfpack );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_useUmfpack );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271401 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 340;
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
    tmp_cond_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_noScikit );

    if (unlikely( tmp_cond_value_2 == NULL ))
    {
        tmp_cond_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_noScikit );
    }

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271554 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
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
    tmp_make_exception_arg_1 = const_str_digest_005066114b2569e01ad709b1f427c16c;
    frame_function->f_lineno = 342;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 342;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271258 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_A.storage->object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 344;
    tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csc_matrix );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263510 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_A.storage->object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 345;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }
    if (par_A.storage->object == NULL)
    {
        par_A.storage->object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_A.storage->object;
        par_A.storage->object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 253704 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = const_str_digest_93fbe9be126286aedb0f5b97942dfe26;
    tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );

    if (unlikely( tmp_call_arg_element_4 == NULL ))
    {
        tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning );
    }

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 261477 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 346;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_source_name_1 = par_A.storage->object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 348;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sort_indices );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 348;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 348;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 348;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_A.storage->object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asfptype );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 349;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }
    if (par_A.storage->object == NULL)
    {
        par_A.storage->object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_A.storage->object;
        par_A.storage->object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    tmp_source_name_4 = par_A.storage->object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_char );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_dD;
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_6050cb865cf8f0753b724ea3fb370df6;
    frame_function->f_lineno = 352;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 352;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 352;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_assign_source_3 = PyDict_Copy( const_dict_b2bab5df1959da28c3495e7f1fe7bb0a );
    assert( var_family.object == NULL );
    var_family.object = tmp_assign_source_3;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_umfpack );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umfpack );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271591 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_UmfpackContext );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_1 = var_family.object;

    tmp_source_name_7 = par_A.storage->object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dtype );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_char );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_subscr_subscript_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_subscript_1 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 356;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    if (var_umf.storage->object == NULL)
    {
        var_umf.storage->object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = var_umf.storage->object;
        var_umf.storage->object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_source_name_8 = var_umf.storage->object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 272197 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 359;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_numeric );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 359;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = par_A.storage->object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 359;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 359;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 359;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_5 = MAKE_FUNCTION_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( par_A, var_umf );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }
    assert( var_solve.object == NULL );
    var_solve.object = tmp_assign_source_5;

    tmp_return_value = var_solve.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_splu );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_splu );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 272246 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 366;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = par_A.storage->object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 366;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 366;
    tmp_source_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_7 );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 366;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_solve );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 366;
        goto frame_exception_exit_1;
    }
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
    if ((var_family.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_family,
            var_family.object
        );

    }
    if ((var_umf.storage != NULL && var_umf.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_umf,
            var_umf.storage->object
        );

    }
    if ((var_solve.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_solve,
            var_solve.object
        );

    }
    if ((par_A.storage != NULL && par_A.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_A,
            par_A.storage->object
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
static PyObject *fparse_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_A = NULL;
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
                PyErr_Format( PyExc_TypeError, "factorized() keywords must be strings" );
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

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_A, key ) == 1 )
            {
                assert( _python_par_A == NULL );
                _python_par_A = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "factorized() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_A != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_A = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_A == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_A = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_A == NULL ))
    {
        PyObject *values[] = { _python_par_A };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( self, _python_par_A );

error_exit:;

    Py_XDECREF( _python_par_A );

    return NULL;
}

static PyObject *dparse_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject *_python_par_b )
{
    // The context of the function.
    struct _context_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve_t *_python_context = (struct _context_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5e8180867f8dabc80cfa45fcba09c4ad, module_scipy$sparse$linalg$dsolve$linsolve );
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
    tmp_source_name_1 = _python_context->closure_umf.storage->object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 272197 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_solve );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 3 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_umfpack );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umfpack );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271591 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_UMFPACK_A );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = _python_context->closure_A.storage->object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_b.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 2, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_d651afcac12196dc5a0b74e25d976a33 );
    frame_function->f_lineno = 362;
    tmp_return_value = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
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
    if ((_python_context->closure_umf.storage != NULL && _python_context->closure_umf.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_umf,
            _python_context->closure_umf.storage->object
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
    if ((_python_context->closure_A.storage != NULL && _python_context->closure_A.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_A,
            _python_context->closure_A.storage->object
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
static PyObject *fparse_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "solve() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_b == key )
            {
                assert( _python_par_b == NULL );
                _python_par_b = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
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
         if (unlikely( _python_par_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_b = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_b == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_b == NULL ))
    {
        PyObject *values[] = { _python_par_b };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( self, _python_par_b );

error_exit:;

    Py_XDECREF( _python_par_b );

    return NULL;
}

static PyObject *dparse_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve( PyObjectSharedLocalVariable &closure_A, PyObjectSharedLocalVariable &closure_umf )
{
    struct _context_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve_t *_python_context = new _context_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve_t;

    // Copy the parameter default values and closure values over.
    _python_context->closure_A.shareWith( closure_A );
    _python_context->closure_umf.shareWith( closure_umf );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve,
        dparse_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_plain_solve,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2c98747d4a742685bfec7711ed8c3289,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        Py_None,
        _python_context,
        _context_function_1_solve_of_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_use_solver_of_module_scipy$sparse$linalg$dsolve$linsolve(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_use_solver_of_module_scipy$sparse$linalg$dsolve$linsolve,
        dparse_function_2_use_solver_of_module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_plain_use_solver,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7d31b9651a1d524c48fedb6d185c5045,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_digest_c4f119b62d6a587ef3f2ec467eac3f36
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_spsolve_of_module_scipy$sparse$linalg$dsolve$linsolve( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_spsolve_of_module_scipy$sparse$linalg$dsolve$linsolve,
        dparse_function_3_spsolve_of_module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_plain_spsolve,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0d6a47e27405ab5ccf5645ae63132b71,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_digest_4ce94f9d635edbee259aa2f6c09955c3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_splu_of_module_scipy$sparse$linalg$dsolve$linsolve( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_splu_of_module_scipy$sparse$linalg$dsolve$linsolve,
        dparse_function_4_splu_of_module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_plain_splu,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_79a2827d032fe24fffea320225049e02,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_digest_a6c8cfdc3c6d440500a08cecf9f1488a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_spilu_of_module_scipy$sparse$linalg$dsolve$linsolve( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_spilu_of_module_scipy$sparse$linalg$dsolve$linsolve,
        dparse_function_5_spilu_of_module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_plain_spilu,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_df48376a7178e44357b73250a3b77fb6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_digest_e1dc8c7f68734af177ed151269cbbbc2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve,
        dparse_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_plain_factorized,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0142de1ab456dda068490f08688be639,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$dsolve$linsolve,
        const_str_digest_35824f584ff27b7d515925985d7fad10
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$linalg$dsolve$linsolve =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.linalg.dsolve.linsolve",   /* m_name */
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

MOD_INIT_DECL( scipy$sparse$linalg$dsolve$linsolve )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$linalg$dsolve$linsolve );
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

    // puts( "in initscipy$sparse$linalg$dsolve$linsolve" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$linalg$dsolve$linsolve = Py_InitModule4(
        "scipy.sparse.linalg.dsolve.linsolve",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$sparse$linalg$dsolve$linsolve = PyModule_Create( &mdef_scipy$sparse$linalg$dsolve$linsolve );
#endif

    moduledict_scipy$sparse$linalg$dsolve$linsolve = (PyDictObject *)((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;

    assertObject( module_scipy$sparse$linalg$dsolve$linsolve );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d2e7f91854a98c45bf91b7e12fcaa078, module_scipy$sparse$linalg$dsolve$linsolve );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$sparse$linalg$dsolve$linsolve );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
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
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unary_arg_1;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_f9d1ca7872ade309e30f28e2c1843f0c;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_fd2cff43c25b740f260eecbd7edc6655, module_scipy$sparse$linalg$dsolve$linsolve );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_warn_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_warn );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_warn, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    frame_module->f_lineno = 5;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_6, tmp_import_globals_6, const_tuple_67ac047c53d359c5175fc5b4ab49bf39_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_asarray );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_7, tmp_import_globals_7, const_tuple_67ac047c53d359c5175fc5b4ab49bf39_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_empty );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_empty, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_8, tmp_import_globals_8, const_tuple_67ac047c53d359c5175fc5b4ab49bf39_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ravel );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_ravel, tmp_assign_source_10 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_9, tmp_import_globals_9, const_tuple_67ac047c53d359c5175fc5b4ab49bf39_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_nonzero );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_nonzero, tmp_assign_source_11 );
    tmp_import_globals_10 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_bba312255c96f4c843b12f3f8e172622, tmp_import_globals_10, tmp_import_globals_10, const_tuple_3fdaa2f9935e480d8ede7427257c96bb_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_isspmatrix_csc );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csc, tmp_assign_source_12 );
    tmp_import_globals_11 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_bba312255c96f4c843b12f3f8e172622, tmp_import_globals_11, tmp_import_globals_11, const_tuple_3fdaa2f9935e480d8ede7427257c96bb_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_isspmatrix_csr );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix_csr, tmp_assign_source_13 );
    tmp_import_globals_12 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_bba312255c96f4c843b12f3f8e172622, tmp_import_globals_12, tmp_import_globals_12, const_tuple_3fdaa2f9935e480d8ede7427257c96bb_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_isspmatrix );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_isspmatrix, tmp_assign_source_14 );
    tmp_import_globals_13 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_bba312255c96f4c843b12f3f8e172622, tmp_import_globals_13, tmp_import_globals_13, const_tuple_3fdaa2f9935e480d8ede7427257c96bb_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_SparseEfficiencyWarning );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_SparseEfficiencyWarning, tmp_assign_source_15 );
    tmp_import_globals_14 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_bba312255c96f4c843b12f3f8e172622, tmp_import_globals_14, tmp_import_globals_14, const_tuple_3fdaa2f9935e480d8ede7427257c96bb_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_csc_matrix );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_csc_matrix, tmp_assign_source_16 );
    tmp_import_globals_15 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_empty, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain__superlu_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain__superlu );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain__superlu, tmp_assign_source_17 );
    tmp_assign_source_18 = Py_False;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_noScikit, tmp_assign_source_18 );
    // Tried block of try/except
    tmp_import_globals_16 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$linsolve)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_digest_c8166d672f1e7b6b6a8dec98c2967077, tmp_import_globals_16, tmp_import_globals_16, Py_None, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto try_except_handler_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_umfpack );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_umfpack, tmp_assign_source_19 );
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
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
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
    tmp_assign_source_20 = Py_True;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_noScikit, tmp_assign_source_20 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    try_except_end_1:;
    tmp_unary_arg_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_noScikit );

    if (unlikely( tmp_unary_arg_1 == NULL ))
    {
        tmp_unary_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_noScikit );
    }

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 271228 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_21 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_useUmfpack, tmp_assign_source_21 );
    tmp_assign_source_22 = LIST_COPY( const_list_0d47a033b5e91dbe67f914f4e802cf3d_list );
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_22 );
    // Tried code
    tmp_assign_source_23 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_UserWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 97418 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 24;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_23, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_23;

    tmp_assign_source_24 = impl_class_1_MatrixRankWarning_of_module_scipy$sparse$linalg$dsolve$linsolve(  );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_24;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
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
    tmp_assign_source_25 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_25 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_25;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_MatrixRankWarning;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 24;
    tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_26;

    tmp_assign_source_27 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_MatrixRankWarning, tmp_assign_source_27 );
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
    tmp_assign_source_28 = MAKE_FUNCTION_function_2_use_solver_of_module_scipy$sparse$linalg$dsolve$linsolve(  );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_28 );

        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_use_solver, tmp_assign_source_28 );
    tmp_defaults_1 = const_tuple_none_true_tuple;
    tmp_assign_source_29 = MAKE_FUNCTION_function_3_spsolve_of_module_scipy$sparse$linalg$dsolve$linsolve( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_29 );

        frame_module->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_spsolve, tmp_assign_source_29 );
    tmp_defaults_2 = PyTuple_New( 6 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 3, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 4, tmp_tuple_element_2 );
    tmp_tuple_element_2 = PyDict_New();
    PyTuple_SET_ITEM( tmp_defaults_2, 5, tmp_tuple_element_2 );
    tmp_assign_source_30 = MAKE_FUNCTION_function_4_splu_of_module_scipy$sparse$linalg$dsolve$linsolve( tmp_defaults_2 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_30 );

        frame_module->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_splu, tmp_assign_source_30 );
    tmp_defaults_3 = const_tuple_none_none_none_none_none_none_none_none_tuple;
    tmp_assign_source_31 = MAKE_FUNCTION_function_5_spilu_of_module_scipy$sparse$linalg$dsolve$linsolve( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_31 );

        frame_module->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_spilu, tmp_assign_source_31 );
    tmp_assign_source_32 = MAKE_FUNCTION_function_6_factorized_of_module_scipy$sparse$linalg$dsolve$linsolve(  );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        frame_module->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$linsolve, (Nuitka_StringObject *)const_str_plain_factorized, tmp_assign_source_32 );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$linalg$dsolve$linsolve );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
